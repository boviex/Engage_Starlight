#pragma once

#include "il2cpp.h"

Il2CppObject* System_Net_WebRequest__get_InternalSyncObject (const MethodInfo* method);
System_Net_WebRequest_o* System_Net_WebRequest__Create (System_Uri_o* requestUri, bool useUriBase, const MethodInfo* method);
System_Net_WebRequest_o* System_Net_WebRequest__Create (System_String_o* requestUriString, const MethodInfo* method);
System_Net_WebRequest_o* System_Net_WebRequest__Create (System_Uri_o* requestUri, const MethodInfo* method);
System_Collections_ArrayList_o* System_Net_WebRequest__get_PrefixList (const MethodInfo* method);
System_Collections_ArrayList_o* System_Net_WebRequest__PopulatePrefixList (const MethodInfo* method);
void System_Net_WebRequest___ctor (System_Net_WebRequest_o* __this, const MethodInfo* method);
void System_Net_WebRequest___ctor (System_Net_WebRequest_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
void System_Net_WebRequest__System_Runtime_Serialization_ISerializable_GetObjectData (System_Net_WebRequest_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
void System_Net_WebRequest__GetObjectData (System_Net_WebRequest_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
void System_Net_WebRequest__set_CachePolicy (System_Net_WebRequest_o* __this, System_Net_Cache_RequestCachePolicy_o* value, const MethodInfo* method);
void System_Net_WebRequest__InternalSetCachePolicy (System_Net_WebRequest_o* __this, System_Net_Cache_RequestCachePolicy_o* policy, const MethodInfo* method);
System_String_o* System_Net_WebRequest__get_Method (System_Net_WebRequest_o* __this, const MethodInfo* method);
void System_Net_WebRequest__set_Method (System_Net_WebRequest_o* __this, System_String_o* value, const MethodInfo* method);
System_Uri_o* System_Net_WebRequest__get_RequestUri (System_Net_WebRequest_o* __this, const MethodInfo* method);
System_Net_WebHeaderCollection_o* System_Net_WebRequest__get_Headers (System_Net_WebRequest_o* __this, const MethodInfo* method);
int64_t System_Net_WebRequest__get_ContentLength (System_Net_WebRequest_o* __this, const MethodInfo* method);
System_Net_ICredentials_o* System_Net_WebRequest__get_Credentials (System_Net_WebRequest_o* __this, const MethodInfo* method);
void System_Net_WebRequest__set_Credentials (System_Net_WebRequest_o* __this, System_Net_ICredentials_o* value, const MethodInfo* method);
bool System_Net_WebRequest__get_UseDefaultCredentials (System_Net_WebRequest_o* __this, const MethodInfo* method);
System_Net_IWebProxy_o* System_Net_WebRequest__get_Proxy (System_Net_WebRequest_o* __this, const MethodInfo* method);
void System_Net_WebRequest__set_Proxy (System_Net_WebRequest_o* __this, System_Net_IWebProxy_o* value, const MethodInfo* method);
int32_t System_Net_WebRequest__get_Timeout (System_Net_WebRequest_o* __this, const MethodInfo* method);
System_Net_WebResponse_o* System_Net_WebRequest__GetResponse (System_Net_WebRequest_o* __this, const MethodInfo* method);
System_IAsyncResult_o* System_Net_WebRequest__BeginGetResponse (System_Net_WebRequest_o* __this, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
System_Net_WebResponse_o* System_Net_WebRequest__EndGetResponse (System_Net_WebRequest_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
System_IAsyncResult_o* System_Net_WebRequest__BeginGetRequestStream (System_Net_WebRequest_o* __this, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
System_IO_Stream_o* System_Net_WebRequest__EndGetRequestStream (System_Net_WebRequest_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
System_Threading_Tasks_Task_WebResponse__o* System_Net_WebRequest__GetResponseAsync (System_Net_WebRequest_o* __this, const MethodInfo* method);
System_Security_Principal_WindowsIdentity_o* System_Net_WebRequest__SafeCaptureIdenity (System_Net_WebRequest_o* __this, const MethodInfo* method);
void System_Net_WebRequest__Abort (System_Net_WebRequest_o* __this, const MethodInfo* method);
System_Net_Cache_RequestCacheProtocol_o* System_Net_WebRequest__get_CacheProtocol (System_Net_WebRequest_o* __this, const MethodInfo* method);
void System_Net_WebRequest__set_CacheProtocol (System_Net_WebRequest_o* __this, System_Net_Cache_RequestCacheProtocol_o* value, const MethodInfo* method);
System_Net_IWebProxy_o* System_Net_WebRequest__get_InternalDefaultWebProxy (const MethodInfo* method);
System_Net_IWebProxy_o* System_Net_WebRequest__get_DefaultWebProxy (const MethodInfo* method);
void System_Net_WebRequest___cctor (const MethodInfo* method);
System_Threading_Tasks_Task_WebResponse__o* System_Net_WebRequest___GetResponseAsync_b__79_0 (System_Net_WebRequest_o* __this, const MethodInfo* method);
