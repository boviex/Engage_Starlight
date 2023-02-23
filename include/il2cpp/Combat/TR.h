#pragma once

#include "il2cpp.h"

Combat_TR_o Combat_TR__get_identity (const MethodInfo* method);
UnityEngine_Vector3_o Combat_TR__get_forward (Combat_TR_o __this, const MethodInfo* method);
void Combat_TR__set_forward (Combat_TR_o __this, UnityEngine_Vector3_o value, const MethodInfo* method);
void Combat_TR___ctor (Combat_TR_o __this, UnityEngine_Vector3_o* pos, UnityEngine_Quaternion_o* rot, const MethodInfo* method);
void Combat_TR___ctor (Combat_TR_o __this, UnityEngine_Vector3_o* pos, UnityEngine_Vector3_o* forward, const MethodInfo* method);
void Combat_TR___ctor (Combat_TR_o __this, UnityEngine_Transform_o* t, const MethodInfo* method);
void Combat_TR___ctor (Combat_TR_o __this, Combat_TR_o rhs, const MethodInfo* method);
void Combat_TR__Lerp (Combat_TR_o* A, Combat_TR_o* B, float t, Combat_TR_o* C, const MethodInfo* method);
UnityEngine_Vector3_o Combat_TR__TransformPoint (Combat_TR_o __this, UnityEngine_Vector3_o in_pos, const MethodInfo* method);
void Combat_TR__LerpAndMakeMatrix (Combat_TR_o A, Combat_TR_o B, float scale, float t, UnityEngine_Matrix4x4_o* mtx, const MethodInfo* method);
