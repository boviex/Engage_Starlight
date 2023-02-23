#pragma once

#include "il2cpp.h"

float Combat_HitPredictor__CalcLocalHitTimeFromAttackStart (Combat_Character_o* chr, Combat_SkillStack_o* skills, float animTime, const MethodInfo* method);
float Combat_HitPredictor__PredictHit (Combat_Character_o* chr, float startTime, const MethodInfo* method);
float Combat_HitPredictor__PredictShoot (Combat_Character_o* chr, float startTime, const MethodInfo* method);
float Combat_HitPredictor__PredictMagic (Combat_Character_o* chr, float startTime, const MethodInfo* method);
System_ValueTuple_AnimationEvent__MagicSignal__o Combat_HitPredictor__FindMagicSignalPair (Combat_PrefetchedSignal_o* store, Combat_Magic_o* magic, const MethodInfo* method);
