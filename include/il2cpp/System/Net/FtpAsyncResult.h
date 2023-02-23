#pragma once

#include "il2cpp.h"

void System_Net_FtpAsyncResult___ctor (System_Net_FtpAsyncResult_o* __this, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
Il2CppObject* System_Net_FtpAsyncResult__get_AsyncState (System_Net_FtpAsyncResult_o* __this, const MethodInfo* method);
System_Threading_WaitHandle_o* System_Net_FtpAsyncResult__get_AsyncWaitHandle (System_Net_FtpAsyncResult_o* __this, const MethodInfo* method);
bool System_Net_FtpAsyncResult__get_CompletedSynchronously (System_Net_FtpAsyncResult_o* __this, const MethodInfo* method);
bool System_Net_FtpAsyncResult__get_IsCompleted (System_Net_FtpAsyncResult_o* __this, const MethodInfo* method);
bool System_Net_FtpAsyncResult__get_GotException (System_Net_FtpAsyncResult_o* __this, const MethodInfo* method);
System_Exception_o* System_Net_FtpAsyncResult__get_Exception (System_Net_FtpAsyncResult_o* __this, const MethodInfo* method);
System_Net_FtpWebResponse_o* System_Net_FtpAsyncResult__get_Response (System_Net_FtpAsyncResult_o* __this, const MethodInfo* method);
System_IO_Stream_o* System_Net_FtpAsyncResult__get_Stream (System_Net_FtpAsyncResult_o* __this, const MethodInfo* method);
void System_Net_FtpAsyncResult__set_Stream (System_Net_FtpAsyncResult_o* __this, System_IO_Stream_o* value, const MethodInfo* method);
bool System_Net_FtpAsyncResult__WaitUntilComplete (System_Net_FtpAsyncResult_o* __this, int32_t timeout, bool exitContext, const MethodInfo* method);
void System_Net_FtpAsyncResult__SetCompleted (System_Net_FtpAsyncResult_o* __this, bool synch, System_Exception_o* exc, System_Net_FtpWebResponse_o* response, const MethodInfo* method);
void System_Net_FtpAsyncResult__SetCompleted (System_Net_FtpAsyncResult_o* __this, bool synch, System_Net_FtpWebResponse_o* response, const MethodInfo* method);
void System_Net_FtpAsyncResult__SetCompleted (System_Net_FtpAsyncResult_o* __this, bool synch, System_Exception_o* exc, const MethodInfo* method);
void System_Net_FtpAsyncResult__DoCallback (System_Net_FtpAsyncResult_o* __this, const MethodInfo* method);
