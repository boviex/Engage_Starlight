#pragma once

#include "il2cpp.h"

bool App_MapBattleInfoRoot__IsDestroy (App_BattleInfo_o* info, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsDance (App_BattleInfo_o* info, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsFireCannon (App_BattleInfo_o* info, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsEngageRodRangeAgain (App_BattleInfo_o* info, App_UnitItem_o* item, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsEngageRodRangeHeal (App_BattleInfo_o* info, App_UnitItem_o* item, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsSupoortCommandSkill (const MethodInfo* method);
bool App_MapBattleInfoRoot__IsRodInterference (int32_t sideType, App_UnitItem_o* item, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsRodRangeHeal (App_UnitItem_o* item, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsRodCreation (App_UnitItem_o* item, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsRodRewarp (App_UnitItem_o* item, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsNoShowParamRod (App_UnitItem_o* item, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsRecoveryHP (int32_t sideType, App_BattleSceneList_o* sceneList, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsSelfRecoveryHP (int32_t sideType, App_BattleInfo_o* info, App_BattleSceneList_o* sceneList, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsSelfTarget (App_BattleInfo_o* info, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsNotExistTarget (App_BattleInfo_o* info, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsShowParam (App_BattleInfoSide_o* side, App_BattleSceneList_o* sceneList, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsEngageRodBless (App_BattleInfo_o* info, App_UnitItem_o* item, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsEngageRodBlessRest (App_BattleInfo_o* info, App_UnitItem_o* item, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsRodRest (App_UnitItem_o* item, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsEnchantHeal (App_UnitItem_o* item, const MethodInfo* method);
bool App_MapBattleInfoRoot__IsEnchantRest (App_UnitItem_o* item, const MethodInfo* method);
bool App_MapBattleInfoRoot__Setup (App_MapBattleInfoRoot_o* __this, int32_t mindType, App_SkillData_o* skill, App_BattleInfo_o* info, App_BattleSceneList_o* sceneList, const MethodInfo* method);
void App_MapBattleInfoRoot__SetCommandText (App_MapBattleInfoRoot_o* __this, int32_t mindType, const MethodInfo* method);
void App_MapBattleInfoRoot__SetCommandText (App_MapBattleInfoRoot_o* __this, App_SkillData_o* skill, const MethodInfo* method);
void App_MapBattleInfoRoot__SetCommandText (App_MapBattleInfoRoot_o* __this, System_String_o* text, const MethodInfo* method);
void App_MapBattleInfoRoot__SetEngageCommandVisible (App_MapBattleInfoRoot_o* __this, int32_t mindType, App_Unit_o* unit, App_Unit_o* target, const MethodInfo* method);
void App_MapBattleInfoRoot___ctor (App_MapBattleInfoRoot_o* __this, const MethodInfo* method);
