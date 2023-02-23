#pragma once

#include "il2cpp.h"

void TutorialListSelectMenu___ctor (TutorialListSelectMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, TutorialListSelectMenuContent_o* menuContent, System_Collections_Generic_List_TutorialListTopMenu_SelectCategoryType__o* categorylList, int32_t selectCategory, bool isGetAllTutorial, TutorialListRoot_o* root, TutorialListSelectMenu_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
System_String_o* TutorialListSelectMenu__GetName (TutorialListSelectMenu_o* __this, const MethodInfo* method);
int32_t TutorialListSelectMenu__BCall (TutorialListSelectMenu_o* __this, const MethodInfo* method);
int32_t TutorialListSelectMenu__CustomCall (TutorialListSelectMenu_o* __this, const MethodInfo* method);
void TutorialListSelectMenu__SwitchTutorialCategory (TutorialListSelectMenu_o* __this, int32_t value, const MethodInfo* method);
void TutorialListSelectMenu__RebuildMenuItem (TutorialListSelectMenu_o* __this, const MethodInfo* method);
UnityEngine_GameObject_o* TutorialListSelectMenu__CreateBind (App_ProcInst_o* super, System_Collections_Generic_List_TutorialListTopMenu_SelectCategoryType__o** categoryList, int32_t selectCategory, bool isGetAllTutorial, TutorialListSelectMenu_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
