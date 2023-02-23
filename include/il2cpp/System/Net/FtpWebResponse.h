#pragma once

#include "il2cpp.h"

void System_Net_FtpWebResponse___ctor (System_Net_FtpWebResponse_o* __this, System_Net_FtpWebRequest_o* request, System_Uri_o* uri, System_String_o* method, bool keepAlive, const MethodInfo* method);
void System_Net_FtpWebResponse___ctor (System_Net_FtpWebResponse_o* __this, System_Net_FtpWebRequest_o* request, System_Uri_o* uri, System_String_o* method, int32_t statusCode, System_String_o* statusDescription, const MethodInfo* method);
void System_Net_FtpWebResponse___ctor (System_Net_FtpWebResponse_o* __this, System_Net_FtpWebRequest_o* request, System_Uri_o* uri, System_String_o* method, System_Net_FtpStatus_o* status, const MethodInfo* method);
System_Net_WebHeaderCollection_o* System_Net_FtpWebResponse__get_Headers (System_Net_FtpWebResponse_o* __this, const MethodInfo* method);
System_Uri_o* System_Net_FtpWebResponse__get_ResponseUri (System_Net_FtpWebResponse_o* __this, const MethodInfo* method);
void System_Net_FtpWebResponse__set_LastModified (System_Net_FtpWebResponse_o* __this, System_DateTime_o value, const MethodInfo* method);
void System_Net_FtpWebResponse__set_BannerMessage (System_Net_FtpWebResponse_o* __this, System_String_o* value, const MethodInfo* method);
void System_Net_FtpWebResponse__set_WelcomeMessage (System_Net_FtpWebResponse_o* __this, System_String_o* value, const MethodInfo* method);
void System_Net_FtpWebResponse__set_StatusCode (System_Net_FtpWebResponse_o* __this, int32_t value, const MethodInfo* method);
void System_Net_FtpWebResponse__Close (System_Net_FtpWebResponse_o* __this, const MethodInfo* method);
System_IO_Stream_o* System_Net_FtpWebResponse__GetResponseStream (System_Net_FtpWebResponse_o* __this, const MethodInfo* method);
void System_Net_FtpWebResponse__set_Stream (System_Net_FtpWebResponse_o* __this, System_IO_Stream_o* value, const MethodInfo* method);
void System_Net_FtpWebResponse__UpdateStatus (System_Net_FtpWebResponse_o* __this, System_Net_FtpStatus_o* status, const MethodInfo* method);
void System_Net_FtpWebResponse__CheckDisposed (System_Net_FtpWebResponse_o* __this, const MethodInfo* method);
bool System_Net_FtpWebResponse__IsFinal (System_Net_FtpWebResponse_o* __this, const MethodInfo* method);
