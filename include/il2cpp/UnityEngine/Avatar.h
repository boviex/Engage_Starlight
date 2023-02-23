#pragma once

#include "il2cpp.h"

void UnityEngine_Avatar___ctor (UnityEngine_Avatar_o* __this, const MethodInfo* method);
bool UnityEngine_Avatar__get_isValid (UnityEngine_Avatar_o* __this, const MethodInfo* method);
bool UnityEngine_Avatar__get_isHuman (UnityEngine_Avatar_o* __this, const MethodInfo* method);
UnityEngine_HumanDescription_o UnityEngine_Avatar__get_humanDescription (UnityEngine_Avatar_o* __this, const MethodInfo* method);
void UnityEngine_Avatar__SetMuscleMinMax (UnityEngine_Avatar_o* __this, int32_t muscleId, float min, float max, const MethodInfo* method);
void UnityEngine_Avatar__SetParameter (UnityEngine_Avatar_o* __this, int32_t parameterId, float value, const MethodInfo* method);
float UnityEngine_Avatar__GetAxisLength (UnityEngine_Avatar_o* __this, int32_t humanId, const MethodInfo* method);
UnityEngine_Quaternion_o UnityEngine_Avatar__GetPreRotation (UnityEngine_Avatar_o* __this, int32_t humanId, const MethodInfo* method);
UnityEngine_Quaternion_o UnityEngine_Avatar__GetPostRotation (UnityEngine_Avatar_o* __this, int32_t humanId, const MethodInfo* method);
UnityEngine_Quaternion_o UnityEngine_Avatar__GetZYPostQ (UnityEngine_Avatar_o* __this, int32_t humanId, UnityEngine_Quaternion_o parentQ, UnityEngine_Quaternion_o q, const MethodInfo* method);
UnityEngine_Quaternion_o UnityEngine_Avatar__GetZYRoll (UnityEngine_Avatar_o* __this, int32_t humanId, UnityEngine_Vector3_o uvw, const MethodInfo* method);
UnityEngine_Vector3_o UnityEngine_Avatar__GetLimitSign (UnityEngine_Avatar_o* __this, int32_t humanId, const MethodInfo* method);
float UnityEngine_Avatar__Internal_GetAxisLength (UnityEngine_Avatar_o* __this, int32_t humanId, const MethodInfo* method);
UnityEngine_Quaternion_o UnityEngine_Avatar__Internal_GetPreRotation (UnityEngine_Avatar_o* __this, int32_t humanId, const MethodInfo* method);
UnityEngine_Quaternion_o UnityEngine_Avatar__Internal_GetPostRotation (UnityEngine_Avatar_o* __this, int32_t humanId, const MethodInfo* method);
UnityEngine_Quaternion_o UnityEngine_Avatar__Internal_GetZYPostQ (UnityEngine_Avatar_o* __this, int32_t humanId, UnityEngine_Quaternion_o parentQ, UnityEngine_Quaternion_o q, const MethodInfo* method);
UnityEngine_Quaternion_o UnityEngine_Avatar__Internal_GetZYRoll (UnityEngine_Avatar_o* __this, int32_t humanId, UnityEngine_Vector3_o uvw, const MethodInfo* method);
UnityEngine_Vector3_o UnityEngine_Avatar__Internal_GetLimitSign (UnityEngine_Avatar_o* __this, int32_t humanId, const MethodInfo* method);
void UnityEngine_Avatar__get_humanDescription_Injected (UnityEngine_Avatar_o* __this, UnityEngine_HumanDescription_o* ret, const MethodInfo* method);
void UnityEngine_Avatar__Internal_GetPreRotation_Injected (UnityEngine_Avatar_o* __this, int32_t humanId, UnityEngine_Quaternion_o* ret, const MethodInfo* method);
void UnityEngine_Avatar__Internal_GetPostRotation_Injected (UnityEngine_Avatar_o* __this, int32_t humanId, UnityEngine_Quaternion_o* ret, const MethodInfo* method);
void UnityEngine_Avatar__Internal_GetZYPostQ_Injected (UnityEngine_Avatar_o* __this, int32_t humanId, UnityEngine_Quaternion_o* parentQ, UnityEngine_Quaternion_o* q, UnityEngine_Quaternion_o* ret, const MethodInfo* method);
void UnityEngine_Avatar__Internal_GetZYRoll_Injected (UnityEngine_Avatar_o* __this, int32_t humanId, UnityEngine_Vector3_o* uvw, UnityEngine_Quaternion_o* ret, const MethodInfo* method);
void UnityEngine_Avatar__Internal_GetLimitSign_Injected (UnityEngine_Avatar_o* __this, int32_t humanId, UnityEngine_Vector3_o* ret, const MethodInfo* method);
