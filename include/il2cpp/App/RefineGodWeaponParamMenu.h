#pragma once

#include "il2cpp.h"

App_GodUnit_o* App_RefineGodWeaponParamMenu__get_m_GodUnit (App_RefineGodWeaponParamMenu_o* __this, const MethodInfo* method);
void App_RefineGodWeaponParamMenu__set_m_GodUnit (App_RefineGodWeaponParamMenu_o* __this, App_GodUnit_o* value, const MethodInfo* method);
System_Collections_Generic_List_ItemData__o* App_RefineGodWeaponParamMenu__get_m_GodWeaponList (App_RefineGodWeaponParamMenu_o* __this, const MethodInfo* method);
void App_RefineGodWeaponParamMenu__set_m_GodWeaponList (App_RefineGodWeaponParamMenu_o* __this, System_Collections_Generic_List_ItemData__o* value, const MethodInfo* method);
int32_t App_RefineGodWeaponParamMenu__get_m_GodWeaponIndex (App_RefineGodWeaponParamMenu_o* __this, const MethodInfo* method);
void App_RefineGodWeaponParamMenu__set_m_GodWeaponIndex (App_RefineGodWeaponParamMenu_o* __this, int32_t value, const MethodInfo* method);
App_ItemData_o* App_RefineGodWeaponParamMenu__get_m_GodWeapon (App_RefineGodWeaponParamMenu_o* __this, const MethodInfo* method);
void App_RefineGodWeaponParamMenu__set_m_GodWeapon (App_RefineGodWeaponParamMenu_o* __this, App_ItemData_o* value, const MethodInfo* method);
bool App_RefineGodWeaponParamMenu__get_m_RefineOrReset (App_RefineGodWeaponParamMenu_o* __this, const MethodInfo* method);
void App_RefineGodWeaponParamMenu__set_m_RefineOrReset (App_RefineGodWeaponParamMenu_o* __this, bool value, const MethodInfo* method);
App_RefineGodWeaponParamMenu_o* App_RefineGodWeaponParamMenu__CreateBind (App_ProcInst_o* super, App_RefineGodWeaponParamMenuContent_o* menuContent, App_GodUnit_o* godUnit, App_ItemData_o* initialGodWeapon, bool refineOrReset, App_RefineGodWeaponParamMenu_SelectEventHandler_o* selectEventHandler, App_RefineGodWeaponParamMenu_DecideEventHandler_o* decideEventHandler, App_RefineGodWeaponParamMenu_RequestCloseEventHandler_o* requestCloseEventHandler, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_RefineGodWeaponParamMenu__CreateMenuItem (App_ItemData_o* godWeapon, App_GodUnit_o* godUnit, bool refineOrReset, App_RefineGodWeaponParamMenu_SelectEventHandler_o* selectEventHandler, App_RefineGodWeaponParamMenu_DecideEventHandler_o* decideEventHandler, App_RefineGodWeaponParamMenu_RequestCloseEventHandler_o* requestCloseEventHandler, const MethodInfo* method);
void App_RefineGodWeaponParamMenu___ctor (App_RefineGodWeaponParamMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_BasicMenuContent_o* menuContent, App_GodUnit_o* godUnit, System_Collections_Generic_List_ItemData__o* godWeaponList, int32_t initialGodWeaponIndex, bool refineOrReset, App_RefineGodWeaponParamMenu_SelectEventHandler_o* selectEventHandler, App_RefineGodWeaponParamMenu_DecideEventHandler_o* decideEventHandler, App_RefineGodWeaponParamMenu_RequestCloseEventHandler_o* requestCloseEventHandler, const MethodInfo* method);
void App_RefineGodWeaponParamMenu__RebuildMenu (App_RefineGodWeaponParamMenu_o* __this, const MethodInfo* method);
System_String_o* App_RefineGodWeaponParamMenu__GetName (App_RefineGodWeaponParamMenu_o* __this, const MethodInfo* method);
App_BasicMenuSelect_o* App_RefineGodWeaponParamMenu__GetSelect (App_RefineGodWeaponParamMenu_o* __this, const MethodInfo* method);
void App_RefineGodWeaponParamMenu__KeyLeft (App_RefineGodWeaponParamMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_RefineGodWeaponParamMenu__KeyRight (App_RefineGodWeaponParamMenu_o* __this, bool isTrigger, const MethodInfo* method);
int32_t App_RefineGodWeaponParamMenu__ACall (App_RefineGodWeaponParamMenu_o* __this, const MethodInfo* method);
void App_RefineGodWeaponParamMenu__OnDispose (App_RefineGodWeaponParamMenu_o* __this, const MethodInfo* method);
void App_RefineGodWeaponParamMenu___cctor (const MethodInfo* method);
