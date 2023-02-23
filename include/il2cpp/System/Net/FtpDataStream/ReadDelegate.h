#pragma once

#include "il2cpp.h"

void System_Net_FtpDataStream_ReadDelegate___ctor (System_Net_FtpDataStream_ReadDelegate_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
int32_t System_Net_FtpDataStream_ReadDelegate__Invoke (System_Net_FtpDataStream_ReadDelegate_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
System_IAsyncResult_o* System_Net_FtpDataStream_ReadDelegate__BeginInvoke (System_Net_FtpDataStream_ReadDelegate_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
int32_t System_Net_FtpDataStream_ReadDelegate__EndInvoke (System_Net_FtpDataStream_ReadDelegate_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
