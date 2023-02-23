#pragma once

#include "il2cpp.h"

bool Combat_CameraPositionData__get_IsReverse (Combat_CameraPositionData_o* __this, const MethodInfo* method);
void Combat_CameraPositionData__set_IsReverse (Combat_CameraPositionData_o* __this, bool value, const MethodInfo* method);
UnityEngine_Vector3_o Combat_CameraPositionData__get_BattleCenter (Combat_CameraPositionData_o* __this, const MethodInfo* method);
void Combat_CameraPositionData__set_BattleCenter (Combat_CameraPositionData_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Vector3_o Combat_CameraPositionData__get_BattleVector (Combat_CameraPositionData_o* __this, const MethodInfo* method);
void Combat_CameraPositionData__set_BattleVector (Combat_CameraPositionData_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Vector3_o Combat_CameraPositionData__get_BattleNormalVector (Combat_CameraPositionData_o* __this, const MethodInfo* method);
void Combat_CameraPositionData__set_BattleNormalVector (Combat_CameraPositionData_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
float Combat_CameraPositionData__get_BattleDistance (Combat_CameraPositionData_o* __this, const MethodInfo* method);
void Combat_CameraPositionData__set_BattleDistance (Combat_CameraPositionData_o* __this, float value, const MethodInfo* method);
UnityEngine_Vector3_array* Combat_CameraPositionData__get_BasePosition (Combat_CameraPositionData_o* __this, const MethodInfo* method);
void Combat_CameraPositionData__set_BasePosition (Combat_CameraPositionData_o* __this, UnityEngine_Vector3_array* value, const MethodInfo* method);
Combat_Character_array* Combat_CameraPositionData__get_CharaArray (Combat_CameraPositionData_o* __this, const MethodInfo* method);
void Combat_CameraPositionData__set_CharaArray (Combat_CameraPositionData_o* __this, Combat_Character_array* value, const MethodInfo* method);
System_Single_array* Combat_CameraPositionData__get_m_DeadHeight (Combat_CameraPositionData_o* __this, const MethodInfo* method);
void Combat_CameraPositionData__set_m_DeadHeight (Combat_CameraPositionData_o* __this, System_Single_array* value, const MethodInfo* method);
System_Single_array* Combat_CameraPositionData__get_UnitTall (Combat_CameraPositionData_o* __this, const MethodInfo* method);
void Combat_CameraPositionData__set_UnitTall (Combat_CameraPositionData_o* __this, System_Single_array* value, const MethodInfo* method);
Combat_CharacterJoint_array* Combat_CameraPositionData__get_JointList (Combat_CameraPositionData_o* __this, const MethodInfo* method);
void Combat_CameraPositionData__set_JointList (Combat_CameraPositionData_o* __this, Combat_CharacterJoint_array* value, const MethodInfo* method);
System_Boolean_array* Combat_CameraPositionData__get_IsBeforeDragonChange (Combat_CameraPositionData_o* __this, const MethodInfo* method);
void Combat_CameraPositionData__set_IsBeforeDragonChange (Combat_CameraPositionData_o* __this, System_Boolean_array* value, const MethodInfo* method);
bool Combat_CameraPositionData__get_IsInitialized (Combat_CameraPositionData_o* __this, const MethodInfo* method);
bool Combat_CameraPositionData__get_IsCharacterLoadFinished (Combat_CameraPositionData_o* __this, const MethodInfo* method);
void Combat_CameraPositionData__LateUpdate (Combat_CameraPositionData_o* __this, const MethodInfo* method);
void Combat_CameraPositionData__UpdateImpl (Combat_CameraPositionData_o* __this, const MethodInfo* method);
void Combat_CameraPositionData__Initialize (Combat_CameraPositionData_o* __this, Combat_CombatRecord_o* record, const MethodInfo* method);
void Combat_CameraPositionData__Initialize (Combat_CameraPositionData_o* __this, Combat_Character_array* chara, const MethodInfo* method);
UnityEngine_Vector3_o Combat_CameraPositionData__GetCenter (Combat_CameraPositionData_o* __this, int32_t side, const MethodInfo* method);
float Combat_CameraPositionData__GeTall (Combat_CameraPositionData_o* __this, int32_t side, const MethodInfo* method);
void Combat_CameraPositionData__LoadTall (Combat_CameraPositionData_o* __this, Combat_CombatRecord_o* record, const MethodInfo* method);
void Combat_CameraPositionData__LoadTall (Combat_CameraPositionData_o* __this, Combat_Character_array* charaArray, const MethodInfo* method);
void Combat_CameraPositionData__LoadJoint (Combat_CameraPositionData_o* __this, const MethodInfo* method);
void Combat_CameraPositionData__CulculateInfo (Combat_CameraPositionData_o* __this, bool isInitialize, Combat_CombatRecord_o* record, const MethodInfo* method);
UnityEngine_Vector3_o Combat_CameraPositionData__GetJointPos (Combat_CameraPositionData_o* __this, int32_t side, int32_t target, const MethodInfo* method);
UnityEngine_Transform_o* Combat_CameraPositionData__GetJoint (Combat_CameraPositionData_o* __this, int32_t side, int32_t t, const MethodInfo* method);
System_Collections_Generic_List_Vector3__array* Combat_CameraPositionData__get_LookAtStacks (Combat_CameraPositionData_o* __this, const MethodInfo* method);
UnityEngine_LineRenderer_array* Combat_CameraPositionData__get_Lines (Combat_CameraPositionData_o* __this, const MethodInfo* method);
void Combat_CameraPositionData___ctor (Combat_CameraPositionData_o* __this, const MethodInfo* method);
