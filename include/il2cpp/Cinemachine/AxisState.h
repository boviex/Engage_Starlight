#pragma once

#include "il2cpp.h"

void Cinemachine_AxisState___ctor (Cinemachine_AxisState_o __this, float minValue, float maxValue, bool wrap, bool rangeLocked, float maxSpeed, float accelTime, float decelTime, System_String_o* name, bool invert, const MethodInfo* method);
void Cinemachine_AxisState__Validate (Cinemachine_AxisState_o __this, const MethodInfo* method);
void Cinemachine_AxisState__Reset (Cinemachine_AxisState_o __this, const MethodInfo* method);
void Cinemachine_AxisState__SetInputAxisProvider (Cinemachine_AxisState_o __this, int32_t axis, Cinemachine_AxisState_IInputAxisProvider_o* provider, const MethodInfo* method);
bool Cinemachine_AxisState__get_HasInputProvider (Cinemachine_AxisState_o __this, const MethodInfo* method);
bool Cinemachine_AxisState__Update (Cinemachine_AxisState_o __this, float deltaTime, const MethodInfo* method);
float Cinemachine_AxisState__ClampValue (Cinemachine_AxisState_o __this, float v, const MethodInfo* method);
bool Cinemachine_AxisState__MaxSpeedUpdate (Cinemachine_AxisState_o __this, float input, float deltaTime, const MethodInfo* method);
float Cinemachine_AxisState__GetMaxSpeed (Cinemachine_AxisState_o __this, const MethodInfo* method);
bool Cinemachine_AxisState__get_ValueRangeLocked (Cinemachine_AxisState_o __this, const MethodInfo* method);
void Cinemachine_AxisState__set_ValueRangeLocked (Cinemachine_AxisState_o __this, bool value, const MethodInfo* method);
bool Cinemachine_AxisState__get_HasRecentering (Cinemachine_AxisState_o __this, const MethodInfo* method);
void Cinemachine_AxisState__set_HasRecentering (Cinemachine_AxisState_o __this, bool value, const MethodInfo* method);
