#pragma once

#include "il2cpp.h"

float Combat_Parabola__get_in_Speed (Combat_Parabola_o* __this, const MethodInfo* method);
void Combat_Parabola__set_in_Speed (Combat_Parabola_o* __this, float value, const MethodInfo* method);
float Combat_Parabola__get_in_Mass (Combat_Parabola_o* __this, const MethodInfo* method);
void Combat_Parabola__set_in_Mass (Combat_Parabola_o* __this, float value, const MethodInfo* method);
UnityEngine_Vector3_o Combat_Parabola__get_in_StartPos (Combat_Parabola_o* __this, const MethodInfo* method);
void Combat_Parabola__set_in_StartPos (Combat_Parabola_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Vector3_o Combat_Parabola__get_in_EndPos (Combat_Parabola_o* __this, const MethodInfo* method);
void Combat_Parabola__set_in_EndPos (Combat_Parabola_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
float Combat_Parabola__get_in_WeaponLength (Combat_Parabola_o* __this, const MethodInfo* method);
void Combat_Parabola__set_in_WeaponLength (Combat_Parabola_o* __this, float value, const MethodInfo* method);
float Combat_Parabola__get_out_FlyingTime (Combat_Parabola_o* __this, const MethodInfo* method);
void Combat_Parabola__set_out_FlyingTime (Combat_Parabola_o* __this, float value, const MethodInfo* method);
UnityEngine_Vector3_o Combat_Parabola__get_out_InitialVelocity (Combat_Parabola_o* __this, const MethodInfo* method);
void Combat_Parabola__set_out_InitialVelocity (Combat_Parabola_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Vector3_o Combat_Parabola__get_out_WorldHitDir (Combat_Parabola_o* __this, const MethodInfo* method);
void Combat_Parabola__set_out_WorldHitDir (Combat_Parabola_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Vector3_o Combat_Parabola__get_WorldCentroidOffset (Combat_Parabola_o* __this, const MethodInfo* method);
void Combat_Parabola__Calculate (Combat_Parabola_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Combat_Parabola__CalcHitDir (Combat_Parabola_o* __this, const MethodInfo* method);
void Combat_Parabola__RecalcInitialVelocity (Combat_Parabola_o* __this, float flyingTime, const MethodInfo* method);
float Combat_Parabola__Kmph_mps (float kmph, const MethodInfo* method);
UnityEngine_Vector3_o Combat_Parabola__CalculateTrajectory (float time, float mass, UnityEngine_Vector3_o* velocity, const MethodInfo* method);
UnityEngine_Vector2_o Combat_Parabola__CalculateTrajectoryVelocity2D (UnityEngine_Vector2_o* target, float power, const MethodInfo* method);
UnityEngine_Vector3_o Combat_Parabola__CalculateTrajectoryVelocity (UnityEngine_Vector3_o target, float power, float* timeToHit, const MethodInfo* method);
UnityEngine_Vector3_o Combat_Parabola__CalculateTrajectoryVelocityByTime (UnityEngine_Vector3_o target, float time, const MethodInfo* method);
void Combat_Parabola___ctor (Combat_Parabola_o* __this, const MethodInfo* method);
