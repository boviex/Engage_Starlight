#pragma once

#include "il2cpp.h"

App_AccessoryShopChangeMenu_o* App_AccessoryShopChangeMenu__CreateBind (App_ProcInst_o* super, UnityEngine_GameObject_o* menuObject, App_Unit_o* unit, App_AccessoryMenuItem_SelectEventHandler_o* selectEventHandler, App_AccessoryMenuItem_DecideEventHandler_o* decideEventHandler, App_AccessoryShopChangeMenu_RequestCloseEventHandler_o* requestCloseEventHandler, App_AccessoryShopChangeMenu_ChangeKindEventHandler_o* changeKindEventHandler, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_AccessoryShopChangeMenu__CreateMenuItem (int32_t showRowNum, int32_t kind, App_Unit_o* unit, App_AccessoryMenuItem_SelectEventHandler_o* selectEventHandler, App_AccessoryMenuItem_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
void App_AccessoryShopChangeMenu___ctor (App_AccessoryShopChangeMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_AccessoryShopChangeMenuContent_o* menuContent, App_Unit_o* unit, App_AccessoryMenuItem_SelectEventHandler_o* selectEventHandler, App_AccessoryMenuItem_DecideEventHandler_o* decideEventHandler, App_AccessoryShopChangeMenu_RequestCloseEventHandler_o* requestCloseEventHandler, App_AccessoryShopChangeMenu_ChangeKindEventHandler_o* changeKindEventHandler, const MethodInfo* method);
void App_AccessoryShopChangeMenu__RebuildMenu (App_AccessoryShopChangeMenu_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_AccessoryShopChangeMenu__RebuildMenu (App_AccessoryShopChangeMenu_o* __this, const MethodInfo* method);
void App_AccessoryShopChangeMenu__RebuildMenuItem (App_AccessoryShopChangeMenu_o* __this, const MethodInfo* method);
System_Collections_Generic_List_AccessoryData__o* App_AccessoryShopChangeMenu__Filter (int32_t kind, App_Unit_o* unit, const MethodInfo* method);
void App_AccessoryShopChangeMenu__AfterBuild (App_AccessoryShopChangeMenu_o* __this, const MethodInfo* method);
System_String_o* App_AccessoryShopChangeMenu__GetName (App_AccessoryShopChangeMenu_o* __this, const MethodInfo* method);
void App_AccessoryShopChangeMenu__EnableMenu (App_AccessoryShopChangeMenu_o* __this, const MethodInfo* method);
void App_AccessoryShopChangeMenu__DisableMenu (App_AccessoryShopChangeMenu_o* __this, const MethodInfo* method);
void App_AccessoryShopChangeMenu__Show (App_AccessoryShopChangeMenu_o* __this, const MethodInfo* method);
void App_AccessoryShopChangeMenu__Hide (App_AccessoryShopChangeMenu_o* __this, const MethodInfo* method);
App_BasicMenuSelect_o* App_AccessoryShopChangeMenu__GetSelect (App_AccessoryShopChangeMenu_o* __this, const MethodInfo* method);
App_AccessoryData_o* App_AccessoryShopChangeMenu__GetSelectedAccessoryData (App_AccessoryShopChangeMenu_o* __this, const MethodInfo* method);
int32_t App_AccessoryShopChangeMenu__GetCurrentAccessoryKind (App_AccessoryShopChangeMenu_o* __this, const MethodInfo* method);
void App_AccessoryShopChangeMenu__UpdateDecision (App_AccessoryShopChangeMenu_o* __this, App_UnitAccessoryList_o* unitAccessoryList, const MethodInfo* method);
void App_AccessoryShopChangeMenu__UpdateCursorZOrder (App_AccessoryShopChangeMenu_o* __this, const MethodInfo* method);
void App_AccessoryShopChangeMenu__PrepareToChangeUnit (App_AccessoryShopChangeMenu_o* __this, const MethodInfo* method);
void App_AccessoryShopChangeMenu__KeyLeft (App_AccessoryShopChangeMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_AccessoryShopChangeMenu__KeyRight (App_AccessoryShopChangeMenu_o* __this, bool isTrigger, const MethodInfo* method);
int32_t App_AccessoryShopChangeMenu__BCall (App_AccessoryShopChangeMenu_o* __this, const MethodInfo* method);
