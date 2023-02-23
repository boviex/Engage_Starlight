#pragma once

#include "il2cpp.h"

void Combat_AutoCameraBase__CheckUsable (Combat_AutoCameraBase_o* __this, bool isRoutine, const MethodInfo* method);
bool Combat_AutoCameraBase__IsSimilarAngle (Combat_AutoCameraBase_o* __this, UnityEngine_Vector3_o A, UnityEngine_Vector3_o B, const MethodInfo* method);
System_ValueTuple_Vector3__Vector3__o Combat_AutoCameraBase__GetPositionInfo (Combat_AutoCameraBase_o* __this, const MethodInfo* method);
float Combat_AutoCameraBase__CalcFitDistance (float xdist, float fovYDeg, const MethodInfo* method);
UnityEngine_Vector3_o Combat_AutoCameraBase__Reprojection (UnityEngine_Camera_o* cam, UnityEngine_Vector3_o A, UnityEngine_Vector3_o B, float t, const MethodInfo* method);
UnityEngine_Vector3_o Combat_AutoCameraBase__Reprojection (UnityEngine_Matrix4x4_o* mvp, UnityEngine_Vector3_o A, UnityEngine_Vector3_o B, float t, const MethodInfo* method);
System_Int32_array* Combat_AutoCameraBase__GetCameraTargets (Combat_AutoCameraBase_o* __this, const MethodInfo* method);
void Combat_AutoCameraBase___ctor (Combat_AutoCameraBase_o* __this, const MethodInfo* method);
