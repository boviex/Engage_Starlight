#pragma once

#include "il2cpp.h"

App_ProfileCardStampListMenu_o* App_ProfileCardStampListMenu__CreateBind (App_ProcInst_o* super, App_ProfileCardStampListMenuContent_o* menuContent, App_ProfileCardStampData_o* initialStampData, App_ProfileCardStampListMenu_DecideEventHandler_o* decideEventHandler, App_ProfileCardStampListMenu_CloseEventHandler_o* closeEventHandler, App_ProfileCardStampListMenu_DisposeEventHandler_o* disposeEventHandler, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_ProfileCardStampListMenu__CreateMenuItem (int32_t category, App_ProfileCardStampData_o* initialStampData, App_ProfileCardStampListMenu_DecideEventHandler_o* decideEventHandler, int32_t* initialDecidedIndex, const MethodInfo* method);
void App_ProfileCardStampListMenu___ctor (App_ProfileCardStampListMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_GridMenuContent_o* menuContent, int32_t initialCategory, int32_t initialSelectedIndex, App_ProfileCardStampListMenu_DecideEventHandler_o* decideEventHandler, App_ProfileCardStampListMenu_CloseEventHandler_o* closeEventHandler, App_ProfileCardStampListMenu_DisposeEventHandler_o* disposeEventHandler, const MethodInfo* method);
void App_ProfileCardStampListMenu__OnBuild (App_ProfileCardStampListMenu_o* __this, bool isFirstBuild, const MethodInfo* method);
void App_ProfileCardStampListMenu__RebuildMenu (App_ProfileCardStampListMenu_o* __this, const MethodInfo* method);
System_String_o* App_ProfileCardStampListMenu__GetName (App_ProfileCardStampListMenu_o* __this, const MethodInfo* method);
App_BasicMenuSelect_o* App_ProfileCardStampListMenu__GetSelect (App_ProfileCardStampListMenu_o* __this, const MethodInfo* method);
void App_ProfileCardStampListMenu__UpdateContent (App_ProfileCardStampListMenu_o* __this, const MethodInfo* method);
int32_t App_ProfileCardStampListMenu__CustomCall (App_ProfileCardStampListMenu_o* __this, const MethodInfo* method);
int32_t App_ProfileCardStampListMenu__LRepeatCall (App_ProfileCardStampListMenu_o* __this, bool isTrigger, const MethodInfo* method);
int32_t App_ProfileCardStampListMenu__RRepeatCall (App_ProfileCardStampListMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_ProfileCardStampListMenu__OnClose (App_ProfileCardStampListMenu_o* __this, const MethodInfo* method);
void App_ProfileCardStampListMenu__OnDispose (App_ProfileCardStampListMenu_o* __this, const MethodInfo* method);
void App_ProfileCardStampListMenu___cctor (const MethodInfo* method);
