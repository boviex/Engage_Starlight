#pragma once

#include "il2cpp.h"

void System_Diagnostics_Process___ctor (System_Diagnostics_Process_o* __this, const MethodInfo* method);
void System_Diagnostics_Process___ctor (System_Diagnostics_Process_o* __this, System_String_o* machineName, bool isRemoteMachine, int32_t processId, System_Diagnostics_ProcessInfo_o* processInfo, const MethodInfo* method);
bool System_Diagnostics_Process__get_Associated (System_Diagnostics_Process_o* __this, const MethodInfo* method);
int32_t System_Diagnostics_Process__get_ExitCode (System_Diagnostics_Process_o* __this, const MethodInfo* method);
bool System_Diagnostics_Process__get_HasExited (System_Diagnostics_Process_o* __this, const MethodInfo* method);
intptr_t System_Diagnostics_Process__get_Handle (System_Diagnostics_Process_o* __this, const MethodInfo* method);
int32_t System_Diagnostics_Process__get_Id (System_Diagnostics_Process_o* __this, const MethodInfo* method);
System_Diagnostics_ProcessStartInfo_o* System_Diagnostics_Process__get_StartInfo (System_Diagnostics_Process_o* __this, const MethodInfo* method);
void System_Diagnostics_Process__set_StartInfo (System_Diagnostics_Process_o* __this, System_Diagnostics_ProcessStartInfo_o* value, const MethodInfo* method);
System_ComponentModel_ISynchronizeInvoke_o* System_Diagnostics_Process__get_SynchronizingObject (System_Diagnostics_Process_o* __this, const MethodInfo* method);
void System_Diagnostics_Process__ReleaseProcessHandle (System_Diagnostics_Process_o* __this, Microsoft_Win32_SafeHandles_SafeProcessHandle_o* handle, const MethodInfo* method);
void System_Diagnostics_Process__CompletionCallback (System_Diagnostics_Process_o* __this, Il2CppObject* context, bool wasSignaled, const MethodInfo* method);
void System_Diagnostics_Process__Dispose (System_Diagnostics_Process_o* __this, bool disposing, const MethodInfo* method);
void System_Diagnostics_Process__Close (System_Diagnostics_Process_o* __this, const MethodInfo* method);
void System_Diagnostics_Process__EnsureState (System_Diagnostics_Process_o* __this, int32_t state, const MethodInfo* method);
void System_Diagnostics_Process__EnsureWatchingForExit (System_Diagnostics_Process_o* __this, const MethodInfo* method);
System_Diagnostics_Process_o* System_Diagnostics_Process__GetCurrentProcess (const MethodInfo* method);
void System_Diagnostics_Process__OnExited (System_Diagnostics_Process_o* __this, const MethodInfo* method);
Microsoft_Win32_SafeHandles_SafeProcessHandle_o* System_Diagnostics_Process__GetProcessHandle (System_Diagnostics_Process_o* __this, int32_t access, bool throwIfExited, const MethodInfo* method);
Microsoft_Win32_SafeHandles_SafeProcessHandle_o* System_Diagnostics_Process__GetProcessHandle (System_Diagnostics_Process_o* __this, int32_t access, const MethodInfo* method);
Microsoft_Win32_SafeHandles_SafeProcessHandle_o* System_Diagnostics_Process__OpenProcessHandle (System_Diagnostics_Process_o* __this, int32_t access, const MethodInfo* method);
void System_Diagnostics_Process__Refresh (System_Diagnostics_Process_o* __this, const MethodInfo* method);
void System_Diagnostics_Process__SetProcessHandle (System_Diagnostics_Process_o* __this, Microsoft_Win32_SafeHandles_SafeProcessHandle_o* processHandle, const MethodInfo* method);
void System_Diagnostics_Process__SetProcessId (System_Diagnostics_Process_o* __this, int32_t processId, const MethodInfo* method);
bool System_Diagnostics_Process__Start (System_Diagnostics_Process_o* __this, const MethodInfo* method);
System_Diagnostics_Process_o* System_Diagnostics_Process__Start (System_Diagnostics_ProcessStartInfo_o* startInfo, const MethodInfo* method);
void System_Diagnostics_Process__StopWatchingForExit (System_Diagnostics_Process_o* __this, const MethodInfo* method);
System_String_o* System_Diagnostics_Process__ToString (System_Diagnostics_Process_o* __this, const MethodInfo* method);
bool System_Diagnostics_Process__WaitForExit (System_Diagnostics_Process_o* __this, int32_t milliseconds, const MethodInfo* method);
void System_Diagnostics_Process__WaitForExit (System_Diagnostics_Process_o* __this, const MethodInfo* method);
System_String_o* System_Diagnostics_Process__ProcessName_internal (intptr_t handle, const MethodInfo* method);
System_String_o* System_Diagnostics_Process__ProcessName_internal (Microsoft_Win32_SafeHandles_SafeProcessHandle_o* handle, const MethodInfo* method);
System_String_o* System_Diagnostics_Process__get_ProcessName (System_Diagnostics_Process_o* __this, const MethodInfo* method);
bool System_Diagnostics_Process__ShellExecuteEx_internal (System_Diagnostics_ProcessStartInfo_o* startInfo, System_Diagnostics_Process_ProcInfo_o* procInfo, const MethodInfo* method);
bool System_Diagnostics_Process__CreateProcess_internal (System_Diagnostics_ProcessStartInfo_o* startInfo, intptr_t stdin, intptr_t stdout, intptr_t stderr, System_Diagnostics_Process_ProcInfo_o* procInfo, const MethodInfo* method);
bool System_Diagnostics_Process__StartWithShellExecuteEx (System_Diagnostics_Process_o* __this, System_Diagnostics_ProcessStartInfo_o* startInfo, const MethodInfo* method);
void System_Diagnostics_Process__CreatePipe (intptr_t* read, intptr_t* write, bool writeDirection, const MethodInfo* method);
bool System_Diagnostics_Process__get_IsWindows (const MethodInfo* method);
bool System_Diagnostics_Process__StartWithCreateProcess (System_Diagnostics_Process_o* __this, System_Diagnostics_ProcessStartInfo_o* startInfo, const MethodInfo* method);
void System_Diagnostics_Process__FillUserInfo (System_Diagnostics_ProcessStartInfo_o* startInfo, System_Diagnostics_Process_ProcInfo_o* procInfo, const MethodInfo* method);
void System_Diagnostics_Process__RaiseOnExited (System_Diagnostics_Process_o* __this, const MethodInfo* method);
