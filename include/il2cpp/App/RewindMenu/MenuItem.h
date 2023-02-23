#pragma once

#include "il2cpp.h"

void App_RewindMenu_MenuItem___ctor (App_RewindMenu_MenuItem_o* __this, int32_t logIndex, System_String_o* logText, int32_t cursorX, int32_t cursorZ, int32_t actorMapHistoryIndex, App_RewindMenu_MenuItem_UnitIconInfo_o* unitIconInfo, App_RewindMenu_MenuItem_UnitIconInfo_o* dieUnitIconInfo, int32_t forceType, bool isPlayerPhaseBegin, const MethodInfo* method);
void App_RewindMenu_MenuItem__SetLink (App_RewindMenu_MenuItem_o* __this, App_RewindMenu_MenuItem_o* prev, App_RewindMenu_MenuItem_o* next, const MethodInfo* method);
App_RewindMenu_MenuItem_o* App_RewindMenu_MenuItem__GetPrev (App_RewindMenu_MenuItem_o* __this, const MethodInfo* method);
App_RewindMenu_MenuItem_o* App_RewindMenu_MenuItem__GetNext (App_RewindMenu_MenuItem_o* __this, const MethodInfo* method);
System_String_o* App_RewindMenu_MenuItem__GetName (App_RewindMenu_MenuItem_o* __this, const MethodInfo* method);
float App_RewindMenu_MenuItem__GetWidth (App_RewindMenu_MenuItem_o* __this, const MethodInfo* method);
float App_RewindMenu_MenuItem__GetHeight (App_RewindMenu_MenuItem_o* __this, const MethodInfo* method);
int32_t App_RewindMenu_MenuItem__BuildAttribute (App_RewindMenu_MenuItem_o* __this, const MethodInfo* method);
App_RewindMenu_MenuItem_UnitIconInfo_o* App_RewindMenu_MenuItem__GetUnitIconInfo (App_RewindMenu_MenuItem_o* __this, const MethodInfo* method);
App_RewindMenu_MenuItem_UnitIconInfo_o* App_RewindMenu_MenuItem__GetDieUnitIconInfo (App_RewindMenu_MenuItem_o* __this, const MethodInfo* method);
int32_t App_RewindMenu_MenuItem__GetForceType (App_RewindMenu_MenuItem_o* __this, const MethodInfo* method);
bool App_RewindMenu_MenuItem__IsPlayerPhaseBegin (App_RewindMenu_MenuItem_o* __this, const MethodInfo* method);
void App_RewindMenu_MenuItem__OnSelect (App_RewindMenu_MenuItem_o* __this, const MethodInfo* method);
void App_RewindMenu_MenuItem__OnDeselect (App_RewindMenu_MenuItem_o* __this, const MethodInfo* method);
void App_RewindMenu_MenuItem__OnCursorMoveEnd (App_RewindMenu_MenuItem_o* __this, const MethodInfo* method);
int32_t App_RewindMenu_MenuItem__ACall (App_RewindMenu_MenuItem_o* __this, const MethodInfo* method);
