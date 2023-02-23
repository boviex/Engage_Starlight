#pragma once

#include "il2cpp.h"

System_Text_Encoding_o* System_Text_EncodingProvider__GetEncoding (System_Text_EncodingProvider_o* __this, int32_t codepage, System_Text_EncoderFallback_o* encoderFallback, System_Text_DecoderFallback_o* decoderFallback, const MethodInfo* method);
System_Text_Encoding_o* System_Text_EncodingProvider__GetEncodingFromProvider (int32_t codepage, const MethodInfo* method);
System_Text_Encoding_o* System_Text_EncodingProvider__GetEncodingFromProvider (System_String_o* encodingName, const MethodInfo* method);
System_Text_Encoding_o* System_Text_EncodingProvider__GetEncodingFromProvider (int32_t codepage, System_Text_EncoderFallback_o* enc, System_Text_DecoderFallback_o* dec, const MethodInfo* method);
void System_Text_EncodingProvider___cctor (const MethodInfo* method);
