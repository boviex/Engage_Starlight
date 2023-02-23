#pragma once

#include "il2cpp.h"

void App_SortieInventoryManager___ctor (App_SortieInventoryManager_o* __this, const MethodInfo* method);
void App_SortieInventoryManager__Reset (App_SortieInventoryManager_o* __this, const MethodInfo* method);
bool App_SortieInventoryManager__IsModeSortie (App_SortieInventoryManager_o* __this, const MethodInfo* method);
bool App_SortieInventoryManager__IsModeTransporter (App_SortieInventoryManager_o* __this, const MethodInfo* method);
void App_SortieInventoryManager__ResetMode (App_SortieInventoryManager_o* __this, const MethodInfo* method);
void App_SortieInventoryManager__UpdateUnitMenu (App_SortieInventoryManager_o* __this, bool isRebuild, const MethodInfo* method);
void App_SortieInventoryManager__UpdatePoolMenu (App_SortieInventoryManager_o* __this, bool isAutoSelect, const MethodInfo* method);
void App_SortieInventoryManager__SetMenuItemDisplayIndex (App_SortieInventoryManager_o* __this, App_BasicMenu_o* menu, const MethodInfo* method);
int32_t App_SortieInventoryManager__GetMenuItemDisplayIndexFromUnitItemListIndex (App_SortieInventoryManager_o* __this, App_Unit_o* unit, int32_t unitItemListIndex, const MethodInfo* method);
void App_SortieInventoryManager__SetItemInfo (App_SortieInventoryManager_o* __this, App_Unit_o* unit, App_UnitItem_o* item, const MethodInfo* method);
int32_t App_SortieInventoryManager__get_Mode (App_SortieInventoryManager_o* __this, const MethodInfo* method);
void App_SortieInventoryManager__set_Mode (App_SortieInventoryManager_o* __this, int32_t value, const MethodInfo* method);
App_SortieInventoryManager_SelectionInfo_o* App_SortieInventoryManager__get_Selection (App_SortieInventoryManager_o* __this, const MethodInfo* method);
App_InventoryUnitItemMenu_o* App_SortieInventoryManager__get_UnitItemMenu (App_SortieInventoryManager_o* __this, const MethodInfo* method);
void App_SortieInventoryManager__set_UnitItemMenu (App_SortieInventoryManager_o* __this, App_InventoryUnitItemMenu_o* value, const MethodInfo* method);
App_InventoryPoolItemMenu_o* App_SortieInventoryManager__get_PoolItemMenu (App_SortieInventoryManager_o* __this, const MethodInfo* method);
void App_SortieInventoryManager__set_PoolItemMenu (App_SortieInventoryManager_o* __this, App_InventoryPoolItemMenu_o* value, const MethodInfo* method);
int32_t App_SortieInventoryManager__get_Active (App_SortieInventoryManager_o* __this, const MethodInfo* method);
void App_SortieInventoryManager__set_Active (App_SortieInventoryManager_o* __this, int32_t value, const MethodInfo* method);
UnityEngine_GameObject_o* App_SortieInventoryManager__get_ItemInfo (App_SortieInventoryManager_o* __this, const MethodInfo* method);
void App_SortieInventoryManager__set_ItemInfo (App_SortieInventoryManager_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
int32_t App_SortieInventoryManager__get_MenuItemDisplayIndex (App_SortieInventoryManager_o* __this, const MethodInfo* method);
void App_SortieInventoryManager__set_MenuItemDisplayIndex (App_SortieInventoryManager_o* __this, int32_t value, const MethodInfo* method);
bool App_SortieInventoryManager__get_ItemDetailDisplayWithUnit (App_SortieInventoryManager_o* __this, const MethodInfo* method);
void App_SortieInventoryManager__set_ItemDetailDisplayWithUnit (App_SortieInventoryManager_o* __this, bool value, const MethodInfo* method);
