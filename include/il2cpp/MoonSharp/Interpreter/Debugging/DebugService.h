#pragma once

#include "il2cpp.h"

void MoonSharp_Interpreter_Debugging_DebugService___ctor (MoonSharp_Interpreter_Debugging_DebugService_o* __this, MoonSharp_Interpreter_Script_o* script, MoonSharp_Interpreter_Execution_VM_Processor_o* processor, const MethodInfo* method);
MoonSharp_Interpreter_Script_o* MoonSharp_Interpreter_Debugging_DebugService__get_OwnerScript (MoonSharp_Interpreter_Debugging_DebugService_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Debugging_DebugService__set_OwnerScript (MoonSharp_Interpreter_Debugging_DebugService_o* __this, MoonSharp_Interpreter_Script_o* value, const MethodInfo* method);
System_Collections_Generic_HashSet_int__o* MoonSharp_Interpreter_Debugging_DebugService__ResetBreakPoints (MoonSharp_Interpreter_Debugging_DebugService_o* __this, MoonSharp_Interpreter_Debugging_SourceCode_o* src, System_Collections_Generic_HashSet_int__o* lines, const MethodInfo* method);