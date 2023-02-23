#pragma once

#include "il2cpp.h"

void App_MapPanelRoute___ctor (App_MapPanelRoute_o* __this, const MethodInfo* method);
void App_MapPanelRoute__Update (App_MapPanelRoute_o* __this, const MethodInfo* method);
void App_MapPanelRoute__SetupRoute (App_MapPanelRoute_o* __this, const MethodInfo* method);
void App_MapPanelRoute__SetupResumeRoute (App_MapPanelRoute_o* __this, App_Dir_Type_array* routes, const MethodInfo* method);
void App_MapPanelRoute__SetTransparent (App_MapPanelRoute_o* __this, bool enable, const MethodInfo* method);
void App_MapPanelRoute__Save (App_MapPanelRoute_o* __this, App_Dir_Type_array* routes, const MethodInfo* method);
void App_MapPanelRoute__Reset (App_MapPanelRoute_o* __this, const MethodInfo* method);
bool App_MapPanelRoute__IsRoute (App_MapPanelRoute_o* __this, const MethodInfo* method);
UnityEngine_Vector2_o App_MapPanelRoute__GetUV (App_MapPanelRoute_o* __this, uint8_t oldDir, uint8_t curDir, const MethodInfo* method);
void App_MapPanelRoute__AddVerticalVertex (App_MapPanelRoute_o* __this, uint8_t oldDir, int32_t oldX, int32_t oldZ, int32_t x, int32_t z, const MethodInfo* method);
void App_MapPanelRoute__AddHeadVertex (App_MapPanelRoute_o* __this, uint8_t oldDir, int32_t x, int32_t z, const MethodInfo* method);
void App_MapPanelRoute__AddCell (App_MapPanelRoute_o* __this, int32_t x, int32_t z, UnityEngine_Vector2_o uv, const MethodInfo* method);
void App_MapPanelRoute__AddCell (App_MapPanelRoute_o* __this, int32_t x, int32_t z, UnityEngine_Color_o color, UnityEngine_Vector2_o uv0, UnityEngine_Vector3_o uv2, const MethodInfo* method);
App_Dir_Type_array* App_MapPanelRoute__get_Routes (App_MapPanelRoute_o* __this, const MethodInfo* method);
