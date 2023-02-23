#pragma once

#include "il2cpp.h"

void System_Net_HttpContinueDelegate___ctor (System_Net_HttpContinueDelegate_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
void System_Net_HttpContinueDelegate__Invoke (System_Net_HttpContinueDelegate_o* __this, int32_t StatusCode, System_Net_WebHeaderCollection_o* httpHeaders, const MethodInfo* method);
System_IAsyncResult_o* System_Net_HttpContinueDelegate__BeginInvoke (System_Net_HttpContinueDelegate_o* __this, int32_t StatusCode, System_Net_WebHeaderCollection_o* httpHeaders, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
void System_Net_HttpContinueDelegate__EndInvoke (System_Net_HttpContinueDelegate_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
