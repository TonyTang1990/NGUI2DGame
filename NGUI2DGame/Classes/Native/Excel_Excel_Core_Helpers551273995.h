#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t710107290;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Excel.Core.Helpers
struct  Helpers_t551273995  : public Il2CppObject
{
public:

public:
};

struct Helpers_t551273995_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex Excel.Core.Helpers::re
	Regex_t1803876613 * ___re_0;
	// System.Text.RegularExpressions.MatchEvaluator Excel.Core.Helpers::CS$<>9__CachedAnonymousMethodDelegate1
	MatchEvaluator_t710107290 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;

public:
	inline static int32_t get_offset_of_re_0() { return static_cast<int32_t>(offsetof(Helpers_t551273995_StaticFields, ___re_0)); }
	inline Regex_t1803876613 * get_re_0() const { return ___re_0; }
	inline Regex_t1803876613 ** get_address_of_re_0() { return &___re_0; }
	inline void set_re_0(Regex_t1803876613 * value)
	{
		___re_0 = value;
		Il2CppCodeGenWriteBarrier(&___re_0, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1() { return static_cast<int32_t>(offsetof(Helpers_t551273995_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1)); }
	inline MatchEvaluator_t710107290 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1; }
	inline MatchEvaluator_t710107290 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1(MatchEvaluator_t710107290 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
