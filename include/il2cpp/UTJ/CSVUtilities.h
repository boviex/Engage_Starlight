#pragma once

#include "il2cpp.h"

System_String_o* UTJ_CSVUtilities__BuildCSVItem (System_String_o* source, const MethodInfo* method);
System_String_o* UTJ_CSVUtilities__BuildCSVItem (System_String_o* source, System_String_o* separatorCharacters, const MethodInfo* method);
System_Collections_Generic_IList_string__o* UTJ_CSVUtilities__ReadNextCSVRow (System_IO_TextReader_o* reader, const MethodInfo* method);
System_Collections_Generic_IList_string__o* UTJ_CSVUtilities__ReadNextCSVRow (System_IO_TextReader_o* reader, System_String_o* separatorCharacters, const MethodInfo* method);
