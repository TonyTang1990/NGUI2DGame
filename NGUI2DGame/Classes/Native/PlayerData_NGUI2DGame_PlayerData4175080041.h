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
// ProtoBuf.IExtension
struct IExtension_t1221360786;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NGUI2DGame.PlayerData
struct  PlayerData_t4175080041  : public Il2CppObject
{
public:
	// System.String NGUI2DGame.PlayerData::_SceneName
	String_t* ____SceneName_0;
	// System.Int32 NGUI2DGame.PlayerData::_Scores
	int32_t ____Scores_1;
	// System.Int32 NGUI2DGame.PlayerData::_SpeedLevel
	int32_t ____SpeedLevel_2;
	// ProtoBuf.IExtension NGUI2DGame.PlayerData::extensionObject
	Il2CppObject * ___extensionObject_3;

public:
	inline static int32_t get_offset_of__SceneName_0() { return static_cast<int32_t>(offsetof(PlayerData_t4175080041, ____SceneName_0)); }
	inline String_t* get__SceneName_0() const { return ____SceneName_0; }
	inline String_t** get_address_of__SceneName_0() { return &____SceneName_0; }
	inline void set__SceneName_0(String_t* value)
	{
		____SceneName_0 = value;
		Il2CppCodeGenWriteBarrier(&____SceneName_0, value);
	}

	inline static int32_t get_offset_of__Scores_1() { return static_cast<int32_t>(offsetof(PlayerData_t4175080041, ____Scores_1)); }
	inline int32_t get__Scores_1() const { return ____Scores_1; }
	inline int32_t* get_address_of__Scores_1() { return &____Scores_1; }
	inline void set__Scores_1(int32_t value)
	{
		____Scores_1 = value;
	}

	inline static int32_t get_offset_of__SpeedLevel_2() { return static_cast<int32_t>(offsetof(PlayerData_t4175080041, ____SpeedLevel_2)); }
	inline int32_t get__SpeedLevel_2() const { return ____SpeedLevel_2; }
	inline int32_t* get_address_of__SpeedLevel_2() { return &____SpeedLevel_2; }
	inline void set__SpeedLevel_2(int32_t value)
	{
		____SpeedLevel_2 = value;
	}

	inline static int32_t get_offset_of_extensionObject_3() { return static_cast<int32_t>(offsetof(PlayerData_t4175080041, ___extensionObject_3)); }
	inline Il2CppObject * get_extensionObject_3() const { return ___extensionObject_3; }
	inline Il2CppObject ** get_address_of_extensionObject_3() { return &___extensionObject_3; }
	inline void set_extensionObject_3(Il2CppObject * value)
	{
		___extensionObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
