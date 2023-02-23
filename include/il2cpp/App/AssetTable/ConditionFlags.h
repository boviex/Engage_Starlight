#pragma once

#include "il2cpp.h"

void App_AssetTable_ConditionFlags___ctor (App_AssetTable_ConditionFlags_o* __this, const MethodInfo* method);
System_Collections_Generic_List_string__o* App_AssetTable_ConditionFlags__get_Names (App_AssetTable_ConditionFlags_o* __this, const MethodInfo* method);
System_Collections_Generic_List_int__o* App_AssetTable_ConditionFlags__get_Hits (App_AssetTable_ConditionFlags_o* __this, const MethodInfo* method);
void App_AssetTable_ConditionFlags__Clear (App_AssetTable_ConditionFlags_o* __this, const MethodInfo* method);
bool App_AssetTable_ConditionFlags__Test (App_AssetTable_ConditionFlags_o* __this, int32_t index, const MethodInfo* method);
bool App_AssetTable_ConditionFlags__Test (App_AssetTable_ConditionFlags_o* __this, System_String_o* key, const MethodInfo* method);
void App_AssetTable_ConditionFlags__Add (App_AssetTable_ConditionFlags_o* __this, System_String_array* keys, const MethodInfo* method);
void App_AssetTable_ConditionFlags__Add (App_AssetTable_ConditionFlags_o* __this, System_String_o* key, const MethodInfo* method);
void App_AssetTable_ConditionFlags__Add (App_AssetTable_ConditionFlags_o* __this, App_ItemData_o* item, const MethodInfo* method);
void App_AssetTable_ConditionFlags__Add (App_AssetTable_ConditionFlags_o* __this, int32_t force, const MethodInfo* method);
int32_t App_AssetTable_ConditionFlags__GetState (App_Unit_o* unit, const MethodInfo* method);
void App_AssetTable_ConditionFlags__Add (App_AssetTable_ConditionFlags_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_AssetTable_ConditionFlags__IsSimpleMode (App_AssetTable_ConditionFlags_o* __this, const MethodInfo* method);
void App_AssetTable_ConditionFlags__AddGender (App_AssetTable_ConditionFlags_o* __this, int32_t gender, int32_t dressGender, const MethodInfo* method);
void App_AssetTable_ConditionFlags__AddGender (App_AssetTable_ConditionFlags_o* __this, App_PersonData_o* person, const MethodInfo* method);
void App_AssetTable_ConditionFlags__AddGender (App_AssetTable_ConditionFlags_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_AssetTable_ConditionFlags__AddGender (App_AssetTable_ConditionFlags_o* __this, App_GodData_o* goidData, const MethodInfo* method);
void App_AssetTable_ConditionFlags__Add (App_AssetTable_ConditionFlags_o* __this, App_PersonData_o* person, App_JobData_o* job, const MethodInfo* method);
void App_AssetTable_ConditionFlags__Add (App_AssetTable_ConditionFlags_o* __this, App_PersonData_o* person, App_JobData_o* job, int32_t force, const MethodInfo* method);
void App_AssetTable_ConditionFlags__Add (App_AssetTable_ConditionFlags_o* __this, App_SkillArray_o* skills, const MethodInfo* method);
void App_AssetTable_ConditionFlags__Add (App_AssetTable_ConditionFlags_o* __this, int32_t state, App_GodData_o* godData, bool isDarkness, const MethodInfo* method);
System_String_o* App_AssetTable_ConditionFlags__ReplaceGid2Eid (App_AssetTable_ConditionFlags_o* __this, System_String_o* gid, const MethodInfo* method);
