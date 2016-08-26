#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LoginManager
struct LoginManager_t973619992;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoginManager
struct  LoginManager_t973619992  : public Il2CppObject
{
public:
	// System.Boolean LoginManager::mIsLogin
	bool ___mIsLogin_1;

public:
	inline static int32_t get_offset_of_mIsLogin_1() { return static_cast<int32_t>(offsetof(LoginManager_t973619992, ___mIsLogin_1)); }
	inline bool get_mIsLogin_1() const { return ___mIsLogin_1; }
	inline bool* get_address_of_mIsLogin_1() { return &___mIsLogin_1; }
	inline void set_mIsLogin_1(bool value)
	{
		___mIsLogin_1 = value;
	}
};

struct LoginManager_t973619992_StaticFields
{
public:
	// LoginManager LoginManager::mLMInstance
	LoginManager_t973619992 * ___mLMInstance_0;

public:
	inline static int32_t get_offset_of_mLMInstance_0() { return static_cast<int32_t>(offsetof(LoginManager_t973619992_StaticFields, ___mLMInstance_0)); }
	inline LoginManager_t973619992 * get_mLMInstance_0() const { return ___mLMInstance_0; }
	inline LoginManager_t973619992 ** get_address_of_mLMInstance_0() { return &___mLMInstance_0; }
	inline void set_mLMInstance_0(LoginManager_t973619992 * value)
	{
		___mLMInstance_0 = value;
		Il2CppCodeGenWriteBarrier(&___mLMInstance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
