#pragma once

#include "il2cpp.h"

int32_t Combat_CombinationHit__get_AttackHash (Combat_CombinationHit_o* __this, const MethodInfo* method);
void Combat_CombinationHit__set_AttackHash (Combat_CombinationHit_o* __this, int32_t value, const MethodInfo* method);
int32_t Combat_CombinationHit__get_PlayFlags (Combat_CombinationHit_o* __this, const MethodInfo* method);
void Combat_CombinationHit__set_PlayFlags (Combat_CombinationHit_o* __this, int32_t value, const MethodInfo* method);
float Combat_CombinationHit__get_WaitTimeToAttack (Combat_CombinationHit_o* __this, const MethodInfo* method);
void Combat_CombinationHit__set_WaitTimeToAttack (Combat_CombinationHit_o* __this, float value, const MethodInfo* method);
float Combat_CombinationHit__get_PlaybackRate (Combat_CombinationHit_o* __this, const MethodInfo* method);
void Combat_CombinationHit__set_PlaybackRate (Combat_CombinationHit_o* __this, float value, const MethodInfo* method);
float Combat_CombinationHit__get_WorldHitTime (Combat_CombinationHit_o* __this, const MethodInfo* method);
void Combat_CombinationHit__set_WorldHitTime (Combat_CombinationHit_o* __this, float value, const MethodInfo* method);
Combat_Character_o* Combat_CombinationHit__get_CP (Combat_CombinationHit_o* __this, const MethodInfo* method);
void Combat_CombinationHit__set_CP (Combat_CombinationHit_o* __this, Combat_Character_o* value, const MethodInfo* method);
float Combat_CombinationHit__get_AnimStartTime (Combat_CombinationHit_o* __this, const MethodInfo* method);
void Combat_CombinationHit__set_AnimStartTime (Combat_CombinationHit_o* __this, float value, const MethodInfo* method);
float Combat_CombinationHit__get_AnimHitTime (Combat_CombinationHit_o* __this, const MethodInfo* method);
void Combat_CombinationHit__set_AnimHitTime (Combat_CombinationHit_o* __this, float value, const MethodInfo* method);
bool Combat_CombinationHit__Calc (Combat_CombinationHit_o* __this, Combat_Character_o* sideAttacker, float worldHitTime, bool isKnockoff, const MethodInfo* method);
System_Collections_Generic_List_PrefetchedSignal__o* Combat_CombinationHit__ListPossibleAttack (Combat_CombinationHit_o* __this, bool isKnockoff, const MethodInfo* method);
Combat_PrefetchedSignal_o* Combat_CombinationHit__SelectAttack (Combat_CombinationHit_o* __this, System_Collections_Generic_List_PrefetchedSignal__o* list, Combat_Magic_o* magic, float remainTime, const MethodInfo* method);
void Combat_CombinationHit__PlayPerfectTiming (Combat_CombinationHit_o* __this, UniRx_CompositeDisposable_o* cd, System_Action_o* onPlayFunc, System_Action_Character__o* onHitFunc, const MethodInfo* method);
void Combat_CombinationHit___ctor (Combat_CombinationHit_o* __this, const MethodInfo* method);
void Combat_CombinationHit___cctor (const MethodInfo* method);
float Combat_CombinationHit___SelectAttack_g__GetHitOrShootOrMagicHitTime_35_1 (Combat_PrefetchedSignal_o* store, Combat_CombinationHit___c__DisplayClass35_0_o* , const MethodInfo* method);
