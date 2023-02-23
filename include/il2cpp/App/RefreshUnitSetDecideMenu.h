#pragma once

#include "il2cpp.h"

App_RefreshUnitSetDecideMenu_o* App_RefreshUnitSetDecideMenu__Create (App_ProcInst_o* super, App_RefreshUnitSetDecideMenuContent_o* menuContent, bool enabled, bool usabled, App_RefreshUnitSetDecideMenu_KeyUpEventHandler_o* keyUpEventHandler, App_RefreshUnitSetDecideMenu_KeyDownEventHandler_o* keyDownEventHandler, App_RefreshUnitSetDecideMenu_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
void App_RefreshUnitSetDecideMenu___ctor (App_RefreshUnitSetDecideMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_RefreshUnitSetDecideMenuContent_o* menuContent, bool usabled, App_RefreshUnitSetDecideMenu_KeyUpEventHandler_o* keyUpEventHandler, App_RefreshUnitSetDecideMenu_KeyDownEventHandler_o* keyDownEventHandler, App_RefreshUnitSetDecideMenu_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_RefreshUnitSetDecideMenu__CreateMenuItemList (bool enabled, bool usabled, App_RefreshUnitSetDecideMenu_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
System_String_o* App_RefreshUnitSetDecideMenu__GetName (App_RefreshUnitSetDecideMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetDecideMenu__Tick (App_RefreshUnitSetDecideMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetDecideMenu__SetTextColor (App_RefreshUnitSetDecideMenu_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
void App_RefreshUnitSetDecideMenu__UpdateEnabled (App_RefreshUnitSetDecideMenu_o* __this, bool enabled, bool usabled, const MethodInfo* method);
void App_RefreshUnitSetDecideMenu__FocusThisMenu (App_RefreshUnitSetDecideMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetDecideMenu__UnfocusThisMenu (App_RefreshUnitSetDecideMenu_o* __this, const MethodInfo* method);
bool App_RefreshUnitSetDecideMenu__IsFocusedThisMenu (App_RefreshUnitSetDecideMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetDecideMenu__KeyUp (App_RefreshUnitSetDecideMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_RefreshUnitSetDecideMenu__KeyDown (App_RefreshUnitSetDecideMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_RefreshUnitSetDecideMenu__KeyLeft (App_RefreshUnitSetDecideMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_RefreshUnitSetDecideMenu__KeyRight (App_RefreshUnitSetDecideMenu_o* __this, bool isTrigger, const MethodInfo* method);
int32_t App_RefreshUnitSetDecideMenu__LCall (App_RefreshUnitSetDecideMenu_o* __this, const MethodInfo* method);
void App_RefreshUnitSetDecideMenu__OnDispose (App_RefreshUnitSetDecideMenu_o* __this, const MethodInfo* method);
