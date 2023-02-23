#pragma once

#include "il2cpp.h"

UnityEngine_Camera_o* App_MapCamera__GetCamera (const MethodInfo* method);
void App_MapCamera__SetPosition (UnityEngine_Vector3_o pos, float speed, const MethodInfo* method);
void App_MapCamera__SetPosition (int32_t x, int32_t z, const MethodInfo* method);
void App_MapCamera__SetRotation (UnityEngine_Vector3_o rot, const MethodInfo* method);
void App_MapCamera__SetDistance (float distance, const MethodInfo* method);
UnityEngine_Vector3_o App_MapCamera__GetRotation (const MethodInfo* method);
void App_MapCamera__Instant (UnityEngine_Camera_o* camera, const MethodInfo* method);
void App_MapCamera__EffectShake (float time, float magnitude, const MethodInfo* method);
void App_MapCamera__ActionShake (float time, float magnitude, const MethodInfo* method);
bool App_MapCamera__CheckScrollStrictly (const MethodInfo* method);
bool App_MapCamera__CheckScrollLoosely (const MethodInfo* method);
int32_t App_MapCamera__get_Version (App_MapCamera_o* __this, const MethodInfo* method);
void App_MapCamera__OnSerialize (App_MapCamera_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapCamera__OnDeserialize (App_MapCamera_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
void App_MapCamera__OnTick (App_MapCamera_o* __this, const MethodInfo* method);
void App_MapCamera__OnUpdate (App_MapCamera_o* __this, const MethodInfo* method);
void App_MapCamera__Commit (App_MapCamera_o* __this, UnityEngine_Camera_o* camera, const MethodInfo* method);
float App_MapCamera__GetParamTime (App_MapCamera_o* __this, System_String_o* name, const MethodInfo* method);
void App_MapCamera__SetPositionImpl (App_MapCamera_o* __this, UnityEngine_Vector3_o pos, float speed, const MethodInfo* method);
void App_MapCamera__SetRotationImpl (App_MapCamera_o* __this, UnityEngine_Vector3_o rot, const MethodInfo* method);
void App_MapCamera__SetDistanceImpl (App_MapCamera_o* __this, float distance, const MethodInfo* method);
void App_MapCamera__InstantImpl (App_MapCamera_o* __this, UnityEngine_Camera_o* camera, const MethodInfo* method);
void App_MapCamera___ctor (App_MapCamera_o* __this, const MethodInfo* method);
