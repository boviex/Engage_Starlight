#pragma once

#include "il2cpp.h"

App_Unit_o* App_UnitItemMenu__get_m_Unit (App_UnitItemMenu_o* __this, const MethodInfo* method);
void App_UnitItemMenu__set_m_Unit (App_UnitItemMenu_o* __this, App_Unit_o* value, const MethodInfo* method);
App_UnitItemMenu_o* App_UnitItemMenu__CreateBind (App_ProcInst_o* super, App_UnitItemMenuContent_o* menuContent, App_Unit_o* unit, App_UnitItemMenu_SelectEventHandler_o* selectEventHandler, App_UnitItemMenu_DecideEventHandler_o* decideEventHandler, App_UnitItemMenu_RequestCloseEventHandler_o* requestCloseEventHandler, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_UnitItemMenu__CreateMenuItem (App_Unit_o* unit, App_UnitItemMenu_SelectEventHandler_o* selectEventHandler, App_UnitItemMenu_DecideEventHandler_o* decideEventHandler, App_UnitItemMenu_RequestCloseEventHandler_o* requestCloseEventHandler, const MethodInfo* method);
void App_UnitItemMenu___ctor (App_UnitItemMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_UnitItemMenuContent_o* menuContent, App_Unit_o* unit, App_UnitItemMenu_SelectEventHandler_o* selectEventHandler, App_UnitItemMenu_DecideEventHandler_o* decideEventHandler, App_UnitItemMenu_RequestCloseEventHandler_o* requestCloseEventHandler, const MethodInfo* method);
void App_UnitItemMenu__RebuildMenu (App_UnitItemMenu_o* __this, App_Unit_o* unit, const MethodInfo* method);
System_String_o* App_UnitItemMenu__GetName (App_UnitItemMenu_o* __this, const MethodInfo* method);
void App_UnitItemMenu__EnableMenu (App_UnitItemMenu_o* __this, const MethodInfo* method);
void App_UnitItemMenu__DisableMenu (App_UnitItemMenu_o* __this, const MethodInfo* method);
void App_UnitItemMenu__Show (App_UnitItemMenu_o* __this, const MethodInfo* method);
void App_UnitItemMenu__Hide (App_UnitItemMenu_o* __this, const MethodInfo* method);
