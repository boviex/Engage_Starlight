#pragma once

#include "il2cpp.h"

void App_CookingMenu_UnitSelectMenu___ctor (App_CookingMenu_UnitSelectMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_CookingMenu_UnitSelectMenuContent_o* menuContent, System_Collections_Generic_List_Unit__o* selectUnitList, System_Action_o* closeCallback, const MethodInfo* method);
System_String_o* App_CookingMenu_UnitSelectMenu__GetName (App_CookingMenu_UnitSelectMenu_o* __this, const MethodInfo* method);
void App_CookingMenu_UnitSelectMenu__CreateBind (App_ProcInst_o* super, System_Collections_Generic_List_Unit__o* selectUnitList, App_CookingMenu_DishAllMenuContent_o* allContent, System_Action_o* closeCallback, const MethodInfo* method);
void App_CookingMenu_UnitSelectMenu__OnSelectMenuItem (App_Unit_o* unit, const MethodInfo* method);
int32_t App_CookingMenu_UnitSelectMenu__ACall (App_CookingMenu_UnitSelectMenu_o* __this, const MethodInfo* method);
void App_CookingMenu_UnitSelectMenu__NextItem (App_CookingMenu_UnitSelectMenu_o* __this, const MethodInfo* method);
int32_t App_CookingMenu_UnitSelectMenu__BCall (App_CookingMenu_UnitSelectMenu_o* __this, const MethodInfo* method);
App_CookingMenu_UnitSelectMenu_UnitSelectMenuItem_o* App_CookingMenu_UnitSelectMenu__GetUnitMenuItemCurrent (App_CookingMenu_UnitSelectMenu_o* __this, const MethodInfo* method);
App_CookingMenu_UnitSelectMenu_UnitSelectMenuItem_o* App_CookingMenu_UnitSelectMenu__GetUnitMenuItem (App_CookingMenu_UnitSelectMenu_o* __this, int32_t index, const MethodInfo* method);
App_CookingMenu_UnitSelectMenu_UnitSelectMenuItem_o* App_CookingMenu_UnitSelectMenu__GetUnitMenuItem (App_CookingMenu_UnitSelectMenu_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_CookingMenu_UnitSelectMenu__OnClose (App_CookingMenu_UnitSelectMenu_o* __this, const MethodInfo* method);
void App_CookingMenu_UnitSelectMenu__RestoreMenu (System_Collections_Generic_List_UnitSelectMenu_UnitSelectMenuItem__o* menuItemList, System_Collections_Generic_List_Unit__o* selectedUnitList, const MethodInfo* method);
void App_CookingMenu_UnitSelectMenu__OnDispose (App_CookingMenu_UnitSelectMenu_o* __this, const MethodInfo* method);
void App_CookingMenu_UnitSelectMenu___cctor (const MethodInfo* method);
