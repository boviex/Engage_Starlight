#pragma once

#include "il2cpp.h"

System_String_o* App_FishingDisposPatternData__get_ID (App_FishingDisposPatternData_o* __this, const MethodInfo* method);
void App_FishingDisposPatternData__set_ID (App_FishingDisposPatternData_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* App_FishingDisposPatternData__get_StickType (App_FishingDisposPatternData_o* __this, const MethodInfo* method);
void App_FishingDisposPatternData__set_StickType (App_FishingDisposPatternData_o* __this, System_String_o* value, const MethodInfo* method);
int32_t App_FishingDisposPatternData__get_Time (App_FishingDisposPatternData_o* __this, const MethodInfo* method);
void App_FishingDisposPatternData__set_Time (App_FishingDisposPatternData_o* __this, int32_t value, const MethodInfo* method);
int32_t App_FishingDisposPatternData__get_PositionNum (App_FishingDisposPatternData_o* __this, const MethodInfo* method);
void App_FishingDisposPatternData__set_PositionNum (App_FishingDisposPatternData_o* __this, int32_t value, const MethodInfo* method);
int32_t App_FishingDisposPatternData__get_LotteryParam (App_FishingDisposPatternData_o* __this, const MethodInfo* method);
void App_FishingDisposPatternData__set_LotteryParam (App_FishingDisposPatternData_o* __this, int32_t value, const MethodInfo* method);
System_String_o* App_FishingDisposPatternData__get_FishID (App_FishingDisposPatternData_o* __this, const MethodInfo* method);
void App_FishingDisposPatternData__set_FishID (App_FishingDisposPatternData_o* __this, System_String_o* value, const MethodInfo* method);
void App_FishingDisposPatternData___ctor (App_FishingDisposPatternData_o* __this, const MethodInfo* method);
void App_FishingDisposPatternData__Load (const MethodInfo* method);
void App_FishingDisposPatternData__OnBuild (App_FishingDisposPatternData_o* __this, const MethodInfo* method);
void App_FishingDisposPatternData__GetForecastList (int32_t type, int32_t time, System_Collections_Generic_List_ForecastFishData__o** outList, const MethodInfo* method);
void App_FishingDisposPatternData__GetForecastListBestSix (int32_t type, int32_t time, System_Collections_Generic_List_ForecastFishData__o** outList, const MethodInfo* method);
void App_FishingDisposPatternData__GetForecastListByPosition (int32_t type, int32_t time, int32_t posNum, System_Collections_Generic_List_ForecastFishData__o** outList, const MethodInfo* method);
void App_FishingDisposPatternData__GetRipplesList (int32_t type, int32_t time, int32_t posNum, System_Collections_Generic_List_int__o** outList, const MethodInfo* method);
