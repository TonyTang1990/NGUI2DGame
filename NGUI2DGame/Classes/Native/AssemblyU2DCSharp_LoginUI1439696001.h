#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LoginUI
struct LoginUI_t1439696001;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UIInput
struct UIInput_t860674234;
// UILabel
struct UILabel_t1795115428;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoginUI
struct  LoginUI_t1439696001  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject LoginUI::mAccountText
	GameObject_t1756533147 * ___mAccountText_3;
	// UnityEngine.GameObject LoginUI::mPassWordText
	GameObject_t1756533147 * ___mPassWordText_4;
	// UnityEngine.GameObject LoginUI::mTipText
	GameObject_t1756533147 * ___mTipText_5;
	// UIInput LoginUI::mAccountInput
	UIInput_t860674234 * ___mAccountInput_6;
	// UIInput LoginUI::mPassWordInput
	UIInput_t860674234 * ___mPassWordInput_7;
	// UILabel LoginUI::mTipLabel
	UILabel_t1795115428 * ___mTipLabel_8;

public:
	inline static int32_t get_offset_of_mAccountText_3() { return static_cast<int32_t>(offsetof(LoginUI_t1439696001, ___mAccountText_3)); }
	inline GameObject_t1756533147 * get_mAccountText_3() const { return ___mAccountText_3; }
	inline GameObject_t1756533147 ** get_address_of_mAccountText_3() { return &___mAccountText_3; }
	inline void set_mAccountText_3(GameObject_t1756533147 * value)
	{
		___mAccountText_3 = value;
		Il2CppCodeGenWriteBarrier(&___mAccountText_3, value);
	}

	inline static int32_t get_offset_of_mPassWordText_4() { return static_cast<int32_t>(offsetof(LoginUI_t1439696001, ___mPassWordText_4)); }
	inline GameObject_t1756533147 * get_mPassWordText_4() const { return ___mPassWordText_4; }
	inline GameObject_t1756533147 ** get_address_of_mPassWordText_4() { return &___mPassWordText_4; }
	inline void set_mPassWordText_4(GameObject_t1756533147 * value)
	{
		___mPassWordText_4 = value;
		Il2CppCodeGenWriteBarrier(&___mPassWordText_4, value);
	}

	inline static int32_t get_offset_of_mTipText_5() { return static_cast<int32_t>(offsetof(LoginUI_t1439696001, ___mTipText_5)); }
	inline GameObject_t1756533147 * get_mTipText_5() const { return ___mTipText_5; }
	inline GameObject_t1756533147 ** get_address_of_mTipText_5() { return &___mTipText_5; }
	inline void set_mTipText_5(GameObject_t1756533147 * value)
	{
		___mTipText_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTipText_5, value);
	}

	inline static int32_t get_offset_of_mAccountInput_6() { return static_cast<int32_t>(offsetof(LoginUI_t1439696001, ___mAccountInput_6)); }
	inline UIInput_t860674234 * get_mAccountInput_6() const { return ___mAccountInput_6; }
	inline UIInput_t860674234 ** get_address_of_mAccountInput_6() { return &___mAccountInput_6; }
	inline void set_mAccountInput_6(UIInput_t860674234 * value)
	{
		___mAccountInput_6 = value;
		Il2CppCodeGenWriteBarrier(&___mAccountInput_6, value);
	}

	inline static int32_t get_offset_of_mPassWordInput_7() { return static_cast<int32_t>(offsetof(LoginUI_t1439696001, ___mPassWordInput_7)); }
	inline UIInput_t860674234 * get_mPassWordInput_7() const { return ___mPassWordInput_7; }
	inline UIInput_t860674234 ** get_address_of_mPassWordInput_7() { return &___mPassWordInput_7; }
	inline void set_mPassWordInput_7(UIInput_t860674234 * value)
	{
		___mPassWordInput_7 = value;
		Il2CppCodeGenWriteBarrier(&___mPassWordInput_7, value);
	}

	inline static int32_t get_offset_of_mTipLabel_8() { return static_cast<int32_t>(offsetof(LoginUI_t1439696001, ___mTipLabel_8)); }
	inline UILabel_t1795115428 * get_mTipLabel_8() const { return ___mTipLabel_8; }
	inline UILabel_t1795115428 ** get_address_of_mTipLabel_8() { return &___mTipLabel_8; }
	inline void set_mTipLabel_8(UILabel_t1795115428 * value)
	{
		___mTipLabel_8 = value;
		Il2CppCodeGenWriteBarrier(&___mTipLabel_8, value);
	}
};

struct LoginUI_t1439696001_StaticFields
{
public:
	// LoginUI LoginUI::mLgUIInstance
	LoginUI_t1439696001 * ___mLgUIInstance_2;

public:
	inline static int32_t get_offset_of_mLgUIInstance_2() { return static_cast<int32_t>(offsetof(LoginUI_t1439696001_StaticFields, ___mLgUIInstance_2)); }
	inline LoginUI_t1439696001 * get_mLgUIInstance_2() const { return ___mLgUIInstance_2; }
	inline LoginUI_t1439696001 ** get_address_of_mLgUIInstance_2() { return &___mLgUIInstance_2; }
	inline void set_mLgUIInstance_2(LoginUI_t1439696001 * value)
	{
		___mLgUIInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___mLgUIInstance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
