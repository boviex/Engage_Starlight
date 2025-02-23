#pragma once

#include "il2cpp.h"

UnityEngine_Transform_o* Combat_Kaneko__FindInChildren (UnityEngine_Transform_o* self, System_String_o* name, const MethodInfo* method);
UnityEngine_Transform_o* Combat_Kaneko__FindWordInChildren (UnityEngine_Transform_o* self, System_String_o* keyword, const MethodInfo* method);
void Combat_Kaneko__SetPositionAndForward (UnityEngine_Transform_o* t, UnityEngine_Vector3_o position, UnityEngine_Vector3_o forward, const MethodInfo* method);
UnityEngine_Transform_o* Combat_Kaneko__Ancestor (UnityEngine_Transform_o* t, const MethodInfo* method);
void Combat_Kaneko__Startup (const MethodInfo* method);
void Combat_Kaneko__Shutdown (const MethodInfo* method);
void Combat_Kaneko__Destroy (UnityEngine_Object_o* obj, const MethodInfo* method);
void Combat_Kaneko__DestroyComponent (UnityEngine_Component_o* obj, const MethodInfo* method);
bool Combat_Kaneko__IsDestroyed (UnityEngine_Object_o* obj, const MethodInfo* method);
Il2CppObject* Combat_Kaneko__SelectOne_object_ (System_Object_array* args, const MethodInfo_299A020* method);
System_String_o* Combat_Kaneko__SelectOne_string_ (System_String_array* args, const MethodInfo_299A020* method);
Il2CppObject* Combat_Kaneko__SelectOne_object_ (App_Random_o* rand, System_Object_array* args, const MethodInfo_299A070* method);
Combat_PrefetchedSignal_o* Combat_Kaneko__SelectOne_PrefetchedSignal_ (App_Random_o* rand, Combat_PrefetchedSignal_array* args, const MethodInfo_299A070* method);
Il2CppObject* Combat_Kaneko__SelectAnotherOne_object_ (Il2CppObject* last, System_Object_array* args, const MethodInfo_2999CA0* method);
System_String_o* Combat_Kaneko__SelectOne (System_String_o* arg, const MethodInfo* method);
System_String_o* Combat_Kaneko__InBetween (System_String_o* s, uint16_t lc, uint16_t rc, const MethodInfo* method);
void Combat_Kaneko__ShuffleSelf_int_ (System_Int32_array* array, const MethodInfo_299A0C0* method);
void Combat_Kaneko__ShuffleSelf_object_ (System_Object_array* array, const MethodInfo_299A240* method);
void Combat_Kaneko__ShuffleSelf_object_ (System_Collections_Generic_List_T__o* list, const MethodInfo_299A160* method);
System_Collections_Generic_List_string__o* Combat_Kaneko__LineToList (System_String_o* line, const MethodInfo* method);
System_String_o* Combat_Kaneko__ListToLine (System_Collections_Generic_List_string__o* list, const MethodInfo* method);
void Combat_Kaneko__EachChildren (UnityEngine_Transform_o* self, System_Func_Transform__bool__o* callback, const MethodInfo* method);
float Combat_Kaneko__Hermite (float v0, float t0, float v1, float t1, float s, const MethodInfo* method);
UnityEngine_Vector3_o Combat_Kaneko__Hermite (UnityEngine_Vector3_o* v0, UnityEngine_Vector3_o* t0, UnityEngine_Vector3_o* v1, UnityEngine_Vector3_o* t1, float s, const MethodInfo* method);
UnityEngine_Vector3_o Combat_Kaneko__Lerp (UnityEngine_Vector3_o* v0, UnityEngine_Vector3_o* t0, UnityEngine_Vector3_o* v1, UnityEngine_Vector3_o* t1, float s, const MethodInfo* method);
UnityEngine_Vector3_o Combat_Kaneko__CatmullRom (UnityEngine_Vector3_o* p0, UnityEngine_Vector3_o* p1, UnityEngine_Vector3_o* p2, UnityEngine_Vector3_o* p3, float s, const MethodInfo* method);
float Combat_Kaneko__Sigmoid (float x, float a, const MethodInfo* method);
UnityEngine_Quaternion_o Combat_Kaneko__QuaternionFromNormal (UnityEngine_Vector3_o* Yaxis, const MethodInfo* method);
UniRx_Subject_T__o* Combat_Kaneko__CompleteDispose_ValueTuple_Character__GameObject__ (UniRx_Subject_T__o* subject, const MethodInfo_29998B0* method);
UniRx_Subject_T__o* Combat_Kaneko__CompleteDispose_ValueTuple_object__object__ (UniRx_Subject_T__o* subject, const MethodInfo_29998B0* method);
UniRx_Subject_T__o* Combat_Kaneko__CompleteDispose_ValueTuple_float__int__ (UniRx_Subject_T__o* subject, const MethodInfo_29998E0* method);
UniRx_Subject_T__o* Combat_Kaneko__CompleteDispose_ValueTuple_float__Int32Enum__ (UniRx_Subject_T__o* subject, const MethodInfo_2999910* method);
UniRx_Subject_T__o* Combat_Kaneko__CompleteDispose_ValueTuple_float__WeaponStyle__ (UniRx_Subject_T__o* subject, const MethodInfo_2999910* method);
UniRx_Subject_T__o* Combat_Kaneko__CompleteDispose_AnimationEvent_ (UniRx_Subject_T__o* subject, const MethodInfo_2999970* method);
UniRx_Subject_T__o* Combat_Kaneko__CompleteDispose_Character_ (UniRx_Subject_T__o* subject, const MethodInfo_2999970* method);
UniRx_Subject_T__o* Combat_Kaneko__CompleteDispose_int_ (UniRx_Subject_T__o* subject, const MethodInfo_2999940* method);
UniRx_Subject_T__o* Combat_Kaneko__CompleteDispose_object_ (UniRx_Subject_T__o* subject, const MethodInfo_2999970* method);
UniRx_Subject_T__o* Combat_Kaneko__CompleteDispose_Phase_ (UniRx_Subject_T__o* subject, const MethodInfo_2999970* method);
UniRx_Subject_T__o* Combat_Kaneko__CompleteDispose_PhaseArray_ (UniRx_Subject_T__o* subject, const MethodInfo_2999970* method);
UniRx_Subject_T__o* Combat_Kaneko__CompleteDispose_Unit_ (UniRx_Subject_T__o* subject, const MethodInfo_29999A0* method);
System_IDisposable_o* Combat_Kaneko__DoLater (float delayTime, System_Action_o* func, const MethodInfo* method);
System_IDisposable_o* Combat_Kaneko__DoLaterInRealtime (float delayTime, System_Action_o* func, const MethodInfo* method);
System_IDisposable_o* Combat_Kaneko__DoAt (float worldTime, System_Action_o* func, const MethodInfo* method);
System_IDisposable_o* Combat_Kaneko__DoOnceOnLateUpdate (Combat_Character_o* CP, System_Action_o* func, const MethodInfo* method);
System_IDisposable_o* Combat_Kaneko__Coroutine (System_Func_IEnumerator__o* func, const MethodInfo* method);
float Combat_Kaneko__fixedTime (UnityEngine_AnimatorStateInfo_o stateInfo, const MethodInfo* method);
float Combat_Kaneko__fixedLength (UnityEngine_AnimatorStateInfo_o stateInfo, const MethodInfo* method);
float Combat_Kaneko__timeLength (UnityEngine_AnimationCurve_o* c, const MethodInfo* method);
bool Combat_Kaneko__IsNull (System_String_o* s, const MethodInfo* method);
bool Combat_Kaneko__IsNotNull (System_String_o* s, const MethodInfo* method);
bool Combat_Kaneko__IsNull_MagicSignal_ (System_Collections_Generic_IReadOnlyCollection_T__o* c, const MethodInfo_2999C00* method);
bool Combat_Kaneko__IsNull_object_ (System_Collections_Generic_IReadOnlyCollection_T__o* c, const MethodInfo_2999C00* method);
bool Combat_Kaneko__IsNull_string_ (System_Collections_Generic_IReadOnlyCollection_T__o* c, const MethodInfo_2999C00* method);
bool Combat_Kaneko__IsNotNull_object_ (System_Collections_Generic_IReadOnlyCollection_T__o* l, const MethodInfo_2999B70* method);
bool Combat_Kaneko__IsNotNull_string_ (System_Collections_Generic_IReadOnlyCollection_T__o* l, const MethodInfo_2999B70* method);
System_String_o* Combat_Kaneko__GetOnlyOne (System_Collections_Generic_List_string__o* l, const MethodInfo* method);
bool Combat_Kaneko__IsZero (UnityEngine_Vector3_o* v, const MethodInfo* method);
bool Combat_Kaneko__IsNotZero (UnityEngine_Vector3_o* v, const MethodInfo* method);
void Combat_Kaneko__CallEditorStaticFunction (System_String_o* className, System_String_o* funcName, System_Object_array* args, const MethodInfo* method);
UnityEngine_MeshFilter_o* Combat_Kaneko__GetOrAddComponent_MeshFilter_ (UnityEngine_Component_o* t, const MethodInfo_29999D0* method);
UnityEngine_MeshRenderer_o* Combat_Kaneko__GetOrAddComponent_MeshRenderer_ (UnityEngine_Component_o* t, const MethodInfo_29999D0* method);
Il2CppObject* Combat_Kaneko__GetOrAddComponent_object_ (UnityEngine_Component_o* t, const MethodInfo_29999D0* method);
UnityEngine_RectTransform_o* Combat_Kaneko__GetOrAddComponent_RectTransform_ (UnityEngine_Component_o* t, const MethodInfo_29999D0* method);
Combat_MagicFlying_o* Combat_Kaneko__GetOrAddComponent_MagicFlying_ (UnityEngine_GameObject_o* t, const MethodInfo_2999AA0* method);
Il2CppObject* Combat_Kaneko__GetOrAddComponent_object_ (UnityEngine_GameObject_o* t, const MethodInfo_2999AA0* method);
int32_t Combat_Kaneko__GetManhattanDistance (int32_t x0, int32_t y0, int32_t x1, int32_t y1, const MethodInfo* method);
void Combat_Kaneko__SetSpeed (SimpleAnimation_o* ani, float speed, const MethodInfo* method);
float Combat_Kaneko__GetFixedTime (SimpleAnimation_o* ani, const MethodInfo* method);
float Combat_Kaneko__GetNormalizedTime (SimpleAnimation_o* ani, const MethodInfo* method);
float Combat_Kaneko__GetLength (SimpleAnimation_o* ani, const MethodInfo* method);
float Combat_Kaneko__RoundupTime (float time, const MethodInfo* method);
float Combat_Kaneko__RounddownTime (float time, const MethodInfo* method);
System_IDisposable_o* Combat_Kaneko__EveryUpdateWhileTrue (System_Func_bool__o* func, const MethodInfo* method);
System_IDisposable_o* Combat_Kaneko__ManualTween (Combat_Character_o* chr, float duration, System_Func_float__bool__o* onTick, System_Action_o* onFinish, const MethodInfo* method);
System_IDisposable_o* Combat_Kaneko__DoLater (Combat_Character_o* chr, float delayTime, System_Action_o* func, const MethodInfo* method);
void Combat_Kaneko__Assert (bool exp, System_String_o* msg, System_String_o* filename, int32_t line, System_String_o* funcname, const MethodInfo* method);
void Combat_Kaneko__Assert (System_String_o* msg, System_String_o* filename, int32_t line, System_String_o* funcname, const MethodInfo* method);
UnityEngine_Vector3_o Combat_Kaneko__LimitGroundNormal (UnityEngine_Vector3_o nrm, const MethodInfo* method);
void Combat_Kaneko__GUIFitToScreen (const MethodInfo* method);
void Combat_Kaneko__GUIReset (const MethodInfo* method);
float Combat_Kaneko__GetFov (UnityEngine_Component_o* cam, const MethodInfo* method);
void Combat_Kaneko___cctor (const MethodInfo* method);
