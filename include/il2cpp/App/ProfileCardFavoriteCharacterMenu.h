#pragma once

#include "il2cpp.h"

App_ProfileCardFavoriteCharacterMenu_o* App_ProfileCardFavoriteCharacterMenu__CreateBind (App_ProcInst_o* super, App_ProfileCardTextListMenuContent_o* menuContent, App_ProfileCardRoot_o* profileCardRoot, App_ProfileCard_o* myProfileCardTemp, App_ProfileCardFavoriteCharacterMenu_DisposeEventHandler_o* disposeEventHandler, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_ProfileCardFavoriteCharacterMenu__CreateMenuItem (App_ProfileCardFavoriteCharacterData_o* initialCharacter, bool sorting, int32_t* initialDecidedIndex, const MethodInfo* method);
void App_ProfileCardFavoriteCharacterMenu___ctor (App_ProfileCardFavoriteCharacterMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_BasicMenuContent_o* menuContent, App_ProfileCardRoot_o* profileCardRoot, App_ProfileCard_o* myProfileCardTemp, int32_t initialDecidedIndex, App_ProfileCardFavoriteCharacterMenu_DisposeEventHandler_o* disposeEventHandler, const MethodInfo* method);
void App_ProfileCardFavoriteCharacterMenu__OnBuild (App_ProfileCardFavoriteCharacterMenu_o* __this, bool isFirstBuild, const MethodInfo* method);
void App_ProfileCardFavoriteCharacterMenu__RebuildMenu (App_ProfileCardFavoriteCharacterMenu_o* __this, const MethodInfo* method);
System_String_o* App_ProfileCardFavoriteCharacterMenu__GetName (App_ProfileCardFavoriteCharacterMenu_o* __this, const MethodInfo* method);
void App_ProfileCardFavoriteCharacterMenu__UpdateCardRoot (App_ProfileCardFavoriteCharacterMenu_o* __this, App_ProfileCardFavoriteCharacterData_o* characterData, const MethodInfo* method);
bool App_ProfileCardFavoriteCharacterMenu__UpdateDecided (App_ProfileCardFavoriteCharacterMenu_o* __this, int32_t menuItemIndex, const MethodInfo* method);
int32_t App_ProfileCardFavoriteCharacterMenu__BCall (App_ProfileCardFavoriteCharacterMenu_o* __this, const MethodInfo* method);
int32_t App_ProfileCardFavoriteCharacterMenu__CustomCall (App_ProfileCardFavoriteCharacterMenu_o* __this, const MethodInfo* method);
void App_ProfileCardFavoriteCharacterMenu__OnDispose (App_ProfileCardFavoriteCharacterMenu_o* __this, const MethodInfo* method);
void App_ProfileCardFavoriteCharacterMenu___cctor (const MethodInfo* method);
