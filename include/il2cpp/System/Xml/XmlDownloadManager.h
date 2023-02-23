#pragma once

#include "il2cpp.h"

System_IO_Stream_o* System_Xml_XmlDownloadManager__GetStream (System_Xml_XmlDownloadManager_o* __this, System_Uri_o* uri, System_Net_ICredentials_o* credentials, System_Net_IWebProxy_o* proxy, System_Net_Cache_RequestCachePolicy_o* cachePolicy, const MethodInfo* method);
System_IO_Stream_o* System_Xml_XmlDownloadManager__GetNonFileStream (System_Xml_XmlDownloadManager_o* __this, System_Uri_o* uri, System_Net_ICredentials_o* credentials, System_Net_IWebProxy_o* proxy, System_Net_Cache_RequestCachePolicy_o* cachePolicy, const MethodInfo* method);
void System_Xml_XmlDownloadManager__Remove (System_Xml_XmlDownloadManager_o* __this, System_String_o* host, const MethodInfo* method);
System_Threading_Tasks_Task_Stream__o* System_Xml_XmlDownloadManager__GetStreamAsync (System_Xml_XmlDownloadManager_o* __this, System_Uri_o* uri, System_Net_ICredentials_o* credentials, System_Net_IWebProxy_o* proxy, System_Net_Cache_RequestCachePolicy_o* cachePolicy, const MethodInfo* method);
System_Threading_Tasks_Task_Stream__o* System_Xml_XmlDownloadManager__GetNonFileStreamAsync (System_Xml_XmlDownloadManager_o* __this, System_Uri_o* uri, System_Net_ICredentials_o* credentials, System_Net_IWebProxy_o* proxy, System_Net_Cache_RequestCachePolicy_o* cachePolicy, const MethodInfo* method);
void System_Xml_XmlDownloadManager___ctor (System_Xml_XmlDownloadManager_o* __this, const MethodInfo* method);
