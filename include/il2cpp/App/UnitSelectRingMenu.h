#pragma once

#include "il2cpp.h"

App_UnitSelectRingMenu_o* App_UnitSelectRingMenu__CreateBind (App_ProcInst_o* super, App_UnitSelectRingMenu_CloseEventHandler_o* closeEventHandler, const MethodInfo* method);
void App_UnitSelectRingMenu___ctor (App_UnitSelectRingMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_UnitSelectRingMenu_CloseEventHandler_o* closeEventHandler, const MethodInfo* method);
void App_UnitSelectRingMenu__OnClose (App_UnitSelectRingMenu_o* __this, const MethodInfo* method);
void App_UnitSelectRingMenu__EntrustRing (App_UnitSelectRingMenu_o* __this, const MethodInfo* method);
void App_UnitSelectRingMenu__TakeOffAllRings (App_UnitSelectRingMenu_o* __this, const MethodInfo* method);
void App_UnitSelectRingMenu__TakeOffRing (App_UnitSelectRingMenu_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_UnitSelectRingMenu__IsExistToBeAnabledToTakeOffRings (App_UnitSelectRingMenu_o* __this, const MethodInfo* method);
bool App_UnitSelectRingMenu__IsEquippedRing (App_UnitSelectRingMenu_o* __this, App_Unit_o* unit, const MethodInfo* method);
