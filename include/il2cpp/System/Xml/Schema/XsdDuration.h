#pragma once

#include "il2cpp.h"

void System_Xml_Schema_XsdDuration___ctor (System_Xml_Schema_XsdDuration_o __this, bool isNegative, int32_t years, int32_t months, int32_t days, int32_t hours, int32_t minutes, int32_t seconds, int32_t nanoseconds, const MethodInfo* method);
void System_Xml_Schema_XsdDuration___ctor (System_Xml_Schema_XsdDuration_o __this, System_TimeSpan_o timeSpan, int32_t durationType, const MethodInfo* method);
void System_Xml_Schema_XsdDuration___ctor (System_Xml_Schema_XsdDuration_o __this, System_String_o* s, int32_t durationType, const MethodInfo* method);
bool System_Xml_Schema_XsdDuration__get_IsNegative (System_Xml_Schema_XsdDuration_o __this, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDuration__get_Years (System_Xml_Schema_XsdDuration_o __this, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDuration__get_Months (System_Xml_Schema_XsdDuration_o __this, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDuration__get_Days (System_Xml_Schema_XsdDuration_o __this, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDuration__get_Hours (System_Xml_Schema_XsdDuration_o __this, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDuration__get_Minutes (System_Xml_Schema_XsdDuration_o __this, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDuration__get_Seconds (System_Xml_Schema_XsdDuration_o __this, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDuration__get_Nanoseconds (System_Xml_Schema_XsdDuration_o __this, const MethodInfo* method);
System_TimeSpan_o System_Xml_Schema_XsdDuration__ToTimeSpan (System_Xml_Schema_XsdDuration_o __this, int32_t durationType, const MethodInfo* method);
System_Exception_o* System_Xml_Schema_XsdDuration__TryToTimeSpan (System_Xml_Schema_XsdDuration_o __this, System_TimeSpan_o* result, const MethodInfo* method);
System_Exception_o* System_Xml_Schema_XsdDuration__TryToTimeSpan (System_Xml_Schema_XsdDuration_o __this, int32_t durationType, System_TimeSpan_o* result, const MethodInfo* method);
System_String_o* System_Xml_Schema_XsdDuration__ToString (System_Xml_Schema_XsdDuration_o __this, const MethodInfo* method);
System_String_o* System_Xml_Schema_XsdDuration__ToString (System_Xml_Schema_XsdDuration_o __this, int32_t durationType, const MethodInfo* method);
System_Exception_o* System_Xml_Schema_XsdDuration__TryParse (System_String_o* s, System_Xml_Schema_XsdDuration_o* result, const MethodInfo* method);
System_Exception_o* System_Xml_Schema_XsdDuration__TryParse (System_String_o* s, int32_t durationType, System_Xml_Schema_XsdDuration_o* result, const MethodInfo* method);
System_String_o* System_Xml_Schema_XsdDuration__TryParseDigits (System_String_o* s, int32_t* offset, bool eatDigits, int32_t* result, int32_t* numDigits, const MethodInfo* method);
