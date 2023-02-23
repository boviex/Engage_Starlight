#pragma once

#include "il2cpp.h"

void System_Net_FileWebRequest___ctor (System_Net_FileWebRequest_o* __this, System_Uri_o* uri, const MethodInfo* method);
void System_Net_FileWebRequest___ctor (System_Net_FileWebRequest_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
void System_Net_FileWebRequest__System_Runtime_Serialization_ISerializable_GetObjectData (System_Net_FileWebRequest_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
void System_Net_FileWebRequest__GetObjectData (System_Net_FileWebRequest_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
bool System_Net_FileWebRequest__get_Aborted (System_Net_FileWebRequest_o* __this, const MethodInfo* method);
int64_t System_Net_FileWebRequest__get_ContentLength (System_Net_FileWebRequest_o* __this, const MethodInfo* method);
System_Net_ICredentials_o* System_Net_FileWebRequest__get_Credentials (System_Net_FileWebRequest_o* __this, const MethodInfo* method);
void System_Net_FileWebRequest__set_Credentials (System_Net_FileWebRequest_o* __this, System_Net_ICredentials_o* value, const MethodInfo* method);
System_Net_WebHeaderCollection_o* System_Net_FileWebRequest__get_Headers (System_Net_FileWebRequest_o* __this, const MethodInfo* method);
System_String_o* System_Net_FileWebRequest__get_Method (System_Net_FileWebRequest_o* __this, const MethodInfo* method);
void System_Net_FileWebRequest__set_Method (System_Net_FileWebRequest_o* __this, System_String_o* value, const MethodInfo* method);
System_Net_IWebProxy_o* System_Net_FileWebRequest__get_Proxy (System_Net_FileWebRequest_o* __this, const MethodInfo* method);
void System_Net_FileWebRequest__set_Proxy (System_Net_FileWebRequest_o* __this, System_Net_IWebProxy_o* value, const MethodInfo* method);
int32_t System_Net_FileWebRequest__get_Timeout (System_Net_FileWebRequest_o* __this, const MethodInfo* method);
System_Uri_o* System_Net_FileWebRequest__get_RequestUri (System_Net_FileWebRequest_o* __this, const MethodInfo* method);
System_IAsyncResult_o* System_Net_FileWebRequest__BeginGetRequestStream (System_Net_FileWebRequest_o* __this, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
System_IAsyncResult_o* System_Net_FileWebRequest__BeginGetResponse (System_Net_FileWebRequest_o* __this, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
bool System_Net_FileWebRequest__CanGetRequestStream (System_Net_FileWebRequest_o* __this, const MethodInfo* method);
System_IO_Stream_o* System_Net_FileWebRequest__EndGetRequestStream (System_Net_FileWebRequest_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
System_Net_WebResponse_o* System_Net_FileWebRequest__EndGetResponse (System_Net_FileWebRequest_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
System_Net_WebResponse_o* System_Net_FileWebRequest__GetResponse (System_Net_FileWebRequest_o* __this, const MethodInfo* method);
void System_Net_FileWebRequest__GetRequestStreamCallback (Il2CppObject* state, const MethodInfo* method);
void System_Net_FileWebRequest__GetResponseCallback (Il2CppObject* state, const MethodInfo* method);
void System_Net_FileWebRequest__UnblockReader (System_Net_FileWebRequest_o* __this, const MethodInfo* method);
bool System_Net_FileWebRequest__get_UseDefaultCredentials (System_Net_FileWebRequest_o* __this, const MethodInfo* method);
void System_Net_FileWebRequest__Abort (System_Net_FileWebRequest_o* __this, const MethodInfo* method);
void System_Net_FileWebRequest___cctor (const MethodInfo* method);
