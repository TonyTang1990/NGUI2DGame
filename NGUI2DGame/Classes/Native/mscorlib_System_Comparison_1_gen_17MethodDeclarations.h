#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t3647;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Comparison`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m21335_gshared (Comparison_1_t3647 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m21335(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3647 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21335_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m21336_gshared (Comparison_1_t3647 * __this, Vector2_t55  ___x, Vector2_t55  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m21336(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3647 *, Vector2_t55 , Vector2_t55 , const MethodInfo*))Comparison_1_Invoke_m21336_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector2>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m21337_gshared (Comparison_1_t3647 * __this, Vector2_t55  ___x, Vector2_t55  ___y, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m21337(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3647 *, Vector2_t55 , Vector2_t55 , AsyncCallback_t72 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21337_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m21338_gshared (Comparison_1_t3647 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m21338(__this, ___result, method) (( int32_t (*) (Comparison_1_t3647 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21338_gshared)(__this, ___result, method)
