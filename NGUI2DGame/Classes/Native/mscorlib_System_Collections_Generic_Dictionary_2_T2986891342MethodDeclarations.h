﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TileType,TileType>
struct Transform_1_t2986891342;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_TileType701644524.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TileType,TileType>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4181703322_gshared (Transform_1_t2986891342 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m4181703322(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2986891342 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4181703322_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TileType,TileType>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m1412316674_gshared (Transform_1_t2986891342 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1412316674(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t2986891342 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m1412316674_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TileType,TileType>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3417250059_gshared (Transform_1_t2986891342 * __this, int32_t ___key0, int32_t ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3417250059(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2986891342 *, int32_t, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3417250059_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TileType,TileType>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m1319085360_gshared (Transform_1_t2986891342 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1319085360(__this, ___result0, method) ((  int32_t (*) (Transform_1_t2986891342 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1319085360_gshared)(__this, ___result0, method)