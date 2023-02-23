#pragma once

#include "il2cpp.h"

void System_Xml_XmlEntity___ctor (System_Xml_XmlEntity_o* __this, System_String_o* name, System_String_o* strdata, System_String_o* publicId, System_String_o* systemId, System_String_o* notationName, System_Xml_XmlDocument_o* doc, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlEntity__CloneNode (System_Xml_XmlEntity_o* __this, bool deep, const MethodInfo* method);
bool System_Xml_XmlEntity__get_IsReadOnly (System_Xml_XmlEntity_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlEntity__get_Name (System_Xml_XmlEntity_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlEntity__get_LocalName (System_Xml_XmlEntity_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlEntity__get_InnerText (System_Xml_XmlEntity_o* __this, const MethodInfo* method);
void System_Xml_XmlEntity__set_InnerText (System_Xml_XmlEntity_o* __this, System_String_o* value, const MethodInfo* method);
bool System_Xml_XmlEntity__get_IsContainer (System_Xml_XmlEntity_o* __this, const MethodInfo* method);
System_Xml_XmlLinkedNode_o* System_Xml_XmlEntity__get_LastNode (System_Xml_XmlEntity_o* __this, const MethodInfo* method);
void System_Xml_XmlEntity__set_LastNode (System_Xml_XmlEntity_o* __this, System_Xml_XmlLinkedNode_o* value, const MethodInfo* method);
bool System_Xml_XmlEntity__IsValidChildType (System_Xml_XmlEntity_o* __this, int32_t type, const MethodInfo* method);
int32_t System_Xml_XmlEntity__get_NodeType (System_Xml_XmlEntity_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlEntity__get_SystemId (System_Xml_XmlEntity_o* __this, const MethodInfo* method);
void System_Xml_XmlEntity__set_InnerXml (System_Xml_XmlEntity_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* System_Xml_XmlEntity__get_BaseURI (System_Xml_XmlEntity_o* __this, const MethodInfo* method);
void System_Xml_XmlEntity__SetBaseURI (System_Xml_XmlEntity_o* __this, System_String_o* inBaseURI, const MethodInfo* method);
