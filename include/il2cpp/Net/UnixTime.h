#pragma once

#include "il2cpp.h"

void Net_UnixTime__Initialize (const MethodInfo* method);
void Net_UnixTime__Cleanup (const MethodInfo* method);
int64_t Net_UnixTime__Get (const MethodInfo* method);
int64_t Net_UnixTime__GetFromNetworkClock (const MethodInfo* method);
bool Net_UnixTime__TryGetFromNetworkClock (int64_t* unixTime, const MethodInfo* method);
int64_t Net_UnixTime__GetFromNpDateTime (NexPlugin_NpDateTime_o npDateTime, const MethodInfo* method);
System_String_o* Net_UnixTime__ToString (int64_t unixTime, System_String_o* format, const MethodInfo* method);
System_String_o* Net_UnixTime__ToStringUtc (int64_t unixTime, System_String_o* format, const MethodInfo* method);
System_DateTime_o Net_UnixTime__ToLocalTime (int64_t unixTime, const MethodInfo* method);
void Net_UnixTime___cctor (const MethodInfo* method);
