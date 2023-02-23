#pragma once

#include "il2cpp.h"

void UTJ_DynamicsSetup_ParseResults___ctor (UTJ_DynamicsSetup_ParseResults_o* __this, const MethodInfo* method);
void UTJ_DynamicsSetup_ParseResults___ctor (UTJ_DynamicsSetup_ParseResults_o* __this, UTJ_DynamicsSetup_o* setup, System_Collections_Generic_IEnumerable_DynamicsSetup_ParseMessage__o* errors, const MethodInfo* method);
UTJ_DynamicsSetup_ParseResults_o* UTJ_DynamicsSetup_ParseResults__Failure (System_String_o* error, const MethodInfo* method);
UTJ_DynamicsSetup_ParseResults_o* UTJ_DynamicsSetup_ParseResults__Failure (System_Collections_Generic_IEnumerable_DynamicsSetup_ParseMessage__o* errors, const MethodInfo* method);
UTJ_DynamicsSetup_o* UTJ_DynamicsSetup_ParseResults__get_Setup (UTJ_DynamicsSetup_ParseResults_o* __this, const MethodInfo* method);
void UTJ_DynamicsSetup_ParseResults__set_Setup (UTJ_DynamicsSetup_ParseResults_o* __this, UTJ_DynamicsSetup_o* value, const MethodInfo* method);
System_Collections_Generic_List_DynamicsSetup_ParseMessage__o* UTJ_DynamicsSetup_ParseResults__get_Errors (UTJ_DynamicsSetup_ParseResults_o* __this, const MethodInfo* method);
void UTJ_DynamicsSetup_ParseResults__set_Errors (UTJ_DynamicsSetup_ParseResults_o* __this, System_Collections_Generic_List_DynamicsSetup_ParseMessage__o* value, const MethodInfo* method);
bool UTJ_DynamicsSetup_ParseResults__get_HasErrors (UTJ_DynamicsSetup_ParseResults_o* __this, const MethodInfo* method);
void UTJ_DynamicsSetup_ParseResults__LogErrors (UTJ_DynamicsSetup_ParseResults_o* __this, const MethodInfo* method);
