#pragma once

#include "il2cpp.h"

void App_Random__InitializeAll (const MethodInfo* method);
void App_Random__InitializeAll (uint32_t v, const MethodInfo* method);
App_Random_o* App_Random__GetInstance (int32_t type, const MethodInfo* method);
bool App_Random__IsSave (int32_t type, const MethodInfo* method);
App_Random_o* App_Random__get_System (const MethodInfo* method);
App_Random_o* App_Random__get_Game (const MethodInfo* method);
App_Random_o* App_Random__get_Spot (const MethodInfo* method);
App_Random_o* App_Random__get_Hub (const MethodInfo* method);
App_Random_o* App_Random__get_HubItem (const MethodInfo* method);
App_Random_o* App_Random__get_KillBonus (const MethodInfo* method);
App_Random_o* App_Random__get_Combat (const MethodInfo* method);
void App_Random___ctor (App_Random_o* __this, const MethodInfo* method);
void App_Random___ctor (App_Random_o* __this, uint32_t seed, const MethodInfo* method);
void App_Random__Initialize (App_Random_o* __this, const MethodInfo* method);
void App_Random__Initialize (App_Random_o* __this, uint32_t v, const MethodInfo* method);
int32_t App_Random__Peek (App_Random_o* __this, const MethodInfo* method);
App_Random_o* App_Random__Spin (App_Random_o* __this, int32_t count, const MethodInfo* method);
int32_t App_Random__GetValue (App_Random_o* __this, const MethodInfo* method);
float App_Random__GetF01 (App_Random_o* __this, const MethodInfo* method);
int32_t App_Random__GetValue (App_Random_o* __this, int32_t num, const MethodInfo* method);
int32_t App_Random__GetMinMax (App_Random_o* __this, int32_t min, int32_t max, const MethodInfo* method);
float App_Random__GetMinMax (App_Random_o* __this, float min, float max, const MethodInfo* method);
int32_t App_Random__GetMaxMin (App_Random_o* __this, int32_t min, int32_t max, const MethodInfo* method);
UnityEngine_Vector3_o App_Random__get_insideUnitSphere (App_Random_o* __this, const MethodInfo* method);
UnityEngine_Vector2_o App_Random__get_insideUnitCircle (App_Random_o* __this, const MethodInfo* method);
bool App_Random__IsProbability100 (App_Random_o* __this, float percent, const MethodInfo* method);
void App_Random__Shuffle_GmapSpot_ (App_Random_o* __this, System_Collections_Generic_List_T__o* list, const MethodInfo_2057410* method);
void App_Random__Shuffle_int_ (App_Random_o* __this, System_Collections_Generic_List_T__o* list, const MethodInfo_20573E0* method);
void App_Random__Shuffle_object_ (App_Random_o* __this, System_Collections_Generic_List_T__o* list, const MethodInfo_2057410* method);
void App_Random__Shuffle_RelayCompletionAwardData_ (App_Random_o* __this, System_Collections_Generic_List_T__o* list, const MethodInfo_2057410* method);
void App_Random__Shuffle_string_ (App_Random_o* __this, System_Collections_Generic_List_T__o* list, const MethodInfo_2057410* method);
void App_Random__Shuffle_Unit_ (App_Random_o* __this, System_Collections_Generic_List_T__o* list, const MethodInfo_2057410* method);
int32_t App_Random__GetIndex (App_Random_o* __this, System_Int32_array* ratioTable, const MethodInfo* method);
App_RandomSeed_o App_Random__get_Seed (App_Random_o* __this, const MethodInfo* method);
void App_Random__set_Seed (App_Random_o* __this, App_RandomSeed_o value, const MethodInfo* method);
void App_Random__Dump (App_Random_o* __this, const MethodInfo* method);
void App_Random__Serialize (App_Stream_o* stream, const MethodInfo* method);
void App_Random__Deserialize (App_Stream_o* stream, const MethodInfo* method);
