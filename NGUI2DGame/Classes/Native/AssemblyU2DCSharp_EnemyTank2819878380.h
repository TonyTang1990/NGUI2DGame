#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Diagnostics.Stopwatch
struct Stopwatch_t1380178105;
// ShuffleBag`1<MoveAction>
struct ShuffleBag_1_t1756729732;

#include "AssemblyU2DCSharp_Tank2050480468.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyTank
struct  EnemyTank_t2819878380  : public Tank_t2050480468
{
public:
	// System.Single EnemyTank::mBlockingByTankTimeLimit
	float ___mBlockingByTankTimeLimit_27;
	// System.Single EnemyTank::mShootMinIntervalTime
	float ___mShootMinIntervalTime_28;
	// System.Single EnemyTank::mShootMaxIntervalTime
	float ___mShootMaxIntervalTime_29;
	// System.Diagnostics.Stopwatch EnemyTank::mTimer
	Stopwatch_t1380178105 * ___mTimer_30;
	// ShuffleBag`1<MoveAction> EnemyTank::mMoveActionsChosen
	ShuffleBag_1_t1756729732 * ___mMoveActionsChosen_31;

public:
	inline static int32_t get_offset_of_mBlockingByTankTimeLimit_27() { return static_cast<int32_t>(offsetof(EnemyTank_t2819878380, ___mBlockingByTankTimeLimit_27)); }
	inline float get_mBlockingByTankTimeLimit_27() const { return ___mBlockingByTankTimeLimit_27; }
	inline float* get_address_of_mBlockingByTankTimeLimit_27() { return &___mBlockingByTankTimeLimit_27; }
	inline void set_mBlockingByTankTimeLimit_27(float value)
	{
		___mBlockingByTankTimeLimit_27 = value;
	}

	inline static int32_t get_offset_of_mShootMinIntervalTime_28() { return static_cast<int32_t>(offsetof(EnemyTank_t2819878380, ___mShootMinIntervalTime_28)); }
	inline float get_mShootMinIntervalTime_28() const { return ___mShootMinIntervalTime_28; }
	inline float* get_address_of_mShootMinIntervalTime_28() { return &___mShootMinIntervalTime_28; }
	inline void set_mShootMinIntervalTime_28(float value)
	{
		___mShootMinIntervalTime_28 = value;
	}

	inline static int32_t get_offset_of_mShootMaxIntervalTime_29() { return static_cast<int32_t>(offsetof(EnemyTank_t2819878380, ___mShootMaxIntervalTime_29)); }
	inline float get_mShootMaxIntervalTime_29() const { return ___mShootMaxIntervalTime_29; }
	inline float* get_address_of_mShootMaxIntervalTime_29() { return &___mShootMaxIntervalTime_29; }
	inline void set_mShootMaxIntervalTime_29(float value)
	{
		___mShootMaxIntervalTime_29 = value;
	}

	inline static int32_t get_offset_of_mTimer_30() { return static_cast<int32_t>(offsetof(EnemyTank_t2819878380, ___mTimer_30)); }
	inline Stopwatch_t1380178105 * get_mTimer_30() const { return ___mTimer_30; }
	inline Stopwatch_t1380178105 ** get_address_of_mTimer_30() { return &___mTimer_30; }
	inline void set_mTimer_30(Stopwatch_t1380178105 * value)
	{
		___mTimer_30 = value;
		Il2CppCodeGenWriteBarrier(&___mTimer_30, value);
	}

	inline static int32_t get_offset_of_mMoveActionsChosen_31() { return static_cast<int32_t>(offsetof(EnemyTank_t2819878380, ___mMoveActionsChosen_31)); }
	inline ShuffleBag_1_t1756729732 * get_mMoveActionsChosen_31() const { return ___mMoveActionsChosen_31; }
	inline ShuffleBag_1_t1756729732 ** get_address_of_mMoveActionsChosen_31() { return &___mMoveActionsChosen_31; }
	inline void set_mMoveActionsChosen_31(ShuffleBag_1_t1756729732 * value)
	{
		___mMoveActionsChosen_31 = value;
		Il2CppCodeGenWriteBarrier(&___mMoveActionsChosen_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
