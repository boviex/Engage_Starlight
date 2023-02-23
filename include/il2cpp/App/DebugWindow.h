#pragma once

#include "il2cpp.h"

void App_DebugWindow__SetMenu (App_DebugWindow_o* __this, App_DebugMenu_o* menu, const MethodInfo* method);
DebugMesh_o* App_DebugWindow__get_Mesh (App_DebugWindow_o* __this, const MethodInfo* method);
float App_DebugWindow__GetTextWidth (App_DebugWindow_o* __this, System_String_o* text, const MethodInfo* method);
float App_DebugWindow__GetTextHeight (App_DebugWindow_o* __this, System_String_o* text, const MethodInfo* method);
void App_DebugWindow__Awake (App_DebugWindow_o* __this, const MethodInfo* method);
void App_DebugWindow__Start (App_DebugWindow_o* __this, const MethodInfo* method);
void App_DebugWindow__OnDestroy (App_DebugWindow_o* __this, const MethodInfo* method);
bool App_DebugWindow__TryGetInfo (App_DebugWindow_o* __this, uint16_t ch, UnityEngine_CharacterInfo_o* info, const MethodInfo* method);
float App_DebugWindow__ToScreenX (float x, const MethodInfo* method);
float App_DebugWindow__ToScreenY (float y, const MethodInfo* method);
float App_DebugWindow__DrawFont (App_DebugWindow_o* __this, float x, float y, float h, UnityEngine_Color_o color, uint16_t ch, float scale, bool outline, const MethodInfo* method);
void App_DebugWindow__DrawText (App_DebugWindow_o* __this, float x, float y, float h, UnityEngine_Color_o color, System_String_o* text, float scale, bool outline, const MethodInfo* method);
void App_DebugWindow__DrawRect (App_DebugWindow_o* __this, float x, float y, float w, float h, UnityEngine_Color_o color, const MethodInfo* method);
void App_DebugWindow__DrawRect (App_DebugWindow_o* __this, UnityEngine_Rect_o rect, UnityEngine_Color_o color, const MethodInfo* method);
void App_DebugWindow__DrawScrollBar (App_DebugWindow_o* __this, float x, float y, UnityEngine_Color_o color, float height, float pos, float max, const MethodInfo* method);
void App_DebugWindow__OnDraw (App_DebugWindow_o* __this, const MethodInfo* method);
void App_DebugWindow__LateUpdate (App_DebugWindow_o* __this, const MethodInfo* method);
void App_DebugWindow__SetClip (App_DebugWindow_o* __this, UnityEngine_Material_o* material, UnityEngine_Rect_o rect, const MethodInfo* method);
void App_DebugWindow__SetClip (App_DebugWindow_o* __this, UnityEngine_Material_o* material, float x, float y, float w, float h, const MethodInfo* method);
UnityEngine_Rect_o App_DebugWindow__GetAnchorRect (App_DebugWindow_o* __this, UnityEngine_Rect_o rect, int32_t anchor, const MethodInfo* method);
void App_DebugWindow___ctor (App_DebugWindow_o* __this, const MethodInfo* method);
