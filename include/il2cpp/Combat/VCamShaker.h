#pragma once

#include "il2cpp.h"

bool Combat_VCamShaker__get_IsValid (Combat_VCamShaker_o* __this, const MethodInfo* method);
int32_t Combat_VCamShaker__get_Stage (Combat_VCamShaker_o* __this, const MethodInfo* method);
void Combat_VCamShaker__Awake (Combat_VCamShaker_o* __this, const MethodInfo* method);
void Combat_VCamShaker__MutateCameraState (Combat_VCamShaker_o* __this, Cinemachine_CameraState_o* curState, float deltaTime, const MethodInfo* method);
UnityEngine_Vector3_o Combat_VCamShaker__CalcImpact (Combat_VCamShaker_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Combat_VCamShaker__CalcArmorStep (Combat_VCamShaker_o* __this, const MethodInfo* method);
void Combat_VCamShaker__StartShake (Combat_VCamShaker_o* __this, Combat_CameraPositionData_CameraShakeSettings_o* setting, float magnitude, float distance, bool isCritical, const MethodInfo* method);
void Combat_VCamShaker__ArmorShake (Combat_VCamShaker_o* __this, Combat_CameraPositionData_CameraShakeSettings_o* setting, float magnitude, float distance, const MethodInfo* method);
void Combat_VCamShaker___ctor (Combat_VCamShaker_o* __this, const MethodInfo* method);
