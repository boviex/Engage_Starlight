#pragma once

#include "il2cpp.h"

UnityEngine_Camera_o* Combat_CameraSwitch__get_SourceCamera (Combat_CameraSwitch_o* __this, const MethodInfo* method);
void Combat_CameraSwitch__set_SourceCamera (Combat_CameraSwitch_o* __this, UnityEngine_Camera_o* value, const MethodInfo* method);
int32_t Combat_CameraSwitch__get_CurrentCamera (Combat_CameraSwitch_o* __this, const MethodInfo* method);
void Combat_CameraSwitch__set_CurrentCamera (Combat_CameraSwitch_o* __this, int32_t value, const MethodInfo* method);
int32_t Combat_CameraSwitch__get_CurrentInterruptCamera (Combat_CameraSwitch_o* __this, const MethodInfo* method);
void Combat_CameraSwitch__set_CurrentInterruptCamera (Combat_CameraSwitch_o* __this, int32_t value, const MethodInfo* method);
bool Combat_CameraSwitch__get_IsInterrupting (Combat_CameraSwitch_o* __this, const MethodInfo* method);
Combat_BaseCameraController_o* Combat_CameraSwitch__get_Item (Combat_CameraSwitch_o* __this, int32_t pos, const MethodInfo* method);
void Combat_CameraSwitch__Start (Combat_CameraSwitch_o* __this, const MethodInfo* method);
void Combat_CameraSwitch__Update (Combat_CameraSwitch_o* __this, const MethodInfo* method);
void Combat_CameraSwitch__LateUpdate (Combat_CameraSwitch_o* __this, const MethodInfo* method);
void Combat_CameraSwitch__SwitchCamera (Combat_CameraSwitch_o* __this, int32_t nextCamera, bool force, const MethodInfo* method);
void Combat_CameraSwitch__StartTransition (Combat_CameraSwitch_o* __this, Combat_BaseCameraController_o* nextCamera, const MethodInfo* method);
void Combat_CameraSwitch___ctor (Combat_CameraSwitch_o* __this, const MethodInfo* method);
