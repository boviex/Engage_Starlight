#pragma once

#include "il2cpp.h"

void System_Net_TimerThread_Callback___ctor (System_Net_TimerThread_Callback_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
void System_Net_TimerThread_Callback__Invoke (System_Net_TimerThread_Callback_o* __this, System_Net_TimerThread_Timer_o* timer, int32_t timeNoticed, Il2CppObject* context, const MethodInfo* method);
System_IAsyncResult_o* System_Net_TimerThread_Callback__BeginInvoke (System_Net_TimerThread_Callback_o* __this, System_Net_TimerThread_Timer_o* timer, int32_t timeNoticed, Il2CppObject* context, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
void System_Net_TimerThread_Callback__EndInvoke (System_Net_TimerThread_Callback_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
