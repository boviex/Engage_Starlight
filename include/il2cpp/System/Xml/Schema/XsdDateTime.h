#pragma once

#include "il2cpp.h"

void System_Xml_Schema_XsdDateTime___ctor (System_Xml_Schema_XsdDateTime_o __this, System_String_o* text, int32_t kinds, const MethodInfo* method);
void System_Xml_Schema_XsdDateTime___ctor (System_Xml_Schema_XsdDateTime_o __this, System_Xml_Schema_XsdDateTime_Parser_o parser, const MethodInfo* method);
void System_Xml_Schema_XsdDateTime__InitiateXsdDateTime (System_Xml_Schema_XsdDateTime_o __this, System_Xml_Schema_XsdDateTime_Parser_o parser, const MethodInfo* method);
bool System_Xml_Schema_XsdDateTime__TryParse (System_String_o* text, int32_t kinds, System_Xml_Schema_XsdDateTime_o* result, const MethodInfo* method);
void System_Xml_Schema_XsdDateTime___ctor (System_Xml_Schema_XsdDateTime_o __this, System_DateTime_o dateTime, int32_t kinds, const MethodInfo* method);
void System_Xml_Schema_XsdDateTime___ctor (System_Xml_Schema_XsdDateTime_o __this, System_DateTimeOffset_o dateTimeOffset, int32_t kinds, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDateTime__get_InternalTypeCode (System_Xml_Schema_XsdDateTime_o __this, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDateTime__get_InternalKind (System_Xml_Schema_XsdDateTime_o __this, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDateTime__get_Year (System_Xml_Schema_XsdDateTime_o __this, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDateTime__get_Month (System_Xml_Schema_XsdDateTime_o __this, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDateTime__get_Day (System_Xml_Schema_XsdDateTime_o __this, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDateTime__get_Hour (System_Xml_Schema_XsdDateTime_o __this, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDateTime__get_Minute (System_Xml_Schema_XsdDateTime_o __this, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDateTime__get_Second (System_Xml_Schema_XsdDateTime_o __this, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDateTime__get_Fraction (System_Xml_Schema_XsdDateTime_o __this, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDateTime__get_ZoneHour (System_Xml_Schema_XsdDateTime_o __this, const MethodInfo* method);
int32_t System_Xml_Schema_XsdDateTime__get_ZoneMinute (System_Xml_Schema_XsdDateTime_o __this, const MethodInfo* method);
System_DateTime_o System_Xml_Schema_XsdDateTime__op_Implicit (System_Xml_Schema_XsdDateTime_o xdt, const MethodInfo* method);
System_DateTimeOffset_o System_Xml_Schema_XsdDateTime__op_Implicit (System_Xml_Schema_XsdDateTime_o xdt, const MethodInfo* method);
System_String_o* System_Xml_Schema_XsdDateTime__ToString (System_Xml_Schema_XsdDateTime_o __this, const MethodInfo* method);
void System_Xml_Schema_XsdDateTime__PrintDate (System_Xml_Schema_XsdDateTime_o __this, System_Text_StringBuilder_o* sb, const MethodInfo* method);
void System_Xml_Schema_XsdDateTime__PrintTime (System_Xml_Schema_XsdDateTime_o __this, System_Text_StringBuilder_o* sb, const MethodInfo* method);
void System_Xml_Schema_XsdDateTime__PrintZone (System_Xml_Schema_XsdDateTime_o __this, System_Text_StringBuilder_o* sb, const MethodInfo* method);
void System_Xml_Schema_XsdDateTime__IntToCharArray (System_Xml_Schema_XsdDateTime_o __this, System_Char_array* text, int32_t start, int32_t value, int32_t digits, const MethodInfo* method);
void System_Xml_Schema_XsdDateTime__ShortToCharArray (System_Xml_Schema_XsdDateTime_o __this, System_Char_array* text, int32_t start, int32_t value, const MethodInfo* method);
void System_Xml_Schema_XsdDateTime___cctor (const MethodInfo* method);
