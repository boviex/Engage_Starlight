#pragma once

#include "il2cpp.h"

float Combat_CameraControllerTransition__get_TransitionTimeStart (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
float Combat_CameraControllerTransition__get_TransitionTimeReturn (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Combat_CameraControllerTransition__get_SourceFollow (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
void Combat_CameraControllerTransition__set_SourceFollow (Combat_CameraControllerTransition_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Vector3_o Combat_CameraControllerTransition__get_SourceLookAt (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
void Combat_CameraControllerTransition__set_SourceLookAt (Combat_CameraControllerTransition_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
float Combat_CameraControllerTransition__get_SourceFov (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
void Combat_CameraControllerTransition__set_SourceFov (Combat_CameraControllerTransition_o* __this, float value, const MethodInfo* method);
float Combat_CameraControllerTransition__get_TargetFov (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
float Combat_CameraControllerTransition__get_TargetSSS (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
void Combat_CameraControllerTransition__set_TargetSSS (Combat_CameraControllerTransition_o* __this, float value, const MethodInfo* method);
float Combat_CameraControllerTransition__get_DetourDegree (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
void Combat_CameraControllerTransition__set_DetourDegree (Combat_CameraControllerTransition_o* __this, float value, const MethodInfo* method);
void Combat_CameraControllerTransition__Start (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
void Combat_CameraControllerTransition__StartTransition (Combat_CameraControllerTransition_o* __this, Combat_BaseCameraController_o* nextCam, const MethodInfo* method);
void Combat_CameraControllerTransition__ChangeTaget (Combat_CameraControllerTransition_o* __this, Combat_BaseCameraController_o* nextCam, const MethodInfo* method);
void Combat_CameraControllerTransition__ReturnTransition (Combat_CameraControllerTransition_o* __this, Combat_BaseCameraController_o* currentCam, const MethodInfo* method);
System_ValueTuple_Vector3__Vector3__o Combat_CameraControllerTransition__GetPositionInfo (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
void Combat_CameraControllerTransition__CheckUsable (Combat_CameraControllerTransition_o* __this, bool isRoutine, const MethodInfo* method);
System_ValueTuple_Vector3__Vector3__o Combat_CameraControllerTransition__ZoomInCameraPos (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
System_ValueTuple_Vector3__Vector3__o Combat_CameraControllerTransition__WaitCameraPos (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
System_ValueTuple_Vector3__Vector3__o Combat_CameraControllerTransition__ChangeCameraPos (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
System_ValueTuple_Vector3__Vector3__o Combat_CameraControllerTransition__ZoomOutCameraPos (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
void Combat_CameraControllerTransition__Stabilize (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
void Combat_CameraControllerTransition__Deactivate (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
void Combat_CameraControllerTransition__GetSourceInfo (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
void Combat_CameraControllerTransition__SetCameraSetting (Combat_CameraControllerTransition_o* __this, float t, const MethodInfo* method);
void Combat_CameraControllerTransition__CheckDetour (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Combat_CameraControllerTransition__GetFixedSourceFollow (Combat_CameraControllerTransition_o* __this, float trans, float rotHeight, const MethodInfo* method);
void Combat_CameraControllerTransition__RotateTargetFollow (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
System_Int32_array* Combat_CameraControllerTransition__GetCameraTargets (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
void Combat_CameraControllerTransition___ctor (Combat_CameraControllerTransition_o* __this, const MethodInfo* method);
