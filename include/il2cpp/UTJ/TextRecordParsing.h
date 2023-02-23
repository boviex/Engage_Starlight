#pragma once

#include "il2cpp.h"

System_Collections_Generic_IEnumerable_string__o* UTJ_TextRecordParsing__get_DefaultCommentPrefixes (const MethodInfo* method);
System_String_o* UTJ_TextRecordParsing__GetString (System_Collections_Generic_List_string__o* items, int32_t index, const MethodInfo* method);
bool UTJ_TextRecordParsing__GetBool (System_Collections_Generic_List_string__o* items, int32_t index, const MethodInfo* method);
bool UTJ_TextRecordParsing__GetInt (System_Collections_Generic_List_string__o* items, int32_t index, int32_t* output, const MethodInfo* method);
bool UTJ_TextRecordParsing__GetFloat (System_Collections_Generic_List_string__o* items, int32_t index, float* output, const MethodInfo* method);
bool UTJ_TextRecordParsing__GetVector3 (System_Collections_Generic_List_string__o* items, int32_t startIndex, UnityEngine_Vector3_o* output, const MethodInfo* method);
System_Collections_Generic_List_TextRecordParsing_Record__o* UTJ_TextRecordParsing__ParseRecordsFromReader (System_IO_TextReader_o* reader, System_String_o* entrySeparators, System_Collections_Generic_IEnumerable_string__o* commentPrefixes, const MethodInfo* method);
System_Collections_Generic_List_TextRecordParsing_Record__o* UTJ_TextRecordParsing__ParseRecordsFromFile (System_String_o* sourcePath, System_Text_Encoding_o* encoding, System_String_o* entrySeparators, System_Collections_Generic_IEnumerable_string__o* commentPrefixes, const MethodInfo* method);
System_Collections_Generic_List_TextRecordParsing_Record__o* UTJ_TextRecordParsing__ParseRecordsFromText (System_String_o* sourceText, System_String_o* entrySeparators, System_Collections_Generic_IEnumerable_string__o* commentPrefixes, const MethodInfo* method);
System_Collections_Generic_List_TextRecordParsing_Record__o* UTJ_TextRecordParsing__GetSectionRecords (System_Collections_Generic_List_TextRecordParsing_Record__o* sourceRecords, System_String_o* sectionName, const MethodInfo* method);
bool UTJ_TextRecordParsing__LineIsCommentedOut (System_String_o* trimmedLine, System_Collections_Generic_IEnumerable_string__o* commentPrefixes, const MethodInfo* method);
void UTJ_TextRecordParsing___ctor (UTJ_TextRecordParsing_o* __this, const MethodInfo* method);
