#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o Combat_BoxCaster__get_HalfBoxSize (Combat_BoxCaster_o* __this, const MethodInfo* method);
void Combat_BoxCaster__set_HalfBoxSize (Combat_BoxCaster_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
int32_t Combat_BoxCaster__get_TryCount (Combat_BoxCaster_o* __this, const MethodInfo* method);
void Combat_BoxCaster__set_TryCount (Combat_BoxCaster_o* __this, int32_t value, const MethodInfo* method);
Combat_FXZ_o Combat_BoxCaster__get_Center2D (Combat_BoxCaster_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Combat_BoxCaster__get_Center3D (Combat_BoxCaster_o* __this, const MethodInfo* method);
UnityEngine_Color_o Combat_BoxCaster__get_DebugColor (Combat_BoxCaster_o* __this, const MethodInfo* method);
void Combat_BoxCaster__set_DebugColor (Combat_BoxCaster_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
Combat_FXZ_o Combat_BoxCaster__get_Right (Combat_BoxCaster_o* __this, const MethodInfo* method);
void Combat_BoxCaster___ctor (Combat_BoxCaster_o* __this, const MethodInfo* method);
void Combat_BoxCaster___ctor (Combat_BoxCaster_o* __this, UnityEngine_Vector3_o pos0, const MethodInfo* method);
void Combat_BoxCaster___ctor (Combat_BoxCaster_o* __this, UnityEngine_Vector3_o pos0, UnityEngine_Vector3_o pos1, const MethodInfo* method);
void Combat_BoxCaster__MakeParams (Combat_BoxCaster_o* __this, const MethodInfo* method);
void Combat_BoxCaster__Cast (Combat_BoxCaster_o* __this, const MethodInfo* method);
bool Combat_BoxCaster__CastOne (Combat_BoxCaster_o* __this, int32_t mask, UnityEngine_RaycastHit_o* hit0, UnityEngine_RaycastHit_o* hit1, const MethodInfo* method);
bool Combat_BoxCaster__RayCast (Combat_BoxCaster_o* __this, UnityEngine_RaycastHit_o* hitInfo, int32_t mask, float maxLength, const MethodInfo* method);
bool Combat_BoxCaster__WillCollide (Combat_BoxCaster_o* __this, UnityEngine_Quaternion_o rotation, int32_t mask, const MethodInfo* method);
void Combat_BoxCaster__DebugCastTrajectory (Combat_BoxCaster_o* __this, UnityEngine_Vector3_o worldPos, UnityEngine_Vector3_o direction, UnityEngine_Quaternion_o forward, float distance, const MethodInfo* method);
void Combat_BoxCaster__DrawGizmos (Combat_BoxCaster_o* __this, const MethodInfo* method);
bool Combat_BoxCaster__IsDividedBy (Combat_BoxCaster_o* __this, int32_t mask, const MethodInfo* method);
void Combat_BoxCaster__Pullup (Combat_BoxCaster_o* __this, const MethodInfo* method);
System_String_o* Combat_BoxCaster__ToString (Combat_BoxCaster_o* __this, const MethodInfo* method);
