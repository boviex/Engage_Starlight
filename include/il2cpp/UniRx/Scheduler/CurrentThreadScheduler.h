#pragma once

#include "il2cpp.h"

UniRx_InternalUtil_SchedulerQueue_o* UniRx_Scheduler_CurrentThreadScheduler__GetQueue (const MethodInfo* method);
void UniRx_Scheduler_CurrentThreadScheduler__SetQueue (UniRx_InternalUtil_SchedulerQueue_o* newQueue, const MethodInfo* method);
System_TimeSpan_o UniRx_Scheduler_CurrentThreadScheduler__get_Time (const MethodInfo* method);
bool UniRx_Scheduler_CurrentThreadScheduler__get_IsScheduleRequired (const MethodInfo* method);
System_IDisposable_o* UniRx_Scheduler_CurrentThreadScheduler__Schedule (UniRx_Scheduler_CurrentThreadScheduler_o* __this, System_Action_o* action, const MethodInfo* method);
System_IDisposable_o* UniRx_Scheduler_CurrentThreadScheduler__Schedule (UniRx_Scheduler_CurrentThreadScheduler_o* __this, System_TimeSpan_o dueTime, System_Action_o* action, const MethodInfo* method);
System_DateTimeOffset_o UniRx_Scheduler_CurrentThreadScheduler__get_Now (UniRx_Scheduler_CurrentThreadScheduler_o* __this, const MethodInfo* method);
void UniRx_Scheduler_CurrentThreadScheduler___ctor (UniRx_Scheduler_CurrentThreadScheduler_o* __this, const MethodInfo* method);
