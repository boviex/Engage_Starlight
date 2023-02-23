#pragma once

#include "il2cpp.h"

App_Dish_o* App_Cooking__Cook (App_Unit_o* unit, App_FoodData_o* foodData, App_FoodstuffData_array* foodstuffs, const MethodInfo* method);
int32_t App_Cooking__GetDifficulty (App_Unit_o* unit, App_FoodData_o* foodData, const MethodInfo* method);
int32_t App_Cooking__DetermineQuality (int32_t difficulty, App_FoodstuffData_array* foodstuffs, const MethodInfo* method);
App_TasteData_o* App_Cooking__DetermineTaste (App_Unit_o* unit, int32_t quality, const MethodInfo* method);
System_String_o* App_Cooking__TryGetDialogueMid (App_Unit_o* unit, App_Unit_o* toUnit, int32_t order, const MethodInfo* method);
bool App_Cooking__TryGetNameType (App_Unit_o* from, App_Unit_o* to, int32_t* type, System_String_o** suffix, const MethodInfo* method);
void App_Cooking__ThrowAwayBento (App_ProcInst_o* super, const MethodInfo* method);
void App_Cooking___ctor (App_Cooking_o* __this, const MethodInfo* method);
