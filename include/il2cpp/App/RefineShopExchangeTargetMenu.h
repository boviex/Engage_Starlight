#pragma once

#include "il2cpp.h"

bool App_RefineShopExchangeTargetMenu__get_m_MenuItemIsEnoughMaterial (App_RefineShopExchangeTargetMenu_o* __this, const MethodInfo* method);
void App_RefineShopExchangeTargetMenu__set_m_MenuItemIsEnoughMaterial (App_RefineShopExchangeTargetMenu_o* __this, bool value, const MethodInfo* method);
bool App_RefineShopExchangeTargetMenu__get_m_MenuItemIsMaxMaterial (App_RefineShopExchangeTargetMenu_o* __this, const MethodInfo* method);
void App_RefineShopExchangeTargetMenu__set_m_MenuItemIsMaxMaterial (App_RefineShopExchangeTargetMenu_o* __this, bool value, const MethodInfo* method);
App_RefineShopExchangeTargetMenu_o* App_RefineShopExchangeTargetMenu__CreateBind (App_ProcInst_o* super, App_RefineShopExchangeTargetMenuContent_o* menuContent, System_String_o* initialTargetMaterialId, App_MaterialMenuItem_SelectEventHandler_o* selectEventHandler, App_MaterialMenuItem_DecideEventHandler_o* decideEventHandler, App_RefineShopExchangeTargetMenu_CloseEventHandler_o* closeEventHandler, const MethodInfo* method);
void App_RefineShopExchangeTargetMenu___ctor (App_RefineShopExchangeTargetMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_RefineShopExchangeTargetMenuContent_o* menuContent, int32_t initialSelectIndex, App_RefineShopExchangeTargetMenu_CloseEventHandler_o* closeEventHandler, const MethodInfo* method);
System_String_o* App_RefineShopExchangeTargetMenu__GetName (App_RefineShopExchangeTargetMenu_o* __this, const MethodInfo* method);
void App_RefineShopExchangeTargetMenu__UpdateContent (App_RefineShopExchangeTargetMenu_o* __this, bool menuItemIsEnabled, const MethodInfo* method);
void App_RefineShopExchangeTargetMenu__OnClose (App_RefineShopExchangeTargetMenu_o* __this, const MethodInfo* method);
void App_RefineShopExchangeTargetMenu__OnDispose (App_RefineShopExchangeTargetMenu_o* __this, const MethodInfo* method);
