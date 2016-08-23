#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
struct Transform_1_t3816;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23784_gshared (Transform_1_t3816 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m23784(__this, ___object, ___method, method) (( void (*) (Transform_1_t3816 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m23784_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1150  Transform_1_Invoke_m23785_gshared (Transform_1_t3816 * __this, Object_t * ___key, KeyValuePair_2_t3611  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m23785(__this, ___key, ___value, method) (( DictionaryEntry_t1150  (*) (Transform_1_t3816 *, Object_t *, KeyValuePair_2_t3611 , const MethodInfo*))Transform_1_Invoke_m23785_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m23786_gshared (Transform_1_t3816 * __this, Object_t * ___key, KeyValuePair_2_t3611  ___value, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m23786(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3816 *, Object_t *, KeyValuePair_2_t3611 , AsyncCallback_t72 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m23786_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1150  Transform_1_EndInvoke_m23787_gshared (Transform_1_t3816 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m23787(__this, ___result, method) (( DictionaryEntry_t1150  (*) (Transform_1_t3816 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m23787_gshared)(__this, ___result, method)
