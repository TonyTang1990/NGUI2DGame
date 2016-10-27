#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Tank2050480468.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerTank
struct  PlayerTank_t155216285  : public Tank_t2050480468
{
public:
	// System.Boolean PlayerTank::mIsKeepMoving
	bool ___mIsKeepMoving_27;

public:
	inline static int32_t get_offset_of_mIsKeepMoving_27() { return static_cast<int32_t>(offsetof(PlayerTank_t155216285, ___mIsKeepMoving_27)); }
	inline bool get_mIsKeepMoving_27() const { return ___mIsKeepMoving_27; }
	inline bool* get_address_of_mIsKeepMoving_27() { return &___mIsKeepMoving_27; }
	inline void set_mIsKeepMoving_27(bool value)
	{
		___mIsKeepMoving_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
