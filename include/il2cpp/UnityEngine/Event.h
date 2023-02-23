#pragma once

#include "il2cpp.h"

int32_t UnityEngine_Event__get_rawType (UnityEngine_Event_o* __this, const MethodInfo* method);
UnityEngine_Vector2_o UnityEngine_Event__get_mousePosition (UnityEngine_Event_o* __this, const MethodInfo* method);
UnityEngine_Vector2_o UnityEngine_Event__get_delta (UnityEngine_Event_o* __this, const MethodInfo* method);
int32_t UnityEngine_Event__get_pointerType (UnityEngine_Event_o* __this, const MethodInfo* method);
int32_t UnityEngine_Event__get_modifiers (UnityEngine_Event_o* __this, const MethodInfo* method);
uint16_t UnityEngine_Event__get_character (UnityEngine_Event_o* __this, const MethodInfo* method);
int32_t UnityEngine_Event__get_keyCode (UnityEngine_Event_o* __this, const MethodInfo* method);
void UnityEngine_Event__set_displayIndex (UnityEngine_Event_o* __this, int32_t value, const MethodInfo* method);
int32_t UnityEngine_Event__get_type (UnityEngine_Event_o* __this, const MethodInfo* method);
System_String_o* UnityEngine_Event__get_commandName (UnityEngine_Event_o* __this, const MethodInfo* method);
void UnityEngine_Event__Internal_Use (UnityEngine_Event_o* __this, const MethodInfo* method);
intptr_t UnityEngine_Event__Internal_Create (int32_t displayIndex, const MethodInfo* method);
void UnityEngine_Event__Internal_Destroy (intptr_t ptr, const MethodInfo* method);
int32_t UnityEngine_Event__GetTypeForControl (UnityEngine_Event_o* __this, int32_t controlID, const MethodInfo* method);
bool UnityEngine_Event__PopEvent (UnityEngine_Event_o* outEvent, const MethodInfo* method);
void UnityEngine_Event__Internal_SetNativeEvent (intptr_t ptr, const MethodInfo* method);
void UnityEngine_Event__Internal_MakeMasterEventCurrent (int32_t displayIndex, const MethodInfo* method);
void UnityEngine_Event___ctor (UnityEngine_Event_o* __this, const MethodInfo* method);
void UnityEngine_Event___ctor (UnityEngine_Event_o* __this, int32_t displayIndex, const MethodInfo* method);
void UnityEngine_Event__Finalize (UnityEngine_Event_o* __this, const MethodInfo* method);
bool UnityEngine_Event__get_shift (UnityEngine_Event_o* __this, const MethodInfo* method);
bool UnityEngine_Event__get_control (UnityEngine_Event_o* __this, const MethodInfo* method);
bool UnityEngine_Event__get_alt (UnityEngine_Event_o* __this, const MethodInfo* method);
bool UnityEngine_Event__get_command (UnityEngine_Event_o* __this, const MethodInfo* method);
UnityEngine_Event_o* UnityEngine_Event__get_current (const MethodInfo* method);
bool UnityEngine_Event__get_isKey (UnityEngine_Event_o* __this, const MethodInfo* method);
bool UnityEngine_Event__get_isMouse (UnityEngine_Event_o* __this, const MethodInfo* method);
bool UnityEngine_Event__get_isDirectManipulationDevice (UnityEngine_Event_o* __this, const MethodInfo* method);
int32_t UnityEngine_Event__GetHashCode (UnityEngine_Event_o* __this, const MethodInfo* method);
bool UnityEngine_Event__Equals (UnityEngine_Event_o* __this, Il2CppObject* obj, const MethodInfo* method);
System_String_o* UnityEngine_Event__ToString (UnityEngine_Event_o* __this, const MethodInfo* method);
void UnityEngine_Event__Use (UnityEngine_Event_o* __this, const MethodInfo* method);
void UnityEngine_Event__get_mousePosition_Injected (UnityEngine_Event_o* __this, UnityEngine_Vector2_o* ret, const MethodInfo* method);
void UnityEngine_Event__get_delta_Injected (UnityEngine_Event_o* __this, UnityEngine_Vector2_o* ret, const MethodInfo* method);
