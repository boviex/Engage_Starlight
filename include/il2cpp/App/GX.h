#pragma once

#include "il2cpp.h"

UnityEngine_Vector2_o App_GX__GetAnchorDir (int32_t anchor, const MethodInfo* method);
UnityEngine_Vector3_o App_GX__GetAnchorPos (int32_t anchor, const MethodInfo* method);
UnityEngine_Rect_o App_GX__GetReduceRect (UnityEngine_Rect_o rect, float size, const MethodInfo* method);
UnityEngine_Rect_o App_GX__GetReduceRect (UnityEngine_Rect_o rect, float sizeX, float sizeY, const MethodInfo* method);
UnityEngine_Rect_o App_GX__GetLocalRect (UnityEngine_Rect_o rect, const MethodInfo* method);
void App_GX__SetupScreenMatrix (int32_t anchor, const MethodInfo* method);
UnityEngine_Matrix4x4_o App_GX__GetScreenSpaceMatrix (int32_t anchor, const MethodInfo* method);
void App_GX__DrawRect (UnityEngine_Rect_o rect, UnityEngine_Color_o color, const MethodInfo* method);
void App_GX__DrawRect (float x, float y, float w, float h, UnityEngine_Color_o color, const MethodInfo* method);
void App_GX__DrawText (float x, float y, float w, float h, UnityEngine_Color_o color, System_String_o* text, const MethodInfo* method);
void App_GX__DrawText (UnityEngine_Rect_o rect, UnityEngine_Color_o color, System_String_o* text, const MethodInfo* method);
void App_GX__BeginScreenClip (UnityEngine_Rect_o rect, const MethodInfo* method);
void App_GX__BeginScreenClip (float x, float y, float width, float height, const MethodInfo* method);
void App_GX__EndScreenClip (const MethodInfo* method);
void App_GX__DrawScrollBar (float x, float y, UnityEngine_Color_o color, float height, float pos, float max, const MethodInfo* method);
UnityEngine_Vector2_o App_GX__GetTextSize (UnityEngine_GUIStyle_o* style, System_String_o* text, const MethodInfo* method);
UnityEngine_Vector2_o App_GX__GetTextSize (System_String_o* text, const MethodInfo* method);
void App_GX___ctor (App_GX_o* __this, const MethodInfo* method);
void App_GX___cctor (const MethodInfo* method);
