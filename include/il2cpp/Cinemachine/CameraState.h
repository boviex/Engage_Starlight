#pragma once

#include "il2cpp.h"

Cinemachine_LensSettings_o Cinemachine_CameraState__get_Lens (Cinemachine_CameraState_o __this, const MethodInfo* method);
void Cinemachine_CameraState__set_Lens (Cinemachine_CameraState_o __this, Cinemachine_LensSettings_o value, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CameraState__get_ReferenceUp (Cinemachine_CameraState_o __this, const MethodInfo* method);
void Cinemachine_CameraState__set_ReferenceUp (Cinemachine_CameraState_o __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CameraState__get_ReferenceLookAt (Cinemachine_CameraState_o __this, const MethodInfo* method);
void Cinemachine_CameraState__set_ReferenceLookAt (Cinemachine_CameraState_o __this, UnityEngine_Vector3_o value, const MethodInfo* method);
bool Cinemachine_CameraState__get_HasLookAt (Cinemachine_CameraState_o __this, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CameraState__get_RawPosition (Cinemachine_CameraState_o __this, const MethodInfo* method);
void Cinemachine_CameraState__set_RawPosition (Cinemachine_CameraState_o __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Quaternion_o Cinemachine_CameraState__get_RawOrientation (Cinemachine_CameraState_o __this, const MethodInfo* method);
void Cinemachine_CameraState__set_RawOrientation (Cinemachine_CameraState_o __this, UnityEngine_Quaternion_o value, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CameraState__get_PositionDampingBypass (Cinemachine_CameraState_o __this, const MethodInfo* method);
void Cinemachine_CameraState__set_PositionDampingBypass (Cinemachine_CameraState_o __this, UnityEngine_Vector3_o value, const MethodInfo* method);
float Cinemachine_CameraState__get_ShotQuality (Cinemachine_CameraState_o __this, const MethodInfo* method);
void Cinemachine_CameraState__set_ShotQuality (Cinemachine_CameraState_o __this, float value, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CameraState__get_PositionCorrection (Cinemachine_CameraState_o __this, const MethodInfo* method);
void Cinemachine_CameraState__set_PositionCorrection (Cinemachine_CameraState_o __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Quaternion_o Cinemachine_CameraState__get_OrientationCorrection (Cinemachine_CameraState_o __this, const MethodInfo* method);
void Cinemachine_CameraState__set_OrientationCorrection (Cinemachine_CameraState_o __this, UnityEngine_Quaternion_o value, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CameraState__get_CorrectedPosition (Cinemachine_CameraState_o __this, const MethodInfo* method);
UnityEngine_Quaternion_o Cinemachine_CameraState__get_CorrectedOrientation (Cinemachine_CameraState_o __this, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CameraState__get_FinalPosition (Cinemachine_CameraState_o __this, const MethodInfo* method);
UnityEngine_Quaternion_o Cinemachine_CameraState__get_FinalOrientation (Cinemachine_CameraState_o __this, const MethodInfo* method);
int32_t Cinemachine_CameraState__get_BlendHint (Cinemachine_CameraState_o __this, const MethodInfo* method);
void Cinemachine_CameraState__set_BlendHint (Cinemachine_CameraState_o __this, int32_t value, const MethodInfo* method);
Cinemachine_CameraState_o Cinemachine_CameraState__get_Default (const MethodInfo* method);
int32_t Cinemachine_CameraState__get_NumCustomBlendables (Cinemachine_CameraState_o __this, const MethodInfo* method);
void Cinemachine_CameraState__set_NumCustomBlendables (Cinemachine_CameraState_o __this, int32_t value, const MethodInfo* method);
Cinemachine_CameraState_CustomBlendable_o Cinemachine_CameraState__GetCustomBlendable (Cinemachine_CameraState_o __this, int32_t index, const MethodInfo* method);
int32_t Cinemachine_CameraState__FindCustomBlendable (Cinemachine_CameraState_o __this, UnityEngine_Object_o* custom, const MethodInfo* method);
void Cinemachine_CameraState__AddCustomBlendable (Cinemachine_CameraState_o __this, Cinemachine_CameraState_CustomBlendable_o b, const MethodInfo* method);
Cinemachine_CameraState_o Cinemachine_CameraState__Lerp (Cinemachine_CameraState_o stateA, Cinemachine_CameraState_o stateB, float t, const MethodInfo* method);
float Cinemachine_CameraState__InterpolateFOV (float fovA, float fovB, float dA, float dB, float t, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CameraState__ApplyPosBlendHint (UnityEngine_Vector3_o posA, int32_t hintA, UnityEngine_Vector3_o posB, int32_t hintB, UnityEngine_Vector3_o original, UnityEngine_Vector3_o blended, const MethodInfo* method);
UnityEngine_Quaternion_o Cinemachine_CameraState__ApplyRotBlendHint (UnityEngine_Quaternion_o rotA, int32_t hintA, UnityEngine_Quaternion_o rotB, int32_t hintB, UnityEngine_Quaternion_o original, UnityEngine_Quaternion_o blended, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CameraState__InterpolatePosition (Cinemachine_CameraState_o __this, UnityEngine_Vector3_o posA, UnityEngine_Vector3_o pivotA, UnityEngine_Vector3_o posB, UnityEngine_Vector3_o pivotB, float t, const MethodInfo* method);
void Cinemachine_CameraState___cctor (const MethodInfo* method);
