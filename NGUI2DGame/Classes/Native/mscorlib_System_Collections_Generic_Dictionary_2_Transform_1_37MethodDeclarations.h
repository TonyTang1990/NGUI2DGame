#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Excel.Log.ILog,System.Collections.DictionaryEntry>
struct Transform_1_t3875;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Excel.Log.ILog
struct ILog_t846;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Excel.Log.ILog,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10MethodDeclarations.h"
#define Transform_1__ctor_m24419(__this, ___object, ___method, method) (( void (*) (Transform_1_t3875 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m21093_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Excel.Log.ILog,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m24420(__this, ___key, ___value, method) (( DictionaryEntry_t1150  (*) (Transform_1_t3875 *, String_t*, Object_t *, const MethodInfo*))Transform_1_Invoke_m21094_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Excel.Log.ILog,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m24421(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3875 *, String_t*, Object_t *, AsyncCallback_t72 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m21095_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Excel.Log.ILog,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m24422(__this, ___result, method) (( DictionaryEntry_t1150  (*) (Transform_1_t3875 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m21096_gshared)(__this, ___result, method)
