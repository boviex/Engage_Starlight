#pragma once

#include "il2cpp.h"

void UniRx_Operators_SkipObservable_object____ctor (UniRx_Operators_SkipObservable_T__o* __this, System_IObservable_T__o* source, int32_t count, const MethodInfo_3456130* method);
void UniRx_Operators_SkipObservable_object____ctor (UniRx_Operators_SkipObservable_T__o* __this, System_IObservable_T__o* source, System_TimeSpan_o duration, UniRx_IScheduler_o* scheduler, const MethodInfo_34561B0* method);
System_IObservable_T__o* UniRx_Operators_SkipObservable_object___Combine (UniRx_Operators_SkipObservable_T__o* __this, int32_t count, const MethodInfo_34562C0* method);
System_IObservable_T__o* UniRx_Operators_SkipObservable_object___Combine (UniRx_Operators_SkipObservable_T__o* __this, System_TimeSpan_o duration, const MethodInfo_3456340* method);
System_IDisposable_o* UniRx_Operators_SkipObservable_object___SubscribeCore (UniRx_Operators_SkipObservable_T__o* __this, System_IObserver_T__o* observer, System_IDisposable_o* cancel, const MethodInfo_3456420* method);
