#pragma once

#include "il2cpp.h"

float UnityEngine_GUIUtility__get_pixelsPerPoint (const MethodInfo* method);
int32_t UnityEngine_GUIUtility__get_guiDepth (const MethodInfo* method);
void UnityEngine_GUIUtility__set_mouseUsed (bool value, const MethodInfo* method);
System_String_o* UnityEngine_GUIUtility__get_systemCopyBuffer (const MethodInfo* method);
void UnityEngine_GUIUtility__set_systemCopyBuffer (System_String_o* value, const MethodInfo* method);
int32_t UnityEngine_GUIUtility__GetControlID (int32_t hint, int32_t focusType, UnityEngine_Rect_o rect, const MethodInfo* method);
int32_t UnityEngine_GUIUtility__Internal_GetHotControl (const MethodInfo* method);
int32_t UnityEngine_GUIUtility__Internal_GetKeyboardControl (const MethodInfo* method);
void UnityEngine_GUIUtility__Internal_SetHotControl (int32_t value, const MethodInfo* method);
Il2CppObject* UnityEngine_GUIUtility__Internal_GetDefaultSkin (int32_t skinMode, const MethodInfo* method);
void UnityEngine_GUIUtility__Internal_ExitGUI (const MethodInfo* method);
void UnityEngine_GUIUtility__MarkGUIChanged (const MethodInfo* method);
int32_t UnityEngine_GUIUtility__GetControlID (int32_t hint, int32_t focus, const MethodInfo* method);
Il2CppObject* UnityEngine_GUIUtility__GetStateObject (System_Type_o* t, int32_t controlID, const MethodInfo* method);
bool UnityEngine_GUIUtility__get_guiIsExiting (const MethodInfo* method);
void UnityEngine_GUIUtility__set_guiIsExiting (bool value, const MethodInfo* method);
int32_t UnityEngine_GUIUtility__get_hotControl (const MethodInfo* method);
void UnityEngine_GUIUtility__set_hotControl (int32_t value, const MethodInfo* method);
void UnityEngine_GUIUtility__TakeCapture (const MethodInfo* method);
void UnityEngine_GUIUtility__RemoveCapture (const MethodInfo* method);
int32_t UnityEngine_GUIUtility__get_keyboardControl (const MethodInfo* method);
bool UnityEngine_GUIUtility__HasKeyFocus (int32_t controlID, const MethodInfo* method);
UnityEngine_GUISkin_o* UnityEngine_GUIUtility__GetDefaultSkin (const MethodInfo* method);
void UnityEngine_GUIUtility__ProcessEvent (int32_t instanceID, intptr_t nativeEventPtr, bool* result, const MethodInfo* method);
void UnityEngine_GUIUtility__BeginGUI (int32_t skinMode, int32_t instanceID, int32_t useGUILayout, const MethodInfo* method);
void UnityEngine_GUIUtility__EndGUI (int32_t layoutType, const MethodInfo* method);
bool UnityEngine_GUIUtility__EndGUIFromException (System_Exception_o* exception, const MethodInfo* method);
bool UnityEngine_GUIUtility__EndContainerGUIFromException (System_Exception_o* exception, const MethodInfo* method);
void UnityEngine_GUIUtility__ResetGlobalState (const MethodInfo* method);
bool UnityEngine_GUIUtility__IsExitGUIException (System_Exception_o* exception, const MethodInfo* method);
bool UnityEngine_GUIUtility__ShouldRethrowException (System_Exception_o* exception, const MethodInfo* method);
void UnityEngine_GUIUtility__CheckOnGUI (const MethodInfo* method);
bool UnityEngine_GUIUtility__HitTest (UnityEngine_Rect_o rect, UnityEngine_Vector2_o point, int32_t offset, const MethodInfo* method);
bool UnityEngine_GUIUtility__HitTest (UnityEngine_Rect_o rect, UnityEngine_Vector2_o point, bool isDirectManipulationDevice, const MethodInfo* method);
bool UnityEngine_GUIUtility__HitTest (UnityEngine_Rect_o rect, UnityEngine_Event_o* evt, const MethodInfo* method);
int32_t UnityEngine_GUIUtility__GetControlID_Injected (int32_t hint, int32_t focusType, UnityEngine_Rect_o* rect, const MethodInfo* method);
