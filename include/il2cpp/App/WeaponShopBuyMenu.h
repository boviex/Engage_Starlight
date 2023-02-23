#pragma once

#include "il2cpp.h"

App_WeaponShopBuyMenu_o* App_WeaponShopBuyMenu__CreateBind (App_ProcInst_o* super, UnityEngine_GameObject_o* menuObject, App_Unit_o* unit, App_WeaponShopBuyMenu_SelectEventHandler_o* selectEventHandler, App_WeaponShopBuyMenu_DecideEventHandler_o* decideEventHandler, App_WeaponShopBuyMenu_RequestCloseEventHandler_o* requestCloseMenuEventHandler, App_WeaponShopBuyMenu_ChangeUnitToPrevEventHandler_o* changeUnitToPrevEventHandler, App_WeaponShopBuyMenu_ChangeUnitToNextEventHandler_o* changeUnitToNextEventHandler, App_WeaponShopBuyMenu_SwitchDetailDisplaywayEventHandler_o* switchDetailDisplayWayEventHandler, const MethodInfo* method);
void App_WeaponShopBuyMenu___ctor (App_WeaponShopBuyMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_WeaponShopBuyMenuContent_o* menuContent, App_ShopContent_array* shopContentArray, App_Unit_o* unit, App_WeaponShopBuyMenu_SelectEventHandler_o* selectEventHandler, App_WeaponShopBuyMenu_DecideEventHandler_o* decideEventHandler, App_WeaponShopBuyMenu_RequestCloseEventHandler_o* requestCloseMenuEventHandler, App_WeaponShopBuyMenu_ChangeUnitToPrevEventHandler_o* changeUnitToPrevEventHandler, App_WeaponShopBuyMenu_ChangeUnitToNextEventHandler_o* changeUnitToNextEventHandler, App_WeaponShopBuyMenu_SwitchDetailDisplaywayEventHandler_o* switchDetailDisplaywayEventHandler, const MethodInfo* method);
void App_WeaponShopBuyMenu__RebuildMenu (App_WeaponShopBuyMenu_o* __this, App_Unit_o* unit, bool keepSelect, bool setupShopdata, const MethodInfo* method);
void App_WeaponShopBuyMenu__RebuildMenu (App_WeaponShopBuyMenu_o* __this, bool keepSelect, bool setupShopdata, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_WeaponShopBuyMenu__CreateMenuItem (App_ShopContent_array* shopContentArray, int32_t kind, App_Unit_o* unit, App_WeaponShopBuyMenu_SelectEventHandler_o* selectEventHandler, App_WeaponShopBuyMenu_DecideEventHandler_o* decideEventHandler, App_WeaponShopBuyMenu_ChangeUnitToPrevEventHandler_o* changeUnitToPrevEventHandler, App_WeaponShopBuyMenu_ChangeUnitToNextEventHandler_o* changeUnitToNextEventHandler, const MethodInfo* method);
System_Collections_Generic_List_ShopContent__o* App_WeaponShopBuyMenu__Filter (App_ShopContent_array* shopContentArray, int32_t kind, const MethodInfo* method);
void App_WeaponShopBuyMenu__AfterBuild (App_WeaponShopBuyMenu_o* __this, const MethodInfo* method);
System_String_o* App_WeaponShopBuyMenu__GetName (App_WeaponShopBuyMenu_o* __this, const MethodInfo* method);
App_BasicMenuSelect_o* App_WeaponShopBuyMenu__GetSelect (App_WeaponShopBuyMenu_o* __this, const MethodInfo* method);
void App_WeaponShopBuyMenu__KeyLeft (App_WeaponShopBuyMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_WeaponShopBuyMenu__KeyRight (App_WeaponShopBuyMenu_o* __this, bool isTrigger, const MethodInfo* method);
int32_t App_WeaponShopBuyMenu__ACall (App_WeaponShopBuyMenu_o* __this, const MethodInfo* method);
int32_t App_WeaponShopBuyMenu__BCall (App_WeaponShopBuyMenu_o* __this, const MethodInfo* method);
int32_t App_WeaponShopBuyMenu__XCall (App_WeaponShopBuyMenu_o* __this, const MethodInfo* method);
int32_t App_WeaponShopBuyMenu__CustomCall (App_WeaponShopBuyMenu_o* __this, const MethodInfo* method);
void App_WeaponShopBuyMenu__OnDoneToBuy (App_WeaponShopBuyMenu_o* __this, const MethodInfo* method);
