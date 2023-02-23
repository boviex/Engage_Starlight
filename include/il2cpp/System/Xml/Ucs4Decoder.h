#pragma once

#include "il2cpp.h"

int32_t System_Xml_Ucs4Decoder__GetCharCount (System_Xml_Ucs4Decoder_o* __this, System_Byte_array* bytes, int32_t index, int32_t count, const MethodInfo* method);
int32_t System_Xml_Ucs4Decoder__GetChars (System_Xml_Ucs4Decoder_o* __this, System_Byte_array* bytes, int32_t byteIndex, int32_t byteCount, System_Char_array* chars, int32_t charIndex, const MethodInfo* method);
void System_Xml_Ucs4Decoder__Convert (System_Xml_Ucs4Decoder_o* __this, System_Byte_array* bytes, int32_t byteIndex, int32_t byteCount, System_Char_array* chars, int32_t charIndex, int32_t charCount, bool flush, int32_t* bytesUsed, int32_t* charsUsed, bool* completed, const MethodInfo* method);
void System_Xml_Ucs4Decoder__Ucs4ToUTF16 (System_Xml_Ucs4Decoder_o* __this, uint32_t code, System_Char_array* chars, int32_t charIndex, const MethodInfo* method);
void System_Xml_Ucs4Decoder___ctor (System_Xml_Ucs4Decoder_o* __this, const MethodInfo* method);
