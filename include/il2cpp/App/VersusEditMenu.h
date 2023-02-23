#pragma once

#include "il2cpp.h"

App_VersusMapEditObjListMenuItemContent_o* App_VersusEditMenu__get_MenuItemContentOld (App_VersusEditMenu_o* __this, const MethodInfo* method);
void App_VersusEditMenu__set_MenuItemContentOld (App_VersusEditMenu_o* __this, App_VersusMapEditObjListMenuItemContent_o* value, const MethodInfo* method);
void App_VersusEditMenu__CreateBind (App_ProcInst_o* super, System_Collections_Generic_List_MapEditorObjectData__o* objList, App_VersusMapEditContent_o* menuEditContent, System_Action_int__o* ToOneCallCallback, int32_t firstSelect, System_Action_MapEditorCategoryData__o* onSelectCallback, System_Action_o* onCloseCallback, const MethodInfo* method);
void App_VersusEditMenu___ctor (App_VersusEditMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_VersusMapEditObjListMenuContent_o* menuContent, int32_t firstSelect, const MethodInfo* method);
void App_VersusEditMenu__AfterBuild (App_VersusEditMenu_o* __this, const MethodInfo* method);
void App_VersusEditMenu__OnClose (App_VersusEditMenu_o* __this, const MethodInfo* method);
System_String_o* App_VersusEditMenu__GetName (App_VersusEditMenu_o* __this, const MethodInfo* method);
void App_VersusEditMenu__KeyUp (App_VersusEditMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_VersusEditMenu__KeyDown (App_VersusEditMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_VersusEditMenu__KeyLeft (App_VersusEditMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_VersusEditMenu__KeyRight (App_VersusEditMenu_o* __this, bool isTrigger, const MethodInfo* method);
bool App_VersusEditMenu__TickInput (App_VersusEditMenu_o* __this, const MethodInfo* method);
UnityEngine_Sprite_o* App_VersusEditMenu__GetThumbSprite (App_VersusEditMenu_o* __this, System_String_o* name, const MethodInfo* method);
UnityEngine_Sprite_o* App_VersusEditMenu__GetCategorySprite (App_VersusEditMenu_o* __this, System_String_o* name, const MethodInfo* method);
void App_VersusEditMenu__ToOne (App_VersusEditMenu_o* __this, int32_t selectIndex, const MethodInfo* method);
void App_VersusEditMenu___cctor (const MethodInfo* method);
