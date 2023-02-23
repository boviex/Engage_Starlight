#pragma once

#include "il2cpp.h"

void App_UnitFor__Each (int32_t type, System_Action_Unit__o* func, const MethodInfo* method);
void App_UnitFor__Reverse (int32_t type, System_Action_Unit__o* func, const MethodInfo* method);
void App_UnitFor__Each (uint32_t forceMask, System_Action_Unit__o* func, const MethodInfo* method);
void App_UnitFor__Reverse (uint32_t forceMask, System_Action_Unit__o* func, const MethodInfo* method);
App_Unit_o* App_UnitFor__Find (int32_t type, System_Predicate_Unit__o* pred, const MethodInfo* method);
App_Unit_o* App_UnitFor__FindLast (int32_t type, System_Predicate_Unit__o* pred, const MethodInfo* method);
App_Unit_o* App_UnitFor__Find (uint32_t forceMask, System_Predicate_Unit__o* pred, const MethodInfo* method);
App_Unit_o* App_UnitFor__FindLast (uint32_t forceMask, System_Predicate_Unit__o* pred, const MethodInfo* method);
App_Unit_o* App_UnitFor__GetPrev (App_Unit_o* unit, const MethodInfo* method);
App_Unit_o* App_UnitFor__GetNext (App_Unit_o* unit, const MethodInfo* method);
App_Unit_o* App_UnitFor__GetPrev (App_Unit_o* unit, uint32_t forceMask, const MethodInfo* method);
App_Unit_o* App_UnitFor__GetNext (App_Unit_o* unit, uint32_t forceMask, const MethodInfo* method);
void App_UnitFor___ctor (App_UnitFor_o* __this, const MethodInfo* method);
