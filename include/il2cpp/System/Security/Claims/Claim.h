#pragma once

#include "il2cpp.h"

void System_Security_Claims_Claim___ctor (System_Security_Claims_Claim_o* __this, System_String_o* type, System_String_o* value, System_String_o* valueType, System_String_o* issuer, System_String_o* originalIssuer, System_Security_Claims_ClaimsIdentity_o* subject, const MethodInfo* method);
void System_Security_Claims_Claim___ctor (System_Security_Claims_Claim_o* __this, System_String_o* type, System_String_o* value, System_String_o* valueType, System_String_o* issuer, System_String_o* originalIssuer, System_Security_Claims_ClaimsIdentity_o* subject, System_String_o* propertyKey, System_String_o* propertyValue, const MethodInfo* method);
void System_Security_Claims_Claim___ctor (System_Security_Claims_Claim_o* __this, System_Security_Claims_Claim_o* other, System_Security_Claims_ClaimsIdentity_o* subject, const MethodInfo* method);
void System_Security_Claims_Claim__OnDeserializedMethod (System_Security_Claims_Claim_o* __this, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
System_Collections_Generic_IDictionary_string__string__o* System_Security_Claims_Claim__get_Properties (System_Security_Claims_Claim_o* __this, const MethodInfo* method);
System_Security_Claims_ClaimsIdentity_o* System_Security_Claims_Claim__get_Subject (System_Security_Claims_Claim_o* __this, const MethodInfo* method);
void System_Security_Claims_Claim__set_Subject (System_Security_Claims_Claim_o* __this, System_Security_Claims_ClaimsIdentity_o* value, const MethodInfo* method);
System_String_o* System_Security_Claims_Claim__get_Type (System_Security_Claims_Claim_o* __this, const MethodInfo* method);
System_String_o* System_Security_Claims_Claim__get_Value (System_Security_Claims_Claim_o* __this, const MethodInfo* method);
System_Security_Claims_Claim_o* System_Security_Claims_Claim__Clone (System_Security_Claims_Claim_o* __this, System_Security_Claims_ClaimsIdentity_o* identity, const MethodInfo* method);
System_String_o* System_Security_Claims_Claim__ToString (System_Security_Claims_Claim_o* __this, const MethodInfo* method);
