#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t3638;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m21270_gshared (Comparison_1_t3638 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m21270(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3638 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21270_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m21271_gshared (Comparison_1_t3638 * __this, Vector3_t48  ___x, Vector3_t48  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m21271(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3638 *, Vector3_t48 , Vector3_t48 , const MethodInfo*))Comparison_1_Invoke_m21271_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m21272_gshared (Comparison_1_t3638 * __this, Vector3_t48  ___x, Vector3_t48  ___y, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m21272(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3638 *, Vector3_t48 , Vector3_t48 , AsyncCallback_t72 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21272_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m21273_gshared (Comparison_1_t3638 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m21273(__this, ___result, method) (( int32_t (*) (Comparison_1_t3638 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21273_gshared)(__this, ___result, method)
