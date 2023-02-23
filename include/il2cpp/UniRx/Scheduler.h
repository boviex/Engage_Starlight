#pragma once

#include "il2cpp.h"

bool UniRx_Scheduler__get_IsCurrentThreadSchedulerScheduleRequired (const MethodInfo* method);
System_DateTimeOffset_o UniRx_Scheduler__get_Now (const MethodInfo* method);
System_TimeSpan_o UniRx_Scheduler__Normalize (System_TimeSpan_o timeSpan, const MethodInfo* method);
System_IDisposable_o* UniRx_Scheduler__Schedule (UniRx_IScheduler_o* scheduler, System_DateTimeOffset_o dueTime, System_Action_o* action, const MethodInfo* method);
System_IDisposable_o* UniRx_Scheduler__Schedule (UniRx_IScheduler_o* scheduler, System_Action_Action__o* action, const MethodInfo* method);
System_IDisposable_o* UniRx_Scheduler__Schedule (UniRx_IScheduler_o* scheduler, System_TimeSpan_o dueTime, System_Action_Action_TimeSpan___o* action, const MethodInfo* method);
System_IDisposable_o* UniRx_Scheduler__Schedule (UniRx_IScheduler_o* scheduler, System_DateTimeOffset_o dueTime, System_Action_Action_DateTimeOffset___o* action, const MethodInfo* method);
void UniRx_Scheduler__SetDefaultForUnity (const MethodInfo* method);
UniRx_IScheduler_o* UniRx_Scheduler__get_MainThread (const MethodInfo* method);
UniRx_IScheduler_o* UniRx_Scheduler__get_MainThreadIgnoreTimeScale (const MethodInfo* method);
UniRx_IScheduler_o* UniRx_Scheduler__get_MainThreadFixedUpdate (const MethodInfo* method);
UniRx_IScheduler_o* UniRx_Scheduler__get_MainThreadEndOfFrame (const MethodInfo* method);
void UniRx_Scheduler___cctor (const MethodInfo* method);
