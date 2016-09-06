#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ProtoBuf.Meta.TypeFormatEventArgs
struct TypeFormatEventArgs_t4044138402;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"

// System.Type ProtoBuf.Meta.TypeFormatEventArgs::get_Type()
extern "C"  Type_t * TypeFormatEventArgs_get_Type_m2114439329 (TypeFormatEventArgs_t4044138402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.Meta.TypeFormatEventArgs::get_FormattedName()
extern "C"  String_t* TypeFormatEventArgs_get_FormattedName_m2339650093 (TypeFormatEventArgs_t4044138402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeFormatEventArgs::.ctor(System.String)
extern "C"  void TypeFormatEventArgs__ctor_m1747433734 (TypeFormatEventArgs_t4044138402 * __this, String_t* ___formattedName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeFormatEventArgs::.ctor(System.Type)
extern "C"  void TypeFormatEventArgs__ctor_m586430767 (TypeFormatEventArgs_t4044138402 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
