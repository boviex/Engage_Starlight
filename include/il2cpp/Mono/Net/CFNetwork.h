#pragma once

#include "il2cpp.h"

intptr_t Mono_Net_CFNetwork__CFNetworkCopyProxiesForAutoConfigurationScriptSequential (intptr_t proxyAutoConfigurationScript, intptr_t targetURL, intptr_t* error, const MethodInfo* method);
intptr_t Mono_Net_CFNetwork__CFNetworkExecuteProxyAutoConfigurationURL (intptr_t proxyAutoConfigURL, intptr_t targetURL, Mono_Net_CFNetwork_CFProxyAutoConfigurationResultCallback_o* cb, Mono_Net_CFStreamClientContext_o* clientContext, const MethodInfo* method);
void Mono_Net_CFNetwork__CFNetworkCopyProxiesForAutoConfigurationScriptThread (const MethodInfo* method);
intptr_t Mono_Net_CFNetwork__CFNetworkCopyProxiesForAutoConfigurationScript (intptr_t proxyAutoConfigurationScript, intptr_t targetURL, intptr_t* error, const MethodInfo* method);
Mono_Net_CFArray_o* Mono_Net_CFNetwork__CopyProxiesForAutoConfigurationScript (intptr_t proxyAutoConfigurationScript, Mono_Net_CFUrl_o* targetURL, const MethodInfo* method);
Mono_Net_CFProxy_array* Mono_Net_CFNetwork__GetProxiesForAutoConfigurationScript (intptr_t proxyAutoConfigurationScript, Mono_Net_CFUrl_o* targetURL, const MethodInfo* method);
Mono_Net_CFProxy_array* Mono_Net_CFNetwork__GetProxiesForAutoConfigurationScript (intptr_t proxyAutoConfigurationScript, System_Uri_o* targetUri, const MethodInfo* method);
Mono_Net_CFProxy_array* Mono_Net_CFNetwork__ExecuteProxyAutoConfigurationURL (intptr_t proxyAutoConfigURL, System_Uri_o* targetURL, const MethodInfo* method);
intptr_t Mono_Net_CFNetwork__CFNetworkCopyProxiesForURL (intptr_t url, intptr_t proxySettings, const MethodInfo* method);
Mono_Net_CFArray_o* Mono_Net_CFNetwork__CopyProxiesForURL (Mono_Net_CFUrl_o* url, Mono_Net_CFDictionary_o* proxySettings, const MethodInfo* method);
Mono_Net_CFProxy_array* Mono_Net_CFNetwork__GetProxiesForURL (Mono_Net_CFUrl_o* url, Mono_Net_CFProxySettings_o* proxySettings, const MethodInfo* method);
Mono_Net_CFProxy_array* Mono_Net_CFNetwork__GetProxiesForUri (System_Uri_o* uri, Mono_Net_CFProxySettings_o* proxySettings, const MethodInfo* method);
intptr_t Mono_Net_CFNetwork__CFNetworkCopySystemProxySettings (const MethodInfo* method);
Mono_Net_CFProxySettings_o* Mono_Net_CFNetwork__GetSystemProxySettings (const MethodInfo* method);
System_Net_IWebProxy_o* Mono_Net_CFNetwork__GetDefaultProxy (const MethodInfo* method);
void Mono_Net_CFNetwork___cctor (const MethodInfo* method);
