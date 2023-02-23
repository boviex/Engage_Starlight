#pragma once

#include "il2cpp.h"

int32_t UniRx_Toolkit_AsyncObjectPool_object___get_MaxPoolCount (UniRx_Toolkit_AsyncObjectPool_T__o* __this, const MethodInfo_32E7760* method);
void UniRx_Toolkit_AsyncObjectPool_object___OnBeforeRent (UniRx_Toolkit_AsyncObjectPool_T__o* __this, Il2CppObject* instance, const MethodInfo_32E7770* method);
void UniRx_Toolkit_AsyncObjectPool_object___OnBeforeReturn (UniRx_Toolkit_AsyncObjectPool_T__o* __this, Il2CppObject* instance, const MethodInfo_32E77A0* method);
void UniRx_Toolkit_AsyncObjectPool_object___OnClear (UniRx_Toolkit_AsyncObjectPool_T__o* __this, Il2CppObject* instance, const MethodInfo_32E77D0* method);
int32_t UniRx_Toolkit_AsyncObjectPool_object___get_Count (UniRx_Toolkit_AsyncObjectPool_T__o* __this, const MethodInfo_32E78C0* method);
System_IObservable_T__o* UniRx_Toolkit_AsyncObjectPool_object___RentAsync (UniRx_Toolkit_AsyncObjectPool_T__o* __this, const MethodInfo_32E78E0* method);
void UniRx_Toolkit_AsyncObjectPool_object___Return (UniRx_Toolkit_AsyncObjectPool_T__o* __this, Il2CppObject* instance, const MethodInfo_32E7B00* method);
void UniRx_Toolkit_AsyncObjectPool_object___Shrink (UniRx_Toolkit_AsyncObjectPool_T__o* __this, float instanceCountRatio, int32_t minSize, bool callOnBeforeRent, const MethodInfo_32E7D10* method);
System_IDisposable_o* UniRx_Toolkit_AsyncObjectPool_object___StartShrinkTimer (UniRx_Toolkit_AsyncObjectPool_T__o* __this, System_TimeSpan_o checkInterval, float instanceCountRatio, int32_t minSize, bool callOnBeforeRent, const MethodInfo_32E7EE0* method);
void UniRx_Toolkit_AsyncObjectPool_object___Clear (UniRx_Toolkit_AsyncObjectPool_T__o* __this, bool callOnBeforeRent, const MethodInfo_32E80D0* method);
System_IObservable_Unit__o* UniRx_Toolkit_AsyncObjectPool_object___PreloadAsync (UniRx_Toolkit_AsyncObjectPool_T__o* __this, int32_t preloadCount, int32_t threshold, const MethodInfo_32E81D0* method);
System_Collections_IEnumerator_o* UniRx_Toolkit_AsyncObjectPool_object___PreloadCore (UniRx_Toolkit_AsyncObjectPool_T__o* __this, int32_t preloadCount, int32_t threshold, System_IObserver_Unit__o* observer, System_Threading_CancellationToken_o cancellationToken, const MethodInfo_32E8370* method);
void UniRx_Toolkit_AsyncObjectPool_object___Dispose (UniRx_Toolkit_AsyncObjectPool_T__o* __this, bool disposing, const MethodInfo_32E8440* method);
void UniRx_Toolkit_AsyncObjectPool_object___Dispose (UniRx_Toolkit_AsyncObjectPool_T__o* __this, const MethodInfo_32E84A0* method);
void UniRx_Toolkit_AsyncObjectPool_object____ctor (UniRx_Toolkit_AsyncObjectPool_T__o* __this, const MethodInfo_32E84B0* method);
void UniRx_Toolkit_AsyncObjectPool_object____RentAsync_b__10_0 (UniRx_Toolkit_AsyncObjectPool_T__o* __this, Il2CppObject* x, const MethodInfo_32E84C0* method);
void UniRx_Toolkit_AsyncObjectPool_object____PreloadCore_b__16_0 (UniRx_Toolkit_AsyncObjectPool_T__o* __this, Il2CppObject* x, const MethodInfo_32E84D0* method);
