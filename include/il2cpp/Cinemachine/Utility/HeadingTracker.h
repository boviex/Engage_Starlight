#pragma once

#include "il2cpp.h"

void Cinemachine_Utility_HeadingTracker___ctor (Cinemachine_Utility_HeadingTracker_o* __this, int32_t filterSize, const MethodInfo* method);
int32_t Cinemachine_Utility_HeadingTracker__get_FilterSize (Cinemachine_Utility_HeadingTracker_o* __this, const MethodInfo* method);
void Cinemachine_Utility_HeadingTracker__ClearHistory (Cinemachine_Utility_HeadingTracker_o* __this, const MethodInfo* method);
float Cinemachine_Utility_HeadingTracker__Decay (float time, const MethodInfo* method);
void Cinemachine_Utility_HeadingTracker__Add (Cinemachine_Utility_HeadingTracker_o* __this, UnityEngine_Vector3_o velocity, const MethodInfo* method);
void Cinemachine_Utility_HeadingTracker__PopBottom (Cinemachine_Utility_HeadingTracker_o* __this, const MethodInfo* method);
void Cinemachine_Utility_HeadingTracker__DecayHistory (Cinemachine_Utility_HeadingTracker_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_Utility_HeadingTracker__GetReliableHeading (Cinemachine_Utility_HeadingTracker_o* __this, const MethodInfo* method);
