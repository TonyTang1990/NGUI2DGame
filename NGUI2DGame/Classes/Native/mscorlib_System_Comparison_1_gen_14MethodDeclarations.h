#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Color>
struct Comparison_1_t3631;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void System.Comparison`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m21226_gshared (Comparison_1_t3631 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m21226(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3631 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21226_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Color>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m21227_gshared (Comparison_1_t3631 * __this, Color_t25  ___x, Color_t25  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m21227(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3631 *, Color_t25 , Color_t25 , const MethodInfo*))Comparison_1_Invoke_m21227_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Color>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m21228_gshared (Comparison_1_t3631 * __this, Color_t25  ___x, Color_t25  ___y, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m21228(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3631 *, Color_t25 , Color_t25 , AsyncCallback_t72 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21228_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m21229_gshared (Comparison_1_t3631 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m21229(__this, ___result, method) (( int32_t (*) (Comparison_1_t3631 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21229_gshared)(__this, ___result, method)
