#pragma once

#include "il2cpp.h"

void Cinemachine_AxisState_Recentering___ctor (Cinemachine_AxisState_Recentering_o __this, bool enabled, float waitTime, float recenteringTime, const MethodInfo* method);
void Cinemachine_AxisState_Recentering__Validate (Cinemachine_AxisState_Recentering_o __this, const MethodInfo* method);
void Cinemachine_AxisState_Recentering__CopyStateFrom (Cinemachine_AxisState_Recentering_o __this, Cinemachine_AxisState_Recentering_o* other, const MethodInfo* method);
void Cinemachine_AxisState_Recentering__CancelRecentering (Cinemachine_AxisState_Recentering_o __this, const MethodInfo* method);
void Cinemachine_AxisState_Recentering__RecenterNow (Cinemachine_AxisState_Recentering_o __this, const MethodInfo* method);
void Cinemachine_AxisState_Recentering__DoRecentering (Cinemachine_AxisState_Recentering_o __this, Cinemachine_AxisState_o* axis, float deltaTime, float recenterTarget, const MethodInfo* method);
bool Cinemachine_AxisState_Recentering__LegacyUpgrade (Cinemachine_AxisState_Recentering_o __this, int32_t* heading, int32_t* velocityFilter, const MethodInfo* method);
