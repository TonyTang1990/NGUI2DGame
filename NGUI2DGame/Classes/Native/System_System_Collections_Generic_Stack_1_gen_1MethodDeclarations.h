#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3840;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t375;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m23889_gshared (Stack_1_t3840 * __this, const MethodInfo* method);
#define Stack_1__ctor_m23889(__this, method) (( void (*) (Stack_1_t3840 *, const MethodInfo*))Stack_1__ctor_m23889_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m23891_gshared (Stack_1_t3840 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m23891(__this, method) (( Object_t * (*) (Stack_1_t3840 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m23891_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m23893_gshared (Stack_1_t3840 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m23893(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t3840 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m23893_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23895_gshared (Stack_1_t3840 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23895(__this, method) (( Object_t* (*) (Stack_1_t3840 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23895_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m23897_gshared (Stack_1_t3840 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m23897(__this, method) (( Object_t * (*) (Stack_1_t3840 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m23897_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::Contains(T)
extern "C" bool Stack_1_Contains_m23899_gshared (Stack_1_t3840 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Contains_m23899(__this, ___t, method) (( bool (*) (Stack_1_t3840 *, Object_t *, const MethodInfo*))Stack_1_Contains_m23899_gshared)(__this, ___t, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m23900_gshared (Stack_1_t3840 * __this, const MethodInfo* method);
#define Stack_1_Pop_m23900(__this, method) (( Object_t * (*) (Stack_1_t3840 *, const MethodInfo*))Stack_1_Pop_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m23901_gshared (Stack_1_t3840 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m23901(__this, ___t, method) (( void (*) (Stack_1_t3840 *, Object_t *, const MethodInfo*))Stack_1_Push_m23901_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m23903_gshared (Stack_1_t3840 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m23903(__this, method) (( int32_t (*) (Stack_1_t3840 *, const MethodInfo*))Stack_1_get_Count_m23903_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t3841  Stack_1_GetEnumerator_m23905_gshared (Stack_1_t3840 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m23905(__this, method) (( Enumerator_t3841  (*) (Stack_1_t3840 *, const MethodInfo*))Stack_1_GetEnumerator_m23905_gshared)(__this, method)
