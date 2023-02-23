#pragma once

#include "il2cpp.h"

Combat_Character_o* App_Talk3D_CharacterFactoryAsync__CreateForTalk (System_String_o* pid, System_String_o* pidForCreate, UnityEngine_GameObject_o* locator, bool useTalkController, const MethodInfo* method);
Combat_Character_o* App_Talk3D_CharacterFactoryAsync__CreateForTalk (App_Unit_o* unit, UnityEngine_GameObject_o* locator, bool useTalkController, const MethodInfo* method);
Combat_Character_o* App_Talk3D_CharacterFactoryAsync__CreateForTalk (App_GodUnit_o* godUnit, UnityEngine_GameObject_o* locator, bool useTalkController, const MethodInfo* method);
Combat_Character_o* App_Talk3D_CharacterFactoryAsync__CreateForUnitInfo (App_Unit_o* unit, UnityEngine_GameObject_o* locator, const MethodInfo* method);
Combat_Character_o* App_Talk3D_CharacterFactoryAsync__CreateForUnitInfo (App_GodUnit_o* god, UnityEngine_GameObject_o* locator, const MethodInfo* method);
Combat_Character_o* App_Talk3D_CharacterFactoryAsync__CreateForUnitHub (App_Unit_o* unit, UnityEngine_GameObject_o* locator, const MethodInfo* method);
Combat_Character_o* App_Talk3D_CharacterFactoryAsync__CreateForUnitRelay (UnityEngine_GameObject_o* locator, App_PersonData_o* person, App_JobData_o* job, App_UnitEdit_o* edit, const MethodInfo* method);
Combat_Character_o* App_Talk3D_CharacterFactoryAsync__CreateForRingCleaning (App_Unit_o* unit, UnityEngine_GameObject_o* locator, const MethodInfo* method);
Combat_Character_o* App_Talk3D_CharacterFactoryAsync__CreateForRingCleaning (App_GodUnit_o* godUnit, UnityEngine_GameObject_o* locator, const MethodInfo* method);
Combat_Character_o* App_Talk3D_CharacterFactoryAsync__CreateCommon (App_AssetTable_Result_o* result, System_String_o* pid, UnityEngine_GameObject_o* locator, bool useTalkController, bool invisible, bool isEngage, const MethodInfo* method);
void App_Talk3D_CharacterFactoryAsync__SetupLookAt (Combat_Character_o* chara, UnityEngine_GameObject_o* locator, const MethodInfo* method);
void App_Talk3D_CharacterFactoryAsync__Delete (UnityEngine_GameObject_o* locator, const MethodInfo* method);
void App_Talk3D_CharacterFactoryAsync___ctor (App_Talk3D_CharacterFactoryAsync_o* __this, const MethodInfo* method);
