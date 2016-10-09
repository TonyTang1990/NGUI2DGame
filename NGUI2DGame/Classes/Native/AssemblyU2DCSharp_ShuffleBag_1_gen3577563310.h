#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShuffleBag`1<System.Object>
struct  ShuffleBag_1_t3577563310  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<T> ShuffleBag`1::mData
	List_1_t2058570427 * ___mData_0;
	// System.Int32 ShuffleBag`1::mCursor
	int32_t ___mCursor_1;
	// T ShuffleBag`1::last
	Il2CppObject * ___last_2;

public:
	inline static int32_t get_offset_of_mData_0() { return static_cast<int32_t>(offsetof(ShuffleBag_1_t3577563310, ___mData_0)); }
	inline List_1_t2058570427 * get_mData_0() const { return ___mData_0; }
	inline List_1_t2058570427 ** get_address_of_mData_0() { return &___mData_0; }
	inline void set_mData_0(List_1_t2058570427 * value)
	{
		___mData_0 = value;
		Il2CppCodeGenWriteBarrier(&___mData_0, value);
	}

	inline static int32_t get_offset_of_mCursor_1() { return static_cast<int32_t>(offsetof(ShuffleBag_1_t3577563310, ___mCursor_1)); }
	inline int32_t get_mCursor_1() const { return ___mCursor_1; }
	inline int32_t* get_address_of_mCursor_1() { return &___mCursor_1; }
	inline void set_mCursor_1(int32_t value)
	{
		___mCursor_1 = value;
	}

	inline static int32_t get_offset_of_last_2() { return static_cast<int32_t>(offsetof(ShuffleBag_1_t3577563310, ___last_2)); }
	inline Il2CppObject * get_last_2() const { return ___last_2; }
	inline Il2CppObject ** get_address_of_last_2() { return &___last_2; }
	inline void set_last_2(Il2CppObject * value)
	{
		___last_2 = value;
		Il2CppCodeGenWriteBarrier(&___last_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
