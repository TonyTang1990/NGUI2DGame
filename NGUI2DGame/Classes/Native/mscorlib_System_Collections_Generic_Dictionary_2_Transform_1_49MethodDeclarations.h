#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>
struct Transform_1_t3995;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25663_gshared (Transform_1_t3995 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m25663(__this, ___object, ___method, method) (( void (*) (Transform_1_t3995 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m25663_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::Invoke(TKey,TValue)
extern "C" Label_t2144  Transform_1_Invoke_m25664_gshared (Transform_1_t3995 * __this, int32_t ___key, Label_t2144  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m25664(__this, ___key, ___value, method) (( Label_t2144  (*) (Transform_1_t3995 *, int32_t, Label_t2144 , const MethodInfo*))Transform_1_Invoke_m25664_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m25665_gshared (Transform_1_t3995 * __this, int32_t ___key, Label_t2144  ___value, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m25665(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3995 *, int32_t, Label_t2144 , AsyncCallback_t72 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m25665_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::EndInvoke(System.IAsyncResult)
extern "C" Label_t2144  Transform_1_EndInvoke_m25666_gshared (Transform_1_t3995 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m25666(__this, ___result, method) (( Label_t2144  (*) (Transform_1_t3995 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m25666_gshared)(__this, ___result, method)
