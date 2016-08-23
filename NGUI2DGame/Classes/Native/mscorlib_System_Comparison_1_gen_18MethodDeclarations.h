﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t3652;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Comparison`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m21370_gshared (Comparison_1_t3652 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m21370(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3652 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21370_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m21371_gshared (Comparison_1_t3652 * __this, Color32_t295  ___x, Color32_t295  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m21371(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3652 *, Color32_t295 , Color32_t295 , const MethodInfo*))Comparison_1_Invoke_m21371_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m21372_gshared (Comparison_1_t3652 * __this, Color32_t295  ___x, Color32_t295  ___y, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m21372(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3652 *, Color32_t295 , Color32_t295 , AsyncCallback_t72 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21372_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m21373_gshared (Comparison_1_t3652 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m21373(__this, ___result, method) (( int32_t (*) (Comparison_1_t3652 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21373_gshared)(__this, ___result, method)
