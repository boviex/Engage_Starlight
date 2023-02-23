#pragma once

#include "il2cpp.h"

bool Combat_FieldLoader__get_IsLoading (Combat_FieldLoader_o* __this, const MethodInfo* method);
void Combat_FieldLoader__set_IsLoading (Combat_FieldLoader_o* __this, bool value, const MethodInfo* method);
System_Collections_Generic_List_string__o* Combat_FieldLoader__GetSceneNames (const MethodInfo* method);
void Combat_FieldLoader__LoadScene (Combat_FieldLoader_o* __this, System_String_o* mapName, System_Action_o* callback, const MethodInfo* method);
void Combat_FieldLoader__UnloadScene (Combat_FieldLoader_o* __this, const MethodInfo* method);
System_String_o* Combat_FieldLoader__FieldNameToPath (System_String_o* fieldName, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_FieldLoader__LoadMapImpl (const MethodInfo* method);
void Combat_FieldLoader___ctor (Combat_FieldLoader_o* __this, const MethodInfo* method);
