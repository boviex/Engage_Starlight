#pragma once

#include "il2cpp.h"

void App_BattleSceneList___ctor (App_BattleSceneList_o* __this, App_BattleInfo_o* info, const MethodInfo* method);
bool App_BattleSceneList__IsEntry (App_BattleSceneList_o* __this, int32_t side, const MethodInfo* method);
int32_t App_BattleSceneList__GetCount (App_BattleSceneList_o* __this, int32_t kind, const MethodInfo* method);
App_BattleScene_o* App_BattleSceneList__FindNext (App_BattleSceneList_o* __this, int32_t kind, int32_t index, const MethodInfo* method);
App_BattleScene_o* App_BattleSceneList__FindPrev (App_BattleSceneList_o* __this, int32_t kind, int32_t index, const MethodInfo* method);
int32_t App_BattleSceneList__GetCount (App_BattleSceneList_o* __this, int32_t side, int32_t kind, const MethodInfo* method);
bool App_BattleSceneList__HasGiveSkill (App_BattleSceneList_o* __this, int32_t side, App_SkillData_o* give, const MethodInfo* method);
bool App_BattleSceneList__HasChain (App_BattleSceneList_o* __this, const MethodInfo* method);
int32_t App_BattleSceneList__GetAttackCount (App_BattleSceneList_o* __this, int32_t current, int32_t result, const MethodInfo* method);
int32_t App_BattleSceneList__GetGiveSkillkCount (App_BattleSceneList_o* __this, int32_t current, App_SkillData_o* skill, const MethodInfo* method);
bool App_BattleSceneList__CanSkillCount (App_BattleScene_o* scene, int32_t target, bool reversed, const MethodInfo* method);
int32_t App_BattleSceneList__GetActiveSkillkCount (App_BattleSceneList_o* __this, int32_t current, const MethodInfo* method);
int32_t App_BattleSceneList__GetReciveActiveSkillkCount (App_BattleSceneList_o* __this, int32_t reverse, const MethodInfo* method);
int32_t App_BattleSceneList__GetReciveAttackCount (App_BattleSceneList_o* __this, int32_t reverse, int32_t result, const MethodInfo* method);
App_BattleScene_o* App_BattleSceneList__Create (App_BattleSceneList_o* __this, int32_t kind, const MethodInfo* method);
App_BattleScene_o* App_BattleSceneList__Create (App_BattleSceneList_o* __this, int32_t kind, App_BattleInfoSide_o* current, const MethodInfo* method);
App_BattleScene_o* App_BattleSceneList__Create (App_BattleSceneList_o* __this, int32_t kind, App_BattleInfoSide_o* current, App_BattleInfoSide_o* target, const MethodInfo* method);
App_BattleScene_o* App_BattleSceneList__Create (App_BattleSceneList_o* __this, int32_t kind, int32_t current, const MethodInfo* method);
App_BattleScene_o* App_BattleSceneList__Create (App_BattleSceneList_o* __this, int32_t kind, int32_t current, int32_t target, const MethodInfo* method);
void App_BattleSceneList__Clear (App_BattleSceneList_o* __this, const MethodInfo* method);
