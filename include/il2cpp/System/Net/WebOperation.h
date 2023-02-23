#pragma once

#include "il2cpp.h"

System_Net_HttpWebRequest_o* System_Net_WebOperation__get_Request (System_Net_WebOperation_o* __this, const MethodInfo* method);
System_Net_WebConnection_o* System_Net_WebOperation__get_Connection (System_Net_WebOperation_o* __this, const MethodInfo* method);
void System_Net_WebOperation__set_Connection (System_Net_WebOperation_o* __this, System_Net_WebConnection_o* value, const MethodInfo* method);
System_Net_ServicePoint_o* System_Net_WebOperation__get_ServicePoint (System_Net_WebOperation_o* __this, const MethodInfo* method);
void System_Net_WebOperation__set_ServicePoint (System_Net_WebOperation_o* __this, System_Net_ServicePoint_o* value, const MethodInfo* method);
System_Net_BufferOffsetSize_o* System_Net_WebOperation__get_WriteBuffer (System_Net_WebOperation_o* __this, const MethodInfo* method);
bool System_Net_WebOperation__get_IsNtlmChallenge (System_Net_WebOperation_o* __this, const MethodInfo* method);
void System_Net_WebOperation___ctor (System_Net_WebOperation_o* __this, System_Net_HttpWebRequest_o* request, System_Net_BufferOffsetSize_o* writeBuffer, bool isNtlmChallenge, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
bool System_Net_WebOperation__get_Aborted (System_Net_WebOperation_o* __this, const MethodInfo* method);
bool System_Net_WebOperation__get_Closed (System_Net_WebOperation_o* __this, const MethodInfo* method);
void System_Net_WebOperation__Abort (System_Net_WebOperation_o* __this, const MethodInfo* method);
void System_Net_WebOperation__Close (System_Net_WebOperation_o* __this, const MethodInfo* method);
void System_Net_WebOperation__SetCanceled (System_Net_WebOperation_o* __this, const MethodInfo* method);
void System_Net_WebOperation__SetError (System_Net_WebOperation_o* __this, System_Exception_o* error, const MethodInfo* method);
System_ValueTuple_ExceptionDispatchInfo__bool__o System_Net_WebOperation__SetDisposed (System_Net_WebOperation_o* __this, System_Runtime_ExceptionServices_ExceptionDispatchInfo_o** field, const MethodInfo* method);
void System_Net_WebOperation__ThrowIfDisposed (System_Net_WebOperation_o* __this, const MethodInfo* method);
void System_Net_WebOperation__ThrowIfDisposed (System_Net_WebOperation_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
void System_Net_WebOperation__ThrowIfClosedOrDisposed (System_Net_WebOperation_o* __this, const MethodInfo* method);
void System_Net_WebOperation__ThrowIfClosedOrDisposed (System_Net_WebOperation_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
void System_Net_WebOperation__ThrowDisposed (System_Net_WebOperation_o* __this, System_Runtime_ExceptionServices_ExceptionDispatchInfo_o** field, const MethodInfo* method);
void System_Net_WebOperation__RegisterRequest (System_Net_WebOperation_o* __this, System_Net_ServicePoint_o* servicePoint, System_Net_WebConnection_o* connection, const MethodInfo* method);
void System_Net_WebOperation__SetPriorityRequest (System_Net_WebOperation_o* __this, System_Net_WebOperation_o* operation, const MethodInfo* method);
System_Threading_Tasks_Task_WebRequestStream__o* System_Net_WebOperation__GetRequestStream (System_Net_WebOperation_o* __this, const MethodInfo* method);
System_Net_WebRequestStream_o* System_Net_WebOperation__get_WriteStream (System_Net_WebOperation_o* __this, const MethodInfo* method);
System_Threading_Tasks_Task_WebResponseStream__o* System_Net_WebOperation__GetResponseStream (System_Net_WebOperation_o* __this, const MethodInfo* method);
System_Threading_Tasks_Task_ValueTuple_bool__WebOperation___o* System_Net_WebOperation__WaitForCompletion (System_Net_WebOperation_o* __this, bool ignoreErrors, const MethodInfo* method);
void System_Net_WebOperation__Run (System_Net_WebOperation_o* __this, const MethodInfo* method);
void System_Net_WebOperation__FinishReading (System_Net_WebOperation_o* __this, const MethodInfo* method);
void System_Net_WebOperation__CompleteRequestWritten (System_Net_WebOperation_o* __this, System_Net_WebRequestStream_o* stream, System_Exception_o* error, const MethodInfo* method);
void System_Net_WebOperation__CompleteResponseRead (System_Net_WebOperation_o* __this, bool ok, System_Exception_o* error, const MethodInfo* method);
void System_Net_WebOperation___RegisterRequest_b__46_0 (System_Net_WebOperation_o* __this, const MethodInfo* method);
