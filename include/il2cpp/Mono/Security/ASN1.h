#pragma once

#include "il2cpp.h"

void Mono_Security_ASN1___ctor (Mono_Security_ASN1_o* __this, uint8_t tag, const MethodInfo* method);
void Mono_Security_ASN1___ctor (Mono_Security_ASN1_o* __this, uint8_t tag, System_Byte_array* data, const MethodInfo* method);
void Mono_Security_ASN1___ctor (Mono_Security_ASN1_o* __this, System_Byte_array* data, const MethodInfo* method);
int32_t Mono_Security_ASN1__get_Count (Mono_Security_ASN1_o* __this, const MethodInfo* method);
uint8_t Mono_Security_ASN1__get_Tag (Mono_Security_ASN1_o* __this, const MethodInfo* method);
int32_t Mono_Security_ASN1__get_Length (Mono_Security_ASN1_o* __this, const MethodInfo* method);
System_Byte_array* Mono_Security_ASN1__get_Value (Mono_Security_ASN1_o* __this, const MethodInfo* method);
void Mono_Security_ASN1__set_Value (Mono_Security_ASN1_o* __this, System_Byte_array* value, const MethodInfo* method);
bool Mono_Security_ASN1__CompareArray (Mono_Security_ASN1_o* __this, System_Byte_array* array1, System_Byte_array* array2, const MethodInfo* method);
bool Mono_Security_ASN1__CompareValue (Mono_Security_ASN1_o* __this, System_Byte_array* value, const MethodInfo* method);
Mono_Security_ASN1_o* Mono_Security_ASN1__Add (Mono_Security_ASN1_o* __this, Mono_Security_ASN1_o* asn1, const MethodInfo* method);
System_Byte_array* Mono_Security_ASN1__GetBytes (Mono_Security_ASN1_o* __this, const MethodInfo* method);
void Mono_Security_ASN1__Decode (Mono_Security_ASN1_o* __this, System_Byte_array* asn1, int32_t* anPos, int32_t anLength, const MethodInfo* method);
void Mono_Security_ASN1__DecodeTLV (Mono_Security_ASN1_o* __this, System_Byte_array* asn1, int32_t* pos, uint8_t* tag, int32_t* length, System_Byte_array** content, const MethodInfo* method);
Mono_Security_ASN1_o* Mono_Security_ASN1__get_Item (Mono_Security_ASN1_o* __this, int32_t index, const MethodInfo* method);
Mono_Security_ASN1_o* Mono_Security_ASN1__Element (Mono_Security_ASN1_o* __this, int32_t index, uint8_t anTag, const MethodInfo* method);
System_String_o* Mono_Security_ASN1__ToString (Mono_Security_ASN1_o* __this, const MethodInfo* method);
void Mono_Security_ASN1___ctor (Mono_Security_ASN1_1_o* __this, uint8_t tag, const MethodInfo* method);
void Mono_Security_ASN1___ctor (Mono_Security_ASN1_1_o* __this, uint8_t tag, System_Byte_array* data, const MethodInfo* method);
void Mono_Security_ASN1___ctor (Mono_Security_ASN1_1_o* __this, System_Byte_array* data, const MethodInfo* method);
int32_t Mono_Security_ASN1__get_Count (Mono_Security_ASN1_1_o* __this, const MethodInfo* method);
uint8_t Mono_Security_ASN1__get_Tag (Mono_Security_ASN1_1_o* __this, const MethodInfo* method);
int32_t Mono_Security_ASN1__get_Length (Mono_Security_ASN1_1_o* __this, const MethodInfo* method);
System_Byte_array* Mono_Security_ASN1__get_Value (Mono_Security_ASN1_1_o* __this, const MethodInfo* method);
void Mono_Security_ASN1__set_Value (Mono_Security_ASN1_1_o* __this, System_Byte_array* value, const MethodInfo* method);
bool Mono_Security_ASN1__CompareArray (Mono_Security_ASN1_1_o* __this, System_Byte_array* array1, System_Byte_array* array2, const MethodInfo* method);
bool Mono_Security_ASN1__CompareValue (Mono_Security_ASN1_1_o* __this, System_Byte_array* value, const MethodInfo* method);
Mono_Security_ASN1_1_o* Mono_Security_ASN1__Add (Mono_Security_ASN1_1_o* __this, Mono_Security_ASN1_1_o* asn1, const MethodInfo* method);
System_Byte_array* Mono_Security_ASN1__GetBytes (Mono_Security_ASN1_1_o* __this, const MethodInfo* method);
void Mono_Security_ASN1__Decode (Mono_Security_ASN1_1_o* __this, System_Byte_array* asn1, int32_t* anPos, int32_t anLength, const MethodInfo* method);
void Mono_Security_ASN1__DecodeTLV (Mono_Security_ASN1_1_o* __this, System_Byte_array* asn1, int32_t* pos, uint8_t* tag, int32_t* length, System_Byte_array** content, const MethodInfo* method);
Mono_Security_ASN1_1_o* Mono_Security_ASN1__get_Item (Mono_Security_ASN1_1_o* __this, int32_t index, const MethodInfo* method);
Mono_Security_ASN1_1_o* Mono_Security_ASN1__Element (Mono_Security_ASN1_1_o* __this, int32_t index, uint8_t anTag, const MethodInfo* method);
System_String_o* Mono_Security_ASN1__ToString (Mono_Security_ASN1_1_o* __this, const MethodInfo* method);
