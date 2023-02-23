#pragma once

#include "il2cpp.h"

System_String_o* UniRx_Diagnostics_Logger__get_Name (UniRx_Diagnostics_Logger_o* __this, const MethodInfo* method);
void UniRx_Diagnostics_Logger__set_Name (UniRx_Diagnostics_Logger_o* __this, System_String_o* value, const MethodInfo* method);
void UniRx_Diagnostics_Logger___ctor (UniRx_Diagnostics_Logger_o* __this, System_String_o* loggerName, const MethodInfo* method);
void UniRx_Diagnostics_Logger__Debug (UniRx_Diagnostics_Logger_o* __this, Il2CppObject* message, UnityEngine_Object_o* context, const MethodInfo* method);
void UniRx_Diagnostics_Logger__DebugFormat (UniRx_Diagnostics_Logger_o* __this, System_String_o* format, System_Object_array* args, const MethodInfo* method);
void UniRx_Diagnostics_Logger__Log (UniRx_Diagnostics_Logger_o* __this, Il2CppObject* message, UnityEngine_Object_o* context, const MethodInfo* method);
void UniRx_Diagnostics_Logger__LogFormat (UniRx_Diagnostics_Logger_o* __this, System_String_o* format, System_Object_array* args, const MethodInfo* method);
void UniRx_Diagnostics_Logger__Warning (UniRx_Diagnostics_Logger_o* __this, Il2CppObject* message, UnityEngine_Object_o* context, const MethodInfo* method);
void UniRx_Diagnostics_Logger__WarningFormat (UniRx_Diagnostics_Logger_o* __this, System_String_o* format, System_Object_array* args, const MethodInfo* method);
void UniRx_Diagnostics_Logger__Error (UniRx_Diagnostics_Logger_o* __this, Il2CppObject* message, UnityEngine_Object_o* context, const MethodInfo* method);
void UniRx_Diagnostics_Logger__ErrorFormat (UniRx_Diagnostics_Logger_o* __this, System_String_o* format, System_Object_array* args, const MethodInfo* method);
void UniRx_Diagnostics_Logger__Exception (UniRx_Diagnostics_Logger_o* __this, System_Exception_o* exception, UnityEngine_Object_o* context, const MethodInfo* method);
void UniRx_Diagnostics_Logger__Raw (UniRx_Diagnostics_Logger_o* __this, UniRx_Diagnostics_LogEntry_o logEntry, const MethodInfo* method);
void UniRx_Diagnostics_Logger___cctor (const MethodInfo* method);
