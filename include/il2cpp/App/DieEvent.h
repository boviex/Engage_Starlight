#pragma once

#include "il2cpp.h"

void App_DieEvent___ctor (App_DieEvent_o* __this, App_Unit_o* unit, System_Action_o* completed, const MethodInfo* method);
bool App_DieEvent__IsSkipCancel (App_DieEvent_o* __this, const MethodInfo* method);
void App_DieEvent__OnCreate (App_DieEvent_o* __this, const MethodInfo* method);
void App_DieEvent__OnDispose (App_DieEvent_o* __this, const MethodInfo* method);
void App_DieEvent__DieTalk (App_DieEvent_o* __this, const MethodInfo* method);
void App_DieEvent__GodTalk (App_DieEvent_o* __this, const MethodInfo* method);
void App_DieEvent__Event (App_DieEvent_o* __this, const MethodInfo* method);
void App_DieEvent__InitDieBgm (App_DieEvent_o* __this, const MethodInfo* method);
void App_DieEvent__WaitDieBgmEnd (App_DieEvent_o* __this, const MethodInfo* method);
void App_DieEvent__PlayDieBgm (App_DieEvent_o* __this, const MethodInfo* method);
void App_DieEvent__StopDieBgm (App_DieEvent_o* __this, const MethodInfo* method);
bool App_DieEvent__IsEnable (App_BattleCalculator_o* calculator, const MethodInfo* method);
bool App_DieEvent__IsImportant (App_BattleCalculator_o* calculator, const MethodInfo* method);
bool App_DieEvent__IsEnable (App_Unit_o* unit, const MethodInfo* method);
bool App_DieEvent__TryCreateBind (App_ProcInst_o* super, App_BattleCalculator_o* calculator, System_Action_o* completed, const MethodInfo* method);
bool App_DieEvent__TryCreateBind (App_ProcInst_o* super, App_Unit_o* unit, System_Action_o* completed, const MethodInfo* method);
