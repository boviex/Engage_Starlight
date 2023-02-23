#pragma once

#include "il2cpp.h"

void App_RelayCompletionAwardData__Load (const MethodInfo* method);
System_String_o* App_RelayCompletionAwardData__get_Iid (App_RelayCompletionAwardData_o* __this, const MethodInfo* method);
void App_RelayCompletionAwardData__set_Iid (App_RelayCompletionAwardData_o* __this, System_String_o* value, const MethodInfo* method);
float App_RelayCompletionAwardData__get_Rate (App_RelayCompletionAwardData_o* __this, const MethodInfo* method);
void App_RelayCompletionAwardData__set_Rate (App_RelayCompletionAwardData_o* __this, float value, const MethodInfo* method);
int32_t App_RelayCompletionAwardData__get_MinCount (App_RelayCompletionAwardData_o* __this, const MethodInfo* method);
void App_RelayCompletionAwardData__set_MinCount (App_RelayCompletionAwardData_o* __this, int32_t value, const MethodInfo* method);
int32_t App_RelayCompletionAwardData__get_MaxCount (App_RelayCompletionAwardData_o* __this, const MethodInfo* method);
void App_RelayCompletionAwardData__set_MaxCount (App_RelayCompletionAwardData_o* __this, int32_t value, const MethodInfo* method);
App_RelayCompletionAwardData_FlagField_o* App_RelayCompletionAwardData__get_Flag (App_RelayCompletionAwardData_o* __this, const MethodInfo* method);
void App_RelayCompletionAwardData__set_Flag (App_RelayCompletionAwardData_o* __this, App_RelayCompletionAwardData_FlagField_o* value, const MethodInfo* method);
System_String_o* App_RelayCompletionAwardData__get_Condition (App_RelayCompletionAwardData_o* __this, const MethodInfo* method);
void App_RelayCompletionAwardData__set_Condition (App_RelayCompletionAwardData_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* App_RelayCompletionAwardData__GetDebugName (App_RelayCompletionAwardData_o* __this, const MethodInfo* method);
float App_RelayCompletionAwardData__GetRate (App_RelayCompletionAwardData_o* __this, const MethodInfo* method);
System_Collections_Generic_List_ItemData__o* App_RelayCompletionAwardData__GetForShow (System_String_o* name, System_Collections_Generic_List_ItemData__o* results, const MethodInfo* method);
App_RelayCompletionAwardData_CalcResult_o* App_RelayCompletionAwardData__Calc (System_String_o* mainName, System_String_o* subName, App_Random_o* random, const MethodInfo* method);
void App_RelayCompletionAwardData__CalcMain (App_RelayCompletionAwardData_CalcWork_o* work, const MethodInfo* method);
void App_RelayCompletionAwardData__CalcSub (App_RelayCompletionAwardData_CalcWork_o* work, const MethodInfo* method);
void App_RelayCompletionAwardData__CalcCommon (App_RelayCompletionAwardData_CalcWork_o* work, int32_t tryCount, const MethodInfo* method);
void App_RelayCompletionAwardData__CalcCommonOne (App_RelayCompletionAwardData_CalcWork_o* work, bool isFirstTry, const MethodInfo* method);
void App_RelayCompletionAwardData__AddItem (App_RelayCompletionAwardData_CalcWork_o* work, App_ItemData_o* data, const MethodInfo* method);
void App_RelayCompletionAwardData__Replenish (App_RelayCompletionAwardData_CalcWork_o* work, const MethodInfo* method);
void App_RelayCompletionAwardData___ctor (App_RelayCompletionAwardData_o* __this, const MethodInfo* method);
void App_RelayCompletionAwardData___cctor (const MethodInfo* method);
