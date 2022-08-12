#include <dmlc/json.h>
#include <algorithm>
#include <tvm/runtime/registry.h>
#include <tvm/runtime/device_api.h>
// reading a text file
#include <dmlc/io.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <chrono>
//ADD by River 2020.03.06 for input image
#include <string>
using namespace std;

DLTensor* set_input_tensor(DLTensor *input,float *data)
{
    int ndim=input->ndim;
    int64_t shape[ndim];
    int arr_size=1;
    for(int i=0;i<ndim;i++)
    {
        shape[i]=input->shape[i];
        arr_size *= shape[i];
    }
    int bits=input->dtype.bits;
    int type=input->dtype.code;
    int lanes=input->dtype.lanes;
    int device_type=kDLCPU;
    int device_id=0;
    DLTensor *tmp;
    TVMArrayAlloc(shape,ndim,type,bits,lanes,device_type,device_id,&tmp);
    switch(type)
    {
        case kDLInt:
			{
                int8_t data_int[arr_size];
			    for(int i=0;i<arr_size;i++)
                    data_int[i]=(int8_t)data[i];
                TVMArrayCopyFromBytes(tmp, data_int, arr_size);
                break;
			}
        case kDLUInt:
			{
			    uint8_t data_uint[arr_size];	
			    for(int i=0;i<arr_size;i++)
                    data_uint[i]=(uint8_t)data[i];
                TVMArrayCopyFromBytes(tmp, data_uint, arr_size);
                break;
			}
        case kDLFloat:
                TVMArrayCopyFromBytes(tmp, data, arr_size*4);
	    break;
    }
    return tmp;
}

void print_node(DLTensor *output)
{
    int type=output->dtype.code;
    int bits=output->dtype.bits;
    int arr_size=1;
    int ndim=output->ndim;
    for(int i=0;i<ndim;i++)
        arr_size *= output->shape[i];
    switch(bits)
    {   
        case 8:
            switch(type)
            {
                case kDLUInt:
                    for(int i=1;i<=arr_size;i++)
                        printf("%d:%u\n",i,((uint8_t *)(output->data))[i-1]);
                    break;
                case kDLInt:
                    for(int i=1;i<=arr_size;i++)
                        printf("%d:%d\n",i,((int8_t *)(output->data))[i-1]);
                    break;
            }
			break;
        case 32:
            switch(type)
            {
                case kDLInt:
                    for(int i=1;i<=arr_size;i++)
                        printf("%d:%d\n",i,((int32_t *)(output->data))[i-1]);
                    break;
                case kDLFloat:
                    for(int i=0;i<arr_size;i++)
                        printf("%f\n",((float *)(output->data))[i]);
                    break;
            }
			break;
        case 64:
            for(int i=1;i<=arr_size;i++)
                printf("%d:%lld\n",i,((int64_t *)(output->data))[i-1]);
            break;
    }
}



