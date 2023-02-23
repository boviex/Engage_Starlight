#pragma once

#include "il2cpp.h"

int32_t App_RingSelectMenu__GetPoolGodNum (const MethodInfo* method);
App_GodUnit_o* App_RingSelectMenu__GetPoolGod (int32_t index, const MethodInfo* method);
bool App_RingSelectMenu__IsIgnoreForRelay (App_GodUnit_o* god, const MethodInfo* method);
bool App_RingSelectMenu__IsIgnoreForRelay (App_UnitRing_o* unitRing, const MethodInfo* method);
App_RingSelectMenu_o* App_RingSelectMenu__Create (App_ProcInst_o* super, App_Unit_o* unit, App_RingSelectMenuContent_o* menuContent, App_UnitStatusSetter_o* statusSetter, App_RingSelectRoot_o* ringSelectRoot, const MethodInfo* method);
int32_t App_RingSelectMenu__CreateRingCategory (App_Unit_o* unit, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_RingSelectMenu__CreateMenuItemList (App_Unit_o* unit, int32_t page, App_RingSelectRoot_o* ringSelectRoot, int32_t* defaultMenuItemIndex, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_RingSelectMenu__CreateMenuItemListForVersus (App_Unit_o* unit, int32_t* defaultIndex, const MethodInfo* method);
void App_RingSelectMenu__RebuildMenu (App_RingSelectMenu_o* __this, int32_t displayIndex, App_Unit_o* equipUnit, const MethodInfo* method);
void App_RingSelectMenu__SaveSelect (App_RingSelectMenu_o* __this, const MethodInfo* method);
bool App_RingSelectMenu__IsEmptyCommon (App_RingSelectMenu_o* __this, const MethodInfo* method);
int32_t App_RingSelectMenu__GetDisplayIndex (App_RingSelectMenu_o* __this, const MethodInfo* method);
void App_RingSelectMenu___ctor (App_RingSelectMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_RingSelectMenuContent_o* menuContent, App_Unit_o* unit, App_UnitStatusSetter_o* statusSetter, App_RingSelectRoot_o* ringSelectRoot, int32_t page, const MethodInfo* method);
System_String_o* App_RingSelectMenu__GetName (App_RingSelectMenu_o* __this, const MethodInfo* method);
int32_t App_RingSelectMenu__BCall (App_RingSelectMenu_o* __this, const MethodInfo* method);
int32_t App_RingSelectMenu__XCall (App_RingSelectMenu_o* __this, const MethodInfo* method);
int32_t App_RingSelectMenu__CustomCall (App_RingSelectMenu_o* __this, const MethodInfo* method);
App_Unit_o* App_RingSelectMenu__GetUnit (App_RingSelectMenu_o* __this, const MethodInfo* method);
void App_RingSelectMenu__UpdateStatus (App_RingSelectMenu_o* __this, const MethodInfo* method);
int32_t App_RingSelectMenu__GetPageNum (App_RingSelectMenu_o* __this, const MethodInfo* method);
System_String_o* App_RingSelectMenu__GetPageGodGid (App_RingSelectMenu_o* __this, int32_t index, const MethodInfo* method);
int32_t App_RingSelectMenu__GetSelectPage (App_RingSelectMenu_o* __this, const MethodInfo* method);
App_UnitRing_o* App_RingSelectMenu__GetSelectRing (App_RingSelectMenu_o* __this, const MethodInfo* method);
App_GodUnit_o* App_RingSelectMenu__GetSelectGod (App_RingSelectMenu_o* __this, const MethodInfo* method);
void App_RingSelectMenu___cctor (const MethodInfo* method);
void App_RingSelectMenu___CustomCall_b__26_0 (App_RingSelectMenu_o* __this, const MethodInfo* method);
