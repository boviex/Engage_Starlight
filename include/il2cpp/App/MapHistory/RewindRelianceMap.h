#pragma once

#include "il2cpp.h"

void App_MapHistory_RewindRelianceMap___ctor (App_MapHistory_RewindRelianceMap_o* __this, const MethodInfo* method);
void App_MapHistory_RewindRelianceMap__Entry (App_MapHistory_RewindRelianceMap_o* __this, App_Unit_o* unitA, App_Unit_o* unitB, const MethodInfo* method);
void App_MapHistory_RewindRelianceMap__Clear (App_MapHistory_RewindRelianceMap_o* __this, const MethodInfo* method);
App_UnitRelianceData_o* App_MapHistory_RewindRelianceMap__TryGetRelianceData (App_MapHistory_RewindRelianceMap_o* __this, uint32_t id, const MethodInfo* method);
void App_MapHistory_RewindRelianceMap__GetPids (App_MapHistory_RewindRelianceMap_o* __this, uint32_t id, System_String_o** pidA, System_String_o** pidB, const MethodInfo* method);
void App_MapHistory_RewindRelianceMap__GetUnits (App_MapHistory_RewindRelianceMap_o* __this, uint32_t id, App_Unit_o** unitA, App_Unit_o** unitB, const MethodInfo* method);
System_Collections_Generic_List_uint__o* App_MapHistory_RewindRelianceMap__get_Ids (App_MapHistory_RewindRelianceMap_o* __this, const MethodInfo* method);
int32_t App_MapHistory_RewindRelianceMap__get_Version (App_MapHistory_RewindRelianceMap_o* __this, const MethodInfo* method);
void App_MapHistory_RewindRelianceMap__OnSerialize (App_MapHistory_RewindRelianceMap_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapHistory_RewindRelianceMap__OnDeserialize (App_MapHistory_RewindRelianceMap_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
uint32_t App_MapHistory_RewindRelianceMap__Index2Id (int32_t mapHistoryIndexA, int32_t mapHistoryIndexB, const MethodInfo* method);
void App_MapHistory_RewindRelianceMap__Id2Index (uint32_t id, int32_t* mapHistoryIndexA, int32_t* mapHistoryIndexB, const MethodInfo* method);
void App_MapHistory_RewindRelianceMap__DbgDump (App_MapHistory_RewindRelianceMap_o* __this, System_Text_StringBuilder_o* sb, const MethodInfo* method);
