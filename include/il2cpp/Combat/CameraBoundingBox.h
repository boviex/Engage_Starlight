#pragma once

#include "il2cpp.h"

void Combat_CameraBoundingBox___ctor (Combat_CameraBoundingBox_o* __this, UnityEngine_Vector3_o followPos, UnityEngine_Vector3_o lookAtPos, float screenSpaceReprojectionRatio, const MethodInfo* method);
void Combat_CameraBoundingBox__Append (Combat_CameraBoundingBox_o* __this, UnityEngine_Vector3_o pos, float size, const MethodInfo* method);
void Combat_CameraBoundingBox__CreateBox (Combat_CameraBoundingBox_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Combat_CameraBoundingBox__GetBoxCenter (Combat_CameraBoundingBox_o* __this, const MethodInfo* method);
float Combat_CameraBoundingBox__GetNearestDistance (Combat_CameraBoundingBox_o* __this, float fov, const MethodInfo* method);
UnityEngine_Vector3_o Combat_CameraBoundingBox__PosInCamera (Combat_CameraBoundingBox_o* __this, UnityEngine_Vector3_o pos, const MethodInfo* method);
