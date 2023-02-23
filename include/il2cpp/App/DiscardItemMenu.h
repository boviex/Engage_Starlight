#pragma once

#include "il2cpp.h"

int32_t App_DiscardItemMenu__get_m_AllMenuItemNum (App_DiscardItemMenu_o* __this, const MethodInfo* method);
void App_DiscardItemMenu__set_m_AllMenuItemNum (App_DiscardItemMenu_o* __this, int32_t value, const MethodInfo* method);
App_ProcInst_o* App_DiscardItemMenu__CreateBind (App_ProcInst_o* super, App_Unit_o* unit, App_UnitItem_o* addedUnitItem, bool uncancellable, App_DiscardItemMenu_DecideCallback_o* decideCallback, App_DiscardItemMenu_CancelCallback_o* cancelCallback, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_DiscardItemMenu__CreateMenuItem (int32_t kind, App_UnitItem_o* addedUnitItem, const MethodInfo* method);
int32_t App_DiscardItemMenu__Compare (App_BasicMenuItem_o* lhs, App_BasicMenuItem_o* rhs, const MethodInfo* method);
void App_DiscardItemMenu___ctor (App_DiscardItemMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_BasicMenuContent_o* menuContent, App_DiscardItemRoot_o* root, App_Unit_o* unit, App_UnitItem_o* addedUnitItem, bool uncancellable, App_DiscardItemMenu_DecideCallback_o* decideCallback, App_DiscardItemMenu_CancelCallback_o* cancelCallback, const MethodInfo* method);
void App_DiscardItemMenu__AfterBuild (App_DiscardItemMenu_o* __this, const MethodInfo* method);
void App_DiscardItemMenu__RebuildMenu (App_DiscardItemMenu_o* __this, const MethodInfo* method);
App_Unit_o* App_DiscardItemMenu__GetUnit (App_DiscardItemMenu_o* __this, const MethodInfo* method);
App_UnitItem_o* App_DiscardItemMenu__GetAddedUnitItem (App_DiscardItemMenu_o* __this, const MethodInfo* method);
App_BasicMenuSelect_o* App_DiscardItemMenu__GetSelect (App_DiscardItemMenu_o* __this, const MethodInfo* method);
void App_DiscardItemMenu__KeyLeft (App_DiscardItemMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_DiscardItemMenu__KeyRight (App_DiscardItemMenu_o* __this, bool isTrigger, const MethodInfo* method);
int32_t App_DiscardItemMenu__XCall (App_DiscardItemMenu_o* __this, const MethodInfo* method);
void App_DiscardItemMenu__OnClose (App_DiscardItemMenu_o* __this, const MethodInfo* method);
void App_DiscardItemMenu__OnDispose (App_DiscardItemMenu_o* __this, const MethodInfo* method);
void App_DiscardItemMenu__DiscardItem (App_DiscardItemMenu_o* __this, bool transporterIsSelected, int32_t transporterItemIndex, const MethodInfo* method);
