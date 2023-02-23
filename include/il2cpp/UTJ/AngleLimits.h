#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o UTJ_AngleLimits__GetAngleVector (UnityEngine_Vector3_o sideVector, UnityEngine_Vector3_o forwardVector, float degrees, const MethodInfo* method);
void UTJ_AngleLimits__CopyTo (UTJ_AngleLimits_o* __this, UTJ_AngleLimits_o* target, const MethodInfo* method);
float UTJ_AngleLimits__ComputeFalloff (float value, float range, const MethodInfo* method);
bool UTJ_AngleLimits__ConstrainVector (UTJ_AngleLimits_o* __this, UnityEngine_Vector3_o basisSide, UnityEngine_Vector3_o basisUp, UnityEngine_Vector3_o basisForward, float springStrength, float deltaTime, UnityEngine_Vector3_o* vector, const MethodInfo* method);
void UTJ_AngleLimits___ctor (UTJ_AngleLimits_o* __this, const MethodInfo* method);
