#pragma once

#include "il2cpp.h"

void UniRx_Scheduler_ImmediateScheduler___ctor (UniRx_Scheduler_ImmediateScheduler_o* __this, const MethodInfo* method);
System_DateTimeOffset_o UniRx_Scheduler_ImmediateScheduler__get_Now (UniRx_Scheduler_ImmediateScheduler_o* __this, const MethodInfo* method);
System_IDisposable_o* UniRx_Scheduler_ImmediateScheduler__Schedule (UniRx_Scheduler_ImmediateScheduler_o* __this, System_Action_o* action, const MethodInfo* method);
System_IDisposable_o* UniRx_Scheduler_ImmediateScheduler__Schedule (UniRx_Scheduler_ImmediateScheduler_o* __this, System_TimeSpan_o dueTime, System_Action_o* action, const MethodInfo* method);
