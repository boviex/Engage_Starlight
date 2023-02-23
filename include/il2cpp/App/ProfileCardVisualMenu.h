#pragma once

#include "il2cpp.h"

App_ProfileCardVisualMenu_o* App_ProfileCardVisualMenu__CreateBind (App_ProcInst_o* super, App_ProfileCardVisualMenuContent_o* menuContent, App_ProfileCardRoot_o* profileCardRoot, App_ProfileCard_o* myProfileCardTemp, int32_t initialCategory, App_ProfileCardVisualMenu_DecideEventHandler_o* decideEventHandler, App_ProfileCardVisualMenu_DisposeEventHandler_o* disposeEventHandler, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_ProfileCardVisualMenu__CreateMenuItem (int32_t category, App_ProfileCard_o* myProfileCardTemp, int32_t* initialDecidedIndex, const MethodInfo* method);
void App_ProfileCardVisualMenu___ctor (App_ProfileCardVisualMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_GridMenuContent_o* menuContent, App_ProfileCardRoot_o* profileCardRoot, App_ProfileCard_o* myProfileCardTemp, int32_t category, int32_t initialDecidedIndex, App_ProfileCardVisualMenu_DecideEventHandler_o* decideEventHandler, App_ProfileCardVisualMenu_DisposeEventHandler_o* disposeEventHandler, const MethodInfo* method);
void App_ProfileCardVisualMenu__OnBuild (App_ProfileCardVisualMenu_o* __this, bool isFirstBuild, const MethodInfo* method);
void App_ProfileCardVisualMenu__RebuildMenu (App_ProfileCardVisualMenu_o* __this, const MethodInfo* method);
System_String_o* App_ProfileCardVisualMenu__GetName (App_ProfileCardVisualMenu_o* __this, const MethodInfo* method);
App_BasicMenuSelect_o* App_ProfileCardVisualMenu__GetSelect (App_ProfileCardVisualMenu_o* __this, const MethodInfo* method);
bool App_ProfileCardVisualMenu__UpdateDecided (App_ProfileCardVisualMenu_o* __this, int32_t menuItemIndex, const MethodInfo* method);
void App_ProfileCardVisualMenu__UpdateDecidedRemovable (App_ProfileCardVisualMenu_o* __this, int32_t menuItemIndex, const MethodInfo* method);
System_String_o* App_ProfileCardVisualMenu__UpdateProfileData (App_ProfileCardVisualMenu_o* __this, bool remove, const MethodInfo* method);
void App_ProfileCardVisualMenu__UpdateContent (App_ProfileCardVisualMenu_o* __this, const MethodInfo* method);
void App_ProfileCardVisualMenu__UpdateCardRoot (App_ProfileCardVisualMenu_o* __this, int32_t menuItemIndex, const MethodInfo* method);
void App_ProfileCardVisualMenu__OnDispose (App_ProfileCardVisualMenu_o* __this, const MethodInfo* method);
void App_ProfileCardVisualMenu___cctor (const MethodInfo* method);
