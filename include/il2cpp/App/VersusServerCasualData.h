#pragma once

#include "il2cpp.h"

System_Collections_Generic_List_Unit__o* App_VersusServerCasualData__get_UnitList (App_VersusServerCasualData_o* __this, const MethodInfo* method);
System_Collections_Generic_Dictionary_string__GodUnit__o* App_VersusServerCasualData__get_m_GodDict (App_VersusServerCasualData_o* __this, const MethodInfo* method);
void App_VersusServerCasualData___ctor (App_VersusServerCasualData_o* __this, const MethodInfo* method);
App_GodUnit_o* App_VersusServerCasualData__TryGetPairGodUnit (App_VersusServerCasualData_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_VersusServerCasualData__Serialize (App_VersusServerCasualData_o* __this, const MethodInfo* method);
void App_VersusServerCasualData__SerializeInit (App_VersusServerCasualData_o* __this, const MethodInfo* method);
void App_VersusServerCasualData__WriteHeader (App_VersusServerCasualData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_VersusServerCasualData__WriteUnit (App_VersusServerCasualData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_VersusServerCasualData__WriteUnitInit (App_VersusServerCasualData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_VersusServerCasualData__WriteUnit (App_VersusServerCasualData_o* __this, App_Stream_o* stream, App_Unit_o* unit, const MethodInfo* method);
void App_VersusServerCasualData__WriteBonds (App_VersusServerCasualData_o* __this, App_Stream_o* stream, const MethodInfo* method);
bool App_VersusServerCasualData__Deserialize (App_VersusServerCasualData_o* __this, const MethodInfo* method);
void App_VersusServerCasualData__ReadHeader (App_VersusServerCasualData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_VersusServerCasualData__ReadUnit (App_VersusServerCasualData_o* __this, App_Stream_o* stream, const MethodInfo* method);
System_Collections_Generic_Dictionary_string__string__o* App_VersusServerCasualData__SaveGodBond (App_VersusServerCasualData_o* __this, const MethodInfo* method);
void App_VersusServerCasualData__LoadGodBond (App_VersusServerCasualData_o* __this, System_Collections_Generic_Dictionary_string__string__o* bondDict, const MethodInfo* method);
void App_VersusServerCasualData__ReadBonds (App_VersusServerCasualData_o* __this, App_Stream_o* stream, const MethodInfo* method);
