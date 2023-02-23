#pragma once

#include "il2cpp.h"

System_Byte_array* Mono_Security_Protocol_Ntlm_ChallengeResponse2__Compute_LM (System_String_o* password, System_Byte_array* challenge, const MethodInfo* method);
System_Byte_array* Mono_Security_Protocol_Ntlm_ChallengeResponse2__Compute_NTLM_Password (System_String_o* password, const MethodInfo* method);
System_Byte_array* Mono_Security_Protocol_Ntlm_ChallengeResponse2__Compute_NTLM (System_String_o* password, System_Byte_array* challenge, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_ChallengeResponse2__Compute_NTLMv2_Session (System_String_o* password, System_Byte_array* challenge, System_Byte_array** lm, System_Byte_array** ntlm, const MethodInfo* method);
System_Byte_array* Mono_Security_Protocol_Ntlm_ChallengeResponse2__Compute_NTLMv2 (Mono_Security_Protocol_Ntlm_Type2Message_o* type2, System_String_o* username, System_String_o* password, System_String_o* domain, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_ChallengeResponse2__Compute (Mono_Security_Protocol_Ntlm_Type2Message_o* type2, int32_t level, System_String_o* username, System_String_o* password, System_String_o* domain, System_Byte_array** lm, System_Byte_array** ntlm, const MethodInfo* method);
System_Byte_array* Mono_Security_Protocol_Ntlm_ChallengeResponse2__GetResponse (System_Byte_array* challenge, System_Byte_array* pwd, const MethodInfo* method);
System_Byte_array* Mono_Security_Protocol_Ntlm_ChallengeResponse2__PrepareDESKey (System_Byte_array* key56bits, int32_t position, const MethodInfo* method);
System_Byte_array* Mono_Security_Protocol_Ntlm_ChallengeResponse2__PasswordToKey (System_String_o* password, int32_t position, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_ChallengeResponse2___cctor (const MethodInfo* method);
