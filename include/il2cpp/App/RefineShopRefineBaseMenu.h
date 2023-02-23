#pragma once

#include "il2cpp.h"

int32_t App_RefineShopRefineBaseMenu__get_m_Kind (App_RefineShopRefineBaseMenu_o* __this, const MethodInfo* method);
void App_RefineShopRefineBaseMenu__set_m_Kind (App_RefineShopRefineBaseMenu_o* __this, int32_t value, const MethodInfo* method);
App_RefineShopRefineBaseMenu_o* App_RefineShopRefineBaseMenu__CreateBind (App_ProcInst_o* super, UnityEngine_GameObject_o* menuObject, App_Unit_o* defaultUnit, int32_t defaultItemIndex, int32_t defaultItemKind, App_RefineShopRefineBaseMenu_SelectEventHandler_o* selectEventHandler, App_RefineShopRefineBaseMenu_DecideEventHandler_o* decideEventHandler, App_RefineShopRefineBaseMenu_RequestCloseEventHandler_o* requestCloseEventHandler, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_RefineShopRefineBaseMenu__CreateMenuItemList (int32_t showRowNum, int32_t kind, App_RefineShopRefineBaseMenu_SelectEventHandler_o* selectEventHandler, App_RefineShopRefineBaseMenu_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
bool App_RefineShopRefineBaseMenu__IsValidUnitItemToMenuItem (App_UnitItem_o* unitItem, int32_t kind, const MethodInfo* method);
bool App_RefineShopRefineBaseMenu__ExistTarget (App_UnitItem_o* unitItem, const MethodInfo* method);
int32_t App_RefineShopRefineBaseMenu__Compare (App_BasicMenuItem_o* lhs, App_BasicMenuItem_o* rhs, const MethodInfo* method);
void App_RefineShopRefineBaseMenu___ctor (App_RefineShopRefineBaseMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_RefineShopRefineBaseMenuContent_o* menuContent, App_Unit_o* defaultUnit, int32_t defaultItemIndex, int32_t kind, App_RefineShopRefineBaseMenu_SelectEventHandler_o* selectEventHandler, App_RefineShopRefineBaseMenu_DecideEventHandler_o* decideEventHandler, App_RefineShopRefineBaseMenu_RequestCloseEventHandler_o* requestCloseEventHandler, const MethodInfo* method);
void App_RefineShopRefineBaseMenu__RebuildMenu (App_RefineShopRefineBaseMenu_o* __this, const MethodInfo* method);
void App_RefineShopRefineBaseMenu__RebuildMenuItem (App_RefineShopRefineBaseMenu_o* __this, const MethodInfo* method);
System_String_o* App_RefineShopRefineBaseMenu__GetName (App_RefineShopRefineBaseMenu_o* __this, const MethodInfo* method);
void App_RefineShopRefineBaseMenu__KeyLeft (App_RefineShopRefineBaseMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_RefineShopRefineBaseMenu__KeyRight (App_RefineShopRefineBaseMenu_o* __this, bool isTrigger, const MethodInfo* method);
int32_t App_RefineShopRefineBaseMenu__BCall (App_RefineShopRefineBaseMenu_o* __this, const MethodInfo* method);
void App_RefineShopRefineBaseMenu___cctor (const MethodInfo* method);
