#pragma once

#include "il2cpp.h"

void App_GridMenu___ctor (App_GridMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_GridMenuContent_o* menuContent, const MethodInfo* method);
System_String_o* App_GridMenu__GetName (App_GridMenu_o* __this, const MethodInfo* method);
int32_t App_GridMenu__GetShowRowMax (App_GridMenu_o* __this, const MethodInfo* method);
int32_t App_GridMenu__GetBuildRowNum (App_GridMenu_o* __this, const MethodInfo* method);
void App_GridMenu__SetSelectIndex (App_GridMenu_o* __this, int32_t index, const MethodInfo* method);
void App_GridMenu__RebuildInstant (App_GridMenu_o* __this, App_BasicMenuSelect_o* menuSelect, int32_t displayIndex, const MethodInfo* method);
void App_GridMenu__KeyUp (App_GridMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_GridMenu__KeyDown (App_GridMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_GridMenu__KeyLeft (App_GridMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_GridMenu__KeyRight (App_GridMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_GridMenu__AdjustScrollIndex (App_GridMenu_o* __this, const MethodInfo* method);
void App_GridMenu__SetCellSize (App_GridMenu_o* __this, float w, float h, const MethodInfo* method);
void App_GridMenu__SetCellW (App_GridMenu_o* __this, float w, const MethodInfo* method);
void App_GridMenu__SetCellH (App_GridMenu_o* __this, float h, const MethodInfo* method);
UnityEngine_Vector2_o App_GridMenu__GetCellSize (App_GridMenu_o* __this, const MethodInfo* method);
float App_GridMenu__GetCellW (App_GridMenu_o* __this, const MethodInfo* method);
float App_GridMenu__GetCellH (App_GridMenu_o* __this, const MethodInfo* method);
void App_GridMenu__SetColumnCount (App_GridMenu_o* __this, int32_t count, const MethodInfo* method);
int32_t App_GridMenu__GetColumnCount (App_GridMenu_o* __this, const MethodInfo* method);
App_GridMenuContent_o* App_GridMenu__GetGridMenuContent (App_GridMenu_o* __this, const MethodInfo* method);
