#pragma once

#include "il2cpp.h"

void UniRx_Async_UnityAsyncExtensions_JobHandleAwaiter___ctor (UniRx_Async_UnityAsyncExtensions_JobHandleAwaiter_o* __this, Unity_Jobs_JobHandle_o jobHandle, System_Threading_CancellationToken_o cancellationToken, int32_t skipFrame, const MethodInfo* method);
bool UniRx_Async_UnityAsyncExtensions_JobHandleAwaiter__get_IsCompleted (UniRx_Async_UnityAsyncExtensions_JobHandleAwaiter_o* __this, const MethodInfo* method);
int32_t UniRx_Async_UnityAsyncExtensions_JobHandleAwaiter__get_Status (UniRx_Async_UnityAsyncExtensions_JobHandleAwaiter_o* __this, const MethodInfo* method);
void UniRx_Async_UnityAsyncExtensions_JobHandleAwaiter__GetResult (UniRx_Async_UnityAsyncExtensions_JobHandleAwaiter_o* __this, const MethodInfo* method);
bool UniRx_Async_UnityAsyncExtensions_JobHandleAwaiter__MoveNext (UniRx_Async_UnityAsyncExtensions_JobHandleAwaiter_o* __this, const MethodInfo* method);
void UniRx_Async_UnityAsyncExtensions_JobHandleAwaiter__InvokeContinuation (UniRx_Async_UnityAsyncExtensions_JobHandleAwaiter_o* __this, int32_t status, const MethodInfo* method);
void UniRx_Async_UnityAsyncExtensions_JobHandleAwaiter__OnCompleted (UniRx_Async_UnityAsyncExtensions_JobHandleAwaiter_o* __this, System_Action_o* continuation, const MethodInfo* method);
void UniRx_Async_UnityAsyncExtensions_JobHandleAwaiter__UnsafeOnCompleted (UniRx_Async_UnityAsyncExtensions_JobHandleAwaiter_o* __this, System_Action_o* continuation, const MethodInfo* method);