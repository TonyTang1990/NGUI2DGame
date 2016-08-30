#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ObjectPoolManager
struct ObjectPoolManager_t3813236580;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct List_1_t494775411;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectPoolManager
struct  ObjectPoolManager_t3813236580  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] ObjectPoolManager::mEnemyCar
	GameObjectU5BU5D_t3057952154* ___mEnemyCar_3;
	// System.Int32 ObjectPoolManager::mAmountForEachEnemyCar
	int32_t ___mAmountForEachEnemyCar_4;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.GameObject>> ObjectPoolManager::mEnemyCarTwoDimensionList
	List_1_t494775411 * ___mEnemyCarTwoDimensionList_5;
	// System.Boolean ObjectPoolManager::mWillGrow
	bool ___mWillGrow_6;

public:
	inline static int32_t get_offset_of_mEnemyCar_3() { return static_cast<int32_t>(offsetof(ObjectPoolManager_t3813236580, ___mEnemyCar_3)); }
	inline GameObjectU5BU5D_t3057952154* get_mEnemyCar_3() const { return ___mEnemyCar_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mEnemyCar_3() { return &___mEnemyCar_3; }
	inline void set_mEnemyCar_3(GameObjectU5BU5D_t3057952154* value)
	{
		___mEnemyCar_3 = value;
		Il2CppCodeGenWriteBarrier(&___mEnemyCar_3, value);
	}

	inline static int32_t get_offset_of_mAmountForEachEnemyCar_4() { return static_cast<int32_t>(offsetof(ObjectPoolManager_t3813236580, ___mAmountForEachEnemyCar_4)); }
	inline int32_t get_mAmountForEachEnemyCar_4() const { return ___mAmountForEachEnemyCar_4; }
	inline int32_t* get_address_of_mAmountForEachEnemyCar_4() { return &___mAmountForEachEnemyCar_4; }
	inline void set_mAmountForEachEnemyCar_4(int32_t value)
	{
		___mAmountForEachEnemyCar_4 = value;
	}

	inline static int32_t get_offset_of_mEnemyCarTwoDimensionList_5() { return static_cast<int32_t>(offsetof(ObjectPoolManager_t3813236580, ___mEnemyCarTwoDimensionList_5)); }
	inline List_1_t494775411 * get_mEnemyCarTwoDimensionList_5() const { return ___mEnemyCarTwoDimensionList_5; }
	inline List_1_t494775411 ** get_address_of_mEnemyCarTwoDimensionList_5() { return &___mEnemyCarTwoDimensionList_5; }
	inline void set_mEnemyCarTwoDimensionList_5(List_1_t494775411 * value)
	{
		___mEnemyCarTwoDimensionList_5 = value;
		Il2CppCodeGenWriteBarrier(&___mEnemyCarTwoDimensionList_5, value);
	}

	inline static int32_t get_offset_of_mWillGrow_6() { return static_cast<int32_t>(offsetof(ObjectPoolManager_t3813236580, ___mWillGrow_6)); }
	inline bool get_mWillGrow_6() const { return ___mWillGrow_6; }
	inline bool* get_address_of_mWillGrow_6() { return &___mWillGrow_6; }
	inline void set_mWillGrow_6(bool value)
	{
		___mWillGrow_6 = value;
	}
};

struct ObjectPoolManager_t3813236580_StaticFields
{
public:
	// ObjectPoolManager ObjectPoolManager::mObjectPoolManagerInstance
	ObjectPoolManager_t3813236580 * ___mObjectPoolManagerInstance_2;

public:
	inline static int32_t get_offset_of_mObjectPoolManagerInstance_2() { return static_cast<int32_t>(offsetof(ObjectPoolManager_t3813236580_StaticFields, ___mObjectPoolManagerInstance_2)); }
	inline ObjectPoolManager_t3813236580 * get_mObjectPoolManagerInstance_2() const { return ___mObjectPoolManagerInstance_2; }
	inline ObjectPoolManager_t3813236580 ** get_address_of_mObjectPoolManagerInstance_2() { return &___mObjectPoolManagerInstance_2; }
	inline void set_mObjectPoolManagerInstance_2(ObjectPoolManager_t3813236580 * value)
	{
		___mObjectPoolManagerInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___mObjectPoolManagerInstance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
