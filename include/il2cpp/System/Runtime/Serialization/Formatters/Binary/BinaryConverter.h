#pragma once

#include "il2cpp.h"

int32_t System_Runtime_Serialization_Formatters_Binary_BinaryConverter__GetBinaryTypeInfo (System_Type_o* type, System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_o* objectInfo, System_String_o* typeName, System_Runtime_Serialization_Formatters_Binary_ObjectWriter_o* objectWriter, Il2CppObject** typeInformation, int32_t* assemId, const MethodInfo* method);
int32_t System_Runtime_Serialization_Formatters_Binary_BinaryConverter__GetParserBinaryTypeInfo (System_Type_o* type, Il2CppObject** typeInformation, const MethodInfo* method);
void System_Runtime_Serialization_Formatters_Binary_BinaryConverter__WriteTypeInfo (int32_t binaryTypeEnum, Il2CppObject* typeInformation, int32_t assemId, System_Runtime_Serialization_Formatters_Binary___BinaryWriter_o* sout, const MethodInfo* method);
Il2CppObject* System_Runtime_Serialization_Formatters_Binary_BinaryConverter__ReadTypeInfo (int32_t binaryTypeEnum, System_Runtime_Serialization_Formatters_Binary___BinaryParser_o* input, int32_t* assemId, const MethodInfo* method);
void System_Runtime_Serialization_Formatters_Binary_BinaryConverter__TypeFromInfo (int32_t binaryTypeEnum, Il2CppObject* typeInformation, System_Runtime_Serialization_Formatters_Binary_ObjectReader_o* objectReader, System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_o* assemblyInfo, int32_t* primitiveTypeEnum, System_String_o** typeString, System_Type_o** type, bool* isVariant, const MethodInfo* method);
