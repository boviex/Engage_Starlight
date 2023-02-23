#pragma once

#include "il2cpp.h"

UnityEngine_Rect_o UnityEngine_GUILayoutUtility__Internal_GetWindowRect (int32_t windowID, const MethodInfo* method);
void UnityEngine_GUILayoutUtility__Internal_MoveWindow (int32_t windowID, UnityEngine_Rect_o r, const MethodInfo* method);
UnityEngine_GUILayoutUtility_LayoutCache_o* UnityEngine_GUILayoutUtility__SelectIDList (int32_t instanceID, bool isWindow, const MethodInfo* method);
void UnityEngine_GUILayoutUtility__Begin (int32_t instanceID, const MethodInfo* method);
void UnityEngine_GUILayoutUtility__BeginWindow (int32_t windowID, UnityEngine_GUIStyle_o* style, UnityEngine_GUILayoutOption_array* options, const MethodInfo* method);
void UnityEngine_GUILayoutUtility__Layout (const MethodInfo* method);
void UnityEngine_GUILayoutUtility__LayoutFromEditorWindow (const MethodInfo* method);
void UnityEngine_GUILayoutUtility__LayoutFreeGroup (UnityEngine_GUILayoutGroup_o* toplevel, const MethodInfo* method);
void UnityEngine_GUILayoutUtility__LayoutSingleGroup (UnityEngine_GUILayoutGroup_o* i, const MethodInfo* method);
UnityEngine_GUILayoutGroup_o* UnityEngine_GUILayoutUtility__CreateGUILayoutGroupInstanceOfType (System_Type_o* LayoutType, const MethodInfo* method);
UnityEngine_GUILayoutGroup_o* UnityEngine_GUILayoutUtility__BeginLayoutGroup (UnityEngine_GUIStyle_o* style, UnityEngine_GUILayoutOption_array* options, System_Type_o* layoutType, const MethodInfo* method);
void UnityEngine_GUILayoutUtility__EndLayoutGroup (const MethodInfo* method);
UnityEngine_GUILayoutGroup_o* UnityEngine_GUILayoutUtility__BeginLayoutArea (UnityEngine_GUIStyle_o* style, System_Type_o* layoutType, const MethodInfo* method);
UnityEngine_Rect_o UnityEngine_GUILayoutUtility__GetRect (UnityEngine_GUIContent_o* content, UnityEngine_GUIStyle_o* style, UnityEngine_GUILayoutOption_array* options, const MethodInfo* method);
UnityEngine_Rect_o UnityEngine_GUILayoutUtility__DoGetRect (UnityEngine_GUIContent_o* content, UnityEngine_GUIStyle_o* style, UnityEngine_GUILayoutOption_array* options, const MethodInfo* method);
void UnityEngine_GUILayoutUtility___cctor (const MethodInfo* method);
void UnityEngine_GUILayoutUtility__Internal_GetWindowRect_Injected (int32_t windowID, UnityEngine_Rect_o* ret, const MethodInfo* method);
void UnityEngine_GUILayoutUtility__Internal_MoveWindow_Injected (int32_t windowID, UnityEngine_Rect_o* r, const MethodInfo* method);
