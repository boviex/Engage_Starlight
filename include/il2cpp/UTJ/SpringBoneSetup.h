#pragma once

#include "il2cpp.h"

void UTJ_SpringBoneSetup__DestroyUnityObject (UnityEngine_Object_o* objectToDestroy, const MethodInfo* method);
System_String_o* UTJ_SpringBoneSetup__GetAutoSaveDirectory (const MethodInfo* method);
System_String_o* UTJ_SpringBoneSetup__GetAutoSavePath (System_String_o* rootObjectName, const MethodInfo* method);
void UTJ_SpringBoneSetup__AutoLoad (UTJ_SpringManager_o* springManager, const MethodInfo* method);
void UTJ_SpringBoneSetup__AutoSave (UTJ_SpringManager_o* springManager, const MethodInfo* method);
void UTJ_SpringBoneSetup__DestroySpringManagersAndBones (UnityEngine_GameObject_o* rootObject, const MethodInfo* method);
void UTJ_SpringBoneSetup__FindAndAssignSpringBones (UTJ_SpringManager_o* springManager, bool includeInactive, const MethodInfo* method);
void UTJ_SpringBoneSetup__AssignSpringBonesRecursively (UnityEngine_Transform_o* rootObject, const MethodInfo* method);
System_Collections_Generic_Dictionary_Transform__List_SpringBone___o* UTJ_SpringBoneSetup__GetPivotToSpringBoneMap (UnityEngine_GameObject_o* rootObject, const MethodInfo* method);
void UTJ_SpringBoneSetup__FixAllPivotNodePositions (UnityEngine_GameObject_o* rootObject, const MethodInfo* method);
UnityEngine_GameObject_o* UTJ_SpringBoneSetup__CreateSpringPivotNode (UTJ_SpringBone_o* springBone, const MethodInfo* method);
bool UTJ_SpringBoneSetup__IsPivotProbablySafeToDestroy (UnityEngine_Transform_o* pivot, System_Collections_Generic_IEnumerable_Transform__o* skinBones, const MethodInfo* method);
void UTJ_SpringBoneSetup__DestroyPivotObjects (UnityEngine_GameObject_o* rootObject, const MethodInfo* method);
bool UTJ_SpringBoneSetup__IsPivotSideDirectionValid (UnityEngine_Vector3_o lookDirection, UnityEngine_Vector3_o sideDirection, const MethodInfo* method);
UnityEngine_Vector3_o UTJ_SpringBoneSetup__FindClosestMeshNormalToPoint (UnityEngine_Transform_o* rootObject, UnityEngine_Vector3_o sourcePoint, const MethodInfo* method);
bool UTJ_SpringBoneSetup__TryToGetPivotSideDirection (UTJ_SpringBone_o* springBone, UnityEngine_Vector3_o lookDirection, UnityEngine_Vector3_o* sideDirection, const MethodInfo* method);
UnityEngine_Quaternion_o UTJ_SpringBoneSetup__GetPivotRotation (UTJ_SpringBone_o* springBone, const MethodInfo* method);
System_Collections_Generic_List_SpringBone__o* UTJ_SpringBoneSetup__GetSpringBonesSortedByDepth (UnityEngine_GameObject_o* rootObject, bool includeInactive, const MethodInfo* method);
