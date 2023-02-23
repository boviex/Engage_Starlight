#pragma once

#include "il2cpp.h"

float App_HubAccessoryRoomCamera__get_MinDist (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
float App_HubAccessoryRoomCamera__get_MaxDist (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
float App_HubAccessoryRoomCamera__get_MinFoV (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
float App_HubAccessoryRoomCamera__get_MaxFoV (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera__Awake (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera__LateUpdate (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
Combat_Character_o* App_HubAccessoryRoomCamera__get_Character (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera__set_Character (App_HubAccessoryRoomCamera_o* __this, Combat_Character_o* value, const MethodInfo* method);
System_String_o* App_HubAccessoryRoomCamera__get_PID (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera__set_PID (App_HubAccessoryRoomCamera_o* __this, System_String_o* value, const MethodInfo* method);
void App_HubAccessoryRoomCamera__SetCharacter (App_HubAccessoryRoomCamera_o* __this, Combat_Character_o* chr, System_String_o* pid, const MethodInfo* method);
System_Nullable_AccessoryData_Kinds__o App_HubAccessoryRoomCamera__get_Target (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera__set_Target (App_HubAccessoryRoomCamera_o* __this, System_Nullable_AccessoryData_Kinds__o value, const MethodInfo* method);
int32_t App_HubAccessoryRoomCamera__get_ViewMode (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera__set_ViewMode (App_HubAccessoryRoomCamera_o* __this, int32_t value, const MethodInfo* method);
bool App_HubAccessoryRoomCamera__get_IsAccs (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera__set_IsAccs (App_HubAccessoryRoomCamera_o* __this, bool value, const MethodInfo* method);
bool App_HubAccessoryRoomCamera__get_IsCharacterChanged (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera__set_IsCharacterChanged (App_HubAccessoryRoomCamera_o* __this, bool value, const MethodInfo* method);
bool App_HubAccessoryRoomCamera__get_IsTargetChanged (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera__set_IsTargetChanged (App_HubAccessoryRoomCamera_o* __this, bool value, const MethodInfo* method);
bool App_HubAccessoryRoomCamera__get_IsPreviewChanged (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera__set_IsPreviewChanged (App_HubAccessoryRoomCamera_o* __this, bool value, const MethodInfo* method);
float App_HubAccessoryRoomCamera__get_CameraTilt (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera__set_CameraTilt (App_HubAccessoryRoomCamera_o* __this, float value, const MethodInfo* method);
float App_HubAccessoryRoomCamera__get_SlipSlide (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera__set_SlipSlide (App_HubAccessoryRoomCamera_o* __this, float value, const MethodInfo* method);
bool App_HubAccessoryRoomCamera__get_IsLookCam (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera__set_IsLookCam (App_HubAccessoryRoomCamera_o* __this, bool value, const MethodInfo* method);
UnityEngine_Vector3_o App_HubAccessoryRoomCamera__get_TargetPosNearest (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o App_HubAccessoryRoomCamera__get_TargetPosFarthest (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera__InitPos (App_HubAccessoryRoomCamera_o* __this, bool force, const MethodInfo* method);
void App_HubAccessoryRoomCamera__UpdateBack (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera__LoadInput (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
System_ValueTuple_float__float__o App_HubAccessoryRoomCamera__get_StickInput (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera__UpdateCameraPos (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera__SetCameraPos (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
void App_HubAccessoryRoomCamera___ctor (App_HubAccessoryRoomCamera_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o App_HubAccessoryRoomCamera___get_TargetPosNearest_g__TryGet_106_0 (App_HubAccessoryRoomCamera_o* __this, Combat_Character_o* chara, int32_t jointId, float fixer, const MethodInfo* method);
UnityEngine_Vector3_o App_HubAccessoryRoomCamera___get_TargetPosFarthest_g__TryGet_109_0 (App_HubAccessoryRoomCamera_o* __this, UnityEngine_Transform_o* t, float fixer, const MethodInfo* method);
void App_HubAccessoryRoomCamera___UpdateBack_b__113_0 (App_HubAccessoryRoomCamera_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
