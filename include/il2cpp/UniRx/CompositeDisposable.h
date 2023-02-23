#pragma once

#include "il2cpp.h"

void UniRx_CompositeDisposable___ctor (UniRx_CompositeDisposable_o* __this, const MethodInfo* method);
void UniRx_CompositeDisposable___ctor (UniRx_CompositeDisposable_o* __this, int32_t capacity, const MethodInfo* method);
void UniRx_CompositeDisposable___ctor (UniRx_CompositeDisposable_o* __this, System_IDisposable_array* disposables, const MethodInfo* method);
void UniRx_CompositeDisposable___ctor (UniRx_CompositeDisposable_o* __this, System_Collections_Generic_IEnumerable_IDisposable__o* disposables, const MethodInfo* method);
int32_t UniRx_CompositeDisposable__get_Count (UniRx_CompositeDisposable_o* __this, const MethodInfo* method);
void UniRx_CompositeDisposable__Add (UniRx_CompositeDisposable_o* __this, System_IDisposable_o* item, const MethodInfo* method);
bool UniRx_CompositeDisposable__Remove (UniRx_CompositeDisposable_o* __this, System_IDisposable_o* item, const MethodInfo* method);
void UniRx_CompositeDisposable__Dispose (UniRx_CompositeDisposable_o* __this, const MethodInfo* method);
void UniRx_CompositeDisposable__Clear (UniRx_CompositeDisposable_o* __this, const MethodInfo* method);
bool UniRx_CompositeDisposable__Contains (UniRx_CompositeDisposable_o* __this, System_IDisposable_o* item, const MethodInfo* method);
void UniRx_CompositeDisposable__CopyTo (UniRx_CompositeDisposable_o* __this, System_IDisposable_array* array, int32_t arrayIndex, const MethodInfo* method);
bool UniRx_CompositeDisposable__get_IsReadOnly (UniRx_CompositeDisposable_o* __this, const MethodInfo* method);
System_Collections_Generic_IEnumerator_IDisposable__o* UniRx_CompositeDisposable__GetEnumerator (UniRx_CompositeDisposable_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* UniRx_CompositeDisposable__System_Collections_IEnumerable_GetEnumerator (UniRx_CompositeDisposable_o* __this, const MethodInfo* method);
bool UniRx_CompositeDisposable__get_IsDisposed (UniRx_CompositeDisposable_o* __this, const MethodInfo* method);
