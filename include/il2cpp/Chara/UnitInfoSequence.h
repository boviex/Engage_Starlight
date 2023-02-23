#pragma once

#include "il2cpp.h"

int32_t Chara_UnitInfoSequence__get_UnitSide (Chara_UnitInfoSequence_o* __this, const MethodInfo* method);
bool Chara_UnitInfoSequence__IsExist (const MethodInfo* method);
System_String_o* Chara_UnitInfoSequence__get_UnitPID (Chara_UnitInfoSequence_o* __this, const MethodInfo* method);
void Chara_UnitInfoSequence__CreateBind (App_ProcInst_o* super, App_Unit_o* unit, const MethodInfo* method);
void Chara_UnitInfoSequence___ctor (Chara_UnitInfoSequence_o* __this, App_Unit_o* unit, const MethodInfo* method);
void Chara_UnitInfoSequence__TimerStop (Chara_UnitInfoSequence_o* __this, const MethodInfo* method);
void Chara_UnitInfoSequence__TimerStart (Chara_UnitInfoSequence_o* __this, const MethodInfo* method);
void Chara_UnitInfoSequence__CreteaCombatBorders (Chara_UnitInfoSequence_o* __this, const MethodInfo* method);
void Chara_UnitInfoSequence__DeleteCombatBorders (Chara_UnitInfoSequence_o* __this, const MethodInfo* method);
void Chara_UnitInfoSequence__OnCreate (Chara_UnitInfoSequence_o* __this, const MethodInfo* method);
void Chara_UnitInfoSequence__OnDispose (Chara_UnitInfoSequence_o* __this, const MethodInfo* method);
void Chara_UnitInfoSequence__OnPersistent (Chara_UnitInfoSequence_o* __this, const MethodInfo* method);
void Chara_UnitInfoSequence__Load (Chara_UnitInfoSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Chara_UnitInfoSequence__LoadCharacter (Chara_UnitInfoSequence_o* __this, const MethodInfo* method);
void Chara_UnitInfoSequence__SetupGameStatus (Chara_UnitInfoSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Chara_UnitInfoSequence__LoadCharacterImpl (Chara_UnitInfoSequence_o* __this, int32_t side, Combat_BaseCombatLocation_o* locator, const MethodInfo* method);
void Chara_UnitInfoSequence__Unload (Chara_UnitInfoSequence_o* __this, const MethodInfo* method);
void Chara_UnitInfoSequence__Tick (Chara_UnitInfoSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Chara_UnitInfoSequence__BoundToCombatCamera (Chara_UnitInfoSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Chara_UnitInfoSequence__ReturnToMapCamera (Chara_UnitInfoSequence_o* __this, const MethodInfo* method);
