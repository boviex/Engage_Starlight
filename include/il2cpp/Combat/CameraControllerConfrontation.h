#pragma once

#include "il2cpp.h"

float Combat_CameraControllerConfrontation__get_CurveLength (Combat_CameraControllerConfrontation_o* __this, const MethodInfo* method);
float Combat_CameraControllerConfrontation__get_TransitionTimeStart (Combat_CameraControllerConfrontation_o* __this, const MethodInfo* method);
float Combat_CameraControllerConfrontation__get_TransitionTimeReturn (Combat_CameraControllerConfrontation_o* __this, const MethodInfo* method);
bool Combat_CameraControllerConfrontation__get_IsActiveVCam (Combat_CameraControllerConfrontation_o* __this, const MethodInfo* method);
void Combat_CameraControllerConfrontation__CheckUsable (Combat_CameraControllerConfrontation_o* __this, bool isRoutine, const MethodInfo* method);
void Combat_CameraControllerConfrontation__Start (Combat_CameraControllerConfrontation_o* __this, const MethodInfo* method);
void Combat_CameraControllerConfrontation__StartTransition (Combat_CameraControllerConfrontation_o* __this, Combat_BaseCameraController_o* nextCam, const MethodInfo* method);
void Combat_CameraControllerConfrontation__ChangeTaget (Combat_CameraControllerConfrontation_o* __this, Combat_BaseCameraController_o* nextCam, const MethodInfo* method);
void Combat_CameraControllerConfrontation__ReturnTransition (Combat_CameraControllerConfrontation_o* __this, Combat_BaseCameraController_o* currentCam, const MethodInfo* method);
System_ValueTuple_Vector3__Vector3__o Combat_CameraControllerConfrontation__GetPositionInfo (Combat_CameraControllerConfrontation_o* __this, const MethodInfo* method);
System_ValueTuple_Vector3__Vector3__o Combat_CameraControllerConfrontation__ZoomInCameraPos (Combat_CameraControllerConfrontation_o* __this, const MethodInfo* method);
System_ValueTuple_Vector3__Vector3__o Combat_CameraControllerConfrontation__ZoomupPlayer (Combat_CameraControllerConfrontation_o* __this, float t, const MethodInfo* method);
System_ValueTuple_Vector3__Vector3__o Combat_CameraControllerConfrontation__ZoomupEnemy (Combat_CameraControllerConfrontation_o* __this, float t, const MethodInfo* method);
System_ValueTuple_Vector3__Vector3__o Combat_CameraControllerConfrontation__WaitCameraPos (Combat_CameraControllerConfrontation_o* __this, const MethodInfo* method);
System_ValueTuple_Vector3__Vector3__o Combat_CameraControllerConfrontation__ZoomOutCameraPos (Combat_CameraControllerConfrontation_o* __this, const MethodInfo* method);
System_Int32_array* Combat_CameraControllerConfrontation__GetCameraTargets (Combat_CameraControllerConfrontation_o* __this, const MethodInfo* method);
void Combat_CameraControllerConfrontation___ctor (Combat_CameraControllerConfrontation_o* __this, const MethodInfo* method);