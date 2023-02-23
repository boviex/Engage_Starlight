#pragma once

#include "il2cpp.h"

bool System_Xml_BinHexDecoder__get_IsFull (System_Xml_BinHexDecoder_o* __this, const MethodInfo* method);
int32_t System_Xml_BinHexDecoder__Decode (System_Xml_BinHexDecoder_o* __this, System_Char_array* chars, int32_t startPos, int32_t len, const MethodInfo* method);
System_Byte_array* System_Xml_BinHexDecoder__Decode (System_Char_array* chars, bool allowOddChars, const MethodInfo* method);
void System_Xml_BinHexDecoder__Decode (uint16_t* pChars, uint16_t* pCharsEndPos, uint8_t* pBytes, uint8_t* pBytesEndPos, bool* hasHalfByteCached, uint8_t* cachedHalfByte, int32_t* charsDecoded, int32_t* bytesDecoded, const MethodInfo* method);
