#pragma once

#include "il2cpp.h"

void Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t___ctor (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
Mono_Unity_UnityTls_unitytls_tlsctx_o* Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t__Invoke (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t_o* __this, Mono_Unity_UnityTls_unitytls_tlsctx_protocolrange_o supportedProtocols, Mono_Unity_UnityTls_unitytls_tlsctx_callbacks_o callbacks, uint64_t certChain, uint64_t leafCertificateKey, Mono_Unity_UnityTls_unitytls_errorstate_o* errorState, const MethodInfo* method);
System_IAsyncResult_o* Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t__BeginInvoke (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t_o* __this, Mono_Unity_UnityTls_unitytls_tlsctx_protocolrange_o supportedProtocols, Mono_Unity_UnityTls_unitytls_tlsctx_callbacks_o callbacks, uint64_t certChain, uint64_t leafCertificateKey, Mono_Unity_UnityTls_unitytls_errorstate_o* errorState, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
Mono_Unity_UnityTls_unitytls_tlsctx_o* Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t__EndInvoke (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);