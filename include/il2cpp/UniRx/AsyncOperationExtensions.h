#pragma once

#include "il2cpp.h"

System_IObservable_AsyncOperation__o* UniRx_AsyncOperationExtensions__AsObservable (UnityEngine_AsyncOperation_o* asyncOperation, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_T__o* UniRx_AsyncOperationExtensions__AsAsyncOperationObservable_object_ (Il2CppObject* asyncOperation, System_IProgress_float__o* progress, const MethodInfo_2741B60* method);
System_Collections_IEnumerator_o* UniRx_AsyncOperationExtensions__AsObservableCore_AsyncOperation_ (UnityEngine_AsyncOperation_o* asyncOperation, System_IObserver_T__o* observer, System_IProgress_float__o* reportProgress, System_Threading_CancellationToken_o cancel, const MethodInfo_2741C80* method);
System_Collections_IEnumerator_o* UniRx_AsyncOperationExtensions__AsObservableCore_object_ (Il2CppObject* asyncOperation, System_IObserver_T__o* observer, System_IProgress_float__o* reportProgress, System_Threading_CancellationToken_o cancel, const MethodInfo_2741C80* method);
