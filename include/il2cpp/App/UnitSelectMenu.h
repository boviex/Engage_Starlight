#pragma once

#include "il2cpp.h"

App_UnitSelectMenu_o* App_UnitSelectMenu__Create (App_ProcInst_o* super, App_UnitSelectMenuContent_o* menuContent, const MethodInfo* method);
void App_UnitSelectMenu___ctor (App_UnitSelectMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_UnitSelectMenuContent_o* menuContent, const MethodInfo* method);
void App_UnitSelectMenu__RebuildMenu (App_UnitSelectMenu_o* __this, const MethodInfo* method);
System_String_o* App_UnitSelectMenu__GetName (App_UnitSelectMenu_o* __this, const MethodInfo* method);
void App_UnitSelectMenu__SetSelectIndexFromUnit (App_UnitSelectMenu_o* __this, App_Unit_o* unit, const MethodInfo* method);
UnityEngine_GameObject_o* App_UnitSelectMenu__GetRootGameObject (App_UnitSelectMenu_o* __this, const MethodInfo* method);
void App_UnitSelectMenu__PlayCursorAnimIdle (App_UnitSelectMenu_o* __this, const MethodInfo* method);
void App_UnitSelectMenu__SetCursorAlpha (App_UnitSelectMenu_o* __this, float alpha, const MethodInfo* method);
