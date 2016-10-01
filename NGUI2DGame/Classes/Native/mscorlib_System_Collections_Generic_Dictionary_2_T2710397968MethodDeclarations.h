#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<MoveAction,System.Int32,MoveAction>
struct Transform_1_t2710397968;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_MoveAction868615717.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<MoveAction,System.Int32,MoveAction>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2364635084_gshared (Transform_1_t2710397968 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2364635084(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2710397968 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2364635084_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<MoveAction,System.Int32,MoveAction>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m4051366276_gshared (Transform_1_t2710397968 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m4051366276(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t2710397968 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m4051366276_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<MoveAction,System.Int32,MoveAction>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1437027127_gshared (Transform_1_t2710397968 * __this, int32_t ___key0, int32_t ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1437027127(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2710397968 *, int32_t, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1437027127_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<MoveAction,System.Int32,MoveAction>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m96300130_gshared (Transform_1_t2710397968 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m96300130(__this, ___result0, method) ((  int32_t (*) (Transform_1_t2710397968 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m96300130_gshared)(__this, ___result0, method)
