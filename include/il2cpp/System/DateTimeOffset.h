#pragma once

#include "il2cpp.h"

void System_DateTimeOffset___ctor (System_DateTimeOffset_o __this, int64_t ticks, System_TimeSpan_o offset, const MethodInfo* method);
void System_DateTimeOffset___ctor (System_DateTimeOffset_o __this, System_DateTime_o dateTime, const MethodInfo* method);
void System_DateTimeOffset___ctor (System_DateTimeOffset_o __this, System_DateTime_o dateTime, System_TimeSpan_o offset, const MethodInfo* method);
System_DateTimeOffset_o System_DateTimeOffset__get_UtcNow (const MethodInfo* method);
System_DateTime_o System_DateTimeOffset__get_DateTime (System_DateTimeOffset_o __this, const MethodInfo* method);
System_DateTime_o System_DateTimeOffset__get_UtcDateTime (System_DateTimeOffset_o __this, const MethodInfo* method);
System_DateTime_o System_DateTimeOffset__get_LocalDateTime (System_DateTimeOffset_o __this, const MethodInfo* method);
System_DateTime_o System_DateTimeOffset__get_ClockDateTime (System_DateTimeOffset_o __this, const MethodInfo* method);
System_TimeSpan_o System_DateTimeOffset__get_Offset (System_DateTimeOffset_o __this, const MethodInfo* method);
System_DateTimeOffset_o System_DateTimeOffset__Add (System_DateTimeOffset_o __this, System_TimeSpan_o timeSpan, const MethodInfo* method);
int32_t System_DateTimeOffset__System_IComparable_CompareTo (System_DateTimeOffset_o __this, Il2CppObject* obj, const MethodInfo* method);
int32_t System_DateTimeOffset__CompareTo (System_DateTimeOffset_o __this, System_DateTimeOffset_o other, const MethodInfo* method);
bool System_DateTimeOffset__Equals (System_DateTimeOffset_o __this, Il2CppObject* obj, const MethodInfo* method);
bool System_DateTimeOffset__Equals (System_DateTimeOffset_o __this, System_DateTimeOffset_o other, const MethodInfo* method);
void System_DateTimeOffset__System_Runtime_Serialization_IDeserializationCallback_OnDeserialization (System_DateTimeOffset_o __this, Il2CppObject* sender, const MethodInfo* method);
void System_DateTimeOffset__System_Runtime_Serialization_ISerializable_GetObjectData (System_DateTimeOffset_o __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
void System_DateTimeOffset___ctor (System_DateTimeOffset_o __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
int32_t System_DateTimeOffset__GetHashCode (System_DateTimeOffset_o __this, const MethodInfo* method);
System_TimeSpan_o System_DateTimeOffset__Subtract (System_DateTimeOffset_o __this, System_DateTimeOffset_o value, const MethodInfo* method);
System_String_o* System_DateTimeOffset__ToString (System_DateTimeOffset_o __this, const MethodInfo* method);
System_String_o* System_DateTimeOffset__ToString (System_DateTimeOffset_o __this, System_String_o* format, System_IFormatProvider_o* formatProvider, const MethodInfo* method);
int16_t System_DateTimeOffset__ValidateOffset (System_TimeSpan_o offset, const MethodInfo* method);
System_DateTime_o System_DateTimeOffset__ValidateDate (System_DateTime_o dateTime, System_TimeSpan_o offset, const MethodInfo* method);
System_DateTimeOffset_o System_DateTimeOffset__op_Implicit (System_DateTime_o dateTime, const MethodInfo* method);
System_TimeSpan_o System_DateTimeOffset__op_Subtraction (System_DateTimeOffset_o left, System_DateTimeOffset_o right, const MethodInfo* method);
void System_DateTimeOffset___cctor (const MethodInfo* method);
