#pragma once

#include "il2cpp.h"

UnityEngine_GameObject_o* App_MapEffect__FindRoot (const MethodInfo* method);
UnityEngine_GameObject_o* App_MapEffect__TryCreateRoot (const MethodInfo* method);
void App_MapEffect__TryDeleteRoot (const MethodInfo* method);
void App_MapEffect__OnCreate (App_MapEffect_o* __this, const MethodInfo* method);
void App_MapEffect__OnDispose (App_MapEffect_o* __this, const MethodInfo* method);
void App_MapEffect__OnUpdate (App_MapEffect_o* __this, const MethodInfo* method);
bool App_MapEffect__Play (System_String_o* name, UnityEngine_Vector3_o position, const MethodInfo* method);
bool App_MapEffect__Play (System_String_o* name, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapEffect__Play (App_EffectData_o* data, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapEffect__Play (App_EffectData_o* data, UnityEngine_Vector3_o position, const MethodInfo* method);
bool App_MapEffect__Play (System_String_o* name, App_UnitModel_o* model, const MethodInfo* method);
bool App_MapEffect__Play (System_String_o* name, App_Unit_o* unit, const MethodInfo* method);
bool App_MapEffect__Play (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
bool App_MapEffect__CanPlaying (const MethodInfo* method);
bool App_MapEffect__Play (App_EffectSequence_o* seq, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
bool App_MapEffect__Play (App_EffectData_o* data, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
void App_MapEffect__Create (System_String_o* name, int32_t x, int32_t z, const MethodInfo* method);
void App_MapEffect__Create (System_String_o* name, UnityEngine_Vector3_o position, const MethodInfo* method);
void App_MapEffect__Create (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
void App_MapEffect__Delete (System_String_o* name, int32_t x, int32_t z, const MethodInfo* method);
void App_MapEffect__Delete (System_String_o* name, UnityEngine_Vector3_o position, const MethodInfo* method);
void App_MapEffect__Delete (UnityEngine_Vector3_o position, const MethodInfo* method);
bool App_MapEffect__IsExist (System_String_o* name, UnityEngine_Vector3_o position, const MethodInfo* method);
void App_MapEffect__CreateImpl (App_MapEffect_o* __this, System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
void App_MapEffect__DeleteImpl (App_MapEffect_o* __this, System_String_o* name, UnityEngine_Vector3_o position, const MethodInfo* method);
bool App_MapEffect__IsExistImpl (App_MapEffect_o* __this, System_String_o* name, UnityEngine_Vector3_o position, const MethodInfo* method);
int32_t App_MapEffect__get_Version (App_MapEffect_o* __this, const MethodInfo* method);
void App_MapEffect__OnSerialize (App_MapEffect_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapEffect__OnDeserialize (App_MapEffect_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
void App_MapEffect__Resume (App_MapEffect_o* __this, const MethodInfo* method);
void App_MapEffect__Shoot (System_String_o* name, UnityEngine_Vector3_o start, UnityEngine_Vector3_o goal, float time, float delay, App_EffectShoot_Callback_o* callback, const MethodInfo* method);
void App_MapEffect___ctor (App_MapEffect_o* __this, const MethodInfo* method);
void App_MapEffect___cctor (const MethodInfo* method);
