#pragma once

#include "il2cpp.h"

void App_GmapLineRenderer_LinePoint___ctor (App_GmapLineRenderer_LinePoint_o* __this, int32_t index, UnityEngine_Vector3_o pos, UnityEngine_Color_o color, const MethodInfo* method);
int32_t App_GmapLineRenderer_LinePoint__get_index (App_GmapLineRenderer_LinePoint_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o App_GmapLineRenderer_LinePoint__get_position (App_GmapLineRenderer_LinePoint_o* __this, const MethodInfo* method);
UnityEngine_Color_o App_GmapLineRenderer_LinePoint__get_color (App_GmapLineRenderer_LinePoint_o* __this, const MethodInfo* method);
void App_GmapLineRenderer_LinePoint__set_color (App_GmapLineRenderer_LinePoint_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
float App_GmapLineRenderer_LinePoint__get_alpha (App_GmapLineRenderer_LinePoint_o* __this, const MethodInfo* method);
void App_GmapLineRenderer_LinePoint__set_alpha (App_GmapLineRenderer_LinePoint_o* __this, float value, const MethodInfo* method);
bool App_GmapLineRenderer_LinePoint__get_isApperd (App_GmapLineRenderer_LinePoint_o* __this, const MethodInfo* method);
void App_GmapLineRenderer_LinePoint__set_isApperd (App_GmapLineRenderer_LinePoint_o* __this, bool value, const MethodInfo* method);
void App_GmapLineRenderer_LinePoint__Add (App_GmapLineRenderer_LinePoint_o* __this, System_Collections_Generic_List_Vector3__o** vertices, System_Collections_Generic_List_Color__o** colors, System_Collections_Generic_List_Vector2__o** uvs, System_Collections_Generic_List_int__o** indices, float size, float rotate, const MethodInfo* method);
void App_GmapLineRenderer_LinePoint__UpdateColor (App_GmapLineRenderer_LinePoint_o* __this, System_Collections_Generic_List_Color__o** colors, const MethodInfo* method);
void App_GmapLineRenderer_LinePoint__Tick (App_GmapLineRenderer_LinePoint_o* __this, const MethodInfo* method);
