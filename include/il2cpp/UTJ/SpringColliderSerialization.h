#pragma once

#include "il2cpp.h"

System_String_o* UTJ_SpringColliderSerialization__BuildCollisionSetupString (UnityEngine_GameObject_o* colliderRoot, const MethodInfo* method);
void UTJ_SpringColliderSerialization__AppendColliders (UTJ_CSVBuilder_o* builder, UnityEngine_GameObject_o* colliderRoot, const MethodInfo* method);
System_String_o* UTJ_SpringColliderSerialization__GetComponentName (UnityEngine_Component_o* component, const MethodInfo* method);
UTJ_SpringColliderSerialization_TransformSerializer_o* UTJ_SpringColliderSerialization__TransformToSerializer (UnityEngine_Transform_o* sourceTransform, const MethodInfo* method);
UTJ_SpringColliderSerialization_ColliderSerializerBaseInfo_o* UTJ_SpringColliderSerialization__TransformToColliderSerializerBaseInfo (UnityEngine_Transform_o* sourceTransform, System_String_o* colliderType, const MethodInfo* method);
UTJ_SpringColliderSerialization_SphereColliderSerializer_o* UTJ_SpringColliderSerialization__SphereColliderToSerializer (UTJ_SpringSphereCollider_o* sourceCollider, const MethodInfo* method);
UTJ_SpringColliderSerialization_CapsuleColliderSerializer_o* UTJ_SpringColliderSerialization__CapsuleColliderToSerializer (UTJ_SpringCapsuleCollider_o* sourceCollider, const MethodInfo* method);
UTJ_SpringColliderSerialization_PanelColliderSerializer_o* UTJ_SpringColliderSerialization__PanelColliderToSerializer (UTJ_SpringPanelCollider_o* sourceCollider, const MethodInfo* method);
void UTJ_SpringColliderSerialization__AppendDynamicsNulls (UTJ_CSVBuilder_o* builder, UnityEngine_GameObject_o* rootObject, const MethodInfo* method);
System_String_o* UTJ_SpringColliderSerialization__BuildComponentDefinitionString (UnityEngine_GameObject_o* colliderRoot, const MethodInfo* method);
void UTJ_SpringColliderSerialization__AppendRecordItem_object_ (System_Text_StringBuilder_o* builder, Il2CppObject* item, uint16_t separator, const MethodInfo_20603D0* method);
void UTJ_SpringColliderSerialization__AppendRecordItem_string_ (System_Text_StringBuilder_o* builder, System_String_o* item, uint16_t separator, const MethodInfo_20603D0* method);
UnityEngine_Transform_o* UTJ_SpringColliderSerialization__CreateNewGameObject (UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
UnityEngine_Transform_o* UTJ_SpringColliderSerialization__GetChildByName (UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
Il2CppObject* UTJ_SpringColliderSerialization__TryToFindComponent_object_ (UnityEngine_GameObject_o* gameObject, System_String_o* name, const MethodInfo_2060410* method);
UnityEngine_Renderer_o* UTJ_SpringColliderSerialization__TryToFindComponent_Renderer_ (UnityEngine_GameObject_o* gameObject, System_String_o* name, const MethodInfo_2060410* method);
System_Collections_Generic_IEnumerable_SpringColliderSerialization_IColliderSerializer__o* UTJ_SpringColliderSerialization__SerializeColliderRecords (System_Collections_Generic_IEnumerable_TextRecordParsing_Record__o* sourceRecords, System_Collections_Generic_List_DynamicsSetup_ParseMessage__o* errorRecords, const MethodInfo* method);
System_Collections_Generic_IEnumerable_SpringColliderSerialization_TransformSerializer__o* UTJ_SpringColliderSerialization__SerializeTransformRecords (System_Collections_Generic_IEnumerable_TextRecordParsing_Record__o* sourceRecords, System_Collections_Generic_List_DynamicsSetup_ParseMessage__o* errorRecords, const MethodInfo* method);
bool UTJ_SpringColliderSerialization__VerifyTransformRecord (UTJ_SpringColliderSerialization_TransformSerializer_o* transformSerializer, System_Collections_Generic_IEnumerable_string__o* validParentNames, UTJ_DynamicsSetup_ParseMessage_o** error, const MethodInfo* method);
bool UTJ_SpringColliderSerialization__VerifyTransformRecords (System_Collections_Generic_IEnumerable_SpringColliderSerialization_TransformSerializer__o* sourceRecords, System_Collections_Generic_IEnumerable_string__o* validParentNames, System_Collections_Generic_List_SpringColliderSerialization_TransformSerializer__o* validRecords, System_Collections_Generic_List_DynamicsSetup_ParseMessage__o* errors, const MethodInfo* method);
bool UTJ_SpringColliderSerialization__VerifyColliderRecords (System_Collections_Generic_IEnumerable_SpringColliderSerialization_IColliderSerializer__o* colliderRecords, UnityEngine_GameObject_o* rootObject, System_Collections_Generic_IEnumerable_string__o* validParentNames, System_Collections_Generic_List_SpringColliderSerialization_IColliderSerializer__o* validRecords, System_Collections_Generic_List_DynamicsSetup_ParseMessage__o* errors, const MethodInfo* method);
UnityEngine_GameObject_o* UTJ_SpringColliderSerialization__BuildTransformFromRecord (System_Collections_Generic_Dictionary_string__Transform__o* objectMap, UTJ_SpringColliderSerialization_TransformSerializer_o* serializer, const MethodInfo* method);
bool UTJ_SpringColliderSerialization__BuildColliderFromRecord (System_Collections_Generic_Dictionary_string__Transform__o* objectMap, UTJ_SpringColliderSerialization_IColliderSerializer_o* colliderSerializer, const MethodInfo* method);
void UTJ_SpringColliderSerialization__BuildDynamicsNulls (System_Collections_Generic_Dictionary_string__Transform__o* objectMap, System_Collections_Generic_IEnumerable_SpringColliderSerialization_TransformSerializer__o* records, const MethodInfo* method);
void UTJ_SpringColliderSerialization__BuildComponents (System_Collections_Generic_Dictionary_string__Transform__o* objectMap, System_Collections_Generic_IEnumerable_TextRecordParsing_Record__o* records, const MethodInfo* method);
