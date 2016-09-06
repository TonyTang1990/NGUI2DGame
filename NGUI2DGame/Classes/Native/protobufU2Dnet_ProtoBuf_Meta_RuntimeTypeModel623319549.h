#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProtoBuf.Meta.BasicList/MatchPredicate
struct MatchPredicate_t2181991961;
// ProtoBuf.Meta.BasicList
struct BasicList_t2284403912;
// System.Object
struct Il2CppObject;
// ProtoBuf.Meta.LockContentedEventHandler
struct LockContentedEventHandler_t2250551053;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.RuntimeTypeModel
struct  RuntimeTypeModel_t623319549  : public TypeModel_t653695305
{
public:
	// System.Byte ProtoBuf.Meta.RuntimeTypeModel::options
	uint8_t ___options_2;
	// ProtoBuf.Meta.BasicList ProtoBuf.Meta.RuntimeTypeModel::basicTypes
	BasicList_t2284403912 * ___basicTypes_5;
	// ProtoBuf.Meta.BasicList ProtoBuf.Meta.RuntimeTypeModel::types
	BasicList_t2284403912 * ___types_6;
	// System.Int32 ProtoBuf.Meta.RuntimeTypeModel::metadataTimeoutMilliseconds
	int32_t ___metadataTimeoutMilliseconds_7;
	// System.Int32 ProtoBuf.Meta.RuntimeTypeModel::contentionCounter
	int32_t ___contentionCounter_8;
	// System.Object ProtoBuf.Meta.RuntimeTypeModel::contentionLock
	Il2CppObject * ___contentionLock_9;
	// ProtoBuf.Meta.LockContentedEventHandler ProtoBuf.Meta.RuntimeTypeModel::LockContended
	LockContentedEventHandler_t2250551053 * ___LockContended_10;
	// System.Reflection.MethodInfo ProtoBuf.Meta.RuntimeTypeModel::defaultFactory
	MethodInfo_t * ___defaultFactory_11;

public:
	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549, ___options_2)); }
	inline uint8_t get_options_2() const { return ___options_2; }
	inline uint8_t* get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(uint8_t value)
	{
		___options_2 = value;
	}

	inline static int32_t get_offset_of_basicTypes_5() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549, ___basicTypes_5)); }
	inline BasicList_t2284403912 * get_basicTypes_5() const { return ___basicTypes_5; }
	inline BasicList_t2284403912 ** get_address_of_basicTypes_5() { return &___basicTypes_5; }
	inline void set_basicTypes_5(BasicList_t2284403912 * value)
	{
		___basicTypes_5 = value;
		Il2CppCodeGenWriteBarrier(&___basicTypes_5, value);
	}

	inline static int32_t get_offset_of_types_6() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549, ___types_6)); }
	inline BasicList_t2284403912 * get_types_6() const { return ___types_6; }
	inline BasicList_t2284403912 ** get_address_of_types_6() { return &___types_6; }
	inline void set_types_6(BasicList_t2284403912 * value)
	{
		___types_6 = value;
		Il2CppCodeGenWriteBarrier(&___types_6, value);
	}

	inline static int32_t get_offset_of_metadataTimeoutMilliseconds_7() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549, ___metadataTimeoutMilliseconds_7)); }
	inline int32_t get_metadataTimeoutMilliseconds_7() const { return ___metadataTimeoutMilliseconds_7; }
	inline int32_t* get_address_of_metadataTimeoutMilliseconds_7() { return &___metadataTimeoutMilliseconds_7; }
	inline void set_metadataTimeoutMilliseconds_7(int32_t value)
	{
		___metadataTimeoutMilliseconds_7 = value;
	}

	inline static int32_t get_offset_of_contentionCounter_8() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549, ___contentionCounter_8)); }
	inline int32_t get_contentionCounter_8() const { return ___contentionCounter_8; }
	inline int32_t* get_address_of_contentionCounter_8() { return &___contentionCounter_8; }
	inline void set_contentionCounter_8(int32_t value)
	{
		___contentionCounter_8 = value;
	}

	inline static int32_t get_offset_of_contentionLock_9() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549, ___contentionLock_9)); }
	inline Il2CppObject * get_contentionLock_9() const { return ___contentionLock_9; }
	inline Il2CppObject ** get_address_of_contentionLock_9() { return &___contentionLock_9; }
	inline void set_contentionLock_9(Il2CppObject * value)
	{
		___contentionLock_9 = value;
		Il2CppCodeGenWriteBarrier(&___contentionLock_9, value);
	}

	inline static int32_t get_offset_of_LockContended_10() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549, ___LockContended_10)); }
	inline LockContentedEventHandler_t2250551053 * get_LockContended_10() const { return ___LockContended_10; }
	inline LockContentedEventHandler_t2250551053 ** get_address_of_LockContended_10() { return &___LockContended_10; }
	inline void set_LockContended_10(LockContentedEventHandler_t2250551053 * value)
	{
		___LockContended_10 = value;
		Il2CppCodeGenWriteBarrier(&___LockContended_10, value);
	}

	inline static int32_t get_offset_of_defaultFactory_11() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549, ___defaultFactory_11)); }
	inline MethodInfo_t * get_defaultFactory_11() const { return ___defaultFactory_11; }
	inline MethodInfo_t ** get_address_of_defaultFactory_11() { return &___defaultFactory_11; }
	inline void set_defaultFactory_11(MethodInfo_t * value)
	{
		___defaultFactory_11 = value;
		Il2CppCodeGenWriteBarrier(&___defaultFactory_11, value);
	}
};

struct RuntimeTypeModel_t623319549_StaticFields
{
public:
	// ProtoBuf.Meta.BasicList/MatchPredicate ProtoBuf.Meta.RuntimeTypeModel::MetaTypeFinder
	MatchPredicate_t2181991961 * ___MetaTypeFinder_3;
	// ProtoBuf.Meta.BasicList/MatchPredicate ProtoBuf.Meta.RuntimeTypeModel::BasicTypeFinder
	MatchPredicate_t2181991961 * ___BasicTypeFinder_4;

public:
	inline static int32_t get_offset_of_MetaTypeFinder_3() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549_StaticFields, ___MetaTypeFinder_3)); }
	inline MatchPredicate_t2181991961 * get_MetaTypeFinder_3() const { return ___MetaTypeFinder_3; }
	inline MatchPredicate_t2181991961 ** get_address_of_MetaTypeFinder_3() { return &___MetaTypeFinder_3; }
	inline void set_MetaTypeFinder_3(MatchPredicate_t2181991961 * value)
	{
		___MetaTypeFinder_3 = value;
		Il2CppCodeGenWriteBarrier(&___MetaTypeFinder_3, value);
	}

	inline static int32_t get_offset_of_BasicTypeFinder_4() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549_StaticFields, ___BasicTypeFinder_4)); }
	inline MatchPredicate_t2181991961 * get_BasicTypeFinder_4() const { return ___BasicTypeFinder_4; }
	inline MatchPredicate_t2181991961 ** get_address_of_BasicTypeFinder_4() { return &___BasicTypeFinder_4; }
	inline void set_BasicTypeFinder_4(MatchPredicate_t2181991961 * value)
	{
		___BasicTypeFinder_4 = value;
		Il2CppCodeGenWriteBarrier(&___BasicTypeFinder_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
