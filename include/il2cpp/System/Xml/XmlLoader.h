#pragma once

#include "il2cpp.h"

void System_Xml_XmlLoader___ctor (System_Xml_XmlLoader_o* __this, const MethodInfo* method);
void System_Xml_XmlLoader__Load (System_Xml_XmlLoader_o* __this, System_Xml_XmlDocument_o* doc, System_Xml_XmlReader_o* reader, bool preserveWhitespace, const MethodInfo* method);
void System_Xml_XmlLoader__LoadDocSequence (System_Xml_XmlLoader_o* __this, System_Xml_XmlDocument_o* parentDoc, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlLoader__LoadNode (System_Xml_XmlLoader_o* __this, bool skipOverWhitespace, const MethodInfo* method);
System_Xml_XmlAttribute_o* System_Xml_XmlLoader__LoadAttributeNode (System_Xml_XmlLoader_o* __this, const MethodInfo* method);
System_Xml_XmlAttribute_o* System_Xml_XmlLoader__LoadDefaultAttribute (System_Xml_XmlLoader_o* __this, const MethodInfo* method);
void System_Xml_XmlLoader__LoadAttributeValue (System_Xml_XmlLoader_o* __this, System_Xml_XmlNode_o* parent, bool direct, const MethodInfo* method);
System_Xml_XmlEntityReference_o* System_Xml_XmlLoader__LoadEntityReferenceNode (System_Xml_XmlLoader_o* __this, bool direct, const MethodInfo* method);
System_Xml_XmlDeclaration_o* System_Xml_XmlLoader__LoadDeclarationNode (System_Xml_XmlLoader_o* __this, const MethodInfo* method);
System_Xml_XmlDocumentType_o* System_Xml_XmlLoader__LoadDocumentTypeNode (System_Xml_XmlLoader_o* __this, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlLoader__LoadNodeDirect (System_Xml_XmlLoader_o* __this, const MethodInfo* method);
System_Xml_XmlAttribute_o* System_Xml_XmlLoader__LoadAttributeNodeDirect (System_Xml_XmlLoader_o* __this, const MethodInfo* method);
void System_Xml_XmlLoader__ParseDocumentType (System_Xml_XmlLoader_o* __this, System_Xml_XmlDocumentType_o* dtNode, const MethodInfo* method);
void System_Xml_XmlLoader__ParseDocumentType (System_Xml_XmlLoader_o* __this, System_Xml_XmlDocumentType_o* dtNode, bool bUseResolver, System_Xml_XmlResolver_o* resolver, const MethodInfo* method);
void System_Xml_XmlLoader__LoadDocumentType (System_Xml_XmlLoader_o* __this, System_Xml_IDtdInfo_o* dtdInfo, System_Xml_XmlDocumentType_o* dtNode, const MethodInfo* method);
System_Xml_XmlParserContext_o* System_Xml_XmlLoader__GetContext (System_Xml_XmlLoader_o* __this, System_Xml_XmlNode_o* node, const MethodInfo* method);
System_Xml_XmlNamespaceManager_o* System_Xml_XmlLoader__ParsePartialContent (System_Xml_XmlLoader_o* __this, System_Xml_XmlNode_o* parentNode, System_String_o* innerxmltext, int32_t nt, const MethodInfo* method);
void System_Xml_XmlLoader__LoadInnerXmlElement (System_Xml_XmlLoader_o* __this, System_Xml_XmlElement_o* node, System_String_o* innerxmltext, const MethodInfo* method);
void System_Xml_XmlLoader__LoadInnerXmlAttribute (System_Xml_XmlLoader_o* __this, System_Xml_XmlAttribute_o* node, System_String_o* innerxmltext, const MethodInfo* method);
void System_Xml_XmlLoader__RemoveDuplicateNamespace (System_Xml_XmlLoader_o* __this, System_Xml_XmlElement_o* elem, System_Xml_XmlNamespaceManager_o* mgr, bool fCheckElemAttrs, const MethodInfo* method);
System_String_o* System_Xml_XmlLoader__EntitizeName (System_Xml_XmlLoader_o* __this, System_String_o* name, const MethodInfo* method);
void System_Xml_XmlLoader__ExpandEntity (System_Xml_XmlLoader_o* __this, System_Xml_XmlEntity_o* ent, const MethodInfo* method);
void System_Xml_XmlLoader__ExpandEntityReference (System_Xml_XmlLoader_o* __this, System_Xml_XmlEntityReference_o* eref, const MethodInfo* method);
System_Xml_XmlReader_o* System_Xml_XmlLoader__CreateInnerXmlReader (System_Xml_XmlLoader_o* __this, System_String_o* xmlFragment, int32_t nt, System_Xml_XmlParserContext_o* context, System_Xml_XmlDocument_o* doc, const MethodInfo* method);
void System_Xml_XmlLoader__ParseXmlDeclarationValue (System_String_o* strValue, System_String_o** version, System_String_o** encoding, System_String_o** standalone, const MethodInfo* method);
System_Exception_o* System_Xml_XmlLoader__UnexpectedNodeType (int32_t nodetype, const MethodInfo* method);
