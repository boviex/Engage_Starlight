#pragma once

#include "il2cpp.h"

int32_t App_InventoryPoolItemMenu__get_m_CommonDisplayIndex (App_InventoryPoolItemMenu_o* __this, const MethodInfo* method);
void App_InventoryPoolItemMenu__set_m_CommonDisplayIndex (App_InventoryPoolItemMenu_o* __this, int32_t value, const MethodInfo* method);
App_InventoryPoolItemMenu_o* App_InventoryPoolItemMenu__Create (App_ProcInst_o* super, App_InventoryPoolItemMenuContent_o* menuContent, const MethodInfo* method);
void App_InventoryPoolItemMenu___ctor (App_InventoryPoolItemMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_InventoryPoolItemMenuContent_o* menuContent, const MethodInfo* method);
App_UnitItem_o* App_InventoryPoolItemMenu__GetSelectItem (App_InventoryPoolItemMenu_o* __this, const MethodInfo* method);
void App_InventoryPoolItemMenu__SaveSelectItem (App_InventoryPoolItemMenu_o* __this, const MethodInfo* method);
App_Unit_o* App_InventoryPoolItemMenu__GetSelectUnit (App_InventoryPoolItemMenu_o* __this, const MethodInfo* method);
void App_InventoryPoolItemMenu__UpdateUnit (App_InventoryPoolItemMenu_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_InventoryPoolItemMenu__UpdateUnit (App_InventoryPoolItemMenu_o* __this, App_Unit_o* unit, bool isCharaOnlyOn, const MethodInfo* method);
void App_InventoryPoolItemMenu__SetItemKind (App_InventoryPoolItemMenu_o* __this, int32_t itemKind, bool isAutoSelect, const MethodInfo* method);
void App_InventoryPoolItemMenu__SetFirstKind (App_InventoryPoolItemMenu_o* __this, bool isAutoSelect, const MethodInfo* method);
void App_InventoryPoolItemMenu__SetLastKind (App_InventoryPoolItemMenu_o* __this, bool isAutoSelect, const MethodInfo* method);
bool App_InventoryPoolItemMenu__IncKind (App_InventoryPoolItemMenu_o* __this, const MethodInfo* method);
bool App_InventoryPoolItemMenu__DecKind (App_InventoryPoolItemMenu_o* __this, const MethodInfo* method);
void App_InventoryPoolItemMenu__ShowCursor (App_InventoryPoolItemMenu_o* __this, bool isShow, const MethodInfo* method);
bool App_InventoryPoolItemMenu__IsShowCursor (App_InventoryPoolItemMenu_o* __this, const MethodInfo* method);
void App_InventoryPoolItemMenu__EnableInput (App_InventoryPoolItemMenu_o* __this, bool isEnable, const MethodInfo* method);
bool App_InventoryPoolItemMenu__IsEnableInput (App_InventoryPoolItemMenu_o* __this, const MethodInfo* method);
void App_InventoryPoolItemMenu__SetSuspend (App_InventoryPoolItemMenu_o* __this, bool isActive, const MethodInfo* method);
void App_InventoryPoolItemMenu__SetFirstSelection (App_InventoryPoolItemMenu_o* __this, const MethodInfo* method);
void App_InventoryPoolItemMenu__ResetFirstSelection (App_InventoryPoolItemMenu_o* __this, const MethodInfo* method);
void App_InventoryPoolItemMenu__SetSelectIndexOnChangeMenu (App_InventoryPoolItemMenu_o* __this, int32_t commonDisplayIndex, int32_t kind, const MethodInfo* method);
void App_InventoryPoolItemMenu__HoldSelection (App_InventoryPoolItemMenu_o* __this, const MethodInfo* method);
void App_InventoryPoolItemMenu__UpdateMenu (App_InventoryPoolItemMenu_o* __this, bool isAutoSelect, const MethodInfo* method);
int32_t App_InventoryPoolItemMenu__GetSelectableItemCount (App_InventoryPoolItemMenu_o* __this, const MethodInfo* method);
System_String_o* App_InventoryPoolItemMenu__GetName (App_InventoryPoolItemMenu_o* __this, const MethodInfo* method);
void App_InventoryPoolItemMenu__AfterBuild (App_InventoryPoolItemMenu_o* __this, const MethodInfo* method);
int32_t App_InventoryPoolItemMenu__ClampMenuItemIndex (App_InventoryPoolItemMenu_o* __this, int32_t itemIndex, const MethodInfo* method);
void App_InventoryPoolItemMenu__KeyUp (App_InventoryPoolItemMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_InventoryPoolItemMenu__KeyDown (App_InventoryPoolItemMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_InventoryPoolItemMenu__KeyLeft (App_InventoryPoolItemMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_InventoryPoolItemMenu__KeyRight (App_InventoryPoolItemMenu_o* __this, bool isTrigger, const MethodInfo* method);
int32_t App_InventoryPoolItemMenu__XCall (App_InventoryPoolItemMenu_o* __this, const MethodInfo* method);
int32_t App_InventoryPoolItemMenu__CustomCall (App_InventoryPoolItemMenu_o* __this, const MethodInfo* method);
void App_InventoryPoolItemMenu__Sort (App_InventoryPoolItemMenu_o* __this, const MethodInfo* method);
int32_t App_InventoryPoolItemMenu__ComparePoolMenuItem (App_BasicMenuItem_o* x, App_BasicMenuItem_o* y, const MethodInfo* method);
void App_InventoryPoolItemMenu___cctor (const MethodInfo* method);
