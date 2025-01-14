#pragma once

#include "il2cpp.h"

System_String_o* UnityEngine_GUIStyle__get_rawName (UnityEngine_GUIStyle_o* __this, const MethodInfo* method);
void UnityEngine_GUIStyle__set_rawName (UnityEngine_GUIStyle_o* __this, System_String_o* value, const MethodInfo* method);
void UnityEngine_GUIStyle__set_font (UnityEngine_GUIStyle_o* __this, UnityEngine_Font_o* value, const MethodInfo* method);
int32_t UnityEngine_GUIStyle__get_imagePosition (UnityEngine_GUIStyle_o* __this, const MethodInfo* method);
void UnityEngine_GUIStyle__set_alignment (UnityEngine_GUIStyle_o* __this, int32_t value, const MethodInfo* method);
bool UnityEngine_GUIStyle__get_wordWrap (UnityEngine_GUIStyle_o* __this, const MethodInfo* method);
void UnityEngine_GUIStyle__set_clipping (UnityEngine_GUIStyle_o* __this, int32_t value, const MethodInfo* method);
void UnityEngine_GUIStyle__set_contentOffset (UnityEngine_GUIStyle_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
float UnityEngine_GUIStyle__get_fixedWidth (UnityEngine_GUIStyle_o* __this, const MethodInfo* method);
float UnityEngine_GUIStyle__get_fixedHeight (UnityEngine_GUIStyle_o* __this, const MethodInfo* method);
void UnityEngine_GUIStyle__set_fixedHeight (UnityEngine_GUIStyle_o* __this, float value, const MethodInfo* method);
bool UnityEngine_GUIStyle__get_stretchWidth (UnityEngine_GUIStyle_o* __this, const MethodInfo* method);
void UnityEngine_GUIStyle__set_stretchWidth (UnityEngine_GUIStyle_o* __this, bool value, const MethodInfo* method);
bool UnityEngine_GUIStyle__get_stretchHeight (UnityEngine_GUIStyle_o* __this, const MethodInfo* method);
void UnityEngine_GUIStyle__set_stretchHeight (UnityEngine_GUIStyle_o* __this, bool value, const MethodInfo* method);
int32_t UnityEngine_GUIStyle__get_fontSize (UnityEngine_GUIStyle_o* __this, const MethodInfo* method);
void UnityEngine_GUIStyle__set_fontSize (UnityEngine_GUIStyle_o* __this, int32_t value, const MethodInfo* method);
void UnityEngine_GUIStyle__set_fontStyle (UnityEngine_GUIStyle_o* __this, int32_t value, const MethodInfo* method);
intptr_t UnityEngine_GUIStyle__Internal_Create (UnityEngine_GUIStyle_o* self, const MethodInfo* method);
intptr_t UnityEngine_GUIStyle__Internal_Copy (UnityEngine_GUIStyle_o* self, UnityEngine_GUIStyle_o* other, const MethodInfo* method);
void UnityEngine_GUIStyle__Internal_Destroy (intptr_t self, const MethodInfo* method);
intptr_t UnityEngine_GUIStyle__GetStyleStatePtr (UnityEngine_GUIStyle_o* __this, int32_t idx, const MethodInfo* method);
void UnityEngine_GUIStyle__AssignStyleState (UnityEngine_GUIStyle_o* __this, int32_t idx, intptr_t srcStyleState, const MethodInfo* method);
intptr_t UnityEngine_GUIStyle__GetRectOffsetPtr (UnityEngine_GUIStyle_o* __this, int32_t idx, const MethodInfo* method);
void UnityEngine_GUIStyle__Internal_Draw (UnityEngine_GUIStyle_o* __this, UnityEngine_Rect_o screenRect, UnityEngine_GUIContent_o* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, const MethodInfo* method);
void UnityEngine_GUIStyle__Internal_Draw2 (UnityEngine_GUIStyle_o* __this, UnityEngine_Rect_o position, UnityEngine_GUIContent_o* content, int32_t controlID, bool on, const MethodInfo* method);
UnityEngine_Vector2_o UnityEngine_GUIStyle__Internal_CalcSize (UnityEngine_GUIStyle_o* __this, UnityEngine_GUIContent_o* content, const MethodInfo* method);
UnityEngine_Vector2_o UnityEngine_GUIStyle__Internal_CalcSizeWithConstraints (UnityEngine_GUIStyle_o* __this, UnityEngine_GUIContent_o* content, UnityEngine_Vector2_o maxSize, const MethodInfo* method);
float UnityEngine_GUIStyle__Internal_CalcHeight (UnityEngine_GUIStyle_o* __this, UnityEngine_GUIContent_o* content, float width, const MethodInfo* method);
UnityEngine_Vector2_o UnityEngine_GUIStyle__Internal_CalcMinMaxWidth (UnityEngine_GUIStyle_o* __this, UnityEngine_GUIContent_o* content, const MethodInfo* method);
void UnityEngine_GUIStyle__SetMouseTooltip (System_String_o* tooltip, UnityEngine_Rect_o screenRect, const MethodInfo* method);
bool UnityEngine_GUIStyle__IsTooltipActive (System_String_o* tooltip, const MethodInfo* method);
void UnityEngine_GUIStyle__SetDefaultFont (UnityEngine_Font_o* font, const MethodInfo* method);
void UnityEngine_GUIStyle___ctor (UnityEngine_GUIStyle_o* __this, const MethodInfo* method);
void UnityEngine_GUIStyle___ctor (UnityEngine_GUIStyle_o* __this, UnityEngine_GUIStyle_o* other, const MethodInfo* method);
void UnityEngine_GUIStyle__Finalize (UnityEngine_GUIStyle_o* __this, const MethodInfo* method);
System_String_o* UnityEngine_GUIStyle__get_name (UnityEngine_GUIStyle_o* __this, const MethodInfo* method);
void UnityEngine_GUIStyle__set_name (UnityEngine_GUIStyle_o* __this, System_String_o* value, const MethodInfo* method);
UnityEngine_GUIStyleState_o* UnityEngine_GUIStyle__get_normal (UnityEngine_GUIStyle_o* __this, const MethodInfo* method);
void UnityEngine_GUIStyle__set_normal (UnityEngine_GUIStyle_o* __this, UnityEngine_GUIStyleState_o* value, const MethodInfo* method);
UnityEngine_RectOffset_o* UnityEngine_GUIStyle__get_margin (UnityEngine_GUIStyle_o* __this, const MethodInfo* method);
UnityEngine_RectOffset_o* UnityEngine_GUIStyle__get_padding (UnityEngine_GUIStyle_o* __this, const MethodInfo* method);
void UnityEngine_GUIStyle__Draw (UnityEngine_GUIStyle_o* __this, UnityEngine_Rect_o position, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, const MethodInfo* method);
void UnityEngine_GUIStyle__Draw (UnityEngine_GUIStyle_o* __this, UnityEngine_Rect_o position, UnityEngine_GUIContent_o* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, const MethodInfo* method);
void UnityEngine_GUIStyle__Draw (UnityEngine_GUIStyle_o* __this, UnityEngine_Rect_o position, UnityEngine_GUIContent_o* content, int32_t controlID, const MethodInfo* method);
void UnityEngine_GUIStyle__Draw (UnityEngine_GUIStyle_o* __this, UnityEngine_Rect_o position, UnityEngine_GUIContent_o* content, int32_t controlID, bool on, bool hover, const MethodInfo* method);
void UnityEngine_GUIStyle__Draw (UnityEngine_GUIStyle_o* __this, UnityEngine_Rect_o position, UnityEngine_GUIContent_o* content, int32_t controlId, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, const MethodInfo* method);
UnityEngine_GUIStyle_o* UnityEngine_GUIStyle__get_none (const MethodInfo* method);
UnityEngine_Vector2_o UnityEngine_GUIStyle__CalcSize (UnityEngine_GUIStyle_o* __this, UnityEngine_GUIContent_o* content, const MethodInfo* method);
UnityEngine_Vector2_o UnityEngine_GUIStyle__CalcSizeWithConstraints (UnityEngine_GUIStyle_o* __this, UnityEngine_GUIContent_o* content, UnityEngine_Vector2_o constraints, const MethodInfo* method);
float UnityEngine_GUIStyle__CalcHeight (UnityEngine_GUIStyle_o* __this, UnityEngine_GUIContent_o* content, float width, const MethodInfo* method);
bool UnityEngine_GUIStyle__get_isHeightDependantOnWidth (UnityEngine_GUIStyle_o* __this, const MethodInfo* method);
void UnityEngine_GUIStyle__CalcMinMaxWidth (UnityEngine_GUIStyle_o* __this, UnityEngine_GUIContent_o* content, float* minWidth, float* maxWidth, const MethodInfo* method);
System_String_o* UnityEngine_GUIStyle__ToString (UnityEngine_GUIStyle_o* __this, const MethodInfo* method);
void UnityEngine_GUIStyle___cctor (const MethodInfo* method);
void UnityEngine_GUIStyle__set_contentOffset_Injected (UnityEngine_GUIStyle_o* __this, UnityEngine_Vector2_o* value, const MethodInfo* method);
void UnityEngine_GUIStyle__Internal_Draw_Injected (UnityEngine_GUIStyle_o* __this, UnityEngine_Rect_o* screenRect, UnityEngine_GUIContent_o* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, const MethodInfo* method);
void UnityEngine_GUIStyle__Internal_Draw2_Injected (UnityEngine_GUIStyle_o* __this, UnityEngine_Rect_o* position, UnityEngine_GUIContent_o* content, int32_t controlID, bool on, const MethodInfo* method);
void UnityEngine_GUIStyle__Internal_CalcSize_Injected (UnityEngine_GUIStyle_o* __this, UnityEngine_GUIContent_o* content, UnityEngine_Vector2_o* ret, const MethodInfo* method);
void UnityEngine_GUIStyle__Internal_CalcSizeWithConstraints_Injected (UnityEngine_GUIStyle_o* __this, UnityEngine_GUIContent_o* content, UnityEngine_Vector2_o* maxSize, UnityEngine_Vector2_o* ret, const MethodInfo* method);
void UnityEngine_GUIStyle__Internal_CalcMinMaxWidth_Injected (UnityEngine_GUIStyle_o* __this, UnityEngine_GUIContent_o* content, UnityEngine_Vector2_o* ret, const MethodInfo* method);
void UnityEngine_GUIStyle__SetMouseTooltip_Injected (System_String_o* tooltip, UnityEngine_Rect_o* screenRect, const MethodInfo* method);
