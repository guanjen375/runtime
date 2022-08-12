// tvm target: c -keys=cpu -link-params=0
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_T_subtract = (((TVMValue*)args)[2].v_handle);
  int32_t arg_T_subtract_code = arg_type_ids[2];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* T_subtract = (((DLTensor*)arg_T_subtract)[0].data);
  void* arg_T_subtract_shape = (((DLTensor*)arg_T_subtract)[0].shape);
  void* arg_T_subtract_strides = (((DLTensor*)arg_T_subtract)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_T_subtract_strides == NULL)) {
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 224; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 224; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused * 672) + (ax2 * 3)) + ax3_inner);
        ((int16_t*)T_subtract)[cse_var_1] = (((int16_t)((uint8_t*)placeholder)[cse_var_1]) - ((int16_t*)placeholder1)[0]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_1(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_T_subtract = (((TVMValue*)args)[2].v_handle);
  int32_t arg_T_subtract_code = arg_type_ids[2];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* T_subtract = (((DLTensor*)arg_T_subtract)[0].data);
  void* arg_T_subtract_shape = (((DLTensor*)arg_T_subtract)[0].shape);
  void* arg_T_subtract_strides = (((DLTensor*)arg_T_subtract)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_T_subtract_strides == NULL)) {
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 56; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 56; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 2) + (ax3_inner >> 3)) < 3) {
            int32_t cse_var_1 = ((((ax0_ax1_fused * 1344) + (ax2 * 24)) + (ax3_outer * 16)) + ax3_inner);
            ((int16_t*)T_subtract)[cse_var_1] = (((int16_t)((uint8_t*)placeholder)[cse_var_1]) - ((int16_t*)placeholder1)[0]);
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_2(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_T_subtract = (((TVMValue*)args)[2].v_handle);
  int32_t arg_T_subtract_code = arg_type_ids[2];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* T_subtract = (((DLTensor*)arg_T_subtract)[0].data);
  void* arg_T_subtract_shape = (((DLTensor*)arg_T_subtract)[0].shape);
  void* arg_T_subtract_strides = (((DLTensor*)arg_T_subtract)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_T_subtract_strides == NULL)) {
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 28; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_1 = ((((ax0_ax1_fused * 896) + (ax2 * 32)) + (ax3_outer * 16)) + ax3_inner);
          ((int16_t*)T_subtract)[cse_var_1] = (((int16_t)((uint8_t*)placeholder)[cse_var_1]) - ((int16_t*)placeholder1)[0]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_3(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_T_subtract = (((TVMValue*)args)[2].v_handle);
  int32_t arg_T_subtract_code = arg_type_ids[2];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* T_subtract = (((DLTensor*)arg_T_subtract)[0].data);
  void* arg_T_subtract_shape = (((DLTensor*)arg_T_subtract)[0].shape);
  void* arg_T_subtract_strides = (((DLTensor*)arg_T_subtract)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_T_subtract_strides == NULL)) {
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 14; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_1 = ((((ax0_ax1_fused * 896) + (ax2 * 64)) + (ax3_outer * 16)) + ax3_inner);
          ((int16_t*)T_subtract)[cse_var_1] = (((int16_t)((uint8_t*)placeholder)[cse_var_1]) - ((int16_t*)placeholder1)[0]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_4(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_T_subtract = (((TVMValue*)args)[2].v_handle);
  int32_t arg_T_subtract_code = arg_type_ids[2];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* T_subtract = (((DLTensor*)arg_T_subtract)[0].data);
  void* arg_T_subtract_shape = (((DLTensor*)arg_T_subtract)[0].shape);
  void* arg_T_subtract_strides = (((DLTensor*)arg_T_subtract)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_T_subtract_strides == NULL)) {
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 14; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 6; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_1 = ((((ax0_ax1_fused * 1344) + (ax2 * 96)) + (ax3_outer * 16)) + ax3_inner);
          ((int16_t*)T_subtract)[cse_var_1] = (((int16_t)((uint8_t*)placeholder)[cse_var_1]) - ((int16_t*)placeholder1)[0]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_5(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_T_subtract = (((TVMValue*)args)[2].v_handle);
  int32_t arg_T_subtract_code = arg_type_ids[2];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* T_subtract = (((DLTensor*)arg_T_subtract)[0].data);
  void* arg_T_subtract_shape = (((DLTensor*)arg_T_subtract)[0].shape);
  void* arg_T_subtract_strides = (((DLTensor*)arg_T_subtract)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_T_subtract_strides == NULL)) {
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 7; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_1 = ((((ax0_ax1_fused * 1120) + (ax2 * 160)) + (ax3_outer * 16)) + ax3_inner);
          ((int16_t*)T_subtract)[cse_var_1] = (((int16_t)((uint8_t*)placeholder)[cse_var_1]) - ((int16_t*)placeholder1)[0]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_avg_pool2d_cast(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_T_cast = (((TVMValue*)args)[1].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[1];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* tensor = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)5120, 0, 32);
  if (tensor == NULL) {
    return -1;
  }
  for (int32_t ax3_outer_init = 0; ax3_outer_init < 20; ++ax3_outer_init) {
    for (int32_t ax3_inner_init = 0; ax3_inner_init < 64; ++ax3_inner_init) {
      ((int32_t*)tensor)[((ax3_outer_init * 64) + ax3_inner_init)] = 0;
    }
  }
  for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 49; ++rv0_rv1_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 20; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t cse_var_1 = (cse_var_2 + ax3_inner);
        ((int32_t*)tensor)[cse_var_1] = (((int32_t*)tensor)[cse_var_1] + ((int32_t*)placeholder)[(((rv0_rv1_fused * 1280) + cse_var_2) + ax3_inner)]);
      }
    }
  }
  for (int32_t ax3 = 0; ax3 < 1280; ++ax3) {
    ((int16_t*)T_cast)[ax3] = ((int16_t)(((int32_t*)tensor)[ax3] / 49));
  }
  if (TVMBackendFreeWorkspace(1, dev_id, tensor) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_cast(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_placeholder3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg_placeholder_code3 = arg_type_ids[3];
  void* arg_T_cast = (((TVMValue*)args)[4].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[4];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg_placeholder3)[0].data);
  void* arg_placeholder_shape3 = (((DLTensor*)arg_placeholder3)[0].shape);
  void* arg_placeholder_strides3 = (((DLTensor*)arg_placeholder3)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)602112, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 56; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 56; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 5376) + (i2 * 96)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3136; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 96; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 96) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 24) + ax3)])));
      }
      int32_t _1 = ((int32_t*)placeholder3)[0] + ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)2064602928) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31))));
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      ((uint8_t*)T_cast)[((ax0_ax1_fused_ax2_fused * 24) + ax3)] = ((uint8_t)((_2) > (0) ? (_2) : (0)));
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_cast_1(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_placeholder3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg_placeholder_code3 = arg_type_ids[3];
  void* arg_T_cast = (((TVMValue*)args)[4].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[4];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg_placeholder3)[0].data);
  void* arg_placeholder_shape3 = (((DLTensor*)arg_placeholder3)[0].shape);
  void* arg_placeholder_strides3 = (((DLTensor*)arg_placeholder3)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)225792, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 28; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 28; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 4032) + (i2 * 144)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 784; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 144; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 144) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 32) + ax3)])));
      }
      int32_t _1 = ((int32_t*)placeholder3)[0] + ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1930718110) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31))));
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      ((uint8_t*)T_cast)[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = ((uint8_t)((_2) > (0) ? (_2) : (0)));
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_cast_2(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_placeholder3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg_placeholder_code3 = arg_type_ids[3];
  void* arg_T_cast = (((TVMValue*)args)[4].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[4];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg_placeholder3)[0].data);
  void* arg_placeholder_shape3 = (((DLTensor*)arg_placeholder3)[0].shape);
  void* arg_placeholder_strides3 = (((DLTensor*)arg_placeholder3)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)75264, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 2688) + (i2 * 192)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ff = 0; ff < 64; ++ff) {
      conv2d_nhwc[ff] = 0;
      for (int32_t rc = 0; rc < 192; ++rc) {
        conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 192) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 64) + ff)])));
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t _1 = ((int32_t*)placeholder3)[0] + ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[ax3_inner])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[ax3_inner]))) * (int64_t)1952414182) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31))));
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      ((uint8_t*)T_cast)[((ax0_ax1_fused_ax2_fused * 64) + ax3_inner)] = ((uint8_t)((_2) > (0) ? (_2) : (0)));
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_cast_3(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_placeholder3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg_placeholder_code3 = arg_type_ids[3];
  void* arg_T_cast = (((TVMValue*)args)[4].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[4];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg_placeholder3)[0].data);
  void* arg_placeholder_shape3 = (((DLTensor*)arg_placeholder3)[0].shape);
  void* arg_placeholder_strides3 = (((DLTensor*)arg_placeholder3)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)150528, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 384; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 5376) + (i2 * 384)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 384; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 384) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 96) + ax3)])));
      }
      int32_t _1 = ((int32_t*)placeholder3)[0] + ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1094810127) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31))));
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      ((uint8_t*)T_cast)[((ax0_ax1_fused_ax2_fused * 96) + ax3)] = ((uint8_t)((_2) > (0) ? (_2) : (0)));
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_cast_4(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_placeholder3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg_placeholder_code3 = arg_type_ids[3];
  void* arg_T_cast = (((TVMValue*)args)[4].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[4];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg_placeholder3)[0].data);
  void* arg_placeholder_shape3 = (((DLTensor*)arg_placeholder3)[0].shape);
  void* arg_placeholder_strides3 = (((DLTensor*)arg_placeholder3)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)56448, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 576; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 4032) + (i2 * 576)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 160; ++ax3) {
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 576; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 576) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 160) + ax3)])));
      }
      int32_t _1 = ((int32_t*)placeholder3)[0] + ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1808691269) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31))));
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      ((uint8_t*)T_cast)[((ax0_ax1_fused_ax2_fused * 160) + ax3)] = ((uint8_t)((_2) > (0) ? (_2) : (0)));
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_cast_5(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)2560, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  int32_t conv2d_nhwc[1];
  for (int32_t i3 = 0; i3 < 1280; ++i3) {
    ((int16_t*)pad_temp)[i3] = ((int16_t*)placeholder)[i3];
  }
  for (int32_t ax3 = 0; ax3 < 1001; ++ax3) {
    conv2d_nhwc[0] = 0;
    for (int32_t rc = 0; rc < 1280; ++rc) {
      conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp)[rc]) * ((int32_t)((int16_t*)placeholder1)[((rc * 1001) + ax3)])));
    }
    int32_t _1 = ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1147054710) + ((int64_t)1 << ((int64_t)((10 + 31) - 1)))) >> ((int64_t)(10 + 31)))) + 72;
    int32_t _2 = (_1) < (255) ? (_1) : (255);
    ((uint8_t*)T_cast)[ax3] = ((uint8_t)((_2) > (0) ? (_2) : (0)));
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_cast_subtract(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_placeholder3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg_placeholder_code3 = arg_type_ids[3];
  void* arg_placeholder4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg_placeholder_code4 = arg_type_ids[4];
  void* arg_T_subtract = (((TVMValue*)args)[5].v_handle);
  int32_t arg_T_subtract_code = arg_type_ids[5];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg_placeholder3)[0].data);
  void* arg_placeholder_shape3 = (((DLTensor*)arg_placeholder3)[0].shape);
  void* arg_placeholder_strides3 = (((DLTensor*)arg_placeholder3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg_placeholder4)[0].data);
  void* arg_placeholder_shape4 = (((DLTensor*)arg_placeholder4)[0].shape);
  void* arg_placeholder_strides4 = (((DLTensor*)arg_placeholder4)[0].strides);
  void* T_subtract = (((DLTensor*)arg_T_subtract)[0].data);
  void* arg_T_subtract_shape = (((DLTensor*)arg_T_subtract)[0].shape);
  void* arg_T_subtract_strides = (((DLTensor*)arg_T_subtract)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_subtract_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)802816, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 112; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 112; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 3584) + (i2 * 32)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12544; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 32; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 16) + ax3)])));
      }
      int32_t _1 = ((int32_t*)placeholder3)[0] + ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1361623855) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31))));
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      ((int16_t*)T_subtract)[((ax0_ax1_fused_ax2_fused * 16) + ax3)] = (((int16_t)((_2) > (0) ? (_2) : (0))) - ((int16_t*)placeholder4)[0]);
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_cast_subtract_1(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_placeholder3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg_placeholder_code3 = arg_type_ids[3];
  void* arg_T_subtract = (((TVMValue*)args)[4].v_handle);
  int32_t arg_T_subtract_code = arg_type_ids[4];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg_placeholder3)[0].data);
  void* arg_placeholder_shape3 = (((DLTensor*)arg_placeholder3)[0].shape);
  void* arg_placeholder_strides3 = (((DLTensor*)arg_placeholder3)[0].strides);
  void* T_subtract = (((DLTensor*)arg_T_subtract)[0].data);
  void* arg_T_subtract_shape = (((DLTensor*)arg_T_subtract)[0].shape);
  void* arg_T_subtract_strides = (((DLTensor*)arg_T_subtract)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_subtract_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)94080, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 960; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 6720) + (i2 * 960)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 960; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 960) + rc)]) * ((int32_t)((int16_t*)placeholder1)[(((rc * 320) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t _1 = ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)]))) * (int64_t)1896157551) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) + 143;
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int16_t*)T_subtract)[(((ax0_ax1_fused_ax2_fused * 320) + cse_var_2) + ax3_inner)] = (((int16_t)((_2) > (0) ? (_2) : (0))) - ((int16_t*)placeholder3)[0]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_subtract_fixed_point_multiply__7a410722370ba428_(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_placeholder3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg_placeholder_code3 = arg_type_ids[3];
  void* arg_placeholder4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg_placeholder_code4 = arg_type_ids[4];
  void* arg_placeholder5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg_placeholder_code5 = arg_type_ids[5];
  void* arg_placeholder6 = (((TVMValue*)args)[6].v_handle);
  int32_t arg_placeholder_code6 = arg_type_ids[6];
  void* arg_placeholder7 = (((TVMValue*)args)[7].v_handle);
  int32_t arg_placeholder_code7 = arg_type_ids[7];
  void* arg_T_subtract = (((TVMValue*)args)[8].v_handle);
  int32_t arg_T_subtract_code = arg_type_ids[8];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg_placeholder3)[0].data);
  void* arg_placeholder_shape3 = (((DLTensor*)arg_placeholder3)[0].shape);
  void* arg_placeholder_strides3 = (((DLTensor*)arg_placeholder3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg_placeholder4)[0].data);
  void* arg_placeholder_shape4 = (((DLTensor*)arg_placeholder4)[0].shape);
  void* arg_placeholder_strides4 = (((DLTensor*)arg_placeholder4)[0].strides);
  void* placeholder5 = (((DLTensor*)arg_placeholder5)[0].data);
  void* arg_placeholder_shape5 = (((DLTensor*)arg_placeholder5)[0].shape);
  void* arg_placeholder_strides5 = (((DLTensor*)arg_placeholder5)[0].strides);
  void* placeholder6 = (((DLTensor*)arg_placeholder6)[0].data);
  void* arg_placeholder_shape6 = (((DLTensor*)arg_placeholder6)[0].shape);
  void* arg_placeholder_strides6 = (((DLTensor*)arg_placeholder6)[0].strides);
  void* placeholder7 = (((DLTensor*)arg_placeholder7)[0].data);
  void* arg_placeholder_shape7 = (((DLTensor*)arg_placeholder7)[0].shape);
  void* arg_placeholder_strides7 = (((DLTensor*)arg_placeholder7)[0].strides);
  void* T_subtract = (((DLTensor*)arg_T_subtract)[0].data);
  void* arg_T_subtract_shape = (((DLTensor*)arg_T_subtract)[0].shape);
  void* arg_T_subtract_strides = (((DLTensor*)arg_T_subtract)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_placeholder_strides3 == NULL)) {
  }
  if (!(arg_placeholder_strides5 == NULL)) {
  }
  if (!(arg_placeholder_strides6 == NULL)) {
  }
  if (!(arg_T_subtract_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)903168, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 56; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 56; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 8064) + (i2 * 144)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3136; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 24) + ax3);
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 144; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 144) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 24) + ax3)])));
      }
      int32_t _1 = ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1686651251) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) + 137;
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      int32_t _3 = ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1686651251) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) + 137;
      int32_t _4 = (_3) < (255) ? (_3) : (255);
      int32_t _5 = (((((int32_t*)placeholder4)[0] * 2) + ((int32_t)(((((0 != 0) ? (((int64_t)(((_2) > (0) ? (_2) : (0)) - ((int32_t*)placeholder3)[0])) << ((int64_t)0)) : ((int64_t)(((_4) > (0) ? (_4) : (0)) - ((int32_t*)placeholder3)[0]))) * (int64_t)1965446615) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)((uint8_t*)placeholder5)[cse_var_2]) - ((int32_t*)placeholder6)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)((uint8_t*)placeholder5)[cse_var_2]) - ((int32_t*)placeholder6)[0]))) * (int64_t)1352469765) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 130;
      int32_t _6 = (_5) < (255) ? (_5) : (255);
      ((int16_t*)T_subtract)[cse_var_2] = (((int16_t)((_6) > (0) ? (_6) : (0))) - ((int16_t*)placeholder7)[0]);
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_subtract_fixed_point_multiply__7a410722370ba428__1(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_placeholder3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg_placeholder_code3 = arg_type_ids[3];
  void* arg_placeholder4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg_placeholder_code4 = arg_type_ids[4];
  void* arg_placeholder5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg_placeholder_code5 = arg_type_ids[5];
  void* arg_placeholder6 = (((TVMValue*)args)[6].v_handle);
  int32_t arg_placeholder_code6 = arg_type_ids[6];
  void* arg_T_subtract = (((TVMValue*)args)[7].v_handle);
  int32_t arg_T_subtract_code = arg_type_ids[7];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg_placeholder3)[0].data);
  void* arg_placeholder_shape3 = (((DLTensor*)arg_placeholder3)[0].shape);
  void* arg_placeholder_strides3 = (((DLTensor*)arg_placeholder3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg_placeholder4)[0].data);
  void* arg_placeholder_shape4 = (((DLTensor*)arg_placeholder4)[0].shape);
  void* arg_placeholder_strides4 = (((DLTensor*)arg_placeholder4)[0].strides);
  void* placeholder5 = (((DLTensor*)arg_placeholder5)[0].data);
  void* arg_placeholder_shape5 = (((DLTensor*)arg_placeholder5)[0].shape);
  void* arg_placeholder_strides5 = (((DLTensor*)arg_placeholder5)[0].strides);
  void* placeholder6 = (((DLTensor*)arg_placeholder6)[0].data);
  void* arg_placeholder_shape6 = (((DLTensor*)arg_placeholder6)[0].shape);
  void* arg_placeholder_strides6 = (((DLTensor*)arg_placeholder6)[0].strides);
  void* T_subtract = (((DLTensor*)arg_T_subtract)[0].data);
  void* arg_T_subtract_shape = (((DLTensor*)arg_T_subtract)[0].shape);
  void* arg_T_subtract_strides = (((DLTensor*)arg_T_subtract)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_placeholder_strides3 == NULL)) {
  }
  if (!(arg_placeholder_strides4 == NULL)) {
  }
  if (!(arg_placeholder_strides5 == NULL)) {
  }
  if (!(arg_T_subtract_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)301056, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 28; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 28; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 5376) + (i2 * 192)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 784; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 32) + ax3);
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 192; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 192) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 32) + ax3)])));
      }
      int32_t _1 = ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1827462576) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) + 124;
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      int32_t _3 = ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1827462576) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) + 124;
      int32_t _4 = (_3) < (255) ? (_3) : (255);
      int32_t _5 = (((int32_t)(((((0 != 0) ? (((int64_t)(((_2) > (0) ? (_2) : (0)) - ((int32_t*)placeholder3)[0])) << ((int64_t)0)) : ((int64_t)(((_4) > (0) ? (_4) : (0)) - ((int32_t*)placeholder3)[0]))) * (int64_t)1649299380) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)((uint8_t*)placeholder4)[cse_var_2]) - ((int32_t*)placeholder5)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)((uint8_t*)placeholder4)[cse_var_2]) - ((int32_t*)placeholder5)[0]))) * (int64_t)1670509933) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 124;
      int32_t _6 = (_5) < (255) ? (_5) : (255);
      ((int16_t*)T_subtract)[cse_var_2] = (((int16_t)((_6) > (0) ? (_6) : (0))) - ((int16_t*)placeholder6)[0]);
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_subtract_fixed_point_multiply__7a410722370ba428__2(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_placeholder3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg_placeholder_code3 = arg_type_ids[3];
  void* arg_placeholder4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg_placeholder_code4 = arg_type_ids[4];
  void* arg_placeholder5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg_placeholder_code5 = arg_type_ids[5];
  void* arg_placeholder6 = (((TVMValue*)args)[6].v_handle);
  int32_t arg_placeholder_code6 = arg_type_ids[6];
  void* arg_placeholder7 = (((TVMValue*)args)[7].v_handle);
  int32_t arg_placeholder_code7 = arg_type_ids[7];
  void* arg_T_subtract = (((TVMValue*)args)[8].v_handle);
  int32_t arg_T_subtract_code = arg_type_ids[8];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg_placeholder3)[0].data);
  void* arg_placeholder_shape3 = (((DLTensor*)arg_placeholder3)[0].shape);
  void* arg_placeholder_strides3 = (((DLTensor*)arg_placeholder3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg_placeholder4)[0].data);
  void* arg_placeholder_shape4 = (((DLTensor*)arg_placeholder4)[0].shape);
  void* arg_placeholder_strides4 = (((DLTensor*)arg_placeholder4)[0].strides);
  void* placeholder5 = (((DLTensor*)arg_placeholder5)[0].data);
  void* arg_placeholder_shape5 = (((DLTensor*)arg_placeholder5)[0].shape);
  void* arg_placeholder_strides5 = (((DLTensor*)arg_placeholder5)[0].strides);
  void* placeholder6 = (((DLTensor*)arg_placeholder6)[0].data);
  void* arg_placeholder_shape6 = (((DLTensor*)arg_placeholder6)[0].shape);
  void* arg_placeholder_strides6 = (((DLTensor*)arg_placeholder6)[0].strides);
  void* placeholder7 = (((DLTensor*)arg_placeholder7)[0].data);
  void* arg_placeholder_shape7 = (((DLTensor*)arg_placeholder7)[0].shape);
  void* arg_placeholder_strides7 = (((DLTensor*)arg_placeholder7)[0].strides);
  void* T_subtract = (((DLTensor*)arg_T_subtract)[0].data);
  void* arg_T_subtract_shape = (((DLTensor*)arg_T_subtract)[0].shape);
  void* arg_T_subtract_strides = (((DLTensor*)arg_T_subtract)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_placeholder_strides3 == NULL)) {
  }
  if (!(arg_placeholder_strides5 == NULL)) {
  }
  if (!(arg_placeholder_strides6 == NULL)) {
  }
  if (!(arg_T_subtract_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)150528, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 384; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 5376) + (i2 * 384)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ff = 0; ff < 64; ++ff) {
      conv2d_nhwc[ff] = 0;
      for (int32_t rc = 0; rc < 384; ++rc) {
        conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 384) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 64) + ff)])));
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 64) + ax3_inner);
      int32_t _1 = ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[ax3_inner])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[ax3_inner]))) * (int64_t)1529891924) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) + 119;
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      int32_t _3 = (((((int32_t*)placeholder4)[0] * 2) + ((int32_t)(((((0 != 0) ? (((int64_t)(((_2) > (0) ? (_2) : (0)) - ((int32_t*)placeholder3)[0])) << ((int64_t)0)) : ((int64_t)(((_2) > (0) ? (_2) : (0)) - ((int32_t*)placeholder3)[0]))) * (int64_t)1536963513) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)((uint8_t*)placeholder5)[cse_var_2]) - ((int32_t*)placeholder6)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)((uint8_t*)placeholder5)[cse_var_2]) - ((int32_t*)placeholder6)[0]))) * (int64_t)1979046019) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 122;
      int32_t _4 = (_3) < (255) ? (_3) : (255);
      ((int16_t*)T_subtract)[cse_var_2] = (((int16_t)((_4) > (0) ? (_4) : (0))) - ((int16_t*)placeholder7)[0]);
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_subtract_fixed_point_multiply__7a410722370ba428__3(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_placeholder3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg_placeholder_code3 = arg_type_ids[3];
  void* arg_placeholder4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg_placeholder_code4 = arg_type_ids[4];
  void* arg_placeholder5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg_placeholder_code5 = arg_type_ids[5];
  void* arg_placeholder6 = (((TVMValue*)args)[6].v_handle);
  int32_t arg_placeholder_code6 = arg_type_ids[6];
  void* arg_placeholder7 = (((TVMValue*)args)[7].v_handle);
  int32_t arg_placeholder_code7 = arg_type_ids[7];
  void* arg_placeholder8 = (((TVMValue*)args)[8].v_handle);
  int32_t arg_placeholder_code8 = arg_type_ids[8];
  void* arg_T_subtract = (((TVMValue*)args)[9].v_handle);
  int32_t arg_T_subtract_code = arg_type_ids[9];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg_placeholder3)[0].data);
  void* arg_placeholder_shape3 = (((DLTensor*)arg_placeholder3)[0].shape);
  void* arg_placeholder_strides3 = (((DLTensor*)arg_placeholder3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg_placeholder4)[0].data);
  void* arg_placeholder_shape4 = (((DLTensor*)arg_placeholder4)[0].shape);
  void* arg_placeholder_strides4 = (((DLTensor*)arg_placeholder4)[0].strides);
  void* placeholder5 = (((DLTensor*)arg_placeholder5)[0].data);
  void* arg_placeholder_shape5 = (((DLTensor*)arg_placeholder5)[0].shape);
  void* arg_placeholder_strides5 = (((DLTensor*)arg_placeholder5)[0].strides);
  void* placeholder6 = (((DLTensor*)arg_placeholder6)[0].data);
  void* arg_placeholder_shape6 = (((DLTensor*)arg_placeholder6)[0].shape);
  void* arg_placeholder_strides6 = (((DLTensor*)arg_placeholder6)[0].strides);
  void* placeholder7 = (((DLTensor*)arg_placeholder7)[0].data);
  void* arg_placeholder_shape7 = (((DLTensor*)arg_placeholder7)[0].shape);
  void* arg_placeholder_strides7 = (((DLTensor*)arg_placeholder7)[0].strides);
  void* placeholder8 = (((DLTensor*)arg_placeholder8)[0].data);
  void* arg_placeholder_shape8 = (((DLTensor*)arg_placeholder8)[0].shape);
  void* arg_placeholder_strides8 = (((DLTensor*)arg_placeholder8)[0].strides);
  void* T_subtract = (((DLTensor*)arg_T_subtract)[0].data);
  void* arg_T_subtract_shape = (((DLTensor*)arg_T_subtract)[0].shape);
  void* arg_T_subtract_strides = (((DLTensor*)arg_T_subtract)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_placeholder_strides4 == NULL)) {
  }
  if (!(arg_placeholder_strides6 == NULL)) {
  }
  if (!(arg_placeholder_strides7 == NULL)) {
  }
  if (!(arg_T_subtract_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)225792, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 576; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 8064) + (i2 * 576)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 96) + ax3);
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 576; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 576) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 96) + ax3)])));
      }
      int32_t _1 = ((int32_t*)placeholder3)[0] + ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1607699784) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31))));
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      int32_t _3 = ((int32_t*)placeholder3)[0] + ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1607699784) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31))));
      int32_t _4 = (_3) < (255) ? (_3) : (255);
      int32_t _5 = (((((int32_t*)placeholder5)[0] * 2) + ((int32_t)(((((0 != 0) ? (((int64_t)(((_2) > (0) ? (_2) : (0)) - ((int32_t*)placeholder4)[0])) << ((int64_t)0)) : ((int64_t)(((_4) > (0) ? (_4) : (0)) - ((int32_t*)placeholder4)[0]))) * (int64_t)1668621739) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)((uint8_t*)placeholder6)[cse_var_2]) - ((int32_t*)placeholder7)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)((uint8_t*)placeholder6)[cse_var_2]) - ((int32_t*)placeholder7)[0]))) * (int64_t)1574927912) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 126;
      int32_t _6 = (_5) < (255) ? (_5) : (255);
      ((int16_t*)T_subtract)[cse_var_2] = (((int16_t)((_6) > (0) ? (_6) : (0))) - ((int16_t*)placeholder8)[0]);
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_subtract_fixed_point_multiply__7a410722370ba428__4(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_placeholder3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg_placeholder_code3 = arg_type_ids[3];
  void* arg_placeholder4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg_placeholder_code4 = arg_type_ids[4];
  void* arg_placeholder5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg_placeholder_code5 = arg_type_ids[5];
  void* arg_placeholder6 = (((TVMValue*)args)[6].v_handle);
  int32_t arg_placeholder_code6 = arg_type_ids[6];
  void* arg_placeholder7 = (((TVMValue*)args)[7].v_handle);
  int32_t arg_placeholder_code7 = arg_type_ids[7];
  void* arg_T_subtract = (((TVMValue*)args)[8].v_handle);
  int32_t arg_T_subtract_code = arg_type_ids[8];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg_placeholder3)[0].data);
  void* arg_placeholder_shape3 = (((DLTensor*)arg_placeholder3)[0].shape);
  void* arg_placeholder_strides3 = (((DLTensor*)arg_placeholder3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg_placeholder4)[0].data);
  void* arg_placeholder_shape4 = (((DLTensor*)arg_placeholder4)[0].shape);
  void* arg_placeholder_strides4 = (((DLTensor*)arg_placeholder4)[0].strides);
  void* placeholder5 = (((DLTensor*)arg_placeholder5)[0].data);
  void* arg_placeholder_shape5 = (((DLTensor*)arg_placeholder5)[0].shape);
  void* arg_placeholder_strides5 = (((DLTensor*)arg_placeholder5)[0].strides);
  void* placeholder6 = (((DLTensor*)arg_placeholder6)[0].data);
  void* arg_placeholder_shape6 = (((DLTensor*)arg_placeholder6)[0].shape);
  void* arg_placeholder_strides6 = (((DLTensor*)arg_placeholder6)[0].strides);
  void* placeholder7 = (((DLTensor*)arg_placeholder7)[0].data);
  void* arg_placeholder_shape7 = (((DLTensor*)arg_placeholder7)[0].shape);
  void* arg_placeholder_strides7 = (((DLTensor*)arg_placeholder7)[0].strides);
  void* T_subtract = (((DLTensor*)arg_T_subtract)[0].data);
  void* arg_T_subtract_shape = (((DLTensor*)arg_T_subtract)[0].shape);
  void* arg_T_subtract_strides = (((DLTensor*)arg_T_subtract)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_placeholder_strides3 == NULL)) {
  }
  if (!(arg_placeholder_strides5 == NULL)) {
  }
  if (!(arg_placeholder_strides6 == NULL)) {
  }
  if (!(arg_T_subtract_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)94080, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 960; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 6720) + (i2 * 960)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 160; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 160) + ax3);
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 960; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 960) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 160) + ax3)])));
      }
      int32_t _1 = ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1373554676) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) + 134;
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      int32_t _3 = ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1373554676) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) + 134;
      int32_t _4 = (_3) < (255) ? (_3) : (255);
      int32_t _5 = (((((int32_t*)placeholder4)[0] * 2) + ((int32_t)(((((0 != 0) ? (((int64_t)(((_2) > (0) ? (_2) : (0)) - ((int32_t*)placeholder3)[0])) << ((int64_t)0)) : ((int64_t)(((_4) > (0) ? (_4) : (0)) - ((int32_t*)placeholder3)[0]))) * (int64_t)1744526087) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)((uint8_t*)placeholder5)[cse_var_2]) - ((int32_t*)placeholder6)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)((uint8_t*)placeholder5)[cse_var_2]) - ((int32_t*)placeholder6)[0]))) * (int64_t)1464732783) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 131;
      int32_t _6 = (_5) < (255) ? (_5) : (255);
      ((int16_t*)T_subtract)[cse_var_2] = (((int16_t)((_6) > (0) ? (_6) : (0))) - ((int16_t*)placeholder7)[0]);
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_subtract_fixed_point_multiply__d03342bca7f00387_(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_placeholder3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg_placeholder_code3 = arg_type_ids[3];
  void* arg_placeholder4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg_placeholder_code4 = arg_type_ids[4];
  void* arg_placeholder5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg_placeholder_code5 = arg_type_ids[5];
  void* arg_placeholder6 = (((TVMValue*)args)[6].v_handle);
  int32_t arg_placeholder_code6 = arg_type_ids[6];
  void* arg_placeholder7 = (((TVMValue*)args)[7].v_handle);
  int32_t arg_placeholder_code7 = arg_type_ids[7];
  void* arg_T_cast = (((TVMValue*)args)[8].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[8];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg_placeholder3)[0].data);
  void* arg_placeholder_shape3 = (((DLTensor*)arg_placeholder3)[0].shape);
  void* arg_placeholder_strides3 = (((DLTensor*)arg_placeholder3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg_placeholder4)[0].data);
  void* arg_placeholder_shape4 = (((DLTensor*)arg_placeholder4)[0].shape);
  void* arg_placeholder_strides4 = (((DLTensor*)arg_placeholder4)[0].strides);
  void* placeholder5 = (((DLTensor*)arg_placeholder5)[0].data);
  void* arg_placeholder_shape5 = (((DLTensor*)arg_placeholder5)[0].shape);
  void* arg_placeholder_strides5 = (((DLTensor*)arg_placeholder5)[0].strides);
  void* placeholder6 = (((DLTensor*)arg_placeholder6)[0].data);
  void* arg_placeholder_shape6 = (((DLTensor*)arg_placeholder6)[0].shape);
  void* arg_placeholder_strides6 = (((DLTensor*)arg_placeholder6)[0].strides);
  void* placeholder7 = (((DLTensor*)arg_placeholder7)[0].data);
  void* arg_placeholder_shape7 = (((DLTensor*)arg_placeholder7)[0].shape);
  void* arg_placeholder_strides7 = (((DLTensor*)arg_placeholder7)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_placeholder_strides4 == NULL)) {
  }
  if (!(arg_placeholder_strides6 == NULL)) {
  }
  if (!(arg_placeholder_strides7 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)301056, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 28; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 28; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 5376) + (i2 * 192)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 784; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 32) + ax3);
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 192; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 192) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 32) + ax3)])));
      }
      int32_t _1 = ((int32_t*)placeholder3)[0] + ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1118389527) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31))));
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      int32_t _3 = ((int32_t*)placeholder3)[0] + ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1118389527) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31))));
      int32_t _4 = (_3) < (255) ? (_3) : (255);
      int32_t _5 = (((((int32_t*)placeholder5)[0] * 2) + ((int32_t)(((((0 != 0) ? (((int64_t)(((_2) > (0) ? (_2) : (0)) - ((int32_t*)placeholder4)[0])) << ((int64_t)0)) : ((int64_t)(((_4) > (0) ? (_4) : (0)) - ((int32_t*)placeholder4)[0]))) * (int64_t)1825042416) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)((uint8_t*)placeholder6)[cse_var_2]) - ((int32_t*)placeholder7)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)((uint8_t*)placeholder6)[cse_var_2]) - ((int32_t*)placeholder7)[0]))) * (int64_t)1775108043) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 130;
      int32_t _6 = (_5) < (255) ? (_5) : (255);
      ((uint8_t*)T_cast)[cse_var_2] = ((uint8_t)((_6) > (0) ? (_6) : (0)));
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_subtract_fixed_point_multiply__d03342bca7f00387__1(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_placeholder3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg_placeholder_code3 = arg_type_ids[3];
  void* arg_placeholder4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg_placeholder_code4 = arg_type_ids[4];
  void* arg_placeholder5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg_placeholder_code5 = arg_type_ids[5];
  void* arg_placeholder6 = (((TVMValue*)args)[6].v_handle);
  int32_t arg_placeholder_code6 = arg_type_ids[6];
  void* arg_T_cast = (((TVMValue*)args)[7].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[7];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg_placeholder3)[0].data);
  void* arg_placeholder_shape3 = (((DLTensor*)arg_placeholder3)[0].shape);
  void* arg_placeholder_strides3 = (((DLTensor*)arg_placeholder3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg_placeholder4)[0].data);
  void* arg_placeholder_shape4 = (((DLTensor*)arg_placeholder4)[0].shape);
  void* arg_placeholder_strides4 = (((DLTensor*)arg_placeholder4)[0].strides);
  void* placeholder5 = (((DLTensor*)arg_placeholder5)[0].data);
  void* arg_placeholder_shape5 = (((DLTensor*)arg_placeholder5)[0].shape);
  void* arg_placeholder_strides5 = (((DLTensor*)arg_placeholder5)[0].strides);
  void* placeholder6 = (((DLTensor*)arg_placeholder6)[0].data);
  void* arg_placeholder_shape6 = (((DLTensor*)arg_placeholder6)[0].shape);
  void* arg_placeholder_strides6 = (((DLTensor*)arg_placeholder6)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_placeholder_strides3 == NULL)) {
  }
  if (!(arg_placeholder_strides5 == NULL)) {
  }
  if (!(arg_placeholder_strides6 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)150528, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 384; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 5376) + (i2 * 384)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ff = 0; ff < 64; ++ff) {
      conv2d_nhwc[ff] = 0;
      for (int32_t rc = 0; rc < 384; ++rc) {
        conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 384) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 64) + ff)])));
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 64) + ax3_inner);
      int32_t _1 = ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[ax3_inner])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[ax3_inner]))) * (int64_t)1345145380) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) + 108;
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      int32_t _3 = (((((int32_t*)placeholder4)[0] * 2) + ((int32_t)(((((0 != 0) ? (((int64_t)(((_2) > (0) ? (_2) : (0)) - ((int32_t*)placeholder3)[0])) << ((int64_t)0)) : ((int64_t)(((_2) > (0) ? (_2) : (0)) - ((int32_t*)placeholder3)[0]))) * (int64_t)1959270766) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)((uint8_t*)placeholder5)[cse_var_2]) - ((int32_t*)placeholder6)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)((uint8_t*)placeholder5)[cse_var_2]) - ((int32_t*)placeholder6)[0]))) * (int64_t)2098736780) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 120;
      int32_t _4 = (_3) < (255) ? (_3) : (255);
      ((uint8_t*)T_cast)[cse_var_2] = ((uint8_t)((_4) > (0) ? (_4) : (0)));
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_subtract_fixed_point_multiply__d03342bca7f00387__2(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_placeholder3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg_placeholder_code3 = arg_type_ids[3];
  void* arg_placeholder4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg_placeholder_code4 = arg_type_ids[4];
  void* arg_placeholder5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg_placeholder_code5 = arg_type_ids[5];
  void* arg_placeholder6 = (((TVMValue*)args)[6].v_handle);
  int32_t arg_placeholder_code6 = arg_type_ids[6];
  void* arg_T_cast = (((TVMValue*)args)[7].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[7];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg_placeholder3)[0].data);
  void* arg_placeholder_shape3 = (((DLTensor*)arg_placeholder3)[0].shape);
  void* arg_placeholder_strides3 = (((DLTensor*)arg_placeholder3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg_placeholder4)[0].data);
  void* arg_placeholder_shape4 = (((DLTensor*)arg_placeholder4)[0].shape);
  void* arg_placeholder_strides4 = (((DLTensor*)arg_placeholder4)[0].strides);
  void* placeholder5 = (((DLTensor*)arg_placeholder5)[0].data);
  void* arg_placeholder_shape5 = (((DLTensor*)arg_placeholder5)[0].shape);
  void* arg_placeholder_strides5 = (((DLTensor*)arg_placeholder5)[0].strides);
  void* placeholder6 = (((DLTensor*)arg_placeholder6)[0].data);
  void* arg_placeholder_shape6 = (((DLTensor*)arg_placeholder6)[0].shape);
  void* arg_placeholder_strides6 = (((DLTensor*)arg_placeholder6)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_placeholder_strides4 == NULL)) {
  }
  if (!(arg_placeholder_strides5 == NULL)) {
  }
  if (!(arg_placeholder_strides6 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)150528, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 384; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 5376) + (i2 * 384)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ff = 0; ff < 64; ++ff) {
      conv2d_nhwc[ff] = 0;
      for (int32_t rc = 0; rc < 384; ++rc) {
        conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 384) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 64) + ff)])));
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 64) + ax3_inner);
      int32_t _1 = ((int32_t*)placeholder3)[0] + ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[ax3_inner])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[ax3_inner]))) * (int64_t)1111848360) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31))));
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      int32_t _3 = (((int32_t)(((((0 != 0) ? (((int64_t)(((_2) > (0) ? (_2) : (0)) - ((int32_t*)placeholder4)[0])) << ((int64_t)0)) : ((int64_t)(((_2) > (0) ? (_2) : (0)) - ((int32_t*)placeholder4)[0]))) * (int64_t)1562988412) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)((uint8_t*)placeholder5)[cse_var_2]) - ((int32_t*)placeholder6)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)((uint8_t*)placeholder5)[cse_var_2]) - ((int32_t*)placeholder6)[0]))) * (int64_t)2027460203) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 123;
      int32_t _4 = (_3) < (255) ? (_3) : (255);
      ((uint8_t*)T_cast)[cse_var_2] = ((uint8_t)((_4) > (0) ? (_4) : (0)));
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_subtract_fixed_point_multiply__d03342bca7f00387__3(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_placeholder3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg_placeholder_code3 = arg_type_ids[3];
  void* arg_placeholder4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg_placeholder_code4 = arg_type_ids[4];
  void* arg_placeholder5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg_placeholder_code5 = arg_type_ids[5];
  void* arg_placeholder6 = (((TVMValue*)args)[6].v_handle);
  int32_t arg_placeholder_code6 = arg_type_ids[6];
  void* arg_placeholder7 = (((TVMValue*)args)[7].v_handle);
  int32_t arg_placeholder_code7 = arg_type_ids[7];
  void* arg_T_cast = (((TVMValue*)args)[8].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[8];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg_placeholder3)[0].data);
  void* arg_placeholder_shape3 = (((DLTensor*)arg_placeholder3)[0].shape);
  void* arg_placeholder_strides3 = (((DLTensor*)arg_placeholder3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg_placeholder4)[0].data);
  void* arg_placeholder_shape4 = (((DLTensor*)arg_placeholder4)[0].shape);
  void* arg_placeholder_strides4 = (((DLTensor*)arg_placeholder4)[0].strides);
  void* placeholder5 = (((DLTensor*)arg_placeholder5)[0].data);
  void* arg_placeholder_shape5 = (((DLTensor*)arg_placeholder5)[0].shape);
  void* arg_placeholder_strides5 = (((DLTensor*)arg_placeholder5)[0].strides);
  void* placeholder6 = (((DLTensor*)arg_placeholder6)[0].data);
  void* arg_placeholder_shape6 = (((DLTensor*)arg_placeholder6)[0].shape);
  void* arg_placeholder_strides6 = (((DLTensor*)arg_placeholder6)[0].strides);
  void* placeholder7 = (((DLTensor*)arg_placeholder7)[0].data);
  void* arg_placeholder_shape7 = (((DLTensor*)arg_placeholder7)[0].shape);
  void* arg_placeholder_strides7 = (((DLTensor*)arg_placeholder7)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_placeholder_strides4 == NULL)) {
  }
  if (!(arg_placeholder_strides6 == NULL)) {
  }
  if (!(arg_placeholder_strides7 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)225792, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 576; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 8064) + (i2 * 576)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 96) + ax3);
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 576; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 576) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 96) + ax3)])));
      }
      int32_t _1 = ((int32_t*)placeholder3)[0] + ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1695278660) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31))));
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      int32_t _3 = ((int32_t*)placeholder3)[0] + ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1695278660) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31))));
      int32_t _4 = (_3) < (255) ? (_3) : (255);
      int32_t _5 = (((((int32_t*)placeholder5)[0] * 2) + ((int32_t)(((((0 != 0) ? (((int64_t)(((_2) > (0) ? (_2) : (0)) - ((int32_t*)placeholder4)[0])) << ((int64_t)0)) : ((int64_t)(((_4) > (0) ? (_4) : (0)) - ((int32_t*)placeholder4)[0]))) * (int64_t)1534743944) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)((uint8_t*)placeholder6)[cse_var_2]) - ((int32_t*)placeholder7)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)((uint8_t*)placeholder6)[cse_var_2]) - ((int32_t*)placeholder7)[0]))) * (int64_t)2054690938) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 126;
      int32_t _6 = (_5) < (255) ? (_5) : (255);
      ((uint8_t*)T_cast)[cse_var_2] = ((uint8_t)((_6) > (0) ? (_6) : (0)));
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_add_clip_subtract_fixed_point_multiply__d03342bca7f00387__4(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_placeholder3 = (((TVMValue*)args)[3].v_handle);
  int32_t arg_placeholder_code3 = arg_type_ids[3];
  void* arg_placeholder4 = (((TVMValue*)args)[4].v_handle);
  int32_t arg_placeholder_code4 = arg_type_ids[4];
  void* arg_placeholder5 = (((TVMValue*)args)[5].v_handle);
  int32_t arg_placeholder_code5 = arg_type_ids[5];
  void* arg_placeholder6 = (((TVMValue*)args)[6].v_handle);
  int32_t arg_placeholder_code6 = arg_type_ids[6];
  void* arg_T_cast = (((TVMValue*)args)[7].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[7];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* placeholder3 = (((DLTensor*)arg_placeholder3)[0].data);
  void* arg_placeholder_shape3 = (((DLTensor*)arg_placeholder3)[0].shape);
  void* arg_placeholder_strides3 = (((DLTensor*)arg_placeholder3)[0].strides);
  void* placeholder4 = (((DLTensor*)arg_placeholder4)[0].data);
  void* arg_placeholder_shape4 = (((DLTensor*)arg_placeholder4)[0].shape);
  void* arg_placeholder_strides4 = (((DLTensor*)arg_placeholder4)[0].strides);
  void* placeholder5 = (((DLTensor*)arg_placeholder5)[0].data);
  void* arg_placeholder_shape5 = (((DLTensor*)arg_placeholder5)[0].shape);
  void* arg_placeholder_strides5 = (((DLTensor*)arg_placeholder5)[0].strides);
  void* placeholder6 = (((DLTensor*)arg_placeholder6)[0].data);
  void* arg_placeholder_shape6 = (((DLTensor*)arg_placeholder6)[0].shape);
  void* arg_placeholder_strides6 = (((DLTensor*)arg_placeholder6)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_placeholder_strides4 == NULL)) {
  }
  if (!(arg_placeholder_strides5 == NULL)) {
  }
  if (!(arg_placeholder_strides6 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)94080, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 960; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 6720) + (i2 * 960)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 160; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 160) + ax3);
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 960; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 960) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 160) + ax3)])));
      }
      int32_t _1 = ((int32_t*)placeholder3)[0] + ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1946510101) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31))));
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      int32_t _3 = ((int32_t*)placeholder3)[0] + ((int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1946510101) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31))));
      int32_t _4 = (_3) < (255) ? (_3) : (255);
      int32_t _5 = (((int32_t)(((((0 != 0) ? (((int64_t)(((_2) > (0) ? (_2) : (0)) - ((int32_t*)placeholder4)[0])) << ((int64_t)0)) : ((int64_t)(((_4) > (0) ? (_4) : (0)) - ((int32_t*)placeholder4)[0]))) * (int64_t)1487872380) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)((uint8_t*)placeholder5)[cse_var_2]) - ((int32_t*)placeholder6)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)((uint8_t*)placeholder5)[cse_var_2]) - ((int32_t*)placeholder6)[0]))) * (int64_t)1883863784) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 133;
      int32_t _6 = (_5) < (255) ? (_5) : (255);
      ((uint8_t*)T_cast)[cse_var_2] = ((uint8_t)((_6) > (0) ? (_6) : (0)));
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_compute = (((TVMValue*)args)[3].v_handle);
  int32_t arg_compute_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* compute = (((DLTensor*)arg_compute)[0].data);
  void* arg_compute_shape = (((DLTensor*)arg_compute)[0].shape);
  void* arg_compute_strides = (((DLTensor*)arg_compute)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_compute_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)31360, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 320; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 2240) + (i2 * 320)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 49; ++i0_i1_fused_i2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t i3_outer = 0; i3_outer < 20; ++i3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 320; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((i0_i1_fused_i2_fused * 320) + rc)]) * ((int32_t)((int16_t*)placeholder1)[(((rc * 1280) + (i3_outer * 64)) + ff)])));
        }
      }
      for (int32_t i3_inner = 0; i3_inner < 64; ++i3_inner) {
        int32_t cse_var_2 = (i3_outer * 64);
        int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[i3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + i3_inner)])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[i3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + i3_inner)]))) * (int64_t)2009181965) + ((int64_t)1 << ((int64_t)((5 + 31) - 1)))) >> ((int64_t)(5 + 31)));
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)compute)[(((i0_i1_fused_i2_fused * 1280) + cse_var_2) + i3_inner)] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)303750, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 225; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 225; ++i2) {
      for (int32_t i3 = 0; i3 < 3; ++i3) {
        int32_t cse_var_1 = (i2 * 3);
        ((int16_t*)pad_temp)[(((i0_i1_fused * 675) + cse_var_1) + i3)] = (((i0_i1_fused < 224) && (i2 < 224)) ? ((int16_t*)placeholder)[(((i0_i1_fused * 672) + cse_var_1) + i3)] : (int16_t)0);
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12544; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      conv2d_nhwc[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 3; ++rc) {
            conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp)[((((((ax0_ax1_fused_ax2_fused / 112) * 1350) + (ry * 675)) + ((ax0_ax1_fused_ax2_fused % 112) * 6)) + (rx * 3)) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((((ry * 288) + (rx * 96)) + (rc * 32)) + ax3)])));
          }
        }
      }
      int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1323506905) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)));
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      ((int16_t*)T_cast)[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = ((int16_t)((_2) > (0) ? (_2) : (0)));
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_1(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* PaddedInput = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)831744, 0, 16);
  if (PaddedInput == NULL) {
    return -1;
  }
  void* DepthwiseConv2d = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)1605632, 0, 32);
  if (DepthwiseConv2d == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 114; ++i1) {
    for (int32_t i2 = 0; i2 < 114; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (i2 * 32);
        ((int16_t*)PaddedInput)[(((i1 * 3648) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 113)) && (1 <= i2)) && (i2 < 113)) ? ((int16_t*)placeholder)[((((i1 * 3584) + cse_var_1) + i3) - 3616)] : (int16_t)0);
      }
    }
  }
  for (int32_t i = 0; i < 112; ++i) {
    for (int32_t j = 0; j < 112; ++j) {
      for (int32_t c = 0; c < 32; ++c) {
        ((int32_t*)DepthwiseConv2d)[(((i * 3584) + (j * 32)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 32);
            int32_t cse_var_3 = (dj * 32);
            int32_t cse_var_2 = (((i * 3584) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d)[cse_var_2] = (((int32_t*)DepthwiseConv2d)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput)[(((((i * 3648) + (di * 3648)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)placeholder1)[(((di * 96) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 112; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 112; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 3584) + (ax2 * 32)) + ax3);
        ((int32_t*)DepthwiseConv2d)[cse_var_5] = (((int32_t*)DepthwiseConv2d)[cse_var_5] + ((int32_t*)placeholder2)[ax3]);
      }
    }
  }
  for (int32_t i11 = 0; i11 < 112; ++i11) {
    for (int32_t i21 = 0; i21 < 112; ++i21) {
      for (int32_t i31 = 0; i31 < 32; ++i31) {
        int32_t cse_var_6 = (((i11 * 3584) + (i21 * 32)) + i31);
        ((int32_t*)DepthwiseConv2d)[cse_var_6] = ((int32_t)(((((0 != 0) ? (((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6]) << ((int64_t)0)) : ((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6])) * (int64_t)1476160983) + ((int64_t)1 << ((int64_t)((1 + 31) - 1)))) >> ((int64_t)(1 + 31))));
      }
    }
  }
  for (int32_t i12 = 0; i12 < 112; ++i12) {
    for (int32_t i22 = 0; i22 < 112; ++i22) {
      for (int32_t i32 = 0; i32 < 32; ++i32) {
        int32_t cse_var_7 = (((i12 * 3584) + (i22 * 32)) + i32);
        int32_t _1 = ((int32_t*)DepthwiseConv2d)[cse_var_7];
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)DepthwiseConv2d)[cse_var_7] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  for (int32_t ax11 = 0; ax11 < 112; ++ax11) {
    for (int32_t ax21 = 0; ax21 < 112; ++ax21) {
      for (int32_t ax31 = 0; ax31 < 32; ++ax31) {
        int32_t cse_var_8 = (((ax11 * 3584) + (ax21 * 32)) + ax31);
        ((int16_t*)T_cast)[cse_var_8] = ((int16_t)((int32_t*)DepthwiseConv2d)[cse_var_8]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, DepthwiseConv2d) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, PaddedInput) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_10(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)50176, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 28; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 28; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 896) + (i2 * 32)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 784; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 32; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int16_t*)placeholder1)[(((rc * 192) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)]))) * (int64_t)1184429651) + ((int64_t)1 << ((int64_t)((5 + 31) - 1)))) >> ((int64_t)(5 + 31)));
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int16_t*)T_cast)[(((ax0_ax1_fused_ax2_fused * 192) + cse_var_2) + ax3_inner)] = ((int16_t)((_2) > (0) ? (_2) : (0)));
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_11(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* PaddedInput = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)345600, 0, 16);
  if (PaddedInput == NULL) {
    return -1;
  }
  void* DepthwiseConv2d = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)602112, 0, 32);
  if (DepthwiseConv2d == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 30; ++i1) {
    for (int32_t i2 = 0; i2 < 30; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (i2 * 192);
        ((int16_t*)PaddedInput)[(((i1 * 5760) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 29)) && (1 <= i2)) && (i2 < 29)) ? ((int16_t*)placeholder)[((((i1 * 5376) + cse_var_1) + i3) - 5568)] : (int16_t)0);
      }
    }
  }
  for (int32_t i = 0; i < 28; ++i) {
    for (int32_t j = 0; j < 28; ++j) {
      for (int32_t c = 0; c < 192; ++c) {
        ((int32_t*)DepthwiseConv2d)[(((i * 5376) + (j * 192)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 192);
            int32_t cse_var_3 = (dj * 192);
            int32_t cse_var_2 = (((i * 5376) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d)[cse_var_2] = (((int32_t*)DepthwiseConv2d)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput)[(((((i * 5760) + (di * 5760)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)placeholder1)[(((di * 576) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 28; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 192; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 5376) + (ax2 * 192)) + ax3);
        ((int32_t*)DepthwiseConv2d)[cse_var_5] = (((int32_t*)DepthwiseConv2d)[cse_var_5] + ((int32_t*)placeholder2)[ax3]);
      }
    }
  }
  for (int32_t i11 = 0; i11 < 28; ++i11) {
    for (int32_t i21 = 0; i21 < 28; ++i21) {
      for (int32_t i31 = 0; i31 < 192; ++i31) {
        int32_t cse_var_6 = (((i11 * 5376) + (i21 * 192)) + i31);
        ((int32_t*)DepthwiseConv2d)[cse_var_6] = ((int32_t)(((((0 != 0) ? (((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6]) << ((int64_t)0)) : ((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6])) * (int64_t)1384630622) + ((int64_t)1 << ((int64_t)((3 + 31) - 1)))) >> ((int64_t)(3 + 31))));
      }
    }
  }
  for (int32_t i12 = 0; i12 < 28; ++i12) {
    for (int32_t i22 = 0; i22 < 28; ++i22) {
      for (int32_t i32 = 0; i32 < 192; ++i32) {
        int32_t cse_var_7 = (((i12 * 5376) + (i22 * 192)) + i32);
        int32_t _1 = ((int32_t*)DepthwiseConv2d)[cse_var_7];
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)DepthwiseConv2d)[cse_var_7] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  for (int32_t ax11 = 0; ax11 < 28; ++ax11) {
    for (int32_t ax21 = 0; ax21 < 28; ++ax21) {
      for (int32_t ax31 = 0; ax31 < 192; ++ax31) {
        int32_t cse_var_8 = (((ax11 * 5376) + (ax21 * 192)) + ax31);
        ((int16_t*)T_cast)[cse_var_8] = ((int16_t)((int32_t*)DepthwiseConv2d)[cse_var_8]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, DepthwiseConv2d) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, PaddedInput) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_12(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)50176, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 28; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 28; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 896) + (i2 * 32)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 784; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 32; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int16_t*)placeholder1)[(((rc * 192) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)]))) * (int64_t)1925054633) + ((int64_t)1 << ((int64_t)((5 + 31) - 1)))) >> ((int64_t)(5 + 31)));
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int16_t*)T_cast)[(((ax0_ax1_fused_ax2_fused * 192) + cse_var_2) + ax3_inner)] = ((int16_t)((_2) > (0) ? (_2) : (0)));
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_13(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* PaddedInput = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)322944, 0, 16);
  if (PaddedInput == NULL) {
    return -1;
  }
  void* DepthwiseConv2d = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)150528, 0, 32);
  if (DepthwiseConv2d == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 29; ++i1) {
    for (int32_t i2 = 0; i2 < 29; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (i2 * 192);
        ((int16_t*)PaddedInput)[(((i1 * 5568) + cse_var_1) + i3)] = (((i1 < 28) && (i2 < 28)) ? ((int16_t*)placeholder)[(((i1 * 5376) + cse_var_1) + i3)] : (int16_t)0);
      }
    }
  }
  for (int32_t i = 0; i < 14; ++i) {
    for (int32_t j = 0; j < 14; ++j) {
      for (int32_t c = 0; c < 192; ++c) {
        ((int32_t*)DepthwiseConv2d)[(((i * 2688) + (j * 192)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 192);
            int32_t cse_var_2 = (((i * 2688) + (j * 192)) + c);
            ((int32_t*)DepthwiseConv2d)[cse_var_2] = (((int32_t*)DepthwiseConv2d)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput)[(((((i * 11136) + (di * 5568)) + (j * 384)) + cse_var_3) + c)]) * ((int32_t)((int16_t*)placeholder1)[(((di * 576) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 192; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 2688) + (ax2 * 192)) + ax3);
        ((int32_t*)DepthwiseConv2d)[cse_var_4] = (((int32_t*)DepthwiseConv2d)[cse_var_4] + ((int32_t*)placeholder2)[ax3]);
      }
    }
  }
  for (int32_t i11 = 0; i11 < 14; ++i11) {
    for (int32_t i21 = 0; i21 < 14; ++i21) {
      for (int32_t i31 = 0; i31 < 192; ++i31) {
        int32_t cse_var_5 = (((i11 * 2688) + (i21 * 192)) + i31);
        ((int32_t*)DepthwiseConv2d)[cse_var_5] = ((int32_t)(((((0 != 0) ? (((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_5]) << ((int64_t)0)) : ((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_5])) * (int64_t)1365963116) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31))));
      }
    }
  }
  for (int32_t i12 = 0; i12 < 14; ++i12) {
    for (int32_t i22 = 0; i22 < 14; ++i22) {
      for (int32_t i32 = 0; i32 < 192; ++i32) {
        int32_t cse_var_6 = (((i12 * 2688) + (i22 * 192)) + i32);
        int32_t _1 = ((int32_t*)DepthwiseConv2d)[cse_var_6];
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)DepthwiseConv2d)[cse_var_6] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  for (int32_t ax11 = 0; ax11 < 14; ++ax11) {
    for (int32_t ax21 = 0; ax21 < 14; ++ax21) {
      for (int32_t ax31 = 0; ax31 < 192; ++ax31) {
        int32_t cse_var_7 = (((ax11 * 2688) + (ax21 * 192)) + ax31);
        ((int16_t*)T_cast)[cse_var_7] = ((int16_t)((int32_t*)DepthwiseConv2d)[cse_var_7]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, DepthwiseConv2d) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, PaddedInput) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_14(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)25088, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 896) + (i2 * 64)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 6; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 64; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 64) + rc)]) * ((int32_t)((int16_t*)placeholder1)[(((rc * 384) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)]))) * (int64_t)1772618758) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)));
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int16_t*)T_cast)[(((ax0_ax1_fused_ax2_fused * 384) + cse_var_2) + ax3_inner)] = ((int16_t)((_2) > (0) ? (_2) : (0)));
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_15(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* PaddedInput = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)196608, 0, 16);
  if (PaddedInput == NULL) {
    return -1;
  }
  void* DepthwiseConv2d = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)301056, 0, 32);
  if (DepthwiseConv2d == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 16; ++i1) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 384; ++i3) {
        int32_t cse_var_1 = (i2 * 384);
        ((int16_t*)PaddedInput)[(((i1 * 6144) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 15)) && (1 <= i2)) && (i2 < 15)) ? ((int16_t*)placeholder)[((((i1 * 5376) + cse_var_1) + i3) - 5760)] : (int16_t)0);
      }
    }
  }
  for (int32_t i = 0; i < 14; ++i) {
    for (int32_t j = 0; j < 14; ++j) {
      for (int32_t c = 0; c < 384; ++c) {
        ((int32_t*)DepthwiseConv2d)[(((i * 5376) + (j * 384)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 384);
            int32_t cse_var_3 = (dj * 384);
            int32_t cse_var_2 = (((i * 5376) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d)[cse_var_2] = (((int32_t*)DepthwiseConv2d)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput)[(((((i * 6144) + (di * 6144)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)placeholder1)[(((di * 1152) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 384; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 5376) + (ax2 * 384)) + ax3);
        ((int32_t*)DepthwiseConv2d)[cse_var_5] = (((int32_t*)DepthwiseConv2d)[cse_var_5] + ((int32_t*)placeholder2)[ax3]);
      }
    }
  }
  for (int32_t i11 = 0; i11 < 14; ++i11) {
    for (int32_t i21 = 0; i21 < 14; ++i21) {
      for (int32_t i31 = 0; i31 < 384; ++i31) {
        int32_t cse_var_6 = (((i11 * 5376) + (i21 * 384)) + i31);
        ((int32_t*)DepthwiseConv2d)[cse_var_6] = ((int32_t)(((((0 != 0) ? (((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6]) << ((int64_t)0)) : ((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6])) * (int64_t)2103449859) + ((int64_t)1 << ((int64_t)((4 + 31) - 1)))) >> ((int64_t)(4 + 31))));
      }
    }
  }
  for (int32_t i12 = 0; i12 < 14; ++i12) {
    for (int32_t i22 = 0; i22 < 14; ++i22) {
      for (int32_t i32 = 0; i32 < 384; ++i32) {
        int32_t cse_var_7 = (((i12 * 5376) + (i22 * 384)) + i32);
        int32_t _1 = ((int32_t*)DepthwiseConv2d)[cse_var_7];
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)DepthwiseConv2d)[cse_var_7] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  for (int32_t ax11 = 0; ax11 < 14; ++ax11) {
    for (int32_t ax21 = 0; ax21 < 14; ++ax21) {
      for (int32_t ax31 = 0; ax31 < 384; ++ax31) {
        int32_t cse_var_8 = (((ax11 * 5376) + (ax21 * 384)) + ax31);
        ((int16_t*)T_cast)[cse_var_8] = ((int16_t)((int32_t*)DepthwiseConv2d)[cse_var_8]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, DepthwiseConv2d) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, PaddedInput) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_16(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)25088, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 896) + (i2 * 64)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 6; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 64; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 64) + rc)]) * ((int32_t)((int16_t*)placeholder1)[(((rc * 384) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)]))) * (int64_t)1681688437) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)));
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int16_t*)T_cast)[(((ax0_ax1_fused_ax2_fused * 384) + cse_var_2) + ax3_inner)] = ((int16_t)((_2) > (0) ? (_2) : (0)));
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_17(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* PaddedInput = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)196608, 0, 16);
  if (PaddedInput == NULL) {
    return -1;
  }
  void* DepthwiseConv2d = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)301056, 0, 32);
  if (DepthwiseConv2d == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 16; ++i1) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 384; ++i3) {
        int32_t cse_var_1 = (i2 * 384);
        ((int16_t*)PaddedInput)[(((i1 * 6144) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 15)) && (1 <= i2)) && (i2 < 15)) ? ((int16_t*)placeholder)[((((i1 * 5376) + cse_var_1) + i3) - 5760)] : (int16_t)0);
      }
    }
  }
  for (int32_t i = 0; i < 14; ++i) {
    for (int32_t j = 0; j < 14; ++j) {
      for (int32_t c = 0; c < 384; ++c) {
        ((int32_t*)DepthwiseConv2d)[(((i * 5376) + (j * 384)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 384);
            int32_t cse_var_3 = (dj * 384);
            int32_t cse_var_2 = (((i * 5376) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d)[cse_var_2] = (((int32_t*)DepthwiseConv2d)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput)[(((((i * 6144) + (di * 6144)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)placeholder1)[(((di * 1152) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 384; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 5376) + (ax2 * 384)) + ax3);
        ((int32_t*)DepthwiseConv2d)[cse_var_5] = (((int32_t*)DepthwiseConv2d)[cse_var_5] + ((int32_t*)placeholder2)[ax3]);
      }
    }
  }
  for (int32_t i11 = 0; i11 < 14; ++i11) {
    for (int32_t i21 = 0; i21 < 14; ++i21) {
      for (int32_t i31 = 0; i31 < 384; ++i31) {
        int32_t cse_var_6 = (((i11 * 5376) + (i21 * 384)) + i31);
        ((int32_t*)DepthwiseConv2d)[cse_var_6] = ((int32_t)(((((0 != 0) ? (((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6]) << ((int64_t)0)) : ((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6])) * (int64_t)1749813713) + ((int64_t)1 << ((int64_t)((4 + 31) - 1)))) >> ((int64_t)(4 + 31))));
      }
    }
  }
  for (int32_t i12 = 0; i12 < 14; ++i12) {
    for (int32_t i22 = 0; i22 < 14; ++i22) {
      for (int32_t i32 = 0; i32 < 384; ++i32) {
        int32_t cse_var_7 = (((i12 * 5376) + (i22 * 384)) + i32);
        int32_t _1 = ((int32_t*)DepthwiseConv2d)[cse_var_7];
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)DepthwiseConv2d)[cse_var_7] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  for (int32_t ax11 = 0; ax11 < 14; ++ax11) {
    for (int32_t ax21 = 0; ax21 < 14; ++ax21) {
      for (int32_t ax31 = 0; ax31 < 384; ++ax31) {
        int32_t cse_var_8 = (((ax11 * 5376) + (ax21 * 384)) + ax31);
        ((int16_t*)T_cast)[cse_var_8] = ((int16_t)((int32_t*)DepthwiseConv2d)[cse_var_8]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, DepthwiseConv2d) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, PaddedInput) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_18(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)25088, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 896) + (i2 * 64)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 6; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 64; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 64) + rc)]) * ((int32_t)((int16_t*)placeholder1)[(((rc * 384) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)]))) * (int64_t)1633240762) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)));
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int16_t*)T_cast)[(((ax0_ax1_fused_ax2_fused * 384) + cse_var_2) + ax3_inner)] = ((int16_t)((_2) > (0) ? (_2) : (0)));
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_19(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* PaddedInput = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)196608, 0, 16);
  if (PaddedInput == NULL) {
    return -1;
  }
  void* DepthwiseConv2d = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)301056, 0, 32);
  if (DepthwiseConv2d == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 16; ++i1) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 384; ++i3) {
        int32_t cse_var_1 = (i2 * 384);
        ((int16_t*)PaddedInput)[(((i1 * 6144) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 15)) && (1 <= i2)) && (i2 < 15)) ? ((int16_t*)placeholder)[((((i1 * 5376) + cse_var_1) + i3) - 5760)] : (int16_t)0);
      }
    }
  }
  for (int32_t i = 0; i < 14; ++i) {
    for (int32_t j = 0; j < 14; ++j) {
      for (int32_t c = 0; c < 384; ++c) {
        ((int32_t*)DepthwiseConv2d)[(((i * 5376) + (j * 384)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 384);
            int32_t cse_var_3 = (dj * 384);
            int32_t cse_var_2 = (((i * 5376) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d)[cse_var_2] = (((int32_t*)DepthwiseConv2d)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput)[(((((i * 6144) + (di * 6144)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)placeholder1)[(((di * 1152) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 384; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 5376) + (ax2 * 384)) + ax3);
        ((int32_t*)DepthwiseConv2d)[cse_var_5] = (((int32_t*)DepthwiseConv2d)[cse_var_5] + ((int32_t*)placeholder2)[ax3]);
      }
    }
  }
  for (int32_t i11 = 0; i11 < 14; ++i11) {
    for (int32_t i21 = 0; i21 < 14; ++i21) {
      for (int32_t i31 = 0; i31 < 384; ++i31) {
        int32_t cse_var_6 = (((i11 * 5376) + (i21 * 384)) + i31);
        ((int32_t*)DepthwiseConv2d)[cse_var_6] = ((int32_t)(((((0 != 0) ? (((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6]) << ((int64_t)0)) : ((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6])) * (int64_t)1388678313) + ((int64_t)1 << ((int64_t)((4 + 31) - 1)))) >> ((int64_t)(4 + 31))));
      }
    }
  }
  for (int32_t i12 = 0; i12 < 14; ++i12) {
    for (int32_t i22 = 0; i22 < 14; ++i22) {
      for (int32_t i32 = 0; i32 < 384; ++i32) {
        int32_t cse_var_7 = (((i12 * 5376) + (i22 * 384)) + i32);
        int32_t _1 = ((int32_t*)DepthwiseConv2d)[cse_var_7];
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)DepthwiseConv2d)[cse_var_7] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  for (int32_t ax11 = 0; ax11 < 14; ++ax11) {
    for (int32_t ax21 = 0; ax21 < 14; ++ax21) {
      for (int32_t ax31 = 0; ax31 < 384; ++ax31) {
        int32_t cse_var_8 = (((ax11 * 5376) + (ax21 * 384)) + ax31);
        ((int16_t*)T_cast)[cse_var_8] = ((int16_t)((int32_t*)DepthwiseConv2d)[cse_var_8]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, DepthwiseConv2d) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, PaddedInput) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_2(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)401408, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 112; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 112; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1792) + (i2 * 16)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12544; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 16; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 16) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 96) + ax3)])));
      }
      int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1264269157) + ((int64_t)1 << ((int64_t)((2 + 31) - 1)))) >> ((int64_t)(2 + 31)));
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      ((int16_t*)T_cast)[((ax0_ax1_fused_ax2_fused * 96) + ax3)] = ((int16_t)((_2) > (0) ? (_2) : (0)));
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_20(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)25088, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 896) + (i2 * 64)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 6; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 64; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 64) + rc)]) * ((int32_t)((int16_t*)placeholder1)[(((rc * 384) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)]))) * (int64_t)1080658379) + ((int64_t)1 << ((int64_t)((5 + 31) - 1)))) >> ((int64_t)(5 + 31)));
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int16_t*)T_cast)[(((ax0_ax1_fused_ax2_fused * 384) + cse_var_2) + ax3_inner)] = ((int16_t)((_2) > (0) ? (_2) : (0)));
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_21(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* PaddedInput = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)196608, 0, 16);
  if (PaddedInput == NULL) {
    return -1;
  }
  void* DepthwiseConv2d = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)301056, 0, 32);
  if (DepthwiseConv2d == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 16; ++i1) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 384; ++i3) {
        int32_t cse_var_1 = (i2 * 384);
        ((int16_t*)PaddedInput)[(((i1 * 6144) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 15)) && (1 <= i2)) && (i2 < 15)) ? ((int16_t*)placeholder)[((((i1 * 5376) + cse_var_1) + i3) - 5760)] : (int16_t)0);
      }
    }
  }
  for (int32_t i = 0; i < 14; ++i) {
    for (int32_t j = 0; j < 14; ++j) {
      for (int32_t c = 0; c < 384; ++c) {
        ((int32_t*)DepthwiseConv2d)[(((i * 5376) + (j * 384)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 384);
            int32_t cse_var_3 = (dj * 384);
            int32_t cse_var_2 = (((i * 5376) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d)[cse_var_2] = (((int32_t*)DepthwiseConv2d)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput)[(((((i * 6144) + (di * 6144)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)placeholder1)[(((di * 1152) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 384; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 5376) + (ax2 * 384)) + ax3);
        ((int32_t*)DepthwiseConv2d)[cse_var_5] = (((int32_t*)DepthwiseConv2d)[cse_var_5] + ((int32_t*)placeholder2)[ax3]);
      }
    }
  }
  for (int32_t i11 = 0; i11 < 14; ++i11) {
    for (int32_t i21 = 0; i21 < 14; ++i21) {
      for (int32_t i31 = 0; i31 < 384; ++i31) {
        int32_t cse_var_6 = (((i11 * 5376) + (i21 * 384)) + i31);
        ((int32_t*)DepthwiseConv2d)[cse_var_6] = ((int32_t)(((((0 != 0) ? (((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6]) << ((int64_t)0)) : ((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6])) * (int64_t)2123414602) + ((int64_t)1 << ((int64_t)((5 + 31) - 1)))) >> ((int64_t)(5 + 31))));
      }
    }
  }
  for (int32_t i12 = 0; i12 < 14; ++i12) {
    for (int32_t i22 = 0; i22 < 14; ++i22) {
      for (int32_t i32 = 0; i32 < 384; ++i32) {
        int32_t cse_var_7 = (((i12 * 5376) + (i22 * 384)) + i32);
        int32_t _1 = ((int32_t*)DepthwiseConv2d)[cse_var_7];
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)DepthwiseConv2d)[cse_var_7] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  for (int32_t ax11 = 0; ax11 < 14; ++ax11) {
    for (int32_t ax21 = 0; ax21 < 14; ++ax21) {
      for (int32_t ax31 = 0; ax31 < 384; ++ax31) {
        int32_t cse_var_8 = (((ax11 * 5376) + (ax21 * 384)) + ax31);
        ((int16_t*)T_cast)[cse_var_8] = ((int16_t)((int32_t*)DepthwiseConv2d)[cse_var_8]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, DepthwiseConv2d) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, PaddedInput) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_22(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)37632, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1344) + (i2 * 96)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 9; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 96; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 96) + rc)]) * ((int32_t)((int16_t*)placeholder1)[(((rc * 576) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)]))) * (int64_t)1627579877) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)));
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int16_t*)T_cast)[(((ax0_ax1_fused_ax2_fused * 576) + cse_var_2) + ax3_inner)] = ((int16_t)((_2) > (0) ? (_2) : (0)));
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_23(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* PaddedInput = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)294912, 0, 16);
  if (PaddedInput == NULL) {
    return -1;
  }
  void* DepthwiseConv2d = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)451584, 0, 32);
  if (DepthwiseConv2d == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 16; ++i1) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 576; ++i3) {
        int32_t cse_var_1 = (i2 * 576);
        ((int16_t*)PaddedInput)[(((i1 * 9216) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 15)) && (1 <= i2)) && (i2 < 15)) ? ((int16_t*)placeholder)[((((i1 * 8064) + cse_var_1) + i3) - 8640)] : (int16_t)0);
      }
    }
  }
  for (int32_t i = 0; i < 14; ++i) {
    for (int32_t j = 0; j < 14; ++j) {
      for (int32_t c = 0; c < 576; ++c) {
        ((int32_t*)DepthwiseConv2d)[(((i * 8064) + (j * 576)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 576);
            int32_t cse_var_3 = (dj * 576);
            int32_t cse_var_2 = (((i * 8064) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d)[cse_var_2] = (((int32_t*)DepthwiseConv2d)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput)[(((((i * 9216) + (di * 9216)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)placeholder1)[(((di * 1728) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 576; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 8064) + (ax2 * 576)) + ax3);
        ((int32_t*)DepthwiseConv2d)[cse_var_5] = (((int32_t*)DepthwiseConv2d)[cse_var_5] + ((int32_t*)placeholder2)[ax3]);
      }
    }
  }
  for (int32_t i11 = 0; i11 < 14; ++i11) {
    for (int32_t i21 = 0; i21 < 14; ++i21) {
      for (int32_t i31 = 0; i31 < 576; ++i31) {
        int32_t cse_var_6 = (((i11 * 8064) + (i21 * 576)) + i31);
        ((int32_t*)DepthwiseConv2d)[cse_var_6] = ((int32_t)(((((0 != 0) ? (((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6]) << ((int64_t)0)) : ((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6])) * (int64_t)1216602493) + ((int64_t)1 << ((int64_t)((3 + 31) - 1)))) >> ((int64_t)(3 + 31))));
      }
    }
  }
  for (int32_t i12 = 0; i12 < 14; ++i12) {
    for (int32_t i22 = 0; i22 < 14; ++i22) {
      for (int32_t i32 = 0; i32 < 576; ++i32) {
        int32_t cse_var_7 = (((i12 * 8064) + (i22 * 576)) + i32);
        int32_t _1 = ((int32_t*)DepthwiseConv2d)[cse_var_7];
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)DepthwiseConv2d)[cse_var_7] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  for (int32_t ax11 = 0; ax11 < 14; ++ax11) {
    for (int32_t ax21 = 0; ax21 < 14; ++ax21) {
      for (int32_t ax31 = 0; ax31 < 576; ++ax31) {
        int32_t cse_var_8 = (((ax11 * 8064) + (ax21 * 576)) + ax31);
        ((int16_t*)T_cast)[cse_var_8] = ((int16_t)((int32_t*)DepthwiseConv2d)[cse_var_8]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, DepthwiseConv2d) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, PaddedInput) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_24(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)37632, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1344) + (i2 * 96)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 9; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 96; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 96) + rc)]) * ((int32_t)((int16_t*)placeholder1)[(((rc * 576) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)]))) * (int64_t)1892191308) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)));
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int16_t*)T_cast)[(((ax0_ax1_fused_ax2_fused * 576) + cse_var_2) + ax3_inner)] = ((int16_t)((_2) > (0) ? (_2) : (0)));
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_25(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* PaddedInput = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)294912, 0, 16);
  if (PaddedInput == NULL) {
    return -1;
  }
  void* DepthwiseConv2d = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)451584, 0, 32);
  if (DepthwiseConv2d == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 16; ++i1) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 576; ++i3) {
        int32_t cse_var_1 = (i2 * 576);
        ((int16_t*)PaddedInput)[(((i1 * 9216) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 15)) && (1 <= i2)) && (i2 < 15)) ? ((int16_t*)placeholder)[((((i1 * 8064) + cse_var_1) + i3) - 8640)] : (int16_t)0);
      }
    }
  }
  for (int32_t i = 0; i < 14; ++i) {
    for (int32_t j = 0; j < 14; ++j) {
      for (int32_t c = 0; c < 576; ++c) {
        ((int32_t*)DepthwiseConv2d)[(((i * 8064) + (j * 576)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 576);
            int32_t cse_var_3 = (dj * 576);
            int32_t cse_var_2 = (((i * 8064) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d)[cse_var_2] = (((int32_t*)DepthwiseConv2d)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput)[(((((i * 9216) + (di * 9216)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)placeholder1)[(((di * 1728) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 576; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 8064) + (ax2 * 576)) + ax3);
        ((int32_t*)DepthwiseConv2d)[cse_var_5] = (((int32_t*)DepthwiseConv2d)[cse_var_5] + ((int32_t*)placeholder2)[ax3]);
      }
    }
  }
  for (int32_t i11 = 0; i11 < 14; ++i11) {
    for (int32_t i21 = 0; i21 < 14; ++i21) {
      for (int32_t i31 = 0; i31 < 576; ++i31) {
        int32_t cse_var_6 = (((i11 * 8064) + (i21 * 576)) + i31);
        ((int32_t*)DepthwiseConv2d)[cse_var_6] = ((int32_t)(((((0 != 0) ? (((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6]) << ((int64_t)0)) : ((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6])) * (int64_t)1200348403) + ((int64_t)1 << ((int64_t)((3 + 31) - 1)))) >> ((int64_t)(3 + 31))));
      }
    }
  }
  for (int32_t i12 = 0; i12 < 14; ++i12) {
    for (int32_t i22 = 0; i22 < 14; ++i22) {
      for (int32_t i32 = 0; i32 < 576; ++i32) {
        int32_t cse_var_7 = (((i12 * 8064) + (i22 * 576)) + i32);
        int32_t _1 = ((int32_t*)DepthwiseConv2d)[cse_var_7];
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)DepthwiseConv2d)[cse_var_7] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  for (int32_t ax11 = 0; ax11 < 14; ++ax11) {
    for (int32_t ax21 = 0; ax21 < 14; ++ax21) {
      for (int32_t ax31 = 0; ax31 < 576; ++ax31) {
        int32_t cse_var_8 = (((ax11 * 8064) + (ax21 * 576)) + ax31);
        ((int16_t*)T_cast)[cse_var_8] = ((int16_t)((int32_t*)DepthwiseConv2d)[cse_var_8]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, DepthwiseConv2d) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, PaddedInput) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_26(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)37632, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1344) + (i2 * 96)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 9; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 96; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 96) + rc)]) * ((int32_t)((int16_t*)placeholder1)[(((rc * 576) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)]))) * (int64_t)2001886975) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)));
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int16_t*)T_cast)[(((ax0_ax1_fused_ax2_fused * 576) + cse_var_2) + ax3_inner)] = ((int16_t)((_2) > (0) ? (_2) : (0)));
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_27(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* PaddedInput = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)259200, 0, 16);
  if (PaddedInput == NULL) {
    return -1;
  }
  void* DepthwiseConv2d = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)112896, 0, 32);
  if (DepthwiseConv2d == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 15; ++i1) {
    for (int32_t i2 = 0; i2 < 15; ++i2) {
      for (int32_t i3 = 0; i3 < 576; ++i3) {
        int32_t cse_var_1 = (i2 * 576);
        ((int16_t*)PaddedInput)[(((i1 * 8640) + cse_var_1) + i3)] = (((i1 < 14) && (i2 < 14)) ? ((int16_t*)placeholder)[(((i1 * 8064) + cse_var_1) + i3)] : (int16_t)0);
      }
    }
  }
  for (int32_t i = 0; i < 7; ++i) {
    for (int32_t j = 0; j < 7; ++j) {
      for (int32_t c = 0; c < 576; ++c) {
        ((int32_t*)DepthwiseConv2d)[(((i * 4032) + (j * 576)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 576);
            int32_t cse_var_2 = (((i * 4032) + (j * 576)) + c);
            ((int32_t*)DepthwiseConv2d)[cse_var_2] = (((int32_t*)DepthwiseConv2d)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput)[(((((i * 17280) + (di * 8640)) + (j * 1152)) + cse_var_3) + c)]) * ((int32_t)((int16_t*)placeholder1)[(((di * 1728) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 7; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 576; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 4032) + (ax2 * 576)) + ax3);
        ((int32_t*)DepthwiseConv2d)[cse_var_4] = (((int32_t*)DepthwiseConv2d)[cse_var_4] + ((int32_t*)placeholder2)[ax3]);
      }
    }
  }
  for (int32_t i11 = 0; i11 < 7; ++i11) {
    for (int32_t i21 = 0; i21 < 7; ++i21) {
      for (int32_t i31 = 0; i31 < 576; ++i31) {
        int32_t cse_var_5 = (((i11 * 4032) + (i21 * 576)) + i31);
        ((int32_t*)DepthwiseConv2d)[cse_var_5] = ((int32_t)(((((0 != 0) ? (((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_5]) << ((int64_t)0)) : ((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_5])) * (int64_t)2046079040) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31))));
      }
    }
  }
  for (int32_t i12 = 0; i12 < 7; ++i12) {
    for (int32_t i22 = 0; i22 < 7; ++i22) {
      for (int32_t i32 = 0; i32 < 576; ++i32) {
        int32_t cse_var_6 = (((i12 * 4032) + (i22 * 576)) + i32);
        int32_t _1 = ((int32_t*)DepthwiseConv2d)[cse_var_6];
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)DepthwiseConv2d)[cse_var_6] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  for (int32_t ax11 = 0; ax11 < 7; ++ax11) {
    for (int32_t ax21 = 0; ax21 < 7; ++ax21) {
      for (int32_t ax31 = 0; ax31 < 576; ++ax31) {
        int32_t cse_var_7 = (((ax11 * 4032) + (ax21 * 576)) + ax31);
        ((int16_t*)T_cast)[cse_var_7] = ((int16_t)((int32_t*)DepthwiseConv2d)[cse_var_7]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, DepthwiseConv2d) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, PaddedInput) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_28(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)15680, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 160; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1120) + (i2 * 160)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 15; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 160; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 160) + rc)]) * ((int32_t)((int16_t*)placeholder1)[(((rc * 960) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)]))) * (int64_t)1625662881) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)));
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int16_t*)T_cast)[(((ax0_ax1_fused_ax2_fused * 960) + cse_var_2) + ax3_inner)] = ((int16_t)((_2) > (0) ? (_2) : (0)));
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_29(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* PaddedInput = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)155520, 0, 16);
  if (PaddedInput == NULL) {
    return -1;
  }
  void* DepthwiseConv2d = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)188160, 0, 32);
  if (DepthwiseConv2d == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 9; ++i1) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      for (int32_t i3 = 0; i3 < 960; ++i3) {
        int32_t cse_var_1 = (i2 * 960);
        ((int16_t*)PaddedInput)[(((i1 * 8640) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 8)) && (1 <= i2)) && (i2 < 8)) ? ((int16_t*)placeholder)[((((i1 * 6720) + cse_var_1) + i3) - 7680)] : (int16_t)0);
      }
    }
  }
  for (int32_t i = 0; i < 7; ++i) {
    for (int32_t j = 0; j < 7; ++j) {
      for (int32_t c = 0; c < 960; ++c) {
        ((int32_t*)DepthwiseConv2d)[(((i * 6720) + (j * 960)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 960);
            int32_t cse_var_3 = (dj * 960);
            int32_t cse_var_2 = (((i * 6720) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d)[cse_var_2] = (((int32_t*)DepthwiseConv2d)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput)[(((((i * 8640) + (di * 8640)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)placeholder1)[(((di * 2880) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 7; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 960; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 6720) + (ax2 * 960)) + ax3);
        ((int32_t*)DepthwiseConv2d)[cse_var_5] = (((int32_t*)DepthwiseConv2d)[cse_var_5] + ((int32_t*)placeholder2)[ax3]);
      }
    }
  }
  for (int32_t i11 = 0; i11 < 7; ++i11) {
    for (int32_t i21 = 0; i21 < 7; ++i21) {
      for (int32_t i31 = 0; i31 < 960; ++i31) {
        int32_t cse_var_6 = (((i11 * 6720) + (i21 * 960)) + i31);
        ((int32_t*)DepthwiseConv2d)[cse_var_6] = ((int32_t)(((((0 != 0) ? (((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6]) << ((int64_t)0)) : ((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6])) * (int64_t)1407572609) + ((int64_t)1 << ((int64_t)((4 + 31) - 1)))) >> ((int64_t)(4 + 31))));
      }
    }
  }
  for (int32_t i12 = 0; i12 < 7; ++i12) {
    for (int32_t i22 = 0; i22 < 7; ++i22) {
      for (int32_t i32 = 0; i32 < 960; ++i32) {
        int32_t cse_var_7 = (((i12 * 6720) + (i22 * 960)) + i32);
        int32_t _1 = ((int32_t*)DepthwiseConv2d)[cse_var_7];
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)DepthwiseConv2d)[cse_var_7] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  for (int32_t ax11 = 0; ax11 < 7; ++ax11) {
    for (int32_t ax21 = 0; ax21 < 7; ++ax21) {
      for (int32_t ax31 = 0; ax31 < 960; ++ax31) {
        int32_t cse_var_8 = (((ax11 * 6720) + (ax21 * 960)) + ax31);
        ((int16_t*)T_cast)[cse_var_8] = ((int16_t)((int32_t*)DepthwiseConv2d)[cse_var_8]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, DepthwiseConv2d) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, PaddedInput) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_3(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* PaddedInput = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)2451648, 0, 16);
  if (PaddedInput == NULL) {
    return -1;
  }
  void* DepthwiseConv2d = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)1204224, 0, 32);
  if (DepthwiseConv2d == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 113; ++i1) {
    for (int32_t i2 = 0; i2 < 113; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (i2 * 96);
        ((int16_t*)PaddedInput)[(((i1 * 10848) + cse_var_1) + i3)] = (((i1 < 112) && (i2 < 112)) ? ((int16_t*)placeholder)[(((i1 * 10752) + cse_var_1) + i3)] : (int16_t)0);
      }
    }
  }
  for (int32_t i = 0; i < 56; ++i) {
    for (int32_t j = 0; j < 56; ++j) {
      for (int32_t c = 0; c < 96; ++c) {
        ((int32_t*)DepthwiseConv2d)[(((i * 5376) + (j * 96)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 96);
            int32_t cse_var_2 = (((i * 5376) + (j * 96)) + c);
            ((int32_t*)DepthwiseConv2d)[cse_var_2] = (((int32_t*)DepthwiseConv2d)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput)[(((((i * 21696) + (di * 10848)) + (j * 192)) + cse_var_3) + c)]) * ((int32_t)((int16_t*)placeholder1)[(((di * 288) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 56; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 56; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 5376) + (ax2 * 96)) + ax3);
        ((int32_t*)DepthwiseConv2d)[cse_var_4] = (((int32_t*)DepthwiseConv2d)[cse_var_4] + ((int32_t*)placeholder2)[ax3]);
      }
    }
  }
  for (int32_t i11 = 0; i11 < 56; ++i11) {
    for (int32_t i21 = 0; i21 < 56; ++i21) {
      for (int32_t i31 = 0; i31 < 96; ++i31) {
        int32_t cse_var_5 = (((i11 * 5376) + (i21 * 96)) + i31);
        ((int32_t*)DepthwiseConv2d)[cse_var_5] = ((int32_t)(((((0 != 0) ? (((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_5]) << ((int64_t)0)) : ((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_5])) * (int64_t)1336207089) + ((int64_t)1 << ((int64_t)((5 + 31) - 1)))) >> ((int64_t)(5 + 31))));
      }
    }
  }
  for (int32_t i12 = 0; i12 < 56; ++i12) {
    for (int32_t i22 = 0; i22 < 56; ++i22) {
      for (int32_t i32 = 0; i32 < 96; ++i32) {
        int32_t cse_var_6 = (((i12 * 5376) + (i22 * 96)) + i32);
        int32_t _1 = ((int32_t*)DepthwiseConv2d)[cse_var_6];
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)DepthwiseConv2d)[cse_var_6] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  for (int32_t ax11 = 0; ax11 < 56; ++ax11) {
    for (int32_t ax21 = 0; ax21 < 56; ++ax21) {
      for (int32_t ax31 = 0; ax31 < 96; ++ax31) {
        int32_t cse_var_7 = (((ax11 * 5376) + (ax21 * 96)) + ax31);
        ((int16_t*)T_cast)[cse_var_7] = ((int16_t)((int32_t*)DepthwiseConv2d)[cse_var_7]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, DepthwiseConv2d) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, PaddedInput) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_30(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)15680, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 160; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1120) + (i2 * 160)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 15; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 160; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 160) + rc)]) * ((int32_t)((int16_t*)placeholder1)[(((rc * 960) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)]))) * (int64_t)1432480978) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)));
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int16_t*)T_cast)[(((ax0_ax1_fused_ax2_fused * 960) + cse_var_2) + ax3_inner)] = ((int16_t)((_2) > (0) ? (_2) : (0)));
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_31(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* PaddedInput = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)155520, 0, 16);
  if (PaddedInput == NULL) {
    return -1;
  }
  void* DepthwiseConv2d = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)188160, 0, 32);
  if (DepthwiseConv2d == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 9; ++i1) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      for (int32_t i3 = 0; i3 < 960; ++i3) {
        int32_t cse_var_1 = (i2 * 960);
        ((int16_t*)PaddedInput)[(((i1 * 8640) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 8)) && (1 <= i2)) && (i2 < 8)) ? ((int16_t*)placeholder)[((((i1 * 6720) + cse_var_1) + i3) - 7680)] : (int16_t)0);
      }
    }
  }
  for (int32_t i = 0; i < 7; ++i) {
    for (int32_t j = 0; j < 7; ++j) {
      for (int32_t c = 0; c < 960; ++c) {
        ((int32_t*)DepthwiseConv2d)[(((i * 6720) + (j * 960)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 960);
            int32_t cse_var_3 = (dj * 960);
            int32_t cse_var_2 = (((i * 6720) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d)[cse_var_2] = (((int32_t*)DepthwiseConv2d)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput)[(((((i * 8640) + (di * 8640)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)placeholder1)[(((di * 2880) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 7; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 960; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 6720) + (ax2 * 960)) + ax3);
        ((int32_t*)DepthwiseConv2d)[cse_var_5] = (((int32_t*)DepthwiseConv2d)[cse_var_5] + ((int32_t*)placeholder2)[ax3]);
      }
    }
  }
  for (int32_t i11 = 0; i11 < 7; ++i11) {
    for (int32_t i21 = 0; i21 < 7; ++i21) {
      for (int32_t i31 = 0; i31 < 960; ++i31) {
        int32_t cse_var_6 = (((i11 * 6720) + (i21 * 960)) + i31);
        ((int32_t*)DepthwiseConv2d)[cse_var_6] = ((int32_t)(((((0 != 0) ? (((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6]) << ((int64_t)0)) : ((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6])) * (int64_t)1509851221) + ((int64_t)1 << ((int64_t)((4 + 31) - 1)))) >> ((int64_t)(4 + 31))));
      }
    }
  }
  for (int32_t i12 = 0; i12 < 7; ++i12) {
    for (int32_t i22 = 0; i22 < 7; ++i22) {
      for (int32_t i32 = 0; i32 < 960; ++i32) {
        int32_t cse_var_7 = (((i12 * 6720) + (i22 * 960)) + i32);
        int32_t _1 = ((int32_t*)DepthwiseConv2d)[cse_var_7];
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)DepthwiseConv2d)[cse_var_7] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  for (int32_t ax11 = 0; ax11 < 7; ++ax11) {
    for (int32_t ax21 = 0; ax21 < 7; ++ax21) {
      for (int32_t ax31 = 0; ax31 < 960; ++ax31) {
        int32_t cse_var_8 = (((ax11 * 6720) + (ax21 * 960)) + ax31);
        ((int16_t*)T_cast)[cse_var_8] = ((int16_t)((int32_t*)DepthwiseConv2d)[cse_var_8]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, DepthwiseConv2d) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, PaddedInput) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_32(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)15680, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 160; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1120) + (i2 * 160)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 15; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 160; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 160) + rc)]) * ((int32_t)((int16_t*)placeholder1)[(((rc * 960) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)]))) * (int64_t)1328839846) + ((int64_t)1 << ((int64_t)((5 + 31) - 1)))) >> ((int64_t)(5 + 31)));
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int16_t*)T_cast)[(((ax0_ax1_fused_ax2_fused * 960) + cse_var_2) + ax3_inner)] = ((int16_t)((_2) > (0) ? (_2) : (0)));
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_33(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* PaddedInput = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)155520, 0, 16);
  if (PaddedInput == NULL) {
    return -1;
  }
  void* DepthwiseConv2d = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)188160, 0, 32);
  if (DepthwiseConv2d == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 9; ++i1) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      for (int32_t i3 = 0; i3 < 960; ++i3) {
        int32_t cse_var_1 = (i2 * 960);
        ((int16_t*)PaddedInput)[(((i1 * 8640) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 8)) && (1 <= i2)) && (i2 < 8)) ? ((int16_t*)placeholder)[((((i1 * 6720) + cse_var_1) + i3) - 7680)] : (int16_t)0);
      }
    }
  }
  for (int32_t i = 0; i < 7; ++i) {
    for (int32_t j = 0; j < 7; ++j) {
      for (int32_t c = 0; c < 960; ++c) {
        ((int32_t*)DepthwiseConv2d)[(((i * 6720) + (j * 960)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 960);
            int32_t cse_var_3 = (dj * 960);
            int32_t cse_var_2 = (((i * 6720) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d)[cse_var_2] = (((int32_t*)DepthwiseConv2d)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput)[(((((i * 8640) + (di * 8640)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)placeholder1)[(((di * 2880) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 7; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 960; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 6720) + (ax2 * 960)) + ax3);
        ((int32_t*)DepthwiseConv2d)[cse_var_5] = (((int32_t*)DepthwiseConv2d)[cse_var_5] + ((int32_t*)placeholder2)[ax3]);
      }
    }
  }
  for (int32_t i11 = 0; i11 < 7; ++i11) {
    for (int32_t i21 = 0; i21 < 7; ++i21) {
      for (int32_t i31 = 0; i31 < 960; ++i31) {
        int32_t cse_var_6 = (((i11 * 6720) + (i21 * 960)) + i31);
        ((int32_t*)DepthwiseConv2d)[cse_var_6] = ((int32_t)(((((0 != 0) ? (((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6]) << ((int64_t)0)) : ((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6])) * (int64_t)1364634088) + ((int64_t)1 << ((int64_t)((2 + 31) - 1)))) >> ((int64_t)(2 + 31))));
      }
    }
  }
  for (int32_t i12 = 0; i12 < 7; ++i12) {
    for (int32_t i22 = 0; i22 < 7; ++i22) {
      for (int32_t i32 = 0; i32 < 960; ++i32) {
        int32_t cse_var_7 = (((i12 * 6720) + (i22 * 960)) + i32);
        int32_t _1 = ((int32_t*)DepthwiseConv2d)[cse_var_7];
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)DepthwiseConv2d)[cse_var_7] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  for (int32_t ax11 = 0; ax11 < 7; ++ax11) {
    for (int32_t ax21 = 0; ax21 < 7; ++ax21) {
      for (int32_t ax31 = 0; ax31 < 960; ++ax31) {
        int32_t cse_var_8 = (((ax11 * 6720) + (ax21 * 960)) + ax31);
        ((int16_t*)T_cast)[cse_var_8] = ((int16_t)((int32_t*)DepthwiseConv2d)[cse_var_8]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, DepthwiseConv2d) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, PaddedInput) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_4(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)150528, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 56; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 56; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1344) + (i2 * 24)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3136; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 24; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 24) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 144) + ax3)])));
      }
      int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1523971812) + ((int64_t)1 << ((int64_t)((4 + 31) - 1)))) >> ((int64_t)(4 + 31)));
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      ((int16_t*)T_cast)[((ax0_ax1_fused_ax2_fused * 144) + ax3)] = ((int16_t)((_2) > (0) ? (_2) : (0)));
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_5(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* PaddedInput = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)968832, 0, 16);
  if (PaddedInput == NULL) {
    return -1;
  }
  void* DepthwiseConv2d = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)1806336, 0, 32);
  if (DepthwiseConv2d == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 58; ++i1) {
    for (int32_t i2 = 0; i2 < 58; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (i2 * 144);
        ((int16_t*)PaddedInput)[(((i1 * 8352) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 57)) && (1 <= i2)) && (i2 < 57)) ? ((int16_t*)placeholder)[((((i1 * 8064) + cse_var_1) + i3) - 8208)] : (int16_t)0);
      }
    }
  }
  for (int32_t i = 0; i < 56; ++i) {
    for (int32_t j = 0; j < 56; ++j) {
      for (int32_t c = 0; c < 144; ++c) {
        ((int32_t*)DepthwiseConv2d)[(((i * 8064) + (j * 144)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 144);
            int32_t cse_var_3 = (dj * 144);
            int32_t cse_var_2 = (((i * 8064) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d)[cse_var_2] = (((int32_t*)DepthwiseConv2d)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput)[(((((i * 8352) + (di * 8352)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)placeholder1)[(((di * 432) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 56; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 56; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 8064) + (ax2 * 144)) + ax3);
        ((int32_t*)DepthwiseConv2d)[cse_var_5] = (((int32_t*)DepthwiseConv2d)[cse_var_5] + ((int32_t*)placeholder2)[ax3]);
      }
    }
  }
  for (int32_t i11 = 0; i11 < 56; ++i11) {
    for (int32_t i21 = 0; i21 < 56; ++i21) {
      for (int32_t i31 = 0; i31 < 144; ++i31) {
        int32_t cse_var_6 = (((i11 * 8064) + (i21 * 144)) + i31);
        ((int32_t*)DepthwiseConv2d)[cse_var_6] = ((int32_t)(((((0 != 0) ? (((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6]) << ((int64_t)0)) : ((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6])) * (int64_t)1458735291) + ((int64_t)1 << ((int64_t)((2 + 31) - 1)))) >> ((int64_t)(2 + 31))));
      }
    }
  }
  for (int32_t i12 = 0; i12 < 56; ++i12) {
    for (int32_t i22 = 0; i22 < 56; ++i22) {
      for (int32_t i32 = 0; i32 < 144; ++i32) {
        int32_t cse_var_7 = (((i12 * 8064) + (i22 * 144)) + i32);
        int32_t _1 = ((int32_t*)DepthwiseConv2d)[cse_var_7];
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)DepthwiseConv2d)[cse_var_7] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  for (int32_t ax11 = 0; ax11 < 56; ++ax11) {
    for (int32_t ax21 = 0; ax21 < 56; ++ax21) {
      for (int32_t ax31 = 0; ax31 < 144; ++ax31) {
        int32_t cse_var_8 = (((ax11 * 8064) + (ax21 * 144)) + ax31);
        ((int16_t*)T_cast)[cse_var_8] = ((int16_t)((int32_t*)DepthwiseConv2d)[cse_var_8]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, DepthwiseConv2d) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, PaddedInput) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_6(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)150528, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 56; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 56; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1344) + (i2 * 24)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3136; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 24; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 24) + rc)]) * ((int32_t)((int16_t*)placeholder1)[((rc * 144) + ax3)])));
      }
      int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[0] + ((int32_t*)placeholder2)[ax3]))) * (int64_t)1927580083) + ((int64_t)1 << ((int64_t)((4 + 31) - 1)))) >> ((int64_t)(4 + 31)));
      int32_t _2 = (_1) < (255) ? (_1) : (255);
      ((int16_t*)T_cast)[((ax0_ax1_fused_ax2_fused * 144) + ax3)] = ((int16_t)((_2) > (0) ? (_2) : (0)));
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_7(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* PaddedInput = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)935712, 0, 16);
  if (PaddedInput == NULL) {
    return -1;
  }
  void* DepthwiseConv2d = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)451584, 0, 32);
  if (DepthwiseConv2d == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 57; ++i1) {
    for (int32_t i2 = 0; i2 < 57; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (i2 * 144);
        ((int16_t*)PaddedInput)[(((i1 * 8208) + cse_var_1) + i3)] = (((i1 < 56) && (i2 < 56)) ? ((int16_t*)placeholder)[(((i1 * 8064) + cse_var_1) + i3)] : (int16_t)0);
      }
    }
  }
  for (int32_t i = 0; i < 28; ++i) {
    for (int32_t j = 0; j < 28; ++j) {
      for (int32_t c = 0; c < 144; ++c) {
        ((int32_t*)DepthwiseConv2d)[(((i * 4032) + (j * 144)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 144);
            int32_t cse_var_2 = (((i * 4032) + (j * 144)) + c);
            ((int32_t*)DepthwiseConv2d)[cse_var_2] = (((int32_t*)DepthwiseConv2d)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput)[(((((i * 16416) + (di * 8208)) + (j * 288)) + cse_var_3) + c)]) * ((int32_t)((int16_t*)placeholder1)[(((di * 432) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 28; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 4032) + (ax2 * 144)) + ax3);
        ((int32_t*)DepthwiseConv2d)[cse_var_4] = (((int32_t*)DepthwiseConv2d)[cse_var_4] + ((int32_t*)placeholder2)[ax3]);
      }
    }
  }
  for (int32_t i11 = 0; i11 < 28; ++i11) {
    for (int32_t i21 = 0; i21 < 28; ++i21) {
      for (int32_t i31 = 0; i31 < 144; ++i31) {
        int32_t cse_var_5 = (((i11 * 4032) + (i21 * 144)) + i31);
        ((int32_t*)DepthwiseConv2d)[cse_var_5] = ((int32_t)(((((0 != 0) ? (((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_5]) << ((int64_t)0)) : ((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_5])) * (int64_t)1176112665) + ((int64_t)1 << ((int64_t)((5 + 31) - 1)))) >> ((int64_t)(5 + 31))));
      }
    }
  }
  for (int32_t i12 = 0; i12 < 28; ++i12) {
    for (int32_t i22 = 0; i22 < 28; ++i22) {
      for (int32_t i32 = 0; i32 < 144; ++i32) {
        int32_t cse_var_6 = (((i12 * 4032) + (i22 * 144)) + i32);
        int32_t _1 = ((int32_t*)DepthwiseConv2d)[cse_var_6];
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)DepthwiseConv2d)[cse_var_6] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  for (int32_t ax11 = 0; ax11 < 28; ++ax11) {
    for (int32_t ax21 = 0; ax21 < 28; ++ax21) {
      for (int32_t ax31 = 0; ax31 < 144; ++ax31) {
        int32_t cse_var_7 = (((ax11 * 4032) + (ax21 * 144)) + ax31);
        ((int16_t*)T_cast)[cse_var_7] = ((int16_t)((int32_t*)DepthwiseConv2d)[cse_var_7]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, DepthwiseConv2d) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, PaddedInput) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_8(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)50176, 0, 16);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 28; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 28; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 896) + (i2 * 32)) + i3);
        ((int16_t*)pad_temp)[cse_var_1] = ((int16_t*)placeholder)[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 784; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 32; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int16_t*)placeholder1)[(((rc * 192) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t _1 = (int32_t)(((((0 != 0) ? (((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)placeholder2)[(cse_var_2 + ax3_inner)]))) * (int64_t)1383316045) + ((int64_t)1 << ((int64_t)((5 + 31) - 1)))) >> ((int64_t)(5 + 31)));
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int16_t*)T_cast)[(((ax0_ax1_fused_ax2_fused * 192) + cse_var_2) + ax3_inner)] = ((int16_t)((_2) > (0) ? (_2) : (0)));
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_clip_cast_9(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_placeholder1 = (((TVMValue*)args)[1].v_handle);
  int32_t arg_placeholder_code1 = arg_type_ids[1];
  void* arg_placeholder2 = (((TVMValue*)args)[2].v_handle);
  int32_t arg_placeholder_code2 = arg_type_ids[2];
  void* arg_T_cast = (((TVMValue*)args)[3].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[3];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* placeholder1 = (((DLTensor*)arg_placeholder1)[0].data);
  void* arg_placeholder_shape1 = (((DLTensor*)arg_placeholder1)[0].shape);
  void* arg_placeholder_strides1 = (((DLTensor*)arg_placeholder1)[0].strides);
  void* placeholder2 = (((DLTensor*)arg_placeholder2)[0].data);
  void* arg_placeholder_shape2 = (((DLTensor*)arg_placeholder2)[0].shape);
  void* arg_placeholder_strides2 = (((DLTensor*)arg_placeholder2)[0].strides);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_placeholder_strides1 == NULL)) {
  }
  if (!(arg_placeholder_strides2 == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  void* PaddedInput = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)345600, 0, 16);
  if (PaddedInput == NULL) {
    return -1;
  }
  void* DepthwiseConv2d = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)602112, 0, 32);
  if (DepthwiseConv2d == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 30; ++i1) {
    for (int32_t i2 = 0; i2 < 30; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (i2 * 192);
        ((int16_t*)PaddedInput)[(((i1 * 5760) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 29)) && (1 <= i2)) && (i2 < 29)) ? ((int16_t*)placeholder)[((((i1 * 5376) + cse_var_1) + i3) - 5568)] : (int16_t)0);
      }
    }
  }
  for (int32_t i = 0; i < 28; ++i) {
    for (int32_t j = 0; j < 28; ++j) {
      for (int32_t c = 0; c < 192; ++c) {
        ((int32_t*)DepthwiseConv2d)[(((i * 5376) + (j * 192)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 192);
            int32_t cse_var_3 = (dj * 192);
            int32_t cse_var_2 = (((i * 5376) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d)[cse_var_2] = (((int32_t*)DepthwiseConv2d)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput)[(((((i * 5760) + (di * 5760)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)placeholder1)[(((di * 576) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 28; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 192; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 5376) + (ax2 * 192)) + ax3);
        ((int32_t*)DepthwiseConv2d)[cse_var_5] = (((int32_t*)DepthwiseConv2d)[cse_var_5] + ((int32_t*)placeholder2)[ax3]);
      }
    }
  }
  for (int32_t i11 = 0; i11 < 28; ++i11) {
    for (int32_t i21 = 0; i21 < 28; ++i21) {
      for (int32_t i31 = 0; i31 < 192; ++i31) {
        int32_t cse_var_6 = (((i11 * 5376) + (i21 * 192)) + i31);
        ((int32_t*)DepthwiseConv2d)[cse_var_6] = ((int32_t)(((((0 != 0) ? (((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6]) << ((int64_t)0)) : ((int64_t)((int32_t*)DepthwiseConv2d)[cse_var_6])) * (int64_t)1153711130) + ((int64_t)1 << ((int64_t)((3 + 31) - 1)))) >> ((int64_t)(3 + 31))));
      }
    }
  }
  for (int32_t i12 = 0; i12 < 28; ++i12) {
    for (int32_t i22 = 0; i22 < 28; ++i22) {
      for (int32_t i32 = 0; i32 < 192; ++i32) {
        int32_t cse_var_7 = (((i12 * 5376) + (i22 * 192)) + i32);
        int32_t _1 = ((int32_t*)DepthwiseConv2d)[cse_var_7];
        int32_t _2 = (_1) < (255) ? (_1) : (255);
        ((int32_t*)DepthwiseConv2d)[cse_var_7] = ((_2) > (0) ? (_2) : (0));
      }
    }
  }
  for (int32_t ax11 = 0; ax11 < 28; ++ax11) {
    for (int32_t ax21 = 0; ax21 < 28; ++ax21) {
      for (int32_t ax31 = 0; ax31 < 192; ++ax31) {
        int32_t cse_var_8 = (((ax11 * 5376) + (ax21 * 192)) + ax31);
        ((int16_t*)T_cast)[cse_var_8] = ((int16_t)((int32_t*)DepthwiseConv2d)[cse_var_8]);
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, DepthwiseConv2d) != 0) {
    return -1;
  }
  if (TVMBackendFreeWorkspace(1, dev_id, PaddedInput) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_clip_cast(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_T_cast = (((TVMValue*)args)[1].v_handle);
  int32_t arg_T_cast_code = arg_type_ids[1];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* T_cast = (((DLTensor*)arg_T_cast)[0].data);
  void* arg_T_cast_shape = (((DLTensor*)arg_T_cast)[0].shape);
  void* arg_T_cast_strides = (((DLTensor*)arg_T_cast)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_T_cast_strides == NULL)) {
  }
  float T_softmax_maxelem[1];
  void* T_softmax_exp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)4004, 2, 32);
  if (T_softmax_exp == NULL) {
    return -1;
  }
  float T_softmax_expsum[1];
  T_softmax_maxelem[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 1001; ++k) {
    float _1 = T_softmax_maxelem[0];
    float _2 = ((float*)placeholder)[k];
    T_softmax_maxelem[0] = ((_1) > (_2) ? (_1) : (_2));
  }
  for (int32_t i1 = 0; i1 < 1001; ++i1) {
    ((float*)T_softmax_exp)[i1] = expf((((float*)placeholder)[i1] - T_softmax_maxelem[0]));
  }
  T_softmax_expsum[0] = 0.000000e+00f;
  for (int32_t k1 = 0; k1 < 1001; ++k1) {
    T_softmax_expsum[0] = (T_softmax_expsum[0] + ((float*)T_softmax_exp)[k1]);
  }
  for (int32_t i11 = 0; i11 < 1001; ++i11) {
    ((float*)T_softmax_exp)[i11] = (((float*)T_softmax_exp)[i11] / T_softmax_expsum[0]);
  }
  for (int32_t ax1 = 0; ax1 < 1001; ++ax1) {
    float _3 = roundf((((float*)T_softmax_exp)[ax1] * 2.560000e+02f));
    float _4 = (_3) < (2.550000e+02f) ? (_3) : (2.550000e+02f);
    ((uint8_t*)T_cast)[ax1] = ((uint8_t)((_4) > (0.000000e+00f) ? (_4) : (0.000000e+00f)));
  }
  if (TVMBackendFreeWorkspace(1, dev_id, T_softmax_exp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_cast_subtract_cast_multiply(void* args, int32_t* arg_type_ids, int32_t num_args, void* out_ret_value, int32_t* out_ret_tcode, void* resource_handle) {
  void* arg_placeholder = (((TVMValue*)args)[0].v_handle);
  int32_t arg_placeholder_code = arg_type_ids[0];
  void* arg_T_multiply = (((TVMValue*)args)[1].v_handle);
  int32_t arg_T_multiply_code = arg_type_ids[1];
  void* placeholder = (((DLTensor*)arg_placeholder)[0].data);
  void* arg_placeholder_shape = (((DLTensor*)arg_placeholder)[0].shape);
  void* arg_placeholder_strides = (((DLTensor*)arg_placeholder)[0].strides);
  int32_t dev_id = (((DLTensor*)arg_placeholder)[0].device.device_id);
  void* T_multiply = (((DLTensor*)arg_T_multiply)[0].data);
  void* arg_T_multiply_shape = (((DLTensor*)arg_T_multiply)[0].shape);
  void* arg_T_multiply_strides = (((DLTensor*)arg_T_multiply)[0].strides);
  if (!(arg_placeholder_strides == NULL)) {
  }
  if (!(arg_T_multiply_strides == NULL)) {
  }
  for (int32_t ax1_outer = 0; ax1_outer < 63; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      if (((ax1_outer * 16) + ax1_inner) < 1001) {
        int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
        ((float*)T_multiply)[cse_var_1] = (((float)(((int32_t)((uint8_t*)placeholder)[cse_var_1]) - 72)) * 7.604164e-02f);
      }
    }
  }
  return 0;
}


