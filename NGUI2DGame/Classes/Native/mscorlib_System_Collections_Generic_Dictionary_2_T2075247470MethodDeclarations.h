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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>
struct Transform_1_t2075247470;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Reflection_Emit_Label4243202660.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1165979048_gshared (Transform_1_t2075247470 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1165979048(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2075247470 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1165979048_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::Invoke(TKey,TValue)
extern "C"  Label_t4243202660  Transform_1_Invoke_m2635029648_gshared (Transform_1_t2075247470 * __this, int32_t ___key0, Label_t4243202660  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2635029648(__this, ___key0, ___value1, method) ((  Label_t4243202660  (*) (Transform_1_t2075247470 *, int32_t, Label_t4243202660 , const MethodInfo*))Transform_1_Invoke_m2635029648_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2566047391_gshared (Transform_1_t2075247470 * __this, int32_t ___key0, Label_t4243202660  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2566047391(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2075247470 *, int32_t, Label_t4243202660 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2566047391_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::EndInvoke(System.IAsyncResult)
extern "C"  Label_t4243202660  Transform_1_EndInvoke_m2836568466_gshared (Transform_1_t2075247470 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2836568466(__this, ___result0, method) ((  Label_t4243202660  (*) (Transform_1_t2075247470 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2836568466_gshared)(__this, ___result0, method)
