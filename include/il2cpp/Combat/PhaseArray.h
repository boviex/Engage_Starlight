#pragma once

#include "il2cpp.h"

Combat_Phase_o* Combat_PhaseArray__get_Current (Combat_PhaseArray_o* __this, const MethodInfo* method);
Combat_Phase_o* Combat_PhaseArray__get_Last (Combat_PhaseArray_o* __this, const MethodInfo* method);
int32_t Combat_PhaseArray__get_AttackRight (Combat_PhaseArray_o* __this, const MethodInfo* method);
void Combat_PhaseArray__set_AttackRight (Combat_PhaseArray_o* __this, int32_t value, const MethodInfo* method);
bool Combat_PhaseArray__get_HasCounter (Combat_PhaseArray_o* __this, const MethodInfo* method);
void Combat_PhaseArray__Add (Combat_PhaseArray_o* __this, Combat_Phase_o* phase, const MethodInfo* method);
void Combat_PhaseArray__Next (Combat_PhaseArray_o* __this, const MethodInfo* method);
void Combat_PhaseArray__SetCurrentToLast (Combat_PhaseArray_o* __this, const MethodInfo* method);
void Combat_PhaseArray___ctor (Combat_PhaseArray_o* __this, const MethodInfo* method);
void Combat_PhaseArray__Clear (Combat_PhaseArray_o* __this, const MethodInfo* method);
void Combat_PhaseArray__UpdateAttackRight (Combat_PhaseArray_o* __this, const MethodInfo* method);
void Combat_PhaseArray__PostProcess (Combat_PhaseArray_o* __this, int32_t style, Combat_CharacterGameStatus_array* gameStatus, Combat_CharacterGameStatus_array* gsChainAtk, Combat_CharacterGameStatus_array* gsDragonic, const MethodInfo* method);
void Combat_PhaseArray__MarkFirstAndLastAttack (Combat_PhaseArray_o* __this, const MethodInfo* method);
Combat_Phase_o* Combat_PhaseArray__FindDetailFirst (Combat_PhaseArray_o* __this, int32_t detail, const MethodInfo* method);
void Combat_PhaseArray__DecideAnimationHash (Combat_PhaseArray_o* __this, int32_t style, Combat_CharacterGameStatus_array* gameStatus, Combat_CharacterGameStatus_array* gsChainAtk, const MethodInfo* method);
void Combat_PhaseArray__MarkUseAnims (Combat_PhaseArray_o* __this, Combat_CharacterGameStatus_array* gameStatus, Combat_CharacterGameStatus_array* gsChainAtk, Combat_CharacterGameStatus_array* gsDragonic, const MethodInfo* method);
void Combat_PhaseArray__RegisterPreloadAnim (int64_t use, Combat_CharacterGameStatus_o* gs, const MethodInfo* method);
int32_t Combat_PhaseArray__GetBrokenSide (Combat_PhaseArray_o* __this, const MethodInfo* method);
