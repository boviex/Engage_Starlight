#pragma once

#include "il2cpp.h"

void UniRx_Async_Internal_TaskTracker__TrackActiveTask (UniRx_Async_IAwaiter_o* task, int32_t skipFrame, const MethodInfo* method);
void UniRx_Async_Internal_TaskTracker__TrackActiveTask (UniRx_Async_IAwaiter_o* task, System_String_o* stackTrace, const MethodInfo* method);
System_String_o* UniRx_Async_Internal_TaskTracker__CaptureStackTrace (int32_t skipFrame, const MethodInfo* method);
void UniRx_Async_Internal_TaskTracker__RemoveTracking (UniRx_Async_IAwaiter_o* task, const MethodInfo* method);
bool UniRx_Async_Internal_TaskTracker__CheckAndResetDirty (const MethodInfo* method);
void UniRx_Async_Internal_TaskTracker__ForEachActiveTask (System_Action_int__string__AwaiterStatus__DateTime__string__o* action, const MethodInfo* method);
void UniRx_Async_Internal_TaskTracker___cctor (const MethodInfo* method);
