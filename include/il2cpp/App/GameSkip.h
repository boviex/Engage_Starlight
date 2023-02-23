#pragma once

#include "il2cpp.h"

void App_GameSkip___ctor (App_GameSkip_o* __this, const MethodInfo* method);
int32_t App_GameSkip__CalcSkipInput (App_GameSkip_o* __this, const MethodInfo* method);
bool App_GameSkip__TstStatus (App_GameSkip_o* __this, int32_t status, const MethodInfo* method);
void App_GameSkip__SetStatus (App_GameSkip_o* __this, int32_t status, const MethodInfo* method);
void App_GameSkip__ClearStatus (App_GameSkip_o* __this, int32_t status, const MethodInfo* method);
void App_GameSkip__OnTick (App_GameSkip_o* __this, const MethodInfo* method);
bool App_GameSkip__DebugSkip (const MethodInfo* method);
void App_GameSkip__Trigger (const MethodInfo* method);
void App_GameSkip__Escape (const MethodInfo* method);
void App_GameSkip__Enable (const MethodInfo* method);
void App_GameSkip__Disable (const MethodInfo* method);
void App_GameSkip__EnableShortSkip (const MethodInfo* method);
void App_GameSkip__DisableShortSkip (const MethodInfo* method);
bool App_GameSkip__IsSkip (const MethodInfo* method);
bool App_GameSkip__IsDisable (const MethodInfo* method);
bool App_GameSkip__IsWait (const MethodInfo* method);
bool App_GameSkip__IsBlackOut (const MethodInfo* method);
bool App_GameSkip__IsBlackOrFadeOut (const MethodInfo* method);
bool App_GameSkip__IsFadeIn (const MethodInfo* method);
void App_GameSkip__PushState (const MethodInfo* method);
void App_GameSkip__PopState (const MethodInfo* method);
void App_GameSkip__PushDisableAISkip (const MethodInfo* method);
void App_GameSkip__PopDisableAISkip (const MethodInfo* method);
void App_GameSkip__TriggerAI (const MethodInfo* method);
void App_GameSkip__WaitTime (App_ProcInst_o* super, float time, const MethodInfo* method);
App_ProcDesc_o* App_GameSkip__PWaitTime (float time, const MethodInfo* method);
App_ProcInst_o* App_GameSkip__SuspendBind (App_ProcInst_o* super, const MethodInfo* method);
