#pragma once

#include "il2cpp.h"

System_String_o* App_MapEditData__get_Name (App_MapEditData_o* __this, const MethodInfo* method);
void App_MapEditData__set_Name (App_MapEditData_o* __this, System_String_o* value, const MethodInfo* method);
System_DateTime_o App_MapEditData__get_SaveTime (App_MapEditData_o* __this, const MethodInfo* method);
System_Collections_Generic_List_Unit__o* App_MapEditData__get_UnitList (App_MapEditData_o* __this, const MethodInfo* method);
System_Collections_Generic_Dictionary_string__GodUnit__o* App_MapEditData__get_m_GodDict (App_MapEditData_o* __this, const MethodInfo* method);
void App_MapEditData___ctor (App_MapEditData_o* __this, const MethodInfo* method);
void App_MapEditData__Clear (App_MapEditData_o* __this, const MethodInfo* method);
void App_MapEditData__ClearValue (App_MapEditData_o* __this, const MethodInfo* method);
void App_MapEditData__CopyFrom (App_MapEditData_o* __this, App_MapEditData_o* from, const MethodInfo* method);
bool App_MapEditData__IsEmpty (App_MapEditData_o* __this, const MethodInfo* method);
bool App_MapEditData__IsSaved (App_MapEditData_o* __this, const MethodInfo* method);
int32_t App_MapEditData__StreamPosition (App_MapEditData_o* __this, const MethodInfo* method);
App_GodUnit_o* App_MapEditData__TryGetPairGodUnit (App_MapEditData_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapEditData__WriteHeader (App_MapEditData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapEditData__WriteMap (App_MapEditData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapEditData__WriteUnit (App_MapEditData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapEditData__WriteBonds (App_MapEditData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapEditData__ReadHeader (App_MapEditData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapEditData__ReadMap (App_MapEditData_o* __this, App_Stream_o* stream, bool isOpponent, bool isAppend, const MethodInfo* method);
void App_MapEditData__ReadUnit (App_MapEditData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapEditData__ReadUnitForEnemy (App_MapEditData_o* __this, App_Stream_o* stream, const MethodInfo* method);
System_Collections_Generic_Dictionary_string__string__o* App_MapEditData__SaveGodBond (App_MapEditData_o* __this, const MethodInfo* method);
void App_MapEditData__LoadGodBond (App_MapEditData_o* __this, System_Collections_Generic_Dictionary_string__string__o* bondDict, const MethodInfo* method);
void App_MapEditData__ReadBondsForEnemy (App_MapEditData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapEditData__Save (App_MapEditData_o* __this, const MethodInfo* method);
void App_MapEditData__Load (App_MapEditData_o* __this, const MethodInfo* method);
void App_MapEditData__LoadForEnemy (App_MapEditData_o* __this, const MethodInfo* method);
void App_MapEditData__Serialize (App_MapEditData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapEditData__Deserialize (App_MapEditData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapEditData__SerializeForMapHistoryReplay (App_Stream_o* stream, const MethodInfo* method);
void App_MapEditData__DeserializeForMapHistoryReplay (App_Stream_o* stream, const MethodInfo* method);
System_Collections_Generic_List_MapEditData_UnitInfo__o* App_MapEditData__get_SortieUnitInfoList (App_MapEditData_o* __this, const MethodInfo* method);
System_Collections_Generic_List_string__o* App_MapEditData__get_SortieGidList (App_MapEditData_o* __this, const MethodInfo* method);
App_MapEditData_UnitInfo_o* App_MapEditData__TryGetSortieUnit (App_MapEditData_o* __this, System_String_o* pid, const MethodInfo* method);
System_String_o* App_MapEditData__TryGetSortieGod (App_MapEditData_o* __this, System_String_o* pid, const MethodInfo* method);
