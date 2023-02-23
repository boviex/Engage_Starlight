#pragma once

#include "il2cpp.h"

void App_UnitGrowSequence__setUnitGrowData (App_UnitGrowSequence_o* __this, App_BattleInfoSide_o* side, bool isTalk, const MethodInfo* method);
void App_UnitGrowSequence__setUnitGrowData (App_UnitGrowSequence_o* __this, App_Unit_o* unit, int32_t exp, const MethodInfo* method);
void App_UnitGrowSequence__setUnitGrowData (App_UnitGrowSequence_o* __this, App_Unit_o* unit, int32_t exp, int32_t skillPoint, bool isTalk, const MethodInfo* method);
void App_UnitGrowSequence__setUnitClassChange (App_UnitGrowSequence_o* __this, App_Unit_o* unit, App_JobData_o* job, App_ItemData_o* item, const MethodInfo* method);
void App_UnitGrowSequence__setUnitClassChange (App_UnitGrowSequence_o* __this, App_Unit_o* unit, App_ClassChange_ChangeJobData_o* data, const MethodInfo* method);
App_UnitGrowSequence_o* App_UnitGrowSequence__CreateBind (App_ProcInst_o* super, const MethodInfo* method);
void App_UnitGrowSequence__Prepare (App_UnitGrowSequence_o* __this, const MethodInfo* method);
void App_UnitGrowSequence__GainExp (App_UnitGrowSequence_o* __this, const MethodInfo* method);
void App_UnitGrowSequence__CheckLevelUp (App_UnitGrowSequence_o* __this, const MethodInfo* method);
void App_UnitGrowSequence__LevelUp (App_UnitGrowSequence_o* __this, const MethodInfo* method);
void App_UnitGrowSequence__CheckClassChange (App_UnitGrowSequence_o* __this, const MethodInfo* method);
void App_UnitGrowSequence__ClassChange (App_UnitGrowSequence_o* __this, const MethodInfo* method);
void App_UnitGrowSequence__SetWeapon (App_UnitGrowSequence_o* __this, const MethodInfo* method);
void App_UnitGrowSequence___ctor (App_UnitGrowSequence_o* __this, const MethodInfo* method);
