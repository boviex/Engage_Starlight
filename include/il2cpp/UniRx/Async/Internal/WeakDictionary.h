#pragma once

#include "il2cpp.h"

void UniRx_Async_Internal_WeakDictionary_object__object____ctor (UniRx_Async_Internal_WeakDictionary_TKey__TValue__o* __this, int32_t capacity, float loadFactor, System_Collections_Generic_IEqualityComparer_TKey__o* keyComparer, const MethodInfo_2FEFDB0* method);
bool UniRx_Async_Internal_WeakDictionary_object__object___TryAdd (UniRx_Async_Internal_WeakDictionary_TKey__TValue__o* __this, Il2CppObject* key, Il2CppObject* value, const MethodInfo_2FEFEB0* method);
bool UniRx_Async_Internal_WeakDictionary_object__object___TryGetValue (UniRx_Async_Internal_WeakDictionary_TKey__TValue__o* __this, Il2CppObject* key, Il2CppObject** value, const MethodInfo_2FEFFC0* method);
bool UniRx_Async_Internal_WeakDictionary_object__object___TryRemove (UniRx_Async_Internal_WeakDictionary_TKey__TValue__o* __this, Il2CppObject* key, const MethodInfo_2FF00A0* method);
bool UniRx_Async_Internal_WeakDictionary_object__object___TryAddInternal (UniRx_Async_Internal_WeakDictionary_TKey__TValue__o* __this, Il2CppObject* key, Il2CppObject* value, const MethodInfo_2FF0180* method);
bool UniRx_Async_Internal_WeakDictionary_object__object___AddToBuckets (UniRx_Async_Internal_WeakDictionary_TKey__TValue__o* __this, UniRx_Async_Internal_WeakDictionary_Entry_TKey__TValue__array* targetBuckets, Il2CppObject* newKey, Il2CppObject* value, int32_t keyHash, const MethodInfo_2FF03A0* method);
bool UniRx_Async_Internal_WeakDictionary_object__object___TryGetEntry (UniRx_Async_Internal_WeakDictionary_TKey__TValue__o* __this, Il2CppObject* key, int32_t* hashIndex, UniRx_Async_Internal_WeakDictionary_Entry_TKey__TValue__o** entry, const MethodInfo_2FF0700* method);
void UniRx_Async_Internal_WeakDictionary_object__object___Remove (UniRx_Async_Internal_WeakDictionary_TKey__TValue__o* __this, int32_t hashIndex, UniRx_Async_Internal_WeakDictionary_Entry_TKey__TValue__o* entry, const MethodInfo_2FF0900* method);
System_Collections_Generic_List_KeyValuePair_TKey__TValue___o* UniRx_Async_Internal_WeakDictionary_object__object___ToList (UniRx_Async_Internal_WeakDictionary_TKey__TValue__o* __this, const MethodInfo_2FF09F0* method);
int32_t UniRx_Async_Internal_WeakDictionary_object__object___ToList (UniRx_Async_Internal_WeakDictionary_TKey__TValue__o* __this, System_Collections_Generic_List_KeyValuePair_TKey__TValue___o** list, bool clear, const MethodInfo_2FF0A90* method);
int32_t UniRx_Async_Internal_WeakDictionary_object__object___CalculateCapacity (int32_t collectionSize, float loadFactor, const MethodInfo_2FF0C70* method);