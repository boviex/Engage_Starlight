#pragma once

#include "il2cpp.h"

App_ProcInst_o* App_SendItemMenu__CreateBind (App_ProcInst_o* super, App_Unit_o* unit, App_UnitItem_o* gainUnitItem, bool uncancellable, App_SendItemMenu_DecideCallback_o* decideCallback, App_SendItemMenu_CancelCallback_o* cancelCallback, const MethodInfo* method);
void App_SendItemMenu___ctor (App_SendItemMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_BasicMenuContent_o* menuContent, App_SendItemRoot_o* root, App_Unit_o* unit, App_UnitItem_o* gainUnitItem, bool uncancellable, App_SendItemMenu_DecideCallback_o* decideCallback, App_SendItemMenu_CancelCallback_o* cancelCallback, const MethodInfo* method);
System_String_o* App_SendItemMenu__GetName (App_SendItemMenu_o* __this, const MethodInfo* method);
void App_SendItemMenu__AfterBuild (App_SendItemMenu_o* __this, const MethodInfo* method);
App_Unit_o* App_SendItemMenu__GetUnit (App_SendItemMenu_o* __this, const MethodInfo* method);
App_UnitItem_o* App_SendItemMenu__GetGainUnitItem (App_SendItemMenu_o* __this, const MethodInfo* method);
int32_t App_SendItemMenu__XCall (App_SendItemMenu_o* __this, const MethodInfo* method);
void App_SendItemMenu__OnClose (App_SendItemMenu_o* __this, const MethodInfo* method);
void App_SendItemMenu__OnDispose (App_SendItemMenu_o* __this, const MethodInfo* method);
void App_SendItemMenu__SendItem (App_SendItemMenu_o* __this, bool selectUnitItem, int32_t unitItemIndex, const MethodInfo* method);
