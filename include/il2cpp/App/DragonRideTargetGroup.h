#pragma once

#include "il2cpp.h"

bool App_DragonRideTargetGroup__get_IsSearchGroup (App_DragonRideTargetGroup_o* __this, const MethodInfo* method);
void App_DragonRideTargetGroup__set_IsSearchGroup (App_DragonRideTargetGroup_o* __this, bool value, const MethodInfo* method);
bool App_DragonRideTargetGroup__get_IsExecuteChain (App_DragonRideTargetGroup_o* __this, const MethodInfo* method);
void App_DragonRideTargetGroup__set_IsExecuteChain (App_DragonRideTargetGroup_o* __this, bool value, const MethodInfo* method);
bool App_DragonRideTargetGroup__get_IsEventMode (App_DragonRideTargetGroup_o* __this, const MethodInfo* method);
void App_DragonRideTargetGroup__set_IsEventMode (App_DragonRideTargetGroup_o* __this, bool value, const MethodInfo* method);
bool App_DragonRideTargetGroup__get_IsVisible (App_DragonRideTargetGroup_o* __this, const MethodInfo* method);
void App_DragonRideTargetGroup__set_IsVisible (App_DragonRideTargetGroup_o* __this, bool value, const MethodInfo* method);
void App_DragonRideTargetGroup__Start (App_DragonRideTargetGroup_o* __this, const MethodInfo* method);
void App_DragonRideTargetGroup__Update (App_DragonRideTargetGroup_o* __this, const MethodInfo* method);
void App_DragonRideTargetGroup__Initialize (App_DragonRideTargetGroup_o* __this, App_DragonRideCamera_o** cameraScript, System_String_o* id, System_String_o* courseId, System_String_o* groupName, System_String_o* locatorName, int32_t type, System_Int32_array* setMap, const MethodInfo* method);
void App_DragonRideTargetGroup__PostUpdate (App_DragonRideTargetGroup_o* __this, const MethodInfo* method);
void App_DragonRideTargetGroup__SetEventMode (App_DragonRideTargetGroup_o* __this, bool flag, const MethodInfo* method);
void App_DragonRideTargetGroup__Show (App_DragonRideTargetGroup_o* __this, const MethodInfo* method);
void App_DragonRideTargetGroup__Hide (App_DragonRideTargetGroup_o* __this, const MethodInfo* method);
void App_DragonRideTargetGroup__Destroy (App_DragonRideTargetGroup_o* __this, const MethodInfo* method);
App_DragonRideTarget_o* App_DragonRideTargetGroup__GetChildScript (App_DragonRideTargetGroup_o* __this, int32_t h, int32_t w, const MethodInfo* method);
void App_DragonRideTargetGroup__ExecuteChild (App_DragonRideTargetGroup_o* __this, int32_t h, int32_t w, int32_t flag, System_String_o* rootID, const MethodInfo* method);
bool App_DragonRideTargetGroup__CheckStartChain (App_DragonRideTargetGroup_o* __this, const MethodInfo* method);
void App_DragonRideTargetGroup__UpdateChain (App_DragonRideTargetGroup_o* __this, const MethodInfo* method);
void App_DragonRideTargetGroup__SetChainExecute (App_DragonRideTargetGroup_o* __this, const MethodInfo* method);
float App_DragonRideTargetGroup__GetNearestTarget (App_DragonRideTargetGroup_o* __this, UnityEngine_Vector3_o* returnPos, UnityEngine_Vector3_o cameraPos, UnityEngine_Vector3_o cameraForward, float enableRate, const MethodInfo* method);
void App_DragonRideTargetGroup__DestroyBombTarget (App_DragonRideTargetGroup_o* __this, UnityEngine_Vector3_o cameraPos, UnityEngine_Vector3_o cameraForward, float enableRate, const MethodInfo* method);
void App_DragonRideTargetGroup__DestroySpecialTarget (App_DragonRideTargetGroup_o* __this, UnityEngine_Vector3_o cameraPos, UnityEngine_Vector3_o cameraForward, float enableRate, const MethodInfo* method);
void App_DragonRideTargetGroup__ExecuteSelectTypeTarget (App_DragonRideTargetGroup_o* __this, UnityEngine_Vector3_o cameraPos, UnityEngine_Vector3_o cameraForward, float enableRate, int32_t select, const MethodInfo* method);
bool App_DragonRideTargetGroup__CheckEnableBombTarget (App_DragonRideTargetGroup_o* __this, UnityEngine_Vector3_o cameraPos, UnityEngine_Vector3_o cameraForward, float enableRate, const MethodInfo* method);
bool App_DragonRideTargetGroup__CheckEnableSpecialTarget (App_DragonRideTargetGroup_o* __this, UnityEngine_Vector3_o cameraPos, UnityEngine_Vector3_o cameraForward, float enableRate, const MethodInfo* method);
bool App_DragonRideTargetGroup__CheckEnableSelectTypeTarget (App_DragonRideTargetGroup_o* __this, UnityEngine_Vector3_o cameraPos, UnityEngine_Vector3_o cameraForward, float enableRate, int32_t select, const MethodInfo* method);
void App_DragonRideTargetGroup__SetEnableSelectTypeTargetList (App_DragonRideTargetGroup_o* __this, UnityEngine_Vector3_o cameraPos, UnityEngine_Vector3_o cameraForward, float enableRate, int32_t select, System_Collections_Generic_List_Vector3__o** refList, const MethodInfo* method);
void App_DragonRideTargetGroup___ctor (App_DragonRideTargetGroup_o* __this, const MethodInfo* method);
void App_DragonRideTargetGroup___UpdateChain_g__TryAddChainCheckList_42_0 (App_DragonRideTargetGroup_o* __this, App_DragonRideTarget_o** targetRef, const MethodInfo* method);
