#pragma once

#include "il2cpp.h"

void CombatGaugeController__Start (CombatGaugeController_o* __this, const MethodInfo* method);
void CombatGaugeController__Update (CombatGaugeController_o* __this, const MethodInfo* method);
void CombatGaugeController__SetupCommon (CombatGaugeController_o* __this, int32_t forceType, const MethodInfo* method);
void CombatGaugeController__SetupItem (CombatGaugeController_o* __this, App_UnitItem_o* item, const MethodInfo* method);
void CombatGaugeController__SetupParam (CombatGaugeController_o* __this, System_Collections_Generic_List_string__o* atkList, int32_t hit, int32_t crit, const MethodInfo* method);
void CombatGaugeController__SetupBattleAtk (CombatGaugeController_o* __this, int32_t sideType, App_BattleInfo_o* info, App_BattleSceneList_o* sceneList, App_BattleInfoSide_o* side, const MethodInfo* method);
void CombatGaugeController__SetupInterference (CombatGaugeController_o* __this, App_BattleInfoSide_o* side, const MethodInfo* method);
void CombatGaugeController__SetupHealAtk (CombatGaugeController_o* __this, int32_t sideType, App_BattleInfo_o* info, App_BattleSceneList_o* sceneList, const MethodInfo* method);
void CombatGaugeController__HideParam (CombatGaugeController_o* __this, const MethodInfo* method);
void CombatGaugeController__SetupParamBorder (CombatGaugeController_o* __this, const MethodInfo* method);
void CombatGaugeController__SetupChainParam (CombatGaugeController_o* __this, System_String_o* atk, int32_t hit, int32_t crit, const MethodInfo* method);
void CombatGaugeController__HideChainParam (CombatGaugeController_o* __this, const MethodInfo* method);
void CombatGaugeController__ShowHp (CombatGaugeController_o* __this, App_Unit_o* unit, int32_t hp, int32_t maxHp, int32_t forceType, const MethodInfo* method);
void CombatGaugeController__HideHp (CombatGaugeController_o* __this, const MethodInfo* method);
void CombatGaugeController__SetupHpGauge (CombatGaugeController_o* __this, int32_t now, int32_t max, const MethodInfo* method);
void CombatGaugeController__TrySetGaugeColor (CombatGaugeController_o* __this, UnityEngine_GameObject_o* gauge, UnityEngine_Color_o color, const MethodInfo* method);
void CombatGaugeController__TrgSetGaugeLayout (CombatGaugeController_o* __this, UnityEngine_GameObject_o* obj, float width, const MethodInfo* method);
void CombatGaugeController__TrySetGaugeWidth (CombatGaugeController_o* __this, UnityEngine_GameObject_o* gauge, float width, const MethodInfo* method);
float CombatGaugeController__CalcHpGaugeMaxWidth (CombatGaugeController_o* __this, int32_t maxHp, const MethodInfo* method);
void CombatGaugeController__Setup (CombatGaugeController_o* __this, int32_t sideType, App_BattleCalculator_o* calculator, const MethodInfo* method);
void CombatGaugeController__UpdateValues (CombatGaugeController_o* __this, int32_t hp, int32_t maxhp, int32_t engageCount, const MethodInfo* method);
void CombatGaugeController__UpdateHp (CombatGaugeController_o* __this, int32_t hp, int32_t maxhp, const MethodInfo* method);
void CombatGaugeController__UpdateEngageCount (CombatGaugeController_o* __this, int32_t engageCount, const MethodInfo* method);
bool CombatGaugeController__IsMoving (CombatGaugeController_o* __this, const MethodInfo* method);
void CombatGaugeController__SkipGaugeAnime (CombatGaugeController_o* __this, const MethodInfo* method);
void CombatGaugeController__HideSkillDisplay (CombatGaugeController_o* __this, const MethodInfo* method);
void CombatGaugeController__PushShowSkill (CombatGaugeController_o* __this, App_SkillData_o* skillData, const MethodInfo* method);
void CombatGaugeController__In (CombatGaugeController_o* __this, const MethodInfo* method);
void CombatGaugeController__Out (CombatGaugeController_o* __this, float ntime, const MethodInfo* method);
bool CombatGaugeController__IsPlayingAnim (CombatGaugeController_o* __this, const MethodInfo* method);
void CombatGaugeController___ctor (CombatGaugeController_o* __this, const MethodInfo* method);
void CombatGaugeController___cctor (const MethodInfo* method);
