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

// System.Reflection.LocalVariableInfo
struct LocalVariableInfo_t1749284021;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.LocalVariableInfo::.ctor()
extern "C"  void LocalVariableInfo__ctor_m3820017879 (LocalVariableInfo_t1749284021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.LocalVariableInfo::get_LocalIndex()
extern "C"  int32_t LocalVariableInfo_get_LocalIndex_m782230807 (LocalVariableInfo_t1749284021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.LocalVariableInfo::get_LocalType()
extern "C"  Type_t * LocalVariableInfo_get_LocalType_m454236095 (LocalVariableInfo_t1749284021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.LocalVariableInfo::ToString()
extern "C"  String_t* LocalVariableInfo_ToString_m1995184630 (LocalVariableInfo_t1749284021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
