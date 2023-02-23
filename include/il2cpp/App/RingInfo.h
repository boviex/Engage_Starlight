#pragma once

#include "il2cpp.h"

App_GodUnit_o* App_RingInfo__get_God (const MethodInfo* method);
void App_RingInfo__set_God (App_GodUnit_o* value, const MethodInfo* method);
App_GodData_o* App_RingInfo__get_GodData (const MethodInfo* method);
void App_RingInfo__set_GodData (App_GodData_o* value, const MethodInfo* method);
App_RingData_o* App_RingInfo__get_Ring (const MethodInfo* method);
void App_RingInfo__set_Ring (App_RingData_o* value, const MethodInfo* method);
App_RingData_o* App_RingInfo__get_Ring2 (const MethodInfo* method);
void App_RingInfo__set_Ring2 (App_RingData_o* value, const MethodInfo* method);
int32_t App_RingInfo__get_s_LoadStartCount (const MethodInfo* method);
void App_RingInfo__set_s_LoadStartCount (int32_t value, const MethodInfo* method);
bool App_RingInfo__get_s_IsLoadStart (const MethodInfo* method);
void App_RingInfo__set_s_IsLoadStart (bool value, const MethodInfo* method);
void App_RingInfo__CreateAsync (App_ProcInst_o* super, const MethodInfo* method);
void App_RingInfo__SetVisible (bool value, int32_t index, bool isVisibleDirty, const MethodInfo* method);
void App_RingInfo__PrepareRingModel (App_RingInfo_o* __this, const MethodInfo* method);
bool App_RingInfo__IsCreating (App_RingInfo_o* __this, const MethodInfo* method);
void App_RingInfo__Start (App_RingInfo_o* __this, const MethodInfo* method);
void App_RingInfo__Tick (App_RingInfo_o* __this, const MethodInfo* method);
void App_RingInfo__OnDispose (App_RingInfo_o* __this, const MethodInfo* method);
void App_RingInfo__SetRing (App_GodUnit_o* godUnit, const MethodInfo* method);
void App_RingInfo__SetRingCommon (App_RingData_o* data, App_RingData_o* data2, bool isPlayAnimation, const MethodInfo* method);
void App_RingInfo__ResetCounter (const MethodInfo* method);
void App_RingInfo__UpdateDirty (const MethodInfo* method);
void App_RingInfo__SetRingImpl (App_RingInfo_o* __this, App_GodUnit_o* godUnit, App_RingData_o* ringData, bool isPlayAnimation, int32_t index, const MethodInfo* method);
void App_RingInfo__DeleteRingModels (App_RingInfo_o* __this, const MethodInfo* method);
UnityEngine_RenderTexture_o* App_RingInfo__GetRenderTexture (int32_t index, const MethodInfo* method);
void App_RingInfo__PlayDecisionAnim (const MethodInfo* method);
void App_RingInfo__SetAnimatorEnable (bool value, const MethodInfo* method);
void App_RingInfo___ctor (App_RingInfo_o* __this, const MethodInfo* method);
void App_RingInfo___cctor (const MethodInfo* method);
