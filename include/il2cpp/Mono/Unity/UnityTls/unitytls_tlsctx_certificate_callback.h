#pragma once

#include "il2cpp.h"

void Mono_Unity_UnityTls_unitytls_tlsctx_certificate_callback___ctor (Mono_Unity_UnityTls_unitytls_tlsctx_certificate_callback_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
void Mono_Unity_UnityTls_unitytls_tlsctx_certificate_callback__Invoke (Mono_Unity_UnityTls_unitytls_tlsctx_certificate_callback_o* __this, void* userData, Mono_Unity_UnityTls_unitytls_tlsctx_o* ctx, uint8_t* cn, intptr_t cnLen, Mono_Unity_UnityTls_unitytls_x509name_o* caList, intptr_t caListLen, Mono_Unity_UnityTls_unitytls_x509list_ref_o* chain, Mono_Unity_UnityTls_unitytls_key_ref_o* key, Mono_Unity_UnityTls_unitytls_errorstate_o* errorState, const MethodInfo* method);
System_IAsyncResult_o* Mono_Unity_UnityTls_unitytls_tlsctx_certificate_callback__BeginInvoke (Mono_Unity_UnityTls_unitytls_tlsctx_certificate_callback_o* __this, void* userData, Mono_Unity_UnityTls_unitytls_tlsctx_o* ctx, uint8_t* cn, intptr_t cnLen, Mono_Unity_UnityTls_unitytls_x509name_o* caList, intptr_t caListLen, Mono_Unity_UnityTls_unitytls_x509list_ref_o* chain, Mono_Unity_UnityTls_unitytls_key_ref_o* key, Mono_Unity_UnityTls_unitytls_errorstate_o* errorState, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
void Mono_Unity_UnityTls_unitytls_tlsctx_certificate_callback__EndInvoke (Mono_Unity_UnityTls_unitytls_tlsctx_certificate_callback_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
