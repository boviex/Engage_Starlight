#pragma once

#include "il2cpp.h"

void System_Runtime_Serialization_ObjectHolder___ctor (System_Runtime_Serialization_ObjectHolder_o* __this, int64_t objID, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder___ctor (System_Runtime_Serialization_ObjectHolder_o* __this, Il2CppObject* obj, int64_t objID, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_ISerializationSurrogate_o* surrogate, int64_t idOfContainingObj, System_Reflection_FieldInfo_o* field, System_Int32_array* arrayIndex, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder___ctor (System_Runtime_Serialization_ObjectHolder_o* __this, System_String_o* obj, int64_t objID, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_ISerializationSurrogate_o* surrogate, int64_t idOfContainingObj, System_Reflection_FieldInfo_o* field, System_Int32_array* arrayIndex, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder__IncrementDescendentFixups (System_Runtime_Serialization_ObjectHolder_o* __this, int32_t amount, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder__DecrementFixupsRemaining (System_Runtime_Serialization_ObjectHolder_o* __this, System_Runtime_Serialization_ObjectManager_o* manager, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder__RemoveDependency (System_Runtime_Serialization_ObjectHolder_o* __this, int64_t id, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder__AddFixup (System_Runtime_Serialization_ObjectHolder_o* __this, System_Runtime_Serialization_FixupHolder_o* fixup, System_Runtime_Serialization_ObjectManager_o* manager, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder__UpdateDescendentDependencyChain (System_Runtime_Serialization_ObjectHolder_o* __this, int32_t amount, System_Runtime_Serialization_ObjectManager_o* manager, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder__AddDependency (System_Runtime_Serialization_ObjectHolder_o* __this, int64_t dependentObject, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder__UpdateData (System_Runtime_Serialization_ObjectHolder_o* __this, Il2CppObject* obj, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_ISerializationSurrogate_o* surrogate, int64_t idOfContainer, System_Reflection_FieldInfo_o* field, System_Int32_array* arrayIndex, System_Runtime_Serialization_ObjectManager_o* manager, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder__MarkForCompletionWhenAvailable (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder__SetFlags (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
bool System_Runtime_Serialization_ObjectHolder__get_IsIncompleteObjectReference (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder__set_IsIncompleteObjectReference (System_Runtime_Serialization_ObjectHolder_o* __this, bool value, const MethodInfo* method);
bool System_Runtime_Serialization_ObjectHolder__get_RequiresDelayedFixup (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
bool System_Runtime_Serialization_ObjectHolder__get_RequiresValueTypeFixup (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
bool System_Runtime_Serialization_ObjectHolder__get_ValueTypeFixupPerformed (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder__set_ValueTypeFixupPerformed (System_Runtime_Serialization_ObjectHolder_o* __this, bool value, const MethodInfo* method);
bool System_Runtime_Serialization_ObjectHolder__get_HasISerializable (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
bool System_Runtime_Serialization_ObjectHolder__get_HasSurrogate (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
bool System_Runtime_Serialization_ObjectHolder__get_CanSurrogatedObjectValueChange (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
bool System_Runtime_Serialization_ObjectHolder__get_CanObjectValueChange (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
int32_t System_Runtime_Serialization_ObjectHolder__get_DirectlyDependentObjects (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
int32_t System_Runtime_Serialization_ObjectHolder__get_TotalDependentObjects (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
bool System_Runtime_Serialization_ObjectHolder__get_Reachable (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder__set_Reachable (System_Runtime_Serialization_ObjectHolder_o* __this, bool value, const MethodInfo* method);
bool System_Runtime_Serialization_ObjectHolder__get_TypeLoadExceptionReachable (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
System_Runtime_Serialization_TypeLoadExceptionHolder_o* System_Runtime_Serialization_ObjectHolder__get_TypeLoadException (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder__set_TypeLoadException (System_Runtime_Serialization_ObjectHolder_o* __this, System_Runtime_Serialization_TypeLoadExceptionHolder_o* value, const MethodInfo* method);
Il2CppObject* System_Runtime_Serialization_ObjectHolder__get_ObjectValue (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder__SetObjectValue (System_Runtime_Serialization_ObjectHolder_o* __this, Il2CppObject* obj, System_Runtime_Serialization_ObjectManager_o* manager, const MethodInfo* method);
System_Runtime_Serialization_SerializationInfo_o* System_Runtime_Serialization_ObjectHolder__get_SerializationInfo (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder__set_SerializationInfo (System_Runtime_Serialization_ObjectHolder_o* __this, System_Runtime_Serialization_SerializationInfo_o* value, const MethodInfo* method);
System_Runtime_Serialization_ISerializationSurrogate_o* System_Runtime_Serialization_ObjectHolder__get_Surrogate (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
System_Runtime_Serialization_LongList_o* System_Runtime_Serialization_ObjectHolder__get_DependentObjects (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder__set_DependentObjects (System_Runtime_Serialization_ObjectHolder_o* __this, System_Runtime_Serialization_LongList_o* value, const MethodInfo* method);
bool System_Runtime_Serialization_ObjectHolder__get_RequiresSerInfoFixup (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
void System_Runtime_Serialization_ObjectHolder__set_RequiresSerInfoFixup (System_Runtime_Serialization_ObjectHolder_o* __this, bool value, const MethodInfo* method);
System_Runtime_Serialization_ValueTypeFixupInfo_o* System_Runtime_Serialization_ObjectHolder__get_ValueFixup (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
bool System_Runtime_Serialization_ObjectHolder__get_CompletelyFixed (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
int64_t System_Runtime_Serialization_ObjectHolder__get_ContainerID (System_Runtime_Serialization_ObjectHolder_o* __this, const MethodInfo* method);
