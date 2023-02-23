#pragma once

#include "il2cpp.h"

void App_GameUserGmapData___ctor (App_GameUserGmapData_o* __this, const MethodInfo* method);
void App_GameUserGmapData__Reset (App_GameUserGmapData_o* __this, const MethodInfo* method);
int32_t App_GameUserGmapData__get_Mode (App_GameUserGmapData_o* __this, const MethodInfo* method);
void App_GameUserGmapData__set_Mode (App_GameUserGmapData_o* __this, int32_t value, const MethodInfo* method);
System_String_o* App_GameUserGmapData__get_NowSpotGod (App_GameUserGmapData_o* __this, const MethodInfo* method);
void App_GameUserGmapData__set_NowSpotGod (App_GameUserGmapData_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* App_GameUserGmapData__get_NowSpotEvil (App_GameUserGmapData_o* __this, const MethodInfo* method);
void App_GameUserGmapData__set_NowSpotEvil (App_GameUserGmapData_o* __this, System_String_o* value, const MethodInfo* method);
float App_GameUserGmapData__get_GmapCameraDistance (App_GameUserGmapData_o* __this, const MethodInfo* method);
void App_GameUserGmapData__set_GmapCameraDistance (App_GameUserGmapData_o* __this, float value, const MethodInfo* method);
void App_GameUserGmapData__AddMob (App_GameUserGmapData_o* __this, System_String_o* spotId, App_EncountMob_o* mob, const MethodInfo* method);
App_EncountMob_o* App_GameUserGmapData__GetMob (App_GameUserGmapData_o* __this, System_String_o* spotId, const MethodInfo* method);
void App_GameUserGmapData__ClearMob (App_GameUserGmapData_o* __this, System_String_o* spotId, const MethodInfo* method);
App_GmapSpot_array* App_GameUserGmapData__PopMobList (App_GameUserGmapData_o* __this, int32_t num, const MethodInfo* method);
bool App_GameUserGmapData__ExistsMob (App_GameUserGmapData_o* __this, System_String_o* spotId, const MethodInfo* method);
int32_t App_GameUserGmapData__CountMob (App_GameUserGmapData_o* __this, const MethodInfo* method);
bool App_GameUserGmapData__IsCheckDispos (App_GameUserGmapData_o* __this, const MethodInfo* method);
int32_t App_GameUserGmapData__GetDisposCountFromDeltaHours (App_GameUserGmapData_o* __this, bool printLog, const MethodInfo* method);
bool App_GameUserGmapData__IsCheckDisposTime (App_GameUserGmapData_o* __this, const MethodInfo* method);
void App_GameUserGmapData__InitializeDisposTime (App_GameUserGmapData_o* __this, const MethodInfo* method);
void App_GameUserGmapData__AddEncountCounter (App_GameUserGmapData_o* __this, int32_t type, const MethodInfo* method);
int32_t App_GameUserGmapData__GetDisposEncountCount (App_GameUserGmapData_o* __this, const MethodInfo* method);
int32_t App_GameUserGmapData__ResetEncountCounter (App_GameUserGmapData_o* __this, const MethodInfo* method);
int32_t App_GameUserGmapData__GetEncountCountMapClear (App_GameUserGmapData_o* __this, bool isUpdate, const MethodInfo* method);
int32_t App_GameUserGmapData__GetEncountCountNetwork (App_GameUserGmapData_o* __this, bool isUpdate, const MethodInfo* method);
int32_t App_GameUserGmapData__GetEncountCountMinigame (App_GameUserGmapData_o* __this, bool isUpdate, const MethodInfo* method);
bool App_GameUserGmapData__IsValidRealTime (App_GameUserGmapData_o* __this, const MethodInfo* method);
bool App_GameUserGmapData__IsValidCounter (App_GameUserGmapData_o* __this, int32_t type, const MethodInfo* method);
int32_t App_GameUserGmapData__GetEncountCounter (App_GameUserGmapData_o* __this, int32_t type, const MethodInfo* method);
void App_GameUserGmapData__SetEncountCounter (App_GameUserGmapData_o* __this, int32_t type, int32_t value, const MethodInfo* method);
void App_GameUserGmapData__Serialize (App_GameUserGmapData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_GameUserGmapData__Deserialize (App_GameUserGmapData_o* __this, App_Stream_o* stream, const MethodInfo* method);
