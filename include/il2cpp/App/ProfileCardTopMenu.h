#pragma once

#include "il2cpp.h"

App_ProfileCardTopMenu_o* App_ProfileCardTopMenu__CreateBind (App_ProcInst_o* super, int32_t initialSelected, bool enabledPhoto, App_ProfileCardTopMenu_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
void App_ProfileCardTopMenu___ctor (App_ProfileCardTopMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_BasicMenuContent_o* menuContent, App_ProfileCardTopMenuRoot_o* menuRoot, int32_t initialSelected, App_ProfileCardTopMenu_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
System_String_o* App_ProfileCardTopMenu__GetName (App_ProfileCardTopMenu_o* __this, const MethodInfo* method);
void App_ProfileCardTopMenu__UpdateInfoWindow (App_ProfileCardTopMenu_o* __this, System_String_o* captionMid, System_String_o* descriptionMid, System_String_o* warningMid, const MethodInfo* method);
int32_t App_ProfileCardTopMenu__BCall (App_ProfileCardTopMenu_o* __this, const MethodInfo* method);
void App_ProfileCardTopMenu__OnClose (App_ProfileCardTopMenu_o* __this, const MethodInfo* method);
void App_ProfileCardTopMenu__OnDispose (App_ProfileCardTopMenu_o* __this, const MethodInfo* method);
