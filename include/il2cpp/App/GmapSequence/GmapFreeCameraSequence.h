#pragma once

#include "il2cpp.h"

void App_GmapSequence_GmapFreeCameraSequence__LoadResorces (const MethodInfo* method);
bool App_GmapSequence_GmapFreeCameraSequence__IsLoading (const MethodInfo* method);
void App_GmapSequence_GmapFreeCameraSequence__UnloadResources (const MethodInfo* method);
void App_GmapSequence_GmapFreeCameraSequence__Init (App_GmapSequence_GmapFreeCameraSequence_o* __this, const MethodInfo* method);
bool App_GmapSequence_GmapFreeCameraSequence__WaitScroll (App_GmapSequence_GmapFreeCameraSequence_o* __this, const MethodInfo* method);
void App_GmapSequence_GmapFreeCameraSequence__Start (App_GmapSequence_GmapFreeCameraSequence_o* __this, const MethodInfo* method);
void App_GmapSequence_GmapFreeCameraSequence__Tick (App_GmapSequence_GmapFreeCameraSequence_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o App_GmapSequence_GmapFreeCameraSequence__TryLRMove (App_GmapSequence_GmapFreeCameraSequence_o* __this, float moveLStickX, const MethodInfo* method);
UnityEngine_Vector3_o App_GmapSequence_GmapFreeCameraSequence__TryUDMove (App_GmapSequence_GmapFreeCameraSequence_o* __this, float moveLStickY, const MethodInfo* method);
UnityEngine_Vector3_o App_GmapSequence_GmapFreeCameraSequence__CalcLeftRightPos (UnityEngine_Vector3_o pos, float angle, const MethodInfo* method);
UnityEngine_Vector3_o App_GmapSequence_GmapFreeCameraSequence__CalcUDPos (UnityEngine_Vector3_o pos, float angle, const MethodInfo* method);
void App_GmapSequence_GmapFreeCameraSequence__InitAngleLimit (App_GmapSequence_GmapFreeCameraSequence_o* __this, App_GmapSequence_GmapFreeCameraSequence_DirFlagField_o* flags, const MethodInfo* method);
float App_GmapSequence_GmapFreeCameraSequence__ClampAngle (App_GmapSequence_GmapFreeCameraSequence_o* __this, float angle, int32_t dir, const MethodInfo* method);
bool App_GmapSequence_GmapFreeCameraSequence__TryGetAngleLimit (App_GmapSequence_GmapFreeCameraSequence_o* __this, int32_t dir, float* value, const MethodInfo* method);
void App_GmapSequence_GmapFreeCameraSequence__SetAngleLimit (App_GmapSequence_GmapFreeCameraSequence_o* __this, App_GmapSequence_GmapFreeCameraSequence_DirFlagField_o* flag, float angle, int32_t dir, const MethodInfo* method);
App_GmapSequence_GmapFreeCameraSequence_DirFlagField_o* App_GmapSequence_GmapFreeCameraSequence__GetRecalcIgnoreFlag (App_GmapSequence_GmapFreeCameraSequence_o* __this, const MethodInfo* method);
void App_GmapSequence_GmapFreeCameraSequence__End (App_GmapSequence_GmapFreeCameraSequence_o* __this, const MethodInfo* method);
void App_GmapSequence_GmapFreeCameraSequence__CreateBind (App_ProcInst_o* super, const MethodInfo* method);
void App_GmapSequence_GmapFreeCameraSequence___ctor (App_GmapSequence_GmapFreeCameraSequence_o* __this, const MethodInfo* method);
