#pragma once

#include "il2cpp.h"

void App_TerrainLayerMap___ctor (App_TerrainLayerMap_o* __this, const MethodInfo* method);
void App_TerrainLayerMap___ctor (App_TerrainLayerMap_o* __this, UnityEngine_Terrain_o* terrain, const MethodInfo* method);
void App_TerrainLayerMap___ctor (App_TerrainLayerMap_o* __this, UnityEngine_TerrainData_o* data, const MethodInfo* method);
void App_TerrainLayerMap___ctor (App_TerrainLayerMap_o* __this, int32_t width, int32_t height, int32_t layers, const MethodInfo* method);
void App_TerrainLayerMap__ReadData (App_TerrainLayerMap_o* __this, UnityEngine_TerrainData_o* data, const MethodInfo* method);
void App_TerrainLayerMap__WriteData (App_TerrainLayerMap_o* __this, UnityEngine_TerrainData_o* data, const MethodInfo* method);
int32_t App_TerrainLayerMap__GetCurrentLayer (App_TerrainLayerMap_o* __this, int32_t x, int32_t y, const MethodInfo* method);
float App_TerrainLayerMap__GetMaxAlpha (App_TerrainLayerMap_o* __this, int32_t x, int32_t y, const MethodInfo* method);
void App_TerrainLayerMap__Normalize (App_TerrainLayerMap_o* __this, const MethodInfo* method);
void App_TerrainLayerMap__Normalize (App_TerrainLayerMap_o* __this, int32_t layer, const MethodInfo* method);
void App_TerrainLayerMap__FillLayer (App_TerrainLayerMap_o* __this, int32_t layer, const MethodInfo* method);
void App_TerrainLayerMap__SlopLayer (App_TerrainLayerMap_o* __this, UnityEngine_TerrainData_o* data, int32_t layer, const MethodInfo* method);
void App_TerrainLayerMap__ClearLayer (App_TerrainLayerMap_o* __this, int32_t layer, const MethodInfo* method);
void App_TerrainLayerMap__UpdateSoft (App_TerrainLayerMap_o* __this, const MethodInfo* method);
void App_TerrainLayerMap__UpdateSoft (App_TerrainLayerMap_o* __this, int32_t layer, const MethodInfo* method);
int32_t App_TerrainLayerMap__get_Count (App_TerrainLayerMap_o* __this, const MethodInfo* method);
void App_TerrainLayerMap__set_Count (App_TerrainLayerMap_o* __this, int32_t value, const MethodInfo* method);
float App_TerrainLayerMap__get_Item (App_TerrainLayerMap_o* __this, int32_t x, int32_t y, int32_t layer, const MethodInfo* method);
void App_TerrainLayerMap__set_Item (App_TerrainLayerMap_o* __this, int32_t x, int32_t y, int32_t layer, float value, const MethodInfo* method);
