#pragma once

#include "il2cpp.h"

System_Xml_XmlReader_o* App_StructReader__CreateXmlReader (System_Byte_array* data, const MethodInfo* method);
App_StructHeader_o* App_StructReader__ReadHeader (System_Xml_XmlReader_o* reader, System_String_o* filePath, System_String_o* sheetName, const MethodInfo* method);
bool App_StructReader__SearchSheet (System_Xml_XmlReader_o* reader, System_String_o* sheetName, const MethodInfo* method);
void App_StructReader___ctor (App_StructReader_o* __this, const MethodInfo* method);
