#pragma once

#include "il2cpp.h"

void nn_htcs_Htcs__InitializeSystem (const MethodInfo* method);
void nn_htcs_Htcs__FinalizeSystem (const MethodInfo* method);
int32_t nn_htcs_Htcs__Listen (const MethodInfo* method);
int32_t nn_htcs_Htcs__Accept (int32_t serviceSocket, const MethodInfo* method);
int32_t nn_htcs_Htcs__Connect (const MethodInfo* method);
void nn_htcs_Htcs__Close (int32_t sock, const MethodInfo* method);
int64_t nn_htcs_Htcs__Send (int32_t sock, System_Byte_array* buffer, int64_t size, const MethodInfo* method);
int64_t nn_htcs_Htcs__Recv (int32_t sock, System_Byte_array* buffer, int64_t size, const MethodInfo* method);
