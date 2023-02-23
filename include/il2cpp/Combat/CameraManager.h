#pragma once

#include "il2cpp.h"

float Combat_CameraManager__get_TransitionProgress (Combat_CameraManager_o* __this, const MethodInfo* method);
void Combat_CameraManager__set_TransitionProgress (Combat_CameraManager_o* __this, float value, const MethodInfo* method);
bool Combat_CameraManager__get_IsPositionCrossed (Combat_CameraManager_o* __this, const MethodInfo* method);
bool Combat_CameraManager__IsTargeting (Combat_CameraManager_o* __this, int32_t side, const MethodInfo* method);
void Combat_CameraManager__Start (Combat_CameraManager_o* __this, const MethodInfo* method);
void Combat_CameraManager__LateUpdate (Combat_CameraManager_o* __this, const MethodInfo* method);
void Combat_CameraManager__BeginCamera (Combat_CameraManager_o* __this, Combat_CombatRecord_o* record, bool transition, const MethodInfo* method);
void Combat_CameraManager__BeginCamera (Combat_CameraManager_o* __this, Combat_Character_array* chara, bool transition, const MethodInfo* method);
void Combat_CameraManager__EndCamera (Combat_CameraManager_o* __this, bool transition, int32_t cameraMode, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_CameraManager__ReverseCamera (Combat_CameraManager_o* __this, const MethodInfo* method);
void Combat_CameraManager__ReverseMainCamera (Combat_CameraManager_o* __this, const MethodInfo* method);
void Combat_CameraManager__UpdateSituation (Combat_CameraManager_o* __this, int32_t changeStyle, bool changeForce, const MethodInfo* method);
void Combat_CameraManager__UpdateSituation (Combat_CameraManager_o* __this, UnityEngine_AnimationEvent_o* ev, int32_t callSide, const MethodInfo* method);
void Combat_CameraManager__SwitchCamera (Combat_CameraManager_o* __this, int32_t pos, const MethodInfo* method);
void Combat_CameraManager__StartShake (Combat_CameraManager_o* __this, float magnitude, UnityEngine_Vector3_o sourcePos, bool isCritical, const MethodInfo* method);
void Combat_CameraManager__ArmorShake (Combat_CameraManager_o* __this, float magnitude, UnityEngine_Vector3_o sourcePos, const MethodInfo* method);
void Combat_CameraManager__Stabilize (Combat_CameraManager_o* __this, const MethodInfo* method);
void Combat_CameraManager__BeginTransition (Combat_CameraManager_o* __this, int32_t cameraPos, const MethodInfo* method);
void Combat_CameraManager___ctor (Combat_CameraManager_o* __this, const MethodInfo* method);
