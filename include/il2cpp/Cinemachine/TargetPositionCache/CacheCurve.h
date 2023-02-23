#pragma once

#include "il2cpp.h"

int32_t Cinemachine_TargetPositionCache_CacheCurve__get_Count (Cinemachine_TargetPositionCache_CacheCurve_o* __this, const MethodInfo* method);
void Cinemachine_TargetPositionCache_CacheCurve___ctor (Cinemachine_TargetPositionCache_CacheCurve_o* __this, float startTime, float endTime, float stepSize, const MethodInfo* method);
void Cinemachine_TargetPositionCache_CacheCurve__Add (Cinemachine_TargetPositionCache_CacheCurve_o* __this, Cinemachine_TargetPositionCache_CacheCurve_Item_o item, const MethodInfo* method);
void Cinemachine_TargetPositionCache_CacheCurve__AddUntil (Cinemachine_TargetPositionCache_CacheCurve_o* __this, Cinemachine_TargetPositionCache_CacheCurve_Item_o item, float time, bool isCut, const MethodInfo* method);
Cinemachine_TargetPositionCache_CacheCurve_Item_o Cinemachine_TargetPositionCache_CacheCurve__Evaluate (Cinemachine_TargetPositionCache_CacheCurve_o* __this, float time, const MethodInfo* method);
