#pragma once

#include "il2cpp.h"

bool Combat_Phase__op_Implicit (Combat_Phase_o* a, const MethodInfo* method);
Combat_Phase_o* Combat_Phase__get_Null (const MethodInfo* method);
bool Combat_Phase__get_IsStandingDie (Combat_Phase_o* __this, const MethodInfo* method);
Combat_Phase_o* Combat_Phase__get_Prev (Combat_Phase_o* __this, const MethodInfo* method);
void Combat_Phase__set_Prev (Combat_Phase_o* __this, Combat_Phase_o* value, const MethodInfo* method);
Combat_Phase_o* Combat_Phase__get_Next (Combat_Phase_o* __this, const MethodInfo* method);
void Combat_Phase__set_Next (Combat_Phase_o* __this, Combat_Phase_o* value, const MethodInfo* method);
void Combat_Phase__MakePair (Combat_Phase_o* __this, Combat_Phase_o* prev, const MethodInfo* method);
bool Combat_Phase__get_IsCritical (Combat_Phase_o* __this, const MethodInfo* method);
int32_t Combat_Phase__get_DamageSide (Combat_Phase_o* __this, const MethodInfo* method);
int32_t Combat_Phase__GetGuardSide (Combat_Phase_o* __this, const MethodInfo* method);
bool Combat_Phase__IsDeadSomeone (Combat_Phase_o* __this, const MethodInfo* method);
int32_t Combat_Phase__FindDieSide (Combat_Phase_o* __this, const MethodInfo* method);
bool Combat_Phase__IsDeadDamager (Combat_Phase_o* __this, const MethodInfo* method);
bool Combat_Phase__IsDead (Combat_Phase_o* __this, int32_t side, const MethodInfo* method);
bool Combat_Phase__IsSelfDamage (Combat_Phase_o* __this, const MethodInfo* method);
bool Combat_Phase__IsSuicide (Combat_Phase_o* __this, const MethodInfo* method);
bool Combat_Phase__IsHeal (Combat_Phase_o* __this, const MethodInfo* method);
float Combat_Phase__get_DamageRatio (Combat_Phase_o* __this, const MethodInfo* method);
void Combat_Phase__set_DamageRatio (Combat_Phase_o* __this, float value, const MethodInfo* method);
int32_t Combat_Phase__get_DamageEffectLevel (Combat_Phase_o* __this, const MethodInfo* method);
bool Combat_Phase__get_IsDamageHigh (Combat_Phase_o* __this, const MethodInfo* method);
int32_t Combat_Phase__get_PrevContinuousAttack (Combat_Phase_o* __this, const MethodInfo* method);
int32_t Combat_Phase__get_PrevContinuousDamage (Combat_Phase_o* __this, const MethodInfo* method);
bool Combat_Phase__get_IsComboFromPrev (Combat_Phase_o* __this, const MethodInfo* method);
bool Combat_Phase__get_IsComboToNext (Combat_Phase_o* __this, const MethodInfo* method);
bool Combat_Phase__get_IsFirstAttack (Combat_Phase_o* __this, const MethodInfo* method);
bool Combat_Phase__get_IsLastAttack (Combat_Phase_o* __this, const MethodInfo* method);
bool Combat_Phase__get_IsPlayerSideAttack (Combat_Phase_o* __this, const MethodInfo* method);
bool Combat_Phase__get_IsEnemySideAttack (Combat_Phase_o* __this, const MethodInfo* method);
Combat_Character_o* Combat_Phase__get_Attacker (Combat_Phase_o* __this, const MethodInfo* method);
Combat_Character_o* Combat_Phase__get_Damager (Combat_Phase_o* __this, const MethodInfo* method);
int32_t Combat_Phase__get_ChainAttackCount (Combat_Phase_o* __this, const MethodInfo* method);
void Combat_Phase___ctor (Combat_Phase_o* __this, const MethodInfo* method);
void Combat_Phase___cctor (const MethodInfo* method);
