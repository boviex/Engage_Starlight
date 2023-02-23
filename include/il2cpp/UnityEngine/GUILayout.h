#pragma once

#include "il2cpp.h"

void UnityEngine_GUILayout__Label (System_String_o* text, UnityEngine_GUILayoutOption_array* options, const MethodInfo* method);
void UnityEngine_GUILayout__Label (System_String_o* text, UnityEngine_GUIStyle_o* style, UnityEngine_GUILayoutOption_array* options, const MethodInfo* method);
void UnityEngine_GUILayout__DoLabel (UnityEngine_GUIContent_o* content, UnityEngine_GUIStyle_o* style, UnityEngine_GUILayoutOption_array* options, const MethodInfo* method);
float UnityEngine_GUILayout__HorizontalSlider (float value, float leftValue, float rightValue, UnityEngine_GUILayoutOption_array* options, const MethodInfo* method);
float UnityEngine_GUILayout__DoHorizontalSlider (float value, float leftValue, float rightValue, UnityEngine_GUIStyle_o* slider, UnityEngine_GUIStyle_o* thumb, UnityEngine_GUILayoutOption_array* options, const MethodInfo* method);
void UnityEngine_GUILayout__BeginHorizontal (UnityEngine_GUILayoutOption_array* options, const MethodInfo* method);
void UnityEngine_GUILayout__BeginHorizontal (UnityEngine_GUIContent_o* content, UnityEngine_GUIStyle_o* style, UnityEngine_GUILayoutOption_array* options, const MethodInfo* method);
void UnityEngine_GUILayout__EndHorizontal (const MethodInfo* method);
void UnityEngine_GUILayout__BeginArea (UnityEngine_Rect_o screenRect, const MethodInfo* method);
void UnityEngine_GUILayout__BeginArea (UnityEngine_Rect_o screenRect, UnityEngine_GUIContent_o* content, UnityEngine_GUIStyle_o* style, const MethodInfo* method);
void UnityEngine_GUILayout__EndArea (const MethodInfo* method);
UnityEngine_Vector2_o UnityEngine_GUILayout__BeginScrollView (UnityEngine_Vector2_o scrollPosition, bool alwaysShowHorizontal, bool alwaysShowVertical, UnityEngine_GUILayoutOption_array* options, const MethodInfo* method);
UnityEngine_Vector2_o UnityEngine_GUILayout__BeginScrollView (UnityEngine_Vector2_o scrollPosition, bool alwaysShowHorizontal, bool alwaysShowVertical, UnityEngine_GUIStyle_o* horizontalScrollbar, UnityEngine_GUIStyle_o* verticalScrollbar, UnityEngine_GUIStyle_o* background, UnityEngine_GUILayoutOption_array* options, const MethodInfo* method);
void UnityEngine_GUILayout__EndScrollView (bool handleScrollWheel, const MethodInfo* method);
UnityEngine_Rect_o UnityEngine_GUILayout__Window (int32_t id, UnityEngine_Rect_o screenRect, UnityEngine_GUI_WindowFunction_o* func, System_String_o* text, UnityEngine_GUILayoutOption_array* options, const MethodInfo* method);
UnityEngine_Rect_o UnityEngine_GUILayout__DoWindow (int32_t id, UnityEngine_Rect_o screenRect, UnityEngine_GUI_WindowFunction_o* func, UnityEngine_GUIContent_o* content, UnityEngine_GUIStyle_o* style, UnityEngine_GUILayoutOption_array* options, const MethodInfo* method);
UnityEngine_GUILayoutOption_o* UnityEngine_GUILayout__Width (float width, const MethodInfo* method);
UnityEngine_GUILayoutOption_o* UnityEngine_GUILayout__Height (float height, const MethodInfo* method);
