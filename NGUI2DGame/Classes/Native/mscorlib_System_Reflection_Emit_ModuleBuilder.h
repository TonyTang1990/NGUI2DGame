﻿#pragma once
#include <stdint.h>
// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t2646;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t2622;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t2624;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.Int32[]
struct Int32U5BU5D_t1;
// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t2647;
// System.Diagnostics.SymbolStore.ISymbolWriter
struct ISymbolWriter_t2648;
// System.Char[]
struct CharU5BU5D_t260;
// System.Reflection.Module
#include "mscorlib_System_Reflection_Module.h"
// System.Reflection.Emit.ModuleBuilder
struct  ModuleBuilder_t2621  : public Module_t2595
{
	// System.Int32 System.Reflection.Emit.ModuleBuilder::num_types
	int32_t ___num_types_10;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.ModuleBuilder::types
	TypeBuilderU5BU5D_t2646* ___types_11;
	// System.Byte[] System.Reflection.Emit.ModuleBuilder::guid
	ByteU5BU5D_t159* ___guid_12;
	// System.Int32 System.Reflection.Emit.ModuleBuilder::table_idx
	int32_t ___table_idx_13;
	// System.Reflection.Emit.AssemblyBuilder System.Reflection.Emit.ModuleBuilder::assemblyb
	AssemblyBuilder_t2622 * ___assemblyb_14;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::global_type
	TypeBuilder_t2624 * ___global_type_15;
	// System.Collections.Hashtable System.Reflection.Emit.ModuleBuilder::name_cache
	Hashtable_t915 * ___name_cache_16;
	// System.Collections.Hashtable System.Reflection.Emit.ModuleBuilder::us_string_cache
	Hashtable_t915 * ___us_string_cache_17;
	// System.Int32[] System.Reflection.Emit.ModuleBuilder::table_indexes
	Int32U5BU5D_t1* ___table_indexes_18;
	// System.Boolean System.Reflection.Emit.ModuleBuilder::transient
	bool ___transient_19;
	// System.Reflection.Emit.ModuleBuilderTokenGenerator System.Reflection.Emit.ModuleBuilder::token_gen
	ModuleBuilderTokenGenerator_t2647 * ___token_gen_20;
	// System.Diagnostics.SymbolStore.ISymbolWriter System.Reflection.Emit.ModuleBuilder::symbolWriter
	Object_t * ___symbolWriter_21;
};
struct ModuleBuilder_t2621_StaticFields{
	// System.Char[] System.Reflection.Emit.ModuleBuilder::type_modifiers
	CharU5BU5D_t260* ___type_modifiers_22;
};
