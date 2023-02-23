#pragma once

#include "il2cpp.h"

void App_CalculatorManager___ctor (App_CalculatorManager_o* __this, const MethodInfo* method);
App_CalculatorCommand_o* App_CalculatorManager__FindCommand (App_CalculatorManager_o* __this, int32_t key, const MethodInfo* method);
App_CalculatorCommand_o* App_CalculatorManager__FindCommand (App_CalculatorManager_o* __this, System_String_o* name, const MethodInfo* method);
App_CalculatorCommand_o* App_CalculatorManager__AddCommand (App_CalculatorManager_o* __this, App_CalculatorCommand_o* command, const MethodInfo* method);
App_CalculatorCommand_o* App_CalculatorManager__AddCommand (App_CalculatorManager_o* __this, System_String_o* name, System_String_o* func, const MethodInfo* method);
App_CalculatorCommand_o* App_CalculatorManager__AddCommand (App_CalculatorManager_o* __this, System_String_o* name, float value, const MethodInfo* method);
void App_CalculatorManager__RemoveCommand (App_CalculatorManager_o* __this, App_CalculatorCommand_o* command, const MethodInfo* method);
void App_CalculatorManager__RemoveCommand (App_CalculatorManager_o* __this, System_String_o* name, const MethodInfo* method);
void App_CalculatorManager__RemoveCommand_object_ (App_CalculatorManager_o* __this, const MethodInfo_22C0BF0* method);
void App_CalculatorManager__ClearCommand (App_CalculatorManager_o* __this, const MethodInfo* method);
float App_CalculatorManager__RunCommand (App_CalculatorManager_o* __this, System_String_o* name, const MethodInfo* method);
float App_CalculatorManager__RunCommand (App_CalculatorManager_o* __this, System_String_o* name, Il2CppObject* obj1, Il2CppObject* obj2, const MethodInfo* method);
float App_CalculatorManager__RunCommand (App_CalculatorManager_o* __this, System_String_o* name, System_Collections_Generic_List_float__o* args, const MethodInfo* method);
float App_CalculatorManager__RunCommand (App_CalculatorManager_o* __this, System_String_o* name, System_Collections_Generic_List_float__o* args, Il2CppObject* obj1, Il2CppObject* obj2, const MethodInfo* method);
void App_CalculatorManager__Dump (App_CalculatorManager_o* __this, const MethodInfo* method);
float App_CalculatorManager__Calculate (App_CalculatorManager_o* __this, System_String_o* name, Il2CppObject* obj1, Il2CppObject* obj2, const MethodInfo* method);
float App_CalculatorManager__Calculate (App_CalculatorManager_o* __this, App_StringCalculator_o* calcurator, Il2CppObject* obj1, Il2CppObject* obj2, const MethodInfo* method);
float App_CalculatorManager__Calculate (App_CalculatorManager_o* __this, App_StringCalculator_o* calcurator, App_CalculatorCommand_o* command, System_Collections_Generic_List_float__o* args, Il2CppObject* obj1, Il2CppObject* obj2, const MethodInfo* method);
float App_CalculatorManager__Calculate (App_CalculatorManager_o* __this, App_StringCalculator_o* calcurator, System_Collections_Generic_List_float__o* args, Il2CppObject* obj1, Il2CppObject* obj2, const MethodInfo* method);
float App_CalculatorManager__Execute (App_CalculatorManager_o* __this, System_String_o* name, Il2CppObject* obj1, Il2CppObject* obj2, const MethodInfo* method);
float App_CalculatorManager__GetValueImpl (App_CalculatorManager_o* __this, App_CalculatorUtil_Entity_o* entity, Il2CppObject* obj1, Il2CppObject* obj2, const MethodInfo* method);
float App_CalculatorManager__GetArgsImpl (App_CalculatorManager_o* __this, App_CalculatorUtil_Entity_o* entity, App_CalculatorManager_CommandStack_o* stack, const MethodInfo* method);
float App_CalculatorManager__FuncImpl (App_CalculatorManager_o* __this, App_CalculatorCommand_o* command, System_Collections_Generic_List_float__o* args, Il2CppObject* obj1, Il2CppObject* obj2, const MethodInfo* method);
float App_CalculatorManager__FuncImpl (App_CalculatorManager_o* __this, App_CalculatorUtil_Entity_o* entity, App_CalculatorManager_CommandStack_o* stack, float value, Il2CppObject* obj1, Il2CppObject* obj2, const MethodInfo* method);
float App_CalculatorManager__FuncImpl (App_CalculatorManager_o* __this, App_CalculatorUtil_Entity_o* entity, System_String_o* arg, Il2CppObject* obj1, Il2CppObject* obj2, const MethodInfo* method);
float App_CalculatorManager__FuncImpl (App_CalculatorManager_o* __this, App_CalculatorUtil_Entity_o* entity, Il2CppObject* obj1, Il2CppObject* obj2, const MethodInfo* method);
void App_CalculatorManager__SetValueImpl (App_CalculatorManager_o* __this, App_CalculatorUtil_Entity_o* entity, float value, Il2CppObject* obj1, Il2CppObject* obj2, const MethodInfo* method);
System_Collections_Generic_Dictionary_ValueCollection_int__CalculatorCommand__o* App_CalculatorManager__GetCommandCollection (App_CalculatorManager_o* __this, const MethodInfo* method);
void App_CalculatorManager___cctor (const MethodInfo* method);
