#pragma once

#include "il2cpp.h"

UniRx_ReactiveCommand_o* UniRx_ReactiveCommandExtensions__ToReactiveCommand (System_IObservable_bool__o* canExecuteSource, bool initialValue, const MethodInfo* method);
UniRx_ReactiveCommand_T__o* UniRx_ReactiveCommandExtensions__ToReactiveCommand_object_ (System_IObservable_bool__o* canExecuteSource, bool initialValue, const MethodInfo_20575C0* method);
UniRx_Async_UniTask_Awaiter_T__o UniRx_ReactiveCommandExtensions__GetAwaiter_object_ (UniRx_IReactiveCommand_T__o* command, const MethodInfo_20574B0* method);
System_IDisposable_o* UniRx_ReactiveCommandExtensions__BindTo (UniRx_IReactiveCommand_Unit__o* command, UnityEngine_UI_Button_o* button, const MethodInfo* method);
System_IDisposable_o* UniRx_ReactiveCommandExtensions__BindToOnClick (UniRx_IReactiveCommand_Unit__o* command, UnityEngine_UI_Button_o* button, System_Action_Unit__o* onClick, const MethodInfo* method);
System_IDisposable_o* UniRx_ReactiveCommandExtensions__BindToButtonOnClick (System_IObservable_bool__o* canExecuteSource, UnityEngine_UI_Button_o* button, System_Action_Unit__o* onClick, bool initialValue, const MethodInfo* method);
