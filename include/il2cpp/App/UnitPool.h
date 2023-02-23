#pragma once

#include "il2cpp.h"

void App_UnitPool__Initialize (const MethodInfo* method);
void App_UnitPool__Reset (const MethodInfo* method);
int32_t App_UnitPool__GetCount (uint32_t forceMask, const MethodInfo* method);
App_Unit_o* App_UnitPool__Get (int32_t index, const MethodInfo* method);
App_Unit_o* App_UnitPool__GetDirect (int32_t index, const MethodInfo* method);
App_Unit_o* App_UnitPool__GetFirst (uint32_t forceMask, int32_t startForceIndex, const MethodInfo* method);
App_Unit_o* App_UnitPool__GetLast (uint32_t forceMask, int32_t startForceIndex, const MethodInfo* method);
App_Unit_o* App_UnitPool__GetHero (bool considerRelay, const MethodInfo* method);
App_Unit_o* App_UnitPool__GetFromPerson (App_PersonData_o* person, bool considerRelay, const MethodInfo* method);
App_Unit_o* App_UnitPool__TryGetFromPerson (System_String_o* pid, bool considerRelay, const MethodInfo* method);
App_Unit_o* App_UnitPool__GetFromPerson (System_String_o* pid, bool considerRelay, const MethodInfo* method);
App_Unit_o* App_UnitPool__GetFromPerson (App_PersonData_o* person, uint32_t forceMask, const MethodInfo* method);
App_Unit_o* App_UnitPool__GetFromPerson (System_String_o* pid, uint32_t forceMask, const MethodInfo* method);
App_Unit_o* App_UnitPool__GetFromFace (App_PersonData_o* person, bool considerRelay, const MethodInfo* method);
App_Unit_o* App_UnitPool__GetFromFace (System_String_o* pid, bool considerRelay, const MethodInfo* method);
App_Force_o* App_UnitPool__GetForce (int32_t index, const MethodInfo* method);
void App_UnitPool__Serialize (App_Stream_o* stream, uint32_t forceMask, const MethodInfo* method);
void App_UnitPool__Deserialize (App_Stream_o* stream, const MethodInfo* method);
void App_UnitPool__DeserializeForOnline (App_Stream_o* stream, const MethodInfo* method);
void App_UnitPool__DeserializeImpl (App_Stream_o* stream, bool isOnline, const MethodInfo* method);
int32_t App_UnitPool__CalcIdent (App_Unit_o* unit, const MethodInfo* method);
App_Unit_o* App_UnitPool__GetFromIdent (int32_t force, int32_t ident, const MethodInfo* method);
App_Unit_o* App_UnitPool__GetEnemyIdent (int32_t force, int32_t ident, const MethodInfo* method);
void App_UnitPool__Dump (const MethodInfo* method);
void App_UnitPool___ctor (App_UnitPool_o* __this, const MethodInfo* method);
