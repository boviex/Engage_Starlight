#pragma once

#include "il2cpp.h"

void App_Ranking__OnCreate (App_Ranking_o* __this, const MethodInfo* method);
void App_Ranking__OnDispose (App_Ranking_o* __this, const MethodInfo* method);
void App_Ranking__Download (App_Ranking_o* __this, App_ProcInst_o* super, System_String_o* cid, const MethodInfo* method);
void App_Ranking__Upload (App_Ranking_o* __this, App_ProcInst_o* super, System_String_o* cid, App_NexRanking_Data_array* pairs, const MethodInfo* method);
App_NexRanking_Data_array* App_Ranking__GetRankingData (App_Ranking_o* __this, const MethodInfo* method);
App_PersonData_o* App_Ranking__GetPersonDataByNetRankingIndex (int32_t netRankingIndex, const MethodInfo* method);
App_GodData_o* App_Ranking__GetGodDataByNetRankingIndex (int32_t netRankingIndex, const MethodInfo* method);
void App_Ranking___ctor (App_Ranking_o* __this, const MethodInfo* method);
