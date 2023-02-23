#pragma once

#include "il2cpp.h"

int32_t App_Squat_Note__get_NoteType (App_Squat_Note_o* __this, const MethodInfo* method);
void App_Squat_Note__set_NoteType (App_Squat_Note_o* __this, int32_t value, const MethodInfo* method);
bool App_Squat_Note__get_IsFinish (App_Squat_Note_o* __this, const MethodInfo* method);
void App_Squat_Note__set_IsFinish (App_Squat_Note_o* __this, bool value, const MethodInfo* method);
bool App_Squat_Note__get_IsTrigger (App_Squat_Note_o* __this, const MethodInfo* method);
void App_Squat_Note__set_IsTrigger (App_Squat_Note_o* __this, bool value, const MethodInfo* method);
bool App_Squat_Note__get_IsAccepted (App_Squat_Note_o* __this, const MethodInfo* method);
void App_Squat_Note__set_IsAccepted (App_Squat_Note_o* __this, bool value, const MethodInfo* method);
bool App_Squat_Note__get_IsClockwiseCheck (App_Squat_Note_o* __this, const MethodInfo* method);
void App_Squat_Note__set_IsClockwiseCheck (App_Squat_Note_o* __this, bool value, const MethodInfo* method);
int32_t App_Squat_Note__get_Result (App_Squat_Note_o* __this, const MethodInfo* method);
void App_Squat_Note__set_Result (App_Squat_Note_o* __this, int32_t value, const MethodInfo* method);
UnityEngine_Vector3_o App_Squat_Note__get_RectPos (App_Squat_Note_o* __this, const MethodInfo* method);
void App_Squat_Note___ctor (App_Squat_Note_o* __this, const MethodInfo* method);
void App_Squat_Note__SetJudgeParam (App_Squat_Note_o* __this, App_MuscleSquatJudgeAreaData_o* setJudge, const MethodInfo* method);
void App_Squat_Note__CreateArrow (App_Squat_Note_o* __this, bool isRight, UnityEngine_GameObject_o** canvas, int32_t setType, float setTime, float moveHeightPF, UnityEngine_Transform_o* baseTrans, float firstTimeMult, const MethodInfo* method);
void App_Squat_Note__CreateClockWise (App_Squat_Note_o* __this, bool isRight, UnityEngine_GameObject_o** canvas, int32_t setType, float startTime, float endTime, float moveHeightPF, UnityEngine_Transform_o* baseTrans, float firstTimeMult, int32_t radiusCount, const MethodInfo* method);
void App_Squat_Note__Destroy (App_Squat_Note_o* __this, const MethodInfo* method);
void App_Squat_Note__Tick (App_Squat_Note_o* __this, float timeMult, App_Squat_Stick_o** stick, float heightPF, bool isTop, float setfb, float setfg, float setfp, float setlp, float setlg, float setlb, float overwriteRange, const MethodInfo* method);
void App_Squat_Note__TickArrow (App_Squat_Note_o* __this, bool isTop, float center, float notCheckArea, App_Squat_Stick_o** stick, const MethodInfo* method);
void App_Squat_Note__TickArrowJudge (App_Squat_Note_o* __this, float center, float notCheckArea, App_Squat_Stick_o** stick, const MethodInfo* method);
void App_Squat_Note__TickClockwise (App_Squat_Note_o* __this, bool isTop, App_Squat_Stick_o** stick, float overwriteRange, const MethodInfo* method);
void App_Squat_Note__TickClockwiseJudge (App_Squat_Note_o* __this, App_Squat_Stick_o** stick, const MethodInfo* method);
