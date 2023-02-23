#pragma once

#include "il2cpp.h"

void Debug__Assert (bool condition, const MethodInfo* method);
void Debug__Assert (bool condition, System_String_o* message, const MethodInfo* method);
void Debug__AssertFormat (bool condition, System_String_o* format, System_Object_array* args, const MethodInfo* method);
void Debug__LogAssertion (Il2CppObject* message, UnityEngine_Object_o* context, const MethodInfo* method);
void Debug__LogAssertion (Il2CppObject* message, const MethodInfo* method);
void Debug__LogAssertionFormat (UnityEngine_Object_o* context, System_String_o* format, System_Object_array* args, const MethodInfo* method);
void Debug__LogAssertionFormat (System_String_o* format, System_Object_array* args, const MethodInfo* method);
void Debug__LogWarning (Il2CppObject* message, UnityEngine_Object_o* context, const MethodInfo* method);
void Debug__LogWarning (Il2CppObject* message, const MethodInfo* method);
void Debug__LogWarningFormat (System_String_o* format, System_Object_array* args, const MethodInfo* method);
void Debug__Log (Il2CppObject* message, const MethodInfo* method);
void Debug__Log (Il2CppObject* message, UnityEngine_Object_o* context, const MethodInfo* method);
void Debug__LogFormat (System_String_o* format, System_Object_array* args, const MethodInfo* method);
void Debug__LogError (Il2CppObject* message, const MethodInfo* method);
void Debug__LogError (Il2CppObject* message, UnityEngine_Object_o* context, const MethodInfo* method);
void Debug__LogErrorFormat (System_String_o* format, System_Object_array* args, const MethodInfo* method);
void Debug__LogException (System_Exception_o* exception, UnityEngine_Object_o* context, const MethodInfo* method);
void Debug__LogException (System_Exception_o* exception, const MethodInfo* method);
void Debug__DrawLine (UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Color_o color, float duration, const MethodInfo* method);
void Debug__DrawLine (UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Color_o color, const MethodInfo* method);
void Debug__DrawLine (UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, const MethodInfo* method);
void Debug__DrawRay (UnityEngine_Vector3_o start, UnityEngine_Vector3_o dir, const MethodInfo* method);
void Debug__DrawRay (UnityEngine_Vector3_o start, UnityEngine_Vector3_o dir, UnityEngine_Color_o color, const MethodInfo* method);
void Debug__DrawRay (UnityEngine_Vector3_o start, UnityEngine_Vector3_o dir, UnityEngine_Color_o color, float duration, const MethodInfo* method);
void Debug__DebugBreak (const MethodInfo* method);
UnityEngine_ILogger_o* Debug__get_unityLogger (const MethodInfo* method);
void Debug___ctor (Debug_o* __this, const MethodInfo* method);
