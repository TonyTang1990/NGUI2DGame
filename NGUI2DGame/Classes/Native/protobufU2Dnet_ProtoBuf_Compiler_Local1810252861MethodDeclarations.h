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

// ProtoBuf.Compiler.Local
struct Local_t1810252861;
// System.Type
struct Type_t;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t2116499186;
// ProtoBuf.Compiler.CompilerContext
struct CompilerContext_t2783612406;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_LocalBuilder2116499186.h"
#include "mscorlib_System_Type1303803226.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CompilerContext2783612406.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_Local1810252861.h"

// System.Type ProtoBuf.Compiler.Local::get_Type()
extern "C"  Type_t * Local_get_Type_m3635402794 (Local_t1810252861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Compiler.Local ProtoBuf.Compiler.Local::AsCopy()
extern "C"  Local_t1810252861 * Local_AsCopy_m2417600356 (Local_t1810252861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder ProtoBuf.Compiler.Local::get_Value()
extern "C"  LocalBuilder_t2116499186 * Local_get_Value_m1042640699 (Local_t1810252861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.Local::Dispose()
extern "C"  void Local_Dispose_m1378489112 (Local_t1810252861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.Local::.ctor(System.Reflection.Emit.LocalBuilder,System.Type)
extern "C"  void Local__ctor_m2859524733 (Local_t1810252861 * __this, LocalBuilder_t2116499186 * ___value0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.Local::.ctor(ProtoBuf.Compiler.CompilerContext,System.Type)
extern "C"  void Local__ctor_m2195326086 (Local_t1810252861 * __this, CompilerContext_t2783612406 * ___ctx0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Compiler.Local::IsSame(ProtoBuf.Compiler.Local)
extern "C"  bool Local_IsSame_m1312834734 (Local_t1810252861 * __this, Local_t1810252861 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
