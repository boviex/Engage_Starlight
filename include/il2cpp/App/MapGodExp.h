#pragma once

#include "il2cpp.h"

void App_MapGodExp___ctor (App_MapGodExp_o* __this, const MethodInfo* method);
void App_MapGodExp__AddBattle (App_MapGodExp_o* __this, App_BattleCalculator_o* calculator, const MethodInfo* method);
void App_MapGodExp__AddCommandSkill (App_MapGodExp_o* __this, const MethodInfo* method);
void App_MapGodExp__AddEngageAttack (App_MapGodExp_o* __this, const MethodInfo* method);
float App_MapGodExp__GetMultiplier (App_GodUnit_o* godUnit, const MethodInfo* method);
void App_MapGodExp__TryCommit (App_MapGodExp_o* __this, App_ProcInst_o* super, const MethodInfo* method);
void App_MapGodExp__Reset (App_MapGodExp_o* __this, const MethodInfo* method);
void App_MapGodExp__Add (App_MapGodExp_o* __this, int32_t kind, const MethodInfo* method);
int32_t App_MapGodExp__GetExp (App_MapGodExp_o* __this, int32_t kind, bool isEngage, const MethodInfo* method);
App_Unit_o* App_MapGodExp__GetCurrentUnit (App_MapGodExp_o* __this, const MethodInfo* method);
bool App_MapGodExp__IsValidCommon (App_MapGodExp_o* __this, const MethodInfo* method);
int32_t App_MapGodExp__GetDirty (App_MapGodExp_o* __this, int32_t kind, bool isEngage, const MethodInfo* method);
void App_MapGodExp___cctor (const MethodInfo* method);
