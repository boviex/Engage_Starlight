#pragma once

#include "il2cpp.h"

void UniRx_Operators_TimerObservable___ctor (UniRx_Operators_TimerObservable_o* __this, System_DateTimeOffset_o dueTime, System_Nullable_TimeSpan__o period, UniRx_IScheduler_o* scheduler, const MethodInfo* method);
void UniRx_Operators_TimerObservable___ctor (UniRx_Operators_TimerObservable_o* __this, System_TimeSpan_o dueTime, System_Nullable_TimeSpan__o period, UniRx_IScheduler_o* scheduler, const MethodInfo* method);
System_IDisposable_o* UniRx_Operators_TimerObservable__SubscribeCore (UniRx_Operators_TimerObservable_o* __this, System_IObserver_long__o* observer, System_IDisposable_o* cancel, const MethodInfo* method);
