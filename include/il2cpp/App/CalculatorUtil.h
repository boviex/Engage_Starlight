#pragma once

#include "il2cpp.h"

int32_t App_CalculatorUtil__GetPriority (int32_t type, const MethodInfo* method);
bool App_CalculatorUtil__IsNegative (int32_t now, int32_t old, const MethodInfo* method);
bool App_CalculatorUtil__IsAssign (int32_t type, const MethodInfo* method);
int32_t App_CalculatorUtil__GetSingleType (uint16_t name, const MethodInfo* method);
int32_t App_CalculatorUtil__GetThreeType (System_String_o* name, int32_t index, const MethodInfo* method);
int32_t App_CalculatorUtil__GetDoubleType (System_String_o* name, int32_t index, const MethodInfo* method);
bool App_CalculatorUtil__IsCode (uint16_t name, const MethodInfo* method);
bool App_CalculatorUtil__IsNumber (uint16_t name, const MethodInfo* method);
bool App_CalculatorUtil__IsString (uint16_t name, const MethodInfo* method);
bool App_CalculatorUtil__IsArgs (System_String_o* name, int32_t index, const MethodInfo* method);
bool App_CalculatorUtil__IsEmpty (uint16_t name, const MethodInfo* method);
System_String_o* App_CalculatorUtil__StringToNumber (System_String_o* name, int32_t index, const MethodInfo* method);
System_String_o* App_CalculatorUtil__StringToString (System_String_o* name, int32_t index, const MethodInfo* method);
System_String_o* App_CalculatorUtil__StringToArgs (System_String_o* name, int32_t index, const MethodInfo* method);
System_String_o* App_CalculatorUtil__StringToName (System_String_o* name, int32_t index, const MethodInfo* method);
void App_CalculatorUtil___ctor (App_CalculatorUtil_o* __this, const MethodInfo* method);
void App_CalculatorUtil___cctor (const MethodInfo* method);
