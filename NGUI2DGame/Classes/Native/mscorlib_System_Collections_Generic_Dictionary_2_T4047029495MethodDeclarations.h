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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TileType,System.Collections.Generic.KeyValuePair`2<System.Int32,TileType>>
struct Transform_1_t4047029495;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21761782677.h"
#include "AssemblyU2DCSharp_TileType701644524.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TileType,System.Collections.Generic.KeyValuePair`2<System.Int32,TileType>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m627876598_gshared (Transform_1_t4047029495 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m627876598(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t4047029495 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m627876598_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TileType,System.Collections.Generic.KeyValuePair`2<System.Int32,TileType>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1761782677  Transform_1_Invoke_m4019391862_gshared (Transform_1_t4047029495 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m4019391862(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t1761782677  (*) (Transform_1_t4047029495 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m4019391862_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TileType,System.Collections.Generic.KeyValuePair`2<System.Int32,TileType>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3060973599_gshared (Transform_1_t4047029495 * __this, int32_t ___key0, int32_t ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3060973599(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t4047029495 *, int32_t, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3060973599_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TileType,System.Collections.Generic.KeyValuePair`2<System.Int32,TileType>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1761782677  Transform_1_EndInvoke_m1186956108_gshared (Transform_1_t4047029495 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1186956108(__this, ___result0, method) ((  KeyValuePair_2_t1761782677  (*) (Transform_1_t4047029495 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1186956108_gshared)(__this, ___result0, method)
