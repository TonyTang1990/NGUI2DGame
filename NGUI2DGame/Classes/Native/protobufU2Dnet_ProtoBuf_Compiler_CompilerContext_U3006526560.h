#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProtoBuf.Compiler.Local
struct Local_t1810252861;
// ProtoBuf.Compiler.CompilerContext
struct CompilerContext_t2783612406;

#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CodeLabel2154222491.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Compiler.CompilerContext/UsingBlock
struct  UsingBlock_t3006526560  : public Il2CppObject
{
public:
	// ProtoBuf.Compiler.Local ProtoBuf.Compiler.CompilerContext/UsingBlock::local
	Local_t1810252861 * ___local_0;
	// ProtoBuf.Compiler.CompilerContext ProtoBuf.Compiler.CompilerContext/UsingBlock::ctx
	CompilerContext_t2783612406 * ___ctx_1;
	// ProtoBuf.Compiler.CodeLabel ProtoBuf.Compiler.CompilerContext/UsingBlock::label
	CodeLabel_t2154222491  ___label_2;

public:
	inline static int32_t get_offset_of_local_0() { return static_cast<int32_t>(offsetof(UsingBlock_t3006526560, ___local_0)); }
	inline Local_t1810252861 * get_local_0() const { return ___local_0; }
	inline Local_t1810252861 ** get_address_of_local_0() { return &___local_0; }
	inline void set_local_0(Local_t1810252861 * value)
	{
		___local_0 = value;
		Il2CppCodeGenWriteBarrier(&___local_0, value);
	}

	inline static int32_t get_offset_of_ctx_1() { return static_cast<int32_t>(offsetof(UsingBlock_t3006526560, ___ctx_1)); }
	inline CompilerContext_t2783612406 * get_ctx_1() const { return ___ctx_1; }
	inline CompilerContext_t2783612406 ** get_address_of_ctx_1() { return &___ctx_1; }
	inline void set_ctx_1(CompilerContext_t2783612406 * value)
	{
		___ctx_1 = value;
		Il2CppCodeGenWriteBarrier(&___ctx_1, value);
	}

	inline static int32_t get_offset_of_label_2() { return static_cast<int32_t>(offsetof(UsingBlock_t3006526560, ___label_2)); }
	inline CodeLabel_t2154222491  get_label_2() const { return ___label_2; }
	inline CodeLabel_t2154222491 * get_address_of_label_2() { return &___label_2; }
	inline void set_label_2(CodeLabel_t2154222491  value)
	{
		___label_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
