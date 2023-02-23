#pragma once

#include "il2cpp.h"

void UniRx_ReplaySubject_object____ctor (UniRx_ReplaySubject_T__o* __this, const MethodInfo_300BC10* method);
void UniRx_ReplaySubject_object____ctor (UniRx_ReplaySubject_T__o* __this, UniRx_IScheduler_o* scheduler, const MethodInfo_300BCB0* method);
void UniRx_ReplaySubject_object____ctor (UniRx_ReplaySubject_T__o* __this, int32_t bufferSize, const MethodInfo_300BD50* method);
void UniRx_ReplaySubject_object____ctor (UniRx_ReplaySubject_T__o* __this, int32_t bufferSize, UniRx_IScheduler_o* scheduler, const MethodInfo_300BE00* method);
void UniRx_ReplaySubject_object____ctor (UniRx_ReplaySubject_T__o* __this, System_TimeSpan_o window, const MethodInfo_300BEA0* method);
void UniRx_ReplaySubject_object____ctor (UniRx_ReplaySubject_T__o* __this, System_TimeSpan_o window, UniRx_IScheduler_o* scheduler, const MethodInfo_300BF00* method);
void UniRx_ReplaySubject_object____ctor (UniRx_ReplaySubject_T__o* __this, int32_t bufferSize, System_TimeSpan_o window, UniRx_IScheduler_o* scheduler, const MethodInfo_300BF30* method);
void UniRx_ReplaySubject_object___Trim (UniRx_ReplaySubject_T__o* __this, const MethodInfo_300C230* method);
void UniRx_ReplaySubject_object___OnCompleted (UniRx_ReplaySubject_T__o* __this, const MethodInfo_300C450* method);
void UniRx_ReplaySubject_object___OnError (UniRx_ReplaySubject_T__o* __this, System_Exception_o* error, const MethodInfo_300C6C0* method);
void UniRx_ReplaySubject_object___OnNext (UniRx_ReplaySubject_T__o* __this, Il2CppObject* value, const MethodInfo_300C990* method);
System_IDisposable_o* UniRx_ReplaySubject_object___Subscribe (UniRx_ReplaySubject_T__o* __this, System_IObserver_T__o* observer, const MethodInfo_300CC70* method);
void UniRx_ReplaySubject_object___Dispose (UniRx_ReplaySubject_T__o* __this, const MethodInfo_300D3B0* method);
void UniRx_ReplaySubject_object___ThrowIfDisposed (UniRx_ReplaySubject_T__o* __this, const MethodInfo_300D540* method);
bool UniRx_ReplaySubject_object___IsRequiredSubscribeOnCurrentThread (UniRx_ReplaySubject_T__o* __this, const MethodInfo_300D5B0* method);
