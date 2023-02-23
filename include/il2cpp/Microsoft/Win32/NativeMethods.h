#pragma once

#include "il2cpp.h"

bool Microsoft_Win32_NativeMethods__DuplicateHandle (System_Runtime_InteropServices_HandleRef_o hSourceProcessHandle, System_Runtime_InteropServices_SafeHandle_o* hSourceHandle, System_Runtime_InteropServices_HandleRef_o hTargetProcess, Microsoft_Win32_SafeHandles_SafeWaitHandle_o** targetHandle, int32_t dwDesiredAccess, bool bInheritHandle, int32_t dwOptions, const MethodInfo* method);
bool Microsoft_Win32_NativeMethods__DuplicateHandle (System_Runtime_InteropServices_HandleRef_o hSourceProcessHandle, System_Runtime_InteropServices_HandleRef_o hSourceHandle, System_Runtime_InteropServices_HandleRef_o hTargetProcess, Microsoft_Win32_SafeHandles_SafeProcessHandle_o** targetHandle, int32_t dwDesiredAccess, bool bInheritHandle, int32_t dwOptions, const MethodInfo* method);
intptr_t Microsoft_Win32_NativeMethods__GetCurrentProcess (const MethodInfo* method);
bool Microsoft_Win32_NativeMethods__GetExitCodeProcess (intptr_t processHandle, int32_t* exitCode, const MethodInfo* method);
bool Microsoft_Win32_NativeMethods__GetExitCodeProcess (Microsoft_Win32_SafeHandles_SafeProcessHandle_o* processHandle, int32_t* exitCode, const MethodInfo* method);
int32_t Microsoft_Win32_NativeMethods__GetCurrentProcessId (const MethodInfo* method);
bool Microsoft_Win32_NativeMethods__CloseProcess (intptr_t handle, const MethodInfo* method);
