#pragma once

#include "il2cpp.h"

void Mono_Unity_UnityTls_unitytls_x509verify_callback___ctor (Mono_Unity_UnityTls_unitytls_x509verify_callback_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
uint32_t Mono_Unity_UnityTls_unitytls_x509verify_callback__Invoke (Mono_Unity_UnityTls_unitytls_x509verify_callback_o* __this, void* userData, Mono_Unity_UnityTls_unitytls_x509_ref_o cert, uint32_t result, Mono_Unity_UnityTls_unitytls_errorstate_o* errorState, const MethodInfo* method);
System_IAsyncResult_o* Mono_Unity_UnityTls_unitytls_x509verify_callback__BeginInvoke (Mono_Unity_UnityTls_unitytls_x509verify_callback_o* __this, void* userData, Mono_Unity_UnityTls_unitytls_x509_ref_o cert, uint32_t result, Mono_Unity_UnityTls_unitytls_errorstate_o* errorState, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
uint32_t Mono_Unity_UnityTls_unitytls_x509verify_callback__EndInvoke (Mono_Unity_UnityTls_unitytls_x509verify_callback_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);