#pragma once

#include "il2cpp.h"

void App_MapSequenceCommandSkill___ctor (App_MapSequenceCommandSkill_o* __this, App_MapSkill_Results_o* results, int32_t action, const MethodInfo* method);
void App_MapSequenceCommandSkill__Start (App_MapSequenceCommandSkill_o* __this, const MethodInfo* method);
void App_MapSequenceCommandSkill__WaitSkip (App_MapSequenceCommandSkill_o* __this, App_UnitSignal_o* signal, const MethodInfo* method);
void App_MapSequenceCommandSkill__BeginSignal (App_MapSequenceCommandSkill_o* __this, const MethodInfo* method);
void App_MapSequenceCommandSkill__EndSignal (App_MapSequenceCommandSkill_o* __this, const MethodInfo* method);
void App_MapSequenceCommandSkill__Impact (App_MapSequenceCommandSkill_o* __this, const MethodInfo* method);
void App_MapSequenceCommandSkill__Commit (App_MapSequenceCommandSkill_o* __this, const MethodInfo* method);
void App_MapSequenceCommandSkill__Commit (App_MapSkill_Results_o results, const MethodInfo* method);
void App_MapSequenceCommandSkill__RemoveForceSkill (int32_t force, App_SkillData_o* skill, const MethodInfo* method);
void App_MapSequenceCommandSkill__AddGiveSkills (App_Unit_o* unit, App_Unit_o* target, App_SkillData_o* skill, const MethodInfo* method);
bool App_MapSequenceCommandSkill__CreateBind (App_ProcInst_o* super, App_Unit_o* current, App_Unit_o* reverse, App_SkillData_o* skill, int32_t action, const MethodInfo* method);
bool App_MapSequenceCommandSkill__CreateBind (App_ProcInst_o* super, App_MapSkill_Results_o results, int32_t action, const MethodInfo* method);
