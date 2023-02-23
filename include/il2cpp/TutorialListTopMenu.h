#pragma once

#include "il2cpp.h"

void TutorialListTopMenu___ctor (TutorialListTopMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, TutorialListTopMenuContent_o* menuContent, int32_t index, TutorialListTopMenu_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
System_String_o* TutorialListTopMenu__GetName (TutorialListTopMenu_o* __this, const MethodInfo* method);
int32_t TutorialListTopMenu__BCall (TutorialListTopMenu_o* __this, const MethodInfo* method);
int32_t TutorialListTopMenu__GetTutorialDataType (int32_t select, const MethodInfo* method);
System_String_o* TutorialListTopMenu__GetTutorialCategoryTitleName (int32_t select, const MethodInfo* method);
UnityEngine_GameObject_o* TutorialListTopMenu__CreateBind (App_ProcInst_o* super, System_Collections_Generic_List_TutorialListTopMenu_SelectCategoryType__o** categoryList, int32_t selectCategory, bool isGetAllTutorial, TutorialListTopMenu_DecideEventHandler_o* decideEventHandler, const MethodInfo* method);
void TutorialListTopMenu__AddMenuItemList (System_Collections_Generic_List_BasicMenuItem__o** menuItemList, App_BasicMenuItem_o* menuItem, int32_t categoryType, System_Collections_Generic_List_TutorialListTopMenu_SelectCategoryType__o** categoryList, int32_t selectCategory, bool isGetAllTutorial, int32_t* index, const MethodInfo* method);
