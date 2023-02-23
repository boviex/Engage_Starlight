#pragma once

#include "il2cpp.h"

App_ShopSellMenu_o* App_ShopSellMenu__CreateBind (App_ProcInst_o* super, UnityEngine_GameObject_o* menuObject, App_Unit_o* unit, App_ShopSellMenu_SelectEventHandler_o* selectEventHandler, App_ShopSellMenu_DecideItemEventHandler_o* decideItemEventHandler, App_ShopSellMenu_CancelItemEventHandler_o* cancelItemEventHandler, App_ShopSellMenu_DecideEventHandler_o* decideEventHandler, App_ShopSellMenu_RequestCloseEventHandler_o* requestCloseEventHandler, App_ShopSellMenu_ChangeUnitToPrevEventHandler_o* changeUnitToPrevEventHandler, App_ShopSellMenu_ChangeUnitToNextEventHandler_o* changeUnitToNextEventHandler, App_ShopSellMenu_SwitchDetailDisplaywayEventHandler_o* switchDetailDisplaywayEventHandler, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_ShopSellMenu__BuildMenuItem (App_Unit_o* unit, int32_t showRowNum, int32_t kind, System_Boolean_array* decidedItem, App_ShopSellMenu_SelectEventHandler_o* selectEventHandler, App_ShopSellMenuItem_DecideItemEventHandler_o* decideItemEventHandler, App_ShopSellMenuItem_CancelItemEventHandler_o* cancelItemEventHandler, App_ShopSellMenu_DecideEventHandler_o* decideEventHandler, App_ShopSellMenu_ChangeUnitToPrevEventHandler_o* changeUnitToPrevEventHandler, App_ShopSellMenu_ChangeUnitToNextEventHandler_o* changeUnitToNextEventHandler, const MethodInfo* method);
void App_ShopSellMenu___ctor (App_ShopSellMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_ShopSellMenuContent_o* menuContent, App_Unit_o* unit, App_ShopSellMenu_SelectEventHandler_o* selectEventHandler, App_ShopSellMenu_DecideItemEventHandler_o* decideItemEventHandler, App_ShopSellMenu_CancelItemEventHandler_o* cancelItemEventHandler, App_ShopSellMenu_DecideEventHandler_o* decideEventHandler, App_ShopSellMenu_RequestCloseEventHandler_o* requestCloseEventHandler, App_ShopSellMenu_ChangeUnitToPrevEventHandler_o* changeUnitToPrevEventHandler, App_ShopSellMenu_ChangeUnitToNextEventHandler_o* changeUnitToNextEventHandler, App_ShopSellMenu_SwitchDetailDisplaywayEventHandler_o* switchDetailDisplaywayEventHandler, const MethodInfo* method);
void App_ShopSellMenu__RebuildMenu (App_ShopSellMenu_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_ShopSellMenu__RebuildMenu (App_ShopSellMenu_o* __this, const MethodInfo* method);
void App_ShopSellMenu__RebuildMenuItem (App_ShopSellMenu_o* __this, const MethodInfo* method);
System_String_o* App_ShopSellMenu__GetName (App_ShopSellMenu_o* __this, const MethodInfo* method);
App_BasicMenuSelect_o* App_ShopSellMenu__GetSelect (App_ShopSellMenu_o* __this, const MethodInfo* method);
void App_ShopSellMenu__EnableMenu (App_ShopSellMenu_o* __this, int32_t indicator, const MethodInfo* method);
void App_ShopSellMenu__MoveFrontCursorFrom (App_ShopSellMenu_o* __this, App_BasicMenu_o* fromMenu, const MethodInfo* method);
void App_ShopSellMenu__DisableMenu (App_ShopSellMenu_o* __this, const MethodInfo* method);
System_Collections_Generic_List_UnitItem__o* App_ShopSellMenu__GetDecidedList (App_ShopSellMenu_o* __this, int32_t max, const MethodInfo* method);
int32_t App_ShopSellMenu__GetTotalValue (App_ShopSellMenu_o* __this, const MethodInfo* method);
void App_ShopSellMenu__ClearDecided (App_ShopSellMenu_o* __this, const MethodInfo* method);
void App_ShopSellMenu__KeyLeft (App_ShopSellMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_ShopSellMenu__KeyRight (App_ShopSellMenu_o* __this, bool isTrigger, const MethodInfo* method);
int32_t App_ShopSellMenu__ACall (App_ShopSellMenu_o* __this, const MethodInfo* method);
int32_t App_ShopSellMenu__BCall (App_ShopSellMenu_o* __this, const MethodInfo* method);
int32_t App_ShopSellMenu__XCall (App_ShopSellMenu_o* __this, const MethodInfo* method);
void App_ShopSellMenu__OnDecideItem (App_ShopSellMenu_o* __this, int32_t itemIndex, const MethodInfo* method);
void App_ShopSellMenu__OnCancelItem (App_ShopSellMenu_o* __this, int32_t itemIndex, const MethodInfo* method);
void App_ShopSellMenu__SellMulti (App_ShopSellMenu_o* __this, const MethodInfo* method);
int32_t App_ShopSellMenu__Compare (App_BasicMenuItem_o* lhs, App_BasicMenuItem_o* rhs, const MethodInfo* method);
