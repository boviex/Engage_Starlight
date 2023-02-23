#pragma once

#include "il2cpp.h"

void App_TradeMenu___ctor (App_TradeMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_TradeMenuContent_o* menuContent, const MethodInfo* method);
System_String_o* App_TradeMenu__GetName (App_TradeMenu_o* __this, const MethodInfo* method);
int32_t App_TradeMenu__GetShowRowMax (App_TradeMenu_o* __this, const MethodInfo* method);
int32_t App_TradeMenu__GetBuildRowNum (App_TradeMenu_o* __this, const MethodInfo* method);
void App_TradeMenu__KeyLeft (App_TradeMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_TradeMenu__KeyRight (App_TradeMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_TradeMenu__AfterBuild (App_TradeMenu_o* __this, const MethodInfo* method);
void App_TradeMenu__InitLeftUnitInfo (App_TradeMenu_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_TradeMenu__InitRightUnitInfo (App_TradeMenu_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_TradeMenu__SetLeftUnitName (App_TradeMenu_o* __this, System_String_o* name, const MethodInfo* method);
void App_TradeMenu__SetRightUnitName (App_TradeMenu_o* __this, System_String_o* name, const MethodInfo* method);
bool App_TradeMenu__CanLeftUnitAutoEquip (App_TradeMenu_o* __this, const MethodInfo* method);
bool App_TradeMenu__CanRightUnitAutoEquip (App_TradeMenu_o* __this, const MethodInfo* method);
void App_TradeMenu__ShowSelectCursor (App_TradeMenu_o* __this, const MethodInfo* method);
void App_TradeMenu__HideSelectCursor (App_TradeMenu_o* __this, const MethodInfo* method);
void App_TradeMenu__SetSelectItemIndex (App_TradeMenu_o* __this, int32_t itemIndex, const MethodInfo* method);
int32_t App_TradeMenu__GetSelectItemIndex (App_TradeMenu_o* __this, const MethodInfo* method);
