﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Timer
struct Timer_t2718;
// System.Threading.TimerCallback
struct TimerCallback_t2958;
// System.Object
struct Object_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback,System.Object,System.TimeSpan,System.TimeSpan)
extern "C" void Timer__ctor_m18831 (Timer_t2718 * __this, TimerCallback_t2958 * ___callback, Object_t * ___state, TimeSpan_t1129  ___dueTime, TimeSpan_t1129  ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::.cctor()
extern "C" void Timer__cctor_m18832 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Init(System.Threading.TimerCallback,System.Object,System.Int64,System.Int64)
extern "C" void Timer_Init_m18833 (Timer_t2718 * __this, TimerCallback_t2958 * ___callback, Object_t * ___state, int64_t ___dueTime, int64_t ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Dispose()
extern "C" void Timer_Dispose_m18834 (Timer_t2718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.Int64,System.Int64,System.Boolean)
extern "C" bool Timer_Change_m18835 (Timer_t2718 * __this, int64_t ___dueTime, int64_t ___period, bool ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
