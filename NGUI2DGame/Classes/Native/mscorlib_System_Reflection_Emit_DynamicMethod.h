﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t570;
// System.Reflection.Module
struct Module_t2595;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t2219;
// System.Object[]
struct ObjectU5BU5D_t300;
// System.Delegate
struct Delegate_t314;
// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t2625;
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.Emit.DynamicMethod
struct  DynamicMethod_t2220  : public MethodInfo_t
{
	// System.RuntimeMethodHandle System.Reflection.Emit.DynamicMethod::mhandle
	RuntimeMethodHandle_t2480  ___mhandle_0;
	// System.String System.Reflection.Emit.DynamicMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.Emit.DynamicMethod::returnType
	Type_t * ___returnType_2;
	// System.Type[] System.Reflection.Emit.DynamicMethod::parameters
	TypeU5BU5D_t570* ___parameters_3;
	// System.Reflection.MethodAttributes System.Reflection.Emit.DynamicMethod::attributes
	int32_t ___attributes_4;
	// System.Reflection.CallingConventions System.Reflection.Emit.DynamicMethod::callingConvention
	int32_t ___callingConvention_5;
	// System.Reflection.Module System.Reflection.Emit.DynamicMethod::module
	Module_t2595 * ___module_6;
	// System.Boolean System.Reflection.Emit.DynamicMethod::skipVisibility
	bool ___skipVisibility_7;
	// System.Boolean System.Reflection.Emit.DynamicMethod::init_locals
	bool ___init_locals_8;
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::ilgen
	ILGenerator_t2219 * ___ilgen_9;
	// System.Int32 System.Reflection.Emit.DynamicMethod::nrefs
	int32_t ___nrefs_10;
	// System.Object[] System.Reflection.Emit.DynamicMethod::refs
	ObjectU5BU5D_t300* ___refs_11;
	// System.Type System.Reflection.Emit.DynamicMethod::owner
	Type_t * ___owner_12;
	// System.Delegate System.Reflection.Emit.DynamicMethod::deleg
	Delegate_t314 * ___deleg_13;
	// System.Reflection.MonoMethod System.Reflection.Emit.DynamicMethod::method
	MonoMethod_t * ___method_14;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.DynamicMethod::pinfo
	ParameterBuilderU5BU5D_t2625* ___pinfo_15;
	// System.Boolean System.Reflection.Emit.DynamicMethod::creating
	bool ___creating_16;
};
