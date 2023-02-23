#pragma once

#include "il2cpp.h"

void App_RewindMenuContent___ctor (App_RewindMenuContent_o* __this, const MethodInfo* method);
bool App_RewindMenuContent__IsOpening (App_RewindMenuContent_o* __this, const MethodInfo* method);
bool App_RewindMenuContent__IsClosing (App_RewindMenuContent_o* __this, const MethodInfo* method);
bool App_RewindMenuContent__IsClosed (App_RewindMenuContent_o* __this, const MethodInfo* method);
int32_t App_RewindMenuContent__GetMenuItemContentMax (App_RewindMenuContent_o* __this, const MethodInfo* method);
App_RewindMenuItemContent_o* App_RewindMenuContent__GetRewindMenuItemContent (App_RewindMenuContent_o* __this, int32_t itemIndex, const MethodInfo* method);
void App_RewindMenuContent__InitObjReference (App_RewindMenuContent_o* __this, const MethodInfo* method);
void App_RewindMenuContent__BuildMenuItemContent (App_RewindMenuContent_o* __this, const MethodInfo* method);
void App_RewindMenuContent__BuildWH (App_RewindMenuContent_o* __this, const MethodInfo* method);
float App_RewindMenuContent__CalcW (App_RewindMenuContent_o* __this, const MethodInfo* method);
float App_RewindMenuContent__CalcH (App_RewindMenuContent_o* __this, const MethodInfo* method);
void App_RewindMenuContent__CycleMenuItemContent (App_RewindMenuContent_o* __this, bool isForward, int32_t cycleCount, const MethodInfo* method);
float App_RewindMenuContent__GetLineHeightForScroll (App_RewindMenuContent_o* __this, const MethodInfo* method);
void App_RewindMenuContent__Awake (App_RewindMenuContent_o* __this, const MethodInfo* method);
void App_RewindMenuContent__Start (App_RewindMenuContent_o* __this, const MethodInfo* method);
void App_RewindMenuContent__Update (App_RewindMenuContent_o* __this, const MethodInfo* method);
void App_RewindMenuContent__AfterBuild (App_RewindMenuContent_o* __this, const MethodInfo* method);
void App_RewindMenuContent__Suspend (App_RewindMenuContent_o* __this, const MethodInfo* method);
void App_RewindMenuContent__UnSuspend (App_RewindMenuContent_o* __this, const MethodInfo* method);
void App_RewindMenuContent__UpdateParts (App_RewindMenuContent_o* __this, int32_t currentForceType, int32_t turn, int32_t restUnitNum, const MethodInfo* method);
bool App_RewindMenuContent__IsMenuItemMoving (App_RewindMenuContent_o* __this, const MethodInfo* method);
void App_RewindMenuContent__MoveUp (App_RewindMenuContent_o* __this, int32_t scrollCount, const MethodInfo* method);
void App_RewindMenuContent__MoveDown (App_RewindMenuContent_o* __this, int32_t scrollCount, const MethodInfo* method);
void App_RewindMenuContent__LoadAsync (const MethodInfo* method);
void App_RewindMenuContent__Unload (const MethodInfo* method);
bool App_RewindMenuContent__IsLoading (const MethodInfo* method);
App_RewindMenuContent_o* App_RewindMenuContent__CreateContent (const MethodInfo* method);
