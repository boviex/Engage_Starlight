#pragma once

#include "il2cpp.h"

void App_EffectSequence__Load (const MethodInfo* method);
System_String_o* App_EffectSequence__get_Sequence (App_EffectSequence_o* __this, const MethodInfo* method);
void App_EffectSequence__set_Sequence (App_EffectSequence_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* App_EffectSequence__get_Active (App_EffectSequence_o* __this, const MethodInfo* method);
void App_EffectSequence__set_Active (App_EffectSequence_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* App_EffectSequence__get_Shoot (App_EffectSequence_o* __this, const MethodInfo* method);
void App_EffectSequence__set_Shoot (App_EffectSequence_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* App_EffectSequence__get_Hit (App_EffectSequence_o* __this, const MethodInfo* method);
void App_EffectSequence__set_Hit (App_EffectSequence_o* __this, System_String_o* value, const MethodInfo* method);
App_EffectData_o* App_EffectSequence__GetData (App_EffectSequence_o* __this, int32_t kind, const MethodInfo* method);
void App_EffectSequence__PlaySequence (App_EffectSequence_o* __this, int32_t mode, UnityEngine_GameObject_o* parent, UnityEngine_Vector3_o position, const MethodInfo* method);
void App_EffectSequence__PlaySequence (App_EffectSequence_o* __this, int32_t mode, UnityEngine_GameObject_o* parent, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
void App_EffectSequence__PlayShoot (App_EffectSequence_o* __this, int32_t mode, UnityEngine_GameObject_o* parent, const MethodInfo* method);
App_ResourceObject_o* App_EffectSequence__PlayImpl (App_EffectSequence_o* __this, int32_t kind, int32_t mode, UnityEngine_GameObject_o* parent, float* delayTime, const MethodInfo* method);
App_EffectData_o* App_EffectSequence__TryGetData (App_EffectSequence_o* __this, System_String_o* name, const MethodInfo* method);
void App_EffectSequence__OnBuild (App_EffectSequence_o* __this, const MethodInfo* method);
void App_EffectSequence___ctor (App_EffectSequence_o* __this, const MethodInfo* method);
