#pragma once

#include "il2cpp.h"

void App_Pad___ctor (App_Pad_o* __this, const MethodInfo* method);
int32_t App_Pad__GetMode (App_Pad_o* __this, const MethodInfo* method);
int32_t App_Pad__GetInputMode (App_Pad_o* __this, const MethodInfo* method);
int32_t App_Pad__GetStickValue (App_Pad_o* __this, System_String_o* key, const MethodInfo* method);
void App_Pad__CommitStickButton (App_Pad_o* __this, nn_hid_NpadState_o* state, float margin, const MethodInfo* method);
void App_Pad__OnUpdate (App_Pad_o* __this, const MethodInfo* method);
void App_Pad__UpdateDebugPad (App_Pad_o* __this, const MethodInfo* method);
void App_Pad__UpdateExclusive (App_Pad_o* __this, int64_t button, const MethodInfo* method);
void App_Pad__UpdateExclusive (App_Pad_o* __this, const MethodInfo* method);
bool App_Pad__CheckPadState (App_Pad_o* __this, const MethodInfo* method);
bool App_Pad__IsButton (int64_t buttons, const MethodInfo* method);
bool App_Pad__IsTrigger (int64_t buttons, const MethodInfo* method);
bool App_Pad__IsRepeat (int64_t buttons, const MethodInfo* method);
bool App_Pad__IsRelease (int64_t buttons, const MethodInfo* method);
float App_Pad__GetStickLX (const MethodInfo* method);
float App_Pad__GetStickLY (const MethodInfo* method);
float App_Pad__GetStickRX (const MethodInfo* method);
float App_Pad__GetStickRY (const MethodInfo* method);
float App_Pad__GetStickLX (float allowance, const MethodInfo* method);
float App_Pad__GetStickLY (float allowance, const MethodInfo* method);
float App_Pad__GetStickRX (float allowance, const MethodInfo* method);
float App_Pad__GetStickRY (float allowance, const MethodInfo* method);
float App_Pad__GetAllowance (float value, float allowance, const MethodInfo* method);
App_VibrationManager_o* App_Pad__Vibration (const MethodInfo* method);
App_GyroMnager_o* App_Pad__Gyro (const MethodInfo* method);
int32_t App_Pad__GetStepCount (const MethodInfo* method);
int32_t App_Pad__GetHoldCount (const MethodInfo* method);
void App_Pad__SetEnableControllerSupport (bool isEnable, const MethodInfo* method);
bool App_Pad__IsDebugTrigger (const MethodInfo* method);
bool App_Pad__IsDebugSkip (const MethodInfo* method);
void App_Pad__DebugRecordStart (const MethodInfo* method);
void App_Pad__DebugRecordStop (const MethodInfo* method);
void App_Pad__DebugRecordPlay (const MethodInfo* method);
bool App_Pad__IsDebugRecording (const MethodInfo* method);
void App_Pad__DebugHookButton (int32_t buttons, const MethodInfo* method);
void App_Pad__DebugHookStickL (float x, float y, const MethodInfo* method);
void App_Pad__DebugHookStickR (float x, float y, const MethodInfo* method);
void App_Pad___cctor (const MethodInfo* method);
