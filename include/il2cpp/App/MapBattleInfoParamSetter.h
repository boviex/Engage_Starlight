#pragma once

#include "il2cpp.h"

int32_t App_MapBattleInfoParamSetter__get_SideType (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter__set_SideType (App_MapBattleInfoParamSetter_o* __this, int32_t value, const MethodInfo* method);
App_BattleInfo_o* App_MapBattleInfoParamSetter__get_BattleInfo (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter__set_BattleInfo (App_MapBattleInfoParamSetter_o* __this, App_BattleInfo_o* value, const MethodInfo* method);
App_BattleSceneList_o* App_MapBattleInfoParamSetter__get_BattleSceneList (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter__set_BattleSceneList (App_MapBattleInfoParamSetter_o* __this, App_BattleSceneList_o* value, const MethodInfo* method);
App_BattleInfoSide_o* App_MapBattleInfoParamSetter__get_Side (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter__set_Side (App_MapBattleInfoParamSetter_o* __this, App_BattleInfoSide_o* value, const MethodInfo* method);
App_BattleInfoSide_o* App_MapBattleInfoParamSetter__get_ReverseSide (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter__set_ReverseSide (App_MapBattleInfoParamSetter_o* __this, App_BattleInfoSide_o* value, const MethodInfo* method);
App_Unit_o* App_MapBattleInfoParamSetter__get_Unit (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
App_UnitItem_o* App_MapBattleInfoParamSetter__get_UnitItem (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
int32_t App_MapBattleInfoParamSetter__get_MaxHp (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter__SetWeaponChangeVisible (App_MapBattleInfoParamSetter_o* __this, bool isVisible, const MethodInfo* method);
void App_MapBattleInfoParamSetter__SetBattleInfo (App_MapBattleInfoParamSetter_o* __this, int32_t sideType, bool bShowWdw, App_BattleInfo_o* info, App_BattleSceneList_o* sceneList, const MethodInfo* method);
void App_MapBattleInfoParamSetter__SetBattleInfoForBattle (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter__SetBattleInfoForTrade (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter__SetBattleInfoForDestroy (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter__SetBattleInfoForNoParam (App_MapBattleInfoParamSetter_o* __this, bool isWeapon, bool isGodName, const MethodInfo* method);
float App_MapBattleInfoParamSetter__GetHpGaugeMaxWidth (App_MapBattleInfoParamSetter_o* __this, int32_t maxHp, const MethodInfo* method);
void App_MapBattleInfoParamSetter__TryUpdateDamageGauge (App_MapBattleInfoParamSetter_o* __this, UnityEngine_GameObject_o* gaugeObj, int32_t value, int32_t max, const MethodInfo* method);
void App_MapBattleInfoParamSetter__TrySetChildImageMaterial (App_MapBattleInfoParamSetter_o* __this, UnityEngine_GameObject_o* gameObject, UnityEngine_Material_o* mat, const MethodInfo* method);
void App_MapBattleInfoParamSetter__SetUnitName (App_MapBattleInfoParamSetter_o* __this, System_String_o* unitName, const MethodInfo* method);
void App_MapBattleInfoParamSetter__SetUnitName (App_MapBattleInfoParamSetter_o* __this, App_Unit_o* unit, bool bWeapon, bool bGod, const MethodInfo* method);
void App_MapBattleInfoParamSetter__ShowDestroyName (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter__ShowWeapon (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter__HideWeapon (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter__ShowHp (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter__ShowDestroyHp (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter__HideHp (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter__SetAfterHpGauge (App_MapBattleInfoParamSetter_o* __this, int32_t hp, const MethodInfo* method);
void App_MapBattleInfoParamSetter__SetGaugeSide (App_MapBattleInfoParamSetter_o* __this, UnityEngine_GameObject_o* gauge, const MethodInfo* method);
void App_MapBattleInfoParamSetter__SetInitParams (App_MapBattleInfoParamSetter_o* __this, bool bShow, const MethodInfo* method);
void App_MapBattleInfoParamSetter__SetAtkParam (App_MapBattleInfoParamSetter_o* __this, int32_t sideType, App_BattleInfo_o* info, App_BattleSceneList_o* sceneList, const MethodInfo* method);
void App_MapBattleInfoParamSetter__SetChainAtkParam (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
bool App_MapBattleInfoParamSetter__IsShowWeapon (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
bool App_MapBattleInfoParamSetter__IsShowHP (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
bool App_MapBattleInfoParamSetter__IsFriendCommandSkill (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
int32_t App_MapBattleInfoParamSetter__GetForceType (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter__ShowDisorderIcon (App_MapBattleInfoParamSetter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapBattleInfoParamSetter__ShowAddHpStock (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter___ctor (App_MapBattleInfoParamSetter_o* __this, const MethodInfo* method);
void App_MapBattleInfoParamSetter___SetBattleInfoForBattle_b__81_0 (App_MapBattleInfoParamSetter_o* __this, App_Unit_o* target, int32_t __, int32_t __, const MethodInfo* method);
void App_MapBattleInfoParamSetter___SetBattleInfoForTrade_g__SetObjectColor_82_0 (UnityEngine_GameObject_o* parent, System_String_o* name, App_MapBattleInfoParamSetter___c__DisplayClass82_0_o* , const MethodInfo* method);
