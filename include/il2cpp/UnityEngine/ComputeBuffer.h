#pragma once

#include "il2cpp.h"

void UnityEngine_ComputeBuffer__Finalize (UnityEngine_ComputeBuffer_o* __this, const MethodInfo* method);
void UnityEngine_ComputeBuffer__Dispose (UnityEngine_ComputeBuffer_o* __this, const MethodInfo* method);
void UnityEngine_ComputeBuffer__Dispose (UnityEngine_ComputeBuffer_o* __this, bool disposing, const MethodInfo* method);
intptr_t UnityEngine_ComputeBuffer__InitBuffer (int32_t count, int32_t stride, int32_t type, int32_t usage, const MethodInfo* method);
void UnityEngine_ComputeBuffer__DestroyBuffer (UnityEngine_ComputeBuffer_o* buf, const MethodInfo* method);
void UnityEngine_ComputeBuffer___ctor (UnityEngine_ComputeBuffer_o* __this, int32_t count, int32_t stride, const MethodInfo* method);
void UnityEngine_ComputeBuffer___ctor (UnityEngine_ComputeBuffer_o* __this, int32_t count, int32_t stride, int32_t type, const MethodInfo* method);
void UnityEngine_ComputeBuffer___ctor (UnityEngine_ComputeBuffer_o* __this, int32_t count, int32_t stride, int32_t type, int32_t usage, const MethodInfo* method);
void UnityEngine_ComputeBuffer___ctor (UnityEngine_ComputeBuffer_o* __this, int32_t count, int32_t stride, int32_t type, int32_t usage, int32_t stackDepth, const MethodInfo* method);
void UnityEngine_ComputeBuffer__Release (UnityEngine_ComputeBuffer_o* __this, const MethodInfo* method);
int32_t UnityEngine_ComputeBuffer__get_count (UnityEngine_ComputeBuffer_o* __this, const MethodInfo* method);
int32_t UnityEngine_ComputeBuffer__get_stride (UnityEngine_ComputeBuffer_o* __this, const MethodInfo* method);
void UnityEngine_ComputeBuffer__SetData_ShaderInput_LightData_ (UnityEngine_ComputeBuffer_o* __this, Unity_Collections_NativeArray_T__o data, const MethodInfo_22C2220* method);
void UnityEngine_ComputeBuffer__SetData_ShaderInput_ShadowData_ (UnityEngine_ComputeBuffer_o* __this, Unity_Collections_NativeArray_T__o data, const MethodInfo_22C22A0* method);
void UnityEngine_ComputeBuffer__SetData_int_ (UnityEngine_ComputeBuffer_o* __this, System_Collections_Generic_List_T__o* data, int32_t managedBufferStartIndex, int32_t computeBufferStartIndex, int32_t count, const MethodInfo_22C2320* method);
void UnityEngine_ComputeBuffer__SetData_uint_ (UnityEngine_ComputeBuffer_o* __this, Unity_Collections_NativeArray_T__o data, int32_t nativeBufferStartIndex, int32_t computeBufferStartIndex, int32_t count, const MethodInfo_22C2610* method);
void UnityEngine_ComputeBuffer__SetData_uint4_ (UnityEngine_ComputeBuffer_o* __this, Unity_Collections_NativeArray_T__o data, int32_t nativeBufferStartIndex, int32_t computeBufferStartIndex, int32_t count, const MethodInfo_22C2770* method);
void UnityEngine_ComputeBuffer__InternalSetNativeData (UnityEngine_ComputeBuffer_o* __this, intptr_t data, int32_t nativeBufferStartIndex, int32_t computeBufferStartIndex, int32_t count, int32_t elemSize, const MethodInfo* method);
void UnityEngine_ComputeBuffer__InternalSetData (UnityEngine_ComputeBuffer_o* __this, System_Array_o* data, int32_t managedBufferStartIndex, int32_t computeBufferStartIndex, int32_t count, int32_t elemSize, const MethodInfo* method);
void UnityEngine_ComputeBuffer__set_name (UnityEngine_ComputeBuffer_o* __this, System_String_o* value, const MethodInfo* method);
void UnityEngine_ComputeBuffer__SetName (UnityEngine_ComputeBuffer_o* __this, System_String_o* name, const MethodInfo* method);
