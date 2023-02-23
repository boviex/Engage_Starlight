#pragma once

#include "il2cpp.h"

Il2CppObject* System_Xml_XmlCharType__get_StaticLock (const MethodInfo* method);
void System_Xml_XmlCharType__InitInstance (const MethodInfo* method);
void System_Xml_XmlCharType__SetProperties (System_String_o* ranges, uint8_t value, const MethodInfo* method);
void System_Xml_XmlCharType___ctor (System_Xml_XmlCharType_o __this, System_Byte_array* charProperties, const MethodInfo* method);
System_Xml_XmlCharType_o System_Xml_XmlCharType__get_Instance (const MethodInfo* method);
bool System_Xml_XmlCharType__IsWhiteSpace (System_Xml_XmlCharType_o __this, uint16_t ch, const MethodInfo* method);
bool System_Xml_XmlCharType__IsNCNameSingleChar (System_Xml_XmlCharType_o __this, uint16_t ch, const MethodInfo* method);
bool System_Xml_XmlCharType__IsStartNCNameSingleChar (System_Xml_XmlCharType_o __this, uint16_t ch, const MethodInfo* method);
bool System_Xml_XmlCharType__IsNameSingleChar (System_Xml_XmlCharType_o __this, uint16_t ch, const MethodInfo* method);
bool System_Xml_XmlCharType__IsCharData (System_Xml_XmlCharType_o __this, uint16_t ch, const MethodInfo* method);
bool System_Xml_XmlCharType__IsPubidChar (System_Xml_XmlCharType_o __this, uint16_t ch, const MethodInfo* method);
bool System_Xml_XmlCharType__IsDigit (uint16_t ch, const MethodInfo* method);
bool System_Xml_XmlCharType__IsHighSurrogate (int32_t ch, const MethodInfo* method);
bool System_Xml_XmlCharType__IsLowSurrogate (int32_t ch, const MethodInfo* method);
bool System_Xml_XmlCharType__IsSurrogate (int32_t ch, const MethodInfo* method);
int32_t System_Xml_XmlCharType__CombineSurrogateChar (int32_t lowChar, int32_t highChar, const MethodInfo* method);
void System_Xml_XmlCharType__SplitSurrogateChar (int32_t combinedChar, uint16_t* lowChar, uint16_t* highChar, const MethodInfo* method);
bool System_Xml_XmlCharType__IsOnlyWhitespace (System_Xml_XmlCharType_o __this, System_String_o* str, const MethodInfo* method);
int32_t System_Xml_XmlCharType__IsOnlyWhitespaceWithPos (System_Xml_XmlCharType_o __this, System_String_o* str, const MethodInfo* method);
int32_t System_Xml_XmlCharType__IsOnlyCharData (System_Xml_XmlCharType_o __this, System_String_o* str, const MethodInfo* method);
bool System_Xml_XmlCharType__IsOnlyDigits (System_String_o* str, int32_t startPos, int32_t len, const MethodInfo* method);
int32_t System_Xml_XmlCharType__IsPublicId (System_Xml_XmlCharType_o __this, System_String_o* str, const MethodInfo* method);
bool System_Xml_XmlCharType__InRange (int32_t value, int32_t start, int32_t end, const MethodInfo* method);
