#pragma once

#include "il2cpp.h"

Combat_Phase_o* Combat_Decorator__get_m_Phase (Combat_Decorator_o* __this, const MethodInfo* method);
void Combat_Decorator__set_m_Phase (Combat_Decorator_o* __this, Combat_Phase_o* value, const MethodInfo* method);
Combat_Character_array* Combat_Decorator__get_m_Chrs (Combat_Decorator_o* __this, const MethodInfo* method);
Combat_Character_o* Combat_Decorator__get_m_Master (Combat_Decorator_o* __this, const MethodInfo* method);
Combat_Character_o* Combat_Decorator__get_m_Enemy (Combat_Decorator_o* __this, const MethodInfo* method);
Combat_Character_o* Combat_Decorator__get_m_Grandew (Combat_Decorator_o* __this, const MethodInfo* method);
Combat_Character_o* Combat_Decorator__get_m_EnemyGrandew (Combat_Decorator_o* __this, const MethodInfo* method);
void Combat_Decorator__Activate (Combat_Decorator_o* __this, int32_t side, Combat_Phase_o* phase, UniRx_CompositeDisposable_o* cd, const MethodInfo* method);
void Combat_Decorator__UseOnArrivalTimePredicted (Combat_Decorator_o* __this, const MethodInfo* method);
void Combat_Decorator__UseOnHitTimePredicted (Combat_Decorator_o* __this, const MethodInfo* method);
void Combat_Decorator__UseOnEnemyDamage (Combat_Decorator_o* __this, const MethodInfo* method);
void Combat_Decorator__UseOnBackwardCancel (Combat_Decorator_o* __this, Combat_Character_o* chr, const MethodInfo* method);
void Combat_Decorator__OnEnter (Combat_Decorator_o* __this, const MethodInfo* method);
void Combat_Decorator__OnEnterAttack (Combat_Decorator_o* __this, const MethodInfo* method);
void Combat_Decorator__OnUpdate (Combat_Decorator_o* __this, const MethodInfo* method);
void Combat_Decorator__OnExit (Combat_Decorator_o* __this, const MethodInfo* method);
void Combat_Decorator__OnArrivalTimePredicted_ (Combat_Decorator_o* __this, float worldArrivalTime, const MethodInfo* method);
void Combat_Decorator__OnHitTimePredicted_ (Combat_Decorator_o* __this, float worldHitTime, int32_t weaponStyle, const MethodInfo* method);
void Combat_Decorator__OnShoot (Combat_Decorator_o* __this, UnityEngine_AnimationEvent_o* ev, const MethodInfo* method);
void Combat_Decorator__OnMissPassed (Combat_Decorator_o* __this, UnityEngine_AnimationEvent_o* ev, const MethodInfo* method);
void Combat_Decorator__OnHitPassed (Combat_Decorator_o* __this, UnityEngine_AnimationEvent_o* ev, const MethodInfo* method);
void Combat_Decorator__OnEnemyDamage_ (Combat_Decorator_o* __this, UnityEngine_AnimationEvent_o* ev, const MethodInfo* method);
void Combat_Decorator__OnBackwardCancel_ (Combat_Decorator_o* __this, const MethodInfo* method);
void Combat_Decorator___ctor (Combat_Decorator_o* __this, const MethodInfo* method);
void Combat_Decorator___UseOnArrivalTimePredicted_b__19_0 (Combat_Decorator_o* __this, System_ValueTuple_float__int__o pair, const MethodInfo* method);
void Combat_Decorator___UseOnHitTimePredicted_b__20_0 (Combat_Decorator_o* __this, System_ValueTuple_float__WeaponStyle__o pair, const MethodInfo* method);
void Combat_Decorator___UseOnEnemyDamage_b__21_0 (Combat_Decorator_o* __this, UnityEngine_AnimationEvent_o* ev, const MethodInfo* method);
void Combat_Decorator___UseOnBackwardCancel_b__22_0 (Combat_Decorator_o* __this, Combat_Character_o* __, const MethodInfo* method);
