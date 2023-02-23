#pragma once

#include "il2cpp.h"

bool UnityEngine_Rendering_TileLayoutUtils__TryLayoutByTiles (UnityEngine_RectInt_o src, uint32_t tileSize, UnityEngine_RectInt_o* main, UnityEngine_RectInt_o* topRow, UnityEngine_RectInt_o* rightCol, UnityEngine_RectInt_o* topRight, const MethodInfo* method);
bool UnityEngine_Rendering_TileLayoutUtils__TryLayoutByRow (UnityEngine_RectInt_o src, uint32_t tileSize, UnityEngine_RectInt_o* main, UnityEngine_RectInt_o* other, const MethodInfo* method);
bool UnityEngine_Rendering_TileLayoutUtils__TryLayoutByCol (UnityEngine_RectInt_o src, uint32_t tileSize, UnityEngine_RectInt_o* main, UnityEngine_RectInt_o* other, const MethodInfo* method);
