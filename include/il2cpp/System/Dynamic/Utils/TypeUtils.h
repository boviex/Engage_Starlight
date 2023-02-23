#pragma once

#include "il2cpp.h"

System_Type_o* System_Dynamic_Utils_TypeUtils__GetNonNullableType (System_Type_o* type, const MethodInfo* method);
System_Type_o* System_Dynamic_Utils_TypeUtils__GetNullableType (System_Type_o* type, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsNullableType (System_Type_o* type, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsNullableOrReferenceType (System_Type_o* type, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsBool (System_Type_o* type, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsNumeric (System_Type_o* type, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsInteger (System_Type_o* type, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsArithmetic (System_Type_o* type, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsUnsignedInt (System_Type_o* type, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsIntegerOrBool (System_Type_o* type, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsNumericOrBool (System_Type_o* type, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsValidInstanceType (System_Reflection_MemberInfo_o* member, System_Type_o* instanceType, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__HasIdentityPrimitiveOrNullableConversionTo (System_Type_o* source, System_Type_o* dest, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__HasReferenceConversionTo (System_Type_o* source, System_Type_o* dest, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsCovariant (System_Type_o* t, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsContravariant (System_Type_o* t, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsInvariant (System_Type_o* t, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsDelegate (System_Type_o* t, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsLegalExplicitVariantDelegateConversion (System_Type_o* source, System_Type_o* dest, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsConvertible (System_Type_o* type, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__HasReferenceEquality (System_Type_o* left, System_Type_o* right, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__HasBuiltInEqualityOperator (System_Type_o* left, System_Type_o* right, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsImplicitlyConvertibleTo (System_Type_o* source, System_Type_o* destination, const MethodInfo* method);
System_Reflection_MethodInfo_o* System_Dynamic_Utils_TypeUtils__GetUserDefinedCoercionMethod (System_Type_o* convertFrom, System_Type_o* convertToType, const MethodInfo* method);
System_Reflection_MethodInfo_o* System_Dynamic_Utils_TypeUtils__FindConversionOperator (System_Reflection_MethodInfo_array* methods, System_Type_o* typeFrom, System_Type_o* typeTo, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsImplicitNumericConversion (System_Type_o* source, System_Type_o* destination, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsImplicitReferenceConversion (System_Type_o* source, System_Type_o* destination, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsImplicitBoxingConversion (System_Type_o* source, System_Type_o* destination, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsImplicitNullableConversion (System_Type_o* source, System_Type_o* destination, const MethodInfo* method);
System_Type_o* System_Dynamic_Utils_TypeUtils__FindGenericType (System_Type_o* definition, System_Type_o* type, const MethodInfo* method);
System_Reflection_MethodInfo_o* System_Dynamic_Utils_TypeUtils__GetBooleanOperator (System_Type_o* type, System_String_o* name, const MethodInfo* method);
System_Type_o* System_Dynamic_Utils_TypeUtils__GetNonRefType (System_Type_o* type, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__AreEquivalent (System_Type_o* t1, System_Type_o* t2, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__AreReferenceAssignable (System_Type_o* dest, System_Type_o* src, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__IsSameOrSubclass (System_Type_o* type, System_Type_o* subType, const MethodInfo* method);
void System_Dynamic_Utils_TypeUtils__ValidateType (System_Type_o* type, System_String_o* paramName, const MethodInfo* method);
void System_Dynamic_Utils_TypeUtils__ValidateType (System_Type_o* type, System_String_o* paramName, bool allowByRef, bool allowPointer, const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__ValidateType (System_Type_o* type, System_String_o* paramName, int32_t index, const MethodInfo* method);
System_Reflection_Assembly_o* System_Dynamic_Utils_TypeUtils__get_MsCorLib (const MethodInfo* method);
bool System_Dynamic_Utils_TypeUtils__CanCache (System_Type_o* t, const MethodInfo* method);
System_Reflection_MethodInfo_o* System_Dynamic_Utils_TypeUtils__GetInvokeMethod (System_Type_o* delegateType, const MethodInfo* method);
