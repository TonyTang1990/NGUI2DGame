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
	float ___mBlockingByTankTimeLimit_21;
	// System.Single EnemyTank::mShootMinIntervalTime
	float ___mShootMinIntervalTime_22;
	// System.Single EnemyTank::mShootMaxIntervalTime
	float ___mShootMaxIntervalTime_23;
	// System.Diagnostics.Stopwatch EnemyTank::mTimer
	Stopwatch_t1380178105 * ___mTimer_24;
	// ShuffleBag`1<MoveAction> EnemyTank::mMoveActionsChosen
	ShuffleBag_1_t1756729732 * ___mMoveActionsChosen_25;

public:
	inline static int32_t get_offset_of_mBlockingByTankTimeLimit_21() { return static_cast<int32_t>(offsetof(EnemyTank_t2819878380, ___mBlockingByTankTimeLimit_21)); }
	inline float get_mBlockingByTankTimeLimit_21() const { return ___mBlockingByTankTimeLimit_21; }
	inline float* get_address_of_mBlockingByTankTimeLimit_21() { return &___mBlockingByTankTimeLimit_21; }
	inline void set_mBlockingByTankTimeLimit_21(float value)
	{
		___mBlockingByTankTimeLimit_21 = value;
	}

	inline static int32_t get_offset_of_mShootMinIntervalTime_22() { return static_cast<int32_t>(offsetof(EnemyTank_t2819878380, ___mShootMinIntervalTime_22)); }
	inline float get_mShootMinIntervalTime_22() const { return ___mShootMinIntervalTime_22; }
	inline float* get_address_of_mShootMinIntervalTime_22() { return &___mShootMinIntervalTime_22; }
	inline void set_mShootMinIntervalTime_22(float value)
	{
		___mShootMinIntervalTime_22 = value;
	}

	inline static int32_t get_offset_of_mShootMaxIntervalTime_23() { return static_cast<int32_t>(offsetof(EnemyTank_t2819878380, ___mShootMaxIntervalTime_23)); }
	inline float get_mShootMaxIntervalTime_23() const { return ___mShootMaxIntervalTime_23; }
	inline float* get_address_of_mShootMaxIntervalTime_23() { return &___mShootMaxIntervalTime_23; }
	inline void set_mShootMaxIntervalTime_23(float value)
	{
		___mShootMaxIntervalTime_23 = value;
	}

	inline static int32_t get_offset_of_mTimer_24() { return static_cast<int32_t>(offsetof(EnemyTank_t2819878380, ___mTimer_24)); }
	inline Stopwatch_t1380178105 * get_mTimer_24() const { return ___mTimer_24; }
	inline Stopwatch_t1380178105 ** get_address_of_mTimer_24() { return &___mTimer_24; }
	inline void set_mTimer_24(Stopwatch_t1380178105 * value)
	{
		___mTimer_24 = value;
		Il2CppCodeGenWriteBarrier(&___mTimer_24, value);
	}

	inline static int32_t get_offset_of_mMoveActionsChosen_25() { return static_cast<int32_t>(offsetof(EnemyTank_t2819878380, ___mMoveActionsChosen_25)); }
	inline ShuffleBag_1_t1756729732 * get_mMoveActionsChosen_25() const { return ___mMoveActionsChosen_25; }
	inline ShuffleBag_1_t1756729732 ** get_address_of_mMoveActionsChosen_25() { return &___mMoveActionsChosen_25; }
	inline void set_mMoveActionsChosen_25(ShuffleBag_1_t1756729732 * value)
	{
		___mMoveActionsChosen_25 = value;
		Il2CppCodeGenWriteBarrier(&___mMoveActionsChosen_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
