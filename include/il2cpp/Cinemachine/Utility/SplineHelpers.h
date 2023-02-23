#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o Cinemachine_Utility_SplineHelpers__Bezier3 (float t, UnityEngine_Vector3_o p0, UnityEngine_Vector3_o p1, UnityEngine_Vector3_o p2, UnityEngine_Vector3_o p3, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_Utility_SplineHelpers__BezierTangent3 (float t, UnityEngine_Vector3_o p0, UnityEngine_Vector3_o p1, UnityEngine_Vector3_o p2, UnityEngine_Vector3_o p3, const MethodInfo* method);
float Cinemachine_Utility_SplineHelpers__Bezier1 (float t, float p0, float p1, float p2, float p3, const MethodInfo* method);
float Cinemachine_Utility_SplineHelpers__BezierTangent1 (float t, float p0, float p1, float p2, float p3, const MethodInfo* method);
void Cinemachine_Utility_SplineHelpers__ComputeSmoothControlPoints (UnityEngine_Vector4_array** knot, UnityEngine_Vector4_array** ctrl1, UnityEngine_Vector4_array** ctrl2, const MethodInfo* method);
void Cinemachine_Utility_SplineHelpers__ComputeSmoothControlPointsLooped (UnityEngine_Vector4_array** knot, UnityEngine_Vector4_array** ctrl1, UnityEngine_Vector4_array** ctrl2, const MethodInfo* method);
