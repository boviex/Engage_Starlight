#pragma once

#include "il2cpp.h"

void App_VibrationManager___ctor (App_VibrationManager_o* __this, const MethodInfo* method);
void App_VibrationManager__SetFile (App_VibrationManager_o* __this, App_VibrationFile_o* file, bool isLoop, const MethodInfo* method);
void App_VibrationManager__SetAmplitudeMagnitude (App_VibrationManager_o* __this, float amplitudeMagnitude, const MethodInfo* method);
void App_VibrationManager__SetAmplitude (App_VibrationManager_o* __this, float ampLow, float ampHigh, const MethodInfo* method);
void App_VibrationManager__SetFrequecy (App_VibrationManager_o* __this, float freqLow, float freqHigh, const MethodInfo* method);
void App_VibrationManager__OneShot (App_VibrationManager_o* __this, float time, float amplitudeMagnitude, float ampLow, float ampHigh, const MethodInfo* method);
void App_VibrationManager__OneShot (App_VibrationManager_o* __this, float time, float amplitudeMagnitude, float ampLow, float ampHigh, float freqLow, float freqHigh, const MethodInfo* method);
void App_VibrationManager__StopVibe (App_VibrationManager_o* __this, const MethodInfo* method);
void App_VibrationManager__PlayByGameSoundEvent (App_VibrationManager_o* __this, System_String_o* eventName, float time, bool isLoop, const MethodInfo* method);
void App_VibrationManager__PlayByVibrationFileName (App_VibrationManager_o* __this, System_String_o* vibFileName, float amplitudeMagnitude, float time, bool isLoop, const MethodInfo* method);
void App_VibrationManager__Update (App_VibrationManager_o* __this, const MethodInfo* method);
void App_VibrationManager__SetupPad (App_VibrationManager_o* __this, int32_t npadId, int32_t npadStyle, const MethodInfo* method);
void App_VibrationManager___OneShot_b__10_0 (App_VibrationManager_o* __this, int64_t __, const MethodInfo* method);
