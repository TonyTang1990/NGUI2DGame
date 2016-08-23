﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Interlocked
struct Interlocked_t2946;
// System.Object
struct Object_t;

// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
extern "C" int32_t Interlocked_CompareExchange_m9830 (Object_t * __this /* static, unused */, int32_t* ___location1, int32_t ___value, int32_t ___comparand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)
extern "C" Object_t * Interlocked_CompareExchange_m5117 (Object_t * __this /* static, unused */, Object_t ** ___location1, Object_t * ___value, Object_t * ___comparand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
extern "C" int32_t Interlocked_Increment_m18763 (Object_t * __this /* static, unused */, int32_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
