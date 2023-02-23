#pragma once

#include "il2cpp.h"

void nn_prepo_Struct__SetBuffer (int64_t structBufferSize, const MethodInfo* method);
nn_Result_o nn_prepo_Struct__Add (System_String_o* key, int64_t val, const MethodInfo* method);
nn_Result_o nn_prepo_Struct__Add (System_String_o* key, uint64_t val, const MethodInfo* method);
nn_Result_o nn_prepo_Struct__Add (System_String_o* key, float val, const MethodInfo* method);
nn_Result_o nn_prepo_Struct__Add (System_String_o* key, double val, const MethodInfo* method);
nn_Result_o nn_prepo_Struct__Add (System_String_o* key, System_String_o* val, const MethodInfo* method);
nn_Result_o nn_prepo_Struct__Add (System_String_o* key, bool val, const MethodInfo* method);
int32_t nn_prepo_Struct__GetCount (const MethodInfo* method);
int64_t nn_prepo_Struct__GetSize (const MethodInfo* method);
