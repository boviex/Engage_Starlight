#pragma once

#include "il2cpp.h"

void System_Net_BindIPEndPoint___ctor (System_Net_BindIPEndPoint_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
System_Net_IPEndPoint_o* System_Net_BindIPEndPoint__Invoke (System_Net_BindIPEndPoint_o* __this, System_Net_ServicePoint_o* servicePoint, System_Net_IPEndPoint_o* remoteEndPoint, int32_t retryCount, const MethodInfo* method);
System_IAsyncResult_o* System_Net_BindIPEndPoint__BeginInvoke (System_Net_BindIPEndPoint_o* __this, System_Net_ServicePoint_o* servicePoint, System_Net_IPEndPoint_o* remoteEndPoint, int32_t retryCount, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
System_Net_IPEndPoint_o* System_Net_BindIPEndPoint__EndInvoke (System_Net_BindIPEndPoint_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
