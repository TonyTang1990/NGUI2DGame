#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Int32>
struct Transform_1_t3992;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25641_gshared (Transform_1_t3992 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m25641(__this, ___object, ___method, method) (( void (*) (Transform_1_t3992 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m25641_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m25642_gshared (Transform_1_t3992 * __this, int32_t ___key, Label_t2144  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m25642(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t3992 *, int32_t, Label_t2144 , const MethodInfo*))Transform_1_Invoke_m25642_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m25643_gshared (Transform_1_t3992 * __this, int32_t ___key, Label_t2144  ___value, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m25643(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3992 *, int32_t, Label_t2144 , AsyncCallback_t72 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m25643_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m25644_gshared (Transform_1_t3992 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m25644(__this, ___result, method) (( int32_t (*) (Transform_1_t3992 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m25644_gshared)(__this, ___result, method)
