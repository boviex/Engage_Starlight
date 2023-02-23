#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o UTJ_SpringManager__get_DefaultWindPower (const MethodInfo* method);
float UTJ_SpringManager__get_DefaultWindSpeed (const MethodInfo* method);
UnityEngine_Vector3_o UTJ_SpringManager__get_DefaultWindDir (const MethodInfo* method);
bool UTJ_SpringManager__get_RequestResetSpringLength (UTJ_SpringManager_o* __this, const MethodInfo* method);
void UTJ_SpringManager__set_RequestResetSpringLength (UTJ_SpringManager_o* __this, bool value, const MethodInfo* method);
UnityEngine_Vector3_o UTJ_SpringManager__get_WindPower (UTJ_SpringManager_o* __this, const MethodInfo* method);
void UTJ_SpringManager__set_WindPower (UTJ_SpringManager_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
float UTJ_SpringManager__get_WindSpeed (UTJ_SpringManager_o* __this, const MethodInfo* method);
void UTJ_SpringManager__set_WindSpeed (UTJ_SpringManager_o* __this, float value, const MethodInfo* method);
UnityEngine_Vector3_o UTJ_SpringManager__get_WindDir (UTJ_SpringManager_o* __this, const MethodInfo* method);
void UTJ_SpringManager__set_WindDir (UTJ_SpringManager_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
void UTJ_SpringManager__CopyFrom (UTJ_SpringManager_o* __this, UTJ_Jobs_SpringJobManager_o* jobmanager, const MethodInfo* method);
void UTJ_SpringManager__Stabilize (UTJ_SpringManager_o* __this, const MethodInfo* method);
void UTJ_SpringManager__ResetSpringLengthAndTipPosition (UTJ_SpringManager_o* __this, const MethodInfo* method);
void UTJ_SpringManager__UpdateSimulation (UTJ_SpringManager_o* __this, const MethodInfo* method);
void UTJ_SpringManager__ResetSimulation (UTJ_SpringManager_o* __this, const MethodInfo* method);
void UTJ_SpringManager__SetGravity (UTJ_SpringManager_o* __this, UnityEngine_Vector3_o gravity, const MethodInfo* method);
void UTJ_SpringManager__SetGroundHeight (UTJ_SpringManager_o* __this, float groundHeight, const MethodInfo* method);
void UTJ_SpringManager__SetDefaultWindParameter (UTJ_SpringManager_o* __this, const MethodInfo* method);
void UTJ_SpringManager__SetWindPower (UTJ_SpringManager_o* __this, UnityEngine_Vector3_o windPower, const MethodInfo* method);
void UTJ_SpringManager__SetWindSpeed (UTJ_SpringManager_o* __this, float windSpeed, const MethodInfo* method);
void UTJ_SpringManager__SetWindDir (UTJ_SpringManager_o* __this, UnityEngine_Vector3_o windDir, const MethodInfo* method);
void UTJ_SpringManager__ApplyLocalWind (UTJ_SpringManager_o* __this, UnityEngine_Vector3_o windPower, float windSpeed, UnityEngine_Vector3_o windDir, float startTime, float durationTime, float decayTime, const MethodInfo* method);
void UTJ_SpringManager__ReplaceJobManager (UTJ_SpringManager_o* __this, const MethodInfo* method);
float UTJ_SpringManager__UpdateLocalWindRate (UTJ_SpringManager_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o UTJ_SpringManager__ApplyWindForce (UTJ_SpringManager_o* __this, UnityEngine_Vector3_o pos, float time, float timeAlpha, const MethodInfo* method);
void UTJ_SpringManager__CleanUpBoneColliders (UTJ_SpringManager_o* __this, const MethodInfo* method);
void UTJ_SpringManager__FindSpringBones (UTJ_SpringManager_o* __this, bool includeInactive, const MethodInfo* method);
void UTJ_SpringManager__UpdateBoneIsAnimatedStates (UTJ_SpringManager_o* __this, System_Collections_Generic_IList_string__o* animatedBoneNames, const MethodInfo* method);
void UTJ_SpringManager__UpdateDynamics (UTJ_SpringManager_o* __this, const MethodInfo* method);
int32_t UTJ_SpringManager__GetObjectDepth (UnityEngine_Transform_o* inObject, const MethodInfo* method);
UnityEngine_Vector3_o UTJ_SpringManager__GetSumOfForcesOnBone (UTJ_SpringManager_o* __this, UTJ_SpringBone_o* springBone, const MethodInfo* method);
void UTJ_SpringManager__Awake (UTJ_SpringManager_o* __this, const MethodInfo* method);
void UTJ_SpringManager__Start (UTJ_SpringManager_o* __this, const MethodInfo* method);
void UTJ_SpringManager__LateUpdate (UTJ_SpringManager_o* __this, const MethodInfo* method);
void UTJ_SpringManager___ctor (UTJ_SpringManager_o* __this, const MethodInfo* method);
void UTJ_SpringManager___cctor (const MethodInfo* method);
