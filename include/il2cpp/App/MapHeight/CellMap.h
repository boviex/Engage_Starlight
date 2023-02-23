#pragma once

#include "il2cpp.h"

void App_MapHeight_CellMap___ctor (App_MapHeight_CellMap_o* __this, int32_t layerMaskA, int32_t layerMaskB, const MethodInfo* method);
float App_MapHeight_CellMap__GetX (App_MapHeight_CellMap_o* __this, int32_t x, int32_t index, const MethodInfo* method);
float App_MapHeight_CellMap__GetZ (App_MapHeight_CellMap_o* __this, int32_t z, int32_t index, const MethodInfo* method);
float App_MapHeight_CellMap__GetHeight (App_MapHeight_CellMap_o* __this, int32_t x, int32_t z, int32_t index, const MethodInfo* method);
float App_MapHeight_CellMap__GetMaxHeight (App_MapHeight_CellMap_o* __this, int32_t x, int32_t z, const MethodInfo* method);
float App_MapHeight_CellMap__GetMinHeight (App_MapHeight_CellMap_o* __this, int32_t x, int32_t z, const MethodInfo* method);
App_MapHeight_CellInfo_o* App_MapHeight_CellMap__Get (App_MapHeight_CellMap_o* __this, int32_t x, int32_t z, const MethodInfo* method);
void App_MapHeight_CellMap__Update (App_MapHeight_CellMap_o* __this, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapHeight_CellMap__IsLayerMask (App_MapHeight_CellMap_o* __this, int32_t x, int32_t z, int32_t layerMask, const MethodInfo* method);
void App_MapHeight_CellMap__Clear (App_MapHeight_CellMap_o* __this, const MethodInfo* method);
