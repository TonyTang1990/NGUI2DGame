#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t3727;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m22472_gshared (Comparison_1_t3727 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m22472(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3727 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m22472_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m22473_gshared (Comparison_1_t3727 * __this, UICharInfo_t523  ___x, UICharInfo_t523  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m22473(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3727 *, UICharInfo_t523 , UICharInfo_t523 , const MethodInfo*))Comparison_1_Invoke_m22473_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m22474_gshared (Comparison_1_t3727 * __this, UICharInfo_t523  ___x, UICharInfo_t523  ___y, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m22474(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3727 *, UICharInfo_t523 , UICharInfo_t523 , AsyncCallback_t72 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m22474_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m22475_gshared (Comparison_1_t3727 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m22475(__this, ___result, method) (( int32_t (*) (Comparison_1_t3727 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m22475_gshared)(__this, ___result, method)
