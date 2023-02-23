#pragma once

#include "il2cpp.h"

void System_Xml_UTF16Decoder___ctor (System_Xml_UTF16Decoder_o* __this, bool bigEndian, const MethodInfo* method);
int32_t System_Xml_UTF16Decoder__GetCharCount (System_Xml_UTF16Decoder_o* __this, System_Byte_array* bytes, int32_t index, int32_t count, const MethodInfo* method);
int32_t System_Xml_UTF16Decoder__GetCharCount (System_Xml_UTF16Decoder_o* __this, System_Byte_array* bytes, int32_t index, int32_t count, bool flush, const MethodInfo* method);
int32_t System_Xml_UTF16Decoder__GetChars (System_Xml_UTF16Decoder_o* __this, System_Byte_array* bytes, int32_t byteIndex, int32_t byteCount, System_Char_array* chars, int32_t charIndex, const MethodInfo* method);
void System_Xml_UTF16Decoder__Convert (System_Xml_UTF16Decoder_o* __this, System_Byte_array* bytes, int32_t byteIndex, int32_t byteCount, System_Char_array* chars, int32_t charIndex, int32_t charCount, bool flush, int32_t* bytesUsed, int32_t* charsUsed, bool* completed, const MethodInfo* method);
