#pragma once

#include "il2cpp.h"

void System_Xml_Schema_LeafRangeNode___ctor (System_Xml_Schema_LeafRangeNode_o* __this, System_Decimal_o min, System_Decimal_o max, const MethodInfo* method);
void System_Xml_Schema_LeafRangeNode___ctor (System_Xml_Schema_LeafRangeNode_o* __this, int32_t pos, System_Decimal_o min, System_Decimal_o max, const MethodInfo* method);
System_Decimal_o System_Xml_Schema_LeafRangeNode__get_Max (System_Xml_Schema_LeafRangeNode_o* __this, const MethodInfo* method);
System_Decimal_o System_Xml_Schema_LeafRangeNode__get_Min (System_Xml_Schema_LeafRangeNode_o* __this, const MethodInfo* method);
System_Xml_Schema_BitSet_o* System_Xml_Schema_LeafRangeNode__get_NextIteration (System_Xml_Schema_LeafRangeNode_o* __this, const MethodInfo* method);
void System_Xml_Schema_LeafRangeNode__set_NextIteration (System_Xml_Schema_LeafRangeNode_o* __this, System_Xml_Schema_BitSet_o* value, const MethodInfo* method);
bool System_Xml_Schema_LeafRangeNode__get_IsRangeNode (System_Xml_Schema_LeafRangeNode_o* __this, const MethodInfo* method);
void System_Xml_Schema_LeafRangeNode__ExpandTree (System_Xml_Schema_LeafRangeNode_o* __this, System_Xml_Schema_InteriorNode_o* parent, System_Xml_Schema_SymbolsDictionary_o* symbols, System_Xml_Schema_Positions_o* positions, const MethodInfo* method);
