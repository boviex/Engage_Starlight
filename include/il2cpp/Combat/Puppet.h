#pragma once

#include "il2cpp.h"

UnityEngine_Transform_o* Combat_Puppet__get_RightRoot (Combat_Puppet_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* Combat_Puppet__get_RightTip (Combat_Puppet_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* Combat_Puppet__get_LeftRoot (Combat_Puppet_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* Combat_Puppet__get_LeftTip (Combat_Puppet_o* __this, const MethodInfo* method);
UnityEngine_AnimationClip_o* Combat_Puppet__get_HumanAnimationClip (Combat_Puppet_o* __this, const MethodInfo* method);
UnityEngine_AnimationClip_o* Combat_Puppet__get_RideAnimationClip (Combat_Puppet_o* __this, const MethodInfo* method);
UnityEngine_GameObject_o* Combat_Puppet__get_HumanGameObject (Combat_Puppet_o* __this, const MethodInfo* method);
UnityEngine_GameObject_o* Combat_Puppet__get_BaseGameObject (Combat_Puppet_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* Combat_Puppet__get_RootTransform (Combat_Puppet_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* Combat_Puppet__get_Item (Combat_Puppet_o* __this, System_String_o* jointName, const MethodInfo* method);
bool Combat_Puppet__get_IsRiding (Combat_Puppet_o* __this, const MethodInfo* method);
bool Combat_Puppet__get_IsFlying (Combat_Puppet_o* __this, const MethodInfo* method);
bool Combat_Puppet__get_IsHorse (Combat_Puppet_o* __this, const MethodInfo* method);
bool Combat_Puppet__get_IsValid (Combat_Puppet_o* __this, const MethodInfo* method);
void Combat_Puppet__set_IsValid (Combat_Puppet_o* __this, bool value, const MethodInfo* method);
void Combat_Puppet___ctor (Combat_Puppet_o* __this, UnityEngine_GameObject_o* bodyInst, UnityEngine_AnimationClip_o* bodyAnim, UnityEngine_GameObject_o* rideInst, UnityEngine_AnimationClip_o* rideAnim, const MethodInfo* method);
void Combat_Puppet__CreateWeaponTrailSlots (Combat_Puppet_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* Combat_Puppet__CreateSlot (Combat_Puppet_o* __this, UnityEngine_Transform_o* parent, UnityEngine_Vector3_o offset, System_String_o* name, const MethodInfo* method);
void Combat_Puppet__Dispose (Combat_Puppet_o* __this, const MethodInfo* method);
void Combat_Puppet__Evaluate (Combat_Puppet_o* __this, float time, const MethodInfo* method);
void Combat_Puppet__ClearRootMovedAfterEvaluate (Combat_Puppet_o* __this, const MethodInfo* method);
void Combat_Puppet__AddDestroyableGOs (Combat_Puppet_o* __this, UnityEngine_GameObject_array* gos, const MethodInfo* method);
System_String_o* Combat_Puppet___CreateWeaponTrailSlots_g__RL_42_0 (System_String_o* s, int32_t i, const MethodInfo* method);
