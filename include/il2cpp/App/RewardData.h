#pragma once

#include "il2cpp.h"

void App_RewardData__Load (const MethodInfo* method);
System_String_o* App_RewardData__get_Iid (App_RewardData_o* __this, const MethodInfo* method);
void App_RewardData__set_Iid (App_RewardData_o* __this, System_String_o* value, const MethodInfo* method);
float App_RewardData__get_Ratio (App_RewardData_o* __this, const MethodInfo* method);
void App_RewardData__set_Ratio (App_RewardData_o* __this, float value, const MethodInfo* method);
float App_RewardData__get_Factor (App_RewardData_o* __this, const MethodInfo* method);
void App_RewardData__set_Factor (App_RewardData_o* __this, float value, const MethodInfo* method);
float App_RewardData__get_Min (App_RewardData_o* __this, const MethodInfo* method);
void App_RewardData__set_Min (App_RewardData_o* __this, float value, const MethodInfo* method);
float App_RewardData__get_Max (App_RewardData_o* __this, const MethodInfo* method);
void App_RewardData__set_Max (App_RewardData_o* __this, float value, const MethodInfo* method);
bool App_RewardData__get_IsShow (App_RewardData_o* __this, const MethodInfo* method);
void App_RewardData__set_IsShow (App_RewardData_o* __this, bool value, const MethodInfo* method);
System_String_o* App_RewardData__get_Condition (App_RewardData_o* __this, const MethodInfo* method);
void App_RewardData__set_Condition (App_RewardData_o* __this, System_String_o* value, const MethodInfo* method);
App_ItemData_o* App_RewardData__GetItem (App_RewardData_o* __this, const MethodInfo* method);
System_String_o* App_RewardData__GetDebugName (App_RewardData_o* __this, const MethodInfo* method);
bool App_RewardData__IsCondition (System_String_o* condition, const MethodInfo* method);
float App_RewardData__GetPercent (App_RewardData_o* __this, int32_t level, const MethodInfo* method);
int32_t App_RewardData__GetExpFormChallenge (int32_t sortieCount, int32_t difficultyDiff, const MethodInfo* method);
System_Collections_Generic_List_RewardData__o* App_RewardData__CalcRewardsImpl (App_StructDataArrayList_RewardData__o* array, App_Random_o* random, int32_t level, bool isDump, const MethodInfo* method);
System_Collections_Generic_List_ItemData__o* App_RewardData__CalcRewards (System_String_o* name, App_Random_o* random, int32_t level, bool isDump, const MethodInfo* method);
System_Collections_Generic_List_ItemData__o* App_RewardData__CalcRewards (System_String_o* name, const MethodInfo* method);
System_Collections_Generic_List_ItemData__o* App_RewardData__CalcGameClearRewards (int32_t difficulty, const MethodInfo* method);
void App_RewardData___ctor (App_RewardData_o* __this, const MethodInfo* method);
