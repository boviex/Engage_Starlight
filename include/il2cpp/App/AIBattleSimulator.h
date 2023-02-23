#pragma once

#include "il2cpp.h"

float App_AIBattleSimulator__get_Kill (App_AIBattleSimulator_o* __this, const MethodInfo* method);
float App_AIBattleSimulator__get_Dead (App_AIBattleSimulator_o* __this, const MethodInfo* method);
float App_AIBattleSimulator__get_Expectation (App_AIBattleSimulator_o* __this, const MethodInfo* method);
float App_AIBattleSimulator__get_Attack (App_AIBattleSimulator_o* __this, const MethodInfo* method);
float App_AIBattleSimulator__get_Follow (App_AIBattleSimulator_o* __this, const MethodInfo* method);
int32_t App_AIBattleSimulator__get_Power (App_AIBattleSimulator_o* __this, const MethodInfo* method);
float App_AIBattleSimulator__get_Hit (App_AIBattleSimulator_o* __this, const MethodInfo* method);
int32_t App_AIBattleSimulator__get_OffenseBattleTimes (App_AIBattleSimulator_o* __this, const MethodInfo* method);
int32_t App_AIBattleSimulator__get_DefenseBattleTimes (App_AIBattleSimulator_o* __this, const MethodInfo* method);
void App_AIBattleSimulator___ctor (App_AIBattleSimulator_o* __this, const MethodInfo* method);
void App_AIBattleSimulator__Calculate (App_AIBattleSimulator_o* __this, App_Unit_o* offense, App_Unit_o* defense, int32_t x, int32_t z, int32_t range, int32_t itemIndex, App_SkillData_o* skill, int32_t defenseX, int32_t defenseZ, bool isRemove, int32_t battleCount, const MethodInfo* method);
bool App_AIBattleSimulator__IsPower0Attack (App_AIBattleSimulator_o* __this, const MethodInfo* method);
void App_AIBattleSimulator__CalculateBattleInfo (App_AIBattleSimulator_o* __this, App_Unit_o* offense, App_Unit_o* defense, int32_t x, int32_t z, int32_t range, App_UnitItem_o* unitItem, App_SkillData_o* skill, int32_t defenseX, int32_t defenseZ, int32_t battleCount, const MethodInfo* method);
void App_AIBattleSimulator__CalculateIndication (App_AIBattleSimulator_o* __this, int32_t side, const MethodInfo* method);
void App_AIBattleSimulator__CalculateKillProbabilityWithoutInterference (App_AIBattleSimulator_o* __this, int32_t side, const MethodInfo* method);
void App_AIBattleSimulator__CalculateKillProbabilityWithoutInterference2 (App_AIBattleSimulator_o* __this, int32_t side, int32_t count, int32_t times, float nowProbability, int32_t restHp, const MethodInfo* method);
void App_AIBattleSimulator__CalculateKillProbabilityWithoutInterference3 (App_AIBattleSimulator_o* __this, int32_t side, int32_t count, int32_t times, float nowProbability, int32_t restHp, int32_t damage, const MethodInfo* method);
int32_t App_AIBattleSimulator__GetSceneSide (App_AIBattleSimulator_o* __this, int32_t side, const MethodInfo* method);
void App_AIBattleSimulator__CalculateChainIndication (App_AIBattleSimulator_o* __this, const MethodInfo* method);
void App_AIBattleSimulator__CalculateChainAttackIndication (App_AIBattleSimulator_o* __this, App_BattleInfoSide_o* current, App_BattleInfoSide_o* reverse, const MethodInfo* method);
void App_AIBattleSimulator__CalculateScore (App_AIBattleSimulator_o* __this, bool isRemove, const MethodInfo* method);
uint32_t App_AIBattleSimulator__KillScoreNormalize (App_AIBattleSimulator_o* __this, float kill, const MethodInfo* method);
uint32_t App_AIBattleSimulator__ExpectationScoreNormalize (App_AIBattleSimulator_o* __this, float expectation, int32_t bit, int32_t max, const MethodInfo* method);
