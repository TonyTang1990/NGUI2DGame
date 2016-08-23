#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t224;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1721_gshared (Comparison_1_t224 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1721(__this, ___object, ___method, method) (( void (*) (Comparison_1_t224 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1721_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m21657_gshared (Comparison_1_t224 * __this, RaycastHit_t226  ___x, RaycastHit_t226  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m21657(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t224 *, RaycastHit_t226 , RaycastHit_t226 , const MethodInfo*))Comparison_1_Invoke_m21657_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m21658_gshared (Comparison_1_t224 * __this, RaycastHit_t226  ___x, RaycastHit_t226  ___y, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m21658(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t224 *, RaycastHit_t226 , RaycastHit_t226 , AsyncCallback_t72 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21658_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m21659_gshared (Comparison_1_t224 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m21659(__this, ___result, method) (( int32_t (*) (Comparison_1_t224 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21659_gshared)(__this, ___result, method)
