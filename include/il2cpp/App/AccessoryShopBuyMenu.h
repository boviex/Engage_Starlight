#pragma once

#include "il2cpp.h"

App_AccessoryShopBuyMenu_o* App_AccessoryShopBuyMenu__CreateBind (App_ProcInst_o* super, UnityEngine_GameObject_o* menuObject, App_AccessoryShopBuyMenu_SelectEventHandler_o* selectEventHandler, App_AccessoryShopBuyMenu_DecideEventHandler_o* decideEventHandler, App_AccessoryShopBuyMenu_RequestCloseEventHandler_o* requestCloseEventHandler, App_AccessoryShopBuyMenu_ChangeKindEventHandler_o* changeKindEventHandler, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_AccessoryShopBuyMenu__CreateMenuItem (App_AccessoryShopContent_array* shopContentArray, int32_t showRowNum, int32_t kind, App_AccessoryShopBuyMenu_SelectEventHandler_o* selectEventHandler, App_AccessoryShopBuyMenu_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
void App_AccessoryShopBuyMenu___ctor (App_AccessoryShopBuyMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_AccessoryShopBuyMenuContent_o* menuContent, App_AccessoryShopContent_array* accessoryShopContentArray, App_AccessoryShopBuyMenu_SelectEventHandler_o* selectEventHandler, App_AccessoryShopBuyMenu_DecideEventHandler_o* decideEventHandler, App_AccessoryShopBuyMenu_RequestCloseEventHandler_o* requestCloseEventHandler, App_AccessoryShopBuyMenu_ChangeKindEventHandler_o* changeKindEventHandler, const MethodInfo* method);
void App_AccessoryShopBuyMenu__RebuildMenu (App_AccessoryShopBuyMenu_o* __this, bool setupShopdata, const MethodInfo* method);
void App_AccessoryShopBuyMenu__RebuildMenuItem (App_AccessoryShopBuyMenu_o* __this, const MethodInfo* method);
System_Collections_Generic_List_AccessoryShopContent__o* App_AccessoryShopBuyMenu__Filter (App_AccessoryShopContent_array* shopContentArray, int32_t kind, const MethodInfo* method);
System_String_o* App_AccessoryShopBuyMenu__GetName (App_AccessoryShopBuyMenu_o* __this, const MethodInfo* method);
void App_AccessoryShopBuyMenu__EnableMenu (App_AccessoryShopBuyMenu_o* __this, const MethodInfo* method);
void App_AccessoryShopBuyMenu__DisableMenu (App_AccessoryShopBuyMenu_o* __this, const MethodInfo* method);
void App_AccessoryShopBuyMenu__Show (App_AccessoryShopBuyMenu_o* __this, const MethodInfo* method);
void App_AccessoryShopBuyMenu__Hide (App_AccessoryShopBuyMenu_o* __this, const MethodInfo* method);
App_BasicMenuSelect_o* App_AccessoryShopBuyMenu__GetSelect (App_AccessoryShopBuyMenu_o* __this, const MethodInfo* method);
int32_t App_AccessoryShopBuyMenu__GetCurrentAccessoryKind (App_AccessoryShopBuyMenu_o* __this, const MethodInfo* method);
void App_AccessoryShopBuyMenu__KeyLeft (App_AccessoryShopBuyMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_AccessoryShopBuyMenu__KeyRight (App_AccessoryShopBuyMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_AccessoryShopBuyMenu__OnDoneToBuy (App_AccessoryShopBuyMenu_o* __this, const MethodInfo* method);
int32_t App_AccessoryShopBuyMenu__BCall (App_AccessoryShopBuyMenu_o* __this, const MethodInfo* method);
