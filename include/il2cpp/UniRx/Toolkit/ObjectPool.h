#pragma once

#include "il2cpp.h"

int32_t UniRx_Toolkit_ObjectPool_object___get_MaxPoolCount (UniRx_Toolkit_ObjectPool_T__o* __this, const MethodInfo_37212E0* method);
void UniRx_Toolkit_ObjectPool_MapInfoIconLocatorRoot___OnBeforeRent (UniRx_Toolkit_ObjectPool_MapInfoIconLocatorRoot__o* __this, MapInfoIconLocatorRoot_o* instance, const MethodInfo_37212F0* method);
void UniRx_Toolkit_ObjectPool_object___OnBeforeRent (UniRx_Toolkit_ObjectPool_T__o* __this, Il2CppObject* instance, const MethodInfo_37212F0* method);
void UniRx_Toolkit_ObjectPool_MapInfoIconLocatorRoot___OnBeforeReturn (UniRx_Toolkit_ObjectPool_MapInfoIconLocatorRoot__o* __this, MapInfoIconLocatorRoot_o* instance, const MethodInfo_3721320* method);
void UniRx_Toolkit_ObjectPool_object___OnBeforeReturn (UniRx_Toolkit_ObjectPool_T__o* __this, Il2CppObject* instance, const MethodInfo_3721320* method);
void UniRx_Toolkit_ObjectPool_MapInfoIconLocatorRoot___OnClear (UniRx_Toolkit_ObjectPool_MapInfoIconLocatorRoot__o* __this, MapInfoIconLocatorRoot_o* instance, const MethodInfo_3721350* method);
void UniRx_Toolkit_ObjectPool_object___OnClear (UniRx_Toolkit_ObjectPool_T__o* __this, Il2CppObject* instance, const MethodInfo_3721350* method);
int32_t UniRx_Toolkit_ObjectPool_object___get_Count (UniRx_Toolkit_ObjectPool_T__o* __this, const MethodInfo_3721440* method);
MapInfoIconLocatorRoot_o* UniRx_Toolkit_ObjectPool_MapInfoIconLocatorRoot___Rent (UniRx_Toolkit_ObjectPool_MapInfoIconLocatorRoot__o* __this, const MethodInfo_3721460* method);
Il2CppObject* UniRx_Toolkit_ObjectPool_object___Rent (UniRx_Toolkit_ObjectPool_T__o* __this, const MethodInfo_3721460* method);
void UniRx_Toolkit_ObjectPool_MapInfoIconLocatorRoot___Return (UniRx_Toolkit_ObjectPool_MapInfoIconLocatorRoot__o* __this, MapInfoIconLocatorRoot_o* instance, const MethodInfo_37215A0* method);
void UniRx_Toolkit_ObjectPool_object___Return (UniRx_Toolkit_ObjectPool_T__o* __this, Il2CppObject* instance, const MethodInfo_37215A0* method);
void UniRx_Toolkit_ObjectPool_object___Clear (UniRx_Toolkit_ObjectPool_T__o* __this, bool callOnBeforeRent, const MethodInfo_37217B0* method);
void UniRx_Toolkit_ObjectPool_object___Shrink (UniRx_Toolkit_ObjectPool_T__o* __this, float instanceCountRatio, int32_t minSize, bool callOnBeforeRent, const MethodInfo_37218B0* method);
System_IDisposable_o* UniRx_Toolkit_ObjectPool_object___StartShrinkTimer (UniRx_Toolkit_ObjectPool_T__o* __this, System_TimeSpan_o checkInterval, float instanceCountRatio, int32_t minSize, bool callOnBeforeRent, const MethodInfo_3721A80* method);
System_IObservable_Unit__o* UniRx_Toolkit_ObjectPool_object___PreloadAsync (UniRx_Toolkit_ObjectPool_T__o* __this, int32_t preloadCount, int32_t threshold, const MethodInfo_3721C70* method);
System_Collections_IEnumerator_o* UniRx_Toolkit_ObjectPool_object___PreloadCore (UniRx_Toolkit_ObjectPool_T__o* __this, int32_t preloadCount, int32_t threshold, System_IObserver_Unit__o* observer, System_Threading_CancellationToken_o cancellationToken, const MethodInfo_3721E10* method);
void UniRx_Toolkit_ObjectPool_MapInfoIconLocatorRoot___Dispose (UniRx_Toolkit_ObjectPool_MapInfoIconLocatorRoot__o* __this, bool disposing, const MethodInfo_3721EE0* method);
void UniRx_Toolkit_ObjectPool_object___Dispose (UniRx_Toolkit_ObjectPool_T__o* __this, bool disposing, const MethodInfo_3721EE0* method);
void UniRx_Toolkit_ObjectPool_MapInfoIconLocatorRoot___Dispose (UniRx_Toolkit_ObjectPool_MapInfoIconLocatorRoot__o* __this, const MethodInfo_3721F40* method);
void UniRx_Toolkit_ObjectPool_object___Dispose (UniRx_Toolkit_ObjectPool_T__o* __this, const MethodInfo_3721F40* method);
void UniRx_Toolkit_ObjectPool_MapInfoIconLocatorRoot____ctor (UniRx_Toolkit_ObjectPool_MapInfoIconLocatorRoot__o* __this, const MethodInfo_3721F50* method);
void UniRx_Toolkit_ObjectPool_object____ctor (UniRx_Toolkit_ObjectPool_T__o* __this, const MethodInfo_3721F50* method);
