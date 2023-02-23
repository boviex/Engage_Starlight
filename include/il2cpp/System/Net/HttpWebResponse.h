#pragma once

#include "il2cpp.h"

void System_Net_HttpWebResponse___ctor (System_Net_HttpWebResponse_o* __this, System_Uri_o* uri, System_String_o* method, int32_t status, System_Net_WebHeaderCollection_o* headers, const MethodInfo* method);
void System_Net_HttpWebResponse___ctor (System_Net_HttpWebResponse_o* __this, System_Uri_o* uri, System_String_o* method, System_Net_WebResponseStream_o* stream, System_Net_CookieContainer_o* container, const MethodInfo* method);
void System_Net_HttpWebResponse___ctor (System_Net_HttpWebResponse_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
System_Net_WebHeaderCollection_o* System_Net_HttpWebResponse__get_Headers (System_Net_HttpWebResponse_o* __this, const MethodInfo* method);
System_Uri_o* System_Net_HttpWebResponse__get_ResponseUri (System_Net_HttpWebResponse_o* __this, const MethodInfo* method);
int32_t System_Net_HttpWebResponse__get_StatusCode (System_Net_HttpWebResponse_o* __this, const MethodInfo* method);
System_String_o* System_Net_HttpWebResponse__get_StatusDescription (System_Net_HttpWebResponse_o* __this, const MethodInfo* method);
System_IO_Stream_o* System_Net_HttpWebResponse__GetResponseStream (System_Net_HttpWebResponse_o* __this, const MethodInfo* method);
void System_Net_HttpWebResponse__System_Runtime_Serialization_ISerializable_GetObjectData (System_Net_HttpWebResponse_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
void System_Net_HttpWebResponse__GetObjectData (System_Net_HttpWebResponse_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
void System_Net_HttpWebResponse__Close (System_Net_HttpWebResponse_o* __this, const MethodInfo* method);
void System_Net_HttpWebResponse__System_IDisposable_Dispose (System_Net_HttpWebResponse_o* __this, const MethodInfo* method);
void System_Net_HttpWebResponse__Dispose (System_Net_HttpWebResponse_o* __this, bool disposing, const MethodInfo* method);
void System_Net_HttpWebResponse__CheckDisposed (System_Net_HttpWebResponse_o* __this, const MethodInfo* method);
void System_Net_HttpWebResponse__FillCookies (System_Net_HttpWebResponse_o* __this, const MethodInfo* method);
void System_Net_HttpWebResponse___ctor (System_Net_HttpWebResponse_o* __this, const MethodInfo* method);
