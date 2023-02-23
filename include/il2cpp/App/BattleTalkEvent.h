#pragma once

#include "il2cpp.h"

void App_BattleTalkEvent___ctor (App_BattleTalkEvent_o* __this, App_BattleCalculator_o* calculator, App_Unit_o* unit, App_Unit_o* target, System_Action_o* completed, const MethodInfo* method);
void App_BattleTalkEvent__OnTick (App_BattleTalkEvent_o* __this, const MethodInfo* method);
bool App_BattleTalkEvent__IsEnable (App_BattleCalculator_o* calculator, const MethodInfo* method);
bool App_BattleTalkEvent__IsEnable (App_BattleCalculator_o* calculator, App_Unit_o* unit, App_Unit_o* target, const MethodInfo* method);
bool App_BattleTalkEvent__TryCreateBind (App_ProcInst_o* super, App_BattleCalculator_o* calculator, System_Action_o* completed, const MethodInfo* method);
bool App_BattleTalkEvent__TryCreateBind (App_ProcInst_o* super, App_BattleCalculator_o* calculator, App_Unit_o* unit, App_Unit_o* target, System_Action_o* completed, const MethodInfo* method);
