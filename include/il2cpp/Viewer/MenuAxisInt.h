#pragma once

#include "il2cpp.h"

int32_t Viewer_MenuAxisInt__get_DispType (Viewer_MenuAxisInt_o* __this, const MethodInfo* method);
float Viewer_MenuAxisInt__get_Height (Viewer_MenuAxisInt_o* __this, const MethodInfo* method);
System_Func_string__int____int____o* Viewer_MenuAxisInt__get_Callback (Viewer_MenuAxisInt_o* __this, const MethodInfo* method);
System_Int32_array* Viewer_MenuAxisInt__get_Axis (Viewer_MenuAxisInt_o* __this, const MethodInfo* method);
void Viewer_MenuAxisInt__set_Axis (Viewer_MenuAxisInt_o* __this, System_Int32_array* value, const MethodInfo* method);
System_String_o* Viewer_MenuAxisInt__get_Value (Viewer_MenuAxisInt_o* __this, const MethodInfo* method);
void Viewer_MenuAxisInt__set_Value (Viewer_MenuAxisInt_o* __this, System_String_o* value, const MethodInfo* method);
System_Int32_array* Viewer_MenuAxisInt__StringToAxis (System_String_o* axisStr, const MethodInfo* method);
System_String_o* Viewer_MenuAxisInt__AxisToString (System_Int32_array* axis, const MethodInfo* method);
void Viewer_MenuAxisInt___ctor (Viewer_MenuAxisInt_o* __this, System_String_o* name, System_Func_string__int____int____o* callback, System_Int32_array* defaultAxis, const MethodInfo* method);
void Viewer_MenuAxisInt__Tick (Viewer_MenuAxisInt_o* __this, const MethodInfo* method);
bool Viewer_MenuAxisInt__Up (Viewer_MenuAxisInt_o* __this, const MethodInfo* method);
bool Viewer_MenuAxisInt__Down (Viewer_MenuAxisInt_o* __this, const MethodInfo* method);
bool Viewer_MenuAxisInt__Right (Viewer_MenuAxisInt_o* __this, const MethodInfo* method);
bool Viewer_MenuAxisInt__Left (Viewer_MenuAxisInt_o* __this, const MethodInfo* method);
