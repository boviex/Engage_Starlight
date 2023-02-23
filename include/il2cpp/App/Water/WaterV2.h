#pragma once

#include "il2cpp.h"

void App_Water_WaterV2__OnWillRenderObject (App_Water_WaterV2_o* __this, const MethodInfo* method);
void App_Water_WaterV2__OnDisable (App_Water_WaterV2_o* __this, const MethodInfo* method);
void App_Water_WaterV2__Update (App_Water_WaterV2_o* __this, const MethodInfo* method);
void App_Water_WaterV2__UpdateCameraModes (App_Water_WaterV2_o* __this, UnityEngine_Camera_o* src, UnityEngine_Camera_o* dest, const MethodInfo* method);
void App_Water_WaterV2__CreateWaterObjects (App_Water_WaterV2_o* __this, UnityEngine_Camera_o* currentCamera, UnityEngine_Camera_o** reflectionCamera, UnityEngine_Camera_o** refractionCamera, const MethodInfo* method);
int32_t App_Water_WaterV2__GetWaterMode (App_Water_WaterV2_o* __this, const MethodInfo* method);
int32_t App_Water_WaterV2__FindHardwareWaterSupport (App_Water_WaterV2_o* __this, const MethodInfo* method);
UnityEngine_Vector4_o App_Water_WaterV2__CameraSpacePlane (App_Water_WaterV2_o* __this, UnityEngine_Camera_o* cam, UnityEngine_Vector3_o pos, UnityEngine_Vector3_o normal, float sideSign, const MethodInfo* method);
void App_Water_WaterV2__CalculateReflectionMatrix (UnityEngine_Matrix4x4_o* reflectionMat, UnityEngine_Vector4_o plane, const MethodInfo* method);
void App_Water_WaterV2___ctor (App_Water_WaterV2_o* __this, const MethodInfo* method);
