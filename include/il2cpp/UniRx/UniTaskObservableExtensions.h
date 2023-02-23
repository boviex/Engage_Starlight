#pragma once

#include "il2cpp.h"

UniRx_Async_UniTask_T__o UniRx_UniTaskObservableExtensions__ToUniTask_object_ (System_IObservable_T__o* source, System_Threading_CancellationToken_o cancellationToken, bool useFirstValue, const MethodInfo_206F880* method);
System_IObservable_T__o* UniRx_UniTaskObservableExtensions__ToObservable_object_ (UniRx_Async_UniTask_T__o task, const MethodInfo_206F690* method);
System_IObservable_Unit__o* UniRx_UniTaskObservableExtensions__ToObservable (UniRx_Async_UniTask_o task, const MethodInfo* method);
UniRx_Async_UniTaskVoid_o UniRx_UniTaskObservableExtensions__Fire_object_ (UniRx_AsyncSubject_T__o* subject, UniRx_Async_UniTask_T__o task, const MethodInfo_206F5C0* method);
UniRx_Async_UniTaskVoid_o UniRx_UniTaskObservableExtensions__Fire (UniRx_AsyncSubject_Unit__o* subject, UniRx_Async_UniTask_o task, const MethodInfo* method);
