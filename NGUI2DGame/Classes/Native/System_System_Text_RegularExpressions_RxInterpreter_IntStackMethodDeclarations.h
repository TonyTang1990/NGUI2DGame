#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.RxInterpreter/IntStack
struct IntStack_t2178;
struct IntStack_t2178_marshaled;

// System.Int32 System.Text.RegularExpressions.RxInterpreter/IntStack::Pop()
extern "C" int32_t IntStack_Pop_m12423 (IntStack_t2178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter/IntStack::Push(System.Int32)
extern "C" void IntStack_Push_m12424 (IntStack_t2178 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter/IntStack::get_Count()
extern "C" int32_t IntStack_get_Count_m12425 (IntStack_t2178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter/IntStack::set_Count(System.Int32)
extern "C" void IntStack_set_Count_m12426 (IntStack_t2178 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void IntStack_t2178_marshal(const IntStack_t2178& unmarshaled, IntStack_t2178_marshaled& marshaled);
void IntStack_t2178_marshal_back(const IntStack_t2178_marshaled& marshaled, IntStack_t2178& unmarshaled);
void IntStack_t2178_marshal_cleanup(IntStack_t2178_marshaled& marshaled);
