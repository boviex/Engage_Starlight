#pragma once

#include "il2cpp.h"

int32_t System_Reflection_Emit_PropertyBuilder__get_Attributes (System_Reflection_Emit_PropertyBuilder_o* __this, const MethodInfo* method);
bool System_Reflection_Emit_PropertyBuilder__get_CanRead (System_Reflection_Emit_PropertyBuilder_o* __this, const MethodInfo* method);
bool System_Reflection_Emit_PropertyBuilder__get_CanWrite (System_Reflection_Emit_PropertyBuilder_o* __this, const MethodInfo* method);
System_Type_o* System_Reflection_Emit_PropertyBuilder__get_DeclaringType (System_Reflection_Emit_PropertyBuilder_o* __this, const MethodInfo* method);
System_String_o* System_Reflection_Emit_PropertyBuilder__get_Name (System_Reflection_Emit_PropertyBuilder_o* __this, const MethodInfo* method);
System_Type_o* System_Reflection_Emit_PropertyBuilder__get_PropertyType (System_Reflection_Emit_PropertyBuilder_o* __this, const MethodInfo* method);
System_Reflection_ParameterInfo_array* System_Reflection_Emit_PropertyBuilder__GetIndexParameters (System_Reflection_Emit_PropertyBuilder_o* __this, const MethodInfo* method);
System_Type_o* System_Reflection_Emit_PropertyBuilder__get_ReflectedType (System_Reflection_Emit_PropertyBuilder_o* __this, const MethodInfo* method);
System_Reflection_MethodInfo_array* System_Reflection_Emit_PropertyBuilder__GetAccessors (System_Reflection_Emit_PropertyBuilder_o* __this, bool nonPublic, const MethodInfo* method);
System_Object_array* System_Reflection_Emit_PropertyBuilder__GetCustomAttributes (System_Reflection_Emit_PropertyBuilder_o* __this, bool inherit, const MethodInfo* method);
System_Object_array* System_Reflection_Emit_PropertyBuilder__GetCustomAttributes (System_Reflection_Emit_PropertyBuilder_o* __this, System_Type_o* attributeType, bool inherit, const MethodInfo* method);
System_Reflection_MethodInfo_o* System_Reflection_Emit_PropertyBuilder__GetGetMethod (System_Reflection_Emit_PropertyBuilder_o* __this, bool nonPublic, const MethodInfo* method);
System_Reflection_MethodInfo_o* System_Reflection_Emit_PropertyBuilder__GetSetMethod (System_Reflection_Emit_PropertyBuilder_o* __this, bool nonPublic, const MethodInfo* method);
Il2CppObject* System_Reflection_Emit_PropertyBuilder__GetValue (System_Reflection_Emit_PropertyBuilder_o* __this, Il2CppObject* obj, int32_t invokeAttr, System_Reflection_Binder_o* binder, System_Object_array* index, System_Globalization_CultureInfo_o* culture, const MethodInfo* method);
bool System_Reflection_Emit_PropertyBuilder__IsDefined (System_Reflection_Emit_PropertyBuilder_o* __this, System_Type_o* attributeType, bool inherit, const MethodInfo* method);
void System_Reflection_Emit_PropertyBuilder__SetValue (System_Reflection_Emit_PropertyBuilder_o* __this, Il2CppObject* obj, Il2CppObject* value, int32_t invokeAttr, System_Reflection_Binder_o* binder, System_Object_array* index, System_Globalization_CultureInfo_o* culture, const MethodInfo* method);
