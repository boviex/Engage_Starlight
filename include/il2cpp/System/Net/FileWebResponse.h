#pragma once

#include "il2cpp.h"

void System_Net_FileWebResponse___ctor (System_Net_FileWebResponse_o* __this, System_Net_FileWebRequest_o* request, System_Uri_o* uri, int32_t access, bool asyncHint, const MethodInfo* method);
void System_Net_FileWebResponse___ctor (System_Net_FileWebResponse_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
void System_Net_FileWebResponse__System_Runtime_Serialization_ISerializable_GetObjectData (System_Net_FileWebResponse_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
void System_Net_FileWebResponse__GetObjectData (System_Net_FileWebResponse_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method);
System_Net_WebHeaderCollection_o* System_Net_FileWebResponse__get_Headers (System_Net_FileWebResponse_o* __this, const MethodInfo* method);
System_Uri_o* System_Net_FileWebResponse__get_ResponseUri (System_Net_FileWebResponse_o* __this, const MethodInfo* method);
void System_Net_FileWebResponse__CheckDisposed (System_Net_FileWebResponse_o* __this, const MethodInfo* method);
void System_Net_FileWebResponse__Close (System_Net_FileWebResponse_o* __this, const MethodInfo* method);
void System_Net_FileWebResponse__System_Net_ICloseEx_CloseEx (System_Net_FileWebResponse_o* __this, int32_t closeState, const MethodInfo* method);
System_IO_Stream_o* System_Net_FileWebResponse__GetResponseStream (System_Net_FileWebResponse_o* __this, const MethodInfo* method);
