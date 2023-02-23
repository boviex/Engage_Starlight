#pragma once

#include "il2cpp.h"

void UnityEngine_Rendering_DebugManager__RegisterActions (UnityEngine_Rendering_DebugManager_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__AddAction (UnityEngine_Rendering_DebugManager_o* __this, int32_t action, UnityEngine_Rendering_DebugActionDesc_o* desc, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__SampleAction (UnityEngine_Rendering_DebugManager_o* __this, int32_t actionIndex, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__UpdateAction (UnityEngine_Rendering_DebugManager_o* __this, int32_t actionIndex, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__UpdateActions (UnityEngine_Rendering_DebugManager_o* __this, const MethodInfo* method);
float UnityEngine_Rendering_DebugManager__GetAction (UnityEngine_Rendering_DebugManager_o* __this, int32_t action, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__RegisterInputs (UnityEngine_Rendering_DebugManager_o* __this, const MethodInfo* method);
UnityEngine_Rendering_DebugManager_o* UnityEngine_Rendering_DebugManager__get_instance (const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__UpdateReadOnlyCollection (UnityEngine_Rendering_DebugManager_o* __this, const MethodInfo* method);
System_Collections_ObjectModel_ReadOnlyCollection_DebugUI_Panel__o* UnityEngine_Rendering_DebugManager__get_panels (UnityEngine_Rendering_DebugManager_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__add_onDisplayRuntimeUIChanged (UnityEngine_Rendering_DebugManager_o* __this, System_Action_bool__o* value, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__remove_onDisplayRuntimeUIChanged (UnityEngine_Rendering_DebugManager_o* __this, System_Action_bool__o* value, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__add_onSetDirty (UnityEngine_Rendering_DebugManager_o* __this, System_Action_o* value, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__remove_onSetDirty (UnityEngine_Rendering_DebugManager_o* __this, System_Action_o* value, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__add_resetData (UnityEngine_Rendering_DebugManager_o* __this, System_Action_o* value, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__remove_resetData (UnityEngine_Rendering_DebugManager_o* __this, System_Action_o* value, const MethodInfo* method);
bool UnityEngine_Rendering_DebugManager__get_displayEditorUI (UnityEngine_Rendering_DebugManager_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__ToggleEditorUI (UnityEngine_Rendering_DebugManager_o* __this, bool open, const MethodInfo* method);
bool UnityEngine_Rendering_DebugManager__get_displayRuntimeUI (UnityEngine_Rendering_DebugManager_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__set_displayRuntimeUI (UnityEngine_Rendering_DebugManager_o* __this, bool value, const MethodInfo* method);
bool UnityEngine_Rendering_DebugManager__get_displayPersistentRuntimeUI (UnityEngine_Rendering_DebugManager_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__set_displayPersistentRuntimeUI (UnityEngine_Rendering_DebugManager_o* __this, bool value, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager___ctor (UnityEngine_Rendering_DebugManager_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__RefreshEditor (UnityEngine_Rendering_DebugManager_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__Reset (UnityEngine_Rendering_DebugManager_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__ReDrawOnScreenDebug (UnityEngine_Rendering_DebugManager_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__RegisterData (UnityEngine_Rendering_DebugManager_o* __this, UnityEngine_Rendering_IDebugData_o* data, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__UnregisterData (UnityEngine_Rendering_DebugManager_o* __this, UnityEngine_Rendering_IDebugData_o* data, const MethodInfo* method);
int32_t UnityEngine_Rendering_DebugManager__GetState (UnityEngine_Rendering_DebugManager_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__RegisterRootCanvas (UnityEngine_Rendering_DebugManager_o* __this, UnityEngine_Rendering_UI_DebugUIHandlerCanvas_o* root, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__ChangeSelection (UnityEngine_Rendering_DebugManager_o* __this, UnityEngine_Rendering_UI_DebugUIHandlerWidget_o* widget, bool fromNext, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__CheckPersistentCanvas (UnityEngine_Rendering_DebugManager_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__TogglePersistent (UnityEngine_Rendering_DebugManager_o* __this, UnityEngine_Rendering_DebugUI_Widget_o* widget, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__OnPanelDirty (UnityEngine_Rendering_DebugManager_o* __this, UnityEngine_Rendering_DebugUI_Panel_o* panel, const MethodInfo* method);
UnityEngine_Rendering_DebugUI_Panel_o* UnityEngine_Rendering_DebugManager__GetPanel (UnityEngine_Rendering_DebugManager_o* __this, System_String_o* displayName, bool createIfNull, int32_t groupIndex, bool overrideIfExist, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__RemovePanel (UnityEngine_Rendering_DebugManager_o* __this, System_String_o* displayName, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager__RemovePanel (UnityEngine_Rendering_DebugManager_o* __this, UnityEngine_Rendering_DebugUI_Panel_o* panel, const MethodInfo* method);
UnityEngine_Rendering_DebugUI_Widget_o* UnityEngine_Rendering_DebugManager__GetItem (UnityEngine_Rendering_DebugManager_o* __this, System_String_o* queryPath, const MethodInfo* method);
UnityEngine_Rendering_DebugUI_Widget_o* UnityEngine_Rendering_DebugManager__GetItem (UnityEngine_Rendering_DebugManager_o* __this, System_String_o* queryPath, UnityEngine_Rendering_DebugUI_IContainer_o* container, const MethodInfo* method);
void UnityEngine_Rendering_DebugManager___cctor (const MethodInfo* method);
