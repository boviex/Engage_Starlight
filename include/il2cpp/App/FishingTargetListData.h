#pragma once

#include "il2cpp.h"

System_String_o* App_FishingTargetListData__get_ID (App_FishingTargetListData_o* __this, const MethodInfo* method);
void App_FishingTargetListData__set_ID (App_FishingTargetListData_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* App_FishingTargetListData__get_FishID (App_FishingTargetListData_o* __this, const MethodInfo* method);
void App_FishingTargetListData__set_FishID (App_FishingTargetListData_o* __this, System_String_o* value, const MethodInfo* method);
int32_t App_FishingTargetListData__get_Priority (App_FishingTargetListData_o* __this, const MethodInfo* method);
void App_FishingTargetListData__set_Priority (App_FishingTargetListData_o* __this, int32_t value, const MethodInfo* method);
void App_FishingTargetListData___ctor (App_FishingTargetListData_o* __this, const MethodInfo* method);
void App_FishingTargetListData__Load (const MethodInfo* method);
void App_FishingTargetListData__OnBuild (App_FishingTargetListData_o* __this, const MethodInfo* method);
void App_FishingTargetListData__GetTargetList (bool EnableStickA, bool EnableStickB, bool EnableStickC, System_Collections_Generic_List_string__o** outFishList, System_Collections_Generic_List_int__o** outPriorityList, const MethodInfo* method);
void App_FishingTargetListData___GetTargetList_g__AddFishList_15_0 (System_String_o* id, int32_t pri, int32_t stickNum, App_FishingTargetListData___c__DisplayClass15_0_o* , const MethodInfo* method);
bool App_FishingTargetListData___GetTargetList_g__IsForecastFish_15_1 (System_String_o* fishID, App_FishingTargetListData___c__DisplayClass15_0_o* , const MethodInfo* method);
