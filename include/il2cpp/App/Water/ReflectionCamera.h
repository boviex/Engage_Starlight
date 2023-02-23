#pragma once

#include "il2cpp.h"

void App_Water_ReflectionCamera__CameraSetting (App_Water_ReflectionCamera_o* __this, UnityEngine_Camera_o* cam, const MethodInfo* method);
void App_Water_ReflectionCamera__SetRenderTextureSize (App_Water_ReflectionCamera_o* __this, float width, float height, const MethodInfo* method);
void App_Water_ReflectionCamera__CreateTexture (App_Water_ReflectionCamera_o* __this, const MethodInfo* method);
void App_Water_ReflectionCamera__RenderReflection (App_Water_ReflectionCamera_o* __this, UnityEngine_Transform_o* transformMesh, const MethodInfo* method);
void App_Water_ReflectionCamera__SetCameraTransform (App_Water_ReflectionCamera_o* __this, UnityEngine_Transform_o* transformMesh, const MethodInfo* method);
UnityEngine_Matrix4x4_o App_Water_ReflectionCamera__CalculateObliqueMatrix (App_Water_ReflectionCamera_o* __this, UnityEngine_Matrix4x4_o projection, UnityEngine_Vector4_o clipPlane, const MethodInfo* method);
UnityEngine_Matrix4x4_o App_Water_ReflectionCamera__CalculateReflectionMatrix (App_Water_ReflectionCamera_o* __this, UnityEngine_Matrix4x4_o reflectionMat, UnityEngine_Vector4_o plane, const MethodInfo* method);
float App_Water_ReflectionCamera__Sgn (App_Water_ReflectionCamera_o* __this, float a, const MethodInfo* method);
UnityEngine_Vector4_o App_Water_ReflectionCamera__CameraSpacePlane (App_Water_ReflectionCamera_o* __this, UnityEngine_Camera_o* cam, UnityEngine_Vector3_o pos, UnityEngine_Vector3_o normal, float sideSign, const MethodInfo* method);
void App_Water_ReflectionCamera___ctor (App_Water_ReflectionCamera_o* __this, const MethodInfo* method);
