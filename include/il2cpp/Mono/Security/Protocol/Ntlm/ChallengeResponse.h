#pragma once

#include "il2cpp.h"

void Mono_Security_Protocol_Ntlm_ChallengeResponse___ctor (Mono_Security_Protocol_Ntlm_ChallengeResponse_o* __this, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_ChallengeResponse___ctor (Mono_Security_Protocol_Ntlm_ChallengeResponse_o* __this, System_String_o* password, System_Byte_array* challenge, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_ChallengeResponse__Finalize (Mono_Security_Protocol_Ntlm_ChallengeResponse_o* __this, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_ChallengeResponse__set_Password (Mono_Security_Protocol_Ntlm_ChallengeResponse_o* __this, System_String_o* value, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_ChallengeResponse__set_Challenge (Mono_Security_Protocol_Ntlm_ChallengeResponse_o* __this, System_Byte_array* value, const MethodInfo* method);
System_Byte_array* Mono_Security_Protocol_Ntlm_ChallengeResponse__get_LM (Mono_Security_Protocol_Ntlm_ChallengeResponse_o* __this, const MethodInfo* method);
System_Byte_array* Mono_Security_Protocol_Ntlm_ChallengeResponse__get_NT (Mono_Security_Protocol_Ntlm_ChallengeResponse_o* __this, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_ChallengeResponse__Dispose (Mono_Security_Protocol_Ntlm_ChallengeResponse_o* __this, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_ChallengeResponse__Dispose (Mono_Security_Protocol_Ntlm_ChallengeResponse_o* __this, bool disposing, const MethodInfo* method);
System_Byte_array* Mono_Security_Protocol_Ntlm_ChallengeResponse__GetResponse (Mono_Security_Protocol_Ntlm_ChallengeResponse_o* __this, System_Byte_array* pwd, const MethodInfo* method);
System_Byte_array* Mono_Security_Protocol_Ntlm_ChallengeResponse__PrepareDESKey (Mono_Security_Protocol_Ntlm_ChallengeResponse_o* __this, System_Byte_array* key56bits, int32_t position, const MethodInfo* method);
System_Byte_array* Mono_Security_Protocol_Ntlm_ChallengeResponse__PasswordToKey (Mono_Security_Protocol_Ntlm_ChallengeResponse_o* __this, System_String_o* password, int32_t position, const MethodInfo* method);
void Mono_Security_Protocol_Ntlm_ChallengeResponse___cctor (const MethodInfo* method);