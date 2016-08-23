﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ThreadPool
struct ThreadPool_t2953;
// System.Threading.WaitCallback
struct WaitCallback_t2086;
// System.Object
struct Object_t;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t2950;
// System.Threading.WaitHandle
struct WaitHandle_t1351;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t2949;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern "C" bool ThreadPool_QueueUserWorkItem_m12837 (Object_t * __this /* static, unused */, WaitCallback_t2086 * ___callBack, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.Int64,System.Boolean)
extern "C" RegisteredWaitHandle_t2950 * ThreadPool_RegisterWaitForSingleObject_m18816 (Object_t * __this /* static, unused */, WaitHandle_t1351 * ___waitObject, WaitOrTimerCallback_t2949 * ___callBack, Object_t * ___state, int64_t ___millisecondsTimeOutInterval, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C" RegisteredWaitHandle_t2950 * ThreadPool_RegisterWaitForSingleObject_m18817 (Object_t * __this /* static, unused */, WaitHandle_t1351 * ___waitObject, WaitOrTimerCallback_t2949 * ___callBack, Object_t * ___state, TimeSpan_t1129  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
