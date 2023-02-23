#pragma once

#include "il2cpp.h"

int32_t Combat_EngageSequence__GetMode (const MethodInfo* method);
bool Combat_EngageSequence__IsExist (const MethodInfo* method);
void Combat_EngageSequence__CreateBind (App_ProcInst_o* super, App_Unit_o* unit1, App_Unit_o* unit2, const MethodInfo* method);
void Combat_EngageSequence__CreteaCombatBorders (Combat_EngageSequence_o* __this, const MethodInfo* method);
void Combat_EngageSequence__DeleteCombatBorders (Combat_EngageSequence_o* __this, const MethodInfo* method);
bool Combat_EngageSequence__IsSetupDone (Combat_EngageSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_EngageSequence__WaitFinish (Combat_EngageSequence_o* __this, const MethodInfo* method);
void Combat_EngageSequence___ctor (Combat_EngageSequence_o* __this, App_Unit_o* unit1, App_Unit_o* unit2, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_EngageSequence__LoadAndSetupAndRun (Combat_EngageSequence_o* __this, const MethodInfo* method);
float Combat_EngageSequence__CalcHeightOffset (Combat_EngageSequence_o* __this, Combat_Character_o* c, Combat_Character_o* g, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_EngageSequence__Exit (Combat_EngageSequence_o* __this, const MethodInfo* method);
void Combat_EngageSequence___LoadAndSetupAndRun_g__func_16_0 (Combat_EngageSequence_o* __this, Combat_Character_o* a, const MethodInfo* method);
