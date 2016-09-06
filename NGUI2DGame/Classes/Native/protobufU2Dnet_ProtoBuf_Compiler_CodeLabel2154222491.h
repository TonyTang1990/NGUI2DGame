#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Reflection_Emit_Label4243202660.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Compiler.CodeLabel
struct  CodeLabel_t2154222491 
{
public:
	// System.Reflection.Emit.Label ProtoBuf.Compiler.CodeLabel::Value
	Label_t4243202660  ___Value_0;
	// System.Int32 ProtoBuf.Compiler.CodeLabel::Index
	int32_t ___Index_1;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(CodeLabel_t2154222491, ___Value_0)); }
	inline Label_t4243202660  get_Value_0() const { return ___Value_0; }
	inline Label_t4243202660 * get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Label_t4243202660  value)
	{
		___Value_0 = value;
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(CodeLabel_t2154222491, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: ProtoBuf.Compiler.CodeLabel
struct CodeLabel_t2154222491_marshaled_pinvoke
{
	Label_t4243202660_marshaled_pinvoke ___Value_0;
	int32_t ___Index_1;
};
// Native definition for marshalling of: ProtoBuf.Compiler.CodeLabel
struct CodeLabel_t2154222491_marshaled_com
{
	Label_t4243202660_marshaled_com ___Value_0;
	int32_t ___Index_1;
};
