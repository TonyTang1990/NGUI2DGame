#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transform_1_t3619;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21097_gshared (Transform_1_t3619 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m21097(__this, ___object, ___method, method) (( void (*) (Transform_1_t3619 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m21097_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3611  Transform_1_Invoke_m21098_gshared (Transform_1_t3619 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m21098(__this, ___key, ___value, method) (( KeyValuePair_2_t3611  (*) (Transform_1_t3619 *, Object_t *, Object_t *, const MethodInfo*))Transform_1_Invoke_m21098_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21099_gshared (Transform_1_t3619 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m21099(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3619 *, Object_t *, Object_t *, AsyncCallback_t72 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m21099_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3611  Transform_1_EndInvoke_m21100_gshared (Transform_1_t3619 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m21100(__this, ___result, method) (( KeyValuePair_2_t3611  (*) (Transform_1_t3619 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m21100_gshared)(__this, ___result, method)
