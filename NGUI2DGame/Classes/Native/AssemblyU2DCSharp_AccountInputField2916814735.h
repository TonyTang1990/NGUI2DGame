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
// UILabel
struct UILabel_t1795115428;
// UIInput
struct UIInput_t860674234;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AccountInputField
struct  AccountInputField_t2916814735  : public MonoBehaviour_t1158329972
{
public:
	// System.String AccountInputField::mInvalidePatterns
	String_t* ___mInvalidePatterns_2;
	// UILabel AccountInputField::mAccountTip
	UILabel_t1795115428 * ___mAccountTip_3;
	// UIInput AccountInputField::mInput
	UIInput_t860674234 * ___mInput_4;

public:
	inline static int32_t get_offset_of_mInvalidePatterns_2() { return static_cast<int32_t>(offsetof(AccountInputField_t2916814735, ___mInvalidePatterns_2)); }
	inline String_t* get_mInvalidePatterns_2() const { return ___mInvalidePatterns_2; }
	inline String_t** get_address_of_mInvalidePatterns_2() { return &___mInvalidePatterns_2; }
	inline void set_mInvalidePatterns_2(String_t* value)
	{
		___mInvalidePatterns_2 = value;
		Il2CppCodeGenWriteBarrier(&___mInvalidePatterns_2, value);
	}

	inline static int32_t get_offset_of_mAccountTip_3() { return static_cast<int32_t>(offsetof(AccountInputField_t2916814735, ___mAccountTip_3)); }
	inline UILabel_t1795115428 * get_mAccountTip_3() const { return ___mAccountTip_3; }
	inline UILabel_t1795115428 ** get_address_of_mAccountTip_3() { return &___mAccountTip_3; }
	inline void set_mAccountTip_3(UILabel_t1795115428 * value)
	{
		___mAccountTip_3 = value;
		Il2CppCodeGenWriteBarrier(&___mAccountTip_3, value);
	}

	inline static int32_t get_offset_of_mInput_4() { return static_cast<int32_t>(offsetof(AccountInputField_t2916814735, ___mInput_4)); }
	inline UIInput_t860674234 * get_mInput_4() const { return ___mInput_4; }
	inline UIInput_t860674234 ** get_address_of_mInput_4() { return &___mInput_4; }
	inline void set_mInput_4(UIInput_t860674234 * value)
	{
		___mInput_4 = value;
		Il2CppCodeGenWriteBarrier(&___mInput_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
