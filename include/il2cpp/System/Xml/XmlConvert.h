#pragma once

#include "il2cpp.h"

System_Byte_array* System_Xml_XmlConvert__FromBinHexString (System_String_o* s, bool allowOddCount, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__ToBinHexString (System_Byte_array* inArray, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__VerifyName (System_String_o* name, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryVerifyName (System_String_o* name, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__VerifyNCName (System_String_o* name, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__VerifyNCName (System_String_o* name, int32_t exceptionType, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryVerifyNCName (System_String_o* name, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__VerifyTOKEN (System_String_o* token, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryVerifyTOKEN (System_String_o* token, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryVerifyNMTOKEN (System_String_o* name, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryVerifyNormalizedString (System_String_o* str, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__ToString (bool value, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__ToString (System_Decimal_o value, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__ToString (int8_t value, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__ToString (int16_t value, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__ToString (int32_t value, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__ToString (int64_t value, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__ToString (uint8_t value, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__ToString (uint16_t value, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__ToString (uint32_t value, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__ToString (uint64_t value, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__ToString (float value, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__ToString (double value, const MethodInfo* method);
bool System_Xml_XmlConvert__ToBoolean (System_String_o* s, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryToBoolean (System_String_o* s, bool* result, const MethodInfo* method);
uint16_t System_Xml_XmlConvert__ToChar (System_String_o* s, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryToChar (System_String_o* s, uint16_t* result, const MethodInfo* method);
System_Decimal_o System_Xml_XmlConvert__ToDecimal (System_String_o* s, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryToDecimal (System_String_o* s, System_Decimal_o* result, const MethodInfo* method);
System_Decimal_o System_Xml_XmlConvert__ToInteger (System_String_o* s, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryToInteger (System_String_o* s, System_Decimal_o* result, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryToSByte (System_String_o* s, int8_t* result, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryToInt16 (System_String_o* s, int16_t* result, const MethodInfo* method);
int32_t System_Xml_XmlConvert__ToInt32 (System_String_o* s, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryToInt32 (System_String_o* s, int32_t* result, const MethodInfo* method);
int64_t System_Xml_XmlConvert__ToInt64 (System_String_o* s, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryToInt64 (System_String_o* s, int64_t* result, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryToByte (System_String_o* s, uint8_t* result, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryToUInt16 (System_String_o* s, uint16_t* result, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryToUInt32 (System_String_o* s, uint32_t* result, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryToUInt64 (System_String_o* s, uint64_t* result, const MethodInfo* method);
float System_Xml_XmlConvert__ToSingle (System_String_o* s, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryToSingle (System_String_o* s, float* result, const MethodInfo* method);
double System_Xml_XmlConvert__ToDouble (System_String_o* s, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryToDouble (System_String_o* s, double* result, const MethodInfo* method);
double System_Xml_XmlConvert__ToXPathDouble (Il2CppObject* o, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryToTimeSpan (System_String_o* s, System_TimeSpan_o* result, const MethodInfo* method);
System_Guid_o System_Xml_XmlConvert__ToGuid (System_String_o* s, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryToGuid (System_String_o* s, System_Guid_o* result, const MethodInfo* method);
System_Uri_o* System_Xml_XmlConvert__ToUri (System_String_o* s, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__TryToUri (System_String_o* s, System_Uri_o** result, const MethodInfo* method);
bool System_Xml_XmlConvert__StrEqual (System_Char_array* chars, int32_t strPos1, int32_t strLen1, System_String_o* str2, const MethodInfo* method);
System_String_o* System_Xml_XmlConvert__TrimString (System_String_o* value, const MethodInfo* method);
System_String_array* System_Xml_XmlConvert__SplitString (System_String_o* value, const MethodInfo* method);
bool System_Xml_XmlConvert__IsNegativeZero (double value, const MethodInfo* method);
int64_t System_Xml_XmlConvert__DoubleToInt64Bits (double value, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__CreateException (System_String_o* res, System_String_array* args, int32_t exceptionType, int32_t lineNo, int32_t linePos, const MethodInfo* method);
System_Exception_o* System_Xml_XmlConvert__CreateInvalidNameCharException (System_String_o* name, int32_t index, int32_t exceptionType, const MethodInfo* method);
System_ArgumentException_o* System_Xml_XmlConvert__CreateInvalidNameArgumentException (System_String_o* name, System_String_o* argumentName, const MethodInfo* method);
void System_Xml_XmlConvert___cctor (const MethodInfo* method);