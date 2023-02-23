#pragma once

#include "il2cpp.h"

App_BattleCalculator_o* Combat_CombatSequence__get_Calculator (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__set_Calculator (Combat_CombatSequence_o* __this, App_BattleCalculator_o* value, const MethodInfo* method);
App_BattleCalculator_o* Combat_CombatSequence__get_SimCalculator (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__set_SimCalculator (Combat_CombatSequence_o* __this, App_BattleCalculator_o* value, const MethodInfo* method);
void Combat_CombatSequence__CreateBind (App_ProcInst_o* super, App_BattleCalculator_o* calculator, App_BattleCalculator_o* simCalculator, App_ProcVoidMethod_o* callback, const MethodInfo* method);
void Combat_CombatSequence___ctor (Combat_CombatSequence_o* __this, App_BattleCalculator_o* calculator, App_BattleCalculator_o* simCalculator, const MethodInfo* method);
void Combat_CombatSequence__TimerStart (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__TimerStop (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__CreateBorder (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__DeleteBorder (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__LoadVoice (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__LoadVoiceImpl (Combat_CombatSequence_o* __this, int32_t battleSideType, const MethodInfo* method);
void Combat_CombatSequence__UnloadVoice (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__UnloadVoiceImpl (Combat_CombatSequence_o* __this, int32_t battleSideType, const MethodInfo* method);
void Combat_CombatSequence__LoadScene (Combat_CombatSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_CombatSequence__WaitLoading (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__UnloadScene (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__Tick (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__OnCreate (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__OnDispose (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__OnPersistent (Combat_CombatSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_CombatSequence__BoundToCombatCamera (Combat_CombatSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_CombatSequence__ReturnToMapCamera (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__ToPreBgm (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__ToMainBgm (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__ReturnBgm (Combat_CombatSequence_o* __this, const MethodInfo* method);
bool Combat_CombatSequence__IsComebackWithTransitionCamera (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__DieTalk (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__ShowGrowth (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__MoveCursor (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__BackToGround (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__WaitForBackToGround (Combat_CombatSequence_o* __this, const MethodInfo* method);
void Combat_CombatSequence__BackToGroundFadeIn (Combat_CombatSequence_o* __this, const MethodInfo* method);
