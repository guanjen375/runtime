"""
Deploy Pre-Trained Pre-Quantized TensorFlow Lite MobileNet V2
=============================================================
By Kuen-Wey Lin<kwlin@itri.org.tw>

The following two packages are required
pip3 install tensorflow
pip3 install tflite
Version 2.3.0 is tested
"""

######################################################################
# Set environment variables
# -------------------------

import tvm
import ssl
from tvm.contrib import cc

target = 'c'
target_host = 'c'
ctx = tvm.cpu(0)

model_path = './mobilenetv2_quantized_v2_224_100.tflite'
input_name = 'input'
data_type = 'uint8' # input's data type
path = './files/'
img_name = './001.jpg'

######################################################################
# Set input size
# --------------

batch_size = 1
num_class = 1000
image_dimention = 3
image_shape = (224, 224)
data_shape = (batch_size,) + image_shape + (image_dimention,)
out_shape = (batch_size, num_class)

######################################################################
# Load a TFLite model
# -------------------

import os
tflite_model_file = os.path.join(model_path)
tflite_model_buf = open(tflite_model_file, "rb").read()

# Get TFLite model from buffer
try:
    import tflite
    tflite_model = tflite.Model.GetRootAsModel(tflite_model_buf, 0)
except AttributeError:
    import tflite.Model
    tflite_model = tflite.Model.Model.GetRootAsModel(tflite_model_buf, 0)

######################################################################
# Convert the TFLite model into Relay IR
# --------------------------------------

import tvm.relay as relay
dtype_dict = {input_name: data_type}
shape_dict = {input_name: data_shape}

mod, params = relay.frontend.from_tflite(tflite_model,
                                         shape_dict=shape_dict,
                                         dtype_dict=dtype_dict)

######################################################################
# Compile the Relay module
# ------------------------

with tvm.transform.PassContext(opt_level=3, config={"tir.disable_vectorize":True}):
    graph, lib, params = relay.build(mod, target=target, target_host=target_host, params=params)

######################################################################
# Generate files for runtime
# ------------------------------
lib.print_file()
lib.export_library(path+'arm_lib.so',cc.cross_compiler('aarch64-linux-gnu-g++'))

print("Printing lib to lib.so...")
lib.export_library(path+'lib.so')

print("Printing host code to host_code.cc...")
with open(path+'host_code.cc', 'w') as f:
    print(lib.get_source(), file=f)

print("Printing binary parameters to binary_params.bin...")
with open(path+'binary_params.bin', 'wb') as writer:
    writer.write(relay.save_param_dict(params))
    writer.close()

print("Printing graph to graph.json...")
with open(path+'graph.json', 'w') as f:
    print(graph, file=f)

######################################################################
# Generate Raw Input from Image
# -----------------------------

from PIL import Image
import numpy as np

# load image
image_data = Image.open(img_name).resize(image_shape).convert('RGB')
image_data = np.array(image_data).astype(data_type)
image_data = np.reshape(image_data, (batch_size,) + (image_dimention,)+ image_shape)

# get raw input
flatten_image_data = image_data.flatten()
flatten_image_data = np.asarray(flatten_image_data).astype('float32')
input = open(path+'input.bin','wb')
input.write(flatten_image_data)
input.close()

