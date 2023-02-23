#pragma once

#include "il2cpp.h"

App_FoodstuffData_array* App_FoodstuffPool__GetFoodstuffs (App_FoodstuffPool_o* __this, const MethodInfo* method);
App_FoodstuffData_array* App_FoodstuffPool__GetNormalFoodstuffs (App_FoodstuffPool_o* __this, const MethodInfo* method);
int32_t App_FoodstuffPool__GetNormalFoodstuffCount (App_FoodstuffPool_o* __this, const MethodInfo* method);
App_FoodstuffData_o* App_FoodstuffPool__GetRareFoodstuff (App_FoodstuffPool_o* __this, const MethodInfo* method);
void App_FoodstuffPool__Reset (App_FoodstuffPool_o* __this, App_FoodData_o* food, const MethodInfo* method);
int32_t App_FoodstuffPool__get_TypeCount (App_FoodstuffPool_o* __this, const MethodInfo* method);
bool App_FoodstuffPool__IsIncludeRaiseReliance (App_FoodstuffPool_o* __this, const MethodInfo* method);
int32_t App_FoodstuffPool__Count (App_FoodstuffPool_o* __this, App_FoodstuffData_o* data, const MethodInfo* method);
int32_t App_FoodstuffPool__CountExceptForRaiseReliance (App_FoodstuffPool_o* __this, const MethodInfo* method);
bool App_FoodstuffPool__CanAddItem (App_FoodstuffPool_o* __this, App_FoodstuffData_o* data, const MethodInfo* method);
bool App_FoodstuffPool__TryAddItem (App_FoodstuffPool_o* __this, App_FoodstuffData_o* data, const MethodInfo* method);
bool App_FoodstuffPool__TryRemoveItem (App_FoodstuffPool_o* __this, App_FoodstuffData_o* data, const MethodInfo* method);
bool App_FoodstuffPool__TryRemoveLastNormalItem (App_FoodstuffPool_o* __this, App_FoodstuffData_o** removedData, const MethodInfo* method);
bool App_FoodstuffPool__TryRemoveRareItem (App_FoodstuffPool_o* __this, App_FoodstuffData_o** removedData, const MethodInfo* method);
System_Collections_Generic_Dictionary_FoodstuffData__int__o* App_FoodstuffPool__GetNormalFoodstuffAndCount (App_FoodstuffPool_o* __this, const MethodInfo* method);
int32_t App_FoodstuffPool__GetNormalFoodstuffMostCount (App_FoodstuffPool_o* __this, const MethodInfo* method);
bool App_FoodstuffPool__IsAccept (App_FoodstuffPool_o* __this, App_FoodstuffData_o* data, App_FoodstuffData_o** acceptData, const MethodInfo* method);
void App_FoodstuffPool___ctor (App_FoodstuffPool_o* __this, const MethodInfo* method);
