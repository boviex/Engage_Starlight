#pragma once

#include "il2cpp.h"

System_Xml_Schema_ForwardAxis_o* System_Xml_Schema_AxisStack__get_Subtree (System_Xml_Schema_AxisStack_o* __this, const MethodInfo* method);
int32_t System_Xml_Schema_AxisStack__get_Length (System_Xml_Schema_AxisStack_o* __this, const MethodInfo* method);
void System_Xml_Schema_AxisStack___ctor (System_Xml_Schema_AxisStack_o* __this, System_Xml_Schema_ForwardAxis_o* faxis, System_Xml_Schema_ActiveAxis_o* parent, const MethodInfo* method);
void System_Xml_Schema_AxisStack__Push (System_Xml_Schema_AxisStack_o* __this, int32_t depth, const MethodInfo* method);
void System_Xml_Schema_AxisStack__Pop (System_Xml_Schema_AxisStack_o* __this, const MethodInfo* method);
bool System_Xml_Schema_AxisStack__Equal (System_String_o* thisname, System_String_o* thisURN, System_String_o* name, System_String_o* URN, const MethodInfo* method);
void System_Xml_Schema_AxisStack__MoveToParent (System_Xml_Schema_AxisStack_o* __this, System_String_o* name, System_String_o* URN, int32_t depth, const MethodInfo* method);
bool System_Xml_Schema_AxisStack__MoveToChild (System_Xml_Schema_AxisStack_o* __this, System_String_o* name, System_String_o* URN, int32_t depth, const MethodInfo* method);
bool System_Xml_Schema_AxisStack__MoveToAttribute (System_Xml_Schema_AxisStack_o* __this, System_String_o* name, System_String_o* URN, int32_t depth, const MethodInfo* method);
