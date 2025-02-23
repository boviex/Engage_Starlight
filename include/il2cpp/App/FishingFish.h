#pragma once

#include "il2cpp.h"

int32_t App_FishingFish__get_FishRank (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__set_FishRank (App_FishingFish_o* __this, int32_t value, const MethodInfo* method);
bool App_FishingFish__get_IsPerfectStart (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__set_IsPerfectStart (App_FishingFish_o* __this, bool value, const MethodInfo* method);
bool App_FishingFish__get_IsCounter (App_FishingFish_o* __this, const MethodInfo* method);
bool App_FishingFish__get_IsForceCounter (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__set_IsForceCounter (App_FishingFish_o* __this, bool value, const MethodInfo* method);
bool App_FishingFish__get_IsDanger (App_FishingFish_o* __this, const MethodInfo* method);
bool App_FishingFish__get_IsLethal (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__set_IsLethal (App_FishingFish_o* __this, bool value, const MethodInfo* method);
bool App_FishingFish__get_IsDrawFrame (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__set_IsDrawFrame (App_FishingFish_o* __this, bool value, const MethodInfo* method);
bool App_FishingFish__get_IsDamageFrame (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__set_IsDamageFrame (App_FishingFish_o* __this, bool value, const MethodInfo* method);
float App_FishingFish__get_ShadowDistanceRate (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__set_ShadowDistanceRate (App_FishingFish_o* __this, float value, const MethodInfo* method);
bool App_FishingFish__get_FakeFlag (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__set_FakeFlag (App_FishingFish_o* __this, bool value, const MethodInfo* method);
int32_t App_FishingFish__get_RippleSize (App_FishingFish_o* __this, const MethodInfo* method);
bool App_FishingFish__get_WaitAssistFlag (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__set_WaitAssistFlag (App_FishingFish_o* __this, bool value, const MethodInfo* method);
bool App_FishingFish__get_IsCatching (App_FishingFish_o* __this, const MethodInfo* method);
bool App_FishingFish__get_IsEscape (App_FishingFish_o* __this, const MethodInfo* method);
bool App_FishingFish__get_IsDefeat (App_FishingFish_o* __this, const MethodInfo* method);
App_FishingFishData_o* App_FishingFish__get_Data (App_FishingFish_o* __this, const MethodInfo* method);
float App_FishingFish__get_SizeMult (App_FishingFish_o* __this, const MethodInfo* method);
float App_FishingFish__get_HPRate (App_FishingFish_o* __this, const MethodInfo* method);
float App_FishingFish__get_LethalRate (App_FishingFish_o* __this, const MethodInfo* method);
bool App_FishingFish__get_IsPlayCounterSplashSE (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__set_IsPlayCounterSplashSE (App_FishingFish_o* __this, bool value, const MethodInfo* method);
bool App_FishingFish__get_IsPlayOrdinalSplashSE (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__set_IsPlayOrdinalSplashSE (App_FishingFish_o* __this, bool value, const MethodInfo* method);
bool App_FishingFish__get_IsPlayLethalSplashSE (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__set_IsPlayLethalSplashSE (App_FishingFish_o* __this, bool value, const MethodInfo* method);
void App_FishingFish__Start (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__Update (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__InitFish (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__SetForecastData (App_FishingFish_o* __this, System_Collections_Generic_List_ForecastFishData__o* set, const MethodInfo* method);
void App_FishingFish__SelectFish (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__ResetFishData (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__SetConfigs (App_FishingFish_o* __this, App_FishingConfig_Base_o* baseConfig, App_FishingConfig_WaitCatch_o* waitCatch, App_FishingConfig_Battle_o* battle, const MethodInfo* method);
void App_FishingFish__TickWaitCatch (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__TickCatching (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__TickWaitAssist (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__UpdateBattleEffect (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__UpdateLethalEffect (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__UpdateBattleCommon (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__TickBattle (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__TickWeak (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__TickLethal (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__SetPerfectTimeAdd (App_FishingFish_o* __this, float add, const MethodInfo* method);
bool App_FishingFish__TryBattle (App_FishingFish_o* __this, bool isAssist, const MethodInfo* method);
void App_FishingFish__UpdateLurePos (App_FishingFish_o* __this, UnityEngine_Vector3_o pos, const MethodInfo* method);
void App_FishingFish__SetFirstPos (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__OverriteRadicalParam (App_FishingFish_o* __this, float setPower, float setRegene, const MethodInfo* method);
void App_FishingFish__DrawFish (App_FishingFish_o* __this, UnityEngine_Vector2_o stickVec, const MethodInfo* method);
void App_FishingFish__Damage (App_FishingFish_o* __this, float damage, const MethodInfo* method);
void App_FishingFish__FirstDamage (App_FishingFish_o* __this, float damageRate, const MethodInfo* method);
void App_FishingFish__LethalDamage (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__Recovery (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__AddDamegeEffect (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__RecoveryLethal (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__AddEscapeTimer (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__ResetEscapeTimer (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__StartForceCounter (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__SetRadar (App_FishingFish_o* __this, App_FishingBattleRader_o* radar, const MethodInfo* method);
void App_FishingFish__EnableRadar_NoArea (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__EnableArea_Radar (App_FishingFish_o* __this, const MethodInfo* method);
bool App_FishingFish__IsEnableRadar (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__DisableRadar (App_FishingFish_o* __this, const MethodInfo* method);
bool App_FishingFish__CheckActiveUI (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__SetLureObj (App_FishingFish_o* __this, UnityEngine_GameObject_o* set, const MethodInfo* method);
UnityEngine_Vector2_o App_FishingFish__GetCounterVec (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__AddCatchRipple (App_FishingFish_o* __this, UnityEngine_Vector3_o addPos, const MethodInfo* method);
void App_FishingFish__PlayCounterSE (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__StopCounterSE (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__PlayOrdinalSE (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__StopOrdinalSE (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__PlayLethalSE (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__StopLethalSE (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish__StopStunSE (App_FishingFish_o* __this, const MethodInfo* method);
void App_FishingFish___ctor (App_FishingFish_o* __this, const MethodInfo* method);
