#pragma once

#include "il2cpp.h"

void UniRx_Operators_AggregateObservable_object____ctor (UniRx_Operators_AggregateObservable_TSource__o* __this, System_IObservable_TSource__o* source, System_Func_TSource__TSource__TSource__o* accumulator, const MethodInfo_20382D0* method);
System_IDisposable_o* UniRx_Operators_AggregateObservable_object___SubscribeCore (UniRx_Operators_AggregateObservable_TSource__o* __this, System_IObserver_TSource__o* observer, System_IDisposable_o* cancel, const MethodInfo_2038350* method);
void UniRx_Operators_AggregateObservable_object__object____ctor (UniRx_Operators_AggregateObservable_TSource__TAccumulate__o* __this, System_IObservable_TSource__o* source, Il2CppObject* seed, System_Func_TAccumulate__TSource__TAccumulate__o* accumulator, const MethodInfo_2038450* method);
System_IDisposable_o* UniRx_Operators_AggregateObservable_object__object___SubscribeCore (UniRx_Operators_AggregateObservable_TSource__TAccumulate__o* __this, System_IObserver_TAccumulate__o* observer, System_IDisposable_o* cancel, const MethodInfo_20384F0* method);
void UniRx_Operators_AggregateObservable_object__object__object____ctor (UniRx_Operators_AggregateObservable_TSource__TAccumulate__TResult__o* __this, System_IObservable_TSource__o* source, Il2CppObject* seed, System_Func_TAccumulate__TSource__TAccumulate__o* accumulator, System_Func_TAccumulate__TResult__o* resultSelector, const MethodInfo_20385F0* method);
System_IDisposable_o* UniRx_Operators_AggregateObservable_object__object__object___SubscribeCore (UniRx_Operators_AggregateObservable_TSource__TAccumulate__TResult__o* __this, System_IObserver_TResult__o* observer, System_IDisposable_o* cancel, const MethodInfo_20386A0* method);