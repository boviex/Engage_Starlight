#pragma once

#include "il2cpp.h"

System_String_o* Combat_SkillStack__get_DebuggerDisplay (Combat_SkillStack_o* __this, const MethodInfo* method);
System_Collections_Generic_IEnumerator_SkillStack_Packet__o* Combat_SkillStack__GetEnumerator (Combat_SkillStack_o* __this, const MethodInfo* method);
int32_t Combat_SkillStack__Damages (Combat_SkillStack_o* __this, int32_t side, const MethodInfo* method);
bool Combat_SkillStack__HasDamage (Combat_SkillStack_o* __this, const MethodInfo* method);
void Combat_SkillStack__PushSkill (Combat_SkillStack_o* __this, App_SkillData_o* data, int32_t fromSide, int32_t toSide, int32_t plDamage, int32_t enDamage, const MethodInfo* method);
void Combat_SkillStack__ClearDamages (Combat_SkillStack_o* __this, const MethodInfo* method);
Combat_SkillStack_o* Combat_SkillStack__CloneAndClearIfNotNull (Combat_SkillStack_o* __this, const MethodInfo* method);
Combat_Phase_o* Combat_SkillStack__CreatePhaseForPopup (Combat_SkillStack_o* __this, Combat_Phase_o* src, const MethodInfo* method);
void Combat_SkillStack__PreloadForAssetLoader (Combat_SkillStack_o* __this, const MethodInfo* method);
float Combat_SkillStack__CalcFreezeDuration (Combat_SkillStack_o* __this, const MethodInfo* method);
void Combat_SkillStack___ctor (Combat_SkillStack_o* __this, const MethodInfo* method);
