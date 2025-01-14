#pragma once

#include "il2cpp.h"

App_MapMaterial_o* App_MapObject__get_MapMaterial (App_MapObject_o* __this, const MethodInfo* method);
void App_MapObject__Awake (App_MapObject_o* __this, const MethodInfo* method);
int32_t App_MapObject__GetStartAction (App_MapObject_o* __this, const MethodInfo* method);
int32_t App_MapObject__GetStartState (App_MapObject_o* __this, const MethodInfo* method);
bool App_MapObject__GetStartBreak (App_MapObject_o* __this, const MethodInfo* method);
bool App_MapObject__CanDitherAlpha (App_MapObject_o* __this, const MethodInfo* method);
void App_MapObject__Start (App_MapObject_o* __this, const MethodInfo* method);
App_TerrainData_o* App_MapObject__GetTerrain (App_MapObject_o* __this, const MethodInfo* method);
void App_MapObject__PlaySound (App_MapObject_o* __this, System_String_o* label, const MethodInfo* method);
int32_t App_MapObject__GetState (App_MapObject_o* __this, const MethodInfo* method);
int32_t App_MapObject__GetAction (App_MapObject_o* __this, const MethodInfo* method);
void App_MapObject__PlayEffect (App_MapObject_o* __this, UnityEngine_GameObject_o* original, const MethodInfo* method);
int32_t App_MapObject__GetReverseValue (int32_t kind, const MethodInfo* method);
int32_t App_MapObject__GetActionValue (int32_t action, const MethodInfo* method);
void App_MapObject__SetAction (App_MapObject_o* __this, int32_t action, bool update, const MethodInfo* method);
void App_MapObject__PlayActionAlpha (App_MapObject_o* __this, float alpha, const MethodInfo* method);
void App_MapObject__SetActionAlpha (App_MapObject_o* __this, float alpha, const MethodInfo* method);
bool App_MapObject__AddElapsed (App_MapObject_o* __this, float* elapsed, float time, const MethodInfo* method);
System_Collections_IEnumerator_o* App_MapObject__ActionAlphaCoroutine (App_MapObject_o* __this, float alpha, const MethodInfo* method);
void App_MapObject__ChangeAction (App_MapObject_o* __this, int32_t action, bool update, const MethodInfo* method);
bool App_MapObject__IsPlaying (App_MapObject_o* __this, const MethodInfo* method);
float App_MapObject__GetActionAlpha (App_MapObject_o* __this, int32_t action, const MethodInfo* method);
bool App_MapObject__IsSkip (App_MapObject_o* __this, const MethodInfo* method);
bool App_MapObject__IsActionSkip (App_MapObject_o* __this, const MethodInfo* method);
void App_MapObject__PlayAction (App_MapObject_o* __this, int32_t action, const MethodInfo* method);
void App_MapObject__PlayEndurance (App_MapObject_o* __this, float ratio, const MethodInfo* method);
int32_t App_MapObject__GetStateCount (App_MapObject_o* __this, const MethodInfo* method);
App_MapObject_State_o* App_MapObject__GetState (App_MapObject_o* __this, int32_t index, const MethodInfo* method);
void App_MapObject__SetState (App_MapObject_o* __this, int32_t index, bool enable, const MethodInfo* method);
void App_MapObject__ChangeState (App_MapObject_o* __this, int32_t index, const MethodInfo* method);
void App_MapObject__PlayState (App_MapObject_o* __this, int32_t index, const MethodInfo* method);
void App_MapObject__SetRenderAlpha (App_MapObject_o* __this, UnityEngine_Renderer_o* render, float alpha, const MethodInfo* method);
void App_MapObject__SetRendersAlpha (App_MapObject_o* __this, UnityEngine_Renderer_array* renders, float alpha, const MethodInfo* method);
void App_MapObject__CommitAlpha (App_MapObject_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* App_MapObject__GetEffectRoot (App_MapObject_o* __this, const MethodInfo* method);
void App_MapObject__UpdateAction (App_MapObject_o* __this, const MethodInfo* method);
void App_MapObject__ApplyLightmap (App_MapObject_o* __this, const MethodInfo* method);
void App_MapObject__ApplyPreview (App_MapObject_o* __this, const MethodInfo* method);
bool App_MapObject__CanBreakable (App_MapObject_o* __this, const MethodInfo* method);
bool App_MapObject__IsBroken (App_MapObject_o* __this, const MethodInfo* method);
void App_MapObject__SetGameObjectsActive (App_MapObject_o* __this, UnityEngine_GameObject_array* objects, bool enabled, const MethodInfo* method);
void App_MapObject__SetBreak (App_MapObject_o* __this, bool enabled, const MethodInfo* method);
void App_MapObject__PlayBreak (App_MapObject_o* __this, UnityEngine_Vector3_o hit, float pow, const MethodInfo* method);
float App_MapObject__GetDestructoniAlpha (App_MapObject_o* __this, const MethodInfo* method);
void App_MapObject__SetDestructoniAlpha (App_MapObject_o* __this, float alpha, const MethodInfo* method);
System_Collections_IEnumerator_o* App_MapObject__BreakCoroutine (App_MapObject_o* __this, const MethodInfo* method);
void App_MapObject__ResumeBreak (App_MapObject_o* __this, const MethodInfo* method);
void App_MapObject__UpdateView (App_MapObject_o* __this, UnityEngine_Camera_o* camera, float speed, const MethodInfo* method);
bool App_MapObject__TryGetTransform (App_MapObject_o* __this, System_String_o* name, UnityEngine_Transform_o** result, const MethodInfo* method);
UnityEngine_Transform_o* App_MapObject__GetTransform (App_MapObject_o* __this, System_String_o* name, const MethodInfo* method);
UnityEngine_Transform_o* App_MapObject__GetRotateTransform (App_MapObject_o* __this, const MethodInfo* method);
UnityEngine_Quaternion_o App_MapObject__Rotation (App_MapObject_o* __this, const MethodInfo* method);
void App_MapObject__Rotation (App_MapObject_o* __this, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
System_Collections_IEnumerator_o* App_MapObject__RotationCoroutine (App_MapObject_o* __this, UnityEngine_Quaternion_o rotation, float time, const MethodInfo* method);
void App_MapObject__Rotation (App_MapObject_o* __this, UnityEngine_Quaternion_o rotation, float time, const MethodInfo* method);
UnityEngine_Vector3_o App_MapObject__GetLaunchPoint (App_MapObject_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* App_MapObject__GetLaunchTransform (App_MapObject_o* __this, const MethodInfo* method);
bool App_MapObject__IsBmapView (const MethodInfo* method);
UnityEngine_Transform_o* App_MapObject__GetShootTransform (App_MapObject_o* __this, const MethodInfo* method);
void App_MapObject__PlayShootImpl (App_MapObject_o* __this, App_EffectSequence_o* effect, const MethodInfo* method);
void App_MapObject__PlayShoot (App_MapObject_o* __this, App_UnitItem_o* item, const MethodInfo* method);
void App_MapObject__PlayShoot (App_MapObject_o* __this, System_String_o* effect, const MethodInfo* method);
void App_MapObject__StopShoot (App_MapObject_o* __this, const MethodInfo* method);
System_String_o* App_MapObject__get_SerializeKey (App_MapObject_o* __this, const MethodInfo* method);
void App_MapObject__set_SerializeKey (App_MapObject_o* __this, System_String_o* value, const MethodInfo* method);
bool App_MapObject__HasCollider (App_MapObject_o* __this, int32_t layer, const MethodInfo* method);
System_String_o* App_MapObject__CalcSerializeKey (App_MapObject_o* __this, const MethodInfo* method);
UnityEngine_Material_o* App_MapObject__FindMaterial (App_MapObject_o* __this, System_String_o* material, System_String_o* property, const MethodInfo* method);
App_MapMaterial_Node_o* App_MapObject__TryAddMaterialNode (App_MapObject_o* __this, int32_t kind, System_String_o* material, System_String_o* property, const MethodInfo* method);
float App_MapObject__SetMaterialFloat (App_MapObject_o* __this, System_String_o* material, System_String_o* property, float value, const MethodInfo* method);
UnityEngine_Color_o App_MapObject__SetMaterialColor (App_MapObject_o* __this, System_String_o* material, System_String_o* property, UnityEngine_Color_o color, const MethodInfo* method);
void App_MapObject__Serialize (App_MapObject_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapObject__Deserialize (App_MapObject_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapObject___ctor (App_MapObject_o* __this, const MethodInfo* method);
