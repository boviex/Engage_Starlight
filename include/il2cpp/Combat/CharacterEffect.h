#pragma once

#include "il2cpp.h"

UnityEngine_Transform_o* Combat_CharacterEffect__GetTransform (Combat_Character_o* chr, UnityEngine_AnimationEvent_o* ev, const MethodInfo* method);
UnityEngine_ParticleSystem_o* Combat_CharacterEffect__GetParticle (Combat_Character_o* chr, UnityEngine_AnimationEvent_o* ev, const MethodInfo* method);
void Combat_CharacterEffect___ctor (Combat_CharacterEffect_o* __this, Combat_Character_o* chr, const MethodInfo* method);
void Combat_CharacterEffect__SignalEffect (Combat_Character_o* chr, UnityEngine_AnimationEvent_o* ev, const MethodInfo* method);
UnityEngine_GameObject_o* Combat_CharacterEffect__Create (Combat_CharacterEffect_o* __this, UnityEngine_GameObject_o* prefab, UnityEngine_Transform_o* parent, const MethodInfo* method);
void Combat_CharacterEffect__CreateHit (Combat_CharacterEffect_o* __this, Combat_TR_o* tr, int32_t slashType, int32_t effectLevel, const MethodInfo* method);
void Combat_CharacterEffect__CreatePairingHit (Combat_CharacterEffect_o* __this, UnityEngine_GameObject_o* prefab, Combat_TR_o* tr, const MethodInfo* method);
System_String_o* Combat_CharacterEffect__GetHitEffectName (Combat_CharacterEffect_o* __this, int32_t slashType, int32_t level, const MethodInfo* method);
void Combat_CharacterEffect__CreateGuard (Combat_CharacterEffect_o* __this, const MethodInfo* method);
void Combat_CharacterEffect__CreateParry (Combat_CharacterEffect_o* __this, const MethodInfo* method);
void Combat_CharacterEffect__CreateEfficacyHit (Combat_CharacterEffect_o* __this, const MethodInfo* method);
void Combat_CharacterEffect__CreateBreak (Combat_CharacterEffect_o* __this, const MethodInfo* method);
void Combat_CharacterEffect__CreateSmash (Combat_CharacterEffect_o* __this, const MethodInfo* method);
void Combat_CharacterEffect___CreateGuard_b__9_0 (Combat_CharacterEffect_o* __this, int64_t __, const MethodInfo* method);
