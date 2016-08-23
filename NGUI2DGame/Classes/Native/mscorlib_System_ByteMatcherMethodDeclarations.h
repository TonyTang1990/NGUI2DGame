#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ByteMatcher
struct ByteMatcher_t2486;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Char[]
struct CharU5BU5D_t260;
// System.TermInfoStrings
#include "mscorlib_System_TermInfoStrings.h"

// System.Void System.ByteMatcher::.ctor()
extern "C" void ByteMatcher__ctor_m15229 (ByteMatcher_t2486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ByteMatcher::AddMapping(System.TermInfoStrings,System.Byte[])
extern "C" void ByteMatcher_AddMapping_m15230 (ByteMatcher_t2486 * __this, int32_t ___key, ByteU5BU5D_t159* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ByteMatcher::Sort()
extern "C" void ByteMatcher_Sort_m15231 (ByteMatcher_t2486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ByteMatcher::StartsWith(System.Int32)
extern "C" bool ByteMatcher_StartsWith_m15232 (ByteMatcher_t2486 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TermInfoStrings System.ByteMatcher::Match(System.Char[],System.Int32,System.Int32,System.Int32&)
extern "C" int32_t ByteMatcher_Match_m15233 (ByteMatcher_t2486 * __this, CharU5BU5D_t260* ___buffer, int32_t ___offset, int32_t ___length, int32_t* ___used, const MethodInfo* method) IL2CPP_METHOD_ATTR;
