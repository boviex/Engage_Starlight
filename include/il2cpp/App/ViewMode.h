#pragma once

#include "il2cpp.h"

float App_ViewMode__get_ModeThreshold (const MethodInfo* method);
int32_t App_ViewMode__GetMode (const MethodInfo* method);
int32_t App_ViewMode__GetBmapSkinQuality (const MethodInfo* method);
float App_ViewMode__GetBmapAlpha (const MethodInfo* method);
bool App_ViewMode__IsBmapShowing (const MethodInfo* method);
float App_ViewMode__GetTransition (const MethodInfo* method);
void App_ViewMode__SetMode (int32_t mode, const MethodInfo* method);
void App_ViewMode__SetMode (UnityEngine_Camera_o* camera, int32_t mode, const MethodInfo* method);
void App_ViewMode__PushMode (int32_t mode, const MethodInfo* method);
void App_ViewMode__PopMode (const MethodInfo* method);
void App_ViewMode__SetTransition (float transition, const MethodInfo* method);
void App_ViewMode__SetLayerCullingMask (UnityEngine_Camera_o* camera, System_String_o* name, bool enable, const MethodInfo* method);
void App_ViewMode__SetTransition (UnityEngine_Camera_o* camera, float transition, const MethodInfo* method);
void App_ViewMode__UpdateBoostMode (bool isBoost, const MethodInfo* method);
void App_ViewMode___ctor (App_ViewMode_o* __this, const MethodInfo* method);
void App_ViewMode___cctor (const MethodInfo* method);
