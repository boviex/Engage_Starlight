#pragma once

#include "il2cpp.h"

void System_Xml_XmlRegisteredNonCachedStream___ctor (System_Xml_XmlRegisteredNonCachedStream_o* __this, System_IO_Stream_o* stream, System_Xml_XmlDownloadManager_o* downloadManager, System_String_o* host, const MethodInfo* method);
void System_Xml_XmlRegisteredNonCachedStream__Finalize (System_Xml_XmlRegisteredNonCachedStream_o* __this, const MethodInfo* method);
void System_Xml_XmlRegisteredNonCachedStream__Dispose (System_Xml_XmlRegisteredNonCachedStream_o* __this, bool disposing, const MethodInfo* method);
System_IAsyncResult_o* System_Xml_XmlRegisteredNonCachedStream__BeginRead (System_Xml_XmlRegisteredNonCachedStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
System_IAsyncResult_o* System_Xml_XmlRegisteredNonCachedStream__BeginWrite (System_Xml_XmlRegisteredNonCachedStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
int32_t System_Xml_XmlRegisteredNonCachedStream__EndRead (System_Xml_XmlRegisteredNonCachedStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
void System_Xml_XmlRegisteredNonCachedStream__EndWrite (System_Xml_XmlRegisteredNonCachedStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
void System_Xml_XmlRegisteredNonCachedStream__Flush (System_Xml_XmlRegisteredNonCachedStream_o* __this, const MethodInfo* method);
int32_t System_Xml_XmlRegisteredNonCachedStream__Read (System_Xml_XmlRegisteredNonCachedStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method);
int32_t System_Xml_XmlRegisteredNonCachedStream__ReadByte (System_Xml_XmlRegisteredNonCachedStream_o* __this, const MethodInfo* method);
int64_t System_Xml_XmlRegisteredNonCachedStream__Seek (System_Xml_XmlRegisteredNonCachedStream_o* __this, int64_t offset, int32_t origin, const MethodInfo* method);
void System_Xml_XmlRegisteredNonCachedStream__SetLength (System_Xml_XmlRegisteredNonCachedStream_o* __this, int64_t value, const MethodInfo* method);
void System_Xml_XmlRegisteredNonCachedStream__Write (System_Xml_XmlRegisteredNonCachedStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method);
void System_Xml_XmlRegisteredNonCachedStream__WriteByte (System_Xml_XmlRegisteredNonCachedStream_o* __this, uint8_t value, const MethodInfo* method);
bool System_Xml_XmlRegisteredNonCachedStream__get_CanRead (System_Xml_XmlRegisteredNonCachedStream_o* __this, const MethodInfo* method);
bool System_Xml_XmlRegisteredNonCachedStream__get_CanSeek (System_Xml_XmlRegisteredNonCachedStream_o* __this, const MethodInfo* method);
bool System_Xml_XmlRegisteredNonCachedStream__get_CanWrite (System_Xml_XmlRegisteredNonCachedStream_o* __this, const MethodInfo* method);
int64_t System_Xml_XmlRegisteredNonCachedStream__get_Length (System_Xml_XmlRegisteredNonCachedStream_o* __this, const MethodInfo* method);
int64_t System_Xml_XmlRegisteredNonCachedStream__get_Position (System_Xml_XmlRegisteredNonCachedStream_o* __this, const MethodInfo* method);
void System_Xml_XmlRegisteredNonCachedStream__set_Position (System_Xml_XmlRegisteredNonCachedStream_o* __this, int64_t value, const MethodInfo* method);
