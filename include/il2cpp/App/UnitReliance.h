#pragma once

#include "il2cpp.h"

void App_UnitReliance__Initialize (const MethodInfo* method);
void App_UnitReliance__Reset (const MethodInfo* method);
void App_UnitReliance__ResetMapBegin (const MethodInfo* method);
void App_UnitReliance__ReflectScore (const MethodInfo* method);
App_UnitRelianceData_o* App_UnitReliance__TryGet (System_String_o* pidA, System_String_o* pidB, const MethodInfo* method);
App_UnitRelianceData_o* App_UnitReliance__TryGet (App_Unit_o* unitA, App_Unit_o* unitB, const MethodInfo* method);
App_UnitRelianceData_o* App_UnitReliance__TryGet (App_PersonData_o* personA, App_PersonData_o* personB, const MethodInfo* method);
bool App_UnitReliance__CanAddScore (App_Unit_o* unitA, App_Unit_o* unitB, const MethodInfo* method);
bool App_UnitReliance__CanAddScore (App_Unit_o* unitA, App_Unit_o* unitB, App_UnitRelianceData_o* data, const MethodInfo* method);
bool App_UnitReliance__CanAddExpHub (App_Unit_o* unitA, App_Unit_o* unitB, App_UnitRelianceData_o* data, const MethodInfo* method);
bool App_UnitReliance__CanAddExpHub (App_Unit_o* unitA, App_Unit_o* unitB, const MethodInfo* method);
bool App_UnitReliance__TryAddScore (App_Unit_o* unitA, App_Unit_o* unitB, int32_t value, const MethodInfo* method);
bool App_UnitReliance__TryAddExpByHub (App_Unit_o* unitA, App_Unit_o* unitB, int32_t value, const MethodInfo* method);
bool App_UnitReliance__CanLevelUp (App_PersonData_o* personA, App_PersonData_o* personB, const MethodInfo* method);
bool App_UnitReliance__CanLevelUp (App_Unit_o* unitA, App_Unit_o* unitB, const MethodInfo* method);
void App_UnitReliance__LevelUp (App_PersonData_o* personA, App_PersonData_o* personB, const MethodInfo* method);
void App_UnitReliance__LevelUp (App_Unit_o* unitA, App_Unit_o* unitB, const MethodInfo* method);
bool App_UnitReliance__CanBeLevelAPlus (App_PersonData_o* personA, App_PersonData_o* personB, const MethodInfo* method);
bool App_UnitReliance__CanBeLevelAPlus (App_Unit_o* unitA, App_Unit_o* unitB, const MethodInfo* method);
void App_UnitReliance__SetLevelAPlus (App_PersonData_o* personA, App_PersonData_o* personB, const MethodInfo* method);
void App_UnitReliance__SetLevelAPlus (App_Unit_o* unitA, App_Unit_o* unitB, const MethodInfo* method);
bool App_UnitReliance__TryGetLevel (System_String_o* pidA, System_String_o* pidB, int32_t* level, const MethodInfo* method);
bool App_UnitReliance__TryGetLevel (App_PersonData_o* personA, App_PersonData_o* personB, int32_t* level, const MethodInfo* method);
bool App_UnitReliance__TryGetLevel (App_Unit_o* unitA, App_Unit_o* unitB, int32_t* level, const MethodInfo* method);
App_SupportData_o* App_UnitReliance__TryGetSupportData (App_Unit_o* unitA, App_Unit_o* unitB, int32_t* level, const MethodInfo* method);
void App_UnitReliance__Serialize (App_Stream_o* stream, const MethodInfo* method);
void App_UnitReliance__Deserialize (App_Stream_o* stream, const MethodInfo* method);
App_RelianceExpData_o* App_UnitReliance__GetValidRelianceExpData (int32_t indexA, int32_t indexB, const MethodInfo* method);
System_String_o* App_UnitReliance__MakeDataDictKey (System_String_o* pidA, System_String_o* pidB, const MethodInfo* method);
void App_UnitReliance__GetPidFromDictKey (System_String_o* key, System_String_o** pidA, System_String_o** pidB, const MethodInfo* method);
App_RelianceExpData_o* App_UnitReliance__GetRelianceExpDataFromDictKey (System_String_o* key, const MethodInfo* method);
void App_UnitReliance__ShuffleSameScore (System_Collections_Generic_List_UnitRelianceMapResult__o* results, const MethodInfo* method);
void App_UnitReliance__ShuffleSameScore (System_Collections_Generic_List_UnitRelianceMapResult__o* results, int32_t startIndex, int32_t endIndex, const MethodInfo* method);
App_GodUnit_o* App_UnitReliance__LinkGodUnitGet (App_PersonData_o* person, const MethodInfo* method);
bool App_UnitReliance__LinkGodUnitIsExists (App_PersonData_o* personA, App_PersonData_o* personB, const MethodInfo* method);
bool App_UnitReliance__LinkGodUnitIsExists (App_Unit_o* unitA, App_Unit_o* unitB, const MethodInfo* method);
void App_UnitReliance__LinkGodUnitLevelUp (App_PersonData_o* personA, App_PersonData_o* personB, int32_t level, const MethodInfo* method);
bool App_UnitReliance__LinkGodUnitCanBeRelianceLevelS (App_GodUnit_o* godUnitA, App_PersonData_o* personB, const MethodInfo* method);
void App_UnitReliance__LinkGodUnitSetRelianceLevelS (App_GodUnit_o* godUnitA, App_PersonData_o* personB, const MethodInfo* method);
void App_UnitReliance___ctor (App_UnitReliance_o* __this, const MethodInfo* method);
