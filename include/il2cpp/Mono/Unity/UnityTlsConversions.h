#pragma once

#include "il2cpp.h"

uint32_t Mono_Unity_UnityTlsConversions__GetMinProtocol (int32_t protocols, const MethodInfo* method);
uint32_t Mono_Unity_UnityTlsConversions__GetMaxProtocol (int32_t protocols, const MethodInfo* method);
int32_t Mono_Unity_UnityTlsConversions__ConvertProtocolVersion (uint32_t protocol, const MethodInfo* method);
uint8_t Mono_Unity_UnityTlsConversions__VerifyResultToAlertDescription (uint32_t verifyResult, uint8_t defaultAlert, const MethodInfo* method);
int32_t Mono_Unity_UnityTlsConversions__VerifyResultToPolicyErrror (uint32_t verifyResult, const MethodInfo* method);
int32_t Mono_Unity_UnityTlsConversions__VerifyResultToChainStatus (uint32_t verifyResult, const MethodInfo* method);
