#pragma once

#include "il2cpp.h"

void UTJ_Jobs_SpringJobManager__CopyFrom (UTJ_Jobs_SpringJobManager_o* __this, UTJ_SpringManager_o* manager, const MethodInfo* method);
bool UTJ_Jobs_SpringJobManager__get_initialized (UTJ_Jobs_SpringJobManager_o* __this, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__set_initialized (UTJ_Jobs_SpringJobManager_o* __this, bool value, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__Stabilize (UTJ_Jobs_SpringJobManager_o* __this, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__UpdateSimulation (UTJ_Jobs_SpringJobManager_o* __this, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__ResetSimulation (UTJ_Jobs_SpringJobManager_o* __this, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__SetGravity (UTJ_Jobs_SpringJobManager_o* __this, UnityEngine_Vector3_o gravity, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__SetGroundHeight (UTJ_Jobs_SpringJobManager_o* __this, float groundHeight, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__SetDefaultWindParameter (UTJ_Jobs_SpringJobManager_o* __this, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__SetWindPower (UTJ_Jobs_SpringJobManager_o* __this, UnityEngine_Vector3_o windPower, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__SetWindSpeed (UTJ_Jobs_SpringJobManager_o* __this, float windSpeed, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__SetWindDir (UTJ_Jobs_SpringJobManager_o* __this, UnityEngine_Vector3_o windDir, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__ApplyLocalWind (UTJ_Jobs_SpringJobManager_o* __this, UnityEngine_Vector3_o windPower, float windSpeed, UnityEngine_Vector3_o windDir, float startTime, float durationTime, float decayTime, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__ReplaceJobManager (UTJ_Jobs_SpringJobManager_o* __this, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__LateUpdate (UTJ_Jobs_SpringJobManager_o* __this, const MethodInfo* method);
int32_t UTJ_Jobs_SpringJobManager__GetObjectDepth (UnityEngine_Transform_o* inObject, const MethodInfo* method);
UTJ_SpringBone_array* UTJ_Jobs_SpringJobManager__FindSpringBones (UTJ_Jobs_SpringJobManager_o* __this, bool includeInactive, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__CachedJobParam (UTJ_Jobs_SpringJobManager_o* __this, const MethodInfo* method);
bool UTJ_Jobs_SpringJobManager__Initialize (UTJ_Jobs_SpringJobManager_o* __this, UTJ_Jobs_SpringJobScheduler_o* scheduler, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__Final (UTJ_Jobs_SpringJobManager_o* __this, UTJ_Jobs_SpringJobScheduler_o* scheduler, const MethodInfo* method);
UTJ_Jobs_SpringJobElement_o UTJ_Jobs_SpringJobManager__GetElement (UTJ_Jobs_SpringJobManager_o* __this, int32_t no, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__OnEnable (UTJ_Jobs_SpringJobManager_o* __this, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__OnDisable (UTJ_Jobs_SpringJobManager_o* __this, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager__OnDestroy (UTJ_Jobs_SpringJobManager_o* __this, const MethodInfo* method);
void UTJ_Jobs_SpringJobManager___ctor (UTJ_Jobs_SpringJobManager_o* __this, const MethodInfo* method);
