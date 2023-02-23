#pragma once

#include "il2cpp.h"

System_Reflection_MethodInfo_o* System_Dynamic_Utils_TypeExtensions__GetAnyStaticMethodValidated (System_Type_o* type, System_String_o* name, System_Type_array* types, const MethodInfo* method);
bool System_Dynamic_Utils_TypeExtensions__MatchesArgumentTypes (System_Reflection_MethodInfo_o* mi, System_Type_array* argTypes, const MethodInfo* method);
int32_t System_Dynamic_Utils_TypeExtensions__GetTypeCode (System_Type_o* type, const MethodInfo* method);
System_Reflection_ParameterInfo_array* System_Dynamic_Utils_TypeExtensions__GetParametersCached (System_Reflection_MethodBase_o* method, const MethodInfo* method);
void System_Dynamic_Utils_TypeExtensions___cctor (const MethodInfo* method);
