#pragma once

#include "il2cpp.h"

void Mono_Security_Interface_ValidationResult___ctor (Mono_Security_Interface_ValidationResult_o* __this, bool trusted, bool user_denied, int32_t error_code, System_Nullable_MonoSslPolicyErrors__o policy_errors, const MethodInfo* method);
bool Mono_Security_Interface_ValidationResult__get_Trusted (Mono_Security_Interface_ValidationResult_o* __this, const MethodInfo* method);
bool Mono_Security_Interface_ValidationResult__get_UserDenied (Mono_Security_Interface_ValidationResult_o* __this, const MethodInfo* method);
