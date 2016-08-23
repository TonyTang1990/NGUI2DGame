#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>

// System.Int32
#include "mscorlib_System_Int32.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IComparer`1<System.Int32>::Compare(T,T)
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_0MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.Comparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::.ctor()
extern TypeInfo* Comparer_1_t3603_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m20919_gshared (DefaultComparer_t3605 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t3603_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8578);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t3603 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t3603_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t3603 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t3603 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::Compare(T,T)
extern TypeInfo* IComparable_t374_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m20920_gshared (DefaultComparer_t3605 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(256);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___x;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___y;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		int32_t L_6 = ___y;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		int32_t L_9 = ___x;
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_12 = ___x;
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		int32_t L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.IComparable`1<System.Int32>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (int32_t)L_15);
		return L_16;
	}

IL_003e:
	{
		int32_t L_17 = ___x;
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t374_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_20 = ___x;
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		int32_t L_23 = ___y;
		int32_t L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck((Object_t *)((Object_t *)Castclass(L_22, IComparable_t374_il2cpp_TypeInfo_var)));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t374_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_22, IComparable_t374_il2cpp_TypeInfo_var)), (Object_t *)L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t356 * L_27 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_27, (String_t*)(String_t*) &_stringLiteral5684, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Comparison`1<System.Int32>
#include "mscorlib_System_Comparison_1_gen_13.h"
#ifndef _MSC_VER
#else
#endif
// System.Comparison`1<System.Int32>
#include "mscorlib_System_Comparison_1_gen_13MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m20921_gshared (Comparison_1_t3606 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<System.Int32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m20922_gshared (Comparison_1_t3606 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m20922((Comparison_1_t3606 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<System.Int32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m20923_gshared (Comparison_1_t3606 * __this, int32_t ___x, int32_t ___y, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t297_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(Int32_t297_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m20924_gshared (Comparison_1_t3606 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Byte
#include "mscorlib_System_Byte.h"


// T System.Collections.Generic.IEnumerator`1<System.Byte>::get_Current()
// System.Array/InternalEnumerator`1<System.Byte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_22.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Byte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_22MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
extern "C" uint8_t Array_InternalArray__get_Item_TisByte_t681_m26214_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisByte_t681_m26214(__this, p0, method) (( uint8_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisByte_t681_m26214_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Byte>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20925_gshared (InternalEnumerator_1_t3607 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20926_gshared (InternalEnumerator_1_t3607 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (( uint8_t (*) (InternalEnumerator_1_t3607 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t3607 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Byte>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20927_gshared (InternalEnumerator_1_t3607 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Byte>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20928_gshared (InternalEnumerator_1_t3607 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5054((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Byte>::get_Current()
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" uint8_t InternalEnumerator_1_get_Current_m20929_gshared (InternalEnumerator_1_t3607 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1116 * L_1 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_1, (String_t*)(String_t*) &_stringLiteral3846, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1116 * L_3 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_3, (String_t*)(String_t*) &_stringLiteral3847, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5054((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		uint8_t L_8 = (( uint8_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Byte>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Byte>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Byte>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Byte>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Byte>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Byte>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Byte>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Byte>::set_Item(System.Int32,T)
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_6.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_11.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_11MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0MethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
struct Dictionary_2_t3610;
struct DictionaryEntryU5BU5D_t4387;
struct Transform_1_t3609;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1150_TisDictionaryEntry_t1150_m26237_gshared (Dictionary_2_t3610 * __this, DictionaryEntryU5BU5D_t4387* p0, int32_t p1, Transform_1_t3609 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1150_TisDictionaryEntry_t1150_m26237(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3610 *, DictionaryEntryU5BU5D_t4387*, int32_t, Transform_1_t3609 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1150_TisDictionaryEntry_t1150_m26237_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3610;
struct Array_t;
struct Transform_1_t3619;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3611_m26239_gshared (Dictionary_2_t3610 * __this, Array_t * p0, int32_t p1, Transform_1_t3619 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3611_m26239(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3610 *, Array_t *, int32_t, Transform_1_t3619 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3611_m26239_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3610;
struct KeyValuePair_2U5BU5D_t3815;
struct Transform_1_t3619;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3611_TisKeyValuePair_2_t3611_m26240_gshared (Dictionary_2_t3610 * __this, KeyValuePair_2U5BU5D_t3815* p0, int32_t p1, Transform_1_t3619 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3611_TisKeyValuePair_2_t3611_m26240(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3610 *, KeyValuePair_2U5BU5D_t3815*, int32_t, Transform_1_t3619 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3611_TisKeyValuePair_2_t3611_m26240_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m20930_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t3610 *)__this);
		(( void (*) (Dictionary_2_t3610 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3610 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20932_gshared (Dictionary_2_t3610 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t3610 *)__this);
		(( void (*) (Dictionary_2_t3610 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3610 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m20934_gshared (Dictionary_2_t3610 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t3610 *)__this);
		(( void (*) (Dictionary_2_t3610 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t3610 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20936_gshared (Dictionary_2_t3610 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t3610 *)__this);
		(( void (*) (Dictionary_2_t3610 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3610 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2__ctor_m20938_gshared (Dictionary_2_t3610 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t3611  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*)(String_t*) &_stringLiteral4334, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t3610 *)__this);
		(( void (*) (Dictionary_2_t3610 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3610 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
		V_2 = (Object_t*)L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			Object_t* L_8 = V_2;
			NullCheck((Object_t*)L_8);
			KeyValuePair_2_t3611  L_9 = (KeyValuePair_2_t3611 )InterfaceFuncInvoker0< KeyValuePair_2_t3611  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t3611 )L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3611 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			Object_t * L_11 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3611 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t3610 *)__this);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t3610 *)__this, (Object_t *)L_10, (Object_t *)L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, (Object_t *)L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			Object_t* L_15 = V_2;
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20940_gshared (Dictionary_2_t3610 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20942_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t3610 *)__this);
		KeyCollection_t3613 * L_0 = (( KeyCollection_t3613 * (*) (Dictionary_2_t3610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t3610 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20944_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t3610 *)__this);
		ValueCollection_t3617 * L_0 = (( ValueCollection_t3617 * (*) (Dictionary_2_t3610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t3610 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m20946_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t3610 *)__this);
		KeyCollection_t3613 * L_0 = (( KeyCollection_t3613 * (*) (Dictionary_2_t3610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t3610 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m20948_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t3610 *)__this);
		ValueCollection_t3617 * L_0 = (( ValueCollection_t3617 * (*) (Dictionary_2_t3610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t3610 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20950_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t3610 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t3610 *)__this, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t3610 *)__this);
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t3610 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t3610 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t3610 *)__this);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(20 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey) */, (Dictionary_2_t3610 *)__this, (Object_t *)L_4);
		Object_t * L_6 = L_5;
		return ((Object_t *)L_6);
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20952_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t3610 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t3610 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t3610 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t3610 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t3610 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t3610 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t3610 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue) */, (Dictionary_2_t3610 *)__this, (Object_t *)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20954_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t3610 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t3610 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t3610 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t3610 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t3610 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t3610 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t3610 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t3610 *)__this, (Object_t *)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20956_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*)(String_t*) &_stringLiteral1834, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t3610 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t3610 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20958_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*)(String_t*) &_stringLiteral1834, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t3610 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey) */, (Dictionary_2_t3610 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0023:
	{
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20960_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20962_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20964_gshared (Dictionary_2_t3610 * __this, KeyValuePair_2_t3611  ___keyValuePair, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3611 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3611 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t3610 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t3610 *)__this, (Object_t *)L_0, (Object_t *)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20966_gshared (Dictionary_2_t3610 * __this, KeyValuePair_2_t3611  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3611  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t3610 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t3610 *, KeyValuePair_2_t3611 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t3610 *)__this, (KeyValuePair_2_t3611 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20968_gshared (Dictionary_2_t3610 * __this, KeyValuePair_2U5BU5D_t3815* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3815* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t3610 *)__this);
		(( void (*) (Dictionary_2_t3610 *, KeyValuePair_2U5BU5D_t3815*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t3610 *)__this, (KeyValuePair_2U5BU5D_t3815*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20970_gshared (Dictionary_2_t3610 * __this, KeyValuePair_2_t3611  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3611  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t3610 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t3610 *, KeyValuePair_2_t3611 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t3610 *)__this, (KeyValuePair_2_t3611 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3611 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t3610 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey) */, (Dictionary_2_t3610 *)__this, (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t4387_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20972_gshared (Dictionary_2_t3610 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t4387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9950);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t3815* V_0 = {0};
	DictionaryEntryU5BU5D_t4387* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t4387* G_B5_1 = {0};
	Dictionary_2_t3610 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t4387* G_B4_1 = {0};
	Dictionary_2_t3610 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t3815*)((KeyValuePair_2U5BU5D_t3815*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t3815* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t3815* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t3610 *)__this);
		(( void (*) (Dictionary_2_t3610 *, KeyValuePair_2U5BU5D_t3815*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t3610 *)__this, (KeyValuePair_2U5BU5D_t3815*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t3610 *)__this);
		(( void (*) (Dictionary_2_t3610 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t3610 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t4387*)((DictionaryEntryU5BU5D_t4387*)IsInst(L_6, DictionaryEntryU5BU5D_t4387_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t4387* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t4387* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t3609 * L_10 = ((Dictionary_2_t3610_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t3610 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t3610 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t3609 * L_12 = (Transform_1_t3609 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t3609 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t3610_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t3610 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t3609 * L_13 = ((Dictionary_2_t3610_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t3610 *)G_B5_2);
		(( void (*) (Dictionary_2_t3610 *, DictionaryEntryU5BU5D_t4387*, int32_t, Transform_1_t3609 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t3610 *)G_B5_2, (DictionaryEntryU5BU5D_t4387*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t3609 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3619 * L_17 = (Transform_1_t3619 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3619 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t3610 *)__this);
		(( void (*) (Dictionary_2_t3610 *, Array_t *, int32_t, Transform_1_t3619 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t3610 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t3619 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20974_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3615  L_0 = {0};
		(( void (*) (Enumerator_t3615 *, Dictionary_2_t3610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t3610 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t3615  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20976_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3615  L_0 = {0};
		(( void (*) (Enumerator_t3615 *, Dictionary_2_t3610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t3610 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t3615  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20978_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t3620 * L_0 = (ShimEnumerator_t3620 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t3620 *, Dictionary_2_t3610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t3610 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20980_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t2960_il2cpp_TypeInfo_var;
extern "C" Object_t * Dictionary_2_get_Item_m20982_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		KeyNotFoundException_t2960_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8083);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t692 * L_2 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_2, (String_t*)(String_t*) &_stringLiteral1834, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1* L_6 = (Int32U5BU5D_t1*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t1* L_8 = (Int32U5BU5D_t1*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t3535* L_10 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t300* L_15 = (ObjectU5BU5D_t300*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		ObjectU5BU5D_t300* L_20 = (ObjectU5BU5D_t300*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_20, L_22));
	}

IL_007d:
	{
		LinkU5BU5D_t3535* L_23 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_1 = (int32_t)L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t2960 * L_27 = (KeyNotFoundException_t2960 *)il2cpp_codegen_object_new (KeyNotFoundException_t2960_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m18850(L_27, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_set_Item_m20984_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t692 * L_2 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_2, (String_t*)(String_t*) &_stringLiteral1834, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t1* L_7 = (Int32U5BU5D_t1*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t1* L_8 = (Int32U5BU5D_t1*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t3535* L_12 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t300* L_17 = (ObjectU5BU5D_t300*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), (Object_t *)L_20);
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_22 = V_2;
		V_3 = (int32_t)L_22;
		LinkU5BU5D_t3535* L_23 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_28 = (int32_t)(__this->___count_10);
		int32_t L_29 = (int32_t)((int32_t)((int32_t)L_28+(int32_t)1));
		V_4 = (int32_t)L_29;
		__this->___count_10 = L_29;
		int32_t L_30 = V_4;
		int32_t L_31 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_00c9;
		}
	}
	{
		NullCheck((Dictionary_2_t3610 *)__this);
		(( void (*) (Dictionary_2_t3610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t3610 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_32 = V_0;
		Int32U5BU5D_t1* L_33 = (Int32U5BU5D_t1*)(__this->___table_4);
		NullCheck(L_33);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_33)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_34 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_34;
		int32_t L_35 = V_2;
		if ((!(((uint32_t)L_35) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_36 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_37 = (int32_t)L_36;
		V_4 = (int32_t)L_37;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = V_4;
		V_2 = (int32_t)L_38;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t3535* L_39 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_39, L_40))->___Next_1);
		__this->___emptySlot_9 = L_41;
	}

IL_0101:
	{
		LinkU5BU5D_t3535* L_42 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t1* L_44 = (Int32U5BU5D_t1*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_42, L_43))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		Int32U5BU5D_t1* L_47 = (Int32U5BU5D_t1*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		LinkU5BU5D_t3535* L_50 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_51 = V_2;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		int32_t L_52 = V_0;
		((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_50, L_51))->___HashCode_0 = L_52;
		ObjectU5BU5D_t300* L_53 = (ObjectU5BU5D_t300*)(__this->___keySlots_6);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___key;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54)) = (Object_t *)L_55;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t3535* L_57 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_58 = V_3;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		LinkU5BU5D_t3535* L_59 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_60 = V_2;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_60);
		int32_t L_61 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_59, L_60))->___Next_1);
		((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_57, L_58))->___Next_1 = L_61;
		LinkU5BU5D_t3535* L_62 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_63 = V_2;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		Int32U5BU5D_t1* L_64 = (Int32U5BU5D_t1*)(__this->___table_4);
		int32_t L_65 = V_1;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, L_65);
		int32_t L_66 = L_65;
		((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_62, L_63))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_64, L_66))-(int32_t)1));
		Int32U5BU5D_t1* L_67 = (Int32U5BU5D_t1*)(__this->___table_4);
		int32_t L_68 = V_1;
		int32_t L_69 = V_2;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_67, L_68)) = (int32_t)((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0194:
	{
		ObjectU5BU5D_t300* L_70 = (ObjectU5BU5D_t300*)(__this->___valueSlots_7);
		int32_t L_71 = V_2;
		Object_t * L_72 = ___value;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_71);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_70, L_71)) = (Object_t *)L_72;
		int32_t L_73 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t3514_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m20986_gshared (Dictionary_2_t3610 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		EqualityComparer_1_t3514_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8296);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t3610 * G_B4_0 = {0};
	Dictionary_2_t3610 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t3610 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_1 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_1, (String_t*)(String_t*) &_stringLiteral4306, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t3610 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t3610 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t3610 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3514_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3514 * L_5 = (( EqualityComparer_1_t3514 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t3610 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t3610 *)__this);
		(( void (*) (Dictionary_2_t3610 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t3610 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t1_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t3535_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m20988_gshared (Dictionary_2_t3610 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		LinkU5BU5D_t3535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9951);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t1*)SZArrayNew(Int32U5BU5D_t1_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t3535*)SZArrayNew(LinkU5BU5D_t3535_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t300*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ObjectU5BU5D_t300*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t1* L_4 = (Int32U5BU5D_t1*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t1* L_6 = (Int32U5BU5D_t1*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_CopyToCheck_m20990_gshared (Dictionary_2_t3610 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*)(String_t*) &_stringLiteral337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_3 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_3, (String_t*)(String_t*) &_stringLiteral2137, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5054((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t356 * L_7 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_7, (String_t*)(String_t*) &_stringLiteral5671, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m5054((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t3610 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (Dictionary_2_t3610 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t356 * L_12 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_12, (String_t*)(String_t*) &_stringLiteral5672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3611  Dictionary_2_make_pair_m20992_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t3611  L_2 = {0};
		(( void (*) (KeyValuePair_2_t3611 *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (Object_t *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m20994_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m20996_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20998_gshared (Dictionary_2_t3610 * __this, KeyValuePair_2U5BU5D_t3815* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3815* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t3610 *)__this);
		(( void (*) (Dictionary_2_t3610 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t3610 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t3815* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3619 * L_5 = (Transform_1_t3619 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3619 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t3610 *)__this);
		(( void (*) (Dictionary_2_t3610 *, KeyValuePair_2U5BU5D_t3815*, int32_t, Transform_1_t3619 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((Dictionary_2_t3610 *)__this, (KeyValuePair_2U5BU5D_t3815*)L_2, (int32_t)L_3, (Transform_1_t3619 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t1_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t3535_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m21000_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		Int32U5BU5D_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		LinkU5BU5D_t3535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9951);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t1* V_1 = {0};
	LinkU5BU5D_t3535* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t300* V_7 = {0};
	ObjectU5BU5D_t300* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t1* L_0 = (Int32U5BU5D_t1*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t915_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m15547(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t1*)((Int32U5BU5D_t1*)SZArrayNew(Int32U5BU5D_t1_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t3535*)((LinkU5BU5D_t3535*)SZArrayNew(LinkU5BU5D_t3535_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t1* L_4 = (Int32U5BU5D_t1*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t3535* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t300* L_10 = (ObjectU5BU5D_t300*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t3535* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t1* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t1* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t3535* L_26 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t1* L_32 = (Int32U5BU5D_t1*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t1* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t3535* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (ObjectU5BU5D_t300*)((ObjectU5BU5D_t300*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (ObjectU5BU5D_t300*)((ObjectU5BU5D_t300*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		ObjectU5BU5D_t300* L_37 = (ObjectU5BU5D_t300*)(__this->___keySlots_6);
		ObjectU5BU5D_t300* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m5108(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		ObjectU5BU5D_t300* L_40 = (ObjectU5BU5D_t300*)(__this->___valueSlots_7);
		ObjectU5BU5D_t300* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m5108(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t300* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ObjectU5BU5D_t300* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Add_m21002_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t692 * L_2 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_2, (String_t*)(String_t*) &_stringLiteral1834, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t1* L_7 = (Int32U5BU5D_t1*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t1* L_8 = (Int32U5BU5D_t1*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t3535* L_11 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t300* L_16 = (ObjectU5BU5D_t300*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t356 * L_21 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_21, (String_t*)(String_t*) &_stringLiteral5674, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_007d:
	{
		LinkU5BU5D_t3535* L_22 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_2 = (int32_t)L_24;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_26 = (int32_t)(__this->___count_10);
		int32_t L_27 = (int32_t)((int32_t)((int32_t)L_26+(int32_t)1));
		V_3 = (int32_t)L_27;
		__this->___count_10 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_00c3;
		}
	}
	{
		NullCheck((Dictionary_2_t3610 *)__this);
		(( void (*) (Dictionary_2_t3610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t3610 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_30 = V_0;
		Int32U5BU5D_t1* L_31 = (Int32U5BU5D_t1*)(__this->___table_4);
		NullCheck(L_31);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_32 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_34 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_35 = (int32_t)L_34;
		V_3 = (int32_t)L_35;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		V_2 = (int32_t)L_36;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t3535* L_37 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		__this->___emptySlot_9 = L_39;
	}

IL_00f9:
	{
		LinkU5BU5D_t3535* L_40 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = V_0;
		((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_40, L_41))->___HashCode_0 = L_42;
		LinkU5BU5D_t3535* L_43 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t1* L_45 = (Int32U5BU5D_t1*)(__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t1* L_48 = (Int32U5BU5D_t1*)(__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		ObjectU5BU5D_t300* L_51 = (ObjectU5BU5D_t300*)(__this->___keySlots_6);
		int32_t L_52 = V_2;
		Object_t * L_53 = ___key;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_51, L_52)) = (Object_t *)L_53;
		ObjectU5BU5D_t300* L_54 = (ObjectU5BU5D_t300*)(__this->___valueSlots_7);
		int32_t L_55 = V_2;
		Object_t * L_56 = ___value;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_54, L_55)) = (Object_t *)L_56;
		int32_t L_57 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m21004_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t1* L_0 = (Int32U5BU5D_t1*)(__this->___table_4);
		Int32U5BU5D_t1* L_1 = (Int32U5BU5D_t1*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m6339(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t300* L_2 = (ObjectU5BU5D_t300*)(__this->___keySlots_6);
		ObjectU5BU5D_t300* L_3 = (ObjectU5BU5D_t300*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m6339(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t300* L_4 = (ObjectU5BU5D_t300*)(__this->___valueSlots_7);
		ObjectU5BU5D_t300* L_5 = (ObjectU5BU5D_t300*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m6339(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t3535* L_6 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		LinkU5BU5D_t3535* L_7 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m6339(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKey_m21006_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t692 * L_2 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_2, (String_t*)(String_t*) &_stringLiteral1834, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1* L_6 = (Int32U5BU5D_t1*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t1* L_8 = (Int32U5BU5D_t1*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t3535* L_10 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t300* L_15 = (ObjectU5BU5D_t300*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t3535* L_20 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_20, L_21))->___Next_1);
		V_1 = (int32_t)L_22;
	}

IL_0084:
	{
		int32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern TypeInfo* EqualityComparer_1_t3514_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m21008_gshared (Dictionary_2_t3610 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3514_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8296);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3514_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3514 * L_0 = (( EqualityComparer_1_t3514 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t1* L_1 = (Int32U5BU5D_t1*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		Object_t* L_4 = V_0;
		ObjectU5BU5D_t300* L_5 = (ObjectU5BU5D_t300*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (Object_t*)L_4, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7)), (Object_t *)L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t3535* L_10 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t1* L_16 = (Int32U5BU5D_t1*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_GetObjectData_m21010_gshared (Dictionary_2_t3610 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t3815* V_0 = {0};
	{
		SerializationInfo_t669 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*)(String_t*) &_stringLiteral2882, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t669 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t669 *)L_2);
		SerializationInfo_AddValue_m5038((SerializationInfo_t669 *)L_2, (String_t*)(String_t*) &_stringLiteral2884, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t669 *)L_4);
		SerializationInfo_AddValue_m5012((SerializationInfo_t669 *)L_4, (String_t*)(String_t*) &_stringLiteral2886, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t3815*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t3815*)((KeyValuePair_2U5BU5D_t3815*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		KeyValuePair_2U5BU5D_t3815* L_8 = V_0;
		NullCheck((Dictionary_2_t3610 *)__this);
		(( void (*) (Dictionary_2_t3610 *, KeyValuePair_2U5BU5D_t3815*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t3610 *)__this, (KeyValuePair_2U5BU5D_t3815*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t669 * L_9 = ___info;
		Int32U5BU5D_t1* L_10 = (Int32U5BU5D_t1*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t669 *)L_9);
		SerializationInfo_AddValue_m5038((SerializationInfo_t669 *)L_9, (String_t*)(String_t*) &_stringLiteral4338, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t669 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t3815* L_12 = V_0;
		NullCheck((SerializationInfo_t669 *)L_11);
		SerializationInfo_AddValue_m5012((SerializationInfo_t669 *)L_11, (String_t*)(String_t*) &_stringLiteral5675, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_OnDeserialization_m21012_gshared (Dictionary_2_t3610 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t3815* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t669 * L_0 = (SerializationInfo_t669 *)(__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t669 * L_1 = (SerializationInfo_t669 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t669 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m5041((SerializationInfo_t669 *)L_1, (String_t*)(String_t*) &_stringLiteral2884, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t669 * L_3 = (SerializationInfo_t669 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t669 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m4998((SerializationInfo_t669 *)L_3, (String_t*)(String_t*) &_stringLiteral2886, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t669 * L_6 = (SerializationInfo_t669 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t669 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m5041((SerializationInfo_t669 *)L_6, (String_t*)(String_t*) &_stringLiteral4338, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t669 * L_8 = (SerializationInfo_t669 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t669 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m4998((SerializationInfo_t669 *)L_8, (String_t*)(String_t*) &_stringLiteral5675, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t3815*)((KeyValuePair_2U5BU5D_t3815*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t3610 *)__this);
		(( void (*) (Dictionary_2_t3610 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t3610 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t3815* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00b4;
	}

IL_0092:
	{
		KeyValuePair_2U5BU5D_t3815* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3611 *)((KeyValuePair_2_t3611 *)(KeyValuePair_2_t3611 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t3815* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		Object_t * L_19 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3611 *)((KeyValuePair_2_t3611 *)(KeyValuePair_2_t3611 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t3610 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t3610 *)__this, (Object_t *)L_16, (Object_t *)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t3815* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t669 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_Remove_m21014_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t692 * L_2 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_2, (String_t*)(String_t*) &_stringLiteral1834, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t1* L_7 = (Int32U5BU5D_t1*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t1* L_8 = (Int32U5BU5D_t1*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (int32_t)(-1);
	}

IL_004a:
	{
		LinkU5BU5D_t3535* L_12 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t300* L_17 = (ObjectU5BU5D_t300*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), (Object_t *)L_20);
		if (!L_21)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_22 = V_2;
		V_3 = (int32_t)L_22;
		LinkU5BU5D_t3535* L_23 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_28 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_28-(int32_t)1));
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t1* L_30 = (Int32U5BU5D_t1*)(__this->___table_4);
		int32_t L_31 = V_1;
		LinkU5BU5D_t3535* L_32 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_33 = V_2;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_32, L_33))->___Next_1);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t3535* L_35 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_36 = V_3;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		LinkU5BU5D_t3535* L_37 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_35, L_36))->___Next_1 = L_39;
	}

IL_00e9:
	{
		LinkU5BU5D_t3535* L_40 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (int32_t)(__this->___emptySlot_9);
		((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_40, L_41))->___Next_1 = L_42;
		int32_t L_43 = V_2;
		__this->___emptySlot_9 = L_43;
		LinkU5BU5D_t3535* L_44 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_44, L_45))->___HashCode_0 = 0;
		ObjectU5BU5D_t300* L_46 = (ObjectU5BU5D_t300*)(__this->___keySlots_6);
		int32_t L_47 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_4));
		Object_t * L_48 = V_4;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, L_47)) = (Object_t *)L_48;
		ObjectU5BU5D_t300* L_49 = (ObjectU5BU5D_t300*)(__this->___valueSlots_7);
		int32_t L_50 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_5));
		Object_t * L_51 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, L_50)) = (Object_t *)L_51;
		int32_t L_52 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_TryGetValue_m21016_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t692 * L_2 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_2, (String_t*)(String_t*) &_stringLiteral1834, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1* L_6 = (Int32U5BU5D_t1*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t1* L_8 = (Int32U5BU5D_t1*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t3535* L_10 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t300* L_15 = (ObjectU5BU5D_t300*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		Object_t ** L_20 = ___value;
		ObjectU5BU5D_t300* L_21 = (ObjectU5BU5D_t300*)(__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		*L_20 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_21, L_23));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t3535* L_24 = (LinkU5BU5D_t3535*)(__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = (int32_t)L_26;
	}

IL_0096:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		Object_t ** L_28 = ___value;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_2));
		Object_t * L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t3613 * Dictionary_2_get_Keys_m21018_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t3613 * L_0 = (KeyCollection_t3613 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (KeyCollection_t3613 *, Dictionary_2_t3610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (Dictionary_2_t3610 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t3617 * Dictionary_2_get_Values_m21020_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t3617 * L_0 = (ValueCollection_t3617 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (ValueCollection_t3617 *, Dictionary_2_t3610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t3610 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" Object_t * Dictionary_2_ToTKey_m21022_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*)(String_t*) &_stringLiteral1834, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1269(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral5676, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t356 * L_6 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6326(L_6, (String_t*)L_5, (String_t*)(String_t*) &_stringLiteral1834, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" Object_t * Dictionary_2_ToTValue_m21024_gshared (Dictionary_2_t3610 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_0));
		Object_t * L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m1269(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral5676, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t356 * L_8 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6326(L_8, (String_t*)L_7, (String_t*)(String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((Object_t *)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t3514_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21026_gshared (Dictionary_2_t3610 * __this, KeyValuePair_2_t3611  ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3514_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8296);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3611 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t3610 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t3610 *)__this, (Object_t *)L_0, (Object_t **)(&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3514_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3514 * L_2 = (( EqualityComparer_1_t3514 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3611 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_4 = V_0;
		NullCheck((EqualityComparer_1_t3514 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t3514 *)L_2, (Object_t *)L_3, (Object_t *)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t3615  Dictionary_2_GetEnumerator_m21027_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3615  L_0 = {0};
		(( void (*) (Enumerator_t3615 *, Dictionary_2_t3610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t3610 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t1150  Dictionary_2_U3CCopyToU3Em__2_m21029_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		Object_t * L_2 = ___value;
		Object_t * L_3 = L_2;
		DictionaryEntry_t1150  L_4 = {0};
		DictionaryEntry__ctor_m12744(&L_4, (Object_t *)((Object_t *)L_1), (Object_t *)((Object_t *)L_3), /*hidden argument*/NULL);
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_23.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_23MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t3611  Array_InternalArray__get_Item_TisKeyValuePair_2_t3611_m26225_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3611_m26225(__this, p0, method) (( KeyValuePair_2_t3611  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3611_m26225_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m21030_gshared (InternalEnumerator_1_t3612 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21031_gshared (InternalEnumerator_1_t3612 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3611  L_0 = (( KeyValuePair_2_t3611  (*) (InternalEnumerator_1_t3612 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t3612 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3611  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m21032_gshared (InternalEnumerator_1_t3612 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m21033_gshared (InternalEnumerator_1_t3612 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5054((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t3611  InternalEnumerator_1_get_Current_m21034_gshared (InternalEnumerator_1_t3612 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1116 * L_1 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_1, (String_t*)(String_t*) &_stringLiteral3846, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1116 * L_3 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_3, (String_t*)(String_t*) &_stringLiteral3847, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5054((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t3611  L_8 = (( KeyValuePair_2_t3611  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m21035_gshared (KeyValuePair_2_t3611 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t3611 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t3611 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = ___value;
		(( void (*) (KeyValuePair_2_t3611 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t3611 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m21036_gshared (KeyValuePair_2_t3611 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m21037_gshared (KeyValuePair_2_t3611 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m21038_gshared (KeyValuePair_2_t3611 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m21039_gshared (KeyValuePair_2_t3611 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern TypeInfo* StringU5BU5D_t258_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m21040_gshared (KeyValuePair_2_t3611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t258* G_B2_1 = {0};
	StringU5BU5D_t258* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t258* G_B1_1 = {0};
	StringU5BU5D_t258* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t258* G_B3_2 = {0};
	StringU5BU5D_t258* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t258* G_B5_1 = {0};
	StringU5BU5D_t258* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t258* G_B4_1 = {0};
	StringU5BU5D_t258* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t258* G_B6_2 = {0};
	StringU5BU5D_t258* G_B6_3 = {0};
	{
		StringU5BU5D_t258* L_0 = (StringU5BU5D_t258*)((StringU5BU5D_t258*)SZArrayNew(StringU5BU5D_t258_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral2);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral2;
		StringU5BU5D_t258* L_1 = (StringU5BU5D_t258*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3611 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((Object_t *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3611 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Object_t *)L_4;
		NullCheck((Object_t *)(*(&V_0)));
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t258* L_7 = (StringU5BU5D_t258*)G_B3_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral411);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 2)) = (String_t*)(String_t*) &_stringLiteral411;
		StringU5BU5D_t258* L_8 = (StringU5BU5D_t258*)L_7;
		Object_t * L_9 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3611 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_10 = L_9;
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!((Object_t *)L_10))
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		Object_t * L_11 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3611 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Object_t *)L_11;
		NullCheck((Object_t *)(*(&V_1)));
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_1)));
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_13;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t258* L_14 = (StringU5BU5D_t258*)G_B6_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 4);
		ArrayElementTypeCheck (L_14, (String_t*) &_stringLiteral3);
		*((String_t**)(String_t**)SZArrayLdElema(L_14, 4)) = (String_t*)(String_t*) &_stringLiteral3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m1266(NULL /*static, unused*/, (StringU5BU5D_t258*)L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_7.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_7MethodDeclarations.h"
struct Dictionary_2_t3610;
struct Array_t;
struct Transform_1_t3616;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m26236_gshared (Dictionary_2_t3610 * __this, Array_t * p0, int32_t p1, Transform_1_t3616 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m26236(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3610 *, Array_t *, int32_t, Transform_1_t3616 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m26236_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3610;
struct ObjectU5BU5D_t300;
struct Transform_1_t3616;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m26235_gshared (Dictionary_2_t3610 * __this, ObjectU5BU5D_t300* p0, int32_t p1, Transform_1_t3616 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m26235(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3610 *, ObjectU5BU5D_t300*, int32_t, Transform_1_t3616 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m26235_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" void KeyCollection__ctor_m21041_gshared (KeyCollection_t3613 * __this, Dictionary_2_t3610 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t3610 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*)(String_t*) &_stringLiteral4334, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t3610 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21042_gshared (KeyCollection_t3613 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_0, (String_t*)(String_t*) &_stringLiteral5679, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21043_gshared (KeyCollection_t3613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_0, (String_t*)(String_t*) &_stringLiteral5679, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21044_gshared (KeyCollection_t3613 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t3610 * L_0 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t3610 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t3610 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21045_gshared (KeyCollection_t3613 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_0, (String_t*)(String_t*) &_stringLiteral5679, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21046_gshared (KeyCollection_t3613 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t3613 *)__this);
		Enumerator_t3614  L_0 = (( Enumerator_t3614  (*) (KeyCollection_t3613 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t3613 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3614  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m21047_gshared (KeyCollection_t3613 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t300* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t300*)((ObjectU5BU5D_t300*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t300* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t300* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t3613 *)__this);
		VirtActionInvoker2< ObjectU5BU5D_t300*, int32_t >::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::CopyTo(TKey[],System.Int32) */, (KeyCollection_t3613 *)__this, (ObjectU5BU5D_t300*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3610 * L_4 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t3610 *)L_4);
		(( void (*) (Dictionary_2_t3610 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3610 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3610 * L_7 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3616 * L_11 = (Transform_1_t3616 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3616 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3610 *)L_7);
		(( void (*) (Dictionary_2_t3610 *, Array_t *, int32_t, Transform_1_t3616 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t3610 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t3616 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21048_gshared (KeyCollection_t3613 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t3613 *)__this);
		Enumerator_t3614  L_0 = (( Enumerator_t3614  (*) (KeyCollection_t3613 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t3613 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3614  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21049_gshared (KeyCollection_t3613 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m21050_gshared (KeyCollection_t3613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t3610 * L_0 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(1 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t793_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m21051_gshared (KeyCollection_t3613 * __this, ObjectU5BU5D_t300* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t3610 * L_0 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		ObjectU5BU5D_t300* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t3610 *)L_0);
		(( void (*) (Dictionary_2_t3610 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3610 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3610 * L_3 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		ObjectU5BU5D_t300* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3616 * L_7 = (Transform_1_t3616 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3616 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3610 *)L_3);
		(( void (*) (Dictionary_2_t3610 *, ObjectU5BU5D_t300*, int32_t, Transform_1_t3616 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t3610 *)L_3, (ObjectU5BU5D_t300*)L_4, (int32_t)L_5, (Transform_1_t3616 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t3614  KeyCollection_GetEnumerator_m21052_gshared (KeyCollection_t3613 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3610 * L_0 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		Enumerator_t3614  L_1 = {0};
		(( void (*) (Enumerator_t3614 *, Dictionary_2_t3610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t3610 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m21053_gshared (KeyCollection_t3613 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3610 * L_0 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t3610 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (Dictionary_2_t3610 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21054_gshared (Enumerator_t3614 * __this, Dictionary_2_t3610 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t3610 * L_0 = ___host;
		NullCheck((Dictionary_2_t3610 *)L_0);
		Enumerator_t3615  L_1 = (( Enumerator_t3615  (*) (Dictionary_2_t3610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3610 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21055_gshared (Enumerator_t3614 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3615 * L_0 = (Enumerator_t3615 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t3615 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t3615 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m21056_gshared (Enumerator_t3614 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3615 * L_0 = (Enumerator_t3615 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3615 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t3615 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21057_gshared (Enumerator_t3614 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3615 * L_0 = (Enumerator_t3615 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3615 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t3615 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m21058_gshared (Enumerator_t3614 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3615 * L_0 = (Enumerator_t3615 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t3611 * L_1 = (KeyValuePair_2_t3611 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3611 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21059_gshared (Enumerator_t3615 * __this, Dictionary_2_t3610 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t3610 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t3610 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21060_gshared (Enumerator_t3615 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3615 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3615 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3611  L_0 = (KeyValuePair_2_t3611 )(__this->___current_3);
		KeyValuePair_2_t3611  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1150  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21061_gshared (Enumerator_t3615 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3615 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3615 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3611 * L_0 = (KeyValuePair_2_t3611 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3611 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t3611 * L_3 = (KeyValuePair_2_t3611 *)&(__this->___current_3);
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3611 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_5 = L_4;
		DictionaryEntry_t1150  L_6 = {0};
		DictionaryEntry__ctor_m12744(&L_6, (Object_t *)((Object_t *)L_2), (Object_t *)((Object_t *)L_5), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21062_gshared (Enumerator_t3615 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t3615 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t3615 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21063_gshared (Enumerator_t3615 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t3615 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t3615 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21064_gshared (Enumerator_t3615 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t3615 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t3615 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t3610 * L_4 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t3535* L_5 = (LinkU5BU5D_t3535*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t2959 *)(Link_t2959 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t3610 * L_8 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t300* L_9 = (ObjectU5BU5D_t300*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t3610 * L_12 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		NullCheck(L_12);
		ObjectU5BU5D_t300* L_13 = (ObjectU5BU5D_t300*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t3611  L_16 = {0};
		(( void (*) (KeyValuePair_2_t3611 *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t3610 * L_18 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3611  Enumerator_get_Current_m21065_gshared (Enumerator_t3615 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3611  L_0 = (KeyValuePair_2_t3611 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m21066_gshared (Enumerator_t3615 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3615 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3615 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3611 * L_0 = (KeyValuePair_2_t3611 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3611 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m21067_gshared (Enumerator_t3615 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3615 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3615 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3611 * L_0 = (KeyValuePair_2_t3611 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3611 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern TypeInfo* ObjectDisposedException_t1359_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m21068_gshared (Enumerator_t3615 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2567);
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t3610 * L_0 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t1359 * L_1 = (ObjectDisposedException_t1359 *)il2cpp_codegen_object_new (ObjectDisposedException_t1359_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m6355(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t3610 * L_2 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1116 * L_5 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_5, (String_t*)(String_t*) &_stringLiteral5677, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyCurrent_m21069_gshared (Enumerator_t3615 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t3615 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t3615 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1116 * L_1 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_1, (String_t*)(String_t*) &_stringLiteral5678, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m21070_gshared (Enumerator_t3615 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t3610 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21071_gshared (Transform_1_t3616 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m21072_gshared (Transform_1_t3616 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m21072((Transform_1_t3616 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21073_gshared (Transform_1_t3616 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m21074_gshared (Transform_1_t3616 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_9.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_9MethodDeclarations.h"


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" void ValueCollection__ctor_m21075_gshared (ValueCollection_t3617 * __this, Dictionary_2_t3610 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t3610 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*)(String_t*) &_stringLiteral4334, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t3610 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m21076_gshared (ValueCollection_t3617 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_0, (String_t*)(String_t*) &_stringLiteral5679, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m21077_gshared (ValueCollection_t3617 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_0, (String_t*)(String_t*) &_stringLiteral5679, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m21078_gshared (ValueCollection_t3617 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t3610 * L_0 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t3610 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t3610 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3610 *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m21079_gshared (ValueCollection_t3617 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_0, (String_t*)(String_t*) &_stringLiteral5679, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m21080_gshared (ValueCollection_t3617 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t3617 *)__this);
		Enumerator_t3618  L_0 = (( Enumerator_t3618  (*) (ValueCollection_t3617 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t3617 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3618  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m21081_gshared (ValueCollection_t3617 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t300* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t300*)((ObjectU5BU5D_t300*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t300* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t300* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t3617 *)__this);
		VirtActionInvoker2< ObjectU5BU5D_t300*, int32_t >::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32) */, (ValueCollection_t3617 *)__this, (ObjectU5BU5D_t300*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3610 * L_4 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t3610 *)L_4);
		(( void (*) (Dictionary_2_t3610 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3610 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3610 * L_7 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3616 * L_11 = (Transform_1_t3616 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3616 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3610 *)L_7);
		(( void (*) (Dictionary_2_t3610 *, Array_t *, int32_t, Transform_1_t3616 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t3610 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t3616 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m21082_gshared (ValueCollection_t3617 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t3617 *)__this);
		Enumerator_t3618  L_0 = (( Enumerator_t3618  (*) (ValueCollection_t3617 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t3617 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3618  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m21083_gshared (ValueCollection_t3617 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m21084_gshared (ValueCollection_t3617 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t3610 * L_0 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(1 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t793_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m21085_gshared (ValueCollection_t3617 * __this, ObjectU5BU5D_t300* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t3610 * L_0 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		ObjectU5BU5D_t300* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t3610 *)L_0);
		(( void (*) (Dictionary_2_t3610 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3610 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3610 * L_3 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		ObjectU5BU5D_t300* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3616 * L_7 = (Transform_1_t3616 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3616 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3610 *)L_3);
		(( void (*) (Dictionary_2_t3610 *, ObjectU5BU5D_t300*, int32_t, Transform_1_t3616 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t3610 *)L_3, (ObjectU5BU5D_t300*)L_4, (int32_t)L_5, (Transform_1_t3616 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t3618  ValueCollection_GetEnumerator_m21086_gshared (ValueCollection_t3617 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3610 * L_0 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		Enumerator_t3618  L_1 = {0};
		(( void (*) (Enumerator_t3618 *, Dictionary_2_t3610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t3610 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m21087_gshared (ValueCollection_t3617 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3610 * L_0 = (Dictionary_2_t3610 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t3610 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (Dictionary_2_t3610 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21088_gshared (Enumerator_t3618 * __this, Dictionary_2_t3610 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t3610 * L_0 = ___host;
		NullCheck((Dictionary_2_t3610 *)L_0);
		Enumerator_t3615  L_1 = (( Enumerator_t3615  (*) (Dictionary_2_t3610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3610 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21089_gshared (Enumerator_t3618 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3615 * L_0 = (Enumerator_t3615 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t3615 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t3615 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m21090_gshared (Enumerator_t3618 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3615 * L_0 = (Enumerator_t3615 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3615 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t3615 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21091_gshared (Enumerator_t3618 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3615 * L_0 = (Enumerator_t3615 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3615 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t3615 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m21092_gshared (Enumerator_t3618 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3615 * L_0 = (Enumerator_t3615 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t3611 * L_1 = (KeyValuePair_2_t3611 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3611 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21093_gshared (Transform_1_t3609 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1150  Transform_1_Invoke_m21094_gshared (Transform_1_t3609 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m21094((Transform_1_t3609 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1150  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1150  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1150  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21095_gshared (Transform_1_t3609 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1150  Transform_1_EndInvoke_m21096_gshared (Transform_1_t3609 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1150 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21097_gshared (Transform_1_t3619 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3611  Transform_1_Invoke_m21098_gshared (Transform_1_t3619 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m21098((Transform_1_t3619 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3611  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3611  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3611  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21099_gshared (Transform_1_t3619 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3611  Transform_1_EndInvoke_m21100_gshared (Transform_1_t3619 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3611 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21101_gshared (ShimEnumerator_t3620 * __this, Dictionary_2_t3610 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t3610 * L_0 = ___host;
		NullCheck((Dictionary_2_t3610 *)L_0);
		Enumerator_t3615  L_1 = (( Enumerator_t3615  (*) (Dictionary_2_t3610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3610 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21102_gshared (ShimEnumerator_t3620 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3615 * L_0 = (Enumerator_t3615 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3615 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t3615 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1360_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t1150  ShimEnumerator_get_Entry_m21103_gshared (ShimEnumerator_t3620 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2578);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t3615  L_0 = (Enumerator_t3615 )(__this->___host_enumerator_0);
		Enumerator_t3615  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t1150  L_3 = (DictionaryEntry_t1150 )InterfaceFuncInvoker0< DictionaryEntry_t1150  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1360_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21104_gshared (ShimEnumerator_t3620 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3611  V_0 = {0};
	{
		Enumerator_t3615 * L_0 = (Enumerator_t3615 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t3611  L_1 = (( KeyValuePair_2_t3611  (*) (Enumerator_t3615 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t3615 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t3611 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3611 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21105_gshared (ShimEnumerator_t3620 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3611  V_0 = {0};
	{
		Enumerator_t3615 * L_0 = (Enumerator_t3615 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t3611  L_1 = (( KeyValuePair_2_t3611  (*) (Enumerator_t3615 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t3615 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t3611 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3611 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern TypeInfo* DictionaryEntry_t1150_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m21106_gshared (ShimEnumerator_t3620 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t1150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2048);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t3620 *)__this);
		DictionaryEntry_t1150  L_0 = (DictionaryEntry_t1150 )VirtFuncInvoker0< DictionaryEntry_t1150  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry() */, (ShimEnumerator_t3620 *)__this);
		DictionaryEntry_t1150  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Vector3>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_25.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.Vector3>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_25MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector3>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector3>(System.Int32)
extern "C" Vector3_t48  Array_InternalArray__get_Item_TisVector3_t48_m26242_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisVector3_t48_m26242(__this, p0, method) (( Vector3_t48  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisVector3_t48_m26242_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m21156_gshared (InternalEnumerator_1_t3624 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector3>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21157_gshared (InternalEnumerator_1_t3624 * __this, const MethodInfo* method)
{
	{
		Vector3_t48  L_0 = (( Vector3_t48  (*) (InternalEnumerator_1_t3624 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t3624 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector3_t48  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m21158_gshared (InternalEnumerator_1_t3624 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector3>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m21159_gshared (InternalEnumerator_1_t3624 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5054((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.Vector3>::get_Current()
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" Vector3_t48  InternalEnumerator_1_get_Current_m21160_gshared (InternalEnumerator_1_t3624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1116 * L_1 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_1, (String_t*)(String_t*) &_stringLiteral3846, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1116 * L_3 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_3, (String_t*)(String_t*) &_stringLiteral3847, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5054((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Vector3_t48  L_8 = (( Vector3_t48  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector3>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector3>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Vector2>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_26.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.Vector2>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_26MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector2>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector2>(System.Int32)
extern "C" Vector2_t55  Array_InternalArray__get_Item_TisVector2_t55_m26253_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisVector2_t55_m26253(__this, p0, method) (( Vector2_t55  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisVector2_t55_m26253_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m21161_gshared (InternalEnumerator_1_t3625 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector2>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21162_gshared (InternalEnumerator_1_t3625 * __this, const MethodInfo* method)
{
	{
		Vector2_t55  L_0 = (( Vector2_t55  (*) (InternalEnumerator_1_t3625 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t3625 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector2_t55  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m21163_gshared (InternalEnumerator_1_t3625 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector2>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m21164_gshared (InternalEnumerator_1_t3625 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5054((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.Vector2>::get_Current()
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" Vector2_t55  InternalEnumerator_1_get_Current_m21165_gshared (InternalEnumerator_1_t3625 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1116 * L_1 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_1, (String_t*)(String_t*) &_stringLiteral3846, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1116 * L_3 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_3, (String_t*)(String_t*) &_stringLiteral3847, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5054((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Vector2_t55  L_8 = (( Vector2_t55  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector2>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Vector2>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::set_Item(System.Int32,T)
// System.Collections.Generic.List`1<UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_List_1_gen_9.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.List`1<UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_List_1_gen_9MethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1.h"
// System.Comparison`1<UnityEngine.Color>
#include "mscorlib_System_Comparison_1_gen_14.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1MethodDeclarations.h"
struct Array_t;
struct ColorU5BU5D_t139;
// Declaration System.Void System.Array::Resize<UnityEngine.Color>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Color>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisColor_t25_m26264_gshared (Object_t * __this /* static, unused */, ColorU5BU5D_t139** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisColor_t25_m26264(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ColorU5BU5D_t139**, int32_t, const MethodInfo*))Array_Resize_TisColor_t25_m26264_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
struct ColorU5BU5D_t139;
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Color>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Color>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisColor_t25_m26265_gshared (Object_t * __this /* static, unused */, ColorU5BU5D_t139* p0, Color_t25  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisColor_t25_m26265(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ColorU5BU5D_t139*, Color_t25 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisColor_t25_m26265_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct ColorU5BU5D_t139;
struct IComparer_1_t4121;
// Declaration System.Void System.Array::Sort<UnityEngine.Color>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Color>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisColor_t25_m26267_gshared (Object_t * __this /* static, unused */, ColorU5BU5D_t139* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisColor_t25_m26267(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ColorU5BU5D_t139*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisColor_t25_m26267_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct ColorU5BU5D_t139;
struct Comparison_1_t3631;
// Declaration System.Void System.Array::Sort<UnityEngine.Color>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Color>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisColor_t25_m26273_gshared (Object_t * __this /* static, unused */, ColorU5BU5D_t139* p0, int32_t p1, Comparison_1_t3631 * p2, const MethodInfo* method);
#define Array_Sort_TisColor_t25_m26273(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ColorU5BU5D_t139*, int32_t, Comparison_1_t3631 *, const MethodInfo*))Array_Sort_TisColor_t25_m26273_gshared)(__this /* static, unused */, p0, p1, p2, method)


// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
extern "C" void List_1__ctor_m1741_gshared (List_1_t232 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ColorU5BU5D_t139* L_0 = ((List_1_t232_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m21166_gshared (List_1_t232 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t232 *)__this);
		(( void (*) (List_1_t232 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t232 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ColorU5BU5D_t139* L_3 = ((List_1_t232_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t232 *)__this);
		(( void (*) (List_1_t232 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t232 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0043;
	}

IL_002b:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Color>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((ColorU5BU5D_t139*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t232 *)__this);
		(( void (*) (List_1_t232 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t232 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern "C" void List_1__ctor_m21167_gshared (List_1_t232 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_1 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_1, (String_t*)(String_t*) &_stringLiteral4306, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((ColorU5BU5D_t139*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.cctor()
extern "C" void List_1__cctor_m21168_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t232_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((ColorU5BU5D_t139*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21169_gshared (List_1_t232 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t232 *)__this);
		Enumerator_t3626  L_0 = (( Enumerator_t3626  (*) (List_1_t232 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t232 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t3626  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m21170_gshared (List_1_t232 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		ColorU5BU5D_t139* L_0 = (ColorU5BU5D_t139*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5108(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m21171_gshared (List_1_t232 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t232 *)__this);
		Enumerator_t3626  L_0 = (( Enumerator_t3626  (*) (List_1_t232 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t232 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t3626  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NullReferenceException_t671_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1119_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_Add_m21172_gshared (List_1_t232 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(881);
		InvalidCastException_t1119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1911);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t232 *)__this);
			VirtActionInvoker1< Color_t25  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(T) */, (List_1_t232 *)__this, (Color_t25 )((*(Color_t25 *)((Color_t25 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			int32_t L_1 = (int32_t)(__this->____size_2);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_002a;
		}

IL_0017:
		{
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t671_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1119_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001c;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.NullReferenceException)
		goto IL_001f;
	} // end catch (depth: 1)

CATCH_001c:
	{ // begin catch(System.InvalidCastException)
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		ArgumentException_t356 * L_2 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_2, (String_t*)(String_t*) &_stringLiteral5681, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t671_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1119_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m21173_gshared (List_1_t232 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(881);
		InvalidCastException_t1119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1911);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t232 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, Color_t25  >::Invoke(21 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.Color>::Contains(T) */, (List_1_t232 *)__this, (Color_t25 )((*(Color_t25 *)((Color_t25 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (bool)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t671_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1119_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t671_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1119_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m21174_gshared (List_1_t232 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(881);
		InvalidCastException_t1119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1911);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t232 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Color_t25  >::Invoke(25 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::IndexOf(T) */, (List_1_t232 *)__this, (Color_t25 )((*(Color_t25 *)((Color_t25 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (int32_t)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t671_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1119_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t671_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1119_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Insert_m21175_gshared (List_1_t232 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(881);
		InvalidCastException_t1119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1911);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t232 *)__this);
		(( void (*) (List_1_t232 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t232 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t232 *)__this);
			VirtActionInvoker2< int32_t, Color_t25  >::Invoke(26 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Insert(System.Int32,T) */, (List_1_t232 *)__this, (int32_t)L_1, (Color_t25 )((*(Color_t25 *)((Color_t25 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0029;
		}

IL_0016:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t671_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1119_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001b;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.NullReferenceException)
		goto IL_001e;
	} // end catch (depth: 1)

CATCH_001b:
	{ // begin catch(System.InvalidCastException)
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		ArgumentException_t356 * L_3 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_3, (String_t*)(String_t*) &_stringLiteral5681, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t671_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1119_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m21176_gshared (List_1_t232 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(881);
		InvalidCastException_t1119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1911);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t232 *)__this);
			VirtFuncInvoker1< bool, Color_t25  >::Invoke(23 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.Color>::Remove(T) */, (List_1_t232 *)__this, (Color_t25 )((*(Color_t25 *)((Color_t25 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0017;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t671_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1119_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21177_gshared (List_1_t232 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m21178_gshared (List_1_t232 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m21179_gshared (List_1_t232 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t232 *)__this);
		Color_t25  L_1 = (Color_t25 )VirtFuncInvoker1< Color_t25 , int32_t >::Invoke(28 /* T System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32) */, (List_1_t232 *)__this, (int32_t)L_0);
		Color_t25  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t671_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1119_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_set_Item_m21180_gshared (List_1_t232 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(881);
		InvalidCastException_t1119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1911);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t232 *)__this);
			VirtActionInvoker2< int32_t, Color_t25  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color>::set_Item(System.Int32,T) */, (List_1_t232 *)__this, (int32_t)L_0, (Color_t25 )((*(Color_t25 *)((Color_t25 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0022;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t671_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1119_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		ArgumentException_t356 * L_2 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_2, (String_t*)(String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(T)
extern "C" void List_1_Add_m21181_gshared (List_1_t232 * __this, Color_t25  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		ColorU5BU5D_t139* L_1 = (ColorU5BU5D_t139*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((List_1_t232 *)__this);
		(( void (*) (List_1_t232 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t232 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0017:
	{
		ColorU5BU5D_t139* L_2 = (ColorU5BU5D_t139*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		Color_t25  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((Color_t25 *)(Color_t25 *)SZArrayLdElema(L_2, L_5)) = (Color_t25 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21182_gshared (List_1_t232 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		ColorU5BU5D_t139* L_3 = (ColorU5BU5D_t139*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		NullCheck((List_1_t232 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t232 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t232 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m5256(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m5256(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t232 *)__this);
		(( void (*) (List_1_t232 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t232 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21183_gshared (List_1_t232 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Color>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t232 *)__this);
		(( void (*) (List_1_t232 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t232 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		ColorU5BU5D_t139* L_5 = (ColorU5BU5D_t139*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< ColorU5BU5D_t139*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Color>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (ColorU5BU5D_t139*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m21184_gshared (List_1_t232 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	Color_t25  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Color>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0017;
		}

IL_0009:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			Color_t25  L_3 = (Color_t25 )InterfaceFuncInvoker0< Color_t25  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Color>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (Color_t25 )L_3;
			Color_t25  L_4 = V_0;
			NullCheck((List_1_t232 *)__this);
			VirtActionInvoker1< Color_t25  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(T) */, (List_1_t232 *)__this, (Color_t25 )L_4);
		}

IL_0017:
		{
			Object_t* L_5 = V_1;
			NullCheck((Object_t *)L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, (Object_t *)L_5);
			if (L_6)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2C, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_0025;
			}
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(33)
		}

IL_0025:
		{
			Object_t* L_8 = V_1;
			NullCheck((Object_t *)L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, (Object_t *)L_8);
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Clear()
extern "C" void List_1_Clear_m21185_gshared (List_1_t232 * __this, const MethodInfo* method)
{
	{
		ColorU5BU5D_t139* L_0 = (ColorU5BU5D_t139*)(__this->____items_1);
		ColorU5BU5D_t139* L_1 = (ColorU5BU5D_t139*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m6339(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color>::Contains(T)
extern "C" bool List_1_Contains_m21186_gshared (List_1_t232 * __this, Color_t25  ___item, const MethodInfo* method)
{
	{
		ColorU5BU5D_t139* L_0 = (ColorU5BU5D_t139*)(__this->____items_1);
		Color_t25  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, ColorU5BU5D_t139*, Color_t25 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->method)(NULL /*static, unused*/, (ColorU5BU5D_t139*)L_0, (Color_t25 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::CopyTo(T[])
extern "C" void List_1_CopyTo_m21187_gshared (List_1_t232 * __this, ColorU5BU5D_t139* ___array, const MethodInfo* method)
{
	{
		ColorU5BU5D_t139* L_0 = (ColorU5BU5D_t139*)(__this->____items_1);
		ColorU5BU5D_t139* L_1 = ___array;
		int32_t L_2 = (int32_t)(__this->____size_2);
		Array_Copy_m5108(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m21188_gshared (List_1_t232 * __this, ColorU5BU5D_t139* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		ColorU5BU5D_t139* L_0 = (ColorU5BU5D_t139*)(__this->____items_1);
		ColorU5BU5D_t139* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5108(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Color>::GetEnumerator()
extern "C" Enumerator_t3626  List_1_GetEnumerator_m21189_gshared (List_1_t232 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3626  L_0 = {0};
		(( void (*) (Enumerator_t3626 *, List_1_t232 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(&L_0, (List_1_t232 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m21190_gshared (List_1_t232 * __this, Color_t25  ___item, const MethodInfo* method)
{
	{
		ColorU5BU5D_t139* L_0 = (ColorU5BU5D_t139*)(__this->____items_1);
		Color_t25  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, ColorU5BU5D_t139*, Color_t25 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->method)(NULL /*static, unused*/, (ColorU5BU5D_t139*)L_0, (Color_t25 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21191_gshared (List_1_t232 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		ColorU5BU5D_t139* L_5 = (ColorU5BU5D_t139*)(__this->____items_1);
		int32_t L_6 = ___start;
		ColorU5BU5D_t139* L_7 = (ColorU5BU5D_t139*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m5108(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0031:
	{
		int32_t L_12 = (int32_t)(__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		ColorU5BU5D_t139* L_15 = (ColorU5BU5D_t139*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m6339(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckIndex_m21192_gshared (List_1_t232 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t694 * L_3 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_3, (String_t*)(String_t*) &_stringLiteral2137, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m21193_gshared (List_1_t232 * __this, int32_t ___index, Color_t25  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t232 *)__this);
		(( void (*) (List_1_t232 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t232 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		ColorU5BU5D_t139* L_2 = (ColorU5BU5D_t139*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		NullCheck((List_1_t232 *)__this);
		(( void (*) (List_1_t232 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t232 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t232 *)__this);
		(( void (*) (List_1_t232 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)((List_1_t232 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		ColorU5BU5D_t139* L_4 = (ColorU5BU5D_t139*)(__this->____items_1);
		int32_t L_5 = ___index;
		Color_t25  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Color_t25 *)(Color_t25 *)SZArrayLdElema(L_4, L_5)) = (Color_t25 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckCollection_m21194_gshared (List_1_t232 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*)(String_t*) &_stringLiteral5682, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color>::Remove(T)
extern "C" bool List_1_Remove_m21195_gshared (List_1_t232 * __this, Color_t25  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Color_t25  L_0 = ___item;
		NullCheck((List_1_t232 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Color_t25  >::Invoke(25 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::IndexOf(T) */, (List_1_t232 *)__this, (Color_t25 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t232 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(27 /* System.Void System.Collections.Generic.List`1<UnityEngine.Color>::RemoveAt(System.Int32) */, (List_1_t232 *)__this, (int32_t)L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern "C" void List_1_RemoveAt_m21196_gshared (List_1_t232 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t694 * L_3 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_3, (String_t*)(String_t*) &_stringLiteral2137, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t232 *)__this);
		(( void (*) (List_1_t232 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)((List_1_t232 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		ColorU5BU5D_t139* L_5 = (ColorU5BU5D_t139*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m6339(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Sort()
extern TypeInfo* Comparer_1_t3629_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m21197_gshared (List_1_t232 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t3629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8637);
		s_Il2CppMethodIntialized = true;
	}
	{
		ColorU5BU5D_t139* L_0 = (ColorU5BU5D_t139*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t3629_il2cpp_TypeInfo_var);
		Comparer_1_t3629 * L_2 = (( Comparer_1_t3629 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		(( void (*) (Object_t * /* static, unused */, ColorU5BU5D_t139*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, (ColorU5BU5D_t139*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m21198_gshared (List_1_t232 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		ColorU5BU5D_t139* L_0 = (ColorU5BU5D_t139*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Object_t* L_2 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, ColorU5BU5D_t139*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, (ColorU5BU5D_t139*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21199_gshared (List_1_t232 * __this, Comparison_1_t3631 * ___comparison, const MethodInfo* method)
{
	{
		ColorU5BU5D_t139* L_0 = (ColorU5BU5D_t139*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t3631 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, ColorU5BU5D_t139*, int32_t, Comparison_1_t3631 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(NULL /*static, unused*/, (ColorU5BU5D_t139*)L_0, (int32_t)L_1, (Comparison_1_t3631 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.Color>::ToArray()
extern "C" ColorU5BU5D_t139* List_1_ToArray_m21200_gshared (List_1_t232 * __this, const MethodInfo* method)
{
	ColorU5BU5D_t139* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (ColorU5BU5D_t139*)((ColorU5BU5D_t139*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		ColorU5BU5D_t139* L_1 = (ColorU5BU5D_t139*)(__this->____items_1);
		ColorU5BU5D_t139* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m9843(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		ColorU5BU5D_t139* L_4 = V_0;
		return L_4;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21201_gshared (List_1_t232 * __this, const MethodInfo* method)
{
	{
		ColorU5BU5D_t139* L_0 = (ColorU5BU5D_t139*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m21202_gshared (List_1_t232 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_2 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m9886(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		ColorU5BU5D_t139** L_3 = (ColorU5BU5D_t139**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, ColorU5BU5D_t139**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(NULL /*static, unused*/, (ColorU5BU5D_t139**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::get_Count()
extern "C" int32_t List_1_get_Count_m21203_gshared (List_1_t232 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern "C" Color_t25  List_1_get_Item_m21204_gshared (List_1_t232 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_2 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_2, (String_t*)(String_t*) &_stringLiteral2137, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		ColorU5BU5D_t139* L_3 = (ColorU5BU5D_t139*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Color_t25 *)(Color_t25 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Item_m21205_gshared (List_1_t232 * __this, int32_t ___index, Color_t25  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t232 *)__this);
		(( void (*) (List_1_t232 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t232 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_3 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_3, (String_t*)(String_t*) &_stringLiteral2137, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		ColorU5BU5D_t139* L_4 = (ColorU5BU5D_t139*)(__this->____items_1);
		int32_t L_5 = ___index;
		Color_t25  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Color_t25 *)(Color_t25 *)SZArrayLdElema(L_4, L_5)) = (Color_t25 )L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Color>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m21206_gshared (Enumerator_t3626 * __this, List_1_t232 * ___l, const MethodInfo* method)
{
	{
		List_1_t232 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t232 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Color>::System.Collections.IEnumerator.get_Current()
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21207_gshared (Enumerator_t3626 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t3626 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3626 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1116 * L_1 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5032(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		Color_t25  L_2 = (Color_t25 )(__this->___current_3);
		Color_t25  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Color>::Dispose()
extern "C" void Enumerator_Dispose_m21208_gshared (Enumerator_t3626 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t232 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Color>::VerifyState()
extern TypeInfo* ObjectDisposedException_t1359_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m21209_gshared (Enumerator_t3626 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2567);
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t232 * L_0 = (List_1_t232 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t3626  L_1 = (*(Enumerator_t3626 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m1416((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t1359 * L_5 = (ObjectDisposedException_t1359 *)il2cpp_codegen_object_new (ObjectDisposedException_t1359_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m6355(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t232 * L_7 = (List_1_t232 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t1116 * L_9 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_9, (String_t*)(String_t*) &_stringLiteral5683, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Color>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21210_gshared (Enumerator_t3626 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t3626 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3626 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t232 * L_2 = (List_1_t232 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t232 * L_4 = (List_1_t232 *)(__this->___l_0);
		NullCheck(L_4);
		ColorU5BU5D_t139* L_5 = (ColorU5BU5D_t139*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(Color_t25 *)(Color_t25 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Color>::get_Current()
extern "C" Color_t25  Enumerator_get_Current_m21211_gshared (Enumerator_t3626 * __this, const MethodInfo* method)
{
	{
		Color_t25  L_0 = (Color_t25 )(__this->___current_3);
		return L_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_1.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_1MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::.ctor()
extern "C" void EqualityComparer_1__ctor_m21212_gshared (EqualityComparer_1_t3627 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t3092_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m21213_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t3092_0_0_0_var = il2cpp_codegen_type_from_index(8081);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(GenericEqualityComparer_1_t3092_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_4 = (TypeU5BU5D_t570*)((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t570* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t570*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m3582(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t3627_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t3627 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t3628 * L_8 = (DefaultComparer_t3628 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t3628 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t3627_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m21214_gshared (EqualityComparer_1_t3627 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t3627 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Color_t25  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::GetHashCode(T) */, (EqualityComparer_1_t3627 *)__this, (Color_t25 )((*(Color_t25 *)((Color_t25 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m21215_gshared (EqualityComparer_1_t3627 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t3627 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Color_t25 , Color_t25  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::Equals(T,T) */, (EqualityComparer_1_t3627 *)__this, (Color_t25 )((*(Color_t25 *)((Color_t25 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Color_t25 )((*(Color_t25 *)((Color_t25 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::get_Default()
extern "C" EqualityComparer_1_t3627 * EqualityComparer_1_get_Default_m21216_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t3627 * L_0 = ((EqualityComparer_1_t3627_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<UnityEngine.Color>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::.ctor()
extern TypeInfo* EqualityComparer_1_t3627_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m21217_gshared (DefaultComparer_t3628 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8633);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t3627 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3627_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t3627 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t3627 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21218_gshared (DefaultComparer_t3628 * __this, Color_t25  ___obj, const MethodInfo* method)
{
	{
		Color_t25  L_0 = ___obj;
		Color_t25  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21219_gshared (DefaultComparer_t3628 * __this, Color_t25  ___x, Color_t25  ___y, const MethodInfo* method)
{
	{
		Color_t25  L_0 = ___x;
		Color_t25  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Color_t25  L_3 = ___y;
		Color_t25  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Color_t25  L_6 = ___y;
		Color_t25  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1MethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Color>::.ctor()
extern "C" void Comparer_1__ctor_m21220_gshared (Comparer_1_t3629 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Color>::.cctor()
extern const Il2CppType* GenericComparer_1_t3101_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m21221_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t3101_0_0_0_var = il2cpp_codegen_type_from_index(8155);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(GenericComparer_1_t3101_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_4 = (TypeU5BU5D_t570*)((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t570* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t570*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m3582(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t3629_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t3629 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t3630 * L_8 = (DefaultComparer_t3630 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t3630 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t3629_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Color>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m21222_gshared (Comparer_1_t3629 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t3629 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Color_t25 , Color_t25  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Color>::Compare(T,T) */, (Comparer_1_t3629 *)__this, (Color_t25 )((*(Color_t25 *)((Color_t25 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Color_t25 )((*(Color_t25 *)((Color_t25 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t356 * L_8 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4995(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Color>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Color>::get_Default()
extern "C" Comparer_1_t3629 * Comparer_1_get_Default_m21223_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t3629 * L_0 = ((Comparer_1_t3629_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.Color>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.IComparable`1<UnityEngine.Color>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Color>::.ctor()
extern TypeInfo* Comparer_1_t3629_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m21224_gshared (DefaultComparer_t3630 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t3629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8637);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t3629 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t3629_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t3629 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t3629 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Color>::Compare(T,T)
extern TypeInfo* IComparable_t374_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m21225_gshared (DefaultComparer_t3630 * __this, Color_t25  ___x, Color_t25  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(256);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Color_t25  L_0 = ___x;
		Color_t25  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		Color_t25  L_3 = ___y;
		Color_t25  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		Color_t25  L_6 = ___y;
		Color_t25  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		Color_t25  L_9 = ___x;
		Color_t25  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		Color_t25  L_12 = ___x;
		Color_t25  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		Color_t25  L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, Color_t25  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.Color>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (Color_t25 )L_15);
		return L_16;
	}

IL_003e:
	{
		Color_t25  L_17 = ___x;
		Color_t25  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t374_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		Color_t25  L_20 = ___x;
		Color_t25  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		Color_t25  L_23 = ___y;
		Color_t25  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck((Object_t *)((Object_t *)Castclass(L_22, IComparable_t374_il2cpp_TypeInfo_var)));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t374_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_22, IComparable_t374_il2cpp_TypeInfo_var)), (Object_t *)L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t356 * L_27 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_27, (String_t*)(String_t*) &_stringLiteral5684, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Comparison`1<UnityEngine.Color>
#include "mscorlib_System_Comparison_1_gen_14MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m21226_gshared (Comparison_1_t3631 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.Color>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m21227_gshared (Comparison_1_t3631 * __this, Color_t25  ___x, Color_t25  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m21227((Comparison_1_t3631 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Color_t25  ___x, Color_t25  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Color_t25  ___x, Color_t25  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.Color>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* Color_t25_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m21228_gshared (Comparison_1_t3631 * __this, Color_t25  ___x, Color_t25  ___y, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Color_t25_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(Color_t25_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m21229_gshared (Comparison_1_t3631 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// BetterList`1<UnityEngine.Vector3>
#include "AssemblyU2DCSharp_BetterList_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// BetterList`1<UnityEngine.Vector3>
#include "AssemblyU2DCSharp_BetterList_1_gen_0MethodDeclarations.h"

// BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector3>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_0.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3.h"
// System.Comparison`1<UnityEngine.Vector3>
#include "mscorlib_System_Comparison_1_gen_15.h"
// BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector3>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_0MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3MethodDeclarations.h"
// System.Comparison`1<UnityEngine.Vector3>
#include "mscorlib_System_Comparison_1_gen_15MethodDeclarations.h"


// System.Void BetterList`1<UnityEngine.Vector3>::.ctor()
extern "C" void BetterList_1__ctor_m1631_gshared (BetterList_1_t184 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> BetterList`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Object_t* BetterList_1_GetEnumerator_m21245_gshared (BetterList_1_t184 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator2_t3635 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator2_t3635 * L_0 = (U3CGetEnumeratorU3Ec__Iterator2_t3635 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator2_t3635 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CGetEnumeratorU3Ec__Iterator2_t3635 *)L_0;
		U3CGetEnumeratorU3Ec__Iterator2_t3635 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CGetEnumeratorU3Ec__Iterator2_t3635 * L_2 = V_0;
		return L_2;
	}
}
// T BetterList`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C" Vector3_t48  BetterList_1_get_Item_m1637_gshared (BetterList_1_t184 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		Vector3U5BU5D_t290* L_0 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_0, L_2));
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
extern "C" void BetterList_1_set_Item_m21246_gshared (BetterList_1_t184 * __this, int32_t ___i, Vector3_t48  ___value, const MethodInfo* method)
{
	{
		Vector3U5BU5D_t290* L_0 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		Vector3_t48  L_2 = ___value;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		*((Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_0, L_1)) = (Vector3_t48 )L_2;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::AllocateMore()
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_AllocateMore_m21247_gshared (BetterList_1_t184 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t290* V_0 = {0};
	Vector3U5BU5D_t290* G_B3_0 = {0};
	{
		Vector3U5BU5D_t290* L_0 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		Vector3U5BU5D_t290* L_1 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Max_m1369(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))<<(int32_t)1)), (int32_t)((int32_t)32), /*hidden argument*/NULL);
		G_B3_0 = ((Vector3U5BU5D_t290*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_2));
		goto IL_002d;
	}

IL_0026:
	{
		G_B3_0 = ((Vector3U5BU5D_t290*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), ((int32_t)32)));
	}

IL_002d:
	{
		V_0 = (Vector3U5BU5D_t290*)G_B3_0;
		Vector3U5BU5D_t290* L_3 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		Vector3U5BU5D_t290* L_5 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		Vector3U5BU5D_t290* L_6 = V_0;
		NullCheck((Array_t *)L_5);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, (Array_t *)L_5, (Array_t *)(Array_t *)L_6, (int32_t)0);
	}

IL_0052:
	{
		Vector3U5BU5D_t290* L_7 = V_0;
		__this->___buffer_0 = L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::Trim()
extern "C" void BetterList_1_Trim_m21248_gshared (BetterList_1_t184 * __this, const MethodInfo* method)
{
	Vector3U5BU5D_t290* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector3U5BU5D_t290* L_2 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)(((int32_t)(((Array_t *)L_2)->max_length))))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		V_0 = (Vector3U5BU5D_t290*)((Vector3U5BU5D_t290*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		V_1 = (int32_t)0;
		goto IL_0049;
	}

IL_0032:
	{
		Vector3U5BU5D_t290* L_4 = V_0;
		int32_t L_5 = V_1;
		Vector3U5BU5D_t290* L_6 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_4, L_5)) = (Vector3_t48 )(*(Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_6, L_8));
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0032;
		}
	}
	{
		Vector3U5BU5D_t290* L_12 = V_0;
		__this->___buffer_0 = L_12;
	}

IL_005c:
	{
		goto IL_0068;
	}

IL_0061:
	{
		__this->___buffer_0 = (Vector3U5BU5D_t290*)NULL;
	}

IL_0068:
	{
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::Clear()
extern "C" void BetterList_1_Clear_m1634_gshared (BetterList_1_t184 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::Release()
extern "C" void BetterList_1_Release_m21249_gshared (BetterList_1_t184 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		__this->___buffer_0 = (Vector3U5BU5D_t290*)NULL;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::Add(T)
extern "C" void BetterList_1_Add_m1638_gshared (BetterList_1_t184 * __this, Vector3_t48  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector3U5BU5D_t290* L_0 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector3U5BU5D_t290* L_2 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t184 *)__this);
		(( void (*) (BetterList_1_t184 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t184 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		Vector3U5BU5D_t290* L_3 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_4 = (int32_t)(__this->___size_1);
		int32_t L_5 = (int32_t)L_4;
		V_0 = (int32_t)L_5;
		__this->___size_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_0;
		Vector3_t48  L_7 = ___item;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_6);
		*((Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_3, L_6)) = (Vector3_t48 )L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::Insert(System.Int32,T)
extern "C" void BetterList_1_Insert_m21250_gshared (BetterList_1_t184 * __this, int32_t ___index, Vector3_t48  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector3U5BU5D_t290* L_0 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector3U5BU5D_t290* L_2 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t184 *)__this);
		(( void (*) (BetterList_1_t184 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t184 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		int32_t L_3 = ___index;
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_5 = (int32_t)(__this->___size_1);
		V_0 = (int32_t)L_5;
		goto IL_005a;
	}

IL_003c:
	{
		Vector3U5BU5D_t290* L_6 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_7 = V_0;
		Vector3U5BU5D_t290* L_8 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9-(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)L_9-(int32_t)1));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		*((Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_6, L_7)) = (Vector3_t48 )(*(Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_11-(int32_t)1));
	}

IL_005a:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___index;
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_003c;
		}
	}
	{
		Vector3U5BU5D_t290* L_14 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_15 = ___index;
		Vector3_t48  L_16 = ___item;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		*((Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_14, L_15)) = (Vector3_t48 )L_16;
		int32_t L_17 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_17+(int32_t)1));
		goto IL_0088;
	}

IL_0081:
	{
		Vector3_t48  L_18 = ___item;
		NullCheck((BetterList_1_t184 *)__this);
		(( void (*) (BetterList_1_t184 *, Vector3_t48 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((BetterList_1_t184 *)__this, (Vector3_t48 )L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_0088:
	{
		return;
	}
}
// System.Boolean BetterList`1<UnityEngine.Vector3>::Contains(T)
extern "C" bool BetterList_1_Contains_m21251_gshared (BetterList_1_t184 * __this, Vector3_t48  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector3U5BU5D_t290* L_0 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = (int32_t)0;
		goto IL_003c;
	}

IL_0014:
	{
		Vector3U5BU5D_t290* L_1 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		Vector3_t48  L_3 = ___item;
		Vector3_t48  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_4);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), ((Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_1, L_2))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), ((Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_1, L_2))), (Object_t *)L_5);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		return 1;
	}

IL_0038:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}
}
// System.Boolean BetterList`1<UnityEngine.Vector3>::Remove(T)
extern TypeInfo* EqualityComparer_1_t3636_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t48_il2cpp_TypeInfo_var;
extern "C" bool BetterList_1_Remove_m21252_gshared (BetterList_1_t184 * __this, Vector3_t48  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8658);
		Vector3_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		s_Il2CppMethodIntialized = true;
	}
	EqualityComparer_1_t3636 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t48  V_3 = {0};
	{
		Vector3U5BU5D_t290* L_0 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0096;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3636_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3636 * L_1 = (( EqualityComparer_1_t3636 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		V_0 = (EqualityComparer_1_t3636 *)L_1;
		V_1 = (int32_t)0;
		goto IL_008a;
	}

IL_0018:
	{
		EqualityComparer_1_t3636 * L_2 = V_0;
		Vector3U5BU5D_t290* L_3 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Vector3_t48  L_6 = ___item;
		NullCheck((EqualityComparer_1_t3636 *)L_2);
		bool L_7 = (bool)VirtFuncInvoker2< bool, Vector3_t48 , Vector3_t48  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::Equals(!0,!0) */, (EqualityComparer_1_t3636 *)L_2, (Vector3_t48 )(*(Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_3, L_5)), (Vector3_t48 )L_6);
		if (!L_7)
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_8 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_8-(int32_t)1));
		Vector3U5BU5D_t290* L_9 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_10 = V_1;
		Initobj (Vector3_t48_il2cpp_TypeInfo_var, (&V_3));
		Vector3_t48  L_11 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		*((Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_9, L_10)) = (Vector3_t48 )L_11;
		int32_t L_12 = V_1;
		V_2 = (int32_t)L_12;
		goto IL_0078;
	}

IL_005a:
	{
		Vector3U5BU5D_t290* L_13 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_14 = V_2;
		Vector3U5BU5D_t290* L_15 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		*((Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_13, L_14)) = (Vector3_t48 )(*(Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_15, L_17));
		int32_t L_18 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0078:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_005a;
		}
	}
	{
		return 1;
	}

IL_0086:
	{
		int32_t L_21 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_008a:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0018;
		}
	}

IL_0096:
	{
		return 0;
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
extern TypeInfo* Vector3_t48_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_RemoveAt_m21253_gshared (BetterList_1_t184 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t48  V_1 = {0};
	{
		Vector3U5BU5D_t290* L_0 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_3-(int32_t)1));
		Vector3U5BU5D_t290* L_4 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_5 = ___index;
		Initobj (Vector3_t48_il2cpp_TypeInfo_var, (&V_1));
		Vector3_t48  L_6 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_4, L_5)) = (Vector3_t48 )L_6;
		int32_t L_7 = ___index;
		V_0 = (int32_t)L_7;
		goto IL_005f;
	}

IL_0041:
	{
		Vector3U5BU5D_t290* L_8 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		Vector3U5BU5D_t290* L_10 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)));
		int32_t L_12 = ((int32_t)((int32_t)L_11+(int32_t)1));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_8, L_9)) = (Vector3_t48 )(*(Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_10, L_12));
		int32_t L_13 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0041;
		}
	}

IL_006b:
	{
		return;
	}
}
// T BetterList`1<UnityEngine.Vector3>::Pop()
extern TypeInfo* Vector3_t48_il2cpp_TypeInfo_var;
extern "C" Vector3_t48  BetterList_1_Pop_m21254_gshared (BetterList_1_t184 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t48  V_0 = {0};
	int32_t V_1 = 0;
	Vector3_t48  V_2 = {0};
	Vector3_t48  V_3 = {0};
	{
		Vector3U5BU5D_t290* L_0 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		Vector3U5BU5D_t290* L_2 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_3 = (int32_t)(__this->___size_1);
		int32_t L_4 = (int32_t)((int32_t)((int32_t)L_3-(int32_t)1));
		V_1 = (int32_t)L_4;
		__this->___size_1 = L_4;
		int32_t L_5 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		int32_t L_6 = L_5;
		V_0 = (Vector3_t48 )(*(Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_2, L_6));
		Vector3U5BU5D_t290* L_7 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_8 = (int32_t)(__this->___size_1);
		Initobj (Vector3_t48_il2cpp_TypeInfo_var, (&V_2));
		Vector3_t48  L_9 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_7, L_8)) = (Vector3_t48 )L_9;
		Vector3_t48  L_10 = V_0;
		return L_10;
	}

IL_004f:
	{
		Initobj (Vector3_t48_il2cpp_TypeInfo_var, (&V_3));
		Vector3_t48  L_11 = V_3;
		return L_11;
	}
}
// T[] BetterList`1<UnityEngine.Vector3>::ToArray()
extern "C" Vector3U5BU5D_t290* BetterList_1_ToArray_m1613_gshared (BetterList_1_t184 * __this, const MethodInfo* method)
{
	{
		NullCheck((BetterList_1_t184 *)__this);
		(( void (*) (BetterList_1_t184 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((BetterList_1_t184 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		Vector3U5BU5D_t290* L_0 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		return L_0;
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::Sort(System.Comparison`1<T>)
extern "C" void BetterList_1_Sort_m21255_gshared (BetterList_1_t184 * __this, Comparison_1_t3638 * ___comparer, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Vector3_t48  V_2 = {0};
	{
		V_0 = (bool)1;
		goto IL_007e;
	}

IL_0007:
	{
		V_0 = (bool)0;
		V_1 = (int32_t)1;
		goto IL_0072;
	}

IL_0010:
	{
		Comparison_1_t3638 * L_0 = ___comparer;
		Vector3U5BU5D_t290* L_1 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2-(int32_t)1)));
		int32_t L_3 = ((int32_t)((int32_t)L_2-(int32_t)1));
		Vector3U5BU5D_t290* L_4 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Comparison_1_t3638 *)L_0);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Vector3_t48 , Vector3_t48  >::Invoke(11 /* System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(!0,!0) */, (Comparison_1_t3638 *)L_0, (Vector3_t48 )(*(Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_1, L_3)), (Vector3_t48 )(*(Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_4, L_6)));
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		Vector3U5BU5D_t290* L_8 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (Vector3_t48 )(*(Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_8, L_10));
		Vector3U5BU5D_t290* L_11 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_12 = V_1;
		Vector3U5BU5D_t290* L_13 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_14 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, ((int32_t)((int32_t)L_14-(int32_t)1)));
		int32_t L_15 = ((int32_t)((int32_t)L_14-(int32_t)1));
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		*((Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_11, L_12)) = (Vector3_t48 )(*(Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_13, L_15));
		Vector3U5BU5D_t290* L_16 = (Vector3U5BU5D_t290*)(__this->___buffer_0);
		int32_t L_17 = V_1;
		Vector3_t48  L_18 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)((int32_t)L_17-(int32_t)1)));
		*((Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_16, ((int32_t)((int32_t)L_17-(int32_t)1)))) = (Vector3_t48 )L_18;
		V_0 = (bool)1;
	}

IL_006e:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0072:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0010;
		}
	}

IL_007e:
	{
		bool L_22 = V_0;
		if (L_22)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.UInt32
#include "mscorlib_System_UInt32.h"


// System.Void BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector3>::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator2__ctor_m21256_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3635 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector3>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern "C" Vector3_t48  U3CGetEnumeratorU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m21257_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3635 * __this, const MethodInfo* method)
{
	{
		Vector3_t48  L_0 = (Vector3_t48 )(__this->___U24current_2);
		return L_0;
	}
}
// System.Object BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector3>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m21258_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3635 * __this, const MethodInfo* method)
{
	{
		Vector3_t48  L_0 = (Vector3_t48 )(__this->___U24current_2);
		Vector3_t48  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), &L_1);
		return L_2;
	}
}
// System.Boolean BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector3>::MoveNext()
extern "C" bool U3CGetEnumeratorU3Ec__Iterator2_MoveNext_m21259_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3635 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_1);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0090;
	}

IL_0021:
	{
		BetterList_1_t184 * L_2 = (BetterList_1_t184 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		Vector3U5BU5D_t290* L_3 = (Vector3U5BU5D_t290*)(L_2->___buffer_0);
		if (!L_3)
		{
			goto IL_0089;
		}
	}
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_0073;
	}

IL_003d:
	{
		BetterList_1_t184 * L_4 = (BetterList_1_t184 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_4);
		Vector3U5BU5D_t290* L_5 = (Vector3U5BU5D_t290*)(L_4->___buffer_0);
		int32_t L_6 = (int32_t)(__this->___U3CiU3E__0_0);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		__this->___U24current_2 = (*(Vector3_t48 *)(Vector3_t48 *)SZArrayLdElema(L_5, L_7));
		__this->___U24PC_1 = 1;
		goto IL_0092;
	}

IL_0065:
	{
		int32_t L_8 = (int32_t)(__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_9 = (int32_t)(__this->___U3CiU3E__0_0);
		BetterList_1_t184 * L_10 = (BetterList_1_t184 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)(L_10->___size_1);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_003d;
		}
	}

IL_0089:
	{
		__this->___U24PC_1 = (-1);
	}

IL_0090:
	{
		return 0;
	}

IL_0092:
	{
		return 1;
	}
	// Dead block : IL_0094: ldloc.1
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector3>::Dispose()
extern "C" void U3CGetEnumeratorU3Ec__Iterator2_Dispose_m21260_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3635 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector3>::Reset()
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator2_Reset_m21261_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3635 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1312(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_2.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_2MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::.ctor()
extern "C" void EqualityComparer_1__ctor_m21262_gshared (EqualityComparer_1_t3636 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t3092_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m21263_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t3092_0_0_0_var = il2cpp_codegen_type_from_index(8081);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(GenericEqualityComparer_1_t3092_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_4 = (TypeU5BU5D_t570*)((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t570* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t570*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m3582(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t3636_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t3636 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t3637 * L_8 = (DefaultComparer_t3637 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t3637 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t3636_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m21264_gshared (EqualityComparer_1_t3636 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t3636 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector3_t48  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::GetHashCode(T) */, (EqualityComparer_1_t3636 *)__this, (Vector3_t48 )((*(Vector3_t48 *)((Vector3_t48 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m21265_gshared (EqualityComparer_1_t3636 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t3636 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Vector3_t48 , Vector3_t48  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::Equals(T,T) */, (EqualityComparer_1_t3636 *)__this, (Vector3_t48 )((*(Vector3_t48 *)((Vector3_t48 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Vector3_t48 )((*(Vector3_t48 *)((Vector3_t48 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::get_Default()
extern "C" EqualityComparer_1_t3636 * EqualityComparer_1_get_Default_m21266_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t3636 * L_0 = ((EqualityComparer_1_t3636_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<UnityEngine.Vector3>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern TypeInfo* EqualityComparer_1_t3636_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m21267_gshared (DefaultComparer_t3637 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8658);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t3636 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3636_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t3636 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t3636 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21268_gshared (DefaultComparer_t3637 * __this, Vector3_t48  ___obj, const MethodInfo* method)
{
	{
		Vector3_t48  L_0 = ___obj;
		Vector3_t48  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21269_gshared (DefaultComparer_t3637 * __this, Vector3_t48  ___x, Vector3_t48  ___y, const MethodInfo* method)
{
	{
		Vector3_t48  L_0 = ___x;
		Vector3_t48  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Vector3_t48  L_3 = ___y;
		Vector3_t48  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Vector3_t48  L_6 = ___y;
		Vector3_t48  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m21270_gshared (Comparison_1_t3638 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m21271_gshared (Comparison_1_t3638 * __this, Vector3_t48  ___x, Vector3_t48  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m21271((Comparison_1_t3638 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Vector3_t48  ___x, Vector3_t48  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Vector3_t48  ___x, Vector3_t48  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* Vector3_t48_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m21272_gshared (Comparison_1_t3638 * __this, Vector3_t48  ___x, Vector3_t48  ___y, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector3_t48_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(Vector3_t48_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m21273_gshared (Comparison_1_t3638 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// BetterList`1<UnityEngine.Vector4>
#include "AssemblyU2DCSharp_BetterList_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
// BetterList`1<UnityEngine.Vector4>
#include "AssemblyU2DCSharp_BetterList_1_gen_1MethodDeclarations.h"

// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector4>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_1.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4.h"
// System.Comparison`1<UnityEngine.Vector4>
#include "mscorlib_System_Comparison_1_gen_16.h"
// BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector4>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_1MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4MethodDeclarations.h"
// System.Comparison`1<UnityEngine.Vector4>
#include "mscorlib_System_Comparison_1_gen_16MethodDeclarations.h"


// System.Void BetterList`1<UnityEngine.Vector4>::.ctor()
extern "C" void BetterList_1__ctor_m1784_gshared (BetterList_1_t246 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> BetterList`1<UnityEngine.Vector4>::GetEnumerator()
extern "C" Object_t* BetterList_1_GetEnumerator_m21274_gshared (BetterList_1_t246 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator2_t3640 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator2_t3640 * L_0 = (U3CGetEnumeratorU3Ec__Iterator2_t3640 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator2_t3640 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CGetEnumeratorU3Ec__Iterator2_t3640 *)L_0;
		U3CGetEnumeratorU3Ec__Iterator2_t3640 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CGetEnumeratorU3Ec__Iterator2_t3640 * L_2 = V_0;
		return L_2;
	}
}
// T BetterList`1<UnityEngine.Vector4>::get_Item(System.Int32)
extern "C" Vector4_t175  BetterList_1_get_Item_m21275_gshared (BetterList_1_t246 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		Vector4U5BU5D_t330* L_0 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_0, L_2));
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
extern "C" void BetterList_1_set_Item_m21276_gshared (BetterList_1_t246 * __this, int32_t ___i, Vector4_t175  ___value, const MethodInfo* method)
{
	{
		Vector4U5BU5D_t330* L_0 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		Vector4_t175  L_2 = ___value;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		*((Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_0, L_1)) = (Vector4_t175 )L_2;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::AllocateMore()
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_AllocateMore_m21277_gshared (BetterList_1_t246 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Vector4U5BU5D_t330* V_0 = {0};
	Vector4U5BU5D_t330* G_B3_0 = {0};
	{
		Vector4U5BU5D_t330* L_0 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		Vector4U5BU5D_t330* L_1 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Max_m1369(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))<<(int32_t)1)), (int32_t)((int32_t)32), /*hidden argument*/NULL);
		G_B3_0 = ((Vector4U5BU5D_t330*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_2));
		goto IL_002d;
	}

IL_0026:
	{
		G_B3_0 = ((Vector4U5BU5D_t330*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), ((int32_t)32)));
	}

IL_002d:
	{
		V_0 = (Vector4U5BU5D_t330*)G_B3_0;
		Vector4U5BU5D_t330* L_3 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		Vector4U5BU5D_t330* L_5 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		Vector4U5BU5D_t330* L_6 = V_0;
		NullCheck((Array_t *)L_5);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, (Array_t *)L_5, (Array_t *)(Array_t *)L_6, (int32_t)0);
	}

IL_0052:
	{
		Vector4U5BU5D_t330* L_7 = V_0;
		__this->___buffer_0 = L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::Trim()
extern "C" void BetterList_1_Trim_m21278_gshared (BetterList_1_t246 * __this, const MethodInfo* method)
{
	Vector4U5BU5D_t330* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector4U5BU5D_t330* L_2 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)(((int32_t)(((Array_t *)L_2)->max_length))))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		V_0 = (Vector4U5BU5D_t330*)((Vector4U5BU5D_t330*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		V_1 = (int32_t)0;
		goto IL_0049;
	}

IL_0032:
	{
		Vector4U5BU5D_t330* L_4 = V_0;
		int32_t L_5 = V_1;
		Vector4U5BU5D_t330* L_6 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_4, L_5)) = (Vector4_t175 )(*(Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_6, L_8));
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0032;
		}
	}
	{
		Vector4U5BU5D_t330* L_12 = V_0;
		__this->___buffer_0 = L_12;
	}

IL_005c:
	{
		goto IL_0068;
	}

IL_0061:
	{
		__this->___buffer_0 = (Vector4U5BU5D_t330*)NULL;
	}

IL_0068:
	{
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::Clear()
extern "C" void BetterList_1_Clear_m1801_gshared (BetterList_1_t246 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::Release()
extern "C" void BetterList_1_Release_m21279_gshared (BetterList_1_t246 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		__this->___buffer_0 = (Vector4U5BU5D_t330*)NULL;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::Add(T)
extern "C" void BetterList_1_Add_m1645_gshared (BetterList_1_t246 * __this, Vector4_t175  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector4U5BU5D_t330* L_0 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector4U5BU5D_t330* L_2 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t246 *)__this);
		(( void (*) (BetterList_1_t246 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t246 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		Vector4U5BU5D_t330* L_3 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_4 = (int32_t)(__this->___size_1);
		int32_t L_5 = (int32_t)L_4;
		V_0 = (int32_t)L_5;
		__this->___size_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_0;
		Vector4_t175  L_7 = ___item;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_6);
		*((Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_3, L_6)) = (Vector4_t175 )L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::Insert(System.Int32,T)
extern "C" void BetterList_1_Insert_m21280_gshared (BetterList_1_t246 * __this, int32_t ___index, Vector4_t175  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector4U5BU5D_t330* L_0 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector4U5BU5D_t330* L_2 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t246 *)__this);
		(( void (*) (BetterList_1_t246 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t246 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		int32_t L_3 = ___index;
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_5 = (int32_t)(__this->___size_1);
		V_0 = (int32_t)L_5;
		goto IL_005a;
	}

IL_003c:
	{
		Vector4U5BU5D_t330* L_6 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_7 = V_0;
		Vector4U5BU5D_t330* L_8 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9-(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)L_9-(int32_t)1));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		*((Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_6, L_7)) = (Vector4_t175 )(*(Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_11-(int32_t)1));
	}

IL_005a:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___index;
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_003c;
		}
	}
	{
		Vector4U5BU5D_t330* L_14 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_15 = ___index;
		Vector4_t175  L_16 = ___item;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		*((Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_14, L_15)) = (Vector4_t175 )L_16;
		int32_t L_17 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_17+(int32_t)1));
		goto IL_0088;
	}

IL_0081:
	{
		Vector4_t175  L_18 = ___item;
		NullCheck((BetterList_1_t246 *)__this);
		(( void (*) (BetterList_1_t246 *, Vector4_t175 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((BetterList_1_t246 *)__this, (Vector4_t175 )L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_0088:
	{
		return;
	}
}
// System.Boolean BetterList`1<UnityEngine.Vector4>::Contains(T)
extern "C" bool BetterList_1_Contains_m21281_gshared (BetterList_1_t246 * __this, Vector4_t175  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector4U5BU5D_t330* L_0 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = (int32_t)0;
		goto IL_003c;
	}

IL_0014:
	{
		Vector4U5BU5D_t330* L_1 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		Vector4_t175  L_3 = ___item;
		Vector4_t175  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_4);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), ((Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_1, L_2))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), ((Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_1, L_2))), (Object_t *)L_5);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		return 1;
	}

IL_0038:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}
}
// System.Boolean BetterList`1<UnityEngine.Vector4>::Remove(T)
extern TypeInfo* EqualityComparer_1_t3641_il2cpp_TypeInfo_var;
extern TypeInfo* Vector4_t175_il2cpp_TypeInfo_var;
extern "C" bool BetterList_1_Remove_m21282_gshared (BetterList_1_t246 * __this, Vector4_t175  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3641_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8669);
		Vector4_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	EqualityComparer_1_t3641 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector4_t175  V_3 = {0};
	{
		Vector4U5BU5D_t330* L_0 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0096;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3641_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3641 * L_1 = (( EqualityComparer_1_t3641 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		V_0 = (EqualityComparer_1_t3641 *)L_1;
		V_1 = (int32_t)0;
		goto IL_008a;
	}

IL_0018:
	{
		EqualityComparer_1_t3641 * L_2 = V_0;
		Vector4U5BU5D_t330* L_3 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Vector4_t175  L_6 = ___item;
		NullCheck((EqualityComparer_1_t3641 *)L_2);
		bool L_7 = (bool)VirtFuncInvoker2< bool, Vector4_t175 , Vector4_t175  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::Equals(!0,!0) */, (EqualityComparer_1_t3641 *)L_2, (Vector4_t175 )(*(Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_3, L_5)), (Vector4_t175 )L_6);
		if (!L_7)
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_8 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_8-(int32_t)1));
		Vector4U5BU5D_t330* L_9 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_10 = V_1;
		Initobj (Vector4_t175_il2cpp_TypeInfo_var, (&V_3));
		Vector4_t175  L_11 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		*((Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_9, L_10)) = (Vector4_t175 )L_11;
		int32_t L_12 = V_1;
		V_2 = (int32_t)L_12;
		goto IL_0078;
	}

IL_005a:
	{
		Vector4U5BU5D_t330* L_13 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_14 = V_2;
		Vector4U5BU5D_t330* L_15 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		*((Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_13, L_14)) = (Vector4_t175 )(*(Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_15, L_17));
		int32_t L_18 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0078:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_005a;
		}
	}
	{
		return 1;
	}

IL_0086:
	{
		int32_t L_21 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_008a:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0018;
		}
	}

IL_0096:
	{
		return 0;
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::RemoveAt(System.Int32)
extern TypeInfo* Vector4_t175_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_RemoveAt_m21283_gshared (BetterList_1_t246 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector4_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector4_t175  V_1 = {0};
	{
		Vector4U5BU5D_t330* L_0 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_3-(int32_t)1));
		Vector4U5BU5D_t330* L_4 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_5 = ___index;
		Initobj (Vector4_t175_il2cpp_TypeInfo_var, (&V_1));
		Vector4_t175  L_6 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_4, L_5)) = (Vector4_t175 )L_6;
		int32_t L_7 = ___index;
		V_0 = (int32_t)L_7;
		goto IL_005f;
	}

IL_0041:
	{
		Vector4U5BU5D_t330* L_8 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		Vector4U5BU5D_t330* L_10 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)));
		int32_t L_12 = ((int32_t)((int32_t)L_11+(int32_t)1));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_8, L_9)) = (Vector4_t175 )(*(Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_10, L_12));
		int32_t L_13 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0041;
		}
	}

IL_006b:
	{
		return;
	}
}
// T BetterList`1<UnityEngine.Vector4>::Pop()
extern TypeInfo* Vector4_t175_il2cpp_TypeInfo_var;
extern "C" Vector4_t175  BetterList_1_Pop_m21284_gshared (BetterList_1_t246 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector4_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	Vector4_t175  V_0 = {0};
	int32_t V_1 = 0;
	Vector4_t175  V_2 = {0};
	Vector4_t175  V_3 = {0};
	{
		Vector4U5BU5D_t330* L_0 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		Vector4U5BU5D_t330* L_2 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_3 = (int32_t)(__this->___size_1);
		int32_t L_4 = (int32_t)((int32_t)((int32_t)L_3-(int32_t)1));
		V_1 = (int32_t)L_4;
		__this->___size_1 = L_4;
		int32_t L_5 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		int32_t L_6 = L_5;
		V_0 = (Vector4_t175 )(*(Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_2, L_6));
		Vector4U5BU5D_t330* L_7 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_8 = (int32_t)(__this->___size_1);
		Initobj (Vector4_t175_il2cpp_TypeInfo_var, (&V_2));
		Vector4_t175  L_9 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_7, L_8)) = (Vector4_t175 )L_9;
		Vector4_t175  L_10 = V_0;
		return L_10;
	}

IL_004f:
	{
		Initobj (Vector4_t175_il2cpp_TypeInfo_var, (&V_3));
		Vector4_t175  L_11 = V_3;
		return L_11;
	}
}
// T[] BetterList`1<UnityEngine.Vector4>::ToArray()
extern "C" Vector4U5BU5D_t330* BetterList_1_ToArray_m1616_gshared (BetterList_1_t246 * __this, const MethodInfo* method)
{
	{
		NullCheck((BetterList_1_t246 *)__this);
		(( void (*) (BetterList_1_t246 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((BetterList_1_t246 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		Vector4U5BU5D_t330* L_0 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		return L_0;
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::Sort(System.Comparison`1<T>)
extern "C" void BetterList_1_Sort_m21285_gshared (BetterList_1_t246 * __this, Comparison_1_t3643 * ___comparer, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Vector4_t175  V_2 = {0};
	{
		V_0 = (bool)1;
		goto IL_007e;
	}

IL_0007:
	{
		V_0 = (bool)0;
		V_1 = (int32_t)1;
		goto IL_0072;
	}

IL_0010:
	{
		Comparison_1_t3643 * L_0 = ___comparer;
		Vector4U5BU5D_t330* L_1 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2-(int32_t)1)));
		int32_t L_3 = ((int32_t)((int32_t)L_2-(int32_t)1));
		Vector4U5BU5D_t330* L_4 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Comparison_1_t3643 *)L_0);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Vector4_t175 , Vector4_t175  >::Invoke(11 /* System.Int32 System.Comparison`1<UnityEngine.Vector4>::Invoke(!0,!0) */, (Comparison_1_t3643 *)L_0, (Vector4_t175 )(*(Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_1, L_3)), (Vector4_t175 )(*(Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_4, L_6)));
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		Vector4U5BU5D_t330* L_8 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (Vector4_t175 )(*(Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_8, L_10));
		Vector4U5BU5D_t330* L_11 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_12 = V_1;
		Vector4U5BU5D_t330* L_13 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_14 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, ((int32_t)((int32_t)L_14-(int32_t)1)));
		int32_t L_15 = ((int32_t)((int32_t)L_14-(int32_t)1));
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		*((Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_11, L_12)) = (Vector4_t175 )(*(Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_13, L_15));
		Vector4U5BU5D_t330* L_16 = (Vector4U5BU5D_t330*)(__this->___buffer_0);
		int32_t L_17 = V_1;
		Vector4_t175  L_18 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)((int32_t)L_17-(int32_t)1)));
		*((Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_16, ((int32_t)((int32_t)L_17-(int32_t)1)))) = (Vector4_t175 )L_18;
		V_0 = (bool)1;
	}

IL_006e:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0072:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0010;
		}
	}

IL_007e:
	{
		bool L_22 = V_0;
		if (L_22)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector4>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Vector4>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_30.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.Vector4>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_30MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector4>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector4>(System.Int32)
extern "C" Vector4_t175  Array_InternalArray__get_Item_TisVector4_t175_m26276_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisVector4_t175_m26276(__this, p0, method) (( Vector4_t175  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisVector4_t175_m26276_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector4>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m21286_gshared (InternalEnumerator_1_t3639 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector4>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21287_gshared (InternalEnumerator_1_t3639 * __this, const MethodInfo* method)
{
	{
		Vector4_t175  L_0 = (( Vector4_t175  (*) (InternalEnumerator_1_t3639 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t3639 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector4_t175  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector4>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m21288_gshared (InternalEnumerator_1_t3639 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector4>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m21289_gshared (InternalEnumerator_1_t3639 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5054((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.Vector4>::get_Current()
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" Vector4_t175  InternalEnumerator_1_get_Current_m21290_gshared (InternalEnumerator_1_t3639 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1116 * L_1 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_1, (String_t*)(String_t*) &_stringLiteral3846, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1116 * L_3 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_3, (String_t*)(String_t*) &_stringLiteral3847, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5054((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Vector4_t175  L_8 = (( Vector4_t175  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector4>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector4>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector4>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector4>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Vector4>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Void BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector4>::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator2__ctor_m21291_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3640 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector4>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern "C" Vector4_t175  U3CGetEnumeratorU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m21292_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3640 * __this, const MethodInfo* method)
{
	{
		Vector4_t175  L_0 = (Vector4_t175 )(__this->___U24current_2);
		return L_0;
	}
}
// System.Object BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector4>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m21293_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3640 * __this, const MethodInfo* method)
{
	{
		Vector4_t175  L_0 = (Vector4_t175 )(__this->___U24current_2);
		Vector4_t175  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), &L_1);
		return L_2;
	}
}
// System.Boolean BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector4>::MoveNext()
extern "C" bool U3CGetEnumeratorU3Ec__Iterator2_MoveNext_m21294_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3640 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_1);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0090;
	}

IL_0021:
	{
		BetterList_1_t246 * L_2 = (BetterList_1_t246 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		Vector4U5BU5D_t330* L_3 = (Vector4U5BU5D_t330*)(L_2->___buffer_0);
		if (!L_3)
		{
			goto IL_0089;
		}
	}
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_0073;
	}

IL_003d:
	{
		BetterList_1_t246 * L_4 = (BetterList_1_t246 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_4);
		Vector4U5BU5D_t330* L_5 = (Vector4U5BU5D_t330*)(L_4->___buffer_0);
		int32_t L_6 = (int32_t)(__this->___U3CiU3E__0_0);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		__this->___U24current_2 = (*(Vector4_t175 *)(Vector4_t175 *)SZArrayLdElema(L_5, L_7));
		__this->___U24PC_1 = 1;
		goto IL_0092;
	}

IL_0065:
	{
		int32_t L_8 = (int32_t)(__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_9 = (int32_t)(__this->___U3CiU3E__0_0);
		BetterList_1_t246 * L_10 = (BetterList_1_t246 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)(L_10->___size_1);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_003d;
		}
	}

IL_0089:
	{
		__this->___U24PC_1 = (-1);
	}

IL_0090:
	{
		return 0;
	}

IL_0092:
	{
		return 1;
	}
	// Dead block : IL_0094: ldloc.1
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector4>::Dispose()
extern "C" void U3CGetEnumeratorU3Ec__Iterator2_Dispose_m21295_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3640 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector4>::Reset()
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator2_Reset_m21296_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3640 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1312(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::.ctor()
extern "C" void EqualityComparer_1__ctor_m21297_gshared (EqualityComparer_1_t3641 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t3092_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m21298_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t3092_0_0_0_var = il2cpp_codegen_type_from_index(8081);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(GenericEqualityComparer_1_t3092_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_4 = (TypeU5BU5D_t570*)((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t570* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t570*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m3582(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t3641_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t3641 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t3642 * L_8 = (DefaultComparer_t3642 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t3642 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t3641_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m21299_gshared (EqualityComparer_1_t3641 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t3641 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector4_t175  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::GetHashCode(T) */, (EqualityComparer_1_t3641 *)__this, (Vector4_t175 )((*(Vector4_t175 *)((Vector4_t175 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m21300_gshared (EqualityComparer_1_t3641 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t3641 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Vector4_t175 , Vector4_t175  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::Equals(T,T) */, (EqualityComparer_1_t3641 *)__this, (Vector4_t175 )((*(Vector4_t175 *)((Vector4_t175 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Vector4_t175 )((*(Vector4_t175 *)((Vector4_t175 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::get_Default()
extern "C" EqualityComparer_1_t3641 * EqualityComparer_1_get_Default_m21301_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t3641 * L_0 = ((EqualityComparer_1_t3641_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector4>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector4>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<UnityEngine.Vector4>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::.ctor()
extern TypeInfo* EqualityComparer_1_t3641_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m21302_gshared (DefaultComparer_t3642 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3641_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8669);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t3641 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3641_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t3641 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t3641 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21303_gshared (DefaultComparer_t3642 * __this, Vector4_t175  ___obj, const MethodInfo* method)
{
	{
		Vector4_t175  L_0 = ___obj;
		Vector4_t175  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21304_gshared (DefaultComparer_t3642 * __this, Vector4_t175  ___x, Vector4_t175  ___y, const MethodInfo* method)
{
	{
		Vector4_t175  L_0 = ___x;
		Vector4_t175  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Vector4_t175  L_3 = ___y;
		Vector4_t175  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Vector4_t175  L_6 = ___y;
		Vector4_t175  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Comparison`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m21305_gshared (Comparison_1_t3643 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m21306_gshared (Comparison_1_t3643 * __this, Vector4_t175  ___x, Vector4_t175  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m21306((Comparison_1_t3643 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Vector4_t175  ___x, Vector4_t175  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Vector4_t175  ___x, Vector4_t175  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector4>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* Vector4_t175_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m21307_gshared (Comparison_1_t3643 * __this, Vector4_t175  ___x, Vector4_t175  ___y, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector4_t175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector4_t175_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(Vector4_t175_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m21308_gshared (Comparison_1_t3643 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// BetterList`1<UnityEngine.Vector2>
#include "AssemblyU2DCSharp_BetterList_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
// BetterList`1<UnityEngine.Vector2>
#include "AssemblyU2DCSharp_BetterList_1_gen_2MethodDeclarations.h"

// BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector2>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_2.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_5.h"
// System.Comparison`1<UnityEngine.Vector2>
#include "mscorlib_System_Comparison_1_gen_17.h"
// BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector2>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_2MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_5MethodDeclarations.h"
// System.Comparison`1<UnityEngine.Vector2>
#include "mscorlib_System_Comparison_1_gen_17MethodDeclarations.h"


// System.Void BetterList`1<UnityEngine.Vector2>::.ctor()
extern "C" void BetterList_1__ctor_m1632_gshared (BetterList_1_t185 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> BetterList`1<UnityEngine.Vector2>::GetEnumerator()
extern "C" Object_t* BetterList_1_GetEnumerator_m21309_gshared (BetterList_1_t185 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator2_t3644 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator2_t3644 * L_0 = (U3CGetEnumeratorU3Ec__Iterator2_t3644 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator2_t3644 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CGetEnumeratorU3Ec__Iterator2_t3644 *)L_0;
		U3CGetEnumeratorU3Ec__Iterator2_t3644 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CGetEnumeratorU3Ec__Iterator2_t3644 * L_2 = V_0;
		return L_2;
	}
}
// T BetterList`1<UnityEngine.Vector2>::get_Item(System.Int32)
extern "C" Vector2_t55  BetterList_1_get_Item_m21310_gshared (BetterList_1_t185 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		Vector2U5BU5D_t291* L_0 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_0, L_2));
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::set_Item(System.Int32,T)
extern "C" void BetterList_1_set_Item_m21311_gshared (BetterList_1_t185 * __this, int32_t ___i, Vector2_t55  ___value, const MethodInfo* method)
{
	{
		Vector2U5BU5D_t291* L_0 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		Vector2_t55  L_2 = ___value;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		*((Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_0, L_1)) = (Vector2_t55 )L_2;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::AllocateMore()
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_AllocateMore_m21312_gshared (BetterList_1_t185 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Vector2U5BU5D_t291* V_0 = {0};
	Vector2U5BU5D_t291* G_B3_0 = {0};
	{
		Vector2U5BU5D_t291* L_0 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		Vector2U5BU5D_t291* L_1 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Max_m1369(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))<<(int32_t)1)), (int32_t)((int32_t)32), /*hidden argument*/NULL);
		G_B3_0 = ((Vector2U5BU5D_t291*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_2));
		goto IL_002d;
	}

IL_0026:
	{
		G_B3_0 = ((Vector2U5BU5D_t291*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), ((int32_t)32)));
	}

IL_002d:
	{
		V_0 = (Vector2U5BU5D_t291*)G_B3_0;
		Vector2U5BU5D_t291* L_3 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		Vector2U5BU5D_t291* L_5 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		Vector2U5BU5D_t291* L_6 = V_0;
		NullCheck((Array_t *)L_5);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, (Array_t *)L_5, (Array_t *)(Array_t *)L_6, (int32_t)0);
	}

IL_0052:
	{
		Vector2U5BU5D_t291* L_7 = V_0;
		__this->___buffer_0 = L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::Trim()
extern "C" void BetterList_1_Trim_m21313_gshared (BetterList_1_t185 * __this, const MethodInfo* method)
{
	Vector2U5BU5D_t291* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector2U5BU5D_t291* L_2 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)(((int32_t)(((Array_t *)L_2)->max_length))))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		V_0 = (Vector2U5BU5D_t291*)((Vector2U5BU5D_t291*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		V_1 = (int32_t)0;
		goto IL_0049;
	}

IL_0032:
	{
		Vector2U5BU5D_t291* L_4 = V_0;
		int32_t L_5 = V_1;
		Vector2U5BU5D_t291* L_6 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_4, L_5)) = (Vector2_t55 )(*(Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_6, L_8));
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0032;
		}
	}
	{
		Vector2U5BU5D_t291* L_12 = V_0;
		__this->___buffer_0 = L_12;
	}

IL_005c:
	{
		goto IL_0068;
	}

IL_0061:
	{
		__this->___buffer_0 = (Vector2U5BU5D_t291*)NULL;
	}

IL_0068:
	{
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::Clear()
extern "C" void BetterList_1_Clear_m1635_gshared (BetterList_1_t185 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::Release()
extern "C" void BetterList_1_Release_m21314_gshared (BetterList_1_t185 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		__this->___buffer_0 = (Vector2U5BU5D_t291*)NULL;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::Add(T)
extern "C" void BetterList_1_Add_m1643_gshared (BetterList_1_t185 * __this, Vector2_t55  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector2U5BU5D_t291* L_0 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector2U5BU5D_t291* L_2 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t185 *)__this);
		(( void (*) (BetterList_1_t185 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t185 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		Vector2U5BU5D_t291* L_3 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_4 = (int32_t)(__this->___size_1);
		int32_t L_5 = (int32_t)L_4;
		V_0 = (int32_t)L_5;
		__this->___size_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_0;
		Vector2_t55  L_7 = ___item;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_6);
		*((Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_3, L_6)) = (Vector2_t55 )L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::Insert(System.Int32,T)
extern "C" void BetterList_1_Insert_m21315_gshared (BetterList_1_t185 * __this, int32_t ___index, Vector2_t55  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector2U5BU5D_t291* L_0 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector2U5BU5D_t291* L_2 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t185 *)__this);
		(( void (*) (BetterList_1_t185 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t185 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		int32_t L_3 = ___index;
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_5 = (int32_t)(__this->___size_1);
		V_0 = (int32_t)L_5;
		goto IL_005a;
	}

IL_003c:
	{
		Vector2U5BU5D_t291* L_6 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_7 = V_0;
		Vector2U5BU5D_t291* L_8 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9-(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)L_9-(int32_t)1));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		*((Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_6, L_7)) = (Vector2_t55 )(*(Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_11-(int32_t)1));
	}

IL_005a:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___index;
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_003c;
		}
	}
	{
		Vector2U5BU5D_t291* L_14 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_15 = ___index;
		Vector2_t55  L_16 = ___item;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		*((Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_14, L_15)) = (Vector2_t55 )L_16;
		int32_t L_17 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_17+(int32_t)1));
		goto IL_0088;
	}

IL_0081:
	{
		Vector2_t55  L_18 = ___item;
		NullCheck((BetterList_1_t185 *)__this);
		(( void (*) (BetterList_1_t185 *, Vector2_t55 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((BetterList_1_t185 *)__this, (Vector2_t55 )L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_0088:
	{
		return;
	}
}
// System.Boolean BetterList`1<UnityEngine.Vector2>::Contains(T)
extern "C" bool BetterList_1_Contains_m21316_gshared (BetterList_1_t185 * __this, Vector2_t55  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector2U5BU5D_t291* L_0 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = (int32_t)0;
		goto IL_003c;
	}

IL_0014:
	{
		Vector2U5BU5D_t291* L_1 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		Vector2_t55  L_3 = ___item;
		Vector2_t55  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_4);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), ((Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_1, L_2))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), ((Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_1, L_2))), (Object_t *)L_5);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		return 1;
	}

IL_0038:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}
}
// System.Boolean BetterList`1<UnityEngine.Vector2>::Remove(T)
extern TypeInfo* EqualityComparer_1_t3645_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2_t55_il2cpp_TypeInfo_var;
extern "C" bool BetterList_1_Remove_m21317_gshared (BetterList_1_t185 * __this, Vector2_t55  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8675);
		Vector2_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(83);
		s_Il2CppMethodIntialized = true;
	}
	EqualityComparer_1_t3645 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector2_t55  V_3 = {0};
	{
		Vector2U5BU5D_t291* L_0 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0096;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3645_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3645 * L_1 = (( EqualityComparer_1_t3645 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		V_0 = (EqualityComparer_1_t3645 *)L_1;
		V_1 = (int32_t)0;
		goto IL_008a;
	}

IL_0018:
	{
		EqualityComparer_1_t3645 * L_2 = V_0;
		Vector2U5BU5D_t291* L_3 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Vector2_t55  L_6 = ___item;
		NullCheck((EqualityComparer_1_t3645 *)L_2);
		bool L_7 = (bool)VirtFuncInvoker2< bool, Vector2_t55 , Vector2_t55  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(!0,!0) */, (EqualityComparer_1_t3645 *)L_2, (Vector2_t55 )(*(Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_3, L_5)), (Vector2_t55 )L_6);
		if (!L_7)
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_8 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_8-(int32_t)1));
		Vector2U5BU5D_t291* L_9 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_10 = V_1;
		Initobj (Vector2_t55_il2cpp_TypeInfo_var, (&V_3));
		Vector2_t55  L_11 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		*((Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_9, L_10)) = (Vector2_t55 )L_11;
		int32_t L_12 = V_1;
		V_2 = (int32_t)L_12;
		goto IL_0078;
	}

IL_005a:
	{
		Vector2U5BU5D_t291* L_13 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_14 = V_2;
		Vector2U5BU5D_t291* L_15 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		*((Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_13, L_14)) = (Vector2_t55 )(*(Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_15, L_17));
		int32_t L_18 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0078:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_005a;
		}
	}
	{
		return 1;
	}

IL_0086:
	{
		int32_t L_21 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_008a:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0018;
		}
	}

IL_0096:
	{
		return 0;
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
extern TypeInfo* Vector2_t55_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_RemoveAt_m21318_gshared (BetterList_1_t185 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(83);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t55  V_1 = {0};
	{
		Vector2U5BU5D_t291* L_0 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_3-(int32_t)1));
		Vector2U5BU5D_t291* L_4 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_5 = ___index;
		Initobj (Vector2_t55_il2cpp_TypeInfo_var, (&V_1));
		Vector2_t55  L_6 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_4, L_5)) = (Vector2_t55 )L_6;
		int32_t L_7 = ___index;
		V_0 = (int32_t)L_7;
		goto IL_005f;
	}

IL_0041:
	{
		Vector2U5BU5D_t291* L_8 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		Vector2U5BU5D_t291* L_10 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)));
		int32_t L_12 = ((int32_t)((int32_t)L_11+(int32_t)1));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_8, L_9)) = (Vector2_t55 )(*(Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_10, L_12));
		int32_t L_13 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0041;
		}
	}

IL_006b:
	{
		return;
	}
}
// T BetterList`1<UnityEngine.Vector2>::Pop()
extern TypeInfo* Vector2_t55_il2cpp_TypeInfo_var;
extern "C" Vector2_t55  BetterList_1_Pop_m21319_gshared (BetterList_1_t185 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(83);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t55  V_0 = {0};
	int32_t V_1 = 0;
	Vector2_t55  V_2 = {0};
	Vector2_t55  V_3 = {0};
	{
		Vector2U5BU5D_t291* L_0 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		Vector2U5BU5D_t291* L_2 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_3 = (int32_t)(__this->___size_1);
		int32_t L_4 = (int32_t)((int32_t)((int32_t)L_3-(int32_t)1));
		V_1 = (int32_t)L_4;
		__this->___size_1 = L_4;
		int32_t L_5 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		int32_t L_6 = L_5;
		V_0 = (Vector2_t55 )(*(Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_2, L_6));
		Vector2U5BU5D_t291* L_7 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_8 = (int32_t)(__this->___size_1);
		Initobj (Vector2_t55_il2cpp_TypeInfo_var, (&V_2));
		Vector2_t55  L_9 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_7, L_8)) = (Vector2_t55 )L_9;
		Vector2_t55  L_10 = V_0;
		return L_10;
	}

IL_004f:
	{
		Initobj (Vector2_t55_il2cpp_TypeInfo_var, (&V_3));
		Vector2_t55  L_11 = V_3;
		return L_11;
	}
}
// T[] BetterList`1<UnityEngine.Vector2>::ToArray()
extern "C" Vector2U5BU5D_t291* BetterList_1_ToArray_m1618_gshared (BetterList_1_t185 * __this, const MethodInfo* method)
{
	{
		NullCheck((BetterList_1_t185 *)__this);
		(( void (*) (BetterList_1_t185 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((BetterList_1_t185 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		Vector2U5BU5D_t291* L_0 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		return L_0;
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::Sort(System.Comparison`1<T>)
extern "C" void BetterList_1_Sort_m21320_gshared (BetterList_1_t185 * __this, Comparison_1_t3647 * ___comparer, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Vector2_t55  V_2 = {0};
	{
		V_0 = (bool)1;
		goto IL_007e;
	}

IL_0007:
	{
		V_0 = (bool)0;
		V_1 = (int32_t)1;
		goto IL_0072;
	}

IL_0010:
	{
		Comparison_1_t3647 * L_0 = ___comparer;
		Vector2U5BU5D_t291* L_1 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2-(int32_t)1)));
		int32_t L_3 = ((int32_t)((int32_t)L_2-(int32_t)1));
		Vector2U5BU5D_t291* L_4 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Comparison_1_t3647 *)L_0);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Vector2_t55 , Vector2_t55  >::Invoke(11 /* System.Int32 System.Comparison`1<UnityEngine.Vector2>::Invoke(!0,!0) */, (Comparison_1_t3647 *)L_0, (Vector2_t55 )(*(Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_1, L_3)), (Vector2_t55 )(*(Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_4, L_6)));
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		Vector2U5BU5D_t291* L_8 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (Vector2_t55 )(*(Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_8, L_10));
		Vector2U5BU5D_t291* L_11 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_12 = V_1;
		Vector2U5BU5D_t291* L_13 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_14 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, ((int32_t)((int32_t)L_14-(int32_t)1)));
		int32_t L_15 = ((int32_t)((int32_t)L_14-(int32_t)1));
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		*((Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_11, L_12)) = (Vector2_t55 )(*(Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_13, L_15));
		Vector2U5BU5D_t291* L_16 = (Vector2U5BU5D_t291*)(__this->___buffer_0);
		int32_t L_17 = V_1;
		Vector2_t55  L_18 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)((int32_t)L_17-(int32_t)1)));
		*((Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_16, ((int32_t)((int32_t)L_17-(int32_t)1)))) = (Vector2_t55 )L_18;
		V_0 = (bool)1;
	}

IL_006e:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0072:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0010;
		}
	}

IL_007e:
	{
		bool L_22 = V_0;
		if (L_22)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector2>::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator2__ctor_m21321_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3644 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector2>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern "C" Vector2_t55  U3CGetEnumeratorU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m21322_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3644 * __this, const MethodInfo* method)
{
	{
		Vector2_t55  L_0 = (Vector2_t55 )(__this->___U24current_2);
		return L_0;
	}
}
// System.Object BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector2>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m21323_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3644 * __this, const MethodInfo* method)
{
	{
		Vector2_t55  L_0 = (Vector2_t55 )(__this->___U24current_2);
		Vector2_t55  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), &L_1);
		return L_2;
	}
}
// System.Boolean BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector2>::MoveNext()
extern "C" bool U3CGetEnumeratorU3Ec__Iterator2_MoveNext_m21324_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3644 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_1);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0090;
	}

IL_0021:
	{
		BetterList_1_t185 * L_2 = (BetterList_1_t185 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		Vector2U5BU5D_t291* L_3 = (Vector2U5BU5D_t291*)(L_2->___buffer_0);
		if (!L_3)
		{
			goto IL_0089;
		}
	}
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_0073;
	}

IL_003d:
	{
		BetterList_1_t185 * L_4 = (BetterList_1_t185 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_4);
		Vector2U5BU5D_t291* L_5 = (Vector2U5BU5D_t291*)(L_4->___buffer_0);
		int32_t L_6 = (int32_t)(__this->___U3CiU3E__0_0);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		__this->___U24current_2 = (*(Vector2_t55 *)(Vector2_t55 *)SZArrayLdElema(L_5, L_7));
		__this->___U24PC_1 = 1;
		goto IL_0092;
	}

IL_0065:
	{
		int32_t L_8 = (int32_t)(__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_9 = (int32_t)(__this->___U3CiU3E__0_0);
		BetterList_1_t185 * L_10 = (BetterList_1_t185 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)(L_10->___size_1);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_003d;
		}
	}

IL_0089:
	{
		__this->___U24PC_1 = (-1);
	}

IL_0090:
	{
		return 0;
	}

IL_0092:
	{
		return 1;
	}
	// Dead block : IL_0094: ldloc.1
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector2>::Dispose()
extern "C" void U3CGetEnumeratorU3Ec__Iterator2_Dispose_m21325_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3644 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Vector2>::Reset()
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator2_Reset_m21326_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3644 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1312(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_4.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_4MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::.ctor()
extern "C" void EqualityComparer_1__ctor_m21327_gshared (EqualityComparer_1_t3645 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t3092_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m21328_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t3092_0_0_0_var = il2cpp_codegen_type_from_index(8081);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(GenericEqualityComparer_1_t3092_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_4 = (TypeU5BU5D_t570*)((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t570* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t570*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m3582(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t3645_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t3645 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t3646 * L_8 = (DefaultComparer_t3646 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t3646 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t3645_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m21329_gshared (EqualityComparer_1_t3645 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t3645 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector2_t55  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::GetHashCode(T) */, (EqualityComparer_1_t3645 *)__this, (Vector2_t55 )((*(Vector2_t55 *)((Vector2_t55 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m21330_gshared (EqualityComparer_1_t3645 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t3645 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Vector2_t55 , Vector2_t55  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(T,T) */, (EqualityComparer_1_t3645 *)__this, (Vector2_t55 )((*(Vector2_t55 *)((Vector2_t55 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Vector2_t55 )((*(Vector2_t55 *)((Vector2_t55 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::get_Default()
extern "C" EqualityComparer_1_t3645 * EqualityComparer_1_get_Default_m21331_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t3645 * L_0 = ((EqualityComparer_1_t3645_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<UnityEngine.Vector2>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern TypeInfo* EqualityComparer_1_t3645_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m21332_gshared (DefaultComparer_t3646 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8675);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t3645 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3645_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t3645 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t3645 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21333_gshared (DefaultComparer_t3646 * __this, Vector2_t55  ___obj, const MethodInfo* method)
{
	{
		Vector2_t55  L_0 = ___obj;
		Vector2_t55  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21334_gshared (DefaultComparer_t3646 * __this, Vector2_t55  ___x, Vector2_t55  ___y, const MethodInfo* method)
{
	{
		Vector2_t55  L_0 = ___x;
		Vector2_t55  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Vector2_t55  L_3 = ___y;
		Vector2_t55  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Vector2_t55  L_6 = ___y;
		Vector2_t55  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Comparison`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m21335_gshared (Comparison_1_t3647 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m21336_gshared (Comparison_1_t3647 * __this, Vector2_t55  ___x, Vector2_t55  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m21336((Comparison_1_t3647 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Vector2_t55  ___x, Vector2_t55  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Vector2_t55  ___x, Vector2_t55  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector2>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* Vector2_t55_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m21337_gshared (Comparison_1_t3647 * __this, Vector2_t55  ___x, Vector2_t55  ___y, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(83);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector2_t55_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(Vector2_t55_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m21338_gshared (Comparison_1_t3647 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// BetterList`1<UnityEngine.Color32>
#include "AssemblyU2DCSharp_BetterList_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
// BetterList`1<UnityEngine.Color32>
#include "AssemblyU2DCSharp_BetterList_1_gen_3MethodDeclarations.h"

// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Color32>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_3.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_6.h"
// System.Comparison`1<UnityEngine.Color32>
#include "mscorlib_System_Comparison_1_gen_18.h"
// BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Color32>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_3MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_6MethodDeclarations.h"
// System.Comparison`1<UnityEngine.Color32>
#include "mscorlib_System_Comparison_1_gen_18MethodDeclarations.h"


// System.Void BetterList`1<UnityEngine.Color32>::.ctor()
extern "C" void BetterList_1__ctor_m1633_gshared (BetterList_1_t186 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> BetterList`1<UnityEngine.Color32>::GetEnumerator()
extern "C" Object_t* BetterList_1_GetEnumerator_m21339_gshared (BetterList_1_t186 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator2_t3649 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator2_t3649 * L_0 = (U3CGetEnumeratorU3Ec__Iterator2_t3649 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator2_t3649 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CGetEnumeratorU3Ec__Iterator2_t3649 *)L_0;
		U3CGetEnumeratorU3Ec__Iterator2_t3649 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CGetEnumeratorU3Ec__Iterator2_t3649 * L_2 = V_0;
		return L_2;
	}
}
// T BetterList`1<UnityEngine.Color32>::get_Item(System.Int32)
extern "C" Color32_t295  BetterList_1_get_Item_m21340_gshared (BetterList_1_t186 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		Color32U5BU5D_t331* L_0 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_0, L_2));
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::set_Item(System.Int32,T)
extern "C" void BetterList_1_set_Item_m21341_gshared (BetterList_1_t186 * __this, int32_t ___i, Color32_t295  ___value, const MethodInfo* method)
{
	{
		Color32U5BU5D_t331* L_0 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		Color32_t295  L_2 = ___value;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		*((Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_0, L_1)) = (Color32_t295 )L_2;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::AllocateMore()
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_AllocateMore_m21342_gshared (BetterList_1_t186 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Color32U5BU5D_t331* V_0 = {0};
	Color32U5BU5D_t331* G_B3_0 = {0};
	{
		Color32U5BU5D_t331* L_0 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		Color32U5BU5D_t331* L_1 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Max_m1369(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))<<(int32_t)1)), (int32_t)((int32_t)32), /*hidden argument*/NULL);
		G_B3_0 = ((Color32U5BU5D_t331*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_2));
		goto IL_002d;
	}

IL_0026:
	{
		G_B3_0 = ((Color32U5BU5D_t331*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), ((int32_t)32)));
	}

IL_002d:
	{
		V_0 = (Color32U5BU5D_t331*)G_B3_0;
		Color32U5BU5D_t331* L_3 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		Color32U5BU5D_t331* L_5 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		Color32U5BU5D_t331* L_6 = V_0;
		NullCheck((Array_t *)L_5);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, (Array_t *)L_5, (Array_t *)(Array_t *)L_6, (int32_t)0);
	}

IL_0052:
	{
		Color32U5BU5D_t331* L_7 = V_0;
		__this->___buffer_0 = L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::Trim()
extern "C" void BetterList_1_Trim_m21343_gshared (BetterList_1_t186 * __this, const MethodInfo* method)
{
	Color32U5BU5D_t331* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Color32U5BU5D_t331* L_2 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)(((int32_t)(((Array_t *)L_2)->max_length))))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		V_0 = (Color32U5BU5D_t331*)((Color32U5BU5D_t331*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		V_1 = (int32_t)0;
		goto IL_0049;
	}

IL_0032:
	{
		Color32U5BU5D_t331* L_4 = V_0;
		int32_t L_5 = V_1;
		Color32U5BU5D_t331* L_6 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_4, L_5)) = (Color32_t295 )(*(Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_6, L_8));
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0032;
		}
	}
	{
		Color32U5BU5D_t331* L_12 = V_0;
		__this->___buffer_0 = L_12;
	}

IL_005c:
	{
		goto IL_0068;
	}

IL_0061:
	{
		__this->___buffer_0 = (Color32U5BU5D_t331*)NULL;
	}

IL_0068:
	{
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::Clear()
extern "C" void BetterList_1_Clear_m1636_gshared (BetterList_1_t186 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::Release()
extern "C" void BetterList_1_Release_m21344_gshared (BetterList_1_t186 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		__this->___buffer_0 = (Color32U5BU5D_t331*)NULL;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::Add(T)
extern "C" void BetterList_1_Add_m1644_gshared (BetterList_1_t186 * __this, Color32_t295  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Color32U5BU5D_t331* L_0 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Color32U5BU5D_t331* L_2 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t186 *)__this);
		(( void (*) (BetterList_1_t186 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t186 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		Color32U5BU5D_t331* L_3 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_4 = (int32_t)(__this->___size_1);
		int32_t L_5 = (int32_t)L_4;
		V_0 = (int32_t)L_5;
		__this->___size_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_0;
		Color32_t295  L_7 = ___item;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_6);
		*((Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_3, L_6)) = (Color32_t295 )L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::Insert(System.Int32,T)
extern "C" void BetterList_1_Insert_m21345_gshared (BetterList_1_t186 * __this, int32_t ___index, Color32_t295  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Color32U5BU5D_t331* L_0 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Color32U5BU5D_t331* L_2 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t186 *)__this);
		(( void (*) (BetterList_1_t186 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t186 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		int32_t L_3 = ___index;
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_5 = (int32_t)(__this->___size_1);
		V_0 = (int32_t)L_5;
		goto IL_005a;
	}

IL_003c:
	{
		Color32U5BU5D_t331* L_6 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_7 = V_0;
		Color32U5BU5D_t331* L_8 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9-(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)L_9-(int32_t)1));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		*((Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_6, L_7)) = (Color32_t295 )(*(Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_11-(int32_t)1));
	}

IL_005a:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___index;
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_003c;
		}
	}
	{
		Color32U5BU5D_t331* L_14 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_15 = ___index;
		Color32_t295  L_16 = ___item;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		*((Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_14, L_15)) = (Color32_t295 )L_16;
		int32_t L_17 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_17+(int32_t)1));
		goto IL_0088;
	}

IL_0081:
	{
		Color32_t295  L_18 = ___item;
		NullCheck((BetterList_1_t186 *)__this);
		(( void (*) (BetterList_1_t186 *, Color32_t295 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((BetterList_1_t186 *)__this, (Color32_t295 )L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_0088:
	{
		return;
	}
}
// System.Boolean BetterList`1<UnityEngine.Color32>::Contains(T)
extern "C" bool BetterList_1_Contains_m21346_gshared (BetterList_1_t186 * __this, Color32_t295  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Color32U5BU5D_t331* L_0 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = (int32_t)0;
		goto IL_003c;
	}

IL_0014:
	{
		Color32U5BU5D_t331* L_1 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		Color32_t295  L_3 = ___item;
		Color32_t295  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_4);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), ((Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_1, L_2))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), ((Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_1, L_2))), (Object_t *)L_5);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		return 1;
	}

IL_0038:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}
}
// System.Boolean BetterList`1<UnityEngine.Color32>::Remove(T)
extern TypeInfo* EqualityComparer_1_t3650_il2cpp_TypeInfo_var;
extern TypeInfo* Color32_t295_il2cpp_TypeInfo_var;
extern "C" bool BetterList_1_Remove_m21347_gshared (BetterList_1_t186 * __this, Color32_t295  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8686);
		Color32_t295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	EqualityComparer_1_t3650 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Color32_t295  V_3 = {0};
	{
		Color32U5BU5D_t331* L_0 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0096;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3650_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3650 * L_1 = (( EqualityComparer_1_t3650 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		V_0 = (EqualityComparer_1_t3650 *)L_1;
		V_1 = (int32_t)0;
		goto IL_008a;
	}

IL_0018:
	{
		EqualityComparer_1_t3650 * L_2 = V_0;
		Color32U5BU5D_t331* L_3 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Color32_t295  L_6 = ___item;
		NullCheck((EqualityComparer_1_t3650 *)L_2);
		bool L_7 = (bool)VirtFuncInvoker2< bool, Color32_t295 , Color32_t295  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::Equals(!0,!0) */, (EqualityComparer_1_t3650 *)L_2, (Color32_t295 )(*(Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_3, L_5)), (Color32_t295 )L_6);
		if (!L_7)
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_8 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_8-(int32_t)1));
		Color32U5BU5D_t331* L_9 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_10 = V_1;
		Initobj (Color32_t295_il2cpp_TypeInfo_var, (&V_3));
		Color32_t295  L_11 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		*((Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_9, L_10)) = (Color32_t295 )L_11;
		int32_t L_12 = V_1;
		V_2 = (int32_t)L_12;
		goto IL_0078;
	}

IL_005a:
	{
		Color32U5BU5D_t331* L_13 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_14 = V_2;
		Color32U5BU5D_t331* L_15 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		*((Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_13, L_14)) = (Color32_t295 )(*(Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_15, L_17));
		int32_t L_18 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0078:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_005a;
		}
	}
	{
		return 1;
	}

IL_0086:
	{
		int32_t L_21 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_008a:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0018;
		}
	}

IL_0096:
	{
		return 0;
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::RemoveAt(System.Int32)
extern TypeInfo* Color32_t295_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_RemoveAt_m21348_gshared (BetterList_1_t186 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color32_t295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Color32_t295  V_1 = {0};
	{
		Color32U5BU5D_t331* L_0 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_3-(int32_t)1));
		Color32U5BU5D_t331* L_4 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_5 = ___index;
		Initobj (Color32_t295_il2cpp_TypeInfo_var, (&V_1));
		Color32_t295  L_6 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_4, L_5)) = (Color32_t295 )L_6;
		int32_t L_7 = ___index;
		V_0 = (int32_t)L_7;
		goto IL_005f;
	}

IL_0041:
	{
		Color32U5BU5D_t331* L_8 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		Color32U5BU5D_t331* L_10 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)));
		int32_t L_12 = ((int32_t)((int32_t)L_11+(int32_t)1));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_8, L_9)) = (Color32_t295 )(*(Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_10, L_12));
		int32_t L_13 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0041;
		}
	}

IL_006b:
	{
		return;
	}
}
// T BetterList`1<UnityEngine.Color32>::Pop()
extern TypeInfo* Color32_t295_il2cpp_TypeInfo_var;
extern "C" Color32_t295  BetterList_1_Pop_m21349_gshared (BetterList_1_t186 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color32_t295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	Color32_t295  V_0 = {0};
	int32_t V_1 = 0;
	Color32_t295  V_2 = {0};
	Color32_t295  V_3 = {0};
	{
		Color32U5BU5D_t331* L_0 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		Color32U5BU5D_t331* L_2 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_3 = (int32_t)(__this->___size_1);
		int32_t L_4 = (int32_t)((int32_t)((int32_t)L_3-(int32_t)1));
		V_1 = (int32_t)L_4;
		__this->___size_1 = L_4;
		int32_t L_5 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		int32_t L_6 = L_5;
		V_0 = (Color32_t295 )(*(Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_2, L_6));
		Color32U5BU5D_t331* L_7 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_8 = (int32_t)(__this->___size_1);
		Initobj (Color32_t295_il2cpp_TypeInfo_var, (&V_2));
		Color32_t295  L_9 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_7, L_8)) = (Color32_t295 )L_9;
		Color32_t295  L_10 = V_0;
		return L_10;
	}

IL_004f:
	{
		Initobj (Color32_t295_il2cpp_TypeInfo_var, (&V_3));
		Color32_t295  L_11 = V_3;
		return L_11;
	}
}
// T[] BetterList`1<UnityEngine.Color32>::ToArray()
extern "C" Color32U5BU5D_t331* BetterList_1_ToArray_m1620_gshared (BetterList_1_t186 * __this, const MethodInfo* method)
{
	{
		NullCheck((BetterList_1_t186 *)__this);
		(( void (*) (BetterList_1_t186 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((BetterList_1_t186 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		Color32U5BU5D_t331* L_0 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		return L_0;
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::Sort(System.Comparison`1<T>)
extern "C" void BetterList_1_Sort_m21350_gshared (BetterList_1_t186 * __this, Comparison_1_t3652 * ___comparer, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Color32_t295  V_2 = {0};
	{
		V_0 = (bool)1;
		goto IL_007e;
	}

IL_0007:
	{
		V_0 = (bool)0;
		V_1 = (int32_t)1;
		goto IL_0072;
	}

IL_0010:
	{
		Comparison_1_t3652 * L_0 = ___comparer;
		Color32U5BU5D_t331* L_1 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2-(int32_t)1)));
		int32_t L_3 = ((int32_t)((int32_t)L_2-(int32_t)1));
		Color32U5BU5D_t331* L_4 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Comparison_1_t3652 *)L_0);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Color32_t295 , Color32_t295  >::Invoke(11 /* System.Int32 System.Comparison`1<UnityEngine.Color32>::Invoke(!0,!0) */, (Comparison_1_t3652 *)L_0, (Color32_t295 )(*(Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_1, L_3)), (Color32_t295 )(*(Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_4, L_6)));
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		Color32U5BU5D_t331* L_8 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (Color32_t295 )(*(Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_8, L_10));
		Color32U5BU5D_t331* L_11 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_12 = V_1;
		Color32U5BU5D_t331* L_13 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_14 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, ((int32_t)((int32_t)L_14-(int32_t)1)));
		int32_t L_15 = ((int32_t)((int32_t)L_14-(int32_t)1));
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		*((Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_11, L_12)) = (Color32_t295 )(*(Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_13, L_15));
		Color32U5BU5D_t331* L_16 = (Color32U5BU5D_t331*)(__this->___buffer_0);
		int32_t L_17 = V_1;
		Color32_t295  L_18 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)((int32_t)L_17-(int32_t)1)));
		*((Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_16, ((int32_t)((int32_t)L_17-(int32_t)1)))) = (Color32_t295 )L_18;
		V_0 = (bool)1;
	}

IL_006e:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0072:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0010;
		}
	}

IL_007e:
	{
		bool L_22 = V_0;
		if (L_22)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Color32>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Color32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_31.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.Color32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_31MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Color32>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Color32>(System.Int32)
extern "C" Color32_t295  Array_InternalArray__get_Item_TisColor32_t295_m26287_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisColor32_t295_m26287(__this, p0, method) (( Color32_t295  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisColor32_t295_m26287_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color32>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m21351_gshared (InternalEnumerator_1_t3648 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Color32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21352_gshared (InternalEnumerator_1_t3648 * __this, const MethodInfo* method)
{
	{
		Color32_t295  L_0 = (( Color32_t295  (*) (InternalEnumerator_1_t3648 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t3648 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Color32_t295  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m21353_gshared (InternalEnumerator_1_t3648 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Color32>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m21354_gshared (InternalEnumerator_1_t3648 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5054((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.Color32>::get_Current()
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" Color32_t295  InternalEnumerator_1_get_Current_m21355_gshared (InternalEnumerator_1_t3648 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1116 * L_1 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_1, (String_t*)(String_t*) &_stringLiteral3846, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1116 * L_3 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_3, (String_t*)(String_t*) &_stringLiteral3847, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5054((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Color32_t295  L_8 = (( Color32_t295  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Color32>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Color32>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Color32>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Color32>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Color32>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Color32>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Color32>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Color32>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Color32>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Color32>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Color32>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Color32>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Color32>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Void BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Color32>::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator2__ctor_m21356_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3649 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Color32>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern "C" Color32_t295  U3CGetEnumeratorU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m21357_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3649 * __this, const MethodInfo* method)
{
	{
		Color32_t295  L_0 = (Color32_t295 )(__this->___U24current_2);
		return L_0;
	}
}
// System.Object BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Color32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m21358_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3649 * __this, const MethodInfo* method)
{
	{
		Color32_t295  L_0 = (Color32_t295 )(__this->___U24current_2);
		Color32_t295  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), &L_1);
		return L_2;
	}
}
// System.Boolean BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Color32>::MoveNext()
extern "C" bool U3CGetEnumeratorU3Ec__Iterator2_MoveNext_m21359_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3649 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_1);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0090;
	}

IL_0021:
	{
		BetterList_1_t186 * L_2 = (BetterList_1_t186 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		Color32U5BU5D_t331* L_3 = (Color32U5BU5D_t331*)(L_2->___buffer_0);
		if (!L_3)
		{
			goto IL_0089;
		}
	}
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_0073;
	}

IL_003d:
	{
		BetterList_1_t186 * L_4 = (BetterList_1_t186 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_4);
		Color32U5BU5D_t331* L_5 = (Color32U5BU5D_t331*)(L_4->___buffer_0);
		int32_t L_6 = (int32_t)(__this->___U3CiU3E__0_0);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		__this->___U24current_2 = (*(Color32_t295 *)(Color32_t295 *)SZArrayLdElema(L_5, L_7));
		__this->___U24PC_1 = 1;
		goto IL_0092;
	}

IL_0065:
	{
		int32_t L_8 = (int32_t)(__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_9 = (int32_t)(__this->___U3CiU3E__0_0);
		BetterList_1_t186 * L_10 = (BetterList_1_t186 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)(L_10->___size_1);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_003d;
		}
	}

IL_0089:
	{
		__this->___U24PC_1 = (-1);
	}

IL_0090:
	{
		return 0;
	}

IL_0092:
	{
		return 1;
	}
	// Dead block : IL_0094: ldloc.1
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Color32>::Dispose()
extern "C" void U3CGetEnumeratorU3Ec__Iterator2_Dispose_m21360_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3649 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator2<UnityEngine.Color32>::Reset()
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator2_Reset_m21361_gshared (U3CGetEnumeratorU3Ec__Iterator2_t3649 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1312(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_5.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_5MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::.ctor()
extern "C" void EqualityComparer_1__ctor_m21362_gshared (EqualityComparer_1_t3650 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1291((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t3092_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m21363_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t3092_0_0_0_var = il2cpp_codegen_type_from_index(8081);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(GenericEqualityComparer_1_t3092_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_4 = (TypeU5BU5D_t570*)((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, (RuntimeTypeHandle_t2303 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t570* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t570*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m3582(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t3650_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t3650 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t3651 * L_8 = (DefaultComparer_t3651 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t3651 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t3650_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m21364_gshared (EqualityComparer_1_t3650 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t3650 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Color32_t295  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::GetHashCode(T) */, (EqualityComparer_1_t3650 *)__this, (Color32_t295 )((*(Color32_t295 *)((Color32_t295 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m21365_gshared (EqualityComparer_1_t3650 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t3650 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Color32_t295 , Color32_t295  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::Equals(T,T) */, (EqualityComparer_1_t3650 *)__this, (Color32_t295 )((*(Color32_t295 *)((Color32_t295 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Color32_t295 )((*(Color32_t295 *)((Color32_t295 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::get_Default()
extern "C" EqualityComparer_1_t3650 * EqualityComparer_1_get_Default_m21366_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t3650 * L_0 = ((EqualityComparer_1_t3650_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color32>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color32>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<UnityEngine.Color32>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::.ctor()
extern TypeInfo* EqualityComparer_1_t3650_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m21367_gshared (DefaultComparer_t3651 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8686);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t3650 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3650_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t3650 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t3650 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21368_gshared (DefaultComparer_t3651 * __this, Color32_t295  ___obj, const MethodInfo* method)
{
	{
		Color32_t295  L_0 = ___obj;
		Color32_t295  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21369_gshared (DefaultComparer_t3651 * __this, Color32_t295  ___x, Color32_t295  ___y, const MethodInfo* method)
{
	{
		Color32_t295  L_0 = ___x;
		Color32_t295  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Color32_t295  L_3 = ___y;
		Color32_t295  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Color32_t295  L_6 = ___y;
		Color32_t295  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Comparison`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m21370_gshared (Comparison_1_t3652 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.Color32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m21371_gshared (Comparison_1_t3652 * __this, Color32_t295  ___x, Color32_t295  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m21371((Comparison_1_t3652 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Color32_t295  ___x, Color32_t295  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Color32_t295  ___x, Color32_t295  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* Color32_t295_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m21372_gshared (Comparison_1_t3652 * __this, Color32_t295  ___x, Color32_t295  ___y, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color32_t295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Color32_t295_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(Color32_t295_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m21373_gshared (Comparison_1_t3652 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Keyframe>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_32.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_32MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
extern "C" Keyframe_t335  Array_InternalArray__get_Item_TisKeyframe_t335_m26298_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyframe_t335_m26298(__this, p0, method) (( Keyframe_t335  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyframe_t335_m26298_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m21386_gshared (InternalEnumerator_1_t3653 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21387_gshared (InternalEnumerator_1_t3653 * __this, const MethodInfo* method)
{
	{
		Keyframe_t335  L_0 = (( Keyframe_t335  (*) (InternalEnumerator_1_t3653 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t3653 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Keyframe_t335  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m21388_gshared (InternalEnumerator_1_t3653 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m21389_gshared (InternalEnumerator_1_t3653 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5054((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::get_Current()
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" Keyframe_t335  InternalEnumerator_1_get_Current_m21390_gshared (InternalEnumerator_1_t3653 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1116 * L_1 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_1, (String_t*)(String_t*) &_stringLiteral3846, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1116 * L_3 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_3, (String_t*)(String_t*) &_stringLiteral3847, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5054((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Keyframe_t335  L_8 = (( Keyframe_t335  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Keyframe>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Keyframe>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Keyframe>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::set_Item(System.Int32,T)
// System.Comparison`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Comparison_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
// System.Comparison`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"


// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1721_gshared (Comparison_1_t224 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m21657_gshared (Comparison_1_t224 * __this, RaycastHit_t226  ___x, RaycastHit_t226  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m21657((Comparison_1_t224 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, RaycastHit_t226  ___x, RaycastHit_t226  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, RaycastHit_t226  ___x, RaycastHit_t226  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* RaycastHit_t226_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m21658_gshared (Comparison_1_t224 * __this, RaycastHit_t226  ___x, RaycastHit_t226  ___y, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RaycastHit_t226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(161);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(RaycastHit_t226_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(RaycastHit_t226_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m21659_gshared (Comparison_1_t224 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_35.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_35MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
extern "C" RaycastHit_t226  Array_InternalArray__get_Item_TisRaycastHit_t226_m26309_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastHit_t226_m26309(__this, p0, method) (( RaycastHit_t226  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisRaycastHit_t226_m26309_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m21660_gshared (InternalEnumerator_1_t3667 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21661_gshared (InternalEnumerator_1_t3667 * __this, const MethodInfo* method)
{
	{
		RaycastHit_t226  L_0 = (( RaycastHit_t226  (*) (InternalEnumerator_1_t3667 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t3667 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastHit_t226  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m21662_gshared (InternalEnumerator_1_t3667 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m21663_gshared (InternalEnumerator_1_t3667 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5054((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::get_Current()
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" RaycastHit_t226  InternalEnumerator_1_get_Current_m21664_gshared (InternalEnumerator_1_t3667 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1116 * L_1 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_1, (String_t*)(String_t*) &_stringLiteral3846, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1116 * L_3 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_3, (String_t*)(String_t*) &_stringLiteral3847, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5054((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		RaycastHit_t226  L_8 = (( RaycastHit_t226  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Single
#include "mscorlib_System_Single.h"


// T System.Collections.Generic.IEnumerator`1<System.Single>::get_Current()
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_36.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_36MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Single>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Single>(System.Int32)
extern "C" float Array_InternalArray__get_Item_TisSingle_t308_m26323_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSingle_t308_m26323(__this, p0, method) (( float (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSingle_t308_m26323_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Single>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m21744_gshared (InternalEnumerator_1_t3673 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Single>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21745_gshared (InternalEnumerator_1_t3673 * __this, const MethodInfo* method)
{
	{
		float L_0 = (( float (*) (InternalEnumerator_1_t3673 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t3673 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		float L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Single>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m21746_gshared (InternalEnumerator_1_t3673 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Single>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m21747_gshared (InternalEnumerator_1_t3673 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5054((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Single>::get_Current()
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" float InternalEnumerator_1_get_Current_m21748_gshared (InternalEnumerator_1_t3673 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1116 * L_1 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_1, (String_t*)(String_t*) &_stringLiteral3846, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1116 * L_3 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_3, (String_t*)(String_t*) &_stringLiteral3847, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5054((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		float L_8 = (( float (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Single>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Single>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Single>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Single>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Single>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Single>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Single>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Single>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Single>::set_Item(System.Int32,T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
