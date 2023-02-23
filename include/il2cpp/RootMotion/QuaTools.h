#pragma once

#include "il2cpp.h"

float RootMotion_QuaTools__GetYaw (UnityEngine_Quaternion_o space, UnityEngine_Vector3_o forward, const MethodInfo* method);
float RootMotion_QuaTools__GetPitch (UnityEngine_Quaternion_o space, UnityEngine_Vector3_o forward, const MethodInfo* method);
float RootMotion_QuaTools__GetBank (UnityEngine_Quaternion_o space, UnityEngine_Vector3_o forward, UnityEngine_Vector3_o up, const MethodInfo* method);
float RootMotion_QuaTools__GetYaw (UnityEngine_Quaternion_o space, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
float RootMotion_QuaTools__GetPitch (UnityEngine_Quaternion_o space, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
float RootMotion_QuaTools__GetBank (UnityEngine_Quaternion_o space, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_QuaTools__Lerp (UnityEngine_Quaternion_o fromRotation, UnityEngine_Quaternion_o toRotation, float weight, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_QuaTools__Slerp (UnityEngine_Quaternion_o fromRotation, UnityEngine_Quaternion_o toRotation, float weight, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_QuaTools__LinearBlend (UnityEngine_Quaternion_o q, float weight, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_QuaTools__SphericalBlend (UnityEngine_Quaternion_o q, float weight, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_QuaTools__FromToAroundAxis (UnityEngine_Vector3_o fromDirection, UnityEngine_Vector3_o toDirection, UnityEngine_Vector3_o axis, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_QuaTools__RotationToLocalSpace (UnityEngine_Quaternion_o space, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_QuaTools__FromToRotation (UnityEngine_Quaternion_o from, UnityEngine_Quaternion_o to, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_QuaTools__GetAxis (UnityEngine_Vector3_o v, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_QuaTools__ClampRotation (UnityEngine_Quaternion_o rotation, float clampWeight, int32_t clampSmoothing, const MethodInfo* method);
float RootMotion_QuaTools__ClampAngle (float angle, float clampWeight, int32_t clampSmoothing, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_QuaTools__MatchRotation (UnityEngine_Quaternion_o targetRotation, UnityEngine_Vector3_o targetforwardAxis, UnityEngine_Vector3_o targetUpAxis, UnityEngine_Vector3_o forwardAxis, UnityEngine_Vector3_o upAxis, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_QuaTools__ToBiPolar (UnityEngine_Vector3_o euler, const MethodInfo* method);
float RootMotion_QuaTools__ToBiPolar (float angle, const MethodInfo* method);
