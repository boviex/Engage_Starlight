#pragma once

#include "il2cpp.h"

int32_t App_JobIntroSequence__get_CurrentGroupIndex (const MethodInfo* method);
void App_JobIntroSequence__set_CurrentGroupIndex (int32_t value, const MethodInfo* method);
void App_JobIntroSequence__ToNextIndex (const MethodInfo* method);
bool App_JobIntroSequence__IsExist (const MethodInfo* method);
void App_JobIntroSequence__CreateBind (App_ProcInst_o* super, const MethodInfo* method);
bool App_JobIntroSequence__get_IsFinished (App_JobIntroSequence_o* __this, const MethodInfo* method);
float App_JobIntroSequence__get_ReadyTime1 (const MethodInfo* method);
float App_JobIntroSequence__get_ReadyTime2 (const MethodInfo* method);
App_JobIntroData_o* App_JobIntroSequence__get_CurrentData (App_JobIntroSequence_o* __this, const MethodInfo* method);
void App_JobIntroSequence__Initialize (App_JobIntroSequence_o* __this, const MethodInfo* method);
void App_JobIntroSequence__BeginMap (App_JobIntroSequence_o* __this, const MethodInfo* method);
void App_JobIntroSequence__Unload (App_JobIntroSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* App_JobIntroSequence__Begin (App_JobIntroSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* App_JobIntroSequence__Tick (App_JobIntroSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* App_JobIntroSequence__Finish (App_JobIntroSequence_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* App_JobIntroSequence__CheckKeyPush (App_JobIntroSequence_o* __this, const MethodInfo* method);
void App_JobIntroSequence__BranchLoop (App_JobIntroSequence_o* __this, const MethodInfo* method);
void App_JobIntroSequence___ctor (App_JobIntroSequence_o* __this, const MethodInfo* method);
