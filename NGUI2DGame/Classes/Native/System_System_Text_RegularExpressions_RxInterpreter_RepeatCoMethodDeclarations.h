#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.RxInterpreter/RepeatContext
struct RepeatContext_t2179;

// System.Void System.Text.RegularExpressions.RxInterpreter/RepeatContext::.ctor(System.Text.RegularExpressions.RxInterpreter/RepeatContext,System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C" void RepeatContext__ctor_m12427 (RepeatContext_t2179 * __this, RepeatContext_t2179 * ___previous, int32_t ___min, int32_t ___max, bool ___lazy, int32_t ___expr_pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_Count()
extern "C" int32_t RepeatContext_get_Count_m12428 (RepeatContext_t2179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter/RepeatContext::set_Count(System.Int32)
extern "C" void RepeatContext_set_Count_m12429 (RepeatContext_t2179 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_Start()
extern "C" int32_t RepeatContext_get_Start_m12430 (RepeatContext_t2179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter/RepeatContext::set_Start(System.Int32)
extern "C" void RepeatContext_set_Start_m12431 (RepeatContext_t2179 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_IsMinimum()
extern "C" bool RepeatContext_get_IsMinimum_m12432 (RepeatContext_t2179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_IsMaximum()
extern "C" bool RepeatContext_get_IsMaximum_m12433 (RepeatContext_t2179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_IsLazy()
extern "C" bool RepeatContext_get_IsLazy_m12434 (RepeatContext_t2179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_Expression()
extern "C" int32_t RepeatContext_get_Expression_m12435 (RepeatContext_t2179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.RxInterpreter/RepeatContext System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_Previous()
extern "C" RepeatContext_t2179 * RepeatContext_get_Previous_m12436 (RepeatContext_t2179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
