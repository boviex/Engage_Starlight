#pragma once

#include "il2cpp.h"

UniRx_Async_IAwaiter_o* UniRx_Async_EnumeratorAsyncExtensions__GetAwaiter (System_Collections_IEnumerator_o* enumerator, const MethodInfo* method);
UniRx_Async_UniTask_o UniRx_Async_EnumeratorAsyncExtensions__ToUniTask (System_Collections_IEnumerator_o* enumerator, const MethodInfo* method);
UniRx_Async_UniTask_o UniRx_Async_EnumeratorAsyncExtensions__ConfigureAwait (System_Collections_IEnumerator_o* enumerator, int32_t timing, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
