#pragma once

#include "il2cpp.h"

bool Cinemachine_LensSettings__get_Orthographic (Cinemachine_LensSettings_o __this, const MethodInfo* method);
void Cinemachine_LensSettings__set_Orthographic (Cinemachine_LensSettings_o __this, bool value, const MethodInfo* method);
UnityEngine_Vector2_o Cinemachine_LensSettings__get_SensorSize (Cinemachine_LensSettings_o __this, const MethodInfo* method);
void Cinemachine_LensSettings__set_SensorSize (Cinemachine_LensSettings_o __this, UnityEngine_Vector2_o value, const MethodInfo* method);
float Cinemachine_LensSettings__get_Aspect (Cinemachine_LensSettings_o __this, const MethodInfo* method);
bool Cinemachine_LensSettings__get_IsPhysicalCamera (Cinemachine_LensSettings_o __this, const MethodInfo* method);
void Cinemachine_LensSettings__set_IsPhysicalCamera (Cinemachine_LensSettings_o __this, bool value, const MethodInfo* method);
Cinemachine_LensSettings_o Cinemachine_LensSettings__FromCamera (UnityEngine_Camera_o* fromCamera, const MethodInfo* method);
void Cinemachine_LensSettings__SnapshotCameraReadOnlyProperties (Cinemachine_LensSettings_o __this, UnityEngine_Camera_o* camera, const MethodInfo* method);
void Cinemachine_LensSettings__SnapshotCameraReadOnlyProperties (Cinemachine_LensSettings_o __this, Cinemachine_LensSettings_o* lens, const MethodInfo* method);
void Cinemachine_LensSettings___ctor (Cinemachine_LensSettings_o __this, float fov, float orthographicSize, float nearClip, float farClip, float dutch, const MethodInfo* method);
Cinemachine_LensSettings_o Cinemachine_LensSettings__Lerp (Cinemachine_LensSettings_o lensA, Cinemachine_LensSettings_o lensB, float t, const MethodInfo* method);
void Cinemachine_LensSettings__Validate (Cinemachine_LensSettings_o __this, const MethodInfo* method);
void Cinemachine_LensSettings___cctor (const MethodInfo* method);
