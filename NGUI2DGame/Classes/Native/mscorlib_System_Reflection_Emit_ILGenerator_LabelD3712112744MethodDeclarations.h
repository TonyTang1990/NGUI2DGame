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

// System.Reflection.Emit.ILGenerator/LabelData
struct LabelData_t3712112744;
struct LabelData_t3712112744_marshaled_pinvoke;
struct LabelData_t3712112744_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelD3712112744.h"

// System.Void System.Reflection.Emit.ILGenerator/LabelData::.ctor(System.Int32,System.Int32)
extern "C"  void LabelData__ctor_m3776946800 (LabelData_t3712112744 * __this, int32_t ___addr0, int32_t ___maxStack1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct LabelData_t3712112744;
struct LabelData_t3712112744_marshaled_pinvoke;

extern "C" void LabelData_t3712112744_marshal_pinvoke(const LabelData_t3712112744& unmarshaled, LabelData_t3712112744_marshaled_pinvoke& marshaled);
extern "C" void LabelData_t3712112744_marshal_pinvoke_back(const LabelData_t3712112744_marshaled_pinvoke& marshaled, LabelData_t3712112744& unmarshaled);
extern "C" void LabelData_t3712112744_marshal_pinvoke_cleanup(LabelData_t3712112744_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct LabelData_t3712112744;
struct LabelData_t3712112744_marshaled_com;

extern "C" void LabelData_t3712112744_marshal_com(const LabelData_t3712112744& unmarshaled, LabelData_t3712112744_marshaled_com& marshaled);
extern "C" void LabelData_t3712112744_marshal_com_back(const LabelData_t3712112744_marshaled_com& marshaled, LabelData_t3712112744& unmarshaled);
extern "C" void LabelData_t3712112744_marshal_com_cleanup(LabelData_t3712112744_marshaled_com& marshaled);
