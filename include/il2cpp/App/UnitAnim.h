#pragma once

#include "il2cpp.h"

void App_UnitAnim__Initialize (const MethodInfo* method);
float App_UnitAnim__GetTime (int32_t time, const MethodInfo* method);
float App_UnitAnim__GetTime (int32_t time, UnityEngine_Animator_o* animator, const MethodInfo* method);
bool App_UnitAnim__IsLoop (int32_t type, const MethodInfo* method);
bool App_UnitAnim__IsExitToIdle (int32_t type, const MethodInfo* method);
int32_t App_UnitAnim__GetPriority (int32_t type, const MethodInfo* method);
bool App_UnitAnim__HasState (UnityEngine_Animator_o* animator, System_String_o* name, const MethodInfo* method);
void App_UnitAnim__Play (UnityEngine_Animator_o* animator, System_String_o* name, int32_t transitionDuration, const MethodInfo* method);
void App_UnitAnim__Play (UnityEngine_Animator_o* animator, int32_t type, int32_t kind, int32_t transitionDuration, const MethodInfo* method);
void App_UnitAnim__Play (UnityEngine_Animator_array* animators, int32_t type, int32_t kind, int32_t transitionDuration, const MethodInfo* method);
UnityEngine_AnimatorClipInfo_o App_UnitAnim__GetCurrentClipInfo (UnityEngine_Animator_o* animator, const MethodInfo* method);
UnityEngine_AnimatorStateInfo_o App_UnitAnim__GetCurrentStateInfo (UnityEngine_Animator_o* animator, const MethodInfo* method);
bool App_UnitAnim__IsFinished (UnityEngine_Animator_o* animator, int32_t restTime, const MethodInfo* method);
bool App_UnitAnim__IsFinished (UnityEngine_Animator_array* animators, int32_t restTime, const MethodInfo* method);
void App_UnitAnim__SetSpeed (UnityEngine_Animator_array* animators, float speed, const MethodInfo* method);
void App_UnitAnim___ctor (App_UnitAnim_o* __this, const MethodInfo* method);
void App_UnitAnim___cctor (const MethodInfo* method);
