#pragma once

#include "il2cpp.h"

void Cinemachine_RuntimeUtility__DestroyObject (UnityEngine_Object_o* obj, const MethodInfo* method);
bool Cinemachine_RuntimeUtility__IsPrefab (UnityEngine_GameObject_o* gameObject, const MethodInfo* method);
bool Cinemachine_RuntimeUtility__RaycastIgnoreTag (UnityEngine_Ray_o ray, UnityEngine_RaycastHit_o* hitInfo, float rayLength, int32_t layerMask, System_String_o** ignoreTag, const MethodInfo* method);
bool Cinemachine_RuntimeUtility__SphereCastIgnoreTag (UnityEngine_Vector3_o rayStart, float radius, UnityEngine_Vector3_o dir, UnityEngine_RaycastHit_o* hitInfo, float rayLength, int32_t layerMask, System_String_o** ignoreTag, const MethodInfo* method);
UnityEngine_SphereCollider_o* Cinemachine_RuntimeUtility__GetScratchCollider (const MethodInfo* method);
void Cinemachine_RuntimeUtility__DestroyScratchCollider (const MethodInfo* method);
void Cinemachine_RuntimeUtility___cctor (const MethodInfo* method);
