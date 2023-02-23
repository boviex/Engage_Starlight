#pragma once

#include "il2cpp.h"

void App_EncountMob___ctor (App_EncountMob_o* __this, const MethodInfo* method);
System_String_o* App_EncountMob__Dump (App_EncountMob_o* __this, const MethodInfo* method);
void App_EncountMob__Appear (App_EncountMob_o* __this, int32_t type, int32_t rank, System_String_o* ejid, System_String_o* spotId, const MethodInfo* method);
bool App_EncountMob__DecideEncountRare (App_EncountMob_o* __this, System_String_o* spotId, int32_t* rareType, int32_t* rareNum, const MethodInfo* method);
int32_t App_EncountMob__DecideEnemyType (App_EncountMob_o* __this, System_String_o* nationName, const MethodInfo* method);
int32_t App_EncountMob__GetEnemyRate (App_EncountMob_o* __this, System_String_o* nationName, int32_t rareType, const MethodInfo* method);
int32_t App_EncountMob__GetEnemyRateAvarage (App_EncountMob_o* __this, int32_t rareType, const MethodInfo* method);
int32_t App_EncountMob__DecideEnemyNum (App_EncountMob_o* __this, int32_t nationLevel, const MethodInfo* method);
void App_EncountMob__Clear (App_EncountMob_o* __this, const MethodInfo* method);
void App_EncountMob__SetRandomEncountJob (App_EncountMob_o* __this, System_String_o* ejid, const MethodInfo* method);
App_JobData_o* App_EncountMob__GetEncountJob (App_EncountMob_o* __this, App_Random_o* random, int32_t level, bool isLeader, bool isIgnoreMageCannon, const MethodInfo* method);
App_JobData_o* App_EncountMob__GetLeaderJob (App_EncountMob_o* __this, const MethodInfo* method);
App_PersonData_o* App_EncountMob__GetEncountPerson (App_EncountMob_o* __this, App_Random_o* random, App_JobData_o* job, int32_t unitRareType, const MethodInfo* method);
App_PersonData_o* App_EncountMob__GetLeaderPerson (App_EncountMob_o* __this, int32_t unitRareType, const MethodInfo* method);
App_PersonData_o* App_EncountMob__GetIconPerson (App_EncountMob_o* __this, const MethodInfo* method);
int32_t App_EncountMob__GetRareCount (App_EncountMob_o* __this, const MethodInfo* method);
App_PersonData_o* App_EncountMob__TryGetHighJobPerson (App_PersonData_o* person, App_JobData_o* job, const MethodInfo* method);
void App_EncountMob__Serialize (App_EncountMob_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_EncountMob__Deserialize (App_EncountMob_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_EncountMob__Correct (App_EncountMob_o* __this, const MethodInfo* method);
int32_t App_EncountMob__get_Rank (App_EncountMob_o* __this, const MethodInfo* method);
void App_EncountMob__set_Rank (App_EncountMob_o* __this, int32_t value, const MethodInfo* method);
int32_t App_EncountMob__get_LeaderRank (App_EncountMob_o* __this, const MethodInfo* method);
int32_t App_EncountMob__get_Cycle (App_EncountMob_o* __this, const MethodInfo* method);
void App_EncountMob__set_Cycle (App_EncountMob_o* __this, int32_t value, const MethodInfo* method);
int32_t App_EncountMob__get_PlayerDispos (App_EncountMob_o* __this, const MethodInfo* method);
void App_EncountMob__set_PlayerDispos (App_EncountMob_o* __this, int32_t value, const MethodInfo* method);
int32_t App_EncountMob__get_EnemyDispos (App_EncountMob_o* __this, const MethodInfo* method);
void App_EncountMob__set_EnemyDispos (App_EncountMob_o* __this, int32_t value, const MethodInfo* method);
App_RandomSeed_o App_EncountMob__get_Seed (App_EncountMob_o* __this, const MethodInfo* method);
int32_t App_EncountMob__get_RareType (App_EncountMob_o* __this, const MethodInfo* method);
void App_EncountMob__set_ExpRareCount (App_EncountMob_o* __this, int32_t value, const MethodInfo* method);
void App_EncountMob__set_GoldRareCount (App_EncountMob_o* __this, int32_t value, const MethodInfo* method);
int32_t App_EncountMob__get_LeaderGender (App_EncountMob_o* __this, const MethodInfo* method);
void App_EncountMob__set_LeaderGender (App_EncountMob_o* __this, int32_t value, const MethodInfo* method);
