#pragma once

#include "il2cpp.h"

void nn_os_OS__SetUserExceptionHandler (nn_os_UserExceptionHandler_o* pHandler, System_String_o* mapFileBinPath, System_Byte_array* stack, uint64_t stackSize, nn_os_UserExceptionInfo_o* pExceptionInfo, const MethodInfo* method);
void nn_os_OS__SetUserExceptionHandler (nn_os_UserExceptionHandler_o* pHandler, System_String_o* mapFileBinPath, System_Byte_array* stack, uint64_t stackSize, int32_t exceptionInfoUsesType, const MethodInfo* method);
void nn_os_OS__ClearUserExceptionHandler (const MethodInfo* method);
void nn_os_OS__EnableUserExceptionHandlerOnDebugging (bool isEnabled, const MethodInfo* method);
void nn_os_OS__Print (System_String_o* text, const MethodInfo* method);
void nn_os_OS__RaiseException (const MethodInfo* method);
