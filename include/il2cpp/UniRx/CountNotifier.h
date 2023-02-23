#pragma once

#include "il2cpp.h"

int32_t UniRx_CountNotifier__get_Max (UniRx_CountNotifier_o* __this, const MethodInfo* method);
int32_t UniRx_CountNotifier__get_Count (UniRx_CountNotifier_o* __this, const MethodInfo* method);
void UniRx_CountNotifier__set_Count (UniRx_CountNotifier_o* __this, int32_t value, const MethodInfo* method);
void UniRx_CountNotifier___ctor (UniRx_CountNotifier_o* __this, int32_t max, const MethodInfo* method);
System_IDisposable_o* UniRx_CountNotifier__Increment (UniRx_CountNotifier_o* __this, int32_t incrementCount, const MethodInfo* method);
void UniRx_CountNotifier__Decrement (UniRx_CountNotifier_o* __this, int32_t decrementCount, const MethodInfo* method);
System_IDisposable_o* UniRx_CountNotifier__Subscribe (UniRx_CountNotifier_o* __this, System_IObserver_CountChangedStatus__o* observer, const MethodInfo* method);
