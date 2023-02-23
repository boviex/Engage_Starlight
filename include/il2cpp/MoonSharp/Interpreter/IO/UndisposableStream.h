#pragma once

#include "il2cpp.h"

void MoonSharp_Interpreter_IO_UndisposableStream___ctor (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, System_IO_Stream_o* stream, const MethodInfo* method);
void MoonSharp_Interpreter_IO_UndisposableStream__Dispose (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, bool disposing, const MethodInfo* method);
void MoonSharp_Interpreter_IO_UndisposableStream__Close (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, const MethodInfo* method);
bool MoonSharp_Interpreter_IO_UndisposableStream__get_CanRead (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, const MethodInfo* method);
bool MoonSharp_Interpreter_IO_UndisposableStream__get_CanSeek (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, const MethodInfo* method);
bool MoonSharp_Interpreter_IO_UndisposableStream__get_CanWrite (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_IO_UndisposableStream__Flush (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, const MethodInfo* method);
int64_t MoonSharp_Interpreter_IO_UndisposableStream__get_Length (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, const MethodInfo* method);
int64_t MoonSharp_Interpreter_IO_UndisposableStream__get_Position (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_IO_UndisposableStream__set_Position (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, int64_t value, const MethodInfo* method);
int32_t MoonSharp_Interpreter_IO_UndisposableStream__Read (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method);
int64_t MoonSharp_Interpreter_IO_UndisposableStream__Seek (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, int64_t offset, int32_t origin, const MethodInfo* method);
void MoonSharp_Interpreter_IO_UndisposableStream__SetLength (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, int64_t value, const MethodInfo* method);
void MoonSharp_Interpreter_IO_UndisposableStream__Write (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method);
System_IAsyncResult_o* MoonSharp_Interpreter_IO_UndisposableStream__BeginRead (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
System_IAsyncResult_o* MoonSharp_Interpreter_IO_UndisposableStream__BeginWrite (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
void MoonSharp_Interpreter_IO_UndisposableStream__EndWrite (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
int32_t MoonSharp_Interpreter_IO_UndisposableStream__EndRead (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
bool MoonSharp_Interpreter_IO_UndisposableStream__get_CanTimeout (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, const MethodInfo* method);
bool MoonSharp_Interpreter_IO_UndisposableStream__Equals (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, Il2CppObject* obj, const MethodInfo* method);
int32_t MoonSharp_Interpreter_IO_UndisposableStream__GetHashCode (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, const MethodInfo* method);
int32_t MoonSharp_Interpreter_IO_UndisposableStream__ReadByte (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, const MethodInfo* method);
int32_t MoonSharp_Interpreter_IO_UndisposableStream__get_ReadTimeout (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_IO_UndisposableStream__set_ReadTimeout (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, int32_t value, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_IO_UndisposableStream__ToString (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_IO_UndisposableStream__WriteByte (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, uint8_t value, const MethodInfo* method);
int32_t MoonSharp_Interpreter_IO_UndisposableStream__get_WriteTimeout (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_IO_UndisposableStream__set_WriteTimeout (MoonSharp_Interpreter_IO_UndisposableStream_o* __this, int32_t value, const MethodInfo* method);
