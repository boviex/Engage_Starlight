#pragma once

#include "il2cpp.h"

App_Unit_o* App_RefineShopRefineTargetMenu__get_m_Unit (App_RefineShopRefineTargetMenu_o* __this, const MethodInfo* method);
void App_RefineShopRefineTargetMenu__set_m_Unit (App_RefineShopRefineTargetMenu_o* __this, App_Unit_o* value, const MethodInfo* method);
App_UnitItem_o* App_RefineShopRefineTargetMenu__get_m_UnitItem (App_RefineShopRefineTargetMenu_o* __this, const MethodInfo* method);
void App_RefineShopRefineTargetMenu__set_m_UnitItem (App_RefineShopRefineTargetMenu_o* __this, App_UnitItem_o* value, const MethodInfo* method);
App_RefineShopRefineTargetMenu_o* App_RefineShopRefineTargetMenu__CreateBind (App_ProcInst_o* super, UnityEngine_GameObject_o* menuObject, App_Unit_o* unit, int32_t itemIndex, App_RefineShopRefineTargetMenu_SelectEventHandler_o* selectEventHandler, App_RefineShopRefineTargetMenu_DecideToRefineEventHandler_o* decideToRefineEventHandler, App_RefineShopRefineTargetMenu_DecideToEvolveEventHandler_o* decideToEvolveEventHandler, App_RefineShopRefineTargetMenu_RequestCloseEventHandler_o* requestCloseEventHandler, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_RefineShopRefineTargetMenu__CreateMenuItemList (int32_t showRowNum, App_UnitItem_o* unitItem, App_RefineShopRefineTargetMenu_SelectEventHandler_o* selectEventHandler, App_RefineShopRefineTargetMenu_DecideToRefineEventHandler_o* decideToRefineEventHandler, App_RefineShopRefineTargetMenu_DecideToEvolveEventHandler_o* decideToEvolveEventHandler, const MethodInfo* method);
void App_RefineShopRefineTargetMenu___ctor (App_RefineShopRefineTargetMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_BasicMenuContent_o* menuContent, App_Unit_o* ownerUnit, App_UnitItem_o* baseUnitItem, App_RefineShopRefineTargetMenu_RequestCloseEventHandler_o* requestCloseEventHandler, const MethodInfo* method);
System_String_o* App_RefineShopRefineTargetMenu__GetName (App_RefineShopRefineTargetMenu_o* __this, const MethodInfo* method);
int32_t App_RefineShopRefineTargetMenu__BCall (App_RefineShopRefineTargetMenu_o* __this, const MethodInfo* method);
