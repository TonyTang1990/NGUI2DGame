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

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Vector2,System.Object,UnityEngine.Vector2>
struct Transform_1_t3848978633;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Vector2,System.Object,UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1476627895_gshared (Transform_1_t3848978633 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1476627895(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3848978633 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1476627895_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Vector2,System.Object,UnityEngine.Vector2>::Invoke(TKey,TValue)
extern "C"  Vector2_t2243707579  Transform_1_Invoke_m4072438563_gshared (Transform_1_t3848978633 * __this, Vector2_t2243707579  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m4072438563(__this, ___key0, ___value1, method) ((  Vector2_t2243707579  (*) (Transform_1_t3848978633 *, Vector2_t2243707579 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m4072438563_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Vector2,System.Object,UnityEngine.Vector2>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1579464002_gshared (Transform_1_t3848978633 * __this, Vector2_t2243707579  ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1579464002(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3848978633 *, Vector2_t2243707579 , Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1579464002_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Vector2,System.Object,UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C"  Vector2_t2243707579  Transform_1_EndInvoke_m3801072993_gshared (Transform_1_t3848978633 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3801072993(__this, ___result0, method) ((  Vector2_t2243707579  (*) (Transform_1_t3848978633 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3801072993_gshared)(__this, ___result0, method)
