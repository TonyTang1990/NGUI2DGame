#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t3307743052;
// ProtoBuf.Meta.RuntimeTypeModel/SerializerPair[]
struct SerializerPairU5BU5D_t1870625359;
// ProtoBuf.Compiler.Local
struct Local_t1810252861;
// System.String
struct String_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t99948092;
// ProtoBuf.Meta.MutableList
struct MutableList_t1161363740;
// ProtoBuf.Meta.BasicList
struct BasicList_t2284403912;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;

#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CompilerContext_I1134916868.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Compiler.CompilerContext
struct  CompilerContext_t2783612406  : public Il2CppObject
{
public:
	// System.Reflection.Emit.DynamicMethod ProtoBuf.Compiler.CompilerContext::method
	DynamicMethod_t3307743052 * ___method_0;
	// System.Boolean ProtoBuf.Compiler.CompilerContext::isStatic
	bool ___isStatic_2;
	// ProtoBuf.Meta.RuntimeTypeModel/SerializerPair[] ProtoBuf.Compiler.CompilerContext::methodPairs
	SerializerPairU5BU5D_t1870625359* ___methodPairs_3;
	// System.Boolean ProtoBuf.Compiler.CompilerContext::isWriter
	bool ___isWriter_4;
	// System.Boolean ProtoBuf.Compiler.CompilerContext::nonPublic
	bool ___nonPublic_5;
	// ProtoBuf.Compiler.Local ProtoBuf.Compiler.CompilerContext::inputValue
	Local_t1810252861 * ___inputValue_6;
	// System.String ProtoBuf.Compiler.CompilerContext::assemblyName
	String_t* ___assemblyName_7;
	// System.Reflection.Emit.ILGenerator ProtoBuf.Compiler.CompilerContext::il
	ILGenerator_t99948092 * ___il_8;
	// ProtoBuf.Meta.MutableList ProtoBuf.Compiler.CompilerContext::locals
	MutableList_t1161363740 * ___locals_9;
	// System.Int32 ProtoBuf.Compiler.CompilerContext::nextLabel
	int32_t ___nextLabel_10;
	// ProtoBuf.Meta.BasicList ProtoBuf.Compiler.CompilerContext::knownTrustedAssemblies
	BasicList_t2284403912 * ___knownTrustedAssemblies_11;
	// ProtoBuf.Meta.BasicList ProtoBuf.Compiler.CompilerContext::knownUntrustedAssemblies
	BasicList_t2284403912 * ___knownUntrustedAssemblies_12;
	// ProtoBuf.Meta.TypeModel ProtoBuf.Compiler.CompilerContext::model
	TypeModel_t653695305 * ___model_13;
	// ProtoBuf.Compiler.CompilerContext/ILVersion ProtoBuf.Compiler.CompilerContext::metadataVersion
	int32_t ___metadataVersion_14;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(CompilerContext_t2783612406, ___method_0)); }
	inline DynamicMethod_t3307743052 * get_method_0() const { return ___method_0; }
	inline DynamicMethod_t3307743052 ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(DynamicMethod_t3307743052 * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier(&___method_0, value);
	}

	inline static int32_t get_offset_of_isStatic_2() { return static_cast<int32_t>(offsetof(CompilerContext_t2783612406, ___isStatic_2)); }
	inline bool get_isStatic_2() const { return ___isStatic_2; }
	inline bool* get_address_of_isStatic_2() { return &___isStatic_2; }
	inline void set_isStatic_2(bool value)
	{
		___isStatic_2 = value;
	}

	inline static int32_t get_offset_of_methodPairs_3() { return static_cast<int32_t>(offsetof(CompilerContext_t2783612406, ___methodPairs_3)); }
	inline SerializerPairU5BU5D_t1870625359* get_methodPairs_3() const { return ___methodPairs_3; }
	inline SerializerPairU5BU5D_t1870625359** get_address_of_methodPairs_3() { return &___methodPairs_3; }
	inline void set_methodPairs_3(SerializerPairU5BU5D_t1870625359* value)
	{
		___methodPairs_3 = value;
		Il2CppCodeGenWriteBarrier(&___methodPairs_3, value);
	}

	inline static int32_t get_offset_of_isWriter_4() { return static_cast<int32_t>(offsetof(CompilerContext_t2783612406, ___isWriter_4)); }
	inline bool get_isWriter_4() const { return ___isWriter_4; }
	inline bool* get_address_of_isWriter_4() { return &___isWriter_4; }
	inline void set_isWriter_4(bool value)
	{
		___isWriter_4 = value;
	}

	inline static int32_t get_offset_of_nonPublic_5() { return static_cast<int32_t>(offsetof(CompilerContext_t2783612406, ___nonPublic_5)); }
	inline bool get_nonPublic_5() const { return ___nonPublic_5; }
	inline bool* get_address_of_nonPublic_5() { return &___nonPublic_5; }
	inline void set_nonPublic_5(bool value)
	{
		___nonPublic_5 = value;
	}

	inline static int32_t get_offset_of_inputValue_6() { return static_cast<int32_t>(offsetof(CompilerContext_t2783612406, ___inputValue_6)); }
	inline Local_t1810252861 * get_inputValue_6() const { return ___inputValue_6; }
	inline Local_t1810252861 ** get_address_of_inputValue_6() { return &___inputValue_6; }
	inline void set_inputValue_6(Local_t1810252861 * value)
	{
		___inputValue_6 = value;
		Il2CppCodeGenWriteBarrier(&___inputValue_6, value);
	}

	inline static int32_t get_offset_of_assemblyName_7() { return static_cast<int32_t>(offsetof(CompilerContext_t2783612406, ___assemblyName_7)); }
	inline String_t* get_assemblyName_7() const { return ___assemblyName_7; }
	inline String_t** get_address_of_assemblyName_7() { return &___assemblyName_7; }
	inline void set_assemblyName_7(String_t* value)
	{
		___assemblyName_7 = value;
		Il2CppCodeGenWriteBarrier(&___assemblyName_7, value);
	}

	inline static int32_t get_offset_of_il_8() { return static_cast<int32_t>(offsetof(CompilerContext_t2783612406, ___il_8)); }
	inline ILGenerator_t99948092 * get_il_8() const { return ___il_8; }
	inline ILGenerator_t99948092 ** get_address_of_il_8() { return &___il_8; }
	inline void set_il_8(ILGenerator_t99948092 * value)
	{
		___il_8 = value;
		Il2CppCodeGenWriteBarrier(&___il_8, value);
	}

	inline static int32_t get_offset_of_locals_9() { return static_cast<int32_t>(offsetof(CompilerContext_t2783612406, ___locals_9)); }
	inline MutableList_t1161363740 * get_locals_9() const { return ___locals_9; }
	inline MutableList_t1161363740 ** get_address_of_locals_9() { return &___locals_9; }
	inline void set_locals_9(MutableList_t1161363740 * value)
	{
		___locals_9 = value;
		Il2CppCodeGenWriteBarrier(&___locals_9, value);
	}

	inline static int32_t get_offset_of_nextLabel_10() { return static_cast<int32_t>(offsetof(CompilerContext_t2783612406, ___nextLabel_10)); }
	inline int32_t get_nextLabel_10() const { return ___nextLabel_10; }
	inline int32_t* get_address_of_nextLabel_10() { return &___nextLabel_10; }
	inline void set_nextLabel_10(int32_t value)
	{
		___nextLabel_10 = value;
	}

	inline static int32_t get_offset_of_knownTrustedAssemblies_11() { return static_cast<int32_t>(offsetof(CompilerContext_t2783612406, ___knownTrustedAssemblies_11)); }
	inline BasicList_t2284403912 * get_knownTrustedAssemblies_11() const { return ___knownTrustedAssemblies_11; }
	inline BasicList_t2284403912 ** get_address_of_knownTrustedAssemblies_11() { return &___knownTrustedAssemblies_11; }
	inline void set_knownTrustedAssemblies_11(BasicList_t2284403912 * value)
	{
		___knownTrustedAssemblies_11 = value;
		Il2CppCodeGenWriteBarrier(&___knownTrustedAssemblies_11, value);
	}

	inline static int32_t get_offset_of_knownUntrustedAssemblies_12() { return static_cast<int32_t>(offsetof(CompilerContext_t2783612406, ___knownUntrustedAssemblies_12)); }
	inline BasicList_t2284403912 * get_knownUntrustedAssemblies_12() const { return ___knownUntrustedAssemblies_12; }
	inline BasicList_t2284403912 ** get_address_of_knownUntrustedAssemblies_12() { return &___knownUntrustedAssemblies_12; }
	inline void set_knownUntrustedAssemblies_12(BasicList_t2284403912 * value)
	{
		___knownUntrustedAssemblies_12 = value;
		Il2CppCodeGenWriteBarrier(&___knownUntrustedAssemblies_12, value);
	}

	inline static int32_t get_offset_of_model_13() { return static_cast<int32_t>(offsetof(CompilerContext_t2783612406, ___model_13)); }
	inline TypeModel_t653695305 * get_model_13() const { return ___model_13; }
	inline TypeModel_t653695305 ** get_address_of_model_13() { return &___model_13; }
	inline void set_model_13(TypeModel_t653695305 * value)
	{
		___model_13 = value;
		Il2CppCodeGenWriteBarrier(&___model_13, value);
	}

	inline static int32_t get_offset_of_metadataVersion_14() { return static_cast<int32_t>(offsetof(CompilerContext_t2783612406, ___metadataVersion_14)); }
	inline int32_t get_metadataVersion_14() const { return ___metadataVersion_14; }
	inline int32_t* get_address_of_metadataVersion_14() { return &___metadataVersion_14; }
	inline void set_metadataVersion_14(int32_t value)
	{
		___metadataVersion_14 = value;
	}
};

struct CompilerContext_t2783612406_StaticFields
{
public:
	// System.Int32 ProtoBuf.Compiler.CompilerContext::next
	int32_t ___next_1;

public:
	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(CompilerContext_t2783612406_StaticFields, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
