#pragma once

#include "il2cpp.h"

int32_t App_AIValue__get_X (App_AIValue_o* __this, const MethodInfo* method);
int32_t App_AIValue__get_Z (App_AIValue_o* __this, const MethodInfo* method);
int32_t App_AIValue__GetValue (App_AIValue_o* __this, const MethodInfo* method);
void App_AIValue__SetValue (App_AIValue_o* __this, int16_t v, const MethodInfo* method);
void App_AIValue__SetPosition (App_AIValue_o* __this, uint8_t x, uint8_t z, const MethodInfo* method);
App_PersonData_o* App_AIValue__GetPerson (App_AIValue_o* __this, const MethodInfo* method);
App_JobData_o* App_AIValue__GetJob (App_AIValue_o* __this, const MethodInfo* method);
App_TerrainData_o* App_AIValue__GetTerrain (App_AIValue_o* __this, const MethodInfo* method);
App_ItemData_o* App_AIValue__GetItem (App_AIValue_o* __this, const MethodInfo* method);
System_Collections_Generic_List_AIData__o* App_AIValue__GetAI (App_AIValue_o* __this, const MethodInfo* method);
System_String_o* App_AIValue__GetAIName (App_AIValue_o* __this, const MethodInfo* method);
bool App_AIValue__IsValidFlagValue (App_AIValue_o* __this, const MethodInfo* method);
int32_t App_AIValue__GetFlagValue (App_AIValue_o* __this, const MethodInfo* method);
System_String_o* App_AIValue__SetValue (App_AIValue_o* __this, System_String_o* str, const MethodInfo* method);
bool App_AIValue__IsSignal (App_AIValue_o* __this, const MethodInfo* method);
bool App_AIValue__IsDefault (App_AIValue_o* __this, const MethodInfo* method);
bool App_AIValue__IsMax (App_AIValue_o* __this, const MethodInfo* method);
bool App_AIValue__IsSkip (App_AIValue_o* __this, const MethodInfo* method);
bool App_AIValue__IsArgument (App_AIValue_o* __this, const MethodInfo* method);
App_AIValue_o* App_AIValue__GetArgument (App_AIValue_o* __this, int32_t order, App_Unit_o* unit, const MethodInfo* method);
void App_AIValue__Serialize (App_AIValue_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_AIValue__Deserialize (App_AIValue_o* __this, App_Stream_o* stream, const MethodInfo* method);
System_String_o* App_AIValue__GetString (App_AIValue_o* __this, const MethodInfo* method);
void App_AIValue__ParseCoord (System_String_o* str, int32_t* index, int32_t* x, int32_t* z, const MethodInfo* method);
void App_AIValue__ParseNumber (System_String_o* str, int32_t* index, int32_t* number, const MethodInfo* method);
int32_t App_AIValue__SkipSpace (System_String_o* str, int32_t index, const MethodInfo* method);
bool App_AIValue__IsNumber (uint16_t c, const MethodInfo* method);
void App_AIValue___ctor (App_AIValue_o* __this, const MethodInfo* method);
