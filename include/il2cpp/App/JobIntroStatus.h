#pragma once

#include "il2cpp.h"

float App_JobIntroStatus__get_ReadyTime1 (const MethodInfo* method);
void App_JobIntroStatus__set_ReadyTime1 (float value, const MethodInfo* method);
float App_JobIntroStatus__get_ReadyTime2 (const MethodInfo* method);
void App_JobIntroStatus__set_ReadyTime2 (float value, const MethodInfo* method);
void App_JobIntroStatus__CreateAsync (App_ProcInst_o* super, const MethodInfo* method);
void App_JobIntroStatus__CreateImpl (App_ProcInst_o* super, App_JobIntroStatus_o* p, const MethodInfo* method);
App_ProcDesc_array* App_JobIntroStatus__CreateDescs (App_JobIntroStatus_o* p, const MethodInfo* method);
void App_JobIntroStatus__CreateAsync (App_JobIntroStatus_o* __this, const MethodInfo* method);
bool App_JobIntroStatus__IsCreating (App_JobIntroStatus_o* __this, const MethodInfo* method);
void App_JobIntroStatus__Tick (App_JobIntroStatus_o* __this, const MethodInfo* method);
void App_JobIntroStatus__StartJobIntro (App_Unit_o* unit, const MethodInfo* method);
void App_JobIntroStatus__StartJobIntroImpl (App_JobIntroStatus_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_JobIntroStatus__Destroy (const MethodInfo* method);
void App_JobIntroStatus___ctor (App_JobIntroStatus_o* __this, const MethodInfo* method);
