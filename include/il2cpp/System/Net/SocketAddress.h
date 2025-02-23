#pragma once

#include "il2cpp.h"

int32_t System_Net_SocketAddress__get_Family (System_Net_SocketAddress_o* __this, const MethodInfo* method);
int32_t System_Net_SocketAddress__get_Size (System_Net_SocketAddress_o* __this, const MethodInfo* method);
uint8_t System_Net_SocketAddress__get_Item (System_Net_SocketAddress_o* __this, int32_t offset, const MethodInfo* method);
void System_Net_SocketAddress___ctor (System_Net_SocketAddress_o* __this, int32_t family, int32_t size, const MethodInfo* method);
void System_Net_SocketAddress___ctor (System_Net_SocketAddress_o* __this, System_Net_IPAddress_o* ipAddress, const MethodInfo* method);
void System_Net_SocketAddress___ctor (System_Net_SocketAddress_o* __this, System_Net_IPAddress_o* ipaddress, int32_t port, const MethodInfo* method);
System_Net_IPAddress_o* System_Net_SocketAddress__GetIPAddress (System_Net_SocketAddress_o* __this, const MethodInfo* method);
System_Net_IPEndPoint_o* System_Net_SocketAddress__GetIPEndPoint (System_Net_SocketAddress_o* __this, const MethodInfo* method);
bool System_Net_SocketAddress__Equals (System_Net_SocketAddress_o* __this, Il2CppObject* comparand, const MethodInfo* method);
int32_t System_Net_SocketAddress__GetHashCode (System_Net_SocketAddress_o* __this, const MethodInfo* method);
System_String_o* System_Net_SocketAddress__ToString (System_Net_SocketAddress_o* __this, const MethodInfo* method);
