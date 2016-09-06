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

// System.Reflection.Emit.ILExceptionInfo
struct ILExceptionInfo_t1490154598;
struct ILExceptionInfo_t1490154598_marshaled_pinvoke;
struct ILExceptionInfo_t1490154598_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_ILExceptionInfo1490154598.h"

// System.Void System.Reflection.Emit.ILExceptionInfo::AddFinally(System.Int32)
extern "C"  void ILExceptionInfo_AddFinally_m1054178804 (ILExceptionInfo_t1490154598 * __this, int32_t ___offset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILExceptionInfo::End(System.Int32)
extern "C"  void ILExceptionInfo_End_m998421447 (ILExceptionInfo_t1490154598 * __this, int32_t ___offset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILExceptionInfo::LastClauseType()
extern "C"  int32_t ILExceptionInfo_LastClauseType_m861653554 (ILExceptionInfo_t1490154598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILExceptionInfo::PatchFilterClause(System.Int32)
extern "C"  void ILExceptionInfo_PatchFilterClause_m3051291883 (ILExceptionInfo_t1490154598 * __this, int32_t ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILExceptionInfo::Debug(System.Int32)
extern "C"  void ILExceptionInfo_Debug_m2457146909 (ILExceptionInfo_t1490154598 * __this, int32_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILExceptionInfo::add_block(System.Int32)
extern "C"  void ILExceptionInfo_add_block_m160844183 (ILExceptionInfo_t1490154598 * __this, int32_t ___offset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ILExceptionInfo_t1490154598;
struct ILExceptionInfo_t1490154598_marshaled_pinvoke;

extern "C" void ILExceptionInfo_t1490154598_marshal_pinvoke(const ILExceptionInfo_t1490154598& unmarshaled, ILExceptionInfo_t1490154598_marshaled_pinvoke& marshaled);
extern "C" void ILExceptionInfo_t1490154598_marshal_pinvoke_back(const ILExceptionInfo_t1490154598_marshaled_pinvoke& marshaled, ILExceptionInfo_t1490154598& unmarshaled);
extern "C" void ILExceptionInfo_t1490154598_marshal_pinvoke_cleanup(ILExceptionInfo_t1490154598_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ILExceptionInfo_t1490154598;
struct ILExceptionInfo_t1490154598_marshaled_com;

extern "C" void ILExceptionInfo_t1490154598_marshal_com(const ILExceptionInfo_t1490154598& unmarshaled, ILExceptionInfo_t1490154598_marshaled_com& marshaled);
extern "C" void ILExceptionInfo_t1490154598_marshal_com_back(const ILExceptionInfo_t1490154598_marshaled_com& marshaled, ILExceptionInfo_t1490154598& unmarshaled);
extern "C" void ILExceptionInfo_t1490154598_marshal_com_cleanup(ILExceptionInfo_t1490154598_marshaled_com& marshaled);
