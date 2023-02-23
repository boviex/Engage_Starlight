#pragma once

#include "il2cpp.h"

void App_SoundWwise_SoundHandle___ctor (App_SoundWwise_SoundHandle_o* __this, const MethodInfo* method);
void App_SoundWwise_SoundHandle__Init (App_SoundWwise_SoundHandle_o* __this, System_String_o* eventName, UnityEngine_GameObject_o* gameObject, uint32_t playingId, bool isTemporaryGameObject, const MethodInfo* method);
System_String_o* App_SoundWwise_SoundHandle__GetEventName (App_SoundWwise_SoundHandle_o* __this, const MethodInfo* method);
uint32_t App_SoundWwise_SoundHandle__GetEventId (App_SoundWwise_SoundHandle_o* __this, const MethodInfo* method);
bool App_SoundWwise_SoundHandle__IsPlaying (App_SoundWwise_SoundHandle_o* __this, const MethodInfo* method);
UnityEngine_GameObject_o* App_SoundWwise_SoundHandle__GetGameObject (App_SoundWwise_SoundHandle_o* __this, const MethodInfo* method);
uint32_t App_SoundWwise_SoundHandle__GetPlayingId (App_SoundWwise_SoundHandle_o* __this, const MethodInfo* method);
Combat_Character_o* App_SoundWwise_SoundHandle__GetCharacter (App_SoundWwise_SoundHandle_o* __this, const MethodInfo* method);
App_EventCharacterMouthController_o* App_SoundWwise_SoundHandle__GetEventCharacterMouthController (App_SoundWwise_SoundHandle_o* __this, const MethodInfo* method);
void App_SoundWwise_SoundHandle__SetCharacter (App_SoundWwise_SoundHandle_o* __this, Combat_Character_o* character, const MethodInfo* method);
void App_SoundWwise_SoundHandle__SetEventCharacterMouthController (App_SoundWwise_SoundHandle_o* __this, App_EventCharacterMouthController_o* eventCharacterMouthController, const MethodInfo* method);
System_String_o* App_SoundWwise_SoundHandle__GetLipSyncDataFileName (App_SoundWwise_SoundHandle_o* __this, const MethodInfo* method);
bool App_SoundWwise_SoundHandle__IsTemporaryObject (App_SoundWwise_SoundHandle_o* __this, const MethodInfo* method);
void App_SoundWwise_SoundHandle__SetIsPlaying (App_SoundWwise_SoundHandle_o* __this, bool isPlaying, const MethodInfo* method);
void App_SoundWwise_SoundHandle__SetLipSyncDataFileName (App_SoundWwise_SoundHandle_o* __this, System_String_o* lipSyncDataFileName, const MethodInfo* method);
bool App_SoundWwise_SoundHandle__IsEnable (App_SoundWwise_SoundHandle_o* __this, const MethodInfo* method);
void App_SoundWwise_SoundHandle__Stop (App_SoundWwise_SoundHandle_o* __this, int32_t fadeMsec, const MethodInfo* method);
void App_SoundWwise_SoundHandle__Pause (App_SoundWwise_SoundHandle_o* __this, int32_t fadeMsec, const MethodInfo* method);
void App_SoundWwise_SoundHandle__Resume (App_SoundWwise_SoundHandle_o* __this, int32_t fadeMsec, const MethodInfo* method);
