#pragma once

#include "il2cpp.h"

void UniRx_Operators_DelaySubscriptionObservable_object____ctor (UniRx_Operators_DelaySubscriptionObservable_T__o* __this, System_IObservable_T__o* source, System_TimeSpan_o dueTime, UniRx_IScheduler_o* scheduler, const MethodInfo_2502B60* method);
void UniRx_Operators_DelaySubscriptionObservable_object____ctor (UniRx_Operators_DelaySubscriptionObservable_T__o* __this, System_IObservable_T__o* source, System_DateTimeOffset_o dueTime, UniRx_IScheduler_o* scheduler, const MethodInfo_2502C90* method);
System_IDisposable_o* UniRx_Operators_DelaySubscriptionObservable_object___SubscribeCore (UniRx_Operators_DelaySubscriptionObservable_T__o* __this, System_IObserver_T__o* observer, System_IDisposable_o* cancel, const MethodInfo_2502DD0* method);
