#pragma once

#include "il2cpp.h"

void RootMotion_FinalIK_RotationLimit__SetDefaultLocalRotation (RootMotion_FinalIK_RotationLimit_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_RotationLimit__SetDefaultLocalRotation (RootMotion_FinalIK_RotationLimit_o* __this, UnityEngine_Quaternion_o localRotation, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_FinalIK_RotationLimit__GetLimitedLocalRotation (RootMotion_FinalIK_RotationLimit_o* __this, UnityEngine_Quaternion_o localRotation, bool* changed, const MethodInfo* method);
bool RootMotion_FinalIK_RotationLimit__Apply (RootMotion_FinalIK_RotationLimit_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_RotationLimit__Disable (RootMotion_FinalIK_RotationLimit_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_RotationLimit__get_secondaryAxis (RootMotion_FinalIK_RotationLimit_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_RotationLimit__get_crossAxis (RootMotion_FinalIK_RotationLimit_o* __this, const MethodInfo* method);
bool RootMotion_FinalIK_RotationLimit__get_defaultLocalRotationOverride (RootMotion_FinalIK_RotationLimit_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_RotationLimit__set_defaultLocalRotationOverride (RootMotion_FinalIK_RotationLimit_o* __this, bool value, const MethodInfo* method);
void RootMotion_FinalIK_RotationLimit__Awake (RootMotion_FinalIK_RotationLimit_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_RotationLimit__LateUpdate (RootMotion_FinalIK_RotationLimit_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_RotationLimit__LogWarning (RootMotion_FinalIK_RotationLimit_o* __this, System_String_o* message, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_FinalIK_RotationLimit__Limit1DOF (UnityEngine_Quaternion_o rotation, UnityEngine_Vector3_o axis, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_FinalIK_RotationLimit__LimitTwist (UnityEngine_Quaternion_o rotation, UnityEngine_Vector3_o axis, UnityEngine_Vector3_o orthoAxis, float twistLimit, const MethodInfo* method);
float RootMotion_FinalIK_RotationLimit__GetOrthogonalAngle (UnityEngine_Vector3_o v1, UnityEngine_Vector3_o v2, UnityEngine_Vector3_o normal, const MethodInfo* method);
void RootMotion_FinalIK_RotationLimit___ctor (RootMotion_FinalIK_RotationLimit_o* __this, const MethodInfo* method);
