#pragma once

#include "il2cpp.h"

void System_IOAsyncResult___ctor (System_IOAsyncResult_o* __this, System_AsyncCallback_o* async_callback, Il2CppObject* async_state, const MethodInfo* method);
System_AsyncCallback_o* System_IOAsyncResult__get_AsyncCallback (System_IOAsyncResult_o* __this, const MethodInfo* method);
Il2CppObject* System_IOAsyncResult__get_AsyncState (System_IOAsyncResult_o* __this, const MethodInfo* method);
System_Threading_WaitHandle_o* System_IOAsyncResult__get_AsyncWaitHandle (System_IOAsyncResult_o* __this, const MethodInfo* method);
bool System_IOAsyncResult__get_CompletedSynchronously (System_IOAsyncResult_o* __this, const MethodInfo* method);
void System_IOAsyncResult__set_CompletedSynchronously (System_IOAsyncResult_o* __this, bool value, const MethodInfo* method);
bool System_IOAsyncResult__get_IsCompleted (System_IOAsyncResult_o* __this, const MethodInfo* method);
void System_IOAsyncResult__set_IsCompleted (System_IOAsyncResult_o* __this, bool value, const MethodInfo* method);
