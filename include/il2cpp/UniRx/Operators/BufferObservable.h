#pragma once

#include "il2cpp.h"

void UniRx_Operators_BufferObservable_object____ctor (UniRx_Operators_BufferObservable_T__o* __this, System_IObservable_T__o* source, int32_t count, int32_t skip, const MethodInfo_30D2880* method);
void UniRx_Operators_BufferObservable_object____ctor (UniRx_Operators_BufferObservable_T__o* __this, System_IObservable_T__o* source, System_TimeSpan_o timeSpan, System_TimeSpan_o timeShift, UniRx_IScheduler_o* scheduler, const MethodInfo_30D2910* method);
void UniRx_Operators_BufferObservable_object____ctor (UniRx_Operators_BufferObservable_T__o* __this, System_IObservable_T__o* source, System_TimeSpan_o timeSpan, int32_t count, UniRx_IScheduler_o* scheduler, const MethodInfo_30D2A20* method);
System_IDisposable_o* UniRx_Operators_BufferObservable_object___SubscribeCore (UniRx_Operators_BufferObservable_T__o* __this, System_IObserver_IList_T___o* observer, System_IDisposable_o* cancel, const MethodInfo_30D2B30* method);
void UniRx_Operators_BufferObservable_object__object____ctor (UniRx_Operators_BufferObservable_TSource__TWindowBoundary__o* __this, System_IObservable_TSource__o* source, System_IObservable_TWindowBoundary__o* windowBoundaries, const MethodInfo_30D2D90* method);
System_IDisposable_o* UniRx_Operators_BufferObservable_object__object___SubscribeCore (UniRx_Operators_BufferObservable_TSource__TWindowBoundary__o* __this, System_IObserver_IList_TSource___o* observer, System_IDisposable_o* cancel, const MethodInfo_30D2E10* method);
