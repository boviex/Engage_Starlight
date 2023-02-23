#pragma once

#include "il2cpp.h"

System_String_o* App_Dish__get_Name (App_Dish_o* __this, const MethodInfo* method);
App_UnitEnhanceValues_o* App_Dish__get_Enhance (App_Dish_o* __this, const MethodInfo* method);
void App_Dish__set_Enhance (App_Dish_o* __this, App_UnitEnhanceValues_o* value, const MethodInfo* method);
App_UnitEnhanceValues_o* App_Dish__get_BonusEnhance (App_Dish_o* __this, const MethodInfo* method);
void App_Dish__set_BonusEnhance (App_Dish_o* __this, App_UnitEnhanceValues_o* value, const MethodInfo* method);
App_UnitEnhanceValues_o* App_Dish__get_TotalBonusEnhance (App_Dish_o* __this, const MethodInfo* method);
void App_Dish__set_TotalBonusEnhance (App_Dish_o* __this, App_UnitEnhanceValues_o* value, const MethodInfo* method);
bool App_Dish__get_RaiseReliance (App_Dish_o* __this, const MethodInfo* method);
void App_Dish__set_RaiseReliance (App_Dish_o* __this, bool value, const MethodInfo* method);
App_TasteData_o* App_Dish__get_Taste (App_Dish_o* __this, const MethodInfo* method);
void App_Dish__set_Taste (App_Dish_o* __this, App_TasteData_o* value, const MethodInfo* method);
void App_Dish___ctor (App_Dish_o* __this, App_Unit_o* unit, App_FoodData_o* foodData, App_TasteData_o* tasteData, bool raiseReliance, const MethodInfo* method);
App_FoodData_o* App_Dish__get_Food (App_Dish_o* __this, const MethodInfo* method);
System_String_o* App_Dish__GetFoodName (App_Dish_o* __this, const MethodInfo* method);
void App_Dish__ApplyEnhance (App_Dish_o* __this, App_Unit_o* unit, const MethodInfo* method);
App_Dish_RelianceResult_o App_Dish__ApplyReliance (App_Dish_o* __this, App_Unit_o* heroUnit, App_Unit_o* unitA, App_Unit_o* unitB, int32_t type, const MethodInfo* method);
int32_t App_Dish__CalculateRelianceRiseValue (App_Dish_o* __this, App_Unit_o* unitA, App_Unit_o* unitB, int32_t type, const MethodInfo* method);
App_UnitItem_o* App_Dish__MakeBento (App_Dish_o* __this, const MethodInfo* method);
void App_Dish__SetEnhance (App_Dish_o* __this, App_FoodData_o* foodData, App_TasteData_o* tasteData, const MethodInfo* method);
App_UnitEnhanceValues_o* App_Dish__CalculateEnhance (App_Dish_o* __this, App_CapabilitySbyte_o* enhance, App_TasteData_o* tasteData, const MethodInfo* method);
int32_t App_Dish__GetLiking (App_Dish_o* __this, App_Unit_o* unit, const MethodInfo* method);
System_String_o* App_Dish__GetCondDescription (App_Dish_o* __this, const MethodInfo* method);
int32_t App_Dish__GetConversationType (App_Dish_o* __this, App_Unit_o* unitA, App_Unit_o* unitB, App_FoodstuffData_array* foodstuffs, System_Text_StringBuilder_o* builder, const MethodInfo* method);
int32_t App_Dish___ApplyReliance_g__SetTryResult_31_0 (bool isAdded, App_UnitRelianceData_o* reliance, const MethodInfo* method);
