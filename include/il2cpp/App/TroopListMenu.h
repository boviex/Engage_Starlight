#pragma once

#include "il2cpp.h"

App_TroopListMenu_o* App_TroopListMenu__Create (App_ProcInst_o* super, App_TroopListMenuContent_o* menuContent, App_TroopListSortMenu_o* sortMenu, int32_t mode, const MethodInfo* method);
void App_TroopListMenu___ctor (App_TroopListMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_TroopListMenuContent_o* menuContent, const MethodInfo* method);
System_String_o* App_TroopListMenu__GetName (App_TroopListMenu_o* __this, const MethodInfo* method);
void App_TroopListMenu__MoveUp (App_TroopListMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_TroopListMenu__MoveDown (App_TroopListMenu_o* __this, bool isTrigger, const MethodInfo* method);
int32_t App_TroopListMenu__CustomCall (App_TroopListMenu_o* __this, const MethodInfo* method);
int32_t App_TroopListMenu__ACall (App_TroopListMenu_o* __this, const MethodInfo* method);
int32_t App_TroopListMenu__GetCurrentPage (App_TroopListMenu_o* __this, const MethodInfo* method);
void App_TroopListMenu__IncPage (App_TroopListMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_TroopListMenu__DecPage (App_TroopListMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_TroopListMenu__IncSort (App_TroopListMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_TroopListMenu__DecSort (App_TroopListMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_TroopListMenu__InitUnitOrder (const MethodInfo* method);
void App_TroopListMenu__AddListUnit (App_Unit_o* unit, const MethodInfo* method);
void App_TroopListMenu__InitUnitOrderNormal (const MethodInfo* method);
void App_TroopListMenu__InitUnitOrderRelay (const MethodInfo* method);
void App_TroopListMenu__SortUnitOrder (const MethodInfo* method);
int32_t App_TroopListMenu__GetSortValue (App_Unit_o* unit, int32_t type, const MethodInfo* method);
App_Unit_o* App_TroopListMenu__GetSortUnit (App_TroopListMenu_o* __this, int32_t index, const MethodInfo* method);
App_Unit_o* App_TroopListMenu__GetSortTmpUnit (App_TroopListMenu_o* __this, int32_t index, const MethodInfo* method);
bool App_TroopListMenu__IsSelectSort (App_TroopListMenu_o* __this, const MethodInfo* method);
void App_TroopListMenu___cctor (const MethodInfo* method);
