#pragma once

#include "il2cpp.h"

void App_MapBattleInfoSequence__SetBattleInfo (App_MapBattleInfoSequence_o* __this, bool bShowWdw, App_BattleInfo_o* info, App_BattleSceneList_o* sceneList, const MethodInfo* method);
void App_MapBattleInfoSequence__GetSequenceAttack (App_BattleInfo_o* info, App_BattleSceneList_o* sceneList, System_Collections_Generic_List_MapBattleInfoSequence_AttackInfo__o** attacks, bool isSeparator, const MethodInfo* method);
bool App_MapBattleInfoSequence__SetAttackInfo (App_BattleInfo_o* info, App_BattleSceneList_o* sceneList, int32_t* sceneIdx, int32_t* firstOffenseDamage, int32_t* firstDefenseDamage, App_MapBattleInfoSequence_AttackInfo_o** attackInfo, const MethodInfo* method);
int32_t App_MapBattleInfoSequence__GetChainAttackCount (App_BattleSceneList_o* sceneList, int32_t* idx, bool* isDead, const MethodInfo* method);
int32_t App_MapBattleInfoSequence__NextPushAttack (App_BattleSceneList_o* sceneList, int32_t startIdx, bool* isDead, const MethodInfo* method);
int32_t App_MapBattleInfoSequence__PrePopOrder (App_BattleSceneList_o* sceneList, int32_t startIdx, const MethodInfo* method);
void App_MapBattleInfoSequence___ctor (App_MapBattleInfoSequence_o* __this, const MethodInfo* method);
