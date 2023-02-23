#pragma once

#include "il2cpp.h"

void Combat_CombatLocationSolo___ctor (Combat_CombatLocationSolo_o* __this, Combat_CombatRecord_o* rec, const MethodInfo* method);
void Combat_CombatLocationSolo__Setup (Combat_CombatLocationSolo_o* __this, Combat_CharacterGameStatus_array* gs, const MethodInfo* method);
int32_t Combat_CombatLocationSolo__get_RoughPosCount (Combat_CombatLocationSolo_o* __this, const MethodInfo* method);
void Combat_CombatLocationSolo__SetRoughPos (Combat_CombatLocationSolo_o* __this, int32_t tryCount, const MethodInfo* method);
int32_t Combat_CombatLocationSolo__get_PatternCount (Combat_CombatLocationSolo_o* __this, const MethodInfo* method);
void Combat_CombatLocationSolo__SetBattlePatern (Combat_CombatLocationSolo_o* __this, int32_t pattern, const MethodInfo* method);
void Combat_CombatLocationSolo__CalcLocation (Combat_CombatLocationSolo_o* __this, const MethodInfo* method);
void Combat_CombatLocationSolo__LocateEmblem (Combat_CombatLocationSolo_o* __this, int32_t masterSide, Combat_Character_o* master, Combat_Character_o* emblem, int32_t locateStyle, const MethodInfo* method);
