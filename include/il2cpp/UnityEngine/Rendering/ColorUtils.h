#pragma once

#include "il2cpp.h"

float UnityEngine_Rendering_ColorUtils__get_lensImperfectionExposureScale (const MethodInfo* method);
float UnityEngine_Rendering_ColorUtils__StandardIlluminantY (float x, const MethodInfo* method);
UnityEngine_Vector3_o UnityEngine_Rendering_ColorUtils__CIExyToLMS (float x, float y, const MethodInfo* method);
UnityEngine_Vector3_o UnityEngine_Rendering_ColorUtils__ColorBalanceToLMSCoeffs (float temperature, float tint, const MethodInfo* method);
System_ValueTuple_Vector4__Vector4__Vector4__o UnityEngine_Rendering_ColorUtils__PrepareShadowsMidtonesHighlights (UnityEngine_Vector4_o* inShadows, UnityEngine_Vector4_o* inMidtones, UnityEngine_Vector4_o* inHighlights, const MethodInfo* method);
System_ValueTuple_Vector4__Vector4__Vector4__o UnityEngine_Rendering_ColorUtils__PrepareLiftGammaGain (UnityEngine_Vector4_o* inLift, UnityEngine_Vector4_o* inGamma, UnityEngine_Vector4_o* inGain, const MethodInfo* method);
System_ValueTuple_Vector4__Vector4__o UnityEngine_Rendering_ColorUtils__PrepareSplitToning (UnityEngine_Vector4_o* inShadows, UnityEngine_Vector4_o* inHighlights, float balance, const MethodInfo* method);
float UnityEngine_Rendering_ColorUtils__Luminance (UnityEngine_Color_o* color, const MethodInfo* method);
float UnityEngine_Rendering_ColorUtils__ComputeEV100 (float aperture, float shutterSpeed, float ISO, const MethodInfo* method);
float UnityEngine_Rendering_ColorUtils__ConvertEV100ToExposure (float EV100, const MethodInfo* method);
float UnityEngine_Rendering_ColorUtils__ConvertExposureToEV100 (float exposure, const MethodInfo* method);
float UnityEngine_Rendering_ColorUtils__ComputeEV100FromAvgLuminance (float avgLuminance, const MethodInfo* method);
float UnityEngine_Rendering_ColorUtils__ComputeISO (float aperture, float shutterSpeed, float targetEV100, const MethodInfo* method);
uint32_t UnityEngine_Rendering_ColorUtils__ToHex (UnityEngine_Color_o c, const MethodInfo* method);
UnityEngine_Color_o UnityEngine_Rendering_ColorUtils__ToRGBA (uint32_t hex, const MethodInfo* method);
void UnityEngine_Rendering_ColorUtils___cctor (const MethodInfo* method);
