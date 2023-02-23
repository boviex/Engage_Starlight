#pragma once

#include "il2cpp.h"

void UniRx_ScheduledDisposable___ctor (UniRx_ScheduledDisposable_o* __this, UniRx_IScheduler_o* scheduler, System_IDisposable_o* disposable, const MethodInfo* method);
UniRx_IScheduler_o* UniRx_ScheduledDisposable__get_Scheduler (UniRx_ScheduledDisposable_o* __this, const MethodInfo* method);
System_IDisposable_o* UniRx_ScheduledDisposable__get_Disposable (UniRx_ScheduledDisposable_o* __this, const MethodInfo* method);
bool UniRx_ScheduledDisposable__get_IsDisposed (UniRx_ScheduledDisposable_o* __this, const MethodInfo* method);
void UniRx_ScheduledDisposable__Dispose (UniRx_ScheduledDisposable_o* __this, const MethodInfo* method);
void UniRx_ScheduledDisposable__DisposeInner (UniRx_ScheduledDisposable_o* __this, const MethodInfo* method);
