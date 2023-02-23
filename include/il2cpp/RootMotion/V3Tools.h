#pragma once

#include "il2cpp.h"

float RootMotion_V3Tools__GetYaw (UnityEngine_Vector3_o forward, const MethodInfo* method);
float RootMotion_V3Tools__GetPitch (UnityEngine_Vector3_o forward, const MethodInfo* method);
float RootMotion_V3Tools__GetBank (UnityEngine_Vector3_o forward, UnityEngine_Vector3_o up, const MethodInfo* method);
float RootMotion_V3Tools__GetYaw (UnityEngine_Vector3_o spaceForward, UnityEngine_Vector3_o spaceUp, UnityEngine_Vector3_o forward, const MethodInfo* method);
float RootMotion_V3Tools__GetPitch (UnityEngine_Vector3_o spaceForward, UnityEngine_Vector3_o spaceUp, UnityEngine_Vector3_o forward, const MethodInfo* method);
float RootMotion_V3Tools__GetBank (UnityEngine_Vector3_o spaceForward, UnityEngine_Vector3_o spaceUp, UnityEngine_Vector3_o forward, UnityEngine_Vector3_o up, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_V3Tools__Lerp (UnityEngine_Vector3_o fromVector, UnityEngine_Vector3_o toVector, float weight, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_V3Tools__Slerp (UnityEngine_Vector3_o fromVector, UnityEngine_Vector3_o toVector, float weight, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_V3Tools__ExtractVertical (UnityEngine_Vector3_o v, UnityEngine_Vector3_o verticalAxis, float weight, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_V3Tools__ExtractHorizontal (UnityEngine_Vector3_o v, UnityEngine_Vector3_o normal, float weight, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_V3Tools__ClampDirection (UnityEngine_Vector3_o direction, UnityEngine_Vector3_o normalDirection, float clampWeight, int32_t clampSmoothing, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_V3Tools__ClampDirection (UnityEngine_Vector3_o direction, UnityEngine_Vector3_o normalDirection, float clampWeight, int32_t clampSmoothing, bool* changed, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_V3Tools__ClampDirection (UnityEngine_Vector3_o direction, UnityEngine_Vector3_o normalDirection, float clampWeight, int32_t clampSmoothing, float* clampValue, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_V3Tools__LineToPlane (UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, UnityEngine_Vector3_o planeNormal, UnityEngine_Vector3_o planePoint, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_V3Tools__PointToPlane (UnityEngine_Vector3_o point, UnityEngine_Vector3_o planePosition, UnityEngine_Vector3_o planeNormal, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_V3Tools__TransformPointUnscaled (UnityEngine_Transform_o* t, UnityEngine_Vector3_o point, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_V3Tools__InverseTransformPointUnscaled (UnityEngine_Transform_o* t, UnityEngine_Vector3_o point, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_V3Tools__InverseTransformPoint (UnityEngine_Vector3_o tPos, UnityEngine_Quaternion_o tRot, UnityEngine_Vector3_o tScale, UnityEngine_Vector3_o point, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_V3Tools__TransformPoint (UnityEngine_Vector3_o tPos, UnityEngine_Quaternion_o tRot, UnityEngine_Vector3_o tScale, UnityEngine_Vector3_o point, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_V3Tools__Div (UnityEngine_Vector3_o v1, UnityEngine_Vector3_o v2, const MethodInfo* method);
