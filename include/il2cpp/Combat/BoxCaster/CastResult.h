#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o Combat_BoxCaster_CastResult__get_centerPos (Combat_BoxCaster_CastResult_o* __this, const MethodInfo* method);
void Combat_BoxCaster_CastResult___ctor (Combat_BoxCaster_CastResult_o* __this, float settingXZ, float settingY, const MethodInfo* method);
void Combat_BoxCaster_CastResult__Cast (Combat_BoxCaster_CastResult_o* __this, UnityEngine_Vector3_o startPos, UnityEngine_Vector3_o endPos, UnityEngine_Vector3_o halfBoxSize, int32_t mask, const MethodInfo* method);
bool Combat_BoxCaster_CastResult__IsIntersect (Combat_BoxCaster_CastResult_o* __this, Combat_FXZ_o pos, float radius, const MethodInfo* method);
bool Combat_BoxCaster_CastResult__IsDividedBy (Combat_BoxCaster_CastResult_o* __this, int32_t mask, const MethodInfo* method);
void Combat_BoxCaster_CastResult__DrawGizmos (Combat_BoxCaster_CastResult_o* __this, const MethodInfo* method);
System_String_o* Combat_BoxCaster_CastResult__ToString (Combat_BoxCaster_CastResult_o* __this, const MethodInfo* method);
