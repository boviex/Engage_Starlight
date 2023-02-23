#pragma once

#include "il2cpp.h"

int32_t App_InventoryUnitItemMenu__get_m_CommonDisplayIndex (App_InventoryUnitItemMenu_o* __this, const MethodInfo* method);
void App_InventoryUnitItemMenu__set_m_CommonDisplayIndex (App_InventoryUnitItemMenu_o* __this, int32_t value, const MethodInfo* method);
App_InventoryUnitItemMenu_o* App_InventoryUnitItemMenu__Create (App_ProcInst_o* super, App_Unit_o* unit, int32_t defaultSelect, App_InventoryUnitItemMenuContent_o* menuContent, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_InventoryUnitItemMenu__CreateMenuItemList (App_Unit_o* unit, const MethodInfo* method);
void App_InventoryUnitItemMenu___ctor (App_InventoryUnitItemMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_InventoryUnitItemMenuContent_o* menuContent, const MethodInfo* method);
App_Unit_o* App_InventoryUnitItemMenu__GetUnit (App_InventoryUnitItemMenu_o* __this, const MethodInfo* method);
void App_InventoryUnitItemMenu__UpdateUnit (App_InventoryUnitItemMenu_o* __this, App_Unit_o* unit, const MethodInfo* method);
App_UnitItem_o* App_InventoryUnitItemMenu__GetSelectItem (App_InventoryUnitItemMenu_o* __this, const MethodInfo* method);
int32_t App_InventoryUnitItemMenu__GetMenuItemIndexEquipped (App_InventoryUnitItemMenu_o* __this, const MethodInfo* method);
void App_InventoryUnitItemMenu__ClearSelect (App_InventoryUnitItemMenu_o* __this, const MethodInfo* method);
void App_InventoryUnitItemMenu__SetSelect (App_InventoryUnitItemMenu_o* __this, int32_t selectNo, const MethodInfo* method);
int32_t App_InventoryUnitItemMenu__GetFirstSelect (App_InventoryUnitItemMenu_o* __this, const MethodInfo* method);
int32_t App_InventoryUnitItemMenu__GetSecondSelect (App_InventoryUnitItemMenu_o* __this, const MethodInfo* method);
void App_InventoryUnitItemMenu__ShowCursor (App_InventoryUnitItemMenu_o* __this, bool isShow, const MethodInfo* method);
bool App_InventoryUnitItemMenu__IsShowCursor (App_InventoryUnitItemMenu_o* __this, const MethodInfo* method);
void App_InventoryUnitItemMenu__EnableInput (App_InventoryUnitItemMenu_o* __this, bool isEnable, const MethodInfo* method);
bool App_InventoryUnitItemMenu__IsEnableInput (App_InventoryUnitItemMenu_o* __this, const MethodInfo* method);
void App_InventoryUnitItemMenu__SetSuspend (App_InventoryUnitItemMenu_o* __this, bool isActive, const MethodInfo* method);
void App_InventoryUnitItemMenu__SetFirstSelection (App_InventoryUnitItemMenu_o* __this, bool updateCommonDisplayIndex, const MethodInfo* method);
void App_InventoryUnitItemMenu__ResetFirstSelection (App_InventoryUnitItemMenu_o* __this, const MethodInfo* method);
void App_InventoryUnitItemMenu__SetSelectIndexOnChangeMenu (App_InventoryUnitItemMenu_o* __this, int32_t commonDisplayIndex, const MethodInfo* method);
void App_InventoryUnitItemMenu__HoldSelection (App_InventoryUnitItemMenu_o* __this, const MethodInfo* method);
void App_InventoryUnitItemMenu__UpdateMenu (App_InventoryUnitItemMenu_o* __this, bool isRebuild, const MethodInfo* method);
int32_t App_InventoryUnitItemMenu__GetSelectableItemCount (App_InventoryUnitItemMenu_o* __this, const MethodInfo* method);
System_String_o* App_InventoryUnitItemMenu__GetName (App_InventoryUnitItemMenu_o* __this, const MethodInfo* method);
void App_InventoryUnitItemMenu__AfterBuild (App_InventoryUnitItemMenu_o* __this, const MethodInfo* method);
int32_t App_InventoryUnitItemMenu__ClampMenuItemIndex (App_InventoryUnitItemMenu_o* __this, int32_t itemIndex, const MethodInfo* method);
void App_InventoryUnitItemMenu__KeyUp (App_InventoryUnitItemMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_InventoryUnitItemMenu__KeyDown (App_InventoryUnitItemMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_InventoryUnitItemMenu__KeyLeft (App_InventoryUnitItemMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_InventoryUnitItemMenu__KeyRight (App_InventoryUnitItemMenu_o* __this, bool isTrigger, const MethodInfo* method);
int32_t App_InventoryUnitItemMenu__XCall (App_InventoryUnitItemMenu_o* __this, const MethodInfo* method);
int32_t App_InventoryUnitItemMenu__CustomCall (App_InventoryUnitItemMenu_o* __this, const MethodInfo* method);
void App_InventoryUnitItemMenu___cctor (const MethodInfo* method);
