#pragma once

#include "il2cpp.h"

int32_t UTJ_SpringSphereCollider__CheckForCollisionAndReact (UTJ_SpringSphereCollider_o* __this, UnityEngine_Vector3_o headPosition, UnityEngine_Vector3_o* tailPosition, float tailRadius, UnityEngine_Vector3_o* hitNormal, const MethodInfo* method);
int32_t UTJ_SpringSphereCollider__CheckForCollisionAndReact (UnityEngine_Vector3_o localHeadPosition, UnityEngine_Vector3_o* localTailPosition, float localTailRadius, UnityEngine_Vector3_o sphereLocalOrigin, float sphereRadius, const MethodInfo* method);
bool UTJ_SpringSphereCollider__ComputeIntersection (UnityEngine_Vector3_o originA, float radiusA, UnityEngine_Vector3_o originB, float radiusB, UTJ_Circle3_o* intersection, const MethodInfo* method);
UnityEngine_Vector3_o UTJ_SpringSphereCollider__ComputeNewTailPosition (UTJ_Circle3_o intersection, UnityEngine_Vector3_o tailPosition, const MethodInfo* method);
void UTJ_SpringSphereCollider___ctor (UTJ_SpringSphereCollider_o* __this, const MethodInfo* method);
