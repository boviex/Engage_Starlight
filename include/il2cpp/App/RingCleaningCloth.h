#pragma once

#include "il2cpp.h"

UnityEngine_RectTransform_o* App_RingCleaningCloth__get_Rect (App_RingCleaningCloth_o* __this, const MethodInfo* method);
bool App_RingCleaningCloth__get_IsHitRing (App_RingCleaningCloth_o* __this, const MethodInfo* method);
void App_RingCleaningCloth__set_IsHitRing (App_RingCleaningCloth_o* __this, bool value, const MethodInfo* method);
UnityEngine_Collider_o* App_RingCleaningCloth__get_HitCollider (App_RingCleaningCloth_o* __this, const MethodInfo* method);
void App_RingCleaningCloth__set_HitCollider (App_RingCleaningCloth_o* __this, UnityEngine_Collider_o* value, const MethodInfo* method);
UnityEngine_Vector3_o App_RingCleaningCloth__get_HitVector (App_RingCleaningCloth_o* __this, const MethodInfo* method);
void App_RingCleaningCloth__set_HitVector (App_RingCleaningCloth_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
bool App_RingCleaningCloth__get_IsPossibleCleaning (App_RingCleaningCloth_o* __this, const MethodInfo* method);
void App_RingCleaningCloth__set_IsPossibleCleaning (App_RingCleaningCloth_o* __this, bool value, const MethodInfo* method);
void App_RingCleaningCloth__Start (App_RingCleaningCloth_o* __this, const MethodInfo* method);
void App_RingCleaningCloth__Update (App_RingCleaningCloth_o* __this, const MethodInfo* method);
void App_RingCleaningCloth__UpdateMove (App_RingCleaningCloth_o* __this, float lsx, float lsy, bool isSpeedUp, UnityEngine_Camera_o* camera, const MethodInfo* method);
void App_RingCleaningCloth__UpdateMoveWithGap (App_RingCleaningCloth_o* __this, const MethodInfo* method);
void App_RingCleaningCloth__Commit (App_RingCleaningCloth_o* __this, const MethodInfo* method);
void App_RingCleaningCloth__ShowHelp (App_RingCleaningCloth_o* __this, const MethodInfo* method);
void App_RingCleaningCloth__HideHelp (App_RingCleaningCloth_o* __this, const MethodInfo* method);
bool App_RingCleaningCloth__IsHitRay (App_RingCleaningCloth_o* __this, UnityEngine_Camera_o* camera, const MethodInfo* method);
bool App_RingCleaningCloth__IsHitRayImpl (App_RingCleaningCloth_o* __this, UnityEngine_Camera_o* camera, UnityEngine_Vector3_o* colliderHitPos, UnityEngine_Collider_o** collider, const MethodInfo* method);
void App_RingCleaningCloth__PlayCleaningAnim (App_RingCleaningCloth_o* __this, int32_t strength, const MethodInfo* method);
void App_RingCleaningCloth__StartCleaningAnim (App_RingCleaningCloth_o* __this, System_String_o* animName, const MethodInfo* method);
void App_RingCleaningCloth__StopCleaningAnim (App_RingCleaningCloth_o* __this, const MethodInfo* method);
bool App_RingCleaningCloth__IsPlayCleaningAnim (App_RingCleaningCloth_o* __this, const MethodInfo* method);
bool App_RingCleaningCloth__IsPlayingCleaningAnim (App_RingCleaningCloth_o* __this, bool useCorrect, const MethodInfo* method);
float App_RingCleaningCloth__GetAnimatorNormalizeTime (App_RingCleaningCloth_o* __this, const MethodInfo* method);
App_RingColliderPart_o* App_RingCleaningCloth__GetHitPart (App_RingCleaningCloth_o* __this, const MethodInfo* method);
void App_RingCleaningCloth__PauseAnim (App_RingCleaningCloth_o* __this, const MethodInfo* method);
void App_RingCleaningCloth__SetGap (App_RingCleaningCloth_o* __this, float x, float y, const MethodInfo* method);
void App_RingCleaningCloth___ctor (App_RingCleaningCloth_o* __this, const MethodInfo* method);
