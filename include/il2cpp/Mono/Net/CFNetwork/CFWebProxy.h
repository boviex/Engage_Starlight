#pragma once

#include "il2cpp.h"

void Mono_Net_CFNetwork_CFWebProxy___ctor (Mono_Net_CFNetwork_CFWebProxy_o* __this, const MethodInfo* method);
System_Net_ICredentials_o* Mono_Net_CFNetwork_CFWebProxy__get_Credentials (Mono_Net_CFNetwork_CFWebProxy_o* __this, const MethodInfo* method);
System_Uri_o* Mono_Net_CFNetwork_CFWebProxy__GetProxyUri (Mono_Net_CFProxy_o* proxy, System_Net_NetworkCredential_o** credentials, const MethodInfo* method);
System_Uri_o* Mono_Net_CFNetwork_CFWebProxy__GetProxyUriFromScript (intptr_t script, System_Uri_o* targetUri, System_Net_NetworkCredential_o** credentials, const MethodInfo* method);
System_Uri_o* Mono_Net_CFNetwork_CFWebProxy__ExecuteProxyAutoConfigurationURL (intptr_t proxyAutoConfigURL, System_Uri_o* targetUri, System_Net_NetworkCredential_o** credentials, const MethodInfo* method);
System_Uri_o* Mono_Net_CFNetwork_CFWebProxy__SelectProxy (Mono_Net_CFProxy_array* proxies, System_Uri_o* targetUri, System_Net_NetworkCredential_o** credentials, const MethodInfo* method);
System_Uri_o* Mono_Net_CFNetwork_CFWebProxy__GetProxy (Mono_Net_CFNetwork_CFWebProxy_o* __this, System_Uri_o* targetUri, const MethodInfo* method);
bool Mono_Net_CFNetwork_CFWebProxy__IsBypassed (Mono_Net_CFNetwork_CFWebProxy_o* __this, System_Uri_o* targetUri, const MethodInfo* method);
