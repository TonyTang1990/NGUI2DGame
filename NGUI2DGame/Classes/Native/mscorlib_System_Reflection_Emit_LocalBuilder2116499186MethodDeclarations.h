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

// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t2116499186;
// System.Type
struct Type_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t99948092;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator99948092.h"

// System.Void System.Reflection.Emit.LocalBuilder::.ctor(System.Type,System.Reflection.Emit.ILGenerator)
extern "C"  void LocalBuilder__ctor_m4116797581 (LocalBuilder_t2116499186 * __this, Type_t * ___t0, ILGenerator_t99948092 * ___ilgen1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.LocalBuilder::get_LocalType()
extern "C"  Type_t * LocalBuilder_get_LocalType_m3854069765 (LocalBuilder_t2116499186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.LocalBuilder::get_LocalIndex()
extern "C"  int32_t LocalBuilder_get_LocalIndex_m1519477457 (LocalBuilder_t2116499186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
