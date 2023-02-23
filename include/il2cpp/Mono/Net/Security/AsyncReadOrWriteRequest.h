#pragma once

#include "il2cpp.h"

Mono_Net_Security_BufferOffsetSize_o* Mono_Net_Security_AsyncReadOrWriteRequest__get_UserBuffer (Mono_Net_Security_AsyncReadOrWriteRequest_o* __this, const MethodInfo* method);
int32_t Mono_Net_Security_AsyncReadOrWriteRequest__get_CurrentSize (Mono_Net_Security_AsyncReadOrWriteRequest_o* __this, const MethodInfo* method);
void Mono_Net_Security_AsyncReadOrWriteRequest__set_CurrentSize (Mono_Net_Security_AsyncReadOrWriteRequest_o* __this, int32_t value, const MethodInfo* method);
void Mono_Net_Security_AsyncReadOrWriteRequest___ctor (Mono_Net_Security_AsyncReadOrWriteRequest_o* __this, Mono_Net_Security_MobileAuthenticatedStream_o* parent, bool sync, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
System_String_o* Mono_Net_Security_AsyncReadOrWriteRequest__ToString (Mono_Net_Security_AsyncReadOrWriteRequest_o* __this, const MethodInfo* method);
