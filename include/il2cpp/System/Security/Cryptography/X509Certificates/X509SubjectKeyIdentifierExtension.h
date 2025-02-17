#pragma once

#include "il2cpp.h"

void System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension___ctor (System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_o* __this, const MethodInfo* method);
void System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension___ctor (System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_o* __this, System_Security_Cryptography_AsnEncodedData_o* encodedSubjectKeyIdentifier, bool critical, const MethodInfo* method);
void System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension___ctor (System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_o* __this, System_Byte_array* subjectKeyIdentifier, bool critical, const MethodInfo* method);
void System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension___ctor (System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_o* __this, System_String_o* subjectKeyIdentifier, bool critical, const MethodInfo* method);
void System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension___ctor (System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_o* __this, System_Security_Cryptography_X509Certificates_PublicKey_o* key, bool critical, const MethodInfo* method);
void System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension___ctor (System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_o* __this, System_Security_Cryptography_X509Certificates_PublicKey_o* key, int32_t algorithm, bool critical, const MethodInfo* method);
System_String_o* System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension__get_SubjectKeyIdentifier (System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_o* __this, const MethodInfo* method);
void System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension__CopyFrom (System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_o* __this, System_Security_Cryptography_AsnEncodedData_o* asnEncodedData, const MethodInfo* method);
uint8_t System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension__FromHexChar (uint16_t c, const MethodInfo* method);
uint8_t System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension__FromHexChars (uint16_t c1, uint16_t c2, const MethodInfo* method);
System_Byte_array* System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension__FromHex (System_String_o* hex, const MethodInfo* method);
int32_t System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension__Decode (System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_o* __this, System_Byte_array* extension, const MethodInfo* method);
System_Byte_array* System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension__Encode (System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_o* __this, const MethodInfo* method);
System_String_o* System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension__ToString (System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_o* __this, bool multiLine, const MethodInfo* method);
