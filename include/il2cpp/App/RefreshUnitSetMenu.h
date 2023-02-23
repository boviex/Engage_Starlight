#pragma once

#include "il2cpp.h"

App_RefreshUnitSetMenu_o* App_RefreshUnitSetMenu__CreateBind (App_ProcInst_o* super, App_RefreshUnitSetMenuContent_o* menuContent, System_Collections_Generic_Dictionary_string__Unit____o* unitArrayDic, App_HubFacilityData_o* initialFacilityData, App_RefreshUnitSetMenu_SelectFacilityEventHandler_o* selectFacilityEventHandler, App_RefreshUnitSetMenu_SetUnitEventHandler_o* setUnitEventHandler, App_RefreshUnitSetMenu_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_RefreshUnitSetMenu__CreateMenuItem (App_Unit_array* unitArray, App_RefreshUnitSetMenu_DecideEventHandler_o* decideEventHandler, int32_t* initialSelectIndex, const MethodInfo* method);
void App_RefreshUnitSetMenu___ctor (App_RefreshUnitSetMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_RefreshUnitSetMenuContent_o* menuContent, int32_t initialSelectIndex, System_Collections_Generic_Dictionary_string__Unit____o* unitArrayDic, App_HubFacilityData_o* initialFacilityData, App_RefreshUnitSetMenu_SelectFacilityEventHandler_o* selectFacilityEventHandler, App_RefreshUnitSetMenu_SetUnitEventHandler_o* setUnitEventHandler, App_RefreshUnitSetMenu_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
System_String_o* App_RefreshUnitSetMenu__GetName (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
App_HubFacilityData_o* App_RefreshUnitSetMenu__GetFacilityData (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetMenu__IncFacilityIndex (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetMenu__DecFacilityIndex (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
bool App_RefreshUnitSetMenu__IsSelectedFirstFacility (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
bool App_RefreshUnitSetMenu__IsSelectedLastFacility (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetMenu__ChangeFacilityIndex (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetMenu__UpdataFacility (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetMenu__SetUnit (App_RefreshUnitSetMenu_o* __this, int32_t index, App_Unit_o* unit, const MethodInfo* method);
void App_RefreshUnitSetMenu__EntrustUnit (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetMenu__DecideUnit (App_RefreshUnitSetMenu_o* __this, int32_t index, bool decided, const MethodInfo* method);
void App_RefreshUnitSetMenu__UpdateReliance (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
bool App_RefreshUnitSetMenu__IsEnabledDecideMenu (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
bool App_RefreshUnitSetMenu__IsUsabledDecideMenu (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetMenu__UpdateDecideMenu (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetMenu__FocusDecideMenu (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetMenu__FocusThisMenu (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetMenu__KeyUp (App_RefreshUnitSetMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_RefreshUnitSetMenu__KeyDown (App_RefreshUnitSetMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_RefreshUnitSetMenu__KeyLeft (App_RefreshUnitSetMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_RefreshUnitSetMenu__KeyRight (App_RefreshUnitSetMenu_o* __this, bool isTrigger, const MethodInfo* method);
int32_t App_RefreshUnitSetMenu__LCall (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
int32_t App_RefreshUnitSetMenu__BCall (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetMenu__OnDispose (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetMenu____ctor_b__12_0 (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetMenu____ctor_b__12_1 (App_RefreshUnitSetMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetMenu____ctor_b__12_2 (App_RefreshUnitSetMenu_o* __this, int32_t decideMenuResult, const MethodInfo* method);
void App_RefreshUnitSetMenu____ctor_b__12_3 (App_RefreshUnitSetMenu_o* __this, int32_t confirmDialogResult, const MethodInfo* method);
