﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t2116499186;
// ProtoBuf.Compiler.CompilerContext
struct CompilerContext_t2783612406;
// System.Type
struct Type_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Compiler.Local
struct  Local_t1810252861  : public Il2CppObject
{
public:
	// System.Reflection.Emit.LocalBuilder ProtoBuf.Compiler.Local::value
	LocalBuilder_t2116499186 * ___value_0;
	// ProtoBuf.Compiler.CompilerContext ProtoBuf.Compiler.Local::ctx
	CompilerContext_t2783612406 * ___ctx_1;
	// System.Type ProtoBuf.Compiler.Local::type
	Type_t * ___type_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Local_t1810252861, ___value_0)); }
	inline LocalBuilder_t2116499186 * get_value_0() const { return ___value_0; }
	inline LocalBuilder_t2116499186 ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(LocalBuilder_t2116499186 * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier(&___value_0, value);
	}

	inline static int32_t get_offset_of_ctx_1() { return static_cast<int32_t>(offsetof(Local_t1810252861, ___ctx_1)); }
	inline CompilerContext_t2783612406 * get_ctx_1() const { return ___ctx_1; }
	inline CompilerContext_t2783612406 ** get_address_of_ctx_1() { return &___ctx_1; }
	inline void set_ctx_1(CompilerContext_t2783612406 * value)
	{
		___ctx_1 = value;
		Il2CppCodeGenWriteBarrier(&___ctx_1, value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(Local_t1810252861, ___type_2)); }
	inline Type_t * get_type_2() const { return ___type_2; }
	inline Type_t ** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(Type_t * value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier(&___type_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
