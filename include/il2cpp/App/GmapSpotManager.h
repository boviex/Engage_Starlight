#pragma once

#include "il2cpp.h"

void App_GmapSpotManager__OnCreate (App_GmapSpotManager_o* __this, const MethodInfo* method);
void App_GmapSpotManager__AttachChapterToSpot (App_GmapSpotManager_o* __this, const MethodInfo* method);
void App_GmapSpotManager__AttachModels (App_GmapSpotManager_o* __this, const MethodInfo* method);
void App_GmapSpotManager__AttachModelsChapter (App_GmapSpotManager_o* __this, App_GmapSpot_o* spot, const MethodInfo* method);
void App_GmapSpotManager__SetNextSpots (App_GmapSpotManager_o* __this, App_Gmap_GmapPathCollection_o* paths, const MethodInfo* method);
App_GmapSpot_o* App_GmapSpotManager__CheckChange (App_GmapSpotManager_o* __this, const MethodInfo* method);
App_GmapSpot_o* App_GmapSpotManager__FindSpotBySpotID (App_GmapSpotManager_o* __this, System_String_o* spotID, const MethodInfo* method);
App_GmapSpot_o* App_GmapSpotManager__FindSpotByCID (App_GmapSpotManager_o* __this, System_String_o* cid, const MethodInfo* method);
App_GmapSpot_o* App_GmapSpotManager__FindSpot (App_GmapSpotManager_o* __this, App_ChapterData_o* chapter, const MethodInfo* method);
App_GmapSpot_o* App_GmapSpotManager__GetNewestSpot (App_GmapSpotManager_o* __this, const MethodInfo* method);
App_GmapSpot_o* App_GmapSpotManager__GetEncountSpotOne (App_GmapSpotManager_o* __this, const MethodInfo* method);
int32_t App_GmapSpotManager__GetEncountCount (App_GmapSpotManager_o* __this, int32_t mode, int32_t rareType, const MethodInfo* method);
App_GmapSpot_o* App_GmapSpotManager__GetSubSpotOne (App_GmapSpotManager_o* __this, const MethodInfo* method);
System_Collections_Generic_List_GmapSpot__o* App_GmapSpotManager__GetRoute (App_GmapSpotManager_o* __this, App_GmapSpot_o* start, App_GmapSpot_o* end, const MethodInfo* method);
void App_GmapSpotManager__PutMobUnits (App_GmapSpotManager_o* __this, const MethodInfo* method);
void App_GmapSpotManager__UnloadMobUnits (App_GmapSpotManager_o* __this, const MethodInfo* method);
int32_t App_GmapSpotManager__GetSettableSpotCount (App_GmapSpotManager_o* __this, const MethodInfo* method);
int32_t App_GmapSpotManager__GetDisposCount (App_GmapSpotManager_o* __this, const MethodInfo* method);
int32_t App_GmapSpotManager__CalculateDisposCount (App_GmapSpotManager_o* __this, const MethodInfo* method);
void App_GmapSpotManager__SetDispos (App_GmapSpotManager_o* __this, const MethodInfo* method);
void App_GmapSpotManager__ForEachImpl (System_Func_GmapSpot__bool__o* cond, System_Action_GmapSpot__o* func, const MethodInfo* method);
void App_GmapSpotManager__ForEach (System_Action_GmapSpot__o* func, const MethodInfo* method);
void App_GmapSpotManager__ForEachOnGmap (int32_t mode, System_Action_GmapSpot__o* func, const MethodInfo* method);
void App_GmapSpotManager__ForEachAtChapter (int32_t mode, System_Action_GmapSpot__o* func, const MethodInfo* method);
void App_GmapSpotManager__SetState (System_String_o* cid, int32_t state, const MethodInfo* method);
System_String_o* App_GmapSpotManager__GetKizunaScriptName (const MethodInfo* method);
void App_GmapSpotManager__InitActiveSpots (const MethodInfo* method);
void App_GmapSpotManager__UpdateStateM017Model (const MethodInfo* method);
void App_GmapSpotManager__SetStateM017Model (const MethodInfo* method);
void App_GmapSpotManager__OpenNextChapters (App_ChapterData_o* chapter, const MethodInfo* method);
void App_GmapSpotManager__OnSerialize (App_GmapSpotManager_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_GmapSpotManager__OnDeserialize (App_GmapSpotManager_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
void App_GmapSpotManager___ctor (App_GmapSpotManager_o* __this, const MethodInfo* method);
void App_GmapSpotManager___cctor (const MethodInfo* method);
