#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t3734;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m22541_gshared (Comparison_1_t3734 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m22541(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3734 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m22541_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m22542_gshared (Comparison_1_t3734 * __this, UILineInfo_t524  ___x, UILineInfo_t524  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m22542(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3734 *, UILineInfo_t524 , UILineInfo_t524 , const MethodInfo*))Comparison_1_Invoke_m22542_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m22543_gshared (Comparison_1_t3734 * __this, UILineInfo_t524  ___x, UILineInfo_t524  ___y, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m22543(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3734 *, UILineInfo_t524 , UILineInfo_t524 , AsyncCallback_t72 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m22543_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m22544_gshared (Comparison_1_t3734 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m22544(__this, ___result, method) (( int32_t (*) (Comparison_1_t3734 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m22544_gshared)(__this, ___result, method)
