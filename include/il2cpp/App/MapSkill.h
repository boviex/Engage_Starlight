#pragma once

#include "il2cpp.h"

bool App_MapSkill__Prediction (App_Unit_o* current, App_Unit_o* reverse, App_SkillData_o* skill, const MethodInfo* method);
bool App_MapSkill__IsSightOut (App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapSkill__CanEnter (App_Unit_o* current, App_Unit_o* target, int32_t x, int32_t z, const MethodInfo* method);
int32_t App_MapSkill__TryGetX (App_Unit_o* unit, const MethodInfo* method);
int32_t App_MapSkill__TryGetZ (App_Unit_o* unit, const MethodInfo* method);
bool App_MapSkill__Prediction (App_Unit_o* current, App_Unit_o* reverse, App_SkillData_o* skill, App_MapSkill_Results_o* results, const MethodInfo* method);
bool App_MapSkill__CalcPierce (App_Unit_o* current, App_Unit_o* target, App_SkillData_o* skill, App_MapSkill_UnitFunc_o* func, const MethodInfo* method);
bool App_MapSkill__CalcStepPos (int32_t* attackX, int32_t* attackZ, int32_t targetX, int32_t targetZ, App_SkillData_o* skill, bool isReverse, const MethodInfo* method);
uint8_t App_MapSkill__GetRangeDir (App_Unit_o* attack, App_Unit_o* target, const MethodInfo* method);
bool App_MapSkill__TryGetRangeCenter (App_Unit_o* current, App_Unit_o* target, App_SkillData_o* skill, int32_t* x, int32_t* z, const MethodInfo* method);
void App_MapSkill__TryAddAttackRange (App_Unit_o* current, int32_t x, int32_t z, bool isUnitOnly, App_MapSkill_UnitFunc_o* func, const MethodInfo* method);
void App_MapSkill__ForeachAttackRange (App_Unit_o* current, App_Unit_o* target, App_SkillData_o* skill, bool isUnitOnly, App_MapSkill_UnitFunc_o* func, const MethodInfo* method);
void App_MapSkill__ForeachAttackRange (App_Unit_o* current, int32_t targetX, int32_t targetZ, App_SkillData_o* skill, bool isUnitOnly, App_MapSkill_UnitFunc_o* func, const MethodInfo* method);
void App_MapSkill__ForeachOverlapRange (App_Unit_o* current, App_SkillData_o* skill, App_MapSkill_TerrainFunc_o* func, const MethodInfo* method);
void App_MapSkill__ForeachOverlapRange (App_Unit_o* current, int32_t x, int32_t z, int32_t targetX, int32_t targetZ, App_SkillData_o* skill, App_MapSkill_TerrainFunc_o* func, const MethodInfo* method);
void App_MapSkill__ForeachOverlapRange (App_Unit_o* current, App_Unit_o* target, App_SkillData_o* skill, App_MapSkill_TerrainFunc_o* func, const MethodInfo* method);
void App_MapSkill__ForeachOverlapRange (App_Unit_o* current, int32_t x, int32_t z, uint8_t dir, App_SkillData_o* skill, App_MapSkill_TerrainFunc_o* func, const MethodInfo* method);
App_Unit_o* App_MapSkill__GetAroundCenter (App_SkillData_o* skill, App_Unit_o* unit, App_Unit_o* target, const MethodInfo* method);
bool App_MapSkill__HasAddGiveSkill (App_SkillData_o* skill, int32_t target, App_Unit_o* unit, const MethodInfo* method);
bool App_MapSkill__TryAddGiveSkill (App_SkillData_o* skill, int32_t target, App_Unit_o* unit, const MethodInfo* method);
bool App_MapSkill__TryHitSkill (App_SkillData_o* skill, App_Unit_o* unit, const MethodInfo* method);
void App_MapSkill__ExecuteAct (App_SkillData_o* skill, App_Unit_o* unit, const MethodInfo* method);
void App_MapSkill___ctor (App_MapSkill_o* __this, const MethodInfo* method);
