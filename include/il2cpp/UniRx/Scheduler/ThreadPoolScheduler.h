#pragma once

#include "il2cpp.h"

void UniRx_Scheduler_ThreadPoolScheduler___ctor (UniRx_Scheduler_ThreadPoolScheduler_o* __this, const MethodInfo* method);
System_DateTimeOffset_o UniRx_Scheduler_ThreadPoolScheduler__get_Now (UniRx_Scheduler_ThreadPoolScheduler_o* __this, const MethodInfo* method);
System_IDisposable_o* UniRx_Scheduler_ThreadPoolScheduler__Schedule (UniRx_Scheduler_ThreadPoolScheduler_o* __this, System_Action_o* action, const MethodInfo* method);
System_IDisposable_o* UniRx_Scheduler_ThreadPoolScheduler__Schedule (UniRx_Scheduler_ThreadPoolScheduler_o* __this, System_DateTimeOffset_o dueTime, System_Action_o* action, const MethodInfo* method);
System_IDisposable_o* UniRx_Scheduler_ThreadPoolScheduler__Schedule (UniRx_Scheduler_ThreadPoolScheduler_o* __this, System_TimeSpan_o dueTime, System_Action_o* action, const MethodInfo* method);
System_IDisposable_o* UniRx_Scheduler_ThreadPoolScheduler__SchedulePeriodic (UniRx_Scheduler_ThreadPoolScheduler_o* __this, System_TimeSpan_o period, System_Action_o* action, const MethodInfo* method);
void UniRx_Scheduler_ThreadPoolScheduler__ScheduleQueueing_object_ (UniRx_Scheduler_ThreadPoolScheduler_o* __this, UniRx_ICancelable_o* cancel, Il2CppObject* state, System_Action_T__o* action, const MethodInfo_3888700* method);
