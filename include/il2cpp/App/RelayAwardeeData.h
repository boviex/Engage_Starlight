#pragma once

#include "il2cpp.h"

void App_RelayAwardeeData___ctor (App_RelayAwardeeData_o* __this, const MethodInfo* method);
void App_RelayAwardeeData__Register (App_RelayAwardeeData_o* __this, App_Unit_o* unit, int32_t recordValue, App_ItemData_o* item, const MethodInfo* method);
void App_RelayAwardeeData__Register (App_RelayAwardeeData_o* __this, App_RelayLeavingUnitData_o* leavingUnitData, int32_t recordValue, App_ItemData_o* item, const MethodInfo* method);
void App_RelayAwardeeData__Clear (App_RelayAwardeeData_o* __this, const MethodInfo* method);
System_String_o* App_RelayAwardeeData__GetName (App_RelayAwardeeData_o* __this, const MethodInfo* method);
bool App_RelayAwardeeData__IsFemale (App_RelayAwardeeData_o* __this, const MethodInfo* method);
System_String_o* App_RelayAwardeeData__GetGodName (App_RelayAwardeeData_o* __this, const MethodInfo* method);
void App_RelayAwardeeData__Serialize (App_RelayAwardeeData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_RelayAwardeeData__Deserialize (App_RelayAwardeeData_o* __this, App_Stream_o* stream, const MethodInfo* method);
App_UnitEdit_o* App_RelayAwardeeData__get_Edit (App_RelayAwardeeData_o* __this, const MethodInfo* method);
App_PersonData_o* App_RelayAwardeeData__get_Person (App_RelayAwardeeData_o* __this, const MethodInfo* method);
App_JobData_o* App_RelayAwardeeData__get_Job (App_RelayAwardeeData_o* __this, const MethodInfo* method);
App_GodData_o* App_RelayAwardeeData__get_God (App_RelayAwardeeData_o* __this, const MethodInfo* method);
int32_t App_RelayAwardeeData__get_RecordValue (App_RelayAwardeeData_o* __this, const MethodInfo* method);
uint8_t App_RelayAwardeeData__get_RelayPlayerIndex (App_RelayAwardeeData_o* __this, const MethodInfo* method);
bool App_RelayAwardeeData__get_IsMorth (App_RelayAwardeeData_o* __this, const MethodInfo* method);
App_ItemData_o* App_RelayAwardeeData__get_Item (App_RelayAwardeeData_o* __this, const MethodInfo* method);
