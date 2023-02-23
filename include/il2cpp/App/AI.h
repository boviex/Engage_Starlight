#pragma once

#include "il2cpp.h"

void App_AI___ctor (App_AI_o* __this, const MethodInfo* method);
App_AIOrder_o* App_AI__get_Order (App_AI_o* __this, const MethodInfo* method);
App_AIThink_o* App_AI__get_Think (App_AI_o* __this, const MethodInfo* method);
App_AICannon_o* App_AI__get_Cannon (App_AI_o* __this, const MethodInfo* method);
App_AIInterruptAttack_o* App_AI__get_InterruptAttack (App_AI_o* __this, const MethodInfo* method);
void App_AI__SetSeq (App_AI_o* __this, int32_t seq, const MethodInfo* method);
void App_AI__SetCrossfire (App_AI_o* __this, bool enable, const MethodInfo* method);
bool App_AI__IsVersus (App_AI_o* __this, const MethodInfo* method);
bool App_AI__IsVersusCasual (App_AI_o* __this, const MethodInfo* method);
bool App_AI__IsVersusRankedOrMock (App_AI_o* __this, const MethodInfo* method);
bool App_AI__IsEntrust (const MethodInfo* method);
App_Random_o* App_AI__Rand (const MethodInfo* method);
bool App_AI__IsRandom (const MethodInfo* method);
void App_AI__Processing (App_AI_o* __this, const MethodInfo* method);
void App_AI__SetupForEngageOrGodChange (App_AI_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_AI__IsOrderUnitEngageOrGodChange (App_AI_o* __this, const MethodInfo* method);
void App_AI__SetupForRemove (App_AI_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_AI__IsOrderUnitRemove (App_AI_o* __this, const MethodInfo* method);
void App_AI__SetupForRemagic (App_AI_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_AI__IsOrderUnitRemagic (App_AI_o* __this, const MethodInfo* method);
void App_AI__SetupForRerewarp (App_AI_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_AI__IsOrderUnitRerewarp (App_AI_o* __this, const MethodInfo* method);
void App_AI__iInitialize (App_AI_o* __this, const MethodInfo* method);
bool App_AI__iProcessing (App_AI_o* __this, const MethodInfo* method);
bool App_AI__iProcessingRemove (App_AI_o* __this, const MethodInfo* method);
bool App_AI__iProcessingRemagic (App_AI_o* __this, const MethodInfo* method);
bool App_AI__iProcessingRerewarp (App_AI_o* __this, const MethodInfo* method);
bool App_AI__iCrossfire (App_AI_o* __this, const MethodInfo* method);
bool App_AI__iInterruptAttack (App_AI_o* __this, const MethodInfo* method);
void App_AI__Completion (App_AI_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_AI__iFinalize (App_AI_o* __this, const MethodInfo* method);
void App_AI__DbgPLCPrepare (App_AI_o* __this, const MethodInfo* method);
void App_AI__DbgPLCAddLog (App_AI_o* __this, const MethodInfo* method);
void App_AI__DbgPLCUnknownSeq (App_AI_o* __this, const MethodInfo* method);
void App_AI__DbgPLCCheckLoopCount (App_AI_o* __this, const MethodInfo* method);
