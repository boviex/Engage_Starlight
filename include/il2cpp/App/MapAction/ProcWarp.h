#pragma once

#include "il2cpp.h"

void App_MapAction_ProcWarp___ctor (App_MapAction_ProcWarp_o* __this, App_UnitActor_o* actor, int32_t toX, int32_t toZ, const MethodInfo* method);
System_String_o* App_MapAction_ProcWarp__GetWarpOutEffect (App_Unit_o* unit, const MethodInfo* method);
System_String_o* App_MapAction_ProcWarp__GetWarpInEffect (App_Unit_o* unit, const MethodInfo* method);
void App_MapAction_ProcWarp__WarpOut (App_MapAction_ProcWarp_o* __this, const MethodInfo* method);
void App_MapAction_ProcWarp__WarpIn (App_MapAction_ProcWarp_o* __this, const MethodInfo* method);
void App_MapAction_ProcWarp__FadeOut (App_MapAction_ProcWarp_o* __this, const MethodInfo* method);
void App_MapAction_ProcWarp__FadeIn (App_MapAction_ProcWarp_o* __this, const MethodInfo* method);
void App_MapAction_ProcWarp__WaitTick (App_MapAction_ProcWarp_o* __this, const MethodInfo* method);
void App_MapAction_ProcWarp__WarpBind (App_ProcInst_o* super, App_UnitActor_o* actor, int32_t toX, int32_t toZ, const MethodInfo* method);
void App_MapAction_ProcWarp__WarpInBind (App_ProcInst_o* super, App_UnitActor_o* actor, int32_t toX, int32_t toZ, const MethodInfo* method);
void App_MapAction_ProcWarp__WarpOutBind (App_ProcInst_o* super, App_UnitActor_o* actor, int32_t toX, int32_t toZ, const MethodInfo* method);
