#pragma once

#include "il2cpp.h"

void App_SoundWwise_SoundPlay___ctor (App_SoundWwise_SoundPlay_o* __this, const MethodInfo* method);
UnityEngine_GameObject_o* App_SoundWwise_SoundPlay__PopTemporaryGameObject (App_SoundWwise_SoundPlay_o* __this, const MethodInfo* method);
void App_SoundWwise_SoundPlay__PushTemporaryGameObject (App_SoundWwise_SoundPlay_o* __this, UnityEngine_GameObject_o* gameObject, const MethodInfo* method);
void App_SoundWwise_SoundPlay__PostEventCallback (App_SoundWwise_SoundPlay_o* __this, Il2CppObject* cookie, int32_t type, AkCallbackInfo_o* callbackInfo, const MethodInfo* method);
System_String_array* App_SoundWwise_SoundPlay__GetMarkerCmdArgs (App_SoundWwise_SoundPlay_o* __this, System_String_o* markerName, System_String_o* cmdName, const MethodInfo* method);
bool App_SoundWwise_SoundPlay__IsEventLoaded (App_SoundWwise_SoundPlay_o* __this, System_String_o* eventName, const MethodInfo* method);
bool App_SoundWwise_SoundPlay__IsEventLoaded_Common (App_SoundWwise_SoundPlay_o* __this, System_String_o* eventName, const MethodInfo* method);
App_SoundSystem_SoundHandle_o* App_SoundWwise_SoundPlay__PostEvent (App_SoundWwise_SoundPlay_o* __this, System_String_o* eventName, bool isGetPosition, const MethodInfo* method);
App_SoundSystem_SoundHandle_o* App_SoundWwise_SoundPlay__PostEvent (App_SoundWwise_SoundPlay_o* __this, System_String_o* eventName, UnityEngine_GameObject_o* gameObject, bool isGetPosition, const MethodInfo* method);
App_SoundSystem_SoundHandle_o* App_SoundWwise_SoundPlay__PostEventWithTemporaryGameObject (App_SoundWwise_SoundPlay_o* __this, System_String_o* eventName, UnityEngine_GameObject_o* temporaryGameObject, bool isGetPosition, const MethodInfo* method);
void App_SoundWwise_SoundPlay__StopSoundOnEvent (App_SoundWwise_SoundPlay_o* __this, System_String_o* eventName, int32_t fadeMsec, const MethodInfo* method);
void App_SoundWwise_SoundPlay__StopSoundOnEvent (App_SoundWwise_SoundPlay_o* __this, System_String_o* eventName, int32_t fadeMsec, UnityEngine_GameObject_o* gameObject, const MethodInfo* method);
void App_SoundWwise_SoundPlay__PauseSoundOnEvent (App_SoundWwise_SoundPlay_o* __this, System_String_o* eventName, int32_t fadeMsec, const MethodInfo* method);
void App_SoundWwise_SoundPlay__PauseSoundOnEvent (App_SoundWwise_SoundPlay_o* __this, System_String_o* eventName, int32_t fadeMsec, UnityEngine_GameObject_o* gameObject, const MethodInfo* method);
void App_SoundWwise_SoundPlay__ResumeSoundOnEvent (App_SoundWwise_SoundPlay_o* __this, System_String_o* eventName, int32_t fadeMsec, const MethodInfo* method);
void App_SoundWwise_SoundPlay__ResumeSoundOnEvent (App_SoundWwise_SoundPlay_o* __this, System_String_o* eventName, int32_t fadeMsec, UnityEngine_GameObject_o* gameObject, const MethodInfo* method);
void App_SoundWwise_SoundPlay__StopByPlayingId (App_SoundWwise_SoundPlay_o* __this, uint32_t playingId, int32_t fadeMsec, const MethodInfo* method);
int32_t App_SoundWwise_SoundPlay__GetPlayPosition (App_SoundWwise_SoundPlay_o* __this, uint32_t playingId, int32_t positionOffset, const MethodInfo* method);
