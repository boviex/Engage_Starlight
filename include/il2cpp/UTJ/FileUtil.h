#pragma once

#include "il2cpp.h"

System_String_o* UTJ_FileUtil__ReadAllText (System_String_o* inFilePath, System_Text_Encoding_o* inDefaultEncoding, const MethodInfo* method);
System_String_o* UTJ_FileUtil__ReadAllText (System_String_o* inFilePath, const MethodInfo* method);
System_String_array* UTJ_FileUtil__ReadAllLines (System_String_o* inFilePath, System_Text_Encoding_o* inDefaultEncoding, const MethodInfo* method);
System_String_array* UTJ_FileUtil__ReadAllLines (System_String_o* inFilePath, const MethodInfo* method);
bool UTJ_FileUtil__WriteAllText (System_String_o* filePath, System_String_o* text, System_Text_Encoding_o* encoding, const MethodInfo* method);
System_Text_Encoding_o* UTJ_FileUtil__TryToDetectEncoding (System_String_o* inFilePath, System_Text_Encoding_o* inDefaultEncoding, const MethodInfo* method);
System_Text_Encoding_o* UTJ_FileUtil__TryToDetectEncoding (System_String_o* inFilePath, const MethodInfo* method);
void UTJ_FileUtil__ExploreToDirectory (System_String_o* directory, const MethodInfo* method);
System_Byte_array* UTJ_FileUtil__ReadFirstBytesOfFile (System_String_o* inFilePath, int32_t inNumBytesToRead, const MethodInfo* method);
bool UTJ_FileUtil__CheckIfBufferStartsWithHeader (System_Byte_array* inBuffer, System_Byte_array* inHeader, const MethodInfo* method);
void UTJ_FileUtil___ctor (UTJ_FileUtil_o* __this, const MethodInfo* method);
