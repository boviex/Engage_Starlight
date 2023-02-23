#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o UTJ_SpringPanelCollider__GetPlaneNormal (UTJ_SpringPanelCollider_o* __this, const MethodInfo* method);
int32_t UTJ_SpringPanelCollider__CheckForCollisionAndReact (UTJ_SpringPanelCollider_o* __this, UnityEngine_Vector3_o headPosition, float length, UnityEngine_Vector3_o* tailPosition, float tailRadius, UnityEngine_Vector3_o* hitNormal, const MethodInfo* method);
int32_t UTJ_SpringPanelCollider__CheckForCollisionWithAlignedPlaneAndReact (UnityEngine_Vector3_o localHeadPosition, float localLength, UnityEngine_Vector3_o* localTailPosition, float localTailRadius, int32_t upAxis, const MethodInfo* method);
void UTJ_SpringPanelCollider___ctor (UTJ_SpringPanelCollider_o* __this, const MethodInfo* method);
