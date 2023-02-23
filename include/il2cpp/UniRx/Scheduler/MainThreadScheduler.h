#pragma once

#include "il2cpp.h"

void UniRx_Scheduler_MainThreadScheduler___ctor (UniRx_Scheduler_MainThreadScheduler_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* UniRx_Scheduler_MainThreadScheduler__DelayAction (UniRx_Scheduler_MainThreadScheduler_o* __this, System_TimeSpan_o dueTime, System_Action_o* action, UniRx_ICancelable_o* cancellation, const MethodInfo* method);
System_Collections_IEnumerator_o* UniRx_Scheduler_MainThreadScheduler__PeriodicAction (UniRx_Scheduler_MainThreadScheduler_o* __this, System_TimeSpan_o period, System_Action_o* action, UniRx_ICancelable_o* cancellation, const MethodInfo* method);
System_DateTimeOffset_o UniRx_Scheduler_MainThreadScheduler__get_Now (UniRx_Scheduler_MainThreadScheduler_o* __this, const MethodInfo* method);
void UniRx_Scheduler_MainThreadScheduler__Schedule (UniRx_Scheduler_MainThreadScheduler_o* __this, Il2CppObject* state, const MethodInfo* method);
System_IDisposable_o* UniRx_Scheduler_MainThreadScheduler__Schedule (UniRx_Scheduler_MainThreadScheduler_o* __this, System_Action_o* action, const MethodInfo* method);
System_IDisposable_o* UniRx_Scheduler_MainThreadScheduler__Schedule (UniRx_Scheduler_MainThreadScheduler_o* __this, System_DateTimeOffset_o dueTime, System_Action_o* action, const MethodInfo* method);
System_IDisposable_o* UniRx_Scheduler_MainThreadScheduler__Schedule (UniRx_Scheduler_MainThreadScheduler_o* __this, System_TimeSpan_o dueTime, System_Action_o* action, const MethodInfo* method);
System_IDisposable_o* UniRx_Scheduler_MainThreadScheduler__SchedulePeriodic (UniRx_Scheduler_MainThreadScheduler_o* __this, System_TimeSpan_o period, System_Action_o* action, const MethodInfo* method);
void UniRx_Scheduler_MainThreadScheduler__ScheduleQueueing_object_ (UniRx_Scheduler_MainThreadScheduler_o* __this, Il2CppObject* state, const MethodInfo_3888300* method);
void UniRx_Scheduler_MainThreadScheduler__ScheduleQueueing_object_ (UniRx_Scheduler_MainThreadScheduler_o* __this, UniRx_ICancelable_o* cancel, Il2CppObject* state, System_Action_T__o* action, const MethodInfo_3888480* method);
void UniRx_Scheduler_MainThreadScheduler__ScheduleQueueing_Unit_ (UniRx_Scheduler_MainThreadScheduler_o* __this, UniRx_ICancelable_o* cancel, UniRx_Unit_o state, System_Action_T__o* action, const MethodInfo_38885C0* method);
