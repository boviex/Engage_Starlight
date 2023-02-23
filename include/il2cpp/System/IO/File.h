#pragma once

#include "il2cpp.h"

System_IO_FileStream_o* System_IO_File__Create (System_String_o* path, const MethodInfo* method);
System_IO_FileStream_o* System_IO_File__Create (System_String_o* path, int32_t bufferSize, const MethodInfo* method);
void System_IO_File__Delete (System_String_o* path, const MethodInfo* method);
bool System_IO_File__Exists (System_String_o* path, const MethodInfo* method);
System_DateTime_o System_IO_File__GetLastWriteTime (System_String_o* path, const MethodInfo* method);
void System_IO_File__Move (System_String_o* sourceFileName, System_String_o* destFileName, const MethodInfo* method);
System_IO_FileStream_o* System_IO_File__Open (System_String_o* path, int32_t mode, const MethodInfo* method);
System_IO_FileStream_o* System_IO_File__OpenRead (System_String_o* path, const MethodInfo* method);
System_IO_StreamReader_o* System_IO_File__OpenText (System_String_o* path, const MethodInfo* method);
System_Byte_array* System_IO_File__ReadAllBytes (System_String_o* path, const MethodInfo* method);
System_String_array* System_IO_File__ReadAllLines (System_String_o* path, System_Text_Encoding_o* encoding, const MethodInfo* method);
System_String_array* System_IO_File__ReadAllLines (System_IO_StreamReader_o* reader, const MethodInfo* method);
System_String_o* System_IO_File__ReadAllText (System_String_o* path, const MethodInfo* method);
System_String_o* System_IO_File__ReadAllText (System_String_o* path, System_Text_Encoding_o* encoding, const MethodInfo* method);
void System_IO_File__WriteAllText (System_String_o* path, System_String_o* contents, const MethodInfo* method);
void System_IO_File__WriteAllText (System_String_o* path, System_String_o* contents, System_Text_Encoding_o* encoding, const MethodInfo* method);
System_DateTime_o System_IO_File__get_DefaultLocalFileTime (const MethodInfo* method);
int32_t System_IO_File__FillAttributeInfo (System_String_o* path, System_IO_MonoIOStat_o* data, bool tryagain, bool returnErrorOnNotFound, const MethodInfo* method);
