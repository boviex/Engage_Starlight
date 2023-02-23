#pragma once

#include "il2cpp.h"

bool UnityEngine_Collider__get_enabled (UnityEngine_Collider_o* __this, const MethodInfo* method);
void UnityEngine_Collider__set_enabled (UnityEngine_Collider_o* __this, bool value, const MethodInfo* method);
UnityEngine_Rigidbody_o* UnityEngine_Collider__get_attachedRigidbody (UnityEngine_Collider_o* __this, const MethodInfo* method);
bool UnityEngine_Collider__get_isTrigger (UnityEngine_Collider_o* __this, const MethodInfo* method);
void UnityEngine_Collider__set_isTrigger (UnityEngine_Collider_o* __this, bool value, const MethodInfo* method);
UnityEngine_Vector3_o UnityEngine_Collider__ClosestPoint (UnityEngine_Collider_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
UnityEngine_Bounds_o UnityEngine_Collider__get_bounds (UnityEngine_Collider_o* __this, const MethodInfo* method);
UnityEngine_PhysicMaterial_o* UnityEngine_Collider__get_sharedMaterial (UnityEngine_Collider_o* __this, const MethodInfo* method);
UnityEngine_RaycastHit_o UnityEngine_Collider__Raycast (UnityEngine_Collider_o* __this, UnityEngine_Ray_o ray, float maxDistance, bool* hasHit, const MethodInfo* method);
bool UnityEngine_Collider__Raycast (UnityEngine_Collider_o* __this, UnityEngine_Ray_o ray, UnityEngine_RaycastHit_o* hitInfo, float maxDistance, const MethodInfo* method);
void UnityEngine_Collider__Internal_ClosestPointOnBounds (UnityEngine_Collider_o* __this, UnityEngine_Vector3_o point, UnityEngine_Vector3_o* outPos, float* distance, const MethodInfo* method);
UnityEngine_Vector3_o UnityEngine_Collider__ClosestPointOnBounds (UnityEngine_Collider_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
void UnityEngine_Collider___ctor (UnityEngine_Collider_o* __this, const MethodInfo* method);
void UnityEngine_Collider__ClosestPoint_Injected (UnityEngine_Collider_o* __this, UnityEngine_Vector3_o* position, UnityEngine_Vector3_o* ret, const MethodInfo* method);
void UnityEngine_Collider__get_bounds_Injected (UnityEngine_Collider_o* __this, UnityEngine_Bounds_o* ret, const MethodInfo* method);
void UnityEngine_Collider__Raycast_Injected (UnityEngine_Collider_o* __this, UnityEngine_Ray_o* ray, float maxDistance, bool* hasHit, UnityEngine_RaycastHit_o* ret, const MethodInfo* method);
void UnityEngine_Collider__Internal_ClosestPointOnBounds_Injected (UnityEngine_Collider_o* __this, UnityEngine_Vector3_o* point, UnityEngine_Vector3_o* outPos, float* distance, const MethodInfo* method);
