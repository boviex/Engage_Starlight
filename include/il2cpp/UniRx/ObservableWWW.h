#pragma once

#include "il2cpp.h"

System_IObservable_string__o* UniRx_ObservableWWW__Get (System_String_o* url, System_Collections_Generic_Dictionary_string__string__o* headers, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_byte____o* UniRx_ObservableWWW__GetAndGetBytes (System_String_o* url, System_Collections_Generic_Dictionary_string__string__o* headers, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_WWW__o* UniRx_ObservableWWW__GetWWW (System_String_o* url, System_Collections_Generic_Dictionary_string__string__o* headers, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_string__o* UniRx_ObservableWWW__Post (System_String_o* url, System_Byte_array* postData, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_string__o* UniRx_ObservableWWW__Post (System_String_o* url, System_Byte_array* postData, System_Collections_Generic_Dictionary_string__string__o* headers, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_string__o* UniRx_ObservableWWW__Post (System_String_o* url, UnityEngine_WWWForm_o* content, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_string__o* UniRx_ObservableWWW__Post (System_String_o* url, UnityEngine_WWWForm_o* content, System_Collections_Generic_Dictionary_string__string__o* headers, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_byte____o* UniRx_ObservableWWW__PostAndGetBytes (System_String_o* url, System_Byte_array* postData, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_byte____o* UniRx_ObservableWWW__PostAndGetBytes (System_String_o* url, System_Byte_array* postData, System_Collections_Generic_Dictionary_string__string__o* headers, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_byte____o* UniRx_ObservableWWW__PostAndGetBytes (System_String_o* url, UnityEngine_WWWForm_o* content, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_byte____o* UniRx_ObservableWWW__PostAndGetBytes (System_String_o* url, UnityEngine_WWWForm_o* content, System_Collections_Generic_Dictionary_string__string__o* headers, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_WWW__o* UniRx_ObservableWWW__PostWWW (System_String_o* url, System_Byte_array* postData, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_WWW__o* UniRx_ObservableWWW__PostWWW (System_String_o* url, System_Byte_array* postData, System_Collections_Generic_Dictionary_string__string__o* headers, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_WWW__o* UniRx_ObservableWWW__PostWWW (System_String_o* url, UnityEngine_WWWForm_o* content, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_WWW__o* UniRx_ObservableWWW__PostWWW (System_String_o* url, UnityEngine_WWWForm_o* content, System_Collections_Generic_Dictionary_string__string__o* headers, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_AssetBundle__o* UniRx_ObservableWWW__LoadFromCacheOrDownload (System_String_o* url, int32_t version, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_AssetBundle__o* UniRx_ObservableWWW__LoadFromCacheOrDownload (System_String_o* url, int32_t version, uint32_t crc, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_AssetBundle__o* UniRx_ObservableWWW__LoadFromCacheOrDownload (System_String_o* url, UnityEngine_Hash128_o hash128, System_IProgress_float__o* progress, const MethodInfo* method);
System_IObservable_AssetBundle__o* UniRx_ObservableWWW__LoadFromCacheOrDownload (System_String_o* url, UnityEngine_Hash128_o hash128, uint32_t crc, System_IProgress_float__o* progress, const MethodInfo* method);
System_Collections_Generic_Dictionary_string__string__o* UniRx_ObservableWWW__MergeHash (System_Collections_Generic_Dictionary_string__string__o* wwwFormHeaders, System_Collections_Generic_Dictionary_string__string__o* externalHeaders, const MethodInfo* method);
System_Collections_IEnumerator_o* UniRx_ObservableWWW__Fetch (UnityEngine_WWW_o* www, System_IObserver_WWW__o* observer, System_IProgress_float__o* reportProgress, System_Threading_CancellationToken_o cancel, const MethodInfo* method);
System_Collections_IEnumerator_o* UniRx_ObservableWWW__FetchText (UnityEngine_WWW_o* www, System_IObserver_string__o* observer, System_IProgress_float__o* reportProgress, System_Threading_CancellationToken_o cancel, const MethodInfo* method);
System_Collections_IEnumerator_o* UniRx_ObservableWWW__FetchBytes (UnityEngine_WWW_o* www, System_IObserver_byte____o* observer, System_IProgress_float__o* reportProgress, System_Threading_CancellationToken_o cancel, const MethodInfo* method);
System_Collections_IEnumerator_o* UniRx_ObservableWWW__FetchAssetBundle (UnityEngine_WWW_o* www, System_IObserver_AssetBundle__o* observer, System_IProgress_float__o* reportProgress, System_Threading_CancellationToken_o cancel, const MethodInfo* method);
