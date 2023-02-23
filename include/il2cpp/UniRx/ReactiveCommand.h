#pragma once

#include "il2cpp.h"

void UniRx_ReactiveCommand___ctor (UniRx_ReactiveCommand_o* __this, const MethodInfo* method);
void UniRx_ReactiveCommand___ctor (UniRx_ReactiveCommand_o* __this, System_IObservable_bool__o* canExecuteSource, bool initialValue, const MethodInfo* method);
bool UniRx_ReactiveCommand__Execute (UniRx_ReactiveCommand_o* __this, const MethodInfo* method);
void UniRx_ReactiveCommand__ForceExecute (UniRx_ReactiveCommand_o* __this, const MethodInfo* method);
UniRx_IReadOnlyReactiveProperty_bool__o* UniRx_ReactiveCommand_object___get_CanExecute (UniRx_ReactiveCommand_T__o* __this, const MethodInfo_2A7CFF0* method);
UniRx_IReadOnlyReactiveProperty_bool__o* UniRx_ReactiveCommand_Unit___get_CanExecute (UniRx_ReactiveCommand_Unit__o* __this, const MethodInfo_2A7E000* method);
bool UniRx_ReactiveCommand_object___get_IsDisposed (UniRx_ReactiveCommand_T__o* __this, const MethodInfo_2A7D000* method);
bool UniRx_ReactiveCommand_Unit___get_IsDisposed (UniRx_ReactiveCommand_Unit__o* __this, const MethodInfo_2A7E010* method);
void UniRx_ReactiveCommand_object___set_IsDisposed (UniRx_ReactiveCommand_T__o* __this, bool value, const MethodInfo_2A7D010* method);
void UniRx_ReactiveCommand_Unit___set_IsDisposed (UniRx_ReactiveCommand_Unit__o* __this, bool value, const MethodInfo_2A7E020* method);
void UniRx_ReactiveCommand_object____ctor (UniRx_ReactiveCommand_T__o* __this, const MethodInfo_2A7D020* method);
void UniRx_ReactiveCommand_Unit____ctor (UniRx_ReactiveCommand_Unit__o* __this, const MethodInfo_2A7E030* method);
void UniRx_ReactiveCommand_object____ctor (UniRx_ReactiveCommand_T__o* __this, System_IObservable_bool__o* canExecuteSource, bool initialValue, const MethodInfo_2A7D150* method);
void UniRx_ReactiveCommand_Unit____ctor (UniRx_ReactiveCommand_Unit__o* __this, System_IObservable_bool__o* canExecuteSource, bool initialValue, const MethodInfo_2A7E160* method);
bool UniRx_ReactiveCommand_object___Execute (UniRx_ReactiveCommand_T__o* __this, Il2CppObject* parameter, const MethodInfo_2A7D480* method);
bool UniRx_ReactiveCommand_Unit___Execute (UniRx_ReactiveCommand_Unit__o* __this, UniRx_Unit_o parameter, const MethodInfo_2A7E490* method);
void UniRx_ReactiveCommand_object___ForceExecute (UniRx_ReactiveCommand_T__o* __this, Il2CppObject* parameter, const MethodInfo_2A7D560* method);
void UniRx_ReactiveCommand_Unit___ForceExecute (UniRx_ReactiveCommand_Unit__o* __this, UniRx_Unit_o parameter, const MethodInfo_2A7E570* method);
System_IDisposable_o* UniRx_ReactiveCommand_object___Subscribe (UniRx_ReactiveCommand_T__o* __this, System_IObserver_T__o* observer, const MethodInfo_2A7D580* method);
System_IDisposable_o* UniRx_ReactiveCommand_Unit___Subscribe (UniRx_ReactiveCommand_Unit__o* __this, System_IObserver_T__o* observer, const MethodInfo_2A7E590* method);
void UniRx_ReactiveCommand_object___Dispose (UniRx_ReactiveCommand_T__o* __this, const MethodInfo_2A7D5A0* method);
void UniRx_ReactiveCommand_Unit___Dispose (UniRx_ReactiveCommand_Unit__o* __this, const MethodInfo_2A7E5B0* method);
UniRx_Async_UniTask_T__o UniRx_ReactiveCommand_object___WaitUntilExecuteAsync (UniRx_ReactiveCommand_T__o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo_2A7D8C0* method);
UniRx_Async_UniTask_T__o UniRx_ReactiveCommand_Unit___WaitUntilExecuteAsync (UniRx_ReactiveCommand_Unit__o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo_2A7E8D0* method);
void UniRx_ReactiveCommand_object___CancelCallback (Il2CppObject* state, const MethodInfo_2A7DC50* method);
void UniRx_ReactiveCommand_Unit___CancelCallback (Il2CppObject* state, const MethodInfo_2A7EC60* method);
void UniRx_ReactiveCommand_object____cctor (const MethodInfo_2A7DF30* method);
void UniRx_ReactiveCommand_Unit____cctor (const MethodInfo_2A7EF40* method);
