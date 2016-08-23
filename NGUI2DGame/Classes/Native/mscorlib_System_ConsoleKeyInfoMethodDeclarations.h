#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ConsoleKeyInfo
struct ConsoleKeyInfo_t2433;
struct ConsoleKeyInfo_t2433_marshaled;
// System.Object
struct Object_t;
// System.ConsoleKey
#include "mscorlib_System_ConsoleKey.h"
// System.ConsoleKeyInfo
#include "mscorlib_System_ConsoleKeyInfo.h"

// System.Void System.ConsoleKeyInfo::.ctor(System.Char,System.ConsoleKey,System.Boolean,System.Boolean,System.Boolean)
extern "C" void ConsoleKeyInfo__ctor_m14586 (ConsoleKeyInfo_t2433 * __this, uint16_t ___keyChar, int32_t ___key, bool ___shift, bool ___alt, bool ___control, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleKeyInfo::.cctor()
extern "C" void ConsoleKeyInfo__cctor_m14587 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleKeyInfo::SetModifiers(System.Boolean,System.Boolean,System.Boolean)
extern "C" void ConsoleKeyInfo_SetModifiers_m14588 (ConsoleKeyInfo_t2433 * __this, bool ___shift, bool ___alt, bool ___control, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKey System.ConsoleKeyInfo::get_Key()
extern "C" int32_t ConsoleKeyInfo_get_Key_m14589 (ConsoleKeyInfo_t2433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.ConsoleKeyInfo::get_KeyChar()
extern "C" uint16_t ConsoleKeyInfo_get_KeyChar_m14590 (ConsoleKeyInfo_t2433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleKeyInfo::Equals(System.Object)
extern "C" bool ConsoleKeyInfo_Equals_m14591 (ConsoleKeyInfo_t2433 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleKeyInfo::Equals(System.ConsoleKeyInfo)
extern "C" bool ConsoleKeyInfo_Equals_m14592 (ConsoleKeyInfo_t2433 * __this, ConsoleKeyInfo_t2433  ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ConsoleKeyInfo::GetHashCode()
extern "C" int32_t ConsoleKeyInfo_GetHashCode_m14593 (ConsoleKeyInfo_t2433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void ConsoleKeyInfo_t2433_marshal(const ConsoleKeyInfo_t2433& unmarshaled, ConsoleKeyInfo_t2433_marshaled& marshaled);
void ConsoleKeyInfo_t2433_marshal_back(const ConsoleKeyInfo_t2433_marshaled& marshaled, ConsoleKeyInfo_t2433& unmarshaled);
void ConsoleKeyInfo_t2433_marshal_cleanup(ConsoleKeyInfo_t2433_marshaled& marshaled);
