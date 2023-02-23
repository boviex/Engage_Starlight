#pragma once

#include "il2cpp.h"

void System_Net_ServerCertValidationCallback___ctor (System_Net_ServerCertValidationCallback_o* __this, System_Net_Security_RemoteCertificateValidationCallback_o* validationCallback, const MethodInfo* method);
void System_Net_ServerCertValidationCallback__Callback (System_Net_ServerCertValidationCallback_o* __this, Il2CppObject* state, const MethodInfo* method);
bool System_Net_ServerCertValidationCallback__Invoke (System_Net_ServerCertValidationCallback_o* __this, Il2CppObject* request, System_Security_Cryptography_X509Certificates_X509Certificate_o* certificate, System_Security_Cryptography_X509Certificates_X509Chain_o* chain, int32_t sslPolicyErrors, const MethodInfo* method);
