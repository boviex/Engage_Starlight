#pragma once

#include "il2cpp.h"

void App_EncountUnitData___ctor (App_EncountUnitData_o* __this, App_DisposData_o* data, const MethodInfo* method);
void App_EncountUnitData__SetRareType (App_EncountUnitData_o* __this, int32_t type, const MethodInfo* method);
App_DisposData_o* App_EncountUnitData__get_Dispos (App_EncountUnitData_o* __this, const MethodInfo* method);
int32_t App_EncountUnitData__get_Rare (App_EncountUnitData_o* __this, const MethodInfo* method);
App_JobData_o* App_EncountUnitData__get_Job (App_EncountUnitData_o* __this, const MethodInfo* method);
bool App_EncountUnitData__IsGunner (App_EncountUnitData_o* __this, const MethodInfo* method);
bool App_EncountUnitData__IsWolf (App_EncountUnitData_o* __this, const MethodInfo* method);
bool App_EncountUnitData__IsDragon (App_EncountUnitData_o* __this, const MethodInfo* method);
System_Collections_Generic_List_EncountUnitData__o* App_EncountUnitData__CreateList (System_Collections_Generic_List_DisposData__o* disposList, bool isDlc, const MethodInfo* method);
void App_EncountUnitData__CreateJobData (System_Collections_Generic_List_EncountUnitData__o* unitDataList, const MethodInfo* method);
void App_EncountUnitData__CreatePackOfWolves (System_Collections_Generic_List_EncountUnitData__o* unitDataList, const MethodInfo* method);
void App_EncountUnitData__SetRareFlags (System_Collections_Generic_List_EncountUnitData__o* encountUnitDataList, bool isDlc, const MethodInfo* method);
System_String_o* App_EncountUnitData__AppendSkill (int32_t level, App_JobData_o* data, const MethodInfo* method);
System_String_o* App_EncountUnitData__GetRandomKillingSid (const MethodInfo* method);
