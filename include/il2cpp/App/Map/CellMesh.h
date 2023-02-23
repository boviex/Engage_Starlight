#pragma once

#include "il2cpp.h"

void App_Map_CellMesh___ctor (App_Map_CellMesh_o* __this, UnityEngine_GameObject_o* go, int32_t subMeshCount, int32_t vertexCapacity, const MethodInfo* method);
void App_Map_CellMesh__AddTangents5 (App_Map_CellMesh_o* __this, UnityEngine_Vector4_o* tangent, const MethodInfo* method);
void App_Map_CellMesh__AddCell (App_Map_CellMesh_o* __this, int32_t x, int32_t z, UnityEngine_Color_o color, float distance, const MethodInfo* method);
void App_Map_CellMesh__AddCell (App_Map_CellMesh_o* __this, int32_t x, int32_t z, UnityEngine_Color_o color, UnityEngine_Vector2_o uv0, UnityEngine_Vector2_o uv2, int32_t rotation, float distance, const MethodInfo* method);
void App_Map_CellMesh__AddCell (App_Map_CellMesh_o* __this, int32_t x, int32_t z, UnityEngine_Vector2_o uv0, UnityEngine_Vector2_o uv2, float distance, const MethodInfo* method);
void App_Map_CellMesh__AddCell (App_Map_CellMesh_o* __this, int32_t x, int32_t z, UnityEngine_Color_o color0, UnityEngine_Color_o color1, UnityEngine_Color_o color2, UnityEngine_Color_o color3, float distance, const MethodInfo* method);
void App_Map_CellMesh__AddCell (App_Map_CellMesh_o* __this, int32_t x, int32_t z, UnityEngine_Color_o color0, UnityEngine_Color_o color1, UnityEngine_Color_o color2, UnityEngine_Color_o color3, UnityEngine_Vector2_o uv0, UnityEngine_Vector2_o uv2, float distance, const MethodInfo* method);
void App_Map_CellMesh__AddCell (App_Map_CellMesh_o* __this, int32_t x, int32_t z, uint8_t dir, UnityEngine_Color_o color, UnityEngine_Vector2_o uv0, UnityEngine_Vector2_o uv2, float distance, const MethodInfo* method);
void App_Map_CellMesh__AddStraddleCell (App_Map_CellMesh_o* __this, App_Unit_o* unit, UnityEngine_Color_o color, float uvRotate, const MethodInfo* method);
void App_Map_CellMesh__AddEventCell (App_Map_CellMesh_o* __this, int32_t x, int32_t z, UnityEngine_Color_o color, const MethodInfo* method);
