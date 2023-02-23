#pragma once

#include "il2cpp.h"

int32_t App_Talk3D_TalkCharacterManager__get_TalkType (App_Talk3D_TalkCharacterManager_o* __this, const MethodInfo* method);
System_String_o* App_Talk3D_TalkCharacterManager__get_ActivePid (App_Talk3D_TalkCharacterManager_o* __this, const MethodInfo* method);
bool App_Talk3D_TalkCharacterManager__get_IsPlayFirstTransition (App_Talk3D_TalkCharacterManager_o* __this, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager__Start (App_Talk3D_TalkCharacterManager_o* __this, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager__SetActiveToChildren (App_Talk3D_TalkCharacterManager_o* __this, UnityEngine_GameObject_o* root, bool isActive, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager__SetTalkType (App_Talk3D_TalkCharacterManager_o* __this, int32_t talkType, System_String_o* positionsRootName, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager__PreLoadCharacter (App_Talk3D_TalkCharacterManager_o* __this, System_String_o* pid, System_String_o* pidForCreate, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager__CreateCharacter (App_Talk3D_TalkCharacterManager_o* __this, System_String_o* pid, System_String_o* locationName, App_Talk3D_TalkCharacterManager_onLoad_o* callback, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager__CreateCharacterImpl (App_Talk3D_TalkCharacterManager_o* __this, System_String_o* pid, System_String_o* locationName, App_Talk3D_TalkCharacterManager_onLoad_o* callback, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager__SetupCharactorForDisplay (App_Talk3D_TalkCharacterManager_o* __this, System_String_o* pid, System_String_o* locationName, Combat_Character_o* chara, UnityEngine_GameObject_o* locator, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager__EnableFaceCamera (App_Talk3D_TalkCharacterManager_o* __this, System_String_o* locationName, const MethodInfo* method);
Combat_Character_o* App_Talk3D_TalkCharacterManager__SearchFromPool (App_Talk3D_TalkCharacterManager_o* __this, System_String_o* pid, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager__FadeInCharacter (App_Talk3D_TalkCharacterManager_o* __this, System_String_o* pid, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager__FadeOutCharacter (App_Talk3D_TalkCharacterManager_o* __this, System_String_o* pid, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager__DeleteCharacter (App_Talk3D_TalkCharacterManager_o* __this, System_String_o* pid, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager__DeleteAllCharacter (App_Talk3D_TalkCharacterManager_o* __this, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager__MoveModelToPool (App_Talk3D_TalkCharacterManager_o* __this, UnityEngine_GameObject_o* charaObj, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager__Show (App_Talk3D_TalkCharacterManager_o* __this, System_String_o* pid, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager__Hide (App_Talk3D_TalkCharacterManager_o* __this, System_String_o* pid, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager__ChangeAnimeBody (App_Talk3D_TalkCharacterManager_o* __this, System_String_o* pid, System_String_o* animeName, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager__ChangeAnimeFace (App_Talk3D_TalkCharacterManager_o* __this, System_String_o* pid, System_String_o* animeName, const MethodInfo* method);
Combat_Character_o* App_Talk3D_TalkCharacterManager__FindCharacter (App_Talk3D_TalkCharacterManager_o* __this, System_String_o* pid, const MethodInfo* method);
System_String_o* App_Talk3D_TalkCharacterManager__GetCharaLocationName (App_Talk3D_TalkCharacterManager_o* __this, System_String_o* pid, const MethodInfo* method);
UnityEngine_GameObject_o* App_Talk3D_TalkCharacterManager__FindLocatorByPID (App_Talk3D_TalkCharacterManager_o* __this, System_String_o* pid, const MethodInfo* method);
UnityEngine_GameObject_o* App_Talk3D_TalkCharacterManager__FindLocatorByLocationName (App_Talk3D_TalkCharacterManager_o* __this, System_String_o* locationName, const MethodInfo* method);
bool App_Talk3D_TalkCharacterManager__IsFading (const MethodInfo* method);
System_String_o* App_Talk3D_TalkCharacterManager__PidToPidForCreate (System_String_o* pid, const MethodInfo* method);
void App_Talk3D_TalkCharacterManager___ctor (App_Talk3D_TalkCharacterManager_o* __this, const MethodInfo* method);
