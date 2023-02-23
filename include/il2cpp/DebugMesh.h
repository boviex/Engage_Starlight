#pragma once

#include "il2cpp.h"

float DebugMesh__get_FontSize (DebugMesh_o* __this, const MethodInfo* method);
void DebugMesh___ctor (DebugMesh_o* __this, int32_t vertexCapacity, const MethodInfo* method);
void DebugMesh___ctor (DebugMesh_o* __this, UnityEngine_GameObject_o* go, int32_t subMeshCount, int32_t vertexCapacity, const MethodInfo* method);
void DebugMesh__AddText (DebugMesh_o* __this, float x, float y, UnityEngine_Color_o color, System_String_o* text, const MethodInfo* method);
void DebugMesh__AddText (DebugMesh_o* __this, float x, float y, UnityEngine_Color_o color, System_Char_array* text, const MethodInfo* method);
void DebugMesh__AddLine (DebugMesh_o* __this, float x0, float y0, float x1, float y1, UnityEngine_Color_o color, const MethodInfo* method);
void DebugMesh__AddLine (DebugMesh_o* __this, UnityEngine_Vector2_o pos0, UnityEngine_Vector2_o pos1, UnityEngine_Color_o color, const MethodInfo* method);
void DebugMesh__AddRect (DebugMesh_o* __this, UnityEngine_Rect_o rect, UnityEngine_Color_o color, const MethodInfo* method);
void DebugMesh__AddRect (DebugMesh_o* __this, float x, float y, float w, float h, UnityEngine_Color_o color, const MethodInfo* method);
int32_t DebugMesh__GetIndex (uint16_t code, const MethodInfo* method);
UnityEngine_Vector2_o DebugMesh__GetUV0 (int32_t index, const MethodInfo* method);
UnityEngine_Vector2_o DebugMesh__GetUV2 (int32_t index, const MethodInfo* method);
UnityEngine_Vector2_o DebugMesh__GetMaskUV (const MethodInfo* method);
UnityEngine_Vector2_o DebugMesh__GetNumUV0 (int32_t num, const MethodInfo* method);
UnityEngine_Vector2_o DebugMesh__GetNumUV2 (int32_t num, const MethodInfo* method);
UnityEngine_Vector2_o DebugMesh__GetHexUV0 (int32_t hex, const MethodInfo* method);
UnityEngine_Vector2_o DebugMesh__GetHexUV2 (int32_t hex, const MethodInfo* method);
float DebugMesh__AddChara (DebugMesh_o* __this, float x, float y, UnityEngine_Color32_o color, uint16_t code, const MethodInfo* method);
void DebugMesh___cctor (const MethodInfo* method);
