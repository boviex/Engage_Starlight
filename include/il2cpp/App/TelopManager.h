#pragma once

#include "il2cpp.h"

App_ResourceObject_o* App_TelopManager__CreateBindImpl (App_TelopManager_o* __this, App_ProcInst_o* super, System_String_o* path, const MethodInfo* method);
App_ResourceObject_o* App_TelopManager__CreateBind (App_ProcInst_o* super, System_String_o* name, const MethodInfo* method);
void App_TelopManager__TrySetText (UnityEngine_GameObject_o* rootObject, System_String_o* objectName, System_String_o* text, const MethodInfo* method);
void App_TelopManager__TrySetText (UnityEngine_GameObject_o* rootObject, System_String_o* text, const MethodInfo* method);
void App_TelopManager__TrySetText (UnityEngine_GameObject_o* rootObject, System_String_o* objectName, int32_t value, const MethodInfo* method);
void App_TelopManager__TrySetTextColor (UnityEngine_GameObject_o* rootObject, System_String_o* objectName, UnityEngine_Color_o color, const MethodInfo* method);
void App_TelopManager__TrySetTextOutlineColor (UnityEngine_GameObject_o* rootObject, System_String_o* objectName, UnityEngine_Color_o color, const MethodInfo* method);
void App_TelopManager__TrySetImageSprite (UnityEngine_GameObject_o* rootObject, System_String_o* objectName, UnityEngine_Sprite_o* sprite, const MethodInfo* method);
void App_TelopManager__TrySetImageColor (UnityEngine_GameObject_o* rootObject, System_String_o* objectName, UnityEngine_Color_o color, const MethodInfo* method);
void App_TelopManager__CreatePurpose (App_ProcInst_o* parent, System_String_o* textWin, System_String_o* textLose, const MethodInfo* method);
void App_TelopManager__CreatePhaseChange (App_ProcInst_o* super, int32_t forceType, int32_t nowTurn, int32_t limitTurn, const MethodInfo* method);
System_Collections_IEnumerator_o* App_TelopManager__Coroutine (UnityEngine_GameObject_o* go, const MethodInfo* method);
void App_TelopManager__CreateComplete (App_ProcInst_o* super, const MethodInfo* method);
void App_TelopManager__CreateGameOver (App_ProcInst_o* super, const MethodInfo* method);
void App_TelopManager__CreateLevelUp (App_ProcInst_o* super, int32_t level, int32_t nextLevel, App_Unit_o* unit, bool isShowCharaImage, const MethodInfo* method);
void App_TelopManager__CreateBondLevelUp (App_ProcInst_o* super, App_Unit_o* unit, App_GodUnit_o* god, int32_t level, int32_t nextLevel, App_GodData_o* godData, const MethodInfo* method);
System_String_o* App_TelopManager__GetBondLevelFacePath (App_Unit_o* unit, const MethodInfo* method);
System_String_o* App_TelopManager__GetBondLevelFacePath (App_GodUnit_o* god, const MethodInfo* method);
System_String_o* App_TelopManager__GetBondLevelFacePath (App_GodData_o* data, const MethodInfo* method);
void App_TelopManager__CreateClassChange (App_ProcInst_o* super, App_JobData_o* before, App_JobData_o* after, const MethodInfo* method);
void App_TelopManager__CreateEngage (App_ProcInst_o* super, const MethodInfo* method);
void App_TelopManager__CreateChapterTitle (App_ProcInst_o* super, App_ChapterData_o* chapter, const MethodInfo* method);
void App_TelopManager__CreateNationLevelUp (App_ProcInst_o* super, App_HubNationData_o* nationData, int32_t level, int32_t nextLevel, App_ResourceObject_Callback_o* endCallback, const MethodInfo* method);
void App_TelopManager__CreateRelayResult (App_ProcInst_o* super, System_String_array* raids, bool isAwarded, const MethodInfo* method);
void App_TelopManager___ctor (App_TelopManager_o* __this, const MethodInfo* method);
void App_TelopManager___cctor (const MethodInfo* method);
