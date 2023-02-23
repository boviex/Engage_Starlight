#pragma once

#include "il2cpp.h"

System_String_o* UniRx_Diagnostics_LogEntry__get_LoggerName (UniRx_Diagnostics_LogEntry_o __this, const MethodInfo* method);
void UniRx_Diagnostics_LogEntry__set_LoggerName (UniRx_Diagnostics_LogEntry_o __this, System_String_o* value, const MethodInfo* method);
int32_t UniRx_Diagnostics_LogEntry__get_LogType (UniRx_Diagnostics_LogEntry_o __this, const MethodInfo* method);
void UniRx_Diagnostics_LogEntry__set_LogType (UniRx_Diagnostics_LogEntry_o __this, int32_t value, const MethodInfo* method);
System_String_o* UniRx_Diagnostics_LogEntry__get_Message (UniRx_Diagnostics_LogEntry_o __this, const MethodInfo* method);
void UniRx_Diagnostics_LogEntry__set_Message (UniRx_Diagnostics_LogEntry_o __this, System_String_o* value, const MethodInfo* method);
System_DateTime_o UniRx_Diagnostics_LogEntry__get_Timestamp (UniRx_Diagnostics_LogEntry_o __this, const MethodInfo* method);
void UniRx_Diagnostics_LogEntry__set_Timestamp (UniRx_Diagnostics_LogEntry_o __this, System_DateTime_o value, const MethodInfo* method);
UnityEngine_Object_o* UniRx_Diagnostics_LogEntry__get_Context (UniRx_Diagnostics_LogEntry_o __this, const MethodInfo* method);
void UniRx_Diagnostics_LogEntry__set_Context (UniRx_Diagnostics_LogEntry_o __this, UnityEngine_Object_o* value, const MethodInfo* method);
System_Exception_o* UniRx_Diagnostics_LogEntry__get_Exception (UniRx_Diagnostics_LogEntry_o __this, const MethodInfo* method);
void UniRx_Diagnostics_LogEntry__set_Exception (UniRx_Diagnostics_LogEntry_o __this, System_Exception_o* value, const MethodInfo* method);
System_String_o* UniRx_Diagnostics_LogEntry__get_StackTrace (UniRx_Diagnostics_LogEntry_o __this, const MethodInfo* method);
void UniRx_Diagnostics_LogEntry__set_StackTrace (UniRx_Diagnostics_LogEntry_o __this, System_String_o* value, const MethodInfo* method);
Il2CppObject* UniRx_Diagnostics_LogEntry__get_State (UniRx_Diagnostics_LogEntry_o __this, const MethodInfo* method);
void UniRx_Diagnostics_LogEntry__set_State (UniRx_Diagnostics_LogEntry_o __this, Il2CppObject* value, const MethodInfo* method);
void UniRx_Diagnostics_LogEntry___ctor (UniRx_Diagnostics_LogEntry_o __this, System_String_o* loggerName, int32_t logType, System_DateTime_o timestamp, System_String_o* message, UnityEngine_Object_o* context, System_Exception_o* exception, System_String_o* stackTrace, Il2CppObject* state, const MethodInfo* method);
System_String_o* UniRx_Diagnostics_LogEntry__ToString (UniRx_Diagnostics_LogEntry_o __this, const MethodInfo* method);
