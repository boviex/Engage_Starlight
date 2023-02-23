#pragma once

#include "il2cpp.h"

App_UnitActor_o* App_GmapPlayerUnit__get_Actor (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
int32_t App_GmapPlayerUnit__get_PlayerModelType (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
void App_GmapPlayerUnit__set_PlayerModelType (App_GmapPlayerUnit_o* __this, int32_t value, const MethodInfo* method);
void App_GmapPlayerUnit__OnCreate (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
void App_GmapPlayerUnit__OnTick (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
void App_GmapPlayerUnit__UpdateRotation (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
void App_GmapPlayerUnit__CommitRotation (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o App_GmapPlayerUnit__get_Position (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
void App_GmapPlayerUnit__set_Position (App_GmapPlayerUnit_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Vector3_o App_GmapPlayerUnit__get_Up (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
void App_GmapPlayerUnit__set_Up (App_GmapPlayerUnit_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
void App_GmapPlayerUnit__set_Rotation (App_GmapPlayerUnit_o* __this, UnityEngine_Quaternion_o value, const MethodInfo* method);
void App_GmapPlayerUnit__SetDirection (App_GmapPlayerUnit_o* __this, UnityEngine_Vector3_o dir, UnityEngine_Vector3_o up, const MethodInfo* method);
void App_GmapPlayerUnit__SetRotate (App_GmapPlayerUnit_o* __this, float angle, const MethodInfo* method);
void App_GmapPlayerUnit__SetRotateImmidiate (App_GmapPlayerUnit_o* __this, float angle, const MethodInfo* method);
float App_GmapPlayerUnit__GetAngleLength (float current, float target, const MethodInfo* method);
void App_GmapPlayerUnit__SetUnitFromUnitPool (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
void App_GmapPlayerUnit__LoadActor (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
bool App_GmapPlayerUnit__IsLoading (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
void App_GmapPlayerUnit__UnloadUnit (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
void App_GmapPlayerUnit__Setup (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
void App_GmapPlayerUnit__SetupModelType (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
void App_GmapPlayerUnit__ChangeModelType (App_GmapPlayerUnit_o* __this, int32_t modelType, const MethodInfo* method);
void App_GmapPlayerUnit__StopRun (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
void App_GmapPlayerUnit__Hide (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
void App_GmapPlayerUnit__Show (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
void App_GmapPlayerUnit__SetMapTransparent (App_GmapPlayerUnit_o* __this, bool active, const MethodInfo* method);
bool App_GmapPlayerUnit__IsOnGround (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
void App_GmapPlayerUnit__PlayTeleportOut (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
void App_GmapPlayerUnit__PlayTeleportIn (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
void App_GmapPlayerUnit___ctor (App_GmapPlayerUnit_o* __this, const MethodInfo* method);
