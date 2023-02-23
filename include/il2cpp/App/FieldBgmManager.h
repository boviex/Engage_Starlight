#pragma once

#include "il2cpp.h"

void App_FieldBgmManager___ctor (App_FieldBgmManager_o* __this, App_SoundManager_o* sndMgr, const MethodInfo* method);
bool App_FieldBgmManager__IsSetPhaseBgm (App_FieldBgmManager_o* __this, const MethodInfo* method);
void App_FieldBgmManager__Init (App_FieldBgmManager_o* __this, const MethodInfo* method);
void App_FieldBgmManager__Final (App_FieldBgmManager_o* __this, int32_t fadeMsec, const MethodInfo* method);
void App_FieldBgmManager__Reset (App_FieldBgmManager_o* __this, int32_t fadeMsec, bool isResetRestoreData, const MethodInfo* method);
void App_FieldBgmManager__StartSpecialBattleBgmContinueTurn (App_FieldBgmManager_o* __this, const MethodInfo* method);
void App_FieldBgmManager__SetSpecialBattleBgmContinueTurnForRewind (App_FieldBgmManager_o* __this, int32_t turn, const MethodInfo* method);
void App_FieldBgmManager__SetPhaseBgm (App_FieldBgmManager_o* __this, App_ChapterData_o* chapter, bool isEncount, const MethodInfo* method);
void App_FieldBgmManager__RestorePhaseBgm (App_FieldBgmManager_o* __this, const MethodInfo* method);
bool App_FieldBgmManager__SetPhaseBgm (App_FieldBgmManager_o* __this, System_String_o* playerBgmEventName, System_String_o* enemyBgmEventName, System_String_o* allyBgmEventName, const MethodInfo* method);
void App_FieldBgmManager__Serialize (App_FieldBgmManager_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_FieldBgmManager__Deserialize (App_FieldBgmManager_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_FieldBgmManager__Tick (App_FieldBgmManager_o* __this, const MethodInfo* method);
void App_FieldBgmManager__PlayBgm (App_FieldBgmManager_o* __this, int32_t forceType, const MethodInfo* method);
void App_FieldBgmManager__StopBgm (App_FieldBgmManager_o* __this, int32_t fadeMsec, const MethodInfo* method);
void App_FieldBgmManager__PauseBgm (App_FieldBgmManager_o* __this, int32_t fadeMsec, const MethodInfo* method);
void App_FieldBgmManager__ResumeBgm (App_FieldBgmManager_o* __this, int32_t fadeMsec, const MethodInfo* method);
void App_FieldBgmManager__SetBgmVolume (App_FieldBgmManager_o* __this, float vol, int32_t fadeMsec, const MethodInfo* method);
void App_FieldBgmManager__ChangeForceType (App_FieldBgmManager_o* __this, int32_t forceType, App_ProcInst_o* super, bool isTurnElapsed, const MethodInfo* method);
void App_FieldBgmManager__ChangeForceTypeImm (App_FieldBgmManager_o* __this, int32_t forceType, const MethodInfo* method);
void App_FieldBgmManager__PlaySpecialBattleBgm (App_FieldBgmManager_o* __this, System_String_o* eventName, const MethodInfo* method);
void App_FieldBgmManager__PauseSpecialBattleBgm (App_FieldBgmManager_o* __this, System_String_o* eventName, const MethodInfo* method);
void App_FieldBgmManager__StopSpecialBattleBgm (App_FieldBgmManager_o* __this, System_String_o* eventName, const MethodInfo* method);
bool App_FieldBgmManager__IsSpecialBattleBgmExist (App_FieldBgmManager_o* __this, System_String_o* eventName, const MethodInfo* method);
void App_FieldBgmManager__SetWarSituationParam (App_FieldBgmManager_o* __this, System_String_o* valueName, const MethodInfo* method);
void App_FieldBgmManager__RestoreWarSituationParam (App_FieldBgmManager_o* __this, const MethodInfo* method);
void App_FieldBgmManager__SetFirstPlayedFlag (App_FieldBgmManager_o* __this, const MethodInfo* method);
void App_FieldBgmManager__ClearBgm (App_FieldBgmManager_o* __this, int32_t fadeMsec, const MethodInfo* method);
System_String_o* App_FieldBgmManager__GetStateGroupName (App_FieldBgmManager_o* __this, const MethodInfo* method);
void App_FieldBgmManager__PlayBgm (App_FieldBgmManager_o* __this, System_String_o* bgmHandleName, const MethodInfo* method);
void App_FieldBgmManager__StopBgm (App_FieldBgmManager_o* __this, System_String_o* bgmHandleName, int32_t fadeMsec, const MethodInfo* method);
void App_FieldBgmManager__PauseBgm (App_FieldBgmManager_o* __this, System_String_o* bgmHandleName, int32_t fadeMsec, const MethodInfo* method);
void App_FieldBgmManager__ResumeBgm (App_FieldBgmManager_o* __this, System_String_o* bgmHandleName, int32_t fadeMsec, bool isfadeMsecByManual, const MethodInfo* method);
