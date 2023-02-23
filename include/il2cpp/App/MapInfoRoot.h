#pragma once

#include "il2cpp.h"

void App_MapInfoRoot__Start (App_MapInfoRoot_o* __this, const MethodInfo* method);
void App_MapInfoRoot__Init (App_MapInfoRoot_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapInfoRoot__Tick (App_MapInfoRoot_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapInfoRoot__UpdatePosition (App_MapInfoRoot_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapInfoRoot__UpdateCanvas (App_MapInfoRoot_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapInfoRoot__UpdateParam (App_MapInfoRoot_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapInfoRoot__UpdateAlpha (App_MapInfoRoot_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapInfoRoot__UpdateSortOrder (App_MapInfoRoot_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapInfoRoot__ForceUpdate (App_MapInfoRoot_o* __this, const MethodInfo* method);
void App_MapInfoRoot__SetActive (App_MapInfoRoot_o* __this, bool enable, const MethodInfo* method);
void App_MapInfoRoot__PlayEngageEffect (App_MapInfoRoot_o* __this, App_Unit_o* unit, int32_t count, const MethodInfo* method);
void App_MapInfoRoot__PlayEngageTurnRecoveryEffect (App_MapInfoRoot_o* __this, const MethodInfo* method);
bool App_MapInfoRoot__IsPlayingEngageTurnRecoveryEffect (App_MapInfoRoot_o* __this, const MethodInfo* method);
float App_MapInfoRoot__GetEngageTurnRecoveryEffectRate (App_MapInfoRoot_o* __this, const MethodInfo* method);
void App_MapInfoRoot__SetSuppressHpStock (App_MapInfoRoot_o* __this, bool enable, const MethodInfo* method);
void App_MapInfoRoot__PlayHpStockEffect (App_MapInfoRoot_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapInfoRoot__PlayHpStockCreateEffect (App_MapInfoRoot_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapInfoRoot__SetHpStockAlpha (App_MapInfoRoot_o* __this, int32_t stock, float alpha, const MethodInfo* method);
bool App_MapInfoRoot__IsPlayingHpStockEffect (App_MapInfoRoot_o* __this, const MethodInfo* method);
float App_MapInfoRoot__GetHpStockEffectRate (App_MapInfoRoot_o* __this, const MethodInfo* method);
void App_MapInfoRoot__SetUnitScreenPosLocalScale (App_MapInfoRoot_o* __this, UnityEngine_Vector3_o pos, const MethodInfo* method);
void App_MapInfoRoot__SetScreenHalfSize (App_MapInfoRoot_o* __this, UnityEngine_Vector2_o screenHalf, const MethodInfo* method);
void App_MapInfoRoot__InitHpForecast (App_MapInfoRoot_o* __this, const MethodInfo* method);
void App_MapInfoRoot__SetHpForecast (App_MapInfoRoot_o* __this, int32_t before, int32_t after, const MethodInfo* method);
void App_MapInfoRoot__InitBreak (App_MapInfoRoot_o* __this, const MethodInfo* method);
void App_MapInfoRoot__SetBreak (App_MapInfoRoot_o* __this, bool isBreak, const MethodInfo* method);
bool App_MapInfoRoot__IsCanvasVisibilityChanged (App_MapInfoRoot_o* __this, const MethodInfo* method);
bool App_MapInfoRoot__IsNextCanvasVisibilityEnable (App_MapInfoRoot_o* __this, const MethodInfo* method);
bool App_MapInfoRoot__IsNextCanvasVisibilityDisable (App_MapInfoRoot_o* __this, const MethodInfo* method);
void App_MapInfoRoot__CanvasVisibilityChange (App_MapInfoRoot_o* __this, const MethodInfo* method);
void App_MapInfoRoot__SetInfoEnable (App_MapInfoRoot_o* __this, bool enable, const MethodInfo* method);
void App_MapInfoRoot___ctor (App_MapInfoRoot_o* __this, const MethodInfo* method);
