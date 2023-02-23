#pragma once

#include "il2cpp.h"

UnityEngine_WWW_o* UnityEngine_WWW__LoadFromCacheOrDownload (System_String_o* url, int32_t version, const MethodInfo* method);
UnityEngine_WWW_o* UnityEngine_WWW__LoadFromCacheOrDownload (System_String_o* url, int32_t version, uint32_t crc, const MethodInfo* method);
UnityEngine_WWW_o* UnityEngine_WWW__LoadFromCacheOrDownload (System_String_o* url, UnityEngine_Hash128_o hash, const MethodInfo* method);
UnityEngine_WWW_o* UnityEngine_WWW__LoadFromCacheOrDownload (System_String_o* url, UnityEngine_Hash128_o hash, uint32_t crc, const MethodInfo* method);
void UnityEngine_WWW___ctor (UnityEngine_WWW_o* __this, System_String_o* url, UnityEngine_WWWForm_o* form, const MethodInfo* method);
void UnityEngine_WWW___ctor (UnityEngine_WWW_o* __this, System_String_o* url, System_Byte_array* postData, const MethodInfo* method);
void UnityEngine_WWW___ctor (UnityEngine_WWW_o* __this, System_String_o* url, System_Byte_array* postData, System_Collections_Generic_Dictionary_string__string__o* headers, const MethodInfo* method);
void UnityEngine_WWW___ctor (UnityEngine_WWW_o* __this, System_String_o* url, System_String_o* name, UnityEngine_Hash128_o hash, uint32_t crc, const MethodInfo* method);
UnityEngine_AssetBundle_o* UnityEngine_WWW__get_assetBundle (UnityEngine_WWW_o* __this, const MethodInfo* method);
System_Byte_array* UnityEngine_WWW__get_bytes (UnityEngine_WWW_o* __this, const MethodInfo* method);
System_String_o* UnityEngine_WWW__get_error (UnityEngine_WWW_o* __this, const MethodInfo* method);
bool UnityEngine_WWW__get_isDone (UnityEngine_WWW_o* __this, const MethodInfo* method);
float UnityEngine_WWW__get_progress (UnityEngine_WWW_o* __this, const MethodInfo* method);
System_Collections_Generic_Dictionary_string__string__o* UnityEngine_WWW__get_responseHeaders (UnityEngine_WWW_o* __this, const MethodInfo* method);
System_String_o* UnityEngine_WWW__get_text (UnityEngine_WWW_o* __this, const MethodInfo* method);
System_String_o* UnityEngine_WWW__get_url (UnityEngine_WWW_o* __this, const MethodInfo* method);
bool UnityEngine_WWW__get_keepWaiting (UnityEngine_WWW_o* __this, const MethodInfo* method);
void UnityEngine_WWW__Dispose (UnityEngine_WWW_o* __this, const MethodInfo* method);
bool UnityEngine_WWW__WaitUntilDoneIfPossible (UnityEngine_WWW_o* __this, const MethodInfo* method);
