#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameConfigurationManager/Account
struct  Account_t3062613273  : public Il2CppObject
{
public:
	// System.String GameConfigurationManager/Account::mAccountName
	String_t* ___mAccountName_0;
	// System.String GameConfigurationManager/Account::mPassword
	String_t* ___mPassword_1;

public:
	inline static int32_t get_offset_of_mAccountName_0() { return static_cast<int32_t>(offsetof(Account_t3062613273, ___mAccountName_0)); }
	inline String_t* get_mAccountName_0() const { return ___mAccountName_0; }
	inline String_t** get_address_of_mAccountName_0() { return &___mAccountName_0; }
	inline void set_mAccountName_0(String_t* value)
	{
		___mAccountName_0 = value;
		Il2CppCodeGenWriteBarrier(&___mAccountName_0, value);
	}

	inline static int32_t get_offset_of_mPassword_1() { return static_cast<int32_t>(offsetof(Account_t3062613273, ___mPassword_1)); }
	inline String_t* get_mPassword_1() const { return ___mPassword_1; }
	inline String_t** get_address_of_mPassword_1() { return &___mPassword_1; }
	inline void set_mPassword_1(String_t* value)
	{
		___mPassword_1 = value;
		Il2CppCodeGenWriteBarrier(&___mPassword_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
