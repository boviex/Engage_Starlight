#pragma once

#include "il2cpp.h"

System_String_o* Combat_ArenaCombatSequence__get_ResultTelopPath (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
App_BattleCalculator_o* Combat_ArenaCombatSequence__get_Calculator (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
App_BattleCalculator_o* Combat_ArenaCombatSequence__get_SimCalculator (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
int32_t Combat_ArenaCombatSequence__get_BondExp (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
bool Combat_ArenaCombatSequence__get_IsEmblemBattle (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
bool Combat_ArenaCombatSequence__get_IsSpecialBattle (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
void Combat_ArenaCombatSequence__CreateBind (App_ProcInst_o* super, App_BattleCalculator_o* calculator, App_BattleCalculator_o* simCalculator, bool isEmblemBattle, bool isSpecial, int32_t bondExp, const MethodInfo* method);
void Combat_ArenaCombatSequence___ctor (Combat_ArenaCombatSequence_o* __this, App_BattleCalculator_o* calculator, App_BattleCalculator_o* simCalculator, bool isEmblemBattle, bool isSpecial, int32_t bondExp, const MethodInfo* method);
void Combat_ArenaCombatSequence__OnCreate (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
void Combat_ArenaCombatSequence__OnDispose (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
void Combat_ArenaCombatSequence__OnPersistent (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_ArenaCombatSequence__Setup (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_ArenaCombatSequence__WaitBegin (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_ArenaCombatSequence__StartFight (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_ArenaCombatSequence__WaitFinish (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
void Combat_ArenaCombatSequence__Result (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_ArenaCombatSequence__Grow1 (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_ArenaCombatSequence__Grow2 (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
void Combat_ArenaCombatSequence__Grow3 (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_ArenaCombatSequence__Exit (Combat_ArenaCombatSequence_o* __this, const MethodInfo* method);
