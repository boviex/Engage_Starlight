#pragma once

#include "il2cpp.h"

System_Net_LazyAsyncResult_ThreadContext_o* System_Net_LazyAsyncResult__get_CurrentThreadContext (const MethodInfo* method);
void System_Net_LazyAsyncResult___ctor (System_Net_LazyAsyncResult_o* __this, Il2CppObject* myObject, Il2CppObject* myState, System_AsyncCallback_o* myCallBack, const MethodInfo* method);
Il2CppObject* System_Net_LazyAsyncResult__get_AsyncObject (System_Net_LazyAsyncResult_o* __this, const MethodInfo* method);
Il2CppObject* System_Net_LazyAsyncResult__get_AsyncState (System_Net_LazyAsyncResult_o* __this, const MethodInfo* method);
System_Threading_WaitHandle_o* System_Net_LazyAsyncResult__get_AsyncWaitHandle (System_Net_LazyAsyncResult_o* __this, const MethodInfo* method);
bool System_Net_LazyAsyncResult__LazilyCreateEvent (System_Net_LazyAsyncResult_o* __this, System_Threading_ManualResetEvent_o** waitHandle, const MethodInfo* method);
bool System_Net_LazyAsyncResult__get_CompletedSynchronously (System_Net_LazyAsyncResult_o* __this, const MethodInfo* method);
bool System_Net_LazyAsyncResult__get_IsCompleted (System_Net_LazyAsyncResult_o* __this, const MethodInfo* method);
bool System_Net_LazyAsyncResult__get_InternalPeekCompleted (System_Net_LazyAsyncResult_o* __this, const MethodInfo* method);
void System_Net_LazyAsyncResult__ProtectedInvokeCallback (System_Net_LazyAsyncResult_o* __this, Il2CppObject* result, intptr_t userToken, const MethodInfo* method);
void System_Net_LazyAsyncResult__InvokeCallback (System_Net_LazyAsyncResult_o* __this, Il2CppObject* result, const MethodInfo* method);
void System_Net_LazyAsyncResult__Complete (System_Net_LazyAsyncResult_o* __this, intptr_t userToken, const MethodInfo* method);
void System_Net_LazyAsyncResult__WorkerThreadComplete (System_Net_LazyAsyncResult_o* __this, Il2CppObject* state, const MethodInfo* method);
void System_Net_LazyAsyncResult__Cleanup (System_Net_LazyAsyncResult_o* __this, const MethodInfo* method);
Il2CppObject* System_Net_LazyAsyncResult__InternalWaitForCompletion (System_Net_LazyAsyncResult_o* __this, const MethodInfo* method);
Il2CppObject* System_Net_LazyAsyncResult__WaitForCompletion (System_Net_LazyAsyncResult_o* __this, bool snap, const MethodInfo* method);
