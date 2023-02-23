#pragma once

#include "il2cpp.h"

Combat_Character_o* Combat_CharacterMove__get_CP (Combat_CharacterMove_o* __this, const MethodInfo* method);
float Combat_CharacterMove__get_MaxRunSpeed (Combat_CharacterMove_o* __this, const MethodInfo* method);
void Combat_CharacterMove__set_MaxRunSpeed (Combat_CharacterMove_o* __this, float value, const MethodInfo* method);
void Combat_CharacterMove__SetMaxRunSpeed (Combat_CharacterMove_o* __this, float value, const MethodInfo* method);
float Combat_CharacterMove__get_Acceleration (Combat_CharacterMove_o* __this, const MethodInfo* method);
float Combat_CharacterMove__get_Deceleration (Combat_CharacterMove_o* __this, const MethodInfo* method);
void Combat_CharacterMove__Stabilize (Combat_CharacterMove_o* __this, const MethodInfo* method);
void Combat_CharacterMove__Awake (Combat_CharacterMove_o* __this, const MethodInfo* method);
void Combat_CharacterMove__LateUpdate (Combat_CharacterMove_o* __this, const MethodInfo* method);
void Combat_CharacterMove__WarpTo (Combat_CharacterMove_o* __this, Combat_FXZ_o goal, const MethodInfo* method);
void Combat_CharacterMove__RunTo (Combat_CharacterMove_o* __this, Combat_FXZ_o goal, int32_t mode, const MethodInfo* method);
void Combat_CharacterMove__RunTo (Combat_CharacterMove_o* __this, Combat_FXZ_o goal, bool fromMaxSpeed, const MethodInfo* method);
void Combat_CharacterMove__JumpTo (Combat_CharacterMove_o* __this, UnityEngine_Vector3_o goal, float duration, bool isGrounding, const MethodInfo* method);
void Combat_CharacterMove__JumpTo (Combat_CharacterMove_o* __this, UnityEngine_Transform_o* target, UnityEngine_AnimationEvent_o* ev, const MethodInfo* method);
void Combat_CharacterMove__Brake (Combat_CharacterMove_o* __this, const MethodInfo* method);
void Combat_CharacterMove__Stop (Combat_CharacterMove_o* __this, const MethodInfo* method);
void Combat_CharacterMove__UpdateMoving (Combat_CharacterMove_o* __this, const MethodInfo* method);
void Combat_CharacterMove__UpdateRun (Combat_CharacterMove_o* __this, const MethodInfo* method);
void Combat_CharacterMove__UpdateRunBrake (Combat_CharacterMove_o* __this, const MethodInfo* method);
float Combat_CharacterMove__AdvanceTimeAndGetDT (Combat_CharacterMove_o* __this, const MethodInfo* method);
void Combat_CharacterMove__UpdateJump (Combat_CharacterMove_o* __this, const MethodInfo* method);
float Combat_CharacterMove__CalcTimeToArrive (Combat_CharacterMove_o* __this, float dist, bool runMaxSpeed, const MethodInfo* method);
void Combat_CharacterMove___ctor (Combat_CharacterMove_o* __this, const MethodInfo* method);
