#pragma once

#include "il2cpp.h"

void System_Runtime_Remoting_Proxies_RemotingProxy___ctor (System_Runtime_Remoting_Proxies_RemotingProxy_o* __this, System_Type_o* type, System_Runtime_Remoting_ClientIdentity_o* identity, const MethodInfo* method);
void System_Runtime_Remoting_Proxies_RemotingProxy___ctor (System_Runtime_Remoting_Proxies_RemotingProxy_o* __this, System_Type_o* type, System_String_o* activationUrl, System_Object_array* activationAttributes, const MethodInfo* method);
System_Runtime_Remoting_Messaging_IMessage_o* System_Runtime_Remoting_Proxies_RemotingProxy__Invoke (System_Runtime_Remoting_Proxies_RemotingProxy_o* __this, System_Runtime_Remoting_Messaging_IMessage_o* request, const MethodInfo* method);
void System_Runtime_Remoting_Proxies_RemotingProxy__AttachIdentity (System_Runtime_Remoting_Proxies_RemotingProxy_o* __this, System_Runtime_Remoting_Identity_o* identity, const MethodInfo* method);
System_Runtime_Remoting_Messaging_IMessage_o* System_Runtime_Remoting_Proxies_RemotingProxy__ActivateRemoteObject (System_Runtime_Remoting_Proxies_RemotingProxy_o* __this, System_Runtime_Remoting_Messaging_IMethodMessage_o* request, const MethodInfo* method);
System_String_o* System_Runtime_Remoting_Proxies_RemotingProxy__get_TypeName (System_Runtime_Remoting_Proxies_RemotingProxy_o* __this, const MethodInfo* method);
bool System_Runtime_Remoting_Proxies_RemotingProxy__CanCastTo (System_Runtime_Remoting_Proxies_RemotingProxy_o* __this, System_Type_o* fromType, Il2CppObject* o, const MethodInfo* method);
void System_Runtime_Remoting_Proxies_RemotingProxy__Finalize (System_Runtime_Remoting_Proxies_RemotingProxy_o* __this, const MethodInfo* method);
void System_Runtime_Remoting_Proxies_RemotingProxy___cctor (const MethodInfo* method);
