#pragma once

#include "il2cpp.h"

App_RefreshUnitSelectMenu_o* App_RefreshUnitSelectMenu__CreateBind (App_ProcInst_o* super, App_RefreshUnitSelectMenuContent_o* menuContent, App_Unit_o* initialSelectedUnit, App_Unit_o* unselectableUnit, bool selectedEntrust, int32_t initialScrollIndex, App_RefreshUnitSelectMenu_SelectEventHandler_o* selectEventHandler, App_RefreshUnitSelectMenu_DecideEventHandler_o* decideEventHandler, App_RefreshUnitSelectMenu_CloseEventHandler_o* closeEventHandler, App_RefreshUnitSelectMenu_DisposeEventHandler_o* disposeEventHandler, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_RefreshUnitSelectMenu__CreateMenuItem (App_Unit_o* initialSelectedUnit, App_Unit_o* unselectableUnit, bool selectedEntrust, App_RefreshUnitSelectMenu_SelectEventHandler_o* selectEventHandler, App_RefreshUnitSelectMenu_DecideEventHandler_o* decideEventHandler, int32_t* initialSelectIndex, const MethodInfo* method);
void App_RefreshUnitSelectMenu___ctor (App_RefreshUnitSelectMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_RefreshUnitSelectMenuContent_o* menuContent, int32_t initialSelectIndex, App_Unit_o* unselectableUnit, int32_t initialScrollIndex, App_RefreshUnitSelectMenu_DecideEventHandler_o* decideEventHandler, App_RefreshUnitSelectMenu_CloseEventHandler_o* closeEventHandler, App_RefreshUnitSelectMenu_DisposeEventHandler_o* disposeEventHandler, const MethodInfo* method);
void App_RefreshUnitSelectMenu__OnBuild (App_RefreshUnitSelectMenu_o* __this, bool isFirstBuild, const MethodInfo* method);
System_String_o* App_RefreshUnitSelectMenu__GetName (App_RefreshUnitSelectMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSelectMenu__AdjustScrollIndex (App_RefreshUnitSelectMenu_o* __this, const MethodInfo* method);
App_Unit_o* App_RefreshUnitSelectMenu__GetUnselectableUnit (App_RefreshUnitSelectMenu_o* __this, const MethodInfo* method);
bool App_RefreshUnitSelectMenu__SetDecidedMenuItem (App_RefreshUnitSelectMenu_o* __this, int32_t menuItemIndex, const MethodInfo* method);
void App_RefreshUnitSelectMenu__CancelSetDecidedMenuItem (App_RefreshUnitSelectMenu_o* __this, const MethodInfo* method);
int32_t App_RefreshUnitSelectMenu__BCall (App_RefreshUnitSelectMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSelectMenu__OnClose (App_RefreshUnitSelectMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSelectMenu__OnDispose (App_RefreshUnitSelectMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSelectMenu___cctor (const MethodInfo* method);
