#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>
struct Dictionary_2_t2323514359;
// System.Collections.Generic.Dictionary`2<System.String,MyIntEvent>
struct Dictionary_2_t601861075;
// System.Collections.Generic.Dictionary`2<System.String,MyGameObjectEvent>
struct Dictionary_2_t1927863351;
// EventManager
struct EventManager_t2792515701;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventManager
struct  EventManager_t2792515701  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent> EventManager::mEventDictionary
	Dictionary_2_t2323514359 * ___mEventDictionary_2;
	// System.Collections.Generic.Dictionary`2<System.String,MyIntEvent> EventManager::mIntEventDictionary
	Dictionary_2_t601861075 * ___mIntEventDictionary_3;
	// System.Collections.Generic.Dictionary`2<System.String,MyGameObjectEvent> EventManager::mGameObjectEventDictionary
	Dictionary_2_t1927863351 * ___mGameObjectEventDictionary_4;

public:
	inline static int32_t get_offset_of_mEventDictionary_2() { return static_cast<int32_t>(offsetof(EventManager_t2792515701, ___mEventDictionary_2)); }
	inline Dictionary_2_t2323514359 * get_mEventDictionary_2() const { return ___mEventDictionary_2; }
	inline Dictionary_2_t2323514359 ** get_address_of_mEventDictionary_2() { return &___mEventDictionary_2; }
	inline void set_mEventDictionary_2(Dictionary_2_t2323514359 * value)
	{
		___mEventDictionary_2 = value;
		Il2CppCodeGenWriteBarrier(&___mEventDictionary_2, value);
	}

	inline static int32_t get_offset_of_mIntEventDictionary_3() { return static_cast<int32_t>(offsetof(EventManager_t2792515701, ___mIntEventDictionary_3)); }
	inline Dictionary_2_t601861075 * get_mIntEventDictionary_3() const { return ___mIntEventDictionary_3; }
	inline Dictionary_2_t601861075 ** get_address_of_mIntEventDictionary_3() { return &___mIntEventDictionary_3; }
	inline void set_mIntEventDictionary_3(Dictionary_2_t601861075 * value)
	{
		___mIntEventDictionary_3 = value;
		Il2CppCodeGenWriteBarrier(&___mIntEventDictionary_3, value);
	}

	inline static int32_t get_offset_of_mGameObjectEventDictionary_4() { return static_cast<int32_t>(offsetof(EventManager_t2792515701, ___mGameObjectEventDictionary_4)); }
	inline Dictionary_2_t1927863351 * get_mGameObjectEventDictionary_4() const { return ___mGameObjectEventDictionary_4; }
	inline Dictionary_2_t1927863351 ** get_address_of_mGameObjectEventDictionary_4() { return &___mGameObjectEventDictionary_4; }
	inline void set_mGameObjectEventDictionary_4(Dictionary_2_t1927863351 * value)
	{
		___mGameObjectEventDictionary_4 = value;
		Il2CppCodeGenWriteBarrier(&___mGameObjectEventDictionary_4, value);
	}
};

struct EventManager_t2792515701_StaticFields
{
public:
	// EventManager EventManager::mEMInstance
	EventManager_t2792515701 * ___mEMInstance_5;

public:
	inline static int32_t get_offset_of_mEMInstance_5() { return static_cast<int32_t>(offsetof(EventManager_t2792515701_StaticFields, ___mEMInstance_5)); }
	inline EventManager_t2792515701 * get_mEMInstance_5() const { return ___mEMInstance_5; }
	inline EventManager_t2792515701 ** get_address_of_mEMInstance_5() { return &___mEMInstance_5; }
	inline void set_mEMInstance_5(EventManager_t2792515701 * value)
	{
		___mEMInstance_5 = value;
		Il2CppCodeGenWriteBarrier(&___mEMInstance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
