#pragma once

#include "il2cpp.h"

App_MapOverlap_Data_o* App_MapOverlap__SetImpl (App_MapOverlap_o* __this, int32_t x, int32_t z, App_TerrainData_o* terrain, int32_t turn, int32_t phase, bool create, const MethodInfo* method);
bool App_MapOverlap__RemoveImpl (App_MapOverlap_o* __this, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapOverlap__RemoveImpl (App_MapOverlap_o* __this, int32_t i, const MethodInfo* method);
void App_MapOverlap__ClearImpl (App_MapOverlap_o* __this, const MethodInfo* method);
void App_MapOverlap__CreateEffectImpl (App_MapOverlap_o* __this, const MethodInfo* method);
void App_MapOverlap__UpdateEffectImpl (App_MapOverlap_o* __this, const MethodInfo* method);
int32_t App_MapOverlap__Get (int32_t x, int32_t z, const MethodInfo* method);
int32_t App_MapOverlap__GetCount (const MethodInfo* method);
App_TerrainData_o* App_MapOverlap__GetTerrain (int32_t i, const MethodInfo* method);
App_TerrainData_o* App_MapOverlap__GetTerrain (int32_t x, int32_t z, const MethodInfo* method);
int32_t App_MapOverlap__GetX (int32_t i, const MethodInfo* method);
int32_t App_MapOverlap__GetZ (int32_t i, const MethodInfo* method);
App_MapOverlap_Data_o* App_MapOverlap__GetData (int32_t i, const MethodInfo* method);
App_MapOverlap_Data_o* App_MapOverlap__GetData (int32_t x, int32_t z, const MethodInfo* method);
int32_t App_MapOverlap__GetMoveCost (int32_t x, int32_t z, const MethodInfo* method);
int32_t App_MapOverlap__GetFlyCost (int32_t x, int32_t z, const MethodInfo* method);
bool App_MapOverlap__Set (int32_t x, int32_t z, int32_t index, int32_t turn, int32_t phase, const MethodInfo* method);
bool App_MapOverlap__Set (int32_t x, int32_t z, System_String_o* tid, int32_t turn, int32_t phase, const MethodInfo* method);
bool App_MapOverlap__Set (int32_t x, int32_t z, App_TerrainData_o* terrain, int32_t turn, int32_t phase, const MethodInfo* method);
bool App_MapOverlap__Remove (int32_t x, int32_t z, const MethodInfo* method);
bool App_MapOverlap__Remove (int32_t i, const MethodInfo* method);
void App_MapOverlap__Clear (const MethodInfo* method);
void App_MapOverlap__CreateEffect (const MethodInfo* method);
void App_MapOverlap__UpdateEffect (const MethodInfo* method);
bool App_MapOverlap__CanCreation (App_Unit_o* attacker, int32_t x, int32_t z, System_String_o* tid, const MethodInfo* method);
bool App_MapOverlap__CanCreation (App_Unit_o* attacker, int32_t x, int32_t z, int32_t index, const MethodInfo* method);
bool App_MapOverlap__CanCreation (App_Unit_o* attacker, int32_t x, int32_t z, App_TerrainData_o* data, const MethodInfo* method);
bool App_MapOverlap__CanRemove (App_Unit_o* attacker, int32_t x, int32_t z, const MethodInfo* method);
App_MapOverlap_Data_o* App_MapOverlap__FindBreakable (int32_t x, int32_t z, const MethodInfo* method);
int32_t App_MapOverlap__get_Version (App_MapOverlap_o* __this, const MethodInfo* method);
void App_MapOverlap__OnSerialize (App_MapOverlap_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapOverlap__OnDeserialize (App_MapOverlap_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
void App_MapOverlap___ctor (App_MapOverlap_o* __this, const MethodInfo* method);
