#pragma once

#include "il2cpp.h"

float UnityEngine_Rendering_HableCurve__get_whitePoint (UnityEngine_Rendering_HableCurve_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_HableCurve__set_whitePoint (UnityEngine_Rendering_HableCurve_o* __this, float value, const MethodInfo* method);
float UnityEngine_Rendering_HableCurve__get_inverseWhitePoint (UnityEngine_Rendering_HableCurve_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_HableCurve__set_inverseWhitePoint (UnityEngine_Rendering_HableCurve_o* __this, float value, const MethodInfo* method);
float UnityEngine_Rendering_HableCurve__get_x0 (UnityEngine_Rendering_HableCurve_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_HableCurve__set_x0 (UnityEngine_Rendering_HableCurve_o* __this, float value, const MethodInfo* method);
float UnityEngine_Rendering_HableCurve__get_x1 (UnityEngine_Rendering_HableCurve_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_HableCurve__set_x1 (UnityEngine_Rendering_HableCurve_o* __this, float value, const MethodInfo* method);
void UnityEngine_Rendering_HableCurve___ctor (UnityEngine_Rendering_HableCurve_o* __this, const MethodInfo* method);
float UnityEngine_Rendering_HableCurve__Eval (UnityEngine_Rendering_HableCurve_o* __this, float x, const MethodInfo* method);
void UnityEngine_Rendering_HableCurve__Init (UnityEngine_Rendering_HableCurve_o* __this, float toeStrength, float toeLength, float shoulderStrength, float shoulderLength, float shoulderAngle, float gamma, const MethodInfo* method);
void UnityEngine_Rendering_HableCurve__InitSegments (UnityEngine_Rendering_HableCurve_o* __this, UnityEngine_Rendering_HableCurve_DirectParams_o srcParams, const MethodInfo* method);
void UnityEngine_Rendering_HableCurve__SolveAB (UnityEngine_Rendering_HableCurve_o* __this, float* lnA, float* B, float x0, float y0, float m, const MethodInfo* method);
void UnityEngine_Rendering_HableCurve__AsSlopeIntercept (UnityEngine_Rendering_HableCurve_o* __this, float* m, float* b, float x0, float x1, float y0, float y1, const MethodInfo* method);
float UnityEngine_Rendering_HableCurve__EvalDerivativeLinearGamma (UnityEngine_Rendering_HableCurve_o* __this, float m, float b, float g, float x, const MethodInfo* method);
