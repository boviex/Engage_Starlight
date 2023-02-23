#pragma once

#include "il2cpp.h"

intptr_t UnityEngine_Networking_DownloadHandlerAssetBundle__Create (UnityEngine_Networking_DownloadHandlerAssetBundle_o* obj, System_String_o* url, uint32_t crc, const MethodInfo* method);
intptr_t UnityEngine_Networking_DownloadHandlerAssetBundle__CreateCached (UnityEngine_Networking_DownloadHandlerAssetBundle_o* obj, System_String_o* url, System_String_o* name, UnityEngine_Hash128_o hash, uint32_t crc, const MethodInfo* method);
void UnityEngine_Networking_DownloadHandlerAssetBundle__InternalCreateAssetBundle (UnityEngine_Networking_DownloadHandlerAssetBundle_o* __this, System_String_o* url, uint32_t crc, const MethodInfo* method);
void UnityEngine_Networking_DownloadHandlerAssetBundle__InternalCreateAssetBundleCached (UnityEngine_Networking_DownloadHandlerAssetBundle_o* __this, System_String_o* url, System_String_o* name, UnityEngine_Hash128_o hash, uint32_t crc, const MethodInfo* method);
void UnityEngine_Networking_DownloadHandlerAssetBundle___ctor (UnityEngine_Networking_DownloadHandlerAssetBundle_o* __this, System_String_o* url, uint32_t crc, const MethodInfo* method);
void UnityEngine_Networking_DownloadHandlerAssetBundle___ctor (UnityEngine_Networking_DownloadHandlerAssetBundle_o* __this, System_String_o* url, UnityEngine_CachedAssetBundle_o cachedBundle, uint32_t crc, const MethodInfo* method);
System_Byte_array* UnityEngine_Networking_DownloadHandlerAssetBundle__GetData (UnityEngine_Networking_DownloadHandlerAssetBundle_o* __this, const MethodInfo* method);
System_String_o* UnityEngine_Networking_DownloadHandlerAssetBundle__GetText (UnityEngine_Networking_DownloadHandlerAssetBundle_o* __this, const MethodInfo* method);
UnityEngine_AssetBundle_o* UnityEngine_Networking_DownloadHandlerAssetBundle__get_assetBundle (UnityEngine_Networking_DownloadHandlerAssetBundle_o* __this, const MethodInfo* method);
intptr_t UnityEngine_Networking_DownloadHandlerAssetBundle__CreateCached_Injected (UnityEngine_Networking_DownloadHandlerAssetBundle_o* obj, System_String_o* url, System_String_o* name, UnityEngine_Hash128_o* hash, uint32_t crc, const MethodInfo* method);
