#pragma once

#include "il2cpp.h"

int32_t Viewer_MenuAxisFloat__get_DispType (Viewer_MenuAxisFloat_o* __this, const MethodInfo* method);
float Viewer_MenuAxisFloat__get_Height (Viewer_MenuAxisFloat_o* __this, const MethodInfo* method);
System_Func_string__float____float____o* Viewer_MenuAxisFloat__get_Callback (Viewer_MenuAxisFloat_o* __this, const MethodInfo* method);
System_Single_array* Viewer_MenuAxisFloat__get_Axis (Viewer_MenuAxisFloat_o* __this, const MethodInfo* method);
void Viewer_MenuAxisFloat__set_Axis (Viewer_MenuAxisFloat_o* __this, System_Single_array* value, const MethodInfo* method);
float Viewer_MenuAxisFloat__get_IncrementValue (Viewer_MenuAxisFloat_o* __this, const MethodInfo* method);
void Viewer_MenuAxisFloat__set_IncrementValue (Viewer_MenuAxisFloat_o* __this, float value, const MethodInfo* method);
System_String_o* Viewer_MenuAxisFloat__get_Value (Viewer_MenuAxisFloat_o* __this, const MethodInfo* method);
void Viewer_MenuAxisFloat__set_Value (Viewer_MenuAxisFloat_o* __this, System_String_o* value, const MethodInfo* method);
System_Single_array* Viewer_MenuAxisFloat__StringToAxis (System_String_o* axisStr, const MethodInfo* method);
System_String_o* Viewer_MenuAxisFloat__AxisToString (System_Single_array* axis, const MethodInfo* method);
void Viewer_MenuAxisFloat___ctor (Viewer_MenuAxisFloat_o* __this, System_String_o* name, System_Func_string__float____float____o* callback, System_Single_array* defaultAxis, float diff, const MethodInfo* method);
void Viewer_MenuAxisFloat__Tick (Viewer_MenuAxisFloat_o* __this, const MethodInfo* method);
bool Viewer_MenuAxisFloat__Up (Viewer_MenuAxisFloat_o* __this, const MethodInfo* method);
bool Viewer_MenuAxisFloat__Down (Viewer_MenuAxisFloat_o* __this, const MethodInfo* method);
bool Viewer_MenuAxisFloat__Right (Viewer_MenuAxisFloat_o* __this, const MethodInfo* method);
bool Viewer_MenuAxisFloat__Left (Viewer_MenuAxisFloat_o* __this, const MethodInfo* method);
