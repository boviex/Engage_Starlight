#pragma once

#include "il2cpp.h"

bool App_FishingBattleRader__get_IsEscape (App_FishingBattleRader_o* __this, const MethodInfo* method);
void App_FishingBattleRader__set_IsEscape (App_FishingBattleRader_o* __this, bool value, const MethodInfo* method);
bool App_FishingBattleRader__get_IsDefeat (App_FishingBattleRader_o* __this, const MethodInfo* method);
void App_FishingBattleRader__set_IsDefeat (App_FishingBattleRader_o* __this, bool value, const MethodInfo* method);
float App_FishingBattleRader__get_ShadowDistance (App_FishingBattleRader_o* __this, const MethodInfo* method);
void App_FishingBattleRader__set_ShadowDistance (App_FishingBattleRader_o* __this, float value, const MethodInfo* method);
float App_FishingBattleRader__get_ShadowDir (App_FishingBattleRader_o* __this, const MethodInfo* method);
void App_FishingBattleRader__set_ShadowDir (App_FishingBattleRader_o* __this, float value, const MethodInfo* method);
bool App_FishingBattleRader__get_IsShake (App_FishingBattleRader_o* __this, const MethodInfo* method);
void App_FishingBattleRader___ctor (App_FishingBattleRader_o* __this, const MethodInfo* method);
void App_FishingBattleRader__Init (App_FishingBattleRader_o* __this, int32_t sizeID, float shadowScale, App_FishingConfig_Battle_o* config, const MethodInfo* method);
void App_FishingBattleRader__Finalize (App_FishingBattleRader_o* __this, const MethodInfo* method);
void App_FishingBattleRader__ResetRadar (App_FishingBattleRader_o* __this, const MethodInfo* method);
void App_FishingBattleRader__Tick (App_FishingBattleRader_o* __this, App_FishingFish_o* fish, const MethodInfo* method);
void App_FishingBattleRader__SetActiveDangerLine (App_FishingBattleRader_o* __this, bool set, const MethodInfo* method);
void App_FishingBattleRader__UpdateFishShadow (App_FishingBattleRader_o* __this, App_FishingFish_o* fish, const MethodInfo* method);
void App_FishingBattleRader__RecoveryLethal (App_FishingBattleRader_o* __this, const MethodInfo* method);
void App_FishingBattleRader__DamageShake (App_FishingBattleRader_o* __this, const MethodInfo* method);
void App_FishingBattleRader__DamageRed (App_FishingBattleRader_o* __this, const MethodInfo* method);
UnityEngine_Vector2_o App_FishingBattleRader__GetCounterVec (App_FishingBattleRader_o* __this, const MethodInfo* method);
void App_FishingBattleRader__UpdateStickDir (App_FishingBattleRader_o* __this, const MethodInfo* method);
void App_FishingBattleRader__SetHPGaugeWidth (App_FishingBattleRader_o* __this, UnityEngine_GameObject_o* gaugeObj, float width, const MethodInfo* method);
void App_FishingBattleRader__SetHPGaugeColor (App_FishingBattleRader_o* __this, UnityEngine_GameObject_o* gaugeObj, UnityEngine_Color_o setColor, const MethodInfo* method);
void App_FishingBattleRader__FirstAttack (App_FishingBattleRader_o* __this, float hpRate, const MethodInfo* method);
void App_FishingBattleRader__UpdateHP (App_FishingBattleRader_o* __this, float percent, const MethodInfo* method);
void App_FishingBattleRader__UpdateLethalHP (App_FishingBattleRader_o* __this, float percent, const MethodInfo* method);
void App_FishingBattleRader__SetLethal (App_FishingBattleRader_o* __this, bool set, const MethodInfo* method);
void App_FishingBattleRader__SetActiveArea (App_FishingBattleRader_o* __this, bool set, const MethodInfo* method);
void App_FishingBattleRader__SetStickObj (App_FishingBattleRader_o* __this, UnityEngine_GameObject_o* obj, const MethodInfo* method);
void App_FishingBattleRader__SetActiveStick (App_FishingBattleRader_o* __this, bool set, const MethodInfo* method);
bool App_FishingBattleRader__IsActiveStick (App_FishingBattleRader_o* __this, const MethodInfo* method);
void App_FishingBattleRader__SetButtonObj (App_FishingBattleRader_o* __this, UnityEngine_GameObject_o* obj, const MethodInfo* method);
void App_FishingBattleRader__SetActiveButton (App_FishingBattleRader_o* __this, bool set, const MethodInfo* method);
bool App_FishingBattleRader__IsActiveButton (App_FishingBattleRader_o* __this, const MethodInfo* method);
