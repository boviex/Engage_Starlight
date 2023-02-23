#pragma once

#include "il2cpp.h"

void App_MapSequenceRevive___ctor (App_MapSequenceRevive_o* __this, System_Collections_Generic_List_Unit__o* units, const MethodInfo* method);
App_Unit_o* App_MapSequenceRevive__get_Current (App_MapSequenceRevive_o* __this, const MethodInfo* method);
void App_MapSequenceRevive__Focus (App_MapSequenceRevive_o* __this, const MethodInfo* method);
void App_MapSequenceRevive__ReviveBefre (App_MapSequenceRevive_o* __this, const MethodInfo* method);
void App_MapSequenceRevive__ControlHpStock (App_MapSequenceRevive_o* __this, const MethodInfo* method);
void App_MapSequenceRevive__ReviveExec (App_MapSequenceRevive_o* __this, const MethodInfo* method);
void App_MapSequenceRevive__ReviveWait (App_MapSequenceRevive_o* __this, const MethodInfo* method);
void App_MapSequenceRevive__HideHpStock (App_MapSequenceRevive_o* __this, const MethodInfo* method);
void App_MapSequenceRevive__PlayHpStockEffect (App_MapSequenceRevive_o* __this, const MethodInfo* method);
bool App_MapSequenceRevive__IsPlayingHpStockBreakEffect (App_MapSequenceRevive_o* __this, const MethodInfo* method);
void App_MapSequenceRevive__ShowHpStock (App_MapSequenceRevive_o* __this, const MethodInfo* method);
void App_MapSequenceRevive__ReleaseHpStock (App_MapSequenceRevive_o* __this, const MethodInfo* method);
void App_MapSequenceRevive__ReviveAfter (App_MapSequenceRevive_o* __this, const MethodInfo* method);
bool App_MapSequenceRevive__IsNext (App_MapSequenceRevive_o* __this, const MethodInfo* method);
void App_MapSequenceRevive__CreateBindAfterBattle (App_ProcInst_o* super, System_Collections_Generic_List_Unit__o* deadUnits, const MethodInfo* method);
void App_MapSequenceRevive__CreateBindTurnBegin (App_ProcInst_o* super, const MethodInfo* method);
void App_MapSequenceRevive__CreateBindDeadEvent (App_ProcInst_o* super, App_Unit_o* unit, const MethodInfo* method);
void App_MapSequenceRevive__CreateBind (App_ProcInst_o* super, System_Collections_Generic_List_Unit__o* units, const MethodInfo* method);
bool App_MapSequenceRevive__IsTimingTurnBegin (App_Unit_o* unit, const MethodInfo* method);
