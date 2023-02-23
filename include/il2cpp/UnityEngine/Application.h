#pragma once

#include "il2cpp.h"

bool UnityEngine_Application__get_isPlaying (const MethodInfo* method);
System_String_o* UnityEngine_Application__get_dataPath (const MethodInfo* method);
System_String_o* UnityEngine_Application__get_streamingAssetsPath (const MethodInfo* method);
System_String_o* UnityEngine_Application__get_persistentDataPath (const MethodInfo* method);
System_String_o* UnityEngine_Application__get_temporaryCachePath (const MethodInfo* method);
System_String_o* UnityEngine_Application__get_productName (const MethodInfo* method);
void UnityEngine_Application__OpenURL (System_String_o* url, const MethodInfo* method);
void UnityEngine_Application__set_backgroundLoadingPriority (int32_t value, const MethodInfo* method);
int32_t UnityEngine_Application__get_platform (const MethodInfo* method);
bool UnityEngine_Application__get_isMobilePlatform (const MethodInfo* method);
void UnityEngine_Application__CallLowMemory (const MethodInfo* method);
void UnityEngine_Application__CallLogCallback (System_String_o* logString, System_String_o* stackTrace, int32_t type, bool invokedOnMainThread, const MethodInfo* method);
bool UnityEngine_Application__Internal_ApplicationWantsToQuit (const MethodInfo* method);
void UnityEngine_Application__Internal_ApplicationQuit (const MethodInfo* method);
void UnityEngine_Application__Internal_ApplicationUnload (const MethodInfo* method);
void UnityEngine_Application__InvokeOnBeforeRender (const MethodInfo* method);
void UnityEngine_Application__InvokeFocusChanged (bool focus, const MethodInfo* method);
void UnityEngine_Application__InvokeDeepLinkActivated (System_String_o* url, const MethodInfo* method);
bool UnityEngine_Application__get_isEditor (const MethodInfo* method);
