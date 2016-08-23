#pragma once
#include <stdint.h>
// System.Threading.Timer/Scheduler
struct Scheduler_t2957;
// System.Threading.TimerCallback
struct TimerCallback_t2958;
// System.Object
struct Object_t;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Threading.Timer
struct  Timer_t2718  : public MarshalByRefObject_t882
{
	// System.Threading.TimerCallback System.Threading.Timer::callback
	TimerCallback_t2958 * ___callback_2;
	// System.Object System.Threading.Timer::state
	Object_t * ___state_3;
	// System.Int64 System.Threading.Timer::due_time_ms
	int64_t ___due_time_ms_4;
	// System.Int64 System.Threading.Timer::period_ms
	int64_t ___period_ms_5;
	// System.Int64 System.Threading.Timer::next_run
	int64_t ___next_run_6;
	// System.Boolean System.Threading.Timer::disposed
	bool ___disposed_7;
};
struct Timer_t2718_StaticFields{
	// System.Threading.Timer/Scheduler System.Threading.Timer::scheduler
	Scheduler_t2957 * ___scheduler_1;
};
