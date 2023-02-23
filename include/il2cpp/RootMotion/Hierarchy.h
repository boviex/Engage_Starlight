#pragma once

#include "il2cpp.h"

bool RootMotion_Hierarchy__HierarchyIsValid (UnityEngine_Transform_array* bones, const MethodInfo* method);
UnityEngine_Object_o* RootMotion_Hierarchy__ContainsDuplicate (UnityEngine_Object_array* objects, const MethodInfo* method);
bool RootMotion_Hierarchy__IsAncestor (UnityEngine_Transform_o* transform, UnityEngine_Transform_o* ancestor, const MethodInfo* method);
bool RootMotion_Hierarchy__ContainsChild (UnityEngine_Transform_o* transform, UnityEngine_Transform_o* child, const MethodInfo* method);
void RootMotion_Hierarchy__AddAncestors (UnityEngine_Transform_o* transform, UnityEngine_Transform_o* blocker, UnityEngine_Transform_array** array, const MethodInfo* method);
UnityEngine_Transform_o* RootMotion_Hierarchy__GetAncestor (UnityEngine_Transform_o* transform, int32_t minChildCount, const MethodInfo* method);
UnityEngine_Transform_o* RootMotion_Hierarchy__GetFirstCommonAncestor (UnityEngine_Transform_o* t1, UnityEngine_Transform_o* t2, const MethodInfo* method);
UnityEngine_Transform_o* RootMotion_Hierarchy__GetFirstCommonAncestor (UnityEngine_Transform_array* transforms, const MethodInfo* method);
UnityEngine_Transform_o* RootMotion_Hierarchy__GetFirstCommonAncestorRecursive (UnityEngine_Transform_o* transform, UnityEngine_Transform_array* transforms, const MethodInfo* method);
bool RootMotion_Hierarchy__IsCommonAncestor (UnityEngine_Transform_o* transform, UnityEngine_Transform_array* transforms, const MethodInfo* method);
void RootMotion_Hierarchy___ctor (RootMotion_Hierarchy_o* __this, const MethodInfo* method);
