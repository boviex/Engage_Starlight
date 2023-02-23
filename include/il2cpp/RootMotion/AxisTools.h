#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o RootMotion_AxisTools__ToVector3 (int32_t axis, const MethodInfo* method);
int32_t RootMotion_AxisTools__ToAxis (UnityEngine_Vector3_o v, const MethodInfo* method);
int32_t RootMotion_AxisTools__GetAxisToPoint (UnityEngine_Transform_o* t, UnityEngine_Vector3_o worldPosition, const MethodInfo* method);
int32_t RootMotion_AxisTools__GetAxisToDirection (UnityEngine_Transform_o* t, UnityEngine_Vector3_o direction, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_AxisTools__GetAxisVectorToPoint (UnityEngine_Transform_o* t, UnityEngine_Vector3_o worldPosition, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_AxisTools__GetAxisVectorToDirection (UnityEngine_Transform_o* t, UnityEngine_Vector3_o direction, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_AxisTools__GetAxisVectorToDirection (UnityEngine_Quaternion_o r, UnityEngine_Vector3_o direction, const MethodInfo* method);
void RootMotion_AxisTools___ctor (RootMotion_AxisTools_o* __this, const MethodInfo* method);
