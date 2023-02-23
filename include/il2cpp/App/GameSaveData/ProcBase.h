#pragma once

#include "il2cpp.h"

void App_GameSaveData_ProcBase___ctor (App_GameSaveData_ProcBase_o* __this, App_GameSaveData_o* saveData, const MethodInfo* method);
void App_GameSaveData_ProcBase__PauseExitApp (App_GameSaveData_ProcBase_o* __this, const MethodInfo* method);
void App_GameSaveData_ProcBase__ResumeExitApp (App_GameSaveData_ProcBase_o* __this, const MethodInfo* method);
void App_GameSaveData_ProcBase__ResumeExitAppAndJumpIfFailed (App_GameSaveData_ProcBase_o* __this, int32_t label, const MethodInfo* method);
void App_GameSaveData_ProcBase__WriteGlobalCore (App_GameSaveData_ProcBase_o* __this, App_Stream_o* stream, System_Byte_array* data, const MethodInfo* method);
void App_GameSaveData_ProcBase__Check (App_GameSaveData_ProcBase_o* __this, App_Stream_o* stream, System_String_o* path, const MethodInfo* method);
void App_GameSaveData_ProcBase__Commit (App_GameSaveData_ProcBase_o* __this, const MethodInfo* method);
bool App_GameSaveData_ProcBase__IsRunning (App_GameSaveData_ProcBase_o* __this, const MethodInfo* method);
bool App_GameSaveData_ProcBase__IsFailed (App_GameSaveData_ProcBase_o* __this, const MethodInfo* method);
bool App_GameSaveData_ProcBase__IsShowing (App_GameSaveData_ProcBase_o* __this, const MethodInfo* method);
void App_GameSaveData_ProcBase__MessageOpen (App_GameSaveData_ProcBase_o* __this, System_String_o* mid, const MethodInfo* method);
void App_GameSaveData_ProcBase__MessageClose (App_GameSaveData_ProcBase_o* __this, const MethodInfo* method);
void App_GameSaveData_ProcBase__StartMessageTime (App_GameSaveData_ProcBase_o* __this, const MethodInfo* method);
float App_GameSaveData_ProcBase__GetWaitMessageTime (App_GameSaveData_ProcBase_o* __this, const MethodInfo* method);
void App_GameSaveData_ProcBase__WaitMessageTime (App_GameSaveData_ProcBase_o* __this, const MethodInfo* method);
void App_GameSaveData_ProcBase__SaveStartSoundEvent (App_GameSaveData_ProcBase_o* __this, const MethodInfo* method);
void App_GameSaveData_ProcBase__SaveEndSoundEvent (App_GameSaveData_ProcBase_o* __this, const MethodInfo* method);
void App_GameSaveData_ProcBase__ModifyForParentalControlImpl (App_GameSaveData_ProcBase_o* __this, const MethodInfo* method);
