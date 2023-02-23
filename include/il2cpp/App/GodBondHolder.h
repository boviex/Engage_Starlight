#pragma once

#include "il2cpp.h"

App_GodBondHolder_o* App_GodBondHolder__Build (App_GodBondHolder_o* __this, App_GodData_o* data, const MethodInfo* method);
App_GodBond_o* App_GodBondHolder__Get (App_GodBondHolder_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_GodBondHolder__Create (App_GodBondHolder_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_GodBondHolder__UpdateAllBondsForGodState (App_GodBondHolder_o* __this, int32_t godState, const MethodInfo* method);
void App_GodBondHolder__DeleteExluding (App_GodBondHolder_o* __this, System_Collections_Generic_List_string__o* pids, const MethodInfo* method);
int32_t App_GodBondHolder__GetMaxLevel (App_GodBondHolder_o* __this, const MethodInfo* method);
int32_t App_GodBondHolder__GetCountOfRelianceLevelA (App_GodBondHolder_o* __this, const MethodInfo* method);
App_GodBond_o* App_GodBondHolder__NewGodBond (App_GodBondHolder_o* __this, System_String_o* pid, const MethodInfo* method);
void App_GodBondHolder__Clear (App_GodBondHolder_o* __this, const MethodInfo* method);
void App_GodBondHolder__SetLevelFromUnitRelianceIfPossible (App_GodBondHolder_o* __this, App_GodData_o* data, const MethodInfo* method);
void App_GodBondHolder__SetLevelFromUnitReliance (App_GodBondHolder_o* __this, App_Unit_o* linkUnit, int32_t forceType, const MethodInfo* method);
void App_GodBondHolder__ChangeOpponent (App_GodBondHolder_o* __this, App_GodData_o* data, const MethodInfo* method);
void App_GodBondHolder__OnSerialize (App_GodBondHolder_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_GodBondHolder__OnDeserialize (App_GodBondHolder_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
void App_GodBondHolder__SerializeForRewindLatest (App_GodBondHolder_o* __this, App_Stream_o* stream, System_Collections_Generic_HashSet_string__o* excludePids, const MethodInfo* method);
void App_GodBondHolder__DeserializeForRewindLatest (App_GodBondHolder_o* __this, App_Stream_o* stream, const MethodInfo* method);
App_GodData_o* App_GodBondHolder__get_Data (App_GodBondHolder_o* __this, const MethodInfo* method);
bool App_GodBondHolder__IsValid (App_GodBondHolder_o* __this, const MethodInfo* method);
void App_GodBondHolder___ctor (App_GodBondHolder_o* __this, const MethodInfo* method);
