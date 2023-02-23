#pragma once

#include "il2cpp.h"

App_ProfileCardTitleMenu_o* App_ProfileCardTitleMenu__CreateBind (App_ProcInst_o* super, App_ProfileCardTextListMenuContent_o* menuContent, App_ProfileCardRoot_o* cardRoot, App_ProfileCard_o* myProfileCardTemp, App_ProfileCardTitleMenu_DisposeEventHandler_o* disposeEventHandler, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_ProfileCardTitleMenu__CreateMenuItem (App_ProfileCardTitleData_o* initialTitleData, bool sorting, int32_t* initialDecidedIndex, const MethodInfo* method);
void App_ProfileCardTitleMenu___ctor (App_ProfileCardTitleMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_BasicMenuContent_o* menuContent, App_ProfileCardRoot_o* cardRoot, App_ProfileCard_o* myProfileCardTemp, int32_t initialDecidedIndex, App_ProfileCardTitleMenu_DisposeEventHandler_o* disposeEventHandler, const MethodInfo* method);
void App_ProfileCardTitleMenu__OnBuild (App_ProfileCardTitleMenu_o* __this, bool isFirstBuild, const MethodInfo* method);
void App_ProfileCardTitleMenu__RebuildMenu (App_ProfileCardTitleMenu_o* __this, const MethodInfo* method);
System_String_o* App_ProfileCardTitleMenu__GetName (App_ProfileCardTitleMenu_o* __this, const MethodInfo* method);
void App_ProfileCardTitleMenu__UpdateCardRoot (App_ProfileCardTitleMenu_o* __this, App_ProfileCardTitleData_o* titleData, const MethodInfo* method);
bool App_ProfileCardTitleMenu__UpdateDecided (App_ProfileCardTitleMenu_o* __this, int32_t menuItemIndex, const MethodInfo* method);
int32_t App_ProfileCardTitleMenu__BCall (App_ProfileCardTitleMenu_o* __this, const MethodInfo* method);
int32_t App_ProfileCardTitleMenu__CustomCall (App_ProfileCardTitleMenu_o* __this, const MethodInfo* method);
void App_ProfileCardTitleMenu__OnDispose (App_ProfileCardTitleMenu_o* __this, const MethodInfo* method);
void App_ProfileCardTitleMenu___cctor (const MethodInfo* method);
