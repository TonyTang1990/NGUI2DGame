#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "System_U3CModuleU3E.h"
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
// <Module>
#include "System_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// Locale
#include "System_Locale.h"
#ifndef _MSC_VER
#else
#endif
// Locale
#include "System_LocaleMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.String Locale::GetText(System.String)
extern "C" String_t* Locale_GetText_m10302 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method)
{
	{
		String_t* L_0 = ___msg;
		return L_0;
	}
}
// System.String Locale::GetText(System.String,System.Object[])
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Locale_GetText_m10303 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t300* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___fmt;
		ObjectU5BU5D_t300* L_1 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m1819(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.MonoTODOAttribute
#include "System_System_MonoTODOAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.MonoTODOAttribute
#include "System_System_MonoTODOAttributeMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void System.MonoTODOAttribute::.ctor()
extern "C" void MonoTODOAttribute__ctor_m10304 (MonoTODOAttribute_t1869 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MonoTODOAttribute::.ctor(System.String)
extern "C" void MonoTODOAttribute__ctor_m10305 (MonoTODOAttribute_t1869 * __this, String_t* ___comment, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___comment;
		__this->___comment_0 = L_0;
		return;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"



// System.Void System.CodeDom.Compiler.GeneratedCodeAttribute::.ctor(System.String,System.String)
extern "C" void GeneratedCodeAttribute__ctor_m3325 (GeneratedCodeAttribute_t741 * __this, String_t* ___tool, String_t* ___version, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tool;
		__this->___tool_0 = L_0;
		String_t* L_1 = ___version;
		__this->___version_1 = L_1;
		return;
	}
}
// System.Collections.Specialized.HybridDictionary
#include "System_System_Collections_Specialized_HybridDictionary.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Specialized.HybridDictionary
#include "System_System_Collections_Specialized_HybridDictionaryMethodDeclarations.h"

// System.Collections.Specialized.ListDictionary
#include "System_System_Collections_Specialized_ListDictionary.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Collections.CaseInsensitiveComparer
#include "mscorlib_System_Collections_CaseInsensitiveComparer.h"
// System.Collections.CaseInsensitiveHashCodeProvider
#include "mscorlib_System_Collections_CaseInsensitiveHashCodeProvider.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.CaseInsensitiveComparer
#include "mscorlib_System_Collections_CaseInsensitiveComparerMethodDeclarations.h"
// System.Collections.CaseInsensitiveHashCodeProvider
#include "mscorlib_System_Collections_CaseInsensitiveHashCodeProviderMethodDeclarations.h"
// System.Collections.Specialized.ListDictionary
#include "System_System_Collections_Specialized_ListDictionaryMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"


// System.Void System.Collections.Specialized.HybridDictionary::.ctor()
extern "C" void HybridDictionary__ctor_m9920 (HybridDictionary_t1740 * __this, const MethodInfo* method)
{
	{
		HybridDictionary__ctor_m10306(__this, 0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.HybridDictionary::.ctor(System.Int32,System.Boolean)
extern TypeInfo* CaseInsensitiveComparer_t2222_il2cpp_TypeInfo_var;
extern TypeInfo* CaseInsensitiveHashCodeProvider_t2223_il2cpp_TypeInfo_var;
extern TypeInfo* ListDictionary_t1113_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern "C" void HybridDictionary__ctor_m10306 (HybridDictionary_t1740 * __this, int32_t ___initialSize, bool ___caseInsensitive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CaseInsensitiveComparer_t2222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4267);
		CaseInsensitiveHashCodeProvider_t2223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4268);
		ListDictionary_t1113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2067);
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	CaseInsensitiveComparer_t2222 * G_B3_0 = {0};
	CaseInsensitiveHashCodeProvider_t2223 * G_B6_0 = {0};
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		bool L_0 = ___caseInsensitive;
		__this->___caseInsensitive_0 = L_0;
		bool L_1 = ___caseInsensitive;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CaseInsensitiveComparer_t2222_il2cpp_TypeInfo_var);
		CaseInsensitiveComparer_t2222 * L_2 = CaseInsensitiveComparer_get_DefaultInvariant_m12740(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = ((CaseInsensitiveComparer_t2222 *)(NULL));
	}

IL_001e:
	{
		V_0 = G_B3_0;
		bool L_3 = ___caseInsensitive;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CaseInsensitiveHashCodeProvider_t2223_il2cpp_TypeInfo_var);
		CaseInsensitiveHashCodeProvider_t2223 * L_4 = CaseInsensitiveHashCodeProvider_get_DefaultInvariant_m12741(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B6_0 = L_4;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = ((CaseInsensitiveHashCodeProvider_t2223 *)(NULL));
	}

IL_0030:
	{
		V_1 = G_B6_0;
		int32_t L_5 = ___initialSize;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)10))))
		{
			goto IL_004a;
		}
	}
	{
		Object_t * L_6 = V_0;
		ListDictionary_t1113 * L_7 = (ListDictionary_t1113 *)il2cpp_codegen_object_new (ListDictionary_t1113_il2cpp_TypeInfo_var);
		ListDictionary__ctor_m10340(L_7, L_6, /*hidden argument*/NULL);
		__this->___list_2 = L_7;
		goto IL_0058;
	}

IL_004a:
	{
		int32_t L_8 = ___initialSize;
		Object_t * L_9 = V_1;
		Object_t * L_10 = V_0;
		Hashtable_t915 * L_11 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m12742(L_11, L_8, L_9, L_10, /*hidden argument*/NULL);
		__this->___hashtable_1 = L_11;
	}

IL_0058:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.HybridDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HybridDictionary_System_Collections_IEnumerable_GetEnumerator_m10307 (HybridDictionary_t1740 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* System.Collections.IDictionaryEnumerator System.Collections.Specialized.HybridDictionary::GetEnumerator() */, __this);
		return L_0;
	}
}
// System.Collections.IDictionary System.Collections.Specialized.HybridDictionary::get_inner()
extern "C" Object_t * HybridDictionary_get_inner_m10308 (HybridDictionary_t1740 * __this, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * G_B3_0 = {0};
	{
		ListDictionary_t1113 * L_0 = (__this->___list_2);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Hashtable_t915 * L_1 = (__this->___hashtable_1);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		G_B3_0 = L_2;
		goto IL_001e;
	}

IL_0018:
	{
		ListDictionary_t1113 * L_3 = (__this->___list_2);
		G_B3_0 = ((Object_t *)(L_3));
	}

IL_001e:
	{
		return G_B3_0;
	}
}
// System.Int32 System.Collections.Specialized.HybridDictionary::get_Count()
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern "C" int32_t HybridDictionary_get_Count_m10309 (HybridDictionary_t1740 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = HybridDictionary_get_inner_m10308(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t793_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object System.Collections.Specialized.HybridDictionary::get_Item(System.Object)
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern "C" Object_t * HybridDictionary_get_Item_m10310 (HybridDictionary_t1740 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = HybridDictionary_get_inner_m10308(__this, /*hidden argument*/NULL);
		Object_t * L_1 = ___key;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1060_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Specialized.HybridDictionary::set_Item(System.Object,System.Object)
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern "C" void HybridDictionary_set_Item_m10311 (HybridDictionary_t1740 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = HybridDictionary_get_inner_m10308(__this, /*hidden argument*/NULL);
		Object_t * L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t1060_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		ListDictionary_t1113 * L_3 = (__this->___list_2);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.HybridDictionary::get_Count() */, __this);
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)10))))
		{
			goto IL_002b;
		}
	}
	{
		HybridDictionary_Switch_m10321(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Collections.ICollection System.Collections.Specialized.HybridDictionary::get_Keys()
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern "C" Object_t * HybridDictionary_get_Keys_m10312 (HybridDictionary_t1740 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = HybridDictionary_get_inner_m10308(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t1060_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object System.Collections.Specialized.HybridDictionary::get_SyncRoot()
extern "C" Object_t * HybridDictionary_get_SyncRoot_m10313 (HybridDictionary_t1740 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Collections.ICollection System.Collections.Specialized.HybridDictionary::get_Values()
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern "C" Object_t * HybridDictionary_get_Values_m10314 (HybridDictionary_t1740 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = HybridDictionary_get_inner_m10308(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(3 /* System.Collections.ICollection System.Collections.IDictionary::get_Values() */, IDictionary_t1060_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.HybridDictionary::Add(System.Object,System.Object)
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern "C" void HybridDictionary_Add_m10315 (HybridDictionary_t1740 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = HybridDictionary_get_inner_m10308(__this, /*hidden argument*/NULL);
		Object_t * L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(4 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t1060_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		ListDictionary_t1113 * L_3 = (__this->___list_2);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.HybridDictionary::get_Count() */, __this);
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)10))))
		{
			goto IL_002b;
		}
	}
	{
		HybridDictionary_Switch_m10321(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void System.Collections.Specialized.HybridDictionary::Clear()
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern "C" void HybridDictionary_Clear_m10316 (HybridDictionary_t1740 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = HybridDictionary_get_inner_m10308(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(5 /* System.Void System.Collections.IDictionary::Clear() */, IDictionary_t1060_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Boolean System.Collections.Specialized.HybridDictionary::Contains(System.Object)
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern "C" bool HybridDictionary_Contains_m10317 (HybridDictionary_t1740 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = HybridDictionary_get_inner_m10308(__this, /*hidden argument*/NULL);
		Object_t * L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(6 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t1060_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Specialized.HybridDictionary::CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern "C" void HybridDictionary_CopyTo_m10318 (HybridDictionary_t1740 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = HybridDictionary_get_inner_m10308(__this, /*hidden argument*/NULL);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t793_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.HybridDictionary::GetEnumerator()
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern "C" Object_t * HybridDictionary_GetEnumerator_m10319 (HybridDictionary_t1740 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = HybridDictionary_get_inner_m10308(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t1060_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.HybridDictionary::Remove(System.Object)
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern "C" void HybridDictionary_Remove_m10320 (HybridDictionary_t1740 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = HybridDictionary_get_inner_m10308(__this, /*hidden argument*/NULL);
		Object_t * L_1 = ___key;
		NullCheck(L_0);
		InterfaceActionInvoker1< Object_t * >::Invoke(8 /* System.Void System.Collections.IDictionary::Remove(System.Object) */, IDictionary_t1060_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.Specialized.HybridDictionary::Switch()
extern TypeInfo* CaseInsensitiveComparer_t2222_il2cpp_TypeInfo_var;
extern TypeInfo* CaseInsensitiveHashCodeProvider_t2223_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern "C" void HybridDictionary_Switch_m10321 (HybridDictionary_t1740 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CaseInsensitiveComparer_t2222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4267);
		CaseInsensitiveHashCodeProvider_t2223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4268);
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	CaseInsensitiveComparer_t2222 * G_B3_0 = {0};
	CaseInsensitiveHashCodeProvider_t2223 * G_B6_0 = {0};
	{
		bool L_0 = (__this->___caseInsensitive_0);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CaseInsensitiveComparer_t2222_il2cpp_TypeInfo_var);
		CaseInsensitiveComparer_t2222 * L_1 = CaseInsensitiveComparer_get_DefaultInvariant_m12740(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = ((CaseInsensitiveComparer_t2222 *)(NULL));
	}

IL_0016:
	{
		V_0 = G_B3_0;
		bool L_2 = (__this->___caseInsensitive_0);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CaseInsensitiveHashCodeProvider_t2223_il2cpp_TypeInfo_var);
		CaseInsensitiveHashCodeProvider_t2223 * L_3 = CaseInsensitiveHashCodeProvider_get_DefaultInvariant_m12741(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B6_0 = L_3;
		goto IL_002d;
	}

IL_002c:
	{
		G_B6_0 = ((CaseInsensitiveHashCodeProvider_t2223 *)(NULL));
	}

IL_002d:
	{
		V_1 = G_B6_0;
		ListDictionary_t1113 * L_4 = (__this->___list_2);
		Object_t * L_5 = V_1;
		Object_t * L_6 = V_0;
		Hashtable_t915 * L_7 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m12743(L_7, L_4, L_5, L_6, /*hidden argument*/NULL);
		__this->___hashtable_1 = L_7;
		ListDictionary_t1113 * L_8 = (__this->___list_2);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(9 /* System.Void System.Collections.Specialized.ListDictionary::Clear() */, L_8);
		__this->___list_2 = (ListDictionary_t1113 *)NULL;
		return;
	}
}
// System.Collections.Specialized.ListDictionary/DictionaryNode
#include "System_System_Collections_Specialized_ListDictionary_Diction.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Specialized.ListDictionary/DictionaryNode
#include "System_System_Collections_Specialized_ListDictionary_DictionMethodDeclarations.h"



// System.Void System.Collections.Specialized.ListDictionary/DictionaryNode::.ctor(System.Object,System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode)
extern "C" void DictionaryNode__ctor_m10322 (DictionaryNode_t1870 * __this, Object_t * ___key, Object_t * ___value, DictionaryNode_t1870 * ___next, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___key;
		__this->___key_0 = L_0;
		Object_t * L_1 = ___value;
		__this->___value_1 = L_1;
		DictionaryNode_t1870 * L_2 = ___next;
		__this->___next_2 = L_2;
		return;
	}
}
// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
#include "System_System_Collections_Specialized_ListDictionary_Diction_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
#include "System_System_Collections_Specialized_ListDictionary_Diction_0MethodDeclarations.h"

// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"


// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::.ctor(System.Collections.Specialized.ListDictionary)
extern "C" void DictionaryNodeEnumerator__ctor_m10323 (DictionaryNodeEnumerator_t1871 * __this, ListDictionary_t1113 * ___dict, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		ListDictionary_t1113 * L_0 = ___dict;
		__this->___dict_0 = L_0;
		ListDictionary_t1113 * L_1 = ___dict;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___version_1);
		__this->___version_3 = L_2;
		VirtActionInvoker0::Invoke(9 /* System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::Reset() */, __this);
		return;
	}
}
// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::FailFast()
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" void DictionaryNodeEnumerator_FailFast_m10324 (DictionaryNodeEnumerator_t1871 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___version_3);
		ListDictionary_t1113 * L_1 = (__this->___dict_0);
		NullCheck(L_1);
		int32_t L_2 = (L_1->___version_1);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		InvalidOperationException_t1116 * L_3 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_3, (String_t*) &_stringLiteral2881, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0021:
	{
		return;
	}
}
// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::MoveNext()
extern "C" bool DictionaryNodeEnumerator_MoveNext_m10325 (DictionaryNodeEnumerator_t1871 * __this, const MethodInfo* method)
{
	DictionaryNodeEnumerator_t1871 * G_B5_0 = {0};
	DictionaryNodeEnumerator_t1871 * G_B4_0 = {0};
	DictionaryNode_t1870 * G_B6_0 = {0};
	DictionaryNodeEnumerator_t1871 * G_B6_1 = {0};
	{
		DictionaryNodeEnumerator_FailFast_m10324(__this, /*hidden argument*/NULL);
		DictionaryNode_t1870 * L_0 = (__this->___current_2);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		bool L_1 = (__this->___isAtStart_1);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		return 0;
	}

IL_001e:
	{
		bool L_2 = (__this->___isAtStart_1);
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_003a;
		}
	}
	{
		ListDictionary_t1113 * L_3 = (__this->___dict_0);
		NullCheck(L_3);
		DictionaryNode_t1870 * L_4 = (L_3->___head_2);
		G_B6_0 = L_4;
		G_B6_1 = G_B4_0;
		goto IL_0045;
	}

IL_003a:
	{
		DictionaryNode_t1870 * L_5 = (__this->___current_2);
		NullCheck(L_5);
		DictionaryNode_t1870 * L_6 = (L_5->___next_2);
		G_B6_0 = L_6;
		G_B6_1 = G_B5_0;
	}

IL_0045:
	{
		NullCheck(G_B6_1);
		G_B6_1->___current_2 = G_B6_0;
		__this->___isAtStart_1 = 0;
		DictionaryNode_t1870 * L_7 = (__this->___current_2);
		return ((((int32_t)((((Object_t*)(DictionaryNode_t1870 *)L_7) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::Reset()
extern "C" void DictionaryNodeEnumerator_Reset_m10326 (DictionaryNodeEnumerator_t1871 * __this, const MethodInfo* method)
{
	{
		DictionaryNodeEnumerator_FailFast_m10324(__this, /*hidden argument*/NULL);
		__this->___isAtStart_1 = 1;
		__this->___current_2 = (DictionaryNode_t1870 *)NULL;
		return;
	}
}
// System.Object System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Current()
extern TypeInfo* DictionaryEntry_t1150_il2cpp_TypeInfo_var;
extern "C" Object_t * DictionaryNodeEnumerator_get_Current_m10327 (DictionaryNodeEnumerator_t1871 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t1150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2048);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryEntry_t1150  L_0 = (DictionaryEntry_t1150 )VirtFuncInvoker0< DictionaryEntry_t1150  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Entry() */, __this);
		DictionaryEntry_t1150  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_DictionaryNode()
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" DictionaryNode_t1870 * DictionaryNodeEnumerator_get_DictionaryNode_m10328 (DictionaryNodeEnumerator_t1871 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryNodeEnumerator_FailFast_m10324(__this, /*hidden argument*/NULL);
		DictionaryNode_t1870 * L_0 = (__this->___current_2);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t1116 * L_1 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_1, (String_t*) &_stringLiteral2880, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001c:
	{
		DictionaryNode_t1870 * L_2 = (__this->___current_2);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Entry()
extern "C" DictionaryEntry_t1150  DictionaryNodeEnumerator_get_Entry_m10329 (DictionaryNodeEnumerator_t1871 * __this, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		DictionaryNode_t1870 * L_0 = DictionaryNodeEnumerator_get_DictionaryNode_m10328(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (L_0->___key_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		DictionaryNode_t1870 * L_3 = (__this->___current_2);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->___value_1);
		DictionaryEntry_t1150  L_5 = {0};
		DictionaryEntry__ctor_m12744(&L_5, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Object System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Key()
extern "C" Object_t * DictionaryNodeEnumerator_get_Key_m10330 (DictionaryNodeEnumerator_t1871 * __this, const MethodInfo* method)
{
	{
		DictionaryNode_t1870 * L_0 = DictionaryNodeEnumerator_get_DictionaryNode_m10328(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (L_0->___key_0);
		return L_1;
	}
}
// System.Object System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Value()
extern "C" Object_t * DictionaryNodeEnumerator_get_Value_m10331 (DictionaryNodeEnumerator_t1871 * __this, const MethodInfo* method)
{
	{
		DictionaryNode_t1870 * L_0 = DictionaryNodeEnumerator_get_DictionaryNode_m10328(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (L_0->___value_1);
		return L_1;
	}
}
// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator
#include "System_System_Collections_Specialized_ListDictionary_Diction_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator
#include "System_System_Collections_Specialized_ListDictionary_Diction_1MethodDeclarations.h"



// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::.ctor(System.Collections.IDictionaryEnumerator,System.Boolean)
extern "C" void DictionaryNodeCollectionEnumerator__ctor_m10332 (DictionaryNodeCollectionEnumerator_t1872 * __this, Object_t * ___inner, bool ___isKeyList, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___inner;
		__this->___inner_0 = L_0;
		bool L_1 = ___isKeyList;
		__this->___isKeyList_1 = L_1;
		return;
	}
}
// System.Object System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::get_Current()
extern TypeInfo* IDictionaryEnumerator_t1360_il2cpp_TypeInfo_var;
extern "C" Object_t * DictionaryNodeCollectionEnumerator_get_Current_m10333 (DictionaryNodeCollectionEnumerator_t1872 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2578);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * G_B3_0 = {0};
	{
		bool L_0 = (__this->___isKeyList_1);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Object_t * L_1 = (__this->___inner_0);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(1 /* System.Object System.Collections.IDictionaryEnumerator::get_Key() */, IDictionaryEnumerator_t1360_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		goto IL_0026;
	}

IL_001b:
	{
		Object_t * L_3 = (__this->___inner_0);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.IDictionaryEnumerator::get_Value() */, IDictionaryEnumerator_t1360_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::MoveNext()
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern "C" bool DictionaryNodeCollectionEnumerator_MoveNext_m10334 (DictionaryNodeCollectionEnumerator_t1872 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___inner_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection
#include "System_System_Collections_Specialized_ListDictionary_Diction_2.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection
#include "System_System_Collections_Specialized_ListDictionary_Diction_2MethodDeclarations.h"

// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeException.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::.ctor(System.Collections.Specialized.ListDictionary,System.Boolean)
extern "C" void DictionaryNodeCollection__ctor_m10335 (DictionaryNodeCollection_t1873 * __this, ListDictionary_t1113 * ___dict, bool ___isKeyList, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		ListDictionary_t1113 * L_0 = ___dict;
		__this->___dict_0 = L_0;
		bool L_1 = ___isKeyList;
		__this->___isKeyList_1 = L_1;
		return;
	}
}
// System.Int32 System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::get_Count()
extern "C" int32_t DictionaryNodeCollection_get_Count_m10336 (DictionaryNodeCollection_t1873 * __this, const MethodInfo* method)
{
	{
		ListDictionary_t1113 * L_0 = (__this->___dict_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.ListDictionary::get_Count() */, L_0);
		return L_1;
	}
}
// System.Object System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::get_SyncRoot()
extern "C" Object_t * DictionaryNodeCollection_get_SyncRoot_m10337 (DictionaryNodeCollection_t1873 * __this, const MethodInfo* method)
{
	{
		ListDictionary_t1113 * L_0 = (__this->___dict_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(14 /* System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot() */, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::CopyTo(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* IndexOutOfRangeException_t682_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void DictionaryNodeCollection_CopyTo_m10338 (DictionaryNodeCollection_t1873 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		IndexOutOfRangeException_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(927);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4991(L_1, (String_t*) &_stringLiteral337, (String_t*) &_stringLiteral2875, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_3 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_3, (String_t*) &_stringLiteral2137, (String_t*) &_stringLiteral2876, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5054(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0044;
		}
	}
	{
		IndexOutOfRangeException_t682 * L_7 = (IndexOutOfRangeException_t682 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t682_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3175(L_7, (String_t*) &_stringLiteral2877, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0044:
	{
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::get_Count() */, __this);
		Array_t * L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = Array_get_Length_m5054(L_9, /*hidden argument*/NULL);
		int32_t L_11 = ___index;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)))))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentException_t356 * L_12 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_12, (String_t*) &_stringLiteral2878, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0062:
	{
		Object_t * L_13 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IEnumerator System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::GetEnumerator() */, __this);
		V_1 = L_13;
	}

IL_0069:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0082;
		}

IL_006e:
		{
			Object_t * L_14 = V_1;
			NullCheck(L_14);
			Object_t * L_15 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_14);
			V_0 = L_15;
			Array_t * L_16 = ___array;
			Object_t * L_17 = V_0;
			int32_t L_18 = ___index;
			int32_t L_19 = L_18;
			___index = ((int32_t)((int32_t)L_19+(int32_t)1));
			NullCheck(L_16);
			Array_SetValue_m5061(L_16, L_17, L_19, /*hidden argument*/NULL);
		}

IL_0082:
		{
			Object_t * L_20 = V_1;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_006e;
			}
		}

IL_008d:
		{
			IL2CPP_LEAVE(0xA4, FINALLY_0092);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0092;
	}

FINALLY_0092:
	{ // begin finally (depth: 1)
		{
			Object_t * L_22 = V_1;
			V_2 = ((Object_t *)IsInst(L_22, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_23 = V_2;
			if (L_23)
			{
				goto IL_009d;
			}
		}

IL_009c:
		{
			IL2CPP_END_FINALLY(146)
		}

IL_009d:
		{
			Object_t * L_24 = V_2;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(146)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(146)
	{
		IL2CPP_JUMP_TBL(0xA4, IL_00a4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_00a4:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::GetEnumerator()
extern TypeInfo* DictionaryNodeCollectionEnumerator_t1872_il2cpp_TypeInfo_var;
extern "C" Object_t * DictionaryNodeCollection_GetEnumerator_m10339 (DictionaryNodeCollection_t1873 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryNodeCollectionEnumerator_t1872_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4269);
		s_Il2CppMethodIntialized = true;
	}
	{
		ListDictionary_t1113 * L_0 = (__this->___dict_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator() */, L_0);
		bool L_2 = (__this->___isKeyList_1);
		DictionaryNodeCollectionEnumerator_t1872 * L_3 = (DictionaryNodeCollectionEnumerator_t1872 *)il2cpp_codegen_object_new (DictionaryNodeCollectionEnumerator_t1872_il2cpp_TypeInfo_var);
		DictionaryNodeCollectionEnumerator__ctor_m10332(L_3, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Specialized.ListDictionary::.ctor()
extern "C" void ListDictionary__ctor_m5235 (ListDictionary_t1113 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		__this->___count_0 = 0;
		__this->___version_1 = 0;
		__this->___comparer_3 = (Object_t *)NULL;
		__this->___head_2 = (DictionaryNode_t1870 *)NULL;
		return;
	}
}
// System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
extern "C" void ListDictionary__ctor_m10340 (ListDictionary_t1113 * __this, Object_t * ___comparer, const MethodInfo* method)
{
	{
		ListDictionary__ctor_m5235(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___comparer;
		__this->___comparer_3 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* DictionaryNodeEnumerator_t1871_il2cpp_TypeInfo_var;
extern "C" Object_t * ListDictionary_System_Collections_IEnumerable_GetEnumerator_m10341 (ListDictionary_t1113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryNodeEnumerator_t1871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4270);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryNodeEnumerator_t1871 * L_0 = (DictionaryNodeEnumerator_t1871 *)il2cpp_codegen_object_new (DictionaryNodeEnumerator_t1871_il2cpp_TypeInfo_var);
		DictionaryNodeEnumerator__ctor_m10323(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* IComparer_t1418_il2cpp_TypeInfo_var;
extern "C" DictionaryNode_t1870 * ListDictionary_FindEntry_m10342 (ListDictionary_t1113 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		IComparer_t1418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2964);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryNode_t1870 * V_0 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4991(L_1, (String_t*) &_stringLiteral1834, (String_t*) &_stringLiteral2874, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		DictionaryNode_t1870 * L_2 = (__this->___head_2);
		V_0 = L_2;
		Object_t * L_3 = (__this->___comparer_3);
		if (L_3)
		{
			goto IL_0055;
		}
	}
	{
		goto IL_004a;
	}

IL_002d:
	{
		Object_t * L_4 = ___key;
		DictionaryNode_t1870 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (L_5->___key_0);
		NullCheck(L_4);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_4, L_6);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0050;
	}

IL_0043:
	{
		DictionaryNode_t1870 * L_8 = V_0;
		NullCheck(L_8);
		DictionaryNode_t1870 * L_9 = (L_8->___next_2);
		V_0 = L_9;
	}

IL_004a:
	{
		DictionaryNode_t1870 * L_10 = V_0;
		if (L_10)
		{
			goto IL_002d;
		}
	}

IL_0050:
	{
		goto IL_0083;
	}

IL_0055:
	{
		goto IL_007d;
	}

IL_005a:
	{
		Object_t * L_11 = (__this->___comparer_3);
		Object_t * L_12 = ___key;
		DictionaryNode_t1870 * L_13 = V_0;
		NullCheck(L_13);
		Object_t * L_14 = (L_13->___key_0);
		NullCheck(L_11);
		int32_t L_15 = (int32_t)InterfaceFuncInvoker2< int32_t, Object_t *, Object_t * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1418_il2cpp_TypeInfo_var, L_11, L_12, L_14);
		if (L_15)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_0083;
	}

IL_0076:
	{
		DictionaryNode_t1870 * L_16 = V_0;
		NullCheck(L_16);
		DictionaryNode_t1870 * L_17 = (L_16->___next_2);
		V_0 = L_17;
	}

IL_007d:
	{
		DictionaryNode_t1870 * L_18 = V_0;
		if (L_18)
		{
			goto IL_005a;
		}
	}

IL_0083:
	{
		DictionaryNode_t1870 * L_19 = V_0;
		return L_19;
	}
}
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode&)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* IComparer_t1418_il2cpp_TypeInfo_var;
extern "C" DictionaryNode_t1870 * ListDictionary_FindEntry_m10343 (ListDictionary_t1113 * __this, Object_t * ___key, DictionaryNode_t1870 ** ___prev, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		IComparer_t1418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2964);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryNode_t1870 * V_0 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4991(L_1, (String_t*) &_stringLiteral1834, (String_t*) &_stringLiteral2874, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		DictionaryNode_t1870 * L_2 = (__this->___head_2);
		V_0 = L_2;
		DictionaryNode_t1870 ** L_3 = ___prev;
		*((Object_t **)(L_3)) = (Object_t *)NULL;
		Object_t * L_4 = (__this->___comparer_3);
		if (L_4)
		{
			goto IL_005b;
		}
	}
	{
		goto IL_0050;
	}

IL_0030:
	{
		Object_t * L_5 = ___key;
		DictionaryNode_t1870 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (L_6->___key_0);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		goto IL_0056;
	}

IL_0046:
	{
		DictionaryNode_t1870 ** L_9 = ___prev;
		DictionaryNode_t1870 * L_10 = V_0;
		*((Object_t **)(L_9)) = (Object_t *)L_10;
		DictionaryNode_t1870 * L_11 = V_0;
		NullCheck(L_11);
		DictionaryNode_t1870 * L_12 = (L_11->___next_2);
		V_0 = L_12;
	}

IL_0050:
	{
		DictionaryNode_t1870 * L_13 = V_0;
		if (L_13)
		{
			goto IL_0030;
		}
	}

IL_0056:
	{
		goto IL_008c;
	}

IL_005b:
	{
		goto IL_0086;
	}

IL_0060:
	{
		Object_t * L_14 = (__this->___comparer_3);
		Object_t * L_15 = ___key;
		DictionaryNode_t1870 * L_16 = V_0;
		NullCheck(L_16);
		Object_t * L_17 = (L_16->___key_0);
		NullCheck(L_14);
		int32_t L_18 = (int32_t)InterfaceFuncInvoker2< int32_t, Object_t *, Object_t * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1418_il2cpp_TypeInfo_var, L_14, L_15, L_17);
		if (L_18)
		{
			goto IL_007c;
		}
	}
	{
		goto IL_008c;
	}

IL_007c:
	{
		DictionaryNode_t1870 ** L_19 = ___prev;
		DictionaryNode_t1870 * L_20 = V_0;
		*((Object_t **)(L_19)) = (Object_t *)L_20;
		DictionaryNode_t1870 * L_21 = V_0;
		NullCheck(L_21);
		DictionaryNode_t1870 * L_22 = (L_21->___next_2);
		V_0 = L_22;
	}

IL_0086:
	{
		DictionaryNode_t1870 * L_23 = V_0;
		if (L_23)
		{
			goto IL_0060;
		}
	}

IL_008c:
	{
		DictionaryNode_t1870 * L_24 = V_0;
		return L_24;
	}
}
// System.Void System.Collections.Specialized.ListDictionary::AddImpl(System.Object,System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode)
extern TypeInfo* DictionaryNode_t1870_il2cpp_TypeInfo_var;
extern "C" void ListDictionary_AddImpl_m10344 (ListDictionary_t1113 * __this, Object_t * ___key, Object_t * ___value, DictionaryNode_t1870 * ___prev, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryNode_t1870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4271);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryNode_t1870 * L_0 = ___prev;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_1 = ___key;
		Object_t * L_2 = ___value;
		DictionaryNode_t1870 * L_3 = (__this->___head_2);
		DictionaryNode_t1870 * L_4 = (DictionaryNode_t1870 *)il2cpp_codegen_object_new (DictionaryNode_t1870_il2cpp_TypeInfo_var);
		DictionaryNode__ctor_m10322(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->___head_2 = L_4;
		goto IL_0031;
	}

IL_001e:
	{
		DictionaryNode_t1870 * L_5 = ___prev;
		Object_t * L_6 = ___key;
		Object_t * L_7 = ___value;
		DictionaryNode_t1870 * L_8 = ___prev;
		NullCheck(L_8);
		DictionaryNode_t1870 * L_9 = (L_8->___next_2);
		DictionaryNode_t1870 * L_10 = (DictionaryNode_t1870 *)il2cpp_codegen_object_new (DictionaryNode_t1870_il2cpp_TypeInfo_var);
		DictionaryNode__ctor_m10322(L_10, L_6, L_7, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->___next_2 = L_10;
	}

IL_0031:
	{
		int32_t L_11 = (__this->___count_0);
		__this->___count_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = (__this->___version_1);
		__this->___version_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		return;
	}
}
// System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
extern "C" int32_t ListDictionary_get_Count_m10345 (ListDictionary_t1113 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_0);
		return L_0;
	}
}
// System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
extern "C" Object_t * ListDictionary_get_SyncRoot_m10346 (ListDictionary_t1113 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* IndexOutOfRangeException_t682_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t1150_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void ListDictionary_CopyTo_m10347 (ListDictionary_t1113 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		IndexOutOfRangeException_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(927);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		DictionaryEntry_t1150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2048);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t1150  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4991(L_1, (String_t*) &_stringLiteral337, (String_t*) &_stringLiteral2875, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_3 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_3, (String_t*) &_stringLiteral2137, (String_t*) &_stringLiteral2876, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m5054(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0044;
		}
	}
	{
		IndexOutOfRangeException_t682 * L_7 = (IndexOutOfRangeException_t682 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t682_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3175(L_7, (String_t*) &_stringLiteral2877, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0044:
	{
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.ListDictionary::get_Count() */, __this);
		Array_t * L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = Array_get_Length_m5054(L_9, /*hidden argument*/NULL);
		int32_t L_11 = ___index;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)))))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentException_t356 * L_12 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_12, (String_t*) &_stringLiteral2878, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0062:
	{
		Object_t * L_13 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator() */, __this);
		V_1 = L_13;
	}

IL_0069:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008c;
		}

IL_006e:
		{
			Object_t * L_14 = V_1;
			NullCheck(L_14);
			Object_t * L_15 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_14);
			V_0 = ((*(DictionaryEntry_t1150 *)((DictionaryEntry_t1150 *)UnBox (L_15, DictionaryEntry_t1150_il2cpp_TypeInfo_var))));
			Array_t * L_16 = ___array;
			DictionaryEntry_t1150  L_17 = V_0;
			DictionaryEntry_t1150  L_18 = L_17;
			Object_t * L_19 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_18);
			int32_t L_20 = ___index;
			int32_t L_21 = L_20;
			___index = ((int32_t)((int32_t)L_21+(int32_t)1));
			NullCheck(L_16);
			Array_SetValue_m5061(L_16, L_19, L_21, /*hidden argument*/NULL);
		}

IL_008c:
		{
			Object_t * L_22 = V_1;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_006e;
			}
		}

IL_0097:
		{
			IL2CPP_LEAVE(0xAE, FINALLY_009c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_009c;
	}

FINALLY_009c:
	{ // begin finally (depth: 1)
		{
			Object_t * L_24 = V_1;
			V_2 = ((Object_t *)IsInst(L_24, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_25 = V_2;
			if (L_25)
			{
				goto IL_00a7;
			}
		}

IL_00a6:
		{
			IL2CPP_END_FINALLY(156)
		}

IL_00a7:
		{
			Object_t * L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_26);
			IL2CPP_END_FINALLY(156)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(156)
	{
		IL2CPP_JUMP_TBL(0xAE, IL_00ae)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_00ae:
	{
		return;
	}
}
// System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
extern "C" Object_t * ListDictionary_get_Item_m10348 (ListDictionary_t1113 * __this, Object_t * ___key, const MethodInfo* method)
{
	DictionaryNode_t1870 * V_0 = {0};
	Object_t * G_B3_0 = {0};
	{
		Object_t * L_0 = ___key;
		DictionaryNode_t1870 * L_1 = ListDictionary_FindEntry_m10342(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		DictionaryNode_t1870 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = NULL;
		goto IL_001a;
	}

IL_0014:
	{
		DictionaryNode_t1870 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (L_3->___value_1);
		G_B3_0 = L_4;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
extern "C" void ListDictionary_set_Item_m10349 (ListDictionary_t1113 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	DictionaryNode_t1870 * V_0 = {0};
	DictionaryNode_t1870 * V_1 = {0};
	{
		Object_t * L_0 = ___key;
		DictionaryNode_t1870 * L_1 = ListDictionary_FindEntry_m10343(__this, L_0, (&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		DictionaryNode_t1870 * L_2 = V_1;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		DictionaryNode_t1870 * L_3 = V_1;
		Object_t * L_4 = ___value;
		NullCheck(L_3);
		L_3->___value_1 = L_4;
		goto IL_0025;
	}

IL_001c:
	{
		Object_t * L_5 = ___key;
		Object_t * L_6 = ___value;
		DictionaryNode_t1870 * L_7 = V_0;
		ListDictionary_AddImpl_m10344(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Collections.ICollection System.Collections.Specialized.ListDictionary::get_Keys()
extern TypeInfo* DictionaryNodeCollection_t1873_il2cpp_TypeInfo_var;
extern "C" Object_t * ListDictionary_get_Keys_m10350 (ListDictionary_t1113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryNodeCollection_t1873_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4272);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryNodeCollection_t1873 * L_0 = (DictionaryNodeCollection_t1873 *)il2cpp_codegen_object_new (DictionaryNodeCollection_t1873_il2cpp_TypeInfo_var);
		DictionaryNodeCollection__ctor_m10335(L_0, __this, 1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.ICollection System.Collections.Specialized.ListDictionary::get_Values()
extern TypeInfo* DictionaryNodeCollection_t1873_il2cpp_TypeInfo_var;
extern "C" Object_t * ListDictionary_get_Values_m10351 (ListDictionary_t1113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryNodeCollection_t1873_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4272);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryNodeCollection_t1873 * L_0 = (DictionaryNodeCollection_t1873 *)il2cpp_codegen_object_new (DictionaryNodeCollection_t1873_il2cpp_TypeInfo_var);
		DictionaryNodeCollection__ctor_m10335(L_0, __this, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" void ListDictionary_Add_m10352 (ListDictionary_t1113 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryNode_t1870 * V_0 = {0};
	DictionaryNode_t1870 * V_1 = {0};
	{
		Object_t * L_0 = ___key;
		DictionaryNode_t1870 * L_1 = ListDictionary_FindEntry_m10343(__this, L_0, (&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		DictionaryNode_t1870 * L_2 = V_1;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_t356 * L_3 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6326(L_3, (String_t*) &_stringLiteral1834, (String_t*) &_stringLiteral2879, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		Object_t * L_4 = ___key;
		Object_t * L_5 = ___value;
		DictionaryNode_t1870 * L_6 = V_0;
		ListDictionary_AddImpl_m10344(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.ListDictionary::Clear()
extern "C" void ListDictionary_Clear_m10353 (ListDictionary_t1113 * __this, const MethodInfo* method)
{
	{
		__this->___head_2 = (DictionaryNode_t1870 *)NULL;
		__this->___count_0 = 0;
		int32_t L_0 = (__this->___version_1);
		__this->___version_1 = ((int32_t)((int32_t)L_0+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Specialized.ListDictionary::Contains(System.Object)
extern "C" bool ListDictionary_Contains_m10354 (ListDictionary_t1113 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		DictionaryNode_t1870 * L_1 = ListDictionary_FindEntry_m10342(__this, L_0, /*hidden argument*/NULL);
		return ((((int32_t)((((Object_t*)(DictionaryNode_t1870 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
extern TypeInfo* DictionaryNodeEnumerator_t1871_il2cpp_TypeInfo_var;
extern "C" Object_t * ListDictionary_GetEnumerator_m10355 (ListDictionary_t1113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryNodeEnumerator_t1871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4270);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryNodeEnumerator_t1871 * L_0 = (DictionaryNodeEnumerator_t1871 *)il2cpp_codegen_object_new (DictionaryNodeEnumerator_t1871_il2cpp_TypeInfo_var);
		DictionaryNodeEnumerator__ctor_m10323(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Collections.Specialized.ListDictionary::Remove(System.Object)
extern "C" void ListDictionary_Remove_m10356 (ListDictionary_t1113 * __this, Object_t * ___key, const MethodInfo* method)
{
	DictionaryNode_t1870 * V_0 = {0};
	DictionaryNode_t1870 * V_1 = {0};
	{
		Object_t * L_0 = ___key;
		DictionaryNode_t1870 * L_1 = ListDictionary_FindEntry_m10343(__this, L_0, (&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		DictionaryNode_t1870 * L_2 = V_1;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		DictionaryNode_t1870 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		DictionaryNode_t1870 * L_4 = V_1;
		NullCheck(L_4);
		DictionaryNode_t1870 * L_5 = (L_4->___next_2);
		__this->___head_2 = L_5;
		goto IL_0034;
	}

IL_0028:
	{
		DictionaryNode_t1870 * L_6 = V_0;
		DictionaryNode_t1870 * L_7 = V_1;
		NullCheck(L_7);
		DictionaryNode_t1870 * L_8 = (L_7->___next_2);
		NullCheck(L_6);
		L_6->___next_2 = L_8;
	}

IL_0034:
	{
		DictionaryNode_t1870 * L_9 = V_1;
		NullCheck(L_9);
		L_9->___value_1 = NULL;
		int32_t L_10 = (__this->___count_0);
		__this->___count_0 = ((int32_t)((int32_t)L_10-(int32_t)1));
		int32_t L_11 = (__this->___version_1);
		__this->___version_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
		return;
	}
}
// System.Collections.Specialized.NameObjectCollectionBase/_Item
#include "System_System_Collections_Specialized_NameObjectCollectionBa_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Specialized.NameObjectCollectionBase/_Item
#include "System_System_Collections_Specialized_NameObjectCollectionBa_1MethodDeclarations.h"



// System.Void System.Collections.Specialized.NameObjectCollectionBase/_Item::.ctor(System.String,System.Object)
extern "C" void _Item__ctor_m10357 (_Item_t1874 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___key;
		__this->___key_0 = L_0;
		Object_t * L_1 = ___value;
		__this->___value_1 = L_1;
		return;
	}
}
// System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator
#include "System_System_Collections_Specialized_NameObjectCollectionBa_2.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator
#include "System_System_Collections_Specialized_NameObjectCollectionBa_2MethodDeclarations.h"

// System.Collections.Specialized.NameObjectCollectionBase
#include "System_System_Collections_Specialized_NameObjectCollectionBa.h"
// System.Collections.Specialized.NameObjectCollectionBase
#include "System_System_Collections_Specialized_NameObjectCollectionBaMethodDeclarations.h"


// System.Void System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::.ctor(System.Collections.Specialized.NameObjectCollectionBase)
extern "C" void _KeysEnumerator__ctor_m10358 (_KeysEnumerator_t1875 * __this, NameObjectCollectionBase_t1439 * ___collection, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		NameObjectCollectionBase_t1439 * L_0 = ___collection;
		__this->___m_collection_0 = L_0;
		VirtActionInvoker0::Invoke(6 /* System.Void System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::Reset() */, __this);
		return;
	}
}
// System.Object System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::get_Current()
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" Object_t * _KeysEnumerator_get_Current_m10359 (_KeysEnumerator_t1875 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___m_position_1);
		NameObjectCollectionBase_t1439 * L_1 = (__this->___m_collection_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_1);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_3 = (__this->___m_position_1);
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}

IL_0022:
	{
		NameObjectCollectionBase_t1439 * L_4 = (__this->___m_collection_0);
		int32_t L_5 = (__this->___m_position_1);
		NullCheck(L_4);
		String_t* L_6 = NameObjectCollectionBase_BaseGetKey_m10375(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0034:
	{
		InvalidOperationException_t1116 * L_7 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5032(L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::MoveNext()
extern "C" bool _KeysEnumerator_MoveNext_m10360 (_KeysEnumerator_t1875 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___m_position_1);
		int32_t L_1 = ((int32_t)((int32_t)L_0+(int32_t)1));
		V_0 = L_1;
		__this->___m_position_1 = L_1;
		int32_t L_2 = V_0;
		NameObjectCollectionBase_t1439 * L_3 = (__this->___m_collection_0);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_3);
		return ((((int32_t)L_2) < ((int32_t)L_4))? 1 : 0);
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::Reset()
extern "C" void _KeysEnumerator_Reset_m10361 (_KeysEnumerator_t1875 * __this, const MethodInfo* method)
{
	{
		__this->___m_position_1 = (-1);
		return;
	}
}
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
#include "System_System_Collections_Specialized_NameObjectCollectionBa_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
#include "System_System_Collections_Specialized_NameObjectCollectionBa_0MethodDeclarations.h"

// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"


// System.Void System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::.ctor(System.Collections.Specialized.NameObjectCollectionBase)
extern "C" void KeysCollection__ctor_m10362 (KeysCollection_t1468 * __this, NameObjectCollectionBase_t1439 * ___collection, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		NameObjectCollectionBase_t1439 * L_0 = ___collection;
		__this->___m_collection_0 = L_0;
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* _Item_t1874_il2cpp_TypeInfo_var;
extern "C" void KeysCollection_System_Collections_ICollection_CopyTo_m10363 (KeysCollection_t1468 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		_Item_t1874_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4273);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t913 * V_0 = {0};
	ObjectU5BU5D_t300* V_1 = {0};
	int32_t V_2 = 0;
	{
		NameObjectCollectionBase_t1439 * L_0 = (__this->___m_collection_0);
		NullCheck(L_0);
		ArrayList_t913 * L_1 = (L_0->___m_ItemsArray_2);
		V_0 = L_1;
		Array_t * L_2 = ___array;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t692 * L_3 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_3, (String_t*) &_stringLiteral337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___arrayIndex;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_5 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_5, (String_t*) &_stringLiteral2894, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002f:
	{
		Array_t * L_6 = ___array;
		NullCheck(L_6);
		int32_t L_7 = Array_get_Length_m5054(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_8 = ___arrayIndex;
		Array_t * L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = Array_get_Length_m5054(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0052;
		}
	}
	{
		ArgumentException_t356 * L_11 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_11, (String_t*) &_stringLiteral2895, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0052:
	{
		int32_t L_12 = ___arrayIndex;
		ArrayList_t913 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_13);
		Array_t * L_15 = ___array;
		NullCheck(L_15);
		int32_t L_16 = Array_get_Length_m5054(L_15, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_12+(int32_t)L_14))) <= ((int32_t)L_16)))
		{
			goto IL_0070;
		}
	}
	{
		ArgumentException_t356 * L_17 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_17, (String_t*) &_stringLiteral2896, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0070:
	{
		Array_t * L_18 = ___array;
		if (!L_18)
		{
			goto IL_008d;
		}
	}
	{
		Array_t * L_19 = ___array;
		NullCheck(L_19);
		int32_t L_20 = Array_get_Rank_m12745(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_20) <= ((int32_t)1)))
		{
			goto IL_008d;
		}
	}
	{
		ArgumentException_t356 * L_21 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_21, (String_t*) &_stringLiteral2897, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_008d:
	{
		Array_t * L_22 = ___array;
		V_1 = ((ObjectU5BU5D_t300*)Castclass(L_22, ObjectU5BU5D_t300_il2cpp_TypeInfo_var));
		V_2 = 0;
		goto IL_00b8;
	}

IL_009b:
	{
		ObjectU5BU5D_t300* L_23 = V_1;
		int32_t L_24 = ___arrayIndex;
		ArrayList_t913 * L_25 = V_0;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		Object_t * L_27 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_25, L_26);
		NullCheck(((_Item_t1874 *)Castclass(L_27, _Item_t1874_il2cpp_TypeInfo_var)));
		String_t* L_28 = (((_Item_t1874 *)Castclass(L_27, _Item_t1874_il2cpp_TypeInfo_var))->___key_0);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		ArrayElementTypeCheck (L_23, L_28);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, L_24)) = (Object_t *)L_28;
		int32_t L_29 = V_2;
		V_2 = ((int32_t)((int32_t)L_29+(int32_t)1));
		int32_t L_30 = ___arrayIndex;
		___arrayIndex = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00b8:
	{
		int32_t L_31 = V_2;
		ArrayList_t913 * L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_32);
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_009b;
		}
	}
	{
		return;
	}
}
// System.Object System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeysCollection_System_Collections_ICollection_get_SyncRoot_m10364 (KeysCollection_t1468 * __this, const MethodInfo* method)
{
	{
		NameObjectCollectionBase_t1439 * L_0 = (__this->___m_collection_0);
		return L_0;
	}
}
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::get_Count()
extern "C" int32_t KeysCollection_get_Count_m10365 (KeysCollection_t1468 * __this, const MethodInfo* method)
{
	{
		NameObjectCollectionBase_t1439 * L_0 = (__this->___m_collection_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::GetEnumerator()
extern TypeInfo* _KeysEnumerator_t1875_il2cpp_TypeInfo_var;
extern "C" Object_t * KeysCollection_GetEnumerator_m10366 (KeysCollection_t1468 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_KeysEnumerator_t1875_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4274);
		s_Il2CppMethodIntialized = true;
	}
	{
		NameObjectCollectionBase_t1439 * L_0 = (__this->___m_collection_0);
		_KeysEnumerator_t1875 * L_1 = (_KeysEnumerator_t1875 *)il2cpp_codegen_object_new (_KeysEnumerator_t1875_il2cpp_TypeInfo_var);
		_KeysEnumerator__ctor_m10358(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.StringComparer
#include "mscorlib_System_StringComparerMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
extern TypeInfo* CaseInsensitiveHashCodeProvider_t2223_il2cpp_TypeInfo_var;
extern TypeInfo* CaseInsensitiveComparer_t2222_il2cpp_TypeInfo_var;
extern "C" void NameObjectCollectionBase__ctor_m10367 (NameObjectCollectionBase_t1439 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CaseInsensitiveHashCodeProvider_t2223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4268);
		CaseInsensitiveComparer_t2222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4267);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		__this->___m_readonly_6 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(CaseInsensitiveHashCodeProvider_t2223_il2cpp_TypeInfo_var);
		CaseInsensitiveHashCodeProvider_t2223 * L_0 = CaseInsensitiveHashCodeProvider_get_DefaultInvariant_m12741(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_hashprovider_3 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(CaseInsensitiveComparer_t2222_il2cpp_TypeInfo_var);
		CaseInsensitiveComparer_t2222 * L_1 = CaseInsensitiveComparer_get_DefaultInvariant_m12740(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_comparer_4 = L_1;
		__this->___m_defCapacity_5 = 0;
		NameObjectCollectionBase_Init_m10373(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer,System.Collections.IComparer,System.Collections.IHashCodeProvider)
extern "C" void NameObjectCollectionBase__ctor_m10368 (NameObjectCollectionBase_t1439 * __this, Object_t * ___equalityComparer, Object_t * ___comparer, Object_t * ___hcp, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___equalityComparer;
		__this->___equality_comparer_9 = L_0;
		Object_t * L_1 = ___comparer;
		__this->___m_comparer_4 = L_1;
		Object_t * L_2 = ___hcp;
		__this->___m_hashprovider_3 = L_2;
		__this->___m_readonly_6 = 0;
		__this->___m_defCapacity_5 = 0;
		NameObjectCollectionBase_Init_m10373(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer)
extern TypeInfo* StringComparer_t678_il2cpp_TypeInfo_var;
extern "C" void NameObjectCollectionBase__ctor_m6913 (NameObjectCollectionBase_t1439 * __this, Object_t * ___equalityComparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringComparer_t678_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(918);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	NameObjectCollectionBase_t1439 * G_B2_0 = {0};
	NameObjectCollectionBase_t1439 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	NameObjectCollectionBase_t1439 * G_B3_1 = {0};
	{
		Object_t * L_0 = ___equalityComparer;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t678_il2cpp_TypeInfo_var);
		StringComparer_t678 * L_1 = StringComparer_get_InvariantCultureIgnoreCase_m6877(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_0013:
	{
		Object_t * L_3 = ___equalityComparer;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		NullCheck(G_B3_1);
		NameObjectCollectionBase__ctor_m10368(G_B3_1, G_B3_0, (Object_t *)NULL, (Object_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NameObjectCollectionBase__ctor_m10369 (NameObjectCollectionBase_t1439 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_0 = ___info;
		__this->___infoCopy_7 = L_0;
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void NameObjectCollectionBase__ctor_m10370 (NameObjectCollectionBase_t1439 * __this, int32_t ___capacity, Object_t * ___hashProvider, Object_t * ___comparer, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		__this->___m_readonly_6 = 0;
		Object_t * L_0 = ___hashProvider;
		__this->___m_hashprovider_3 = L_0;
		Object_t * L_1 = ___comparer;
		__this->___m_comparer_4 = L_1;
		int32_t L_2 = ___capacity;
		__this->___m_defCapacity_5 = L_2;
		NameObjectCollectionBase_Init_m10373(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m6950 (NameObjectCollectionBase_t1439 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern "C" void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_m6951 (NameObjectCollectionBase_t1439 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		s_Il2CppMethodIntialized = true;
	}
	{
		KeysCollection_t1468 * L_0 = (KeysCollection_t1468 *)VirtFuncInvoker0< KeysCollection_t1468 * >::Invoke(10 /* System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys() */, __this);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t793_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::get_Comparer()
extern "C" Object_t * NameObjectCollectionBase_get_Comparer_m10371 (NameObjectCollectionBase_t1439 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___m_comparer_4);
		return L_0;
	}
}
// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::get_HashCodeProvider()
extern "C" Object_t * NameObjectCollectionBase_get_HashCodeProvider_m10372 (NameObjectCollectionBase_t1439 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___m_hashprovider_3);
		return L_0;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Init()
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" void NameObjectCollectionBase_Init_m10373 (NameObjectCollectionBase_t1439 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___equality_comparer_9);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = (__this->___m_defCapacity_5);
		Object_t * L_2 = (__this->___equality_comparer_9);
		Hashtable_t915 * L_3 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6878(L_3, L_1, L_2, /*hidden argument*/NULL);
		__this->___m_ItemsContainer_0 = L_3;
		goto IL_0044;
	}

IL_0027:
	{
		int32_t L_4 = (__this->___m_defCapacity_5);
		Object_t * L_5 = (__this->___m_hashprovider_3);
		Object_t * L_6 = (__this->___m_comparer_4);
		Hashtable_t915 * L_7 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m12742(L_7, L_4, L_5, L_6, /*hidden argument*/NULL);
		__this->___m_ItemsContainer_0 = L_7;
	}

IL_0044:
	{
		ArrayList_t913 * L_8 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_8, /*hidden argument*/NULL);
		__this->___m_ItemsArray_2 = L_8;
		__this->___m_NullKeyItem_1 = (_Item_t1874 *)NULL;
		return;
	}
}
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys()
extern TypeInfo* KeysCollection_t1468_il2cpp_TypeInfo_var;
extern "C" KeysCollection_t1468 * NameObjectCollectionBase_get_Keys_m6955 (NameObjectCollectionBase_t1439 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeysCollection_t1468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3093);
		s_Il2CppMethodIntialized = true;
	}
	{
		KeysCollection_t1468 * L_0 = (__this->___keyscoll_8);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		KeysCollection_t1468 * L_1 = (KeysCollection_t1468 *)il2cpp_codegen_object_new (KeysCollection_t1468_il2cpp_TypeInfo_var);
		KeysCollection__ctor_m10362(L_1, __this, /*hidden argument*/NULL);
		__this->___keyscoll_8 = L_1;
	}

IL_0017:
	{
		KeysCollection_t1468 * L_2 = (__this->___keyscoll_8);
		return L_2;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
extern TypeInfo* _KeysEnumerator_t1875_il2cpp_TypeInfo_var;
extern "C" Object_t * NameObjectCollectionBase_GetEnumerator_m6952 (NameObjectCollectionBase_t1439 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_KeysEnumerator_t1875_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4274);
		s_Il2CppMethodIntialized = true;
	}
	{
		_KeysEnumerator_t1875 * L_0 = (_KeysEnumerator_t1875 *)il2cpp_codegen_object_new (_KeysEnumerator_t1875_il2cpp_TypeInfo_var);
		_KeysEnumerator__ctor_m10358(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* IEqualityComparer_t1877_0_0_0_var;
extern const Il2CppType* Int32_t297_0_0_0_var;
extern const Il2CppType* IHashCodeProvider_t1876_0_0_0_var;
extern const Il2CppType* IComparer_t1418_0_0_0_var;
extern const Il2CppType* StringU5BU5D_t258_0_0_0_var;
extern const Il2CppType* ObjectU5BU5D_t300_0_0_0_var;
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t258_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* _Item_t1874_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern "C" void NameObjectCollectionBase_GetObjectData_m6954 (NameObjectCollectionBase_t1439 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEqualityComparer_t1877_0_0_0_var = il2cpp_codegen_type_from_index(4275);
		Int32_t297_0_0_0_var = il2cpp_codegen_type_from_index(5);
		IHashCodeProvider_t1876_0_0_0_var = il2cpp_codegen_type_from_index(4276);
		IComparer_t1418_0_0_0_var = il2cpp_codegen_type_from_index(2964);
		StringU5BU5D_t258_0_0_0_var = il2cpp_codegen_type_from_index(11);
		ObjectU5BU5D_t300_0_0_0_var = il2cpp_codegen_type_from_index(12);
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		StringU5BU5D_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		_Item_t1874_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4273);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t258* V_1 = {0};
	ObjectU5BU5D_t300* V_2 = {0};
	int32_t V_3 = 0;
	_Item_t1874 * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t669 * L_0 = ___info;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral2882, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, __this);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = ((StringU5BU5D_t258*)SZArrayNew(StringU5BU5D_t258_il2cpp_TypeInfo_var, L_3));
		int32_t L_4 = V_0;
		V_2 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, L_4));
		V_3 = 0;
		ArrayList_t913 * L_5 = (__this->___m_ItemsArray_2);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_5);
		V_5 = L_6;
	}

IL_0035:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0060;
		}

IL_003a:
		{
			Object_t * L_7 = V_5;
			NullCheck(L_7);
			Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_7);
			V_4 = ((_Item_t1874 *)Castclass(L_8, _Item_t1874_il2cpp_TypeInfo_var));
			StringU5BU5D_t258* L_9 = V_1;
			int32_t L_10 = V_3;
			_Item_t1874 * L_11 = V_4;
			NullCheck(L_11);
			String_t* L_12 = (L_11->___key_0);
			NullCheck(L_9);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
			ArrayElementTypeCheck (L_9, L_12);
			*((String_t**)(String_t**)SZArrayLdElema(L_9, L_10)) = (String_t*)L_12;
			ObjectU5BU5D_t300* L_13 = V_2;
			int32_t L_14 = V_3;
			_Item_t1874 * L_15 = V_4;
			NullCheck(L_15);
			Object_t * L_16 = (L_15->___value_1);
			NullCheck(L_13);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
			ArrayElementTypeCheck (L_13, L_16);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14)) = (Object_t *)L_16;
			int32_t L_17 = V_3;
			V_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
		}

IL_0060:
		{
			Object_t * L_18 = V_5;
			NullCheck(L_18);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_003a;
			}
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x87, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		{
			Object_t * L_20 = V_5;
			V_6 = ((Object_t *)IsInst(L_20, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_21 = V_6;
			if (L_21)
			{
				goto IL_007f;
			}
		}

IL_007e:
		{
			IL2CPP_END_FINALLY(113)
		}

IL_007f:
		{
			Object_t * L_22 = V_6;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(113)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_JUMP_TBL(0x87, IL_0087)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0087:
	{
		Object_t * L_23 = (__this->___equality_comparer_9);
		if (!L_23)
		{
			goto IL_00cd;
		}
	}
	{
		SerializationInfo_t669 * L_24 = ___info;
		Object_t * L_25 = (__this->___equality_comparer_9);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(IEqualityComparer_t1877_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_24);
		SerializationInfo_AddValue_m4996(L_24, (String_t*) &_stringLiteral2883, L_25, L_26, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_27 = ___info;
		int32_t L_28 = 4;
		Object_t * L_29 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_28);
		Type_t * L_30 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int32_t297_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_27);
		SerializationInfo_AddValue_m4996(L_27, (String_t*) &_stringLiteral2884, L_29, L_30, /*hidden argument*/NULL);
		goto IL_011e;
	}

IL_00cd:
	{
		SerializationInfo_t669 * L_31 = ___info;
		Object_t * L_32 = (__this->___m_hashprovider_3);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_33 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(IHashCodeProvider_t1876_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_31);
		SerializationInfo_AddValue_m4996(L_31, (String_t*) &_stringLiteral2885, L_32, L_33, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_34 = ___info;
		Object_t * L_35 = (__this->___m_comparer_4);
		Type_t * L_36 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(IComparer_t1418_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_34);
		SerializationInfo_AddValue_m4996(L_34, (String_t*) &_stringLiteral2886, L_35, L_36, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_37 = ___info;
		int32_t L_38 = 2;
		Object_t * L_39 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_38);
		Type_t * L_40 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int32_t297_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_37);
		SerializationInfo_AddValue_m4996(L_37, (String_t*) &_stringLiteral2884, L_39, L_40, /*hidden argument*/NULL);
	}

IL_011e:
	{
		SerializationInfo_t669 * L_41 = ___info;
		bool L_42 = (__this->___m_readonly_6);
		NullCheck(L_41);
		SerializationInfo_AddValue_m5037(L_41, (String_t*) &_stringLiteral789, L_42, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_43 = ___info;
		int32_t L_44 = V_0;
		NullCheck(L_43);
		SerializationInfo_AddValue_m5038(L_43, (String_t*) &_stringLiteral2887, L_44, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_45 = ___info;
		StringU5BU5D_t258* L_46 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_47 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(StringU5BU5D_t258_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_45);
		SerializationInfo_AddValue_m4996(L_45, (String_t*) &_stringLiteral2888, (Object_t *)(Object_t *)L_46, L_47, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_48 = ___info;
		ObjectU5BU5D_t300* L_49 = V_2;
		Type_t * L_50 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ObjectU5BU5D_t300_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_48);
		SerializationInfo_AddValue_m4996(L_48, (String_t*) &_stringLiteral2889, (Object_t *)(Object_t *)L_49, L_50, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
extern "C" int32_t NameObjectCollectionBase_get_Count_m6949 (NameObjectCollectionBase_t1439 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___m_ItemsArray_2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
extern const Il2CppType* IHashCodeProvider_t1876_0_0_0_var;
extern const Il2CppType* IEqualityComparer_t1877_0_0_0_var;
extern const Il2CppType* IComparer_t1418_0_0_0_var;
extern const Il2CppType* StringU5BU5D_t258_0_0_0_var;
extern const Il2CppType* ObjectU5BU5D_t300_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IHashCodeProvider_t1876_il2cpp_TypeInfo_var;
extern TypeInfo* IEqualityComparer_t1877_il2cpp_TypeInfo_var;
extern TypeInfo* IComparer_t1418_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t1134_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t258_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern "C" void NameObjectCollectionBase_OnDeserialization_m6953 (NameObjectCollectionBase_t1439 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IHashCodeProvider_t1876_0_0_0_var = il2cpp_codegen_type_from_index(4276);
		IEqualityComparer_t1877_0_0_0_var = il2cpp_codegen_type_from_index(4275);
		IComparer_t1418_0_0_0_var = il2cpp_codegen_type_from_index(2964);
		StringU5BU5D_t258_0_0_0_var = il2cpp_codegen_type_from_index(11);
		ObjectU5BU5D_t300_0_0_0_var = il2cpp_codegen_type_from_index(12);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IHashCodeProvider_t1876_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4276);
		IEqualityComparer_t1877_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4275);
		IComparer_t1418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2964);
		SerializationException_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1981);
		StringU5BU5D_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	SerializationInfo_t669 * V_0 = {0};
	StringU5BU5D_t258* V_1 = {0};
	ObjectU5BU5D_t300* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		SerializationInfo_t669 * L_0 = (__this->___infoCopy_7);
		V_0 = L_0;
		SerializationInfo_t669 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		__this->___infoCopy_7 = (SerializationInfo_t669 *)NULL;
		SerializationInfo_t669 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(IHashCodeProvider_t1876_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_4 = SerializationInfo_GetValue_m4998(L_2, (String_t*) &_stringLiteral2885, L_3, /*hidden argument*/NULL);
		__this->___m_hashprovider_3 = ((Object_t *)Castclass(L_4, IHashCodeProvider_t1876_il2cpp_TypeInfo_var));
		Object_t * L_5 = (__this->___m_hashprovider_3);
		if (L_5)
		{
			goto IL_0065;
		}
	}
	{
		SerializationInfo_t669 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(IEqualityComparer_t1877_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		Object_t * L_8 = SerializationInfo_GetValue_m4998(L_6, (String_t*) &_stringLiteral2883, L_7, /*hidden argument*/NULL);
		__this->___equality_comparer_9 = ((Object_t *)Castclass(L_8, IEqualityComparer_t1877_il2cpp_TypeInfo_var));
		goto IL_009b;
	}

IL_0065:
	{
		SerializationInfo_t669 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(IComparer_t1418_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		Object_t * L_11 = SerializationInfo_GetValue_m4998(L_9, (String_t*) &_stringLiteral2886, L_10, /*hidden argument*/NULL);
		__this->___m_comparer_4 = ((Object_t *)Castclass(L_11, IComparer_t1418_il2cpp_TypeInfo_var));
		Object_t * L_12 = (__this->___m_comparer_4);
		if (L_12)
		{
			goto IL_009b;
		}
	}
	{
		SerializationException_t1134 * L_13 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_13, (String_t*) &_stringLiteral2890, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_009b:
	{
		SerializationInfo_t669 * L_14 = V_0;
		NullCheck(L_14);
		bool L_15 = SerializationInfo_GetBoolean_m5040(L_14, (String_t*) &_stringLiteral789, /*hidden argument*/NULL);
		__this->___m_readonly_6 = L_15;
		SerializationInfo_t669 * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(StringU5BU5D_t258_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		Object_t * L_18 = SerializationInfo_GetValue_m4998(L_16, (String_t*) &_stringLiteral2888, L_17, /*hidden argument*/NULL);
		V_1 = ((StringU5BU5D_t258*)Castclass(L_18, StringU5BU5D_t258_il2cpp_TypeInfo_var));
		StringU5BU5D_t258* L_19 = V_1;
		if (L_19)
		{
			goto IL_00d8;
		}
	}
	{
		SerializationException_t1134 * L_20 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_20, (String_t*) &_stringLiteral2891, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_00d8:
	{
		SerializationInfo_t669 * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ObjectU5BU5D_t300_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_21);
		Object_t * L_23 = SerializationInfo_GetValue_m4998(L_21, (String_t*) &_stringLiteral2889, L_22, /*hidden argument*/NULL);
		V_2 = ((ObjectU5BU5D_t300*)Castclass(L_23, ObjectU5BU5D_t300_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t300* L_24 = V_2;
		if (L_24)
		{
			goto IL_0104;
		}
	}
	{
		SerializationException_t1134 * L_25 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_25, (String_t*) &_stringLiteral2892, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_0104:
	{
		NameObjectCollectionBase_Init_m10373(__this, /*hidden argument*/NULL);
		StringU5BU5D_t258* L_26 = V_1;
		NullCheck(L_26);
		V_3 = (((int32_t)(((Array_t *)L_26)->max_length)));
		V_4 = 0;
		goto IL_012a;
	}

IL_0116:
	{
		StringU5BU5D_t258* L_27 = V_1;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		int32_t L_29 = L_28;
		ObjectU5BU5D_t300* L_30 = V_2;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		int32_t L_32 = L_31;
		NameObjectCollectionBase_BaseAdd_m6920(__this, (*(String_t**)(String_t**)SZArrayLdElema(L_27, L_29)), (*(Object_t **)(Object_t **)SZArrayLdElema(L_30, L_32)), /*hidden argument*/NULL);
		int32_t L_33 = V_4;
		V_4 = ((int32_t)((int32_t)L_33+(int32_t)1));
	}

IL_012a:
	{
		int32_t L_34 = V_4;
		int32_t L_35 = V_3;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0116;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
extern "C" bool NameObjectCollectionBase_get_IsReadOnly_m10374 (NameObjectCollectionBase_t1439 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_readonly_6);
		return L_0;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern TypeInfo* _Item_t1874_il2cpp_TypeInfo_var;
extern "C" void NameObjectCollectionBase_BaseAdd_m6920 (NameObjectCollectionBase_t1439 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		_Item_t1874_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4273);
		s_Il2CppMethodIntialized = true;
	}
	_Item_t1874 * V_0 = {0};
	{
		bool L_0 = NameObjectCollectionBase_get_IsReadOnly_m10374(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		NotSupportedException_t303 * L_1 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_1, (String_t*) &_stringLiteral2893, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		String_t* L_2 = ___name;
		Object_t * L_3 = ___value;
		_Item_t1874 * L_4 = (_Item_t1874 *)il2cpp_codegen_object_new (_Item_t1874_il2cpp_TypeInfo_var);
		_Item__ctor_m10357(L_4, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = ___name;
		if (L_5)
		{
			goto IL_003b;
		}
	}
	{
		_Item_t1874 * L_6 = (__this->___m_NullKeyItem_1);
		if (L_6)
		{
			goto IL_0036;
		}
	}
	{
		_Item_t1874 * L_7 = V_0;
		__this->___m_NullKeyItem_1 = L_7;
	}

IL_0036:
	{
		goto IL_0059;
	}

IL_003b:
	{
		Hashtable_t915 * L_8 = (__this->___m_ItemsContainer_0);
		String_t* L_9 = ___name;
		NullCheck(L_8);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_8, L_9);
		if (L_10)
		{
			goto IL_0059;
		}
	}
	{
		Hashtable_t915 * L_11 = (__this->___m_ItemsContainer_0);
		String_t* L_12 = ___name;
		_Item_t1874 * L_13 = V_0;
		NullCheck(L_11);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_11, L_12, L_13);
	}

IL_0059:
	{
		ArrayList_t913 * L_14 = (__this->___m_ItemsArray_2);
		_Item_t1874 * L_15 = V_0;
		NullCheck(L_14);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_14, L_15);
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseClear()
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void NameObjectCollectionBase_BaseClear_m6922 (NameObjectCollectionBase_t1439 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = NameObjectCollectionBase_get_IsReadOnly_m10374(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		NotSupportedException_t303 * L_1 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_1, (String_t*) &_stringLiteral2893, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		NameObjectCollectionBase_Init_m10373(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
extern TypeInfo* _Item_t1874_il2cpp_TypeInfo_var;
extern "C" Object_t * NameObjectCollectionBase_BaseGet_m6919 (NameObjectCollectionBase_t1439 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_Item_t1874_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4273);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t913 * L_0 = (__this->___m_ItemsArray_2);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		NullCheck(((_Item_t1874 *)Castclass(L_2, _Item_t1874_il2cpp_TypeInfo_var)));
		Object_t * L_3 = (((_Item_t1874 *)Castclass(L_2, _Item_t1874_il2cpp_TypeInfo_var))->___value_1);
		return L_3;
	}
}
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
extern "C" Object_t * NameObjectCollectionBase_BaseGet_m6914 (NameObjectCollectionBase_t1439 * __this, String_t* ___name, const MethodInfo* method)
{
	_Item_t1874 * V_0 = {0};
	{
		String_t* L_0 = ___name;
		_Item_t1874 * L_1 = NameObjectCollectionBase_FindFirstMatchedItem_m10376(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		_Item_t1874 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return NULL;
	}

IL_0010:
	{
		_Item_t1874 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (L_3->___value_1);
		return L_4;
	}
}
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
extern TypeInfo* _Item_t1874_il2cpp_TypeInfo_var;
extern "C" String_t* NameObjectCollectionBase_BaseGetKey_m10375 (NameObjectCollectionBase_t1439 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_Item_t1874_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4273);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t913 * L_0 = (__this->___m_ItemsArray_2);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		NullCheck(((_Item_t1874 *)Castclass(L_2, _Item_t1874_il2cpp_TypeInfo_var)));
		String_t* L_3 = (((_Item_t1874 *)Castclass(L_2, _Item_t1874_il2cpp_TypeInfo_var))->___key_0);
		return L_3;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemove(System.String)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void NameObjectCollectionBase_BaseRemove_m6923 (NameObjectCollectionBase_t1439 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = 0;
		bool L_0 = NameObjectCollectionBase_get_IsReadOnly_m10374(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		NotSupportedException_t303 * L_1 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_1, (String_t*) &_stringLiteral2893, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		String_t* L_2 = ___name;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Hashtable_t915 * L_3 = (__this->___m_ItemsContainer_0);
		String_t* L_4 = ___name;
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(31 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_3, L_4);
		goto IL_0036;
	}

IL_002f:
	{
		__this->___m_NullKeyItem_1 = (_Item_t1874 *)NULL;
	}

IL_0036:
	{
		ArrayList_t913 * L_5 = (__this->___m_ItemsArray_2);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_5);
		V_0 = L_6;
		V_2 = 0;
		goto IL_0077;
	}

IL_0049:
	{
		int32_t L_7 = V_2;
		String_t* L_8 = NameObjectCollectionBase_BaseGetKey_m10375(__this, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		String_t* L_9 = V_1;
		String_t* L_10 = ___name;
		bool L_11 = NameObjectCollectionBase_Equals_m10377(__this, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0073;
		}
	}
	{
		ArrayList_t913 * L_12 = (__this->___m_ItemsArray_2);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_12, L_13);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)((int32_t)L_14-(int32_t)1));
		goto IL_0077;
	}

IL_0073:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0077:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0049;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void NameObjectCollectionBase_BaseSet_m6915 (NameObjectCollectionBase_t1439 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	_Item_t1874 * V_0 = {0};
	{
		bool L_0 = NameObjectCollectionBase_get_IsReadOnly_m10374(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		NotSupportedException_t303 * L_1 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_1, (String_t*) &_stringLiteral2893, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		String_t* L_2 = ___name;
		_Item_t1874 * L_3 = NameObjectCollectionBase_FindFirstMatchedItem_m10376(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		_Item_t1874 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		_Item_t1874 * L_5 = V_0;
		Object_t * L_6 = ___value;
		NullCheck(L_5);
		L_5->___value_1 = L_6;
		goto IL_0038;
	}

IL_0030:
	{
		String_t* L_7 = ___name;
		Object_t * L_8 = ___value;
		NameObjectCollectionBase_BaseAdd_m6920(__this, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::FindFirstMatchedItem(System.String)
extern TypeInfo* _Item_t1874_il2cpp_TypeInfo_var;
extern "C" _Item_t1874 * NameObjectCollectionBase_FindFirstMatchedItem_m10376 (NameObjectCollectionBase_t1439 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_Item_t1874_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4273);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Hashtable_t915 * L_1 = (__this->___m_ItemsContainer_0);
		String_t* L_2 = ___name;
		NullCheck(L_1);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, L_2);
		return ((_Item_t1874 *)Castclass(L_3, _Item_t1874_il2cpp_TypeInfo_var));
	}

IL_0018:
	{
		_Item_t1874 * L_4 = (__this->___m_NullKeyItem_1);
		return L_4;
	}
}
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::Equals(System.String,System.String)
extern TypeInfo* IComparer_t1418_il2cpp_TypeInfo_var;
extern TypeInfo* IEqualityComparer_t1877_il2cpp_TypeInfo_var;
extern "C" bool NameObjectCollectionBase_Equals_m10377 (NameObjectCollectionBase_t1439 * __this, String_t* ___s1, String_t* ___s2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparer_t1418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2964);
		IEqualityComparer_t1877_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4275);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___m_comparer_4);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Object_t * L_1 = (__this->___m_comparer_4);
		String_t* L_2 = ___s1;
		String_t* L_3 = ___s2;
		NullCheck(L_1);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker2< int32_t, Object_t *, Object_t * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1418_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		Object_t * L_5 = (__this->___equality_comparer_9);
		String_t* L_6 = ___s1;
		String_t* L_7 = ___s2;
		NullCheck(L_5);
		bool L_8 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t1877_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Collections.Specialized.NameValueCollection
#include "System_System_Collections_Specialized_NameValueCollection.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Specialized.NameValueCollection
#include "System_System_Collections_Specialized_NameValueCollectionMethodDeclarations.h"

// System.Char
#include "mscorlib_System_Char.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"


// System.Void System.Collections.Specialized.NameValueCollection::.ctor()
extern "C" void NameValueCollection__ctor_m6880 (NameValueCollection_t1401 * __this, const MethodInfo* method)
{
	{
		NameObjectCollectionBase__ctor_m10367(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32,System.Collections.Specialized.NameValueCollection)
extern "C" void NameValueCollection__ctor_m6881 (NameValueCollection_t1401 * __this, int32_t ___capacity, NameValueCollection_t1401 * ___col, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t G_B2_0 = 0;
	NameValueCollection_t1401 * G_B2_1 = {0};
	int32_t G_B1_0 = 0;
	NameValueCollection_t1401 * G_B1_1 = {0};
	Object_t * G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	NameValueCollection_t1401 * G_B3_2 = {0};
	Object_t * G_B5_0 = {0};
	int32_t G_B5_1 = 0;
	NameValueCollection_t1401 * G_B5_2 = {0};
	Object_t * G_B4_0 = {0};
	int32_t G_B4_1 = 0;
	NameValueCollection_t1401 * G_B4_2 = {0};
	Object_t * G_B6_0 = {0};
	Object_t * G_B6_1 = {0};
	int32_t G_B6_2 = 0;
	NameValueCollection_t1401 * G_B6_3 = {0};
	{
		int32_t L_0 = ___capacity;
		NameValueCollection_t1401 * L_1 = ___col;
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_0010;
		}
	}
	{
		V_0 = (Object_t *)NULL;
		Object_t * L_2 = V_0;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0016;
	}

IL_0010:
	{
		NameValueCollection_t1401 * L_3 = ___col;
		NullCheck(L_3);
		Object_t * L_4 = NameObjectCollectionBase_get_HashCodeProvider_m10372(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0016:
	{
		NameValueCollection_t1401 * L_5 = ___col;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_5)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_0024;
		}
	}
	{
		V_1 = (Object_t *)NULL;
		Object_t * L_6 = V_1;
		G_B6_0 = L_6;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_002a;
	}

IL_0024:
	{
		NameValueCollection_t1401 * L_7 = ___col;
		NullCheck(L_7);
		Object_t * L_8 = NameObjectCollectionBase_get_Comparer_m10371(L_7, /*hidden argument*/NULL);
		G_B6_0 = L_8;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_002a:
	{
		NullCheck(G_B6_3);
		NameObjectCollectionBase__ctor_m10370(G_B6_3, G_B6_2, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		NameValueCollection_t1401 * L_9 = ___col;
		NameValueCollection_Add_m10379(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NameValueCollection__ctor_m10378 (NameValueCollection_t1401 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___context;
		NameObjectCollectionBase__ctor_m10369(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
extern "C" String_t* NameValueCollection_get_Item_m6876 (NameValueCollection_t1401 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		String_t* L_1 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String System.Collections.Specialized.NameValueCollection::Get(System.String) */, __this, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::set_Item(System.String,System.String)
extern "C" void NameValueCollection_set_Item_m6921 (NameValueCollection_t1401 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		String_t* L_1 = ___value;
		VirtActionInvoker2< String_t*, String_t* >::Invoke(21 /* System.Void System.Collections.Specialized.NameValueCollection::Set(System.String,System.String) */, __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.Collections.Specialized.NameValueCollection)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" void NameValueCollection_Add_m10379 (NameValueCollection_t1401 * __this, NameValueCollection_t1401 * ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	ArrayList_t913 * V_3 = {0};
	ArrayList_t913 * V_4 = {0};
	{
		bool L_0 = NameObjectCollectionBase_get_IsReadOnly_m10374(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		NotSupportedException_t303 * L_1 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_1, (String_t*) &_stringLiteral2893, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		NameValueCollection_t1401 * L_2 = ___c;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_t692 * L_3 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_3, (String_t*) &_stringLiteral455, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		NameValueCollection_InvalidateCachedArrays_m10382(__this, /*hidden argument*/NULL);
		NameValueCollection_t1401 * L_4 = ___c;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_4);
		V_0 = L_5;
		V_1 = 0;
		goto IL_0093;
	}

IL_003b:
	{
		NameValueCollection_t1401 * L_6 = ___c;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		String_t* L_8 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(18 /* System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32) */, L_6, L_7);
		V_2 = L_8;
		NameValueCollection_t1401 * L_9 = ___c;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Object_t * L_11 = NameObjectCollectionBase_BaseGet_m6919(L_9, L_10, /*hidden argument*/NULL);
		V_3 = ((ArrayList_t913 *)Castclass(L_11, ArrayList_t913_il2cpp_TypeInfo_var));
		String_t* L_12 = V_2;
		Object_t * L_13 = NameObjectCollectionBase_BaseGet_m6914(__this, L_12, /*hidden argument*/NULL);
		V_4 = ((ArrayList_t913 *)Castclass(L_13, ArrayList_t913_il2cpp_TypeInfo_var));
		ArrayList_t913 * L_14 = V_4;
		if (!L_14)
		{
			goto IL_0078;
		}
	}
	{
		ArrayList_t913 * L_15 = V_3;
		if (!L_15)
		{
			goto IL_0078;
		}
	}
	{
		ArrayList_t913 * L_16 = V_4;
		ArrayList_t913 * L_17 = V_3;
		NullCheck(L_16);
		VirtActionInvoker1< Object_t * >::Invoke(40 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_16, L_17);
		goto IL_0086;
	}

IL_0078:
	{
		ArrayList_t913 * L_18 = V_3;
		if (!L_18)
		{
			goto IL_0086;
		}
	}
	{
		ArrayList_t913 * L_19 = V_3;
		ArrayList_t913 * L_20 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5070(L_20, L_19, /*hidden argument*/NULL);
		V_4 = L_20;
	}

IL_0086:
	{
		String_t* L_21 = V_2;
		ArrayList_t913 * L_22 = V_4;
		NameObjectCollectionBase_BaseSet_m6915(__this, L_21, L_22, /*hidden argument*/NULL);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0093:
	{
		int32_t L_24 = V_1;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_003b;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" void NameValueCollection_Add_m6956 (NameValueCollection_t1401 * __this, String_t* ___name, String_t* ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t913 * V_0 = {0};
	{
		bool L_0 = NameObjectCollectionBase_get_IsReadOnly_m10374(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		NotSupportedException_t303 * L_1 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_1, (String_t*) &_stringLiteral2893, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		NameValueCollection_InvalidateCachedArrays_m10382(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___name;
		Object_t * L_3 = NameObjectCollectionBase_BaseGet_m6914(__this, L_2, /*hidden argument*/NULL);
		V_0 = ((ArrayList_t913 *)Castclass(L_3, ArrayList_t913_il2cpp_TypeInfo_var));
		ArrayList_t913 * L_4 = V_0;
		if (L_4)
		{
			goto IL_0050;
		}
	}
	{
		ArrayList_t913 * L_5 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_5, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = ___val;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		ArrayList_t913 * L_7 = V_0;
		String_t* L_8 = ___val;
		NullCheck(L_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_7, L_8);
	}

IL_0043:
	{
		String_t* L_9 = ___name;
		ArrayList_t913 * L_10 = V_0;
		NameObjectCollectionBase_BaseAdd_m6920(__this, L_9, L_10, /*hidden argument*/NULL);
		goto IL_005e;
	}

IL_0050:
	{
		String_t* L_11 = ___val;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		ArrayList_t913 * L_12 = V_0;
		String_t* L_13 = ___val;
		NullCheck(L_12);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_12, L_13);
	}

IL_005e:
	{
		return;
	}
}
// System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" String_t* NameValueCollection_Get_m6957 (NameValueCollection_t1401 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t913 * V_0 = {0};
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = NameObjectCollectionBase_BaseGet_m6919(__this, L_0, /*hidden argument*/NULL);
		V_0 = ((ArrayList_t913 *)Castclass(L_1, ArrayList_t913_il2cpp_TypeInfo_var));
		ArrayList_t913 * L_2 = V_0;
		String_t* L_3 = NameValueCollection_AsSingleString_m10380(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String System.Collections.Specialized.NameValueCollection::Get(System.String)
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" String_t* NameValueCollection_Get_m6958 (NameValueCollection_t1401 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t913 * V_0 = {0};
	{
		String_t* L_0 = ___name;
		Object_t * L_1 = NameObjectCollectionBase_BaseGet_m6914(__this, L_0, /*hidden argument*/NULL);
		V_0 = ((ArrayList_t913 *)Castclass(L_1, ArrayList_t913_il2cpp_TypeInfo_var));
		ArrayList_t913 * L_2 = V_0;
		String_t* L_3 = NameValueCollection_AsSingleString_m10380(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String System.Collections.Specialized.NameValueCollection::AsSingleString(System.Collections.ArrayList)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t323_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t294_il2cpp_TypeInfo_var;
extern "C" String_t* NameValueCollection_AsSingleString_m10380 (Object_t * __this /* static, unused */, ArrayList_t913 * ___values, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Char_t323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		StringBuilder_t294_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(170);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StringBuilder_t294 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		ArrayList_t913 * L_0 = ___values;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0008:
	{
		ArrayList_t913 * L_1 = ___values;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		V_6 = L_3;
		int32_t L_4 = V_6;
		if (L_4 == 0)
		{
			goto IL_002a;
		}
		if (L_4 == 1)
		{
			goto IL_002c;
		}
		if (L_4 == 2)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_005e;
	}

IL_002a:
	{
		return (String_t*)NULL;
	}

IL_002c:
	{
		ArrayList_t913 * L_5 = ___values;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_5, 0);
		return ((String_t*)Castclass(L_6, String_t_il2cpp_TypeInfo_var));
	}

IL_0039:
	{
		ArrayList_t913 * L_7 = ___values;
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_7, 0);
		uint16_t L_9 = ((int32_t)44);
		Object_t * L_10 = Box(Char_t323_il2cpp_TypeInfo_var, &L_9);
		ArrayList_t913 * L_11 = ___values;
		NullCheck(L_11);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_11, 1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1268(NULL /*static, unused*/, ((String_t*)Castclass(L_8, String_t_il2cpp_TypeInfo_var)), L_10, ((String_t*)Castclass(L_12, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_13;
	}

IL_005e:
	{
		int32_t L_14 = V_1;
		V_2 = L_14;
		V_3 = 0;
		goto IL_007f;
	}

IL_0067:
	{
		int32_t L_15 = V_2;
		ArrayList_t913 * L_16 = ___values;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Object_t * L_18 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_16, L_17);
		NullCheck(((String_t*)Castclass(L_18, String_t_il2cpp_TypeInfo_var)));
		int32_t L_19 = String_get_Length_m1368(((String_t*)Castclass(L_18, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)L_19));
		int32_t L_20 = V_3;
		V_3 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_007f:
	{
		int32_t L_21 = V_3;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0067;
		}
	}
	{
		ArrayList_t913 * L_23 = ___values;
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_23, 0);
		int32_t L_25 = V_2;
		StringBuilder_t294 * L_26 = (StringBuilder_t294 *)il2cpp_codegen_object_new (StringBuilder_t294_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m12747(L_26, ((String_t*)Castclass(L_24, String_t_il2cpp_TypeInfo_var)), L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		V_5 = 1;
		goto IL_00c2;
	}

IL_00a2:
	{
		StringBuilder_t294 * L_27 = V_4;
		NullCheck(L_27);
		StringBuilder_Append_m1752(L_27, ((int32_t)44), /*hidden argument*/NULL);
		StringBuilder_t294 * L_28 = V_4;
		ArrayList_t913 * L_29 = ___values;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Object_t * L_31 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_29, L_30);
		NullCheck(L_28);
		StringBuilder_Append_m5067(L_28, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_5;
		V_5 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00c2:
	{
		int32_t L_33 = V_5;
		int32_t L_34 = V_1;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_00a2;
		}
	}
	{
		StringBuilder_t294 * L_35 = V_4;
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_35);
		return L_36;
	}
}
// System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
extern "C" String_t* NameValueCollection_GetKey_m6959 (NameValueCollection_t1401 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		String_t* L_1 = NameObjectCollectionBase_BaseGetKey_m10375(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.String)
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" StringU5BU5D_t258* NameValueCollection_GetValues_m6960 (NameValueCollection_t1401 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t913 * V_0 = {0};
	{
		String_t* L_0 = ___name;
		Object_t * L_1 = NameObjectCollectionBase_BaseGet_m6914(__this, L_0, /*hidden argument*/NULL);
		V_0 = ((ArrayList_t913 *)Castclass(L_1, ArrayList_t913_il2cpp_TypeInfo_var));
		ArrayList_t913 * L_2 = V_0;
		StringU5BU5D_t258* L_3 = NameValueCollection_AsStringArray_m10381(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String[] System.Collections.Specialized.NameValueCollection::AsStringArray(System.Collections.ArrayList)
extern TypeInfo* StringU5BU5D_t258_il2cpp_TypeInfo_var;
extern "C" StringU5BU5D_t258* NameValueCollection_AsStringArray_m10381 (Object_t * __this /* static, unused */, ArrayList_t913 * ___values, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t258* V_1 = {0};
	{
		ArrayList_t913 * L_0 = ___values;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (StringU5BU5D_t258*)NULL;
	}

IL_0008:
	{
		ArrayList_t913 * L_1 = ___values;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		return (StringU5BU5D_t258*)NULL;
	}

IL_0017:
	{
		int32_t L_4 = V_0;
		V_1 = ((StringU5BU5D_t258*)SZArrayNew(StringU5BU5D_t258_il2cpp_TypeInfo_var, L_4));
		ArrayList_t913 * L_5 = ___values;
		StringU5BU5D_t258* L_6 = V_1;
		NullCheck(L_5);
		VirtActionInvoker1< Array_t * >::Invoke(36 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_5, (Array_t *)(Array_t *)L_6);
		StringU5BU5D_t258* L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::Remove(System.String)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void NameValueCollection_Remove_m6961 (NameValueCollection_t1401 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = NameObjectCollectionBase_get_IsReadOnly_m10374(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		NotSupportedException_t303 * L_1 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_1, (String_t*) &_stringLiteral2893, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		NameValueCollection_InvalidateCachedArrays_m10382(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___name;
		NameObjectCollectionBase_BaseRemove_m6923(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::Set(System.String,System.String)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" void NameValueCollection_Set_m6882 (NameValueCollection_t1401 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t913 * V_0 = {0};
	{
		bool L_0 = NameObjectCollectionBase_get_IsReadOnly_m10374(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		NotSupportedException_t303 * L_1 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_1, (String_t*) &_stringLiteral2893, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		NameValueCollection_InvalidateCachedArrays_m10382(__this, /*hidden argument*/NULL);
		ArrayList_t913 * L_2 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___value;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		ArrayList_t913 * L_4 = V_0;
		String_t* L_5 = ___value;
		NullCheck(L_4);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_4, L_5);
		String_t* L_6 = ___name;
		ArrayList_t913 * L_7 = V_0;
		NameObjectCollectionBase_BaseSet_m6915(__this, L_6, L_7, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_003d:
	{
		String_t* L_8 = ___name;
		NameObjectCollectionBase_BaseSet_m6915(__this, L_8, NULL, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
extern "C" void NameValueCollection_InvalidateCachedArrays_m10382 (NameValueCollection_t1401 * __this, const MethodInfo* method)
{
	{
		__this->___cachedAllKeys_10 = (StringU5BU5D_t258*)NULL;
		__this->___cachedAll_11 = (StringU5BU5D_t258*)NULL;
		return;
	}
}
// System.Collections.Specialized.StringCollection
#include "System_System_Collections_Specialized_StringCollection.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Specialized.StringCollection
#include "System_System_Collections_Specialized_StringCollectionMethodDeclarations.h"

// System.Collections.Specialized.StringEnumerator
#include "System_System_Collections_Specialized_StringEnumerator.h"
// System.Collections.Specialized.StringEnumerator
#include "System_System_Collections_Specialized_StringEnumeratorMethodDeclarations.h"


// System.Void System.Collections.Specialized.StringCollection::.ctor()
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" void StringCollection__ctor_m9827 (StringCollection_t1524 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t913 * L_0 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_0, /*hidden argument*/NULL);
		__this->___data_0 = L_0;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Collections.Specialized.StringCollection::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * StringCollection_System_Collections_IList_get_Item_m10383 (StringCollection_t1524 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		String_t* L_1 = StringCollection_get_Item_m9823(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void StringCollection_System_Collections_IList_set_Item_m10384 (StringCollection_t1524 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		StringCollection_set_Item_m10392(__this, L_0, ((String_t*)Castclass(L_1, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.Add(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" int32_t StringCollection_System_Collections_IList_Add_m10385 (StringCollection_t1524 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		int32_t L_1 = StringCollection_Add_m9829(__this, ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.Contains(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool StringCollection_System_Collections_IList_Contains_m10386 (StringCollection_t1524 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		bool L_1 = StringCollection_Contains_m9828(__this, ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" int32_t StringCollection_System_Collections_IList_IndexOf_m10387 (StringCollection_t1524 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		int32_t L_1 = StringCollection_IndexOf_m10395(__this, ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void StringCollection_System_Collections_IList_Insert_m10388 (StringCollection_t1524 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		StringCollection_Insert_m10396(__this, L_0, ((String_t*)Castclass(L_1, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Remove(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void StringCollection_System_Collections_IList_Remove_m10389 (StringCollection_t1524 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		StringCollection_Remove_m10397(__this, ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.StringCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void StringCollection_System_Collections_ICollection_CopyTo_m10390 (StringCollection_t1524 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___data_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(37 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.StringCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * StringCollection_System_Collections_IEnumerable_GetEnumerator_m10391 (StringCollection_t1524 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___data_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* StringCollection_get_Item_m9823 (StringCollection_t1524 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t913 * L_0 = (__this->___data_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return ((String_t*)Castclass(L_2, String_t_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
extern "C" void StringCollection_set_Item_m10392 (StringCollection_t1524 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___data_0);
		int32_t L_1 = ___index;
		String_t* L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(19 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
// System.Int32 System.Collections.Specialized.StringCollection::get_Count()
extern "C" int32_t StringCollection_get_Count_m10393 (StringCollection_t1524 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___data_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
extern "C" int32_t StringCollection_Add_m9829 (StringCollection_t1524 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___data_0);
		String_t* L_1 = ___value;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Specialized.StringCollection::Clear()
extern "C" void StringCollection_Clear_m10394 (StringCollection_t1524 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___data_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(27 /* System.Void System.Collections.ArrayList::Clear() */, L_0);
		return;
	}
}
// System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
extern "C" bool StringCollection_Contains_m9828 (StringCollection_t1524 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___data_0);
		String_t* L_1 = ___value;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Specialized.StringEnumerator System.Collections.Specialized.StringCollection::GetEnumerator()
extern TypeInfo* StringEnumerator_t1795_il2cpp_TypeInfo_var;
extern "C" StringEnumerator_t1795 * StringCollection_GetEnumerator_m9917 (StringCollection_t1524 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringEnumerator_t1795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4277);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringEnumerator_t1795 * L_0 = (StringEnumerator_t1795 *)il2cpp_codegen_object_new (StringEnumerator_t1795_il2cpp_TypeInfo_var);
		StringEnumerator__ctor_m10404(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
extern "C" int32_t StringCollection_IndexOf_m10395 (StringCollection_t1524 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___data_0);
		String_t* L_1 = ___value;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::IndexOf(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
extern "C" void StringCollection_Insert_m10396 (StringCollection_t1524 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___data_0);
		int32_t L_1 = ___index;
		String_t* L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(32 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
extern "C" void StringCollection_Remove_m10397 (StringCollection_t1524 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___data_0);
		String_t* L_1 = ___value;
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(34 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.Specialized.StringCollection::RemoveAt(System.Int32)
extern "C" void StringCollection_RemoveAt_m10398 (StringCollection_t1524 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___data_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_0, L_1);
		return;
	}
}
// System.Object System.Collections.Specialized.StringCollection::get_SyncRoot()
extern "C" Object_t * StringCollection_get_SyncRoot_m10399 (StringCollection_t1524 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Collections.Specialized.StringDictionary
#include "System_System_Collections_Specialized_StringDictionary.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Specialized.StringDictionary
#include "System_System_Collections_Specialized_StringDictionaryMethodDeclarations.h"

// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"


// System.Void System.Collections.Specialized.StringDictionary::.ctor()
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern "C" void StringDictionary__ctor_m10400 (StringDictionary_t1878 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Hashtable_t915 * L_0 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_0, /*hidden argument*/NULL);
		__this->___contents_0 = L_0;
		return;
	}
}
// System.Void System.Collections.Specialized.StringDictionary::set_Item(System.String,System.String)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern "C" void StringDictionary_set_Item_m10401 (StringDictionary_t1878 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral1834, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Hashtable_t915 * L_2 = (__this->___contents_0);
		String_t* L_3 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_4 = CultureInfo_get_InvariantCulture_m3234(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_5 = String_ToLower_m9891(L_3, L_4, /*hidden argument*/NULL);
		String_t* L_6 = ___value;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, L_5, L_6);
		return;
	}
}
// System.Void System.Collections.Specialized.StringDictionary::Add(System.String,System.String)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern "C" void StringDictionary_Add_m10402 (StringDictionary_t1878 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral1834, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Hashtable_t915 * L_2 = (__this->___contents_0);
		String_t* L_3 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_4 = CultureInfo_get_InvariantCulture_m3234(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_5 = String_ToLower_m9891(L_3, L_4, /*hidden argument*/NULL);
		String_t* L_6 = ___value;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_2, L_5, L_6);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.StringDictionary::GetEnumerator()
extern "C" Object_t * StringDictionary_GetEnumerator_m10403 (StringDictionary_t1878 * __this, const MethodInfo* method)
{
	{
		Hashtable_t915 * L_0 = (__this->___contents_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(30 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Specialized.StringEnumerator::.ctor(System.Collections.Specialized.StringCollection)
extern TypeInfo* IEnumerable_t662_il2cpp_TypeInfo_var;
extern "C" void StringEnumerator__ctor_m10404 (StringEnumerator_t1795 * __this, StringCollection_t1524 * ___coll, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		StringCollection_t1524 * L_0 = ___coll;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t662_il2cpp_TypeInfo_var, L_0);
		__this->___enumerable_0 = L_1;
		return;
	}
}
// System.String System.Collections.Specialized.StringEnumerator::get_Current()
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* StringEnumerator_get_Current_m9918 (StringEnumerator_t1795 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___enumerable_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_0);
		return ((String_t*)Castclass(L_1, String_t_il2cpp_TypeInfo_var));
	}
}
// System.Boolean System.Collections.Specialized.StringEnumerator::MoveNext()
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern "C" bool StringEnumerator_MoveNext_m9919 (StringEnumerator_t1795 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___enumerable_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
#include "System_System_ComponentModel_ArrayConverter_ArrayPropertyDes.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
#include "System_System_ComponentModel_ArrayConverter_ArrayPropertyDesMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.ComponentModel.PropertyDescriptor
#include "System_System_ComponentModel_PropertyDescriptorMethodDeclarations.h"


// System.Void System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::.ctor(System.Int32,System.Type)
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ArrayPropertyDescriptor__ctor_m10405 (ArrayPropertyDescriptor_t1879 * __this, int32_t ___index, Type_t * ___array_type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral2900, L_2, /*hidden argument*/NULL);
		PropertyDescriptor__ctor_m10649(__this, L_3, (AttributeU5BU5D_t1913*)(AttributeU5BU5D_t1913*)NULL, /*hidden argument*/NULL);
		int32_t L_4 = ___index;
		__this->___index_3 = L_4;
		Type_t * L_5 = ___array_type;
		__this->___array_type_4 = L_5;
		return;
	}
}
// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::get_ComponentType()
extern "C" Type_t * ArrayPropertyDescriptor_get_ComponentType_m10406 (ArrayPropertyDescriptor_t1879 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___array_type_4);
		return L_0;
	}
}
// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::get_PropertyType()
extern "C" Type_t * ArrayPropertyDescriptor_get_PropertyType_m10407 (ArrayPropertyDescriptor_t1879 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___array_type_4);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, L_0);
		return L_1;
	}
}
// System.ComponentModel.ArrayConverter
#include "System_System_ComponentModel_ArrayConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.ArrayConverter
#include "System_System_ComponentModel_ArrayConverterMethodDeclarations.h"

// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.ComponentModel.CollectionConverter
#include "System_System_ComponentModel_CollectionConverter.h"
// System.ComponentModel.PropertyDescriptorCollection
#include "System_System_ComponentModel_PropertyDescriptorCollection.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceException.h"
#include "System_ArrayTypes.h"
// System.ComponentModel.PropertyDescriptor
#include "System_System_ComponentModel_PropertyDescriptor.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.ComponentModel.CollectionConverter
#include "System_System_ComponentModel_CollectionConverterMethodDeclarations.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
// System.ComponentModel.PropertyDescriptorCollection
#include "System_System_ComponentModel_PropertyDescriptorCollectionMethodDeclarations.h"


// System.Object System.ComponentModel.ArrayConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Array_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * ArrayConverter_ConvertTo_m10408 (ArrayConverter_t1881 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Array_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1360);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___destinationType;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral2898, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Type_t * L_2 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_0044;
		}
	}
	{
		Object_t * L_4 = ___value;
		if (!((Array_t *)IsInst(L_4, Array_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0044;
		}
	}
	{
		Object_t * L_5 = ___value;
		NullCheck(L_5);
		Type_t * L_6 = Object_GetType_m1416(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m1269(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral2899, /*hidden argument*/NULL);
		return L_8;
	}

IL_0044:
	{
		Object_t * L_9 = ___context;
		CultureInfo_t693 * L_10 = ___culture;
		Object_t * L_11 = ___value;
		Type_t * L_12 = ___destinationType;
		Object_t * L_13 = CollectionConverter_ConvertTo_m10455(__this, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ArrayConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern TypeInfo* NullReferenceException_t671_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var;
extern TypeInfo* Array_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayPropertyDescriptor_t1879_il2cpp_TypeInfo_var;
extern "C" PropertyDescriptorCollection_t936 * ArrayConverter_GetProperties_m10409 (ArrayConverter_t1881 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1913* ___attributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(881);
		PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4278);
		Array_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1360);
		ArrayPropertyDescriptor_t1879_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4279);
		s_Il2CppMethodIntialized = true;
	}
	PropertyDescriptorCollection_t936 * V_0 = {0};
	Array_t * V_1 = {0};
	int32_t V_2 = 0;
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		NullReferenceException_t671 * L_1 = (NullReferenceException_t671 *)il2cpp_codegen_object_new (NullReferenceException_t671_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m4997(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000c:
	{
		PropertyDescriptorCollection_t936 * L_2 = (PropertyDescriptorCollection_t936 *)il2cpp_codegen_object_new (PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var);
		PropertyDescriptorCollection__ctor_m10612(L_2, (PropertyDescriptorU5BU5D_t2216*)(PropertyDescriptorU5BU5D_t2216*)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		Object_t * L_3 = ___value;
		if (!((Array_t *)IsInst(L_3, Array_t_il2cpp_TypeInfo_var)))
		{
			goto IL_004f;
		}
	}
	{
		Object_t * L_4 = ___value;
		V_1 = ((Array_t *)Castclass(L_4, Array_t_il2cpp_TypeInfo_var));
		V_2 = 0;
		goto IL_0043;
	}

IL_002c:
	{
		PropertyDescriptorCollection_t936 * L_5 = V_0;
		int32_t L_6 = V_2;
		Array_t * L_7 = V_1;
		NullCheck(L_7);
		Type_t * L_8 = Object_GetType_m1416(L_7, /*hidden argument*/NULL);
		ArrayPropertyDescriptor_t1879 * L_9 = (ArrayPropertyDescriptor_t1879 *)il2cpp_codegen_object_new (ArrayPropertyDescriptor_t1879_il2cpp_TypeInfo_var);
		ArrayPropertyDescriptor__ctor_m10405(L_9, L_6, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		PropertyDescriptorCollection_Add_m10636(L_5, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0043:
	{
		int32_t L_11 = V_2;
		Array_t * L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = Array_get_Length_m5054(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_002c;
		}
	}

IL_004f:
	{
		PropertyDescriptorCollection_t936 * L_14 = V_0;
		return L_14;
	}
}
// System.Boolean System.ComponentModel.ArrayConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ArrayConverter_GetPropertiesSupported_m10410 (ArrayConverter_t1881 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.ComponentModel.AttributeCollection
#include "System_System_ComponentModel_AttributeCollection.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.AttributeCollection
#include "System_System_ComponentModel_AttributeCollectionMethodDeclarations.h"

// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"


// System.Void System.ComponentModel.AttributeCollection::.ctor(System.Collections.ArrayList)
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" void AttributeCollection__ctor_m10411 (AttributeCollection_t1883 * __this, ArrayList_t913 * ___attributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t913 * L_0 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_0, /*hidden argument*/NULL);
		__this->___attrList_0 = L_0;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		ArrayList_t913 * L_1 = ___attributes;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		ArrayList_t913 * L_2 = ___attributes;
		__this->___attrList_0 = L_2;
	}

IL_001e:
	{
		return;
	}
}
// System.Void System.ComponentModel.AttributeCollection::.ctor(System.Attribute[])
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" void AttributeCollection__ctor_m10412 (AttributeCollection_t1883 * __this, AttributeU5BU5D_t1913* ___attributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		ArrayList_t913 * L_0 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_0, /*hidden argument*/NULL);
		__this->___attrList_0 = L_0;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		AttributeU5BU5D_t1913* L_1 = ___attributes;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		V_0 = 0;
		goto IL_0031;
	}

IL_001e:
	{
		ArrayList_t913 * L_2 = (__this->___attrList_0);
		AttributeU5BU5D_t1913* L_3 = ___attributes;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck(L_2);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_2, (*(Attribute_t478 **)(Attribute_t478 **)SZArrayLdElema(L_3, L_5)));
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_7 = V_0;
		AttributeU5BU5D_t1913* L_8 = ___attributes;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_003a:
	{
		return;
	}
}
// System.Void System.ComponentModel.AttributeCollection::.cctor()
extern TypeInfo* AttributeCollection_t1883_il2cpp_TypeInfo_var;
extern "C" void AttributeCollection__cctor_m10413 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeCollection_t1883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4280);
		s_Il2CppMethodIntialized = true;
	}
	{
		AttributeCollection_t1883 * L_0 = (AttributeCollection_t1883 *)il2cpp_codegen_object_new (AttributeCollection_t1883_il2cpp_TypeInfo_var);
		AttributeCollection__ctor_m10411(L_0, (ArrayList_t913 *)NULL, /*hidden argument*/NULL);
		((AttributeCollection_t1883_StaticFields*)AttributeCollection_t1883_il2cpp_TypeInfo_var->static_fields)->___Empty_1 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.ComponentModel.AttributeCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * AttributeCollection_System_Collections_IEnumerable_GetEnumerator_m10414 (AttributeCollection_t1883 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.ComponentModel.AttributeCollection::GetEnumerator() */, __this);
		return L_0;
	}
}
// System.Object System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * AttributeCollection_System_Collections_ICollection_get_SyncRoot_m10415 (AttributeCollection_t1883 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___attrList_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(25 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		return L_1;
	}
}
// System.Int32 System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_Count()
extern "C" int32_t AttributeCollection_System_Collections_ICollection_get_Count_m10416 (AttributeCollection_t1883 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.ComponentModel.AttributeCollection::get_Count() */, __this);
		return L_0;
	}
}
// System.Boolean System.ComponentModel.AttributeCollection::Contains(System.Attribute)
extern "C" bool AttributeCollection_Contains_m10417 (AttributeCollection_t1883 * __this, Attribute_t478 * ___attr, const MethodInfo* method)
{
	Attribute_t478 * V_0 = {0};
	{
		Attribute_t478 * L_0 = ___attr;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m1416(L_0, /*hidden argument*/NULL);
		Attribute_t478 * L_2 = (Attribute_t478 *)VirtFuncInvoker1< Attribute_t478 *, Type_t * >::Invoke(10 /* System.Attribute System.ComponentModel.AttributeCollection::get_Item(System.Type) */, __this, L_1);
		V_0 = L_2;
		Attribute_t478 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_t478 * L_4 = ___attr;
		Attribute_t478 * L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Attribute::Equals(System.Object) */, L_4, L_5);
		return L_6;
	}

IL_001b:
	{
		return 0;
	}
}
// System.Boolean System.ComponentModel.AttributeCollection::Contains(System.Attribute[])
extern "C" bool AttributeCollection_Contains_m10418 (AttributeCollection_t1883 * __this, AttributeU5BU5D_t1913* ___attributes, const MethodInfo* method)
{
	Attribute_t478 * V_0 = {0};
	AttributeU5BU5D_t1913* V_1 = {0};
	int32_t V_2 = 0;
	{
		AttributeU5BU5D_t1913* L_0 = ___attributes;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 1;
	}

IL_0008:
	{
		AttributeU5BU5D_t1913* L_1 = ___attributes;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0027;
	}

IL_0011:
	{
		AttributeU5BU5D_t1913* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Attribute_t478 **)(Attribute_t478 **)SZArrayLdElema(L_2, L_4));
		Attribute_t478 * L_5 = V_0;
		bool L_6 = AttributeCollection_Contains_m10417(__this, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0023;
		}
	}
	{
		return 0;
	}

IL_0023:
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_2;
		AttributeU5BU5D_t1913* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		return 1;
	}
}
// System.Void System.ComponentModel.AttributeCollection::CopyTo(System.Array,System.Int32)
extern "C" void AttributeCollection_CopyTo_m10419 (AttributeCollection_t1883 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___attrList_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(37 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.ComponentModel.AttributeCollection::GetEnumerator()
extern "C" Object_t * AttributeCollection_GetEnumerator_m10420 (AttributeCollection_t1883 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___attrList_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Attribute System.ComponentModel.AttributeCollection::GetDefaultAttribute(System.Type)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Attribute_t478_il2cpp_TypeInfo_var;
extern "C" Attribute_t478 * AttributeCollection_GetDefaultAttribute_m10421 (AttributeCollection_t1883 * __this, Type_t * ___attributeType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Attribute_t478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1284);
		s_Il2CppMethodIntialized = true;
	}
	Attribute_t478 * V_0 = {0};
	int32_t V_1 = {0};
	FieldInfo_t * V_2 = {0};
	ConstructorInfo_t574 * V_3 = {0};
	{
		V_0 = (Attribute_t478 *)NULL;
		V_1 = ((int32_t)24);
		Type_t * L_0 = ___attributeType;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		FieldInfo_t * L_2 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_0, (String_t*) &_stringLiteral2901, L_1);
		V_2 = L_2;
		FieldInfo_t * L_3 = V_2;
		if (L_3)
		{
			goto IL_004f;
		}
	}
	{
		Type_t * L_4 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t570* L_5 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		NullCheck(L_4);
		ConstructorInfo_t574 * L_6 = (ConstructorInfo_t574 *)VirtFuncInvoker1< ConstructorInfo_t574 *, TypeU5BU5D_t570* >::Invoke(73 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_4, L_5);
		V_3 = L_6;
		ConstructorInfo_t574 * L_7 = V_3;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		ConstructorInfo_t574 * L_8 = V_3;
		NullCheck(L_8);
		Object_t * L_9 = ConstructorInfo_Invoke_m3265(L_8, (ObjectU5BU5D_t300*)(ObjectU5BU5D_t300*)NULL, /*hidden argument*/NULL);
		V_0 = ((Attribute_t478 *)IsInst(L_9, Attribute_t478_il2cpp_TypeInfo_var));
	}

IL_0037:
	{
		Attribute_t478 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		Attribute_t478 * L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = (bool)VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Attribute::IsDefaultAttribute() */, L_11);
		if (L_12)
		{
			goto IL_004a;
		}
	}
	{
		V_0 = (Attribute_t478 *)NULL;
	}

IL_004a:
	{
		goto IL_005c;
	}

IL_004f:
	{
		FieldInfo_t * L_13 = V_2;
		NullCheck(L_13);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_13, NULL);
		V_0 = ((Attribute_t478 *)Castclass(L_14, Attribute_t478_il2cpp_TypeInfo_var));
	}

IL_005c:
	{
		Attribute_t478 * L_15 = V_0;
		return L_15;
	}
}
// System.Int32 System.ComponentModel.AttributeCollection::get_Count()
extern "C" int32_t AttributeCollection_get_Count_m10422 (AttributeCollection_t1883 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		ArrayList_t913 * L_0 = (__this->___attrList_0);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		ArrayList_t913 * L_1 = (__this->___attrList_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Attribute System.ComponentModel.AttributeCollection::get_Item(System.Type)
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* Attribute_t478_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" Attribute_t478 * AttributeCollection_get_Item_m10423 (AttributeCollection_t1883 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		Attribute_t478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1284);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	Attribute_t478 * V_0 = {0};
	Attribute_t478 * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Attribute_t478 *)NULL;
		ArrayList_t913 * L_0 = (__this->___attrList_0);
		if (!L_0)
		{
			goto IL_0064;
		}
	}
	{
		ArrayList_t913 * L_1 = (__this->___attrList_0);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
		V_2 = L_2;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_001e:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_3);
			V_1 = ((Attribute_t478 *)Castclass(L_4, Attribute_t478_il2cpp_TypeInfo_var));
			Type_t * L_5 = ___type;
			Attribute_t478 * L_6 = V_1;
			NullCheck(L_6);
			Type_t * L_7 = Object_GetType_m1416(L_6, /*hidden argument*/NULL);
			NullCheck(L_5);
			bool L_8 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_5, L_7);
			if (!L_8)
			{
				goto IL_0042;
			}
		}

IL_003b:
		{
			Attribute_t478 * L_9 = V_1;
			V_0 = L_9;
			goto IL_004d;
		}

IL_0042:
		{
			Object_t * L_10 = V_2;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_001e;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x64, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_2;
			V_3 = ((Object_t *)IsInst(L_12, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_3;
			if (L_13)
			{
				goto IL_005d;
			}
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(82)
		}

IL_005d:
		{
			Object_t * L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x64, IL_0064)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0064:
	{
		Attribute_t478 * L_15 = V_0;
		if (L_15)
		{
			goto IL_0072;
		}
	}
	{
		Type_t * L_16 = ___type;
		Attribute_t478 * L_17 = AttributeCollection_GetDefaultAttribute_m10421(__this, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
	}

IL_0072:
	{
		Attribute_t478 * L_18 = V_0;
		return L_18;
	}
}
// System.ComponentModel.BaseNumberConverter
#include "System_System_ComponentModel_BaseNumberConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.BaseNumberConverter
#include "System_System_ComponentModel_BaseNumberConverterMethodDeclarations.h"

// System.ComponentModel.TypeConverter
#include "System_System_ComponentModel_TypeConverter.h"
// System.Globalization.NumberFormatInfo
#include "mscorlib_System_Globalization_NumberFormatInfo.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// System.ComponentModel.TypeConverter
#include "System_System_ComponentModel_TypeConverterMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"


// System.Void System.ComponentModel.BaseNumberConverter::.ctor()
extern "C" void BaseNumberConverter__ctor_m10424 (BaseNumberConverter_t1884 * __this, const MethodInfo* method)
{
	{
		TypeConverter__ctor_m10707(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.ComponentModel.BaseNumberConverter::get_SupportHex()
// System.Boolean System.ComponentModel.BaseNumberConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool BaseNumberConverter_CanConvertFrom_m10425 (BaseNumberConverter_t1884 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Type_t * L_0 = ___sourceType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		Object_t * L_2 = ___context;
		Type_t * L_3 = ___sourceType;
		bool L_4 = TypeConverter_CanConvertFrom_m5367(__this, L_2, L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		return G_B3_0;
	}
}
// System.Boolean System.ComponentModel.BaseNumberConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool BaseNumberConverter_CanConvertTo_m10426 (BaseNumberConverter_t1884 * __this, Object_t * ___context, Type_t * ___t, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Type_t * L_0 = ___t;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_2 = ___context;
		Type_t * L_3 = ___t;
		bool L_4 = TypeConverter_CanConvertTo_m10708(__this, L_2, L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		return G_B3_0;
	}
}
// System.Object System.ComponentModel.BaseNumberConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern const Il2CppType* NumberFormatInfo_t1037_0_0_0_var;
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* NumberFormatInfo_t1037_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t306_il2cpp_TypeInfo_var;
extern "C" Object_t * BaseNumberConverter_ConvertFrom_m10427 (BaseNumberConverter_t1884 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatInfo_t1037_0_0_0_var = il2cpp_codegen_type_from_index(2038);
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		NumberFormatInfo_t1037_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2038);
		Exception_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	NumberFormatInfo_t1037 * V_1 = {0};
	Exception_t306 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		CultureInfo_t693 * L_0 = ___culture;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_1 = CultureInfo_get_CurrentCulture_m4983(NULL /*static, unused*/, /*hidden argument*/NULL);
		___culture = L_1;
	}

IL_000d:
	{
		Object_t * L_2 = ___value;
		V_0 = ((String_t*)IsInst(L_2, String_t_il2cpp_TypeInfo_var));
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_00d9;
		}
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.ComponentModel.BaseNumberConverter::get_SupportHex() */, __this);
			if (!L_4)
			{
				goto IL_0083;
			}
		}

IL_0025:
		{
			String_t* L_5 = V_0;
			NullCheck(L_5);
			int32_t L_6 = String_get_Length_m1368(L_5, /*hidden argument*/NULL);
			if ((((int32_t)L_6) < ((int32_t)1)))
			{
				goto IL_0054;
			}
		}

IL_0031:
		{
			String_t* L_7 = V_0;
			NullCheck(L_7);
			uint16_t L_8 = String_get_Chars_m1370(L_7, 0, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)35)))))
			{
				goto IL_0054;
			}
		}

IL_003f:
		{
			String_t* L_9 = V_0;
			NullCheck(L_9);
			String_t* L_10 = String_Substring_m3180(L_9, 1, /*hidden argument*/NULL);
			Object_t * L_11 = (Object_t *)VirtFuncInvoker2< Object_t *, String_t*, int32_t >::Invoke(18 /* System.Object System.ComponentModel.BaseNumberConverter::ConvertFromString(System.String,System.Int32) */, __this, L_10, ((int32_t)16));
			V_3 = L_11;
			goto IL_00e3;
		}

IL_0054:
		{
			String_t* L_12 = V_0;
			NullCheck(L_12);
			bool L_13 = String_StartsWith_m1347(L_12, (String_t*) &_stringLiteral2902, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_0074;
			}
		}

IL_0064:
		{
			String_t* L_14 = V_0;
			NullCheck(L_14);
			bool L_15 = String_StartsWith_m1347(L_14, (String_t*) &_stringLiteral2903, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_0083;
			}
		}

IL_0074:
		{
			String_t* L_16 = V_0;
			Object_t * L_17 = (Object_t *)VirtFuncInvoker2< Object_t *, String_t*, int32_t >::Invoke(18 /* System.Object System.ComponentModel.BaseNumberConverter::ConvertFromString(System.String,System.Int32) */, __this, L_16, ((int32_t)16));
			V_3 = L_17;
			goto IL_00e3;
		}

IL_0083:
		{
			CultureInfo_t693 * L_18 = ___culture;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_19 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(NumberFormatInfo_t1037_0_0_0_var), /*hidden argument*/NULL);
			NullCheck(L_18);
			Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Type_t * >::Invoke(18 /* System.Object System.Globalization.CultureInfo::GetFormat(System.Type) */, L_18, L_19);
			V_1 = ((NumberFormatInfo_t1037 *)Castclass(L_20, NumberFormatInfo_t1037_il2cpp_TypeInfo_var));
			String_t* L_21 = V_0;
			NumberFormatInfo_t1037 * L_22 = V_1;
			Object_t * L_23 = (Object_t *)VirtFuncInvoker2< Object_t *, String_t*, NumberFormatInfo_t1037 * >::Invoke(17 /* System.Object System.ComponentModel.BaseNumberConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo) */, __this, L_21, L_22);
			V_3 = L_23;
			goto IL_00e3;
		}

IL_00a7:
		{
			; // IL_00a7: leave IL_00d9
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t306_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00ac;
		throw e;
	}

CATCH_00ac:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t306 *)__exception_local);
		Object_t * L_24 = ___value;
		NullCheck(L_24);
		String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
		Type_t * L_26 = (__this->___InnerType_0);
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m3275(NULL /*static, unused*/, L_25, (String_t*) &_stringLiteral2662, L_27, (String_t*) &_stringLiteral53, /*hidden argument*/NULL);
		Exception_t306 * L_29 = V_2;
		Exception_t306 * L_30 = (Exception_t306 *)il2cpp_codegen_object_new (Exception_t306_il2cpp_TypeInfo_var);
		Exception__ctor_m3282(L_30, L_28, L_29, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_30);
		goto IL_00d9;
	} // end catch (depth: 1)

IL_00d9:
	{
		Object_t * L_31 = ___context;
		CultureInfo_t693 * L_32 = ___culture;
		Object_t * L_33 = ___value;
		Object_t * L_34 = TypeConverter_ConvertFrom_m5368(__this, L_31, L_32, L_33, /*hidden argument*/NULL);
		return L_34;
	}

IL_00e3:
	{
		Object_t * L_35 = V_3;
		return L_35;
	}
}
// System.Object System.ComponentModel.BaseNumberConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IConvertible_t373_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" Object_t * BaseNumberConverter_ConvertTo_m10428 (BaseNumberConverter_t1884 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IConvertible_t373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		CultureInfo_t693 * L_2 = ___culture;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_3 = CultureInfo_get_CurrentCulture_m4983(NULL /*static, unused*/, /*hidden argument*/NULL);
		___culture = L_3;
	}

IL_001e:
	{
		Type_t * L_4 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5))))
		{
			goto IL_0049;
		}
	}
	{
		Object_t * L_6 = ___value;
		if (!((Object_t *)IsInst(L_6, IConvertible_t373_il2cpp_TypeInfo_var)))
		{
			goto IL_0049;
		}
	}
	{
		Object_t * L_7 = ___value;
		Type_t * L_8 = ___destinationType;
		CultureInfo_t693 * L_9 = ___culture;
		NullCheck(((Object_t *)Castclass(L_7, IConvertible_t373_il2cpp_TypeInfo_var)));
		Object_t * L_10 = (Object_t *)InterfaceFuncInvoker2< Object_t *, Type_t *, Object_t * >::Invoke(13 /* System.Object System.IConvertible::ToType(System.Type,System.IFormatProvider) */, IConvertible_t373_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_7, IConvertible_t373_il2cpp_TypeInfo_var)), L_8, L_9);
		return L_10;
	}

IL_0049:
	{
		Type_t * L_11 = ___destinationType;
		NullCheck(L_11);
		bool L_12 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_11);
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		Object_t * L_13 = ___value;
		Type_t * L_14 = ___destinationType;
		CultureInfo_t693 * L_15 = ___culture;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		Object_t * L_16 = Convert_ChangeType_m12748(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_005f:
	{
		Object_t * L_17 = ___context;
		CultureInfo_t693 * L_18 = ___culture;
		Object_t * L_19 = ___value;
		Type_t * L_20 = ___destinationType;
		Object_t * L_21 = TypeConverter_ConvertTo_m10711(__this, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.String System.ComponentModel.BaseNumberConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
// System.Object System.ComponentModel.BaseNumberConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
// System.Object System.ComponentModel.BaseNumberConverter::ConvertFromString(System.String,System.Int32)
extern TypeInfo* NotImplementedException_t333_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" Object_t * BaseNumberConverter_ConvertFromString_m10429 (BaseNumberConverter_t1884 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.ComponentModel.BaseNumberConverter::get_SupportHex() */, __this);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		NotImplementedException_t333 * L_1 = (NotImplementedException_t333 *)il2cpp_codegen_object_new (NotImplementedException_t333_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m4967(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		InvalidOperationException_t1116 * L_2 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5032(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}
}
// System.ComponentModel.BooleanConverter
#include "System_System_ComponentModel_BooleanConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.BooleanConverter
#include "System_System_ComponentModel_BooleanConverterMethodDeclarations.h"

// System.ComponentModel.TypeConverter/StandardValuesCollection
#include "System_System_ComponentModel_TypeConverter_StandardValuesCol.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// System.ComponentModel.TypeConverter/StandardValuesCollection
#include "System_System_ComponentModel_TypeConverter_StandardValuesColMethodDeclarations.h"


// System.Void System.ComponentModel.BooleanConverter::.ctor()
extern "C" void BooleanConverter__ctor_m10430 (BooleanConverter_t1885 * __this, const MethodInfo* method)
{
	{
		TypeConverter__ctor_m10707(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.ComponentModel.BooleanConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool BooleanConverter_CanConvertFrom_m10431 (BooleanConverter_t1885 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___sourceType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_2 = ___context;
		Type_t * L_3 = ___sourceType;
		bool L_4 = TypeConverter_CanConvertFrom_m5367(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.ComponentModel.BooleanConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t311_il2cpp_TypeInfo_var;
extern "C" Object_t * BooleanConverter_ConvertFrom_m10432 (BooleanConverter_t1885 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Boolean_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (!((String_t*)IsInst(L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		Object_t * L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t311_il2cpp_TypeInfo_var);
		bool L_2 = Boolean_Parse_m5211(NULL /*static, unused*/, ((String_t*)Castclass(L_1, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		bool L_3 = L_2;
		Object_t * L_4 = Box(Boolean_t311_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_001c:
	{
		Object_t * L_5 = ___context;
		CultureInfo_t693 * L_6 = ___culture;
		Object_t * L_7 = ___value;
		Object_t * L_8 = TypeConverter_ConvertFrom_m5368(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.BooleanConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern TypeInfo* BooleanU5BU5D_t1049_il2cpp_TypeInfo_var;
extern TypeInfo* StandardValuesCollection_t1893_il2cpp_TypeInfo_var;
extern "C" StandardValuesCollection_t1893 * BooleanConverter_GetStandardValues_m10433 (BooleanConverter_t1885 * __this, Object_t * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BooleanU5BU5D_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2055);
		StandardValuesCollection_t1893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4281);
		s_Il2CppMethodIntialized = true;
	}
	{
		BooleanU5BU5D_t1049* L_0 = ((BooleanU5BU5D_t1049*)SZArrayNew(BooleanU5BU5D_t1049_il2cpp_TypeInfo_var, 2));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((bool*)(bool*)SZArrayLdElema(L_0, 0)) = (bool)1;
		StandardValuesCollection_t1893 * L_1 = (StandardValuesCollection_t1893 *)il2cpp_codegen_object_new (StandardValuesCollection_t1893_il2cpp_TypeInfo_var);
		StandardValuesCollection__ctor_m10699(L_1, (Object_t *)(Object_t *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.ComponentModel.BooleanConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool BooleanConverter_GetStandardValuesExclusive_m10434 (BooleanConverter_t1885 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.ComponentModel.BooleanConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool BooleanConverter_GetStandardValuesSupported_m10435 (BooleanConverter_t1885 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.ComponentModel.BrowsableAttribute
#include "System_System_ComponentModel_BrowsableAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.BrowsableAttribute
#include "System_System_ComponentModel_BrowsableAttributeMethodDeclarations.h"



// System.Void System.ComponentModel.BrowsableAttribute::.ctor(System.Boolean)
extern "C" void BrowsableAttribute__ctor_m5298 (BrowsableAttribute_t1175 * __this, bool ___browsable, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		bool L_0 = ___browsable;
		__this->___browsable_0 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.BrowsableAttribute::.cctor()
extern TypeInfo* BrowsableAttribute_t1175_il2cpp_TypeInfo_var;
extern "C" void BrowsableAttribute__cctor_m10436 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BrowsableAttribute_t1175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2094);
		s_Il2CppMethodIntialized = true;
	}
	{
		BrowsableAttribute_t1175 * L_0 = (BrowsableAttribute_t1175 *)il2cpp_codegen_object_new (BrowsableAttribute_t1175_il2cpp_TypeInfo_var);
		BrowsableAttribute__ctor_m5298(L_0, 1, /*hidden argument*/NULL);
		((BrowsableAttribute_t1175_StaticFields*)BrowsableAttribute_t1175_il2cpp_TypeInfo_var->static_fields)->___Default_1 = L_0;
		BrowsableAttribute_t1175 * L_1 = (BrowsableAttribute_t1175 *)il2cpp_codegen_object_new (BrowsableAttribute_t1175_il2cpp_TypeInfo_var);
		BrowsableAttribute__ctor_m5298(L_1, 0, /*hidden argument*/NULL);
		((BrowsableAttribute_t1175_StaticFields*)BrowsableAttribute_t1175_il2cpp_TypeInfo_var->static_fields)->___No_2 = L_1;
		BrowsableAttribute_t1175 * L_2 = (BrowsableAttribute_t1175 *)il2cpp_codegen_object_new (BrowsableAttribute_t1175_il2cpp_TypeInfo_var);
		BrowsableAttribute__ctor_m5298(L_2, 1, /*hidden argument*/NULL);
		((BrowsableAttribute_t1175_StaticFields*)BrowsableAttribute_t1175_il2cpp_TypeInfo_var->static_fields)->___Yes_3 = L_2;
		return;
	}
}
// System.Boolean System.ComponentModel.BrowsableAttribute::get_Browsable()
extern "C" bool BrowsableAttribute_get_Browsable_m10437 (BrowsableAttribute_t1175 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___browsable_0);
		return L_0;
	}
}
// System.Boolean System.ComponentModel.BrowsableAttribute::Equals(System.Object)
extern TypeInfo* BrowsableAttribute_t1175_il2cpp_TypeInfo_var;
extern "C" bool BrowsableAttribute_Equals_m10438 (BrowsableAttribute_t1175 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BrowsableAttribute_t1175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2094);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (((BrowsableAttribute_t1175 *)IsInst(L_0, BrowsableAttribute_t1175_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___obj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(BrowsableAttribute_t1175 *)__this))))
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_2 = ___obj;
		NullCheck(((BrowsableAttribute_t1175 *)Castclass(L_2, BrowsableAttribute_t1175_il2cpp_TypeInfo_var)));
		bool L_3 = BrowsableAttribute_get_Browsable_m10437(((BrowsableAttribute_t1175 *)Castclass(L_2, BrowsableAttribute_t1175_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		bool L_4 = (__this->___browsable_0);
		return ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}
}
// System.Int32 System.ComponentModel.BrowsableAttribute::GetHashCode()
extern "C" int32_t BrowsableAttribute_GetHashCode_m10439 (BrowsableAttribute_t1175 * __this, const MethodInfo* method)
{
	{
		bool* L_0 = &(__this->___browsable_0);
		int32_t L_1 = Boolean_GetHashCode_m12749(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.ComponentModel.BrowsableAttribute::IsDefaultAttribute()
extern TypeInfo* BrowsableAttribute_t1175_il2cpp_TypeInfo_var;
extern "C" bool BrowsableAttribute_IsDefaultAttribute_m10440 (BrowsableAttribute_t1175 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BrowsableAttribute_t1175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2094);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___browsable_0);
		IL2CPP_RUNTIME_CLASS_INIT(BrowsableAttribute_t1175_il2cpp_TypeInfo_var);
		BrowsableAttribute_t1175 * L_1 = ((BrowsableAttribute_t1175_StaticFields*)BrowsableAttribute_t1175_il2cpp_TypeInfo_var->static_fields)->___Default_1;
		NullCheck(L_1);
		bool L_2 = BrowsableAttribute_get_Browsable_m10437(L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.ComponentModel.ByteConverter
#include "System_System_ComponentModel_ByteConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.ByteConverter
#include "System_System_ComponentModel_ByteConverterMethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.Byte
#include "mscorlib_System_ByteMethodDeclarations.h"


// System.Boolean System.ComponentModel.ByteConverter::get_SupportHex()
extern "C" bool ByteConverter_get_SupportHex_m10441 (ByteConverter_t1886 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.String System.ComponentModel.ByteConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern TypeInfo* Byte_t681_il2cpp_TypeInfo_var;
extern "C" String_t* ByteConverter_ConvertToString_m10442 (ByteConverter_t1886 * __this, Object_t * ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(559);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		Object_t * L_0 = ___value;
		V_0 = ((*(uint8_t*)((uint8_t*)UnBox (L_0, Byte_t681_il2cpp_TypeInfo_var))));
		NumberFormatInfo_t1037 * L_1 = ___format;
		String_t* L_2 = Byte_ToString_m6340((&V_0), (String_t*) &_stringLiteral2904, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object System.ComponentModel.ByteConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern TypeInfo* Byte_t681_il2cpp_TypeInfo_var;
extern "C" Object_t * ByteConverter_ConvertFromString_m10443 (ByteConverter_t1886 * __this, String_t* ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(559);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		NumberFormatInfo_t1037 * L_1 = ___format;
		uint8_t L_2 = Byte_Parse_m9848(NULL /*static, unused*/, L_0, 7, L_1, /*hidden argument*/NULL);
		uint8_t L_3 = L_2;
		Object_t * L_4 = Box(Byte_t681_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Object System.ComponentModel.ByteConverter::ConvertFromString(System.String,System.Int32)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t681_il2cpp_TypeInfo_var;
extern "C" Object_t * ByteConverter_ConvertFromString_m10444 (ByteConverter_t1886 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		Byte_t681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(559);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		int32_t L_1 = ___fromBase;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		uint8_t L_2 = Convert_ToByte_m12750(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		uint8_t L_3 = L_2;
		Object_t * L_4 = Box(Byte_t681_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.ComponentModel.CategoryAttribute
#include "System_System_ComponentModel_CategoryAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.CategoryAttribute
#include "System_System_ComponentModel_CategoryAttributeMethodDeclarations.h"

// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"


// System.Void System.ComponentModel.CategoryAttribute::.ctor()
extern "C" void CategoryAttribute__ctor_m4975 (CategoryAttribute_t907 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		__this->___category_0 = (String_t*) &_stringLiteral2905;
		return;
	}
}
// System.Void System.ComponentModel.CategoryAttribute::.cctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* CategoryAttribute_t907_il2cpp_TypeInfo_var;
extern "C" void CategoryAttribute__cctor_m10445 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		CategoryAttribute_t907_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1904);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1291(L_0, /*hidden argument*/NULL);
		((CategoryAttribute_t907_StaticFields*)CategoryAttribute_t907_il2cpp_TypeInfo_var->static_fields)->___lockobj_3 = L_0;
		return;
	}
}
// System.ComponentModel.CategoryAttribute System.ComponentModel.CategoryAttribute::get_Default()
extern TypeInfo* CategoryAttribute_t907_il2cpp_TypeInfo_var;
extern "C" CategoryAttribute_t907 * CategoryAttribute_get_Default_m10446 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CategoryAttribute_t907_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1904);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(CategoryAttribute_t907_il2cpp_TypeInfo_var);
		CategoryAttribute_t907 * L_0 = ((CategoryAttribute_t907_StaticFields*)CategoryAttribute_t907_il2cpp_TypeInfo_var->static_fields)->___def_2;
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CategoryAttribute_t907_il2cpp_TypeInfo_var);
		CategoryAttribute_t907 * L_1 = ((CategoryAttribute_t907_StaticFields*)CategoryAttribute_t907_il2cpp_TypeInfo_var->static_fields)->___def_2;
		il2cpp_codegen_memory_barrier();
		return L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CategoryAttribute_t907_il2cpp_TypeInfo_var);
		Object_t * L_2 = ((CategoryAttribute_t907_StaticFields*)CategoryAttribute_t907_il2cpp_TypeInfo_var->static_fields)->___lockobj_3;
		V_0 = L_2;
		Object_t * L_3 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(CategoryAttribute_t907_il2cpp_TypeInfo_var);
			CategoryAttribute_t907 * L_4 = ((CategoryAttribute_t907_StaticFields*)CategoryAttribute_t907_il2cpp_TypeInfo_var->static_fields)->___def_2;
			il2cpp_codegen_memory_barrier();
			if (L_4)
			{
				goto IL_0038;
			}
		}

IL_002c:
		{
			CategoryAttribute_t907 * L_5 = (CategoryAttribute_t907 *)il2cpp_codegen_object_new (CategoryAttribute_t907_il2cpp_TypeInfo_var);
			CategoryAttribute__ctor_m4975(L_5, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(CategoryAttribute_t907_il2cpp_TypeInfo_var);
			il2cpp_codegen_memory_barrier();
			((CategoryAttribute_t907_StaticFields*)CategoryAttribute_t907_il2cpp_TypeInfo_var->static_fields)->___def_2 = L_5;
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x44, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Object_t * L_6 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x44, IL_0044)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CategoryAttribute_t907_il2cpp_TypeInfo_var);
		CategoryAttribute_t907 * L_7 = ((CategoryAttribute_t907_StaticFields*)CategoryAttribute_t907_il2cpp_TypeInfo_var->static_fields)->___def_2;
		il2cpp_codegen_memory_barrier();
		return L_7;
	}
}
// System.String System.ComponentModel.CategoryAttribute::GetLocalizedString(System.String)
extern "C" String_t* CategoryAttribute_GetLocalizedString_m10447 (CategoryAttribute_t907 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		String_t* L_1 = Locale_GetText_m10302(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.ComponentModel.CategoryAttribute::get_Category()
extern "C" String_t* CategoryAttribute_get_Category_m10448 (CategoryAttribute_t907 * __this, const MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		bool L_0 = (__this->___IsLocalized_1);
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		__this->___IsLocalized_1 = 1;
		String_t* L_1 = (__this->___category_0);
		String_t* L_2 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.ComponentModel.CategoryAttribute::GetLocalizedString(System.String) */, __this, L_1);
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_4 = V_0;
		__this->___category_0 = L_4;
	}

IL_002c:
	{
		String_t* L_5 = (__this->___category_0);
		return L_5;
	}
}
// System.Boolean System.ComponentModel.CategoryAttribute::Equals(System.Object)
extern TypeInfo* CategoryAttribute_t907_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool CategoryAttribute_Equals_m5376 (CategoryAttribute_t907 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CategoryAttribute_t907_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1904);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (((CategoryAttribute_t907 *)IsInst(L_0, CategoryAttribute_t907_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___obj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(CategoryAttribute_t907 *)__this))))
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_2 = ___obj;
		NullCheck(((CategoryAttribute_t907 *)Castclass(L_2, CategoryAttribute_t907_il2cpp_TypeInfo_var)));
		String_t* L_3 = CategoryAttribute_get_Category_m10448(((CategoryAttribute_t907 *)Castclass(L_2, CategoryAttribute_t907_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_4 = (__this->___category_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1295(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 System.ComponentModel.CategoryAttribute::GetHashCode()
extern "C" int32_t CategoryAttribute_GetHashCode_m5377 (CategoryAttribute_t907 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___category_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Boolean System.ComponentModel.CategoryAttribute::IsDefaultAttribute()
extern TypeInfo* CategoryAttribute_t907_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool CategoryAttribute_IsDefaultAttribute_m5378 (CategoryAttribute_t907 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CategoryAttribute_t907_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1904);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___category_0);
		IL2CPP_RUNTIME_CLASS_INIT(CategoryAttribute_t907_il2cpp_TypeInfo_var);
		CategoryAttribute_t907 * L_1 = CategoryAttribute_get_Default_m10446(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = CategoryAttribute_get_Category_m10448(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1295(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.ComponentModel.CharConverter
#include "System_System_ComponentModel_CharConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.CharConverter
#include "System_System_ComponentModel_CharConverterMethodDeclarations.h"

// System.FormatException
#include "mscorlib_System_FormatException.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"


// System.Boolean System.ComponentModel.CharConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool CharConverter_CanConvertFrom_m10449 (CharConverter_t1887 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___sourceType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_2 = ___context;
		Type_t * L_3 = ___sourceType;
		bool L_4 = TypeConverter_CanConvertFrom_m5367(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.ComponentModel.CharConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t687_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t323_il2cpp_TypeInfo_var;
extern "C" Object_t * CharConverter_ConvertFrom_m10450 (CharConverter_t1887 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		FormatException_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(956);
		Char_t323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object_t * L_0 = ___value;
		V_0 = ((String_t*)IsInst(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1368(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = String_Trim_m1528(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0020:
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m1368(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral2906, L_8, /*hidden argument*/NULL);
		FormatException_t687 * L_10 = (FormatException_t687 *)il2cpp_codegen_object_new (FormatException_t687_il2cpp_TypeInfo_var);
		FormatException__ctor_m3201(L_10, L_9, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_003d:
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m1368(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_004f;
		}
	}
	{
		uint16_t L_13 = 0;
		Object_t * L_14 = Box(Char_t323_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}

IL_004f:
	{
		String_t* L_15 = V_0;
		NullCheck(L_15);
		uint16_t L_16 = String_get_Chars_m1370(L_15, 0, /*hidden argument*/NULL);
		uint16_t L_17 = L_16;
		Object_t * L_18 = Box(Char_t323_il2cpp_TypeInfo_var, &L_17);
		return L_18;
	}

IL_005c:
	{
		Object_t * L_19 = ___context;
		CultureInfo_t693 * L_20 = ___culture;
		Object_t * L_21 = ___value;
		Object_t * L_22 = TypeConverter_ConvertFrom_m5368(__this, L_19, L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Object System.ComponentModel.CharConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t323_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * CharConverter_ConvertTo_m10451 (CharConverter_t1887 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Char_t323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	{
		Type_t * L_0 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_003d;
		}
	}
	{
		Object_t * L_2 = ___value;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		Object_t * L_3 = ___value;
		if (!((Object_t *)IsInst(L_3, Char_t323_il2cpp_TypeInfo_var)))
		{
			goto IL_003d;
		}
	}
	{
		Object_t * L_4 = ___value;
		V_0 = ((*(uint16_t*)((uint16_t*)UnBox (L_4, Char_t323_il2cpp_TypeInfo_var))));
		uint16_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_6;
	}

IL_0035:
	{
		uint16_t L_7 = V_0;
		String_t* L_8 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_8 = String_CreateString_m3237(L_8, L_7, 1, /*hidden argument*/NULL);
		return L_8;
	}

IL_003d:
	{
		Object_t * L_9 = ___context;
		CultureInfo_t693 * L_10 = ___culture;
		Object_t * L_11 = ___value;
		Type_t * L_12 = ___destinationType;
		Object_t * L_13 = TypeConverter_ConvertTo_m10711(__this, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.ComponentModel.CollectionChangeAction
#include "System_System_ComponentModel_CollectionChangeAction.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.CollectionChangeAction
#include "System_System_ComponentModel_CollectionChangeActionMethodDeclarations.h"



// System.ComponentModel.CollectionChangeEventArgs
#include "System_System_ComponentModel_CollectionChangeEventArgs.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.CollectionChangeEventArgs
#include "System_System_ComponentModel_CollectionChangeEventArgsMethodDeclarations.h"

// System.EventArgs
#include "mscorlib_System_EventArgsMethodDeclarations.h"


// System.Void System.ComponentModel.CollectionChangeEventArgs::.ctor(System.ComponentModel.CollectionChangeAction,System.Object)
extern TypeInfo* EventArgs_t912_il2cpp_TypeInfo_var;
extern "C" void CollectionChangeEventArgs__ctor_m4974 (CollectionChangeEventArgs_t1097 * __this, int32_t ___action, Object_t * ___element, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1932);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t912_il2cpp_TypeInfo_var);
		EventArgs__ctor_m4987(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___action;
		__this->___changeAction_1 = L_0;
		Object_t * L_1 = ___element;
		__this->___theElement_2 = L_1;
		return;
	}
}
// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::get_Action()
extern "C" int32_t CollectionChangeEventArgs_get_Action_m10452 (CollectionChangeEventArgs_t1097 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___changeAction_1);
		return L_0;
	}
}
// System.Object System.ComponentModel.CollectionChangeEventArgs::get_Element()
extern "C" Object_t * CollectionChangeEventArgs_get_Element_m10453 (CollectionChangeEventArgs_t1097 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___theElement_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.ComponentModel.CollectionConverter::.ctor()
extern "C" void CollectionConverter__ctor_m10454 (CollectionConverter_t1882 * __this, const MethodInfo* method)
{
	{
		TypeConverter__ctor_m10707(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.ComponentModel.CollectionConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern "C" Object_t * CollectionConverter_ConvertTo_m10455 (CollectionConverter_t1882 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0028;
		}
	}
	{
		Object_t * L_2 = ___value;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Object_t * L_3 = ___value;
		if (!((Object_t *)IsInst(L_3, ICollection_t793_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		return (String_t*) &_stringLiteral2907;
	}

IL_0028:
	{
		Object_t * L_4 = ___context;
		CultureInfo_t693 * L_5 = ___culture;
		Object_t * L_6 = ___value;
		Type_t * L_7 = ___destinationType;
		Object_t * L_8 = TypeConverter_ConvertTo_m10711(__this, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CollectionConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t936 * CollectionConverter_GetProperties_m10456 (CollectionConverter_t1882 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1913* ___attributes, const MethodInfo* method)
{
	{
		return (PropertyDescriptorCollection_t936 *)NULL;
	}
}
// System.Boolean System.ComponentModel.CollectionConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool CollectionConverter_GetPropertiesSupported_m10457 (CollectionConverter_t1882 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.ComponentModel.ComponentCollection
#include "System_System_ComponentModel_ComponentCollection.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.ComponentCollection
#include "System_System_ComponentModel_ComponentCollectionMethodDeclarations.h"

// System.Collections.ReadOnlyCollectionBase
#include "mscorlib_System_Collections_ReadOnlyCollectionBaseMethodDeclarations.h"


// System.ComponentModel.IComponent System.ComponentModel.ComponentCollection::get_Item(System.String)
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* IComponent_t1198_il2cpp_TypeInfo_var;
extern TypeInfo* ISite_t934_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" Object_t * ComponentCollection_get_Item_m10458 (ComponentCollection_t1889 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		IComponent_t1198_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2160);
		ISite_t934_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2200);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t913 * L_0 = ReadOnlyCollectionBase_get_InnerList_m6898(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0045;
		}

IL_0011:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Object_t *)Castclass(L_3, IComponent_t1198_il2cpp_TypeInfo_var));
			Object_t * L_4 = V_0;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.ComponentModel.ISite System.ComponentModel.IComponent::get_Site() */, IComponent_t1198_il2cpp_TypeInfo_var, L_4);
			if (!L_5)
			{
				goto IL_0045;
			}
		}

IL_0028:
		{
			Object_t * L_6 = V_0;
			NullCheck(L_6);
			Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.ComponentModel.ISite System.ComponentModel.IComponent::get_Site() */, IComponent_t1198_il2cpp_TypeInfo_var, L_6);
			NullCheck(L_7);
			String_t* L_8 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.ComponentModel.ISite::get_Name() */, ISite_t934_il2cpp_TypeInfo_var, L_7);
			String_t* L_9 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_10 = String_op_Equality_m1295(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_0045;
			}
		}

IL_003e:
		{
			Object_t * L_11 = V_0;
			V_2 = L_11;
			IL2CPP_LEAVE(0x69, FINALLY_0055);
		}

IL_0045:
		{
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0011;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x67, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_1;
			V_3 = ((Object_t *)IsInst(L_14, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_3;
			if (L_15)
			{
				goto IL_0060;
			}
		}

IL_005f:
		{
			IL2CPP_END_FINALLY(85)
		}

IL_0060:
		{
			Object_t * L_16 = V_3;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(85)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_JUMP_TBL(0x67, IL_0067)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0067:
	{
		return (Object_t *)NULL;
	}

IL_0069:
	{
		Object_t * L_17 = V_2;
		return L_17;
	}
}
// System.ComponentModel.ComponentConverter
#include "System_System_ComponentModel_ComponentConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.ComponentConverter
#include "System_System_ComponentModel_ComponentConverterMethodDeclarations.h"

// System.ComponentModel.TypeDescriptor
#include "System_System_ComponentModel_TypeDescriptorMethodDeclarations.h"


// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern "C" PropertyDescriptorCollection_t936 * ComponentConverter_GetProperties_m10459 (ComponentConverter_t1890 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1913* ___attributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		AttributeU5BU5D_t1913* L_1 = ___attributes;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		PropertyDescriptorCollection_t936 * L_2 = TypeDescriptor_GetProperties_m10722(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.ComponentModel.ComponentConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ComponentConverter_GetPropertiesSupported_m10460 (ComponentConverter_t1890 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.ComponentModel.Component
#include "System_System_ComponentModel_Component.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.Component
#include "System_System_ComponentModel_ComponentMethodDeclarations.h"

// System.ComponentModel.EventHandlerList
#include "System_System_ComponentModel_EventHandlerList.h"
// System.EventHandler
#include "mscorlib_System_EventHandler.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.ComponentModel.EventHandlerList
#include "System_System_ComponentModel_EventHandlerListMethodDeclarations.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
// System.EventHandler
#include "mscorlib_System_EventHandlerMethodDeclarations.h"


// System.Void System.ComponentModel.Component::add_Disposed(System.EventHandler)
extern "C" void Component_add_Disposed_m5433 (Component_t990 * __this, EventHandler_t1926 * ___value, const MethodInfo* method)
{
	{
		EventHandlerList_t896 * L_0 = Component_get_Events_m10461(__this, /*hidden argument*/NULL);
		Object_t * L_1 = (__this->___disposedEvent_3);
		EventHandler_t1926 * L_2 = ___value;
		NullCheck(L_0);
		EventHandlerList_AddHandler_m4969(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.ComponentModel.Component::remove_Disposed(System.EventHandler)
extern "C" void Component_remove_Disposed_m5434 (Component_t990 * __this, EventHandler_t1926 * ___value, const MethodInfo* method)
{
	{
		EventHandlerList_t896 * L_0 = Component_get_Events_m10461(__this, /*hidden argument*/NULL);
		Object_t * L_1 = (__this->___disposedEvent_3);
		EventHandler_t1926 * L_2 = ___value;
		NullCheck(L_0);
		EventHandlerList_RemoveHandler_m4970(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.ComponentModel.ISite System.ComponentModel.Component::get_Site()
extern "C" Object_t * Component_get_Site_m5435 (Component_t990 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___mySite_2);
		return L_0;
	}
}
// System.ComponentModel.EventHandlerList System.ComponentModel.Component::get_Events()
extern TypeInfo* EventHandlerList_t896_il2cpp_TypeInfo_var;
extern "C" EventHandlerList_t896 * Component_get_Events_m10461 (Component_t990 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandlerList_t896_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandlerList_t896 * L_0 = (__this->___event_handlers_1);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		EventHandlerList_t896 * L_1 = (EventHandlerList_t896 *)il2cpp_codegen_object_new (EventHandlerList_t896_il2cpp_TypeInfo_var);
		EventHandlerList__ctor_m4968(L_1, /*hidden argument*/NULL);
		__this->___event_handlers_1 = L_1;
	}

IL_0016:
	{
		EventHandlerList_t896 * L_2 = (__this->___event_handlers_1);
		return L_2;
	}
}
// System.Void System.ComponentModel.Component::Finalize()
extern "C" void Component_Finalize_m5430 (Component_t990 * __this, const MethodInfo* method)
{
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(11 /* System.Void System.ComponentModel.Component::Dispose(System.Boolean) */, __this, 0);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m1886(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.ComponentModel.Component::Dispose()
extern "C" void Component_Dispose_m5432 (Component_t990 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(11 /* System.Void System.ComponentModel.Component::Dispose(System.Boolean) */, __this, 1);
		GC_SuppressFinalize_m3572(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.ComponentModel.Component::Dispose(System.Boolean)
extern TypeInfo* ISite_t934_il2cpp_TypeInfo_var;
extern TypeInfo* IContainer_t2224_il2cpp_TypeInfo_var;
extern TypeInfo* EventHandler_t1926_il2cpp_TypeInfo_var;
extern TypeInfo* EventArgs_t912_il2cpp_TypeInfo_var;
extern "C" void Component_Dispose_m5436 (Component_t990 * __this, bool ___release_all, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISite_t934_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2200);
		IContainer_t2224_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4282);
		EventHandler_t1926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4283);
		EventArgs_t912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1932);
		s_Il2CppMethodIntialized = true;
	}
	EventHandler_t1926 * V_0 = {0};
	{
		bool L_0 = ___release_all;
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		Object_t * L_1 = (__this->___mySite_2);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		Object_t * L_2 = (__this->___mySite_2);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.ComponentModel.IContainer System.ComponentModel.ISite::get_Container() */, ISite_t934_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		Object_t * L_4 = (__this->___mySite_2);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.ComponentModel.IContainer System.ComponentModel.ISite::get_Container() */, ISite_t934_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		InterfaceActionInvoker1< Object_t * >::Invoke(1 /* System.Void System.ComponentModel.IContainer::Remove(System.ComponentModel.IComponent) */, IContainer_t2224_il2cpp_TypeInfo_var, L_5, __this);
	}

IL_0032:
	{
		EventHandlerList_t896 * L_6 = Component_get_Events_m10461(__this, /*hidden argument*/NULL);
		Object_t * L_7 = (__this->___disposedEvent_3);
		NullCheck(L_6);
		Delegate_t314 * L_8 = EventHandlerList_get_Item_m4971(L_6, L_7, /*hidden argument*/NULL);
		V_0 = ((EventHandler_t1926 *)Castclass(L_8, EventHandler_t1926_il2cpp_TypeInfo_var));
		EventHandler_t1926 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		EventHandler_t1926 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t912_il2cpp_TypeInfo_var);
		EventArgs_t912 * L_11 = ((EventArgs_t912_StaticFields*)EventArgs_t912_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		NullCheck(L_10);
		VirtActionInvoker2< Object_t *, EventArgs_t912 * >::Invoke(11 /* System.Void System.EventHandler::Invoke(System.Object,System.EventArgs) */, L_10, __this, L_11);
	}

IL_005b:
	{
		return;
	}
}
// System.String System.ComponentModel.Component::ToString()
extern TypeInfo* ISite_t934_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Component_ToString_m5431 (Component_t990 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISite_t934_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2200);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___mySite_2);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1416(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_1);
		return L_2;
	}

IL_0017:
	{
		Object_t * L_3 = (__this->___mySite_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.ComponentModel.ISite::get_Name() */, ISite_t934_il2cpp_TypeInfo_var, L_3);
		Type_t * L_5 = Object_GetType_m1416(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m3539(NULL /*static, unused*/, (String_t*) &_stringLiteral2908, L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.ComponentModel.CultureInfoConverter/CultureInfoComparer
#include "System_System_ComponentModel_CultureInfoConverter_CultureInf.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.CultureInfoConverter/CultureInfoComparer
#include "System_System_ComponentModel_CultureInfoConverter_CultureInfMethodDeclarations.h"



// System.Void System.ComponentModel.CultureInfoConverter/CultureInfoComparer::.ctor()
extern "C" void CultureInfoComparer__ctor_m10462 (CultureInfoComparer_t1892 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.ComponentModel.CultureInfoConverter/CultureInfoComparer::Compare(System.Object,System.Object)
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" int32_t CultureInfoComparer_Compare_m10463 (CultureInfoComparer_t1892 * __this, Object_t * ___first, Object_t * ___second, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___first;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Object_t * L_1 = ___second;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		return (-1);
	}

IL_0010:
	{
		Object_t * L_2 = ___second;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		Object_t * L_3 = ___first;
		NullCheck(((CultureInfo_t693 *)Castclass(L_3, CultureInfo_t693_il2cpp_TypeInfo_var)));
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Globalization.CultureInfo::get_DisplayName() */, ((CultureInfo_t693 *)Castclass(L_3, CultureInfo_t693_il2cpp_TypeInfo_var)));
		Object_t * L_5 = ___second;
		NullCheck(((CultureInfo_t693 *)Castclass(L_5, CultureInfo_t693_il2cpp_TypeInfo_var)));
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Globalization.CultureInfo::get_DisplayName() */, ((CultureInfo_t693 *)Castclass(L_5, CultureInfo_t693_il2cpp_TypeInfo_var)));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_7 = CultureInfo_get_CurrentCulture_m4983(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_8 = String_Compare_m4973(NULL /*static, unused*/, L_4, L_6, 0, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.ComponentModel.CultureInfoConverter
#include "System_System_ComponentModel_CultureInfoConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.CultureInfoConverter
#include "System_System_ComponentModel_CultureInfoConverterMethodDeclarations.h"

// System.Globalization.CultureTypes
#include "mscorlib_System_Globalization_CultureTypes.h"
// System.ComponentModel.Design.Serialization.InstanceDescriptor
#include "System_System_ComponentModel_Design_Serialization_InstanceDe.h"
// System.ComponentModel.Design.Serialization.InstanceDescriptor
#include "System_System_ComponentModel_Design_Serialization_InstanceDeMethodDeclarations.h"


// System.Boolean System.ComponentModel.CultureInfoConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool CultureInfoConverter_CanConvertFrom_m10464 (CultureInfoConverter_t1894 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___sourceType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_2 = ___context;
		Type_t * L_3 = ___sourceType;
		bool L_4 = TypeConverter_CanConvertFrom_m5367(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.ComponentModel.CultureInfoConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* InstanceDescriptor_t1900_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool CultureInfoConverter_CanConvertTo_m10465 (CultureInfoConverter_t1894 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		InstanceDescriptor_t1900_0_0_0_var = il2cpp_codegen_type_from_index(4284);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Type_t * L_2 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(InstanceDescriptor_t1900_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		Object_t * L_4 = ___context;
		Type_t * L_5 = ___destinationType;
		bool L_6 = TypeConverter_CanConvertTo_m10708(__this, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.ComponentModel.CultureInfoConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" Object_t * CultureInfoConverter_ConvertFrom_m10466 (CultureInfoConverter_t1894 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	CultureInfo_t693 * V_1 = {0};
	CultureInfoU5BU5D_t2225* V_2 = {0};
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___value;
		V_0 = ((String_t*)IsInst(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_3 = String_Compare_m1838(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral2909, 0, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_4 = CultureInfo_get_InvariantCulture_m3234(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_4;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_5 = V_0;
			CultureInfo_t693 * L_6 = (CultureInfo_t693 *)il2cpp_codegen_object_new (CultureInfo_t693_il2cpp_TypeInfo_var);
			CultureInfo__ctor_m5072(L_6, L_5, /*hidden argument*/NULL);
			V_4 = L_6;
			goto IL_0098;
		}

IL_0031:
		{
			; // IL_0031: leave IL_007d
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0036;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Object)
		{
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
			CultureInfoU5BU5D_t2225* L_7 = CultureInfo_GetCultures_m12751(NULL /*static, unused*/, 7, /*hidden argument*/NULL);
			V_2 = L_7;
			V_3 = 0;
			goto IL_006f;
		}

IL_0045:
		{
			CultureInfoU5BU5D_t2225* L_8 = V_2;
			int32_t L_9 = V_3;
			NullCheck(L_8);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
			int32_t L_10 = L_9;
			V_1 = (*(CultureInfo_t693 **)(CultureInfo_t693 **)SZArrayLdElema(L_8, L_10));
			CultureInfo_t693 * L_11 = V_1;
			NullCheck(L_11);
			String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Globalization.CultureInfo::get_DisplayName() */, L_11);
			String_t* L_13 = V_0;
			String_t* L_14 = V_0;
			NullCheck(L_14);
			int32_t L_15 = String_get_Length_m1368(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			int32_t L_16 = String_Compare_m12752(NULL /*static, unused*/, L_12, 0, L_13, 0, L_15, 1, /*hidden argument*/NULL);
			if (L_16)
			{
				goto IL_006b;
			}
		}

IL_0063:
		{
			CultureInfo_t693 * L_17 = V_1;
			V_4 = L_17;
			goto IL_0098;
		}

IL_006b:
		{
			int32_t L_18 = V_3;
			V_3 = ((int32_t)((int32_t)L_18+(int32_t)1));
		}

IL_006f:
		{
			int32_t L_19 = V_3;
			CultureInfoU5BU5D_t2225* L_20 = V_2;
			NullCheck(L_20);
			if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
			{
				goto IL_0045;
			}
		}

IL_0078:
		{
			goto IL_007d;
		}
	} // end catch (depth: 1)

IL_007d:
	{
		Object_t * L_21 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral2910, L_21, /*hidden argument*/NULL);
		ArgumentException_t356 * L_23 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_23, L_22, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_008e:
	{
		Object_t * L_24 = ___context;
		CultureInfo_t693 * L_25 = ___culture;
		Object_t * L_26 = ___value;
		Object_t * L_27 = TypeConverter_ConvertFrom_m5368(__this, L_24, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_0098:
	{
		Object_t * L_28 = V_4;
		return L_28;
	}
}
// System.Object System.ComponentModel.CultureInfoConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* InstanceDescriptor_t1900_0_0_0_var;
extern const Il2CppType* CultureInfo_t693_0_0_0_var;
extern const Il2CppType* Int32_t297_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* InstanceDescriptor_t1900_il2cpp_TypeInfo_var;
extern "C" Object_t * CultureInfoConverter_ConvertTo_m10467 (CultureInfoConverter_t1894 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		InstanceDescriptor_t1900_0_0_0_var = il2cpp_codegen_type_from_index(4284);
		CultureInfo_t693_0_0_0_var = il2cpp_codegen_type_from_index(983);
		Int32_t297_0_0_0_var = il2cpp_codegen_type_from_index(5);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		InstanceDescriptor_t1900_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4284);
		s_Il2CppMethodIntialized = true;
	}
	CultureInfo_t693 * V_0 = {0};
	ConstructorInfo_t574 * V_1 = {0};
	{
		Type_t * L_0 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_2 = ___value;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		Object_t * L_3 = ___value;
		if (!((CultureInfo_t693 *)IsInst(L_3, CultureInfo_t693_il2cpp_TypeInfo_var)))
		{
			goto IL_003f;
		}
	}
	{
		Object_t * L_4 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_5 = CultureInfo_get_InvariantCulture_m3234(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(Object_t *)L_4) == ((Object_t*)(CultureInfo_t693 *)L_5))))
		{
			goto IL_0033;
		}
	}
	{
		return (String_t*) &_stringLiteral2909;
	}

IL_0033:
	{
		Object_t * L_6 = ___value;
		NullCheck(((CultureInfo_t693 *)Castclass(L_6, CultureInfo_t693_il2cpp_TypeInfo_var)));
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Globalization.CultureInfo::get_DisplayName() */, ((CultureInfo_t693 *)Castclass(L_6, CultureInfo_t693_il2cpp_TypeInfo_var)));
		return L_7;
	}

IL_003f:
	{
		return (String_t*) &_stringLiteral2909;
	}

IL_0045:
	{
		Type_t * L_8 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(InstanceDescriptor_t1900_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_8) == ((Object_t*)(Type_t *)L_9))))
		{
			goto IL_00a6;
		}
	}
	{
		Object_t * L_10 = ___value;
		if (!((CultureInfo_t693 *)IsInst(L_10, CultureInfo_t693_il2cpp_TypeInfo_var)))
		{
			goto IL_00a6;
		}
	}
	{
		Object_t * L_11 = ___value;
		V_0 = ((CultureInfo_t693 *)Castclass(L_11, CultureInfo_t693_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(CultureInfo_t693_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_13 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 1));
		Type_t * L_14 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int32_t297_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		ArrayElementTypeCheck (L_13, L_14);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_13, 0)) = (Type_t *)L_14;
		NullCheck(L_12);
		ConstructorInfo_t574 * L_15 = (ConstructorInfo_t574 *)VirtFuncInvoker1< ConstructorInfo_t574 *, TypeU5BU5D_t570* >::Invoke(73 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_12, L_13);
		V_1 = L_15;
		ConstructorInfo_t574 * L_16 = V_1;
		ObjectU5BU5D_t300* L_17 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 1));
		CultureInfo_t693 * L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Globalization.CultureInfo::get_LCID() */, L_18);
		int32_t L_20 = L_19;
		Object_t * L_21 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 0);
		ArrayElementTypeCheck (L_17, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 0)) = (Object_t *)L_21;
		InstanceDescriptor_t1900 * L_22 = (InstanceDescriptor_t1900 *)il2cpp_codegen_object_new (InstanceDescriptor_t1900_il2cpp_TypeInfo_var);
		InstanceDescriptor__ctor_m10519(L_22, L_16, (Object_t *)(Object_t *)L_17, /*hidden argument*/NULL);
		return L_22;
	}

IL_00a6:
	{
		Object_t * L_23 = ___context;
		CultureInfo_t693 * L_24 = ___culture;
		Object_t * L_25 = ___value;
		Type_t * L_26 = ___destinationType;
		Object_t * L_27 = TypeConverter_ConvertTo_m10711(__this, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfoComparer_t1892_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfoU5BU5D_t2225_il2cpp_TypeInfo_var;
extern TypeInfo* StandardValuesCollection_t1893_il2cpp_TypeInfo_var;
extern "C" StandardValuesCollection_t1893 * CultureInfoConverter_GetStandardValues_m10468 (CultureInfoConverter_t1894 * __this, Object_t * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		CultureInfoComparer_t1892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4285);
		CultureInfoU5BU5D_t2225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4286);
		StandardValuesCollection_t1893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4281);
		s_Il2CppMethodIntialized = true;
	}
	CultureInfoU5BU5D_t2225* V_0 = {0};
	CultureInfoU5BU5D_t2225* V_1 = {0};
	{
		StandardValuesCollection_t1893 * L_0 = (__this->____standardValues_0);
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfoU5BU5D_t2225* L_1 = CultureInfo_GetCultures_m12751(NULL /*static, unused*/, 7, /*hidden argument*/NULL);
		V_0 = L_1;
		CultureInfoU5BU5D_t2225* L_2 = V_0;
		CultureInfoComparer_t1892 * L_3 = (CultureInfoComparer_t1892 *)il2cpp_codegen_object_new (CultureInfoComparer_t1892_il2cpp_TypeInfo_var);
		CultureInfoComparer__ctor_m10462(L_3, /*hidden argument*/NULL);
		Array_Sort_m12753(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/NULL);
		CultureInfoU5BU5D_t2225* L_4 = V_0;
		NullCheck(L_4);
		V_1 = ((CultureInfoU5BU5D_t2225*)SZArrayNew(CultureInfoU5BU5D_t2225_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))+(int32_t)1))));
		CultureInfoU5BU5D_t2225* L_5 = V_1;
		CultureInfo_t693 * L_6 = CultureInfo_get_InvariantCulture_m3234(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_6);
		*((CultureInfo_t693 **)(CultureInfo_t693 **)SZArrayLdElema(L_5, 0)) = (CultureInfo_t693 *)L_6;
		CultureInfoU5BU5D_t2225* L_7 = V_0;
		CultureInfoU5BU5D_t2225* L_8 = V_1;
		CultureInfoU5BU5D_t2225* L_9 = V_0;
		NullCheck(L_9);
		Array_Copy_m5108(NULL /*static, unused*/, (Array_t *)(Array_t *)L_7, 0, (Array_t *)(Array_t *)L_8, 1, (((int32_t)(((Array_t *)L_9)->max_length))), /*hidden argument*/NULL);
		CultureInfoU5BU5D_t2225* L_10 = V_1;
		StandardValuesCollection_t1893 * L_11 = (StandardValuesCollection_t1893 *)il2cpp_codegen_object_new (StandardValuesCollection_t1893_il2cpp_TypeInfo_var);
		StandardValuesCollection__ctor_m10699(L_11, (Object_t *)(Object_t *)L_10, /*hidden argument*/NULL);
		__this->____standardValues_0 = L_11;
	}

IL_0048:
	{
		StandardValuesCollection_t1893 * L_12 = (__this->____standardValues_0);
		return L_12;
	}
}
// System.Boolean System.ComponentModel.CultureInfoConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool CultureInfoConverter_GetStandardValuesExclusive_m10469 (CultureInfoConverter_t1894 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.ComponentModel.CultureInfoConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool CultureInfoConverter_GetStandardValuesSupported_m10470 (CultureInfoConverter_t1894 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.ComponentModel.DateTimeConverter
#include "System_System_ComponentModel_DateTimeConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.DateTimeConverter
#include "System_System_ComponentModel_DateTimeConverterMethodDeclarations.h"

// System.Globalization.DateTimeFormatInfo
#include "mscorlib_System_Globalization_DateTimeFormatInfo.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.Globalization.DateTimeFormatInfo
#include "mscorlib_System_Globalization_DateTimeFormatInfoMethodDeclarations.h"


// System.Boolean System.ComponentModel.DateTimeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool DateTimeConverter_CanConvertFrom_m10471 (DateTimeConverter_t1895 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___sourceType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_2 = ___context;
		Type_t * L_3 = ___sourceType;
		bool L_4 = TypeConverter_CanConvertFrom_m5367(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.ComponentModel.DateTimeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* InstanceDescriptor_t1900_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool DateTimeConverter_CanConvertTo_m10472 (DateTimeConverter_t1895 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InstanceDescriptor_t1900_0_0_0_var = il2cpp_codegen_type_from_index(4284);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(InstanceDescriptor_t1900_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_2 = ___context;
		Type_t * L_3 = ___destinationType;
		bool L_4 = TypeConverter_CanConvertTo_m10708(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.ComponentModel.DateTimeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern const Il2CppType* DateTimeFormatInfo_t1787_0_0_0_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t445_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* DateTimeFormatInfo_t1787_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t687_il2cpp_TypeInfo_var;
extern "C" Object_t * DateTimeConverter_ConvertFrom_m10473 (DateTimeConverter_t1895 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTimeFormatInfo_t1787_0_0_0_var = il2cpp_codegen_type_from_index(3276);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		DateTime_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		DateTimeFormatInfo_t1787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3276);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		FormatException_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(956);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	DateTimeFormatInfo_t1787 * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___value;
		if (!((String_t*)IsInst(L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0093;
		}
	}
	{
		Object_t * L_1 = ___value;
		V_0 = ((String_t*)Castclass(L_1, String_t_il2cpp_TypeInfo_var));
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0038;
			}
		}

IL_0018:
		{
			String_t* L_3 = V_0;
			NullCheck(L_3);
			String_t* L_4 = String_Trim_m1528(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			int32_t L_5 = String_get_Length_m1368(L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_0038;
			}
		}

IL_0028:
		{
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
			DateTime_t445  L_6 = ((DateTime_t445_StaticFields*)DateTime_t445_il2cpp_TypeInfo_var->static_fields)->___MinValue_3;
			DateTime_t445  L_7 = L_6;
			Object_t * L_8 = Box(DateTime_t445_il2cpp_TypeInfo_var, &L_7);
			V_2 = L_8;
			goto IL_009d;
		}

IL_0038:
		{
			CultureInfo_t693 * L_9 = ___culture;
			if (L_9)
			{
				goto IL_004f;
			}
		}

IL_003e:
		{
			String_t* L_10 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
			DateTime_t445  L_11 = DateTime_Parse_m5248(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
			DateTime_t445  L_12 = L_11;
			Object_t * L_13 = Box(DateTime_t445_il2cpp_TypeInfo_var, &L_12);
			V_2 = L_13;
			goto IL_009d;
		}

IL_004f:
		{
			CultureInfo_t693 * L_14 = ___culture;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_15 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(DateTimeFormatInfo_t1787_0_0_0_var), /*hidden argument*/NULL);
			NullCheck(L_14);
			Object_t * L_16 = (Object_t *)VirtFuncInvoker1< Object_t *, Type_t * >::Invoke(18 /* System.Object System.Globalization.CultureInfo::GetFormat(System.Type) */, L_14, L_15);
			V_1 = ((DateTimeFormatInfo_t1787 *)Castclass(L_16, DateTimeFormatInfo_t1787_il2cpp_TypeInfo_var));
			String_t* L_17 = V_0;
			DateTimeFormatInfo_t1787 * L_18 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
			DateTime_t445  L_19 = DateTime_Parse_m5261(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
			DateTime_t445  L_20 = L_19;
			Object_t * L_21 = Box(DateTime_t445_il2cpp_TypeInfo_var, &L_20);
			V_2 = L_21;
			goto IL_009d;
		}

IL_0077:
		{
			; // IL_0077: leave IL_0093
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_007c;
		throw e;
	}

CATCH_007c:
	{ // begin catch(System.Object)
		String_t* L_22 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m1269(NULL /*static, unused*/, L_22, (String_t*) &_stringLiteral2911, /*hidden argument*/NULL);
		FormatException_t687 * L_24 = (FormatException_t687 *)il2cpp_codegen_object_new (FormatException_t687_il2cpp_TypeInfo_var);
		FormatException__ctor_m3201(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
		goto IL_0093;
	} // end catch (depth: 1)

IL_0093:
	{
		Object_t * L_25 = ___context;
		CultureInfo_t693 * L_26 = ___culture;
		Object_t * L_27 = ___value;
		Object_t * L_28 = TypeConverter_ConvertFrom_m5368(__this, L_25, L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}

IL_009d:
	{
		Object_t * L_29 = V_2;
		return L_29;
	}
}
// System.Object System.ComponentModel.DateTimeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* DateTimeFormatInfo_t1787_0_0_0_var;
extern const Il2CppType* InstanceDescriptor_t1900_0_0_0_var;
extern const Il2CppType* DateTime_t445_0_0_0_var;
extern const Il2CppType* Int64_t696_0_0_0_var;
extern TypeInfo* DateTime_t445_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DateTimeFormatInfo_t1787_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t696_il2cpp_TypeInfo_var;
extern TypeInfo* InstanceDescriptor_t1900_il2cpp_TypeInfo_var;
extern "C" Object_t * DateTimeConverter_ConvertTo_m10474 (DateTimeConverter_t1895 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		DateTimeFormatInfo_t1787_0_0_0_var = il2cpp_codegen_type_from_index(3276);
		InstanceDescriptor_t1900_0_0_0_var = il2cpp_codegen_type_from_index(4284);
		DateTime_t445_0_0_0_var = il2cpp_codegen_type_from_index(901);
		Int64_t696_0_0_0_var = il2cpp_codegen_type_from_index(986);
		DateTime_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		DateTimeFormatInfo_t1787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3276);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Int64_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(986);
		InstanceDescriptor_t1900_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4284);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t445  V_0 = {0};
	DateTimeFormatInfo_t1787 * V_1 = {0};
	ConstructorInfo_t574 * V_2 = {0};
	{
		Object_t * L_0 = ___value;
		if (!((Object_t *)IsInst(L_0, DateTime_t445_il2cpp_TypeInfo_var)))
		{
			goto IL_0121;
		}
	}
	{
		Object_t * L_1 = ___value;
		V_0 = ((*(DateTime_t445 *)((DateTime_t445 *)UnBox (L_1, DateTime_t445_il2cpp_TypeInfo_var))));
		Type_t * L_2 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_00d1;
		}
	}
	{
		CultureInfo_t693 * L_4 = ___culture;
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_5 = CultureInfo_get_CurrentCulture_m4983(NULL /*static, unused*/, /*hidden argument*/NULL);
		___culture = L_5;
	}

IL_0030:
	{
		DateTime_t445  L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
		DateTime_t445  L_7 = ((DateTime_t445_StaticFields*)DateTime_t445_il2cpp_TypeInfo_var->static_fields)->___MinValue_3;
		bool L_8 = DateTime_op_Equality_m5134(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_9;
	}

IL_0046:
	{
		CultureInfo_t693 * L_10 = ___culture;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(DateTimeFormatInfo_t1787_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, Type_t * >::Invoke(18 /* System.Object System.Globalization.CultureInfo::GetFormat(System.Type) */, L_10, L_11);
		V_1 = ((DateTimeFormatInfo_t1787 *)Castclass(L_12, DateTimeFormatInfo_t1787_il2cpp_TypeInfo_var));
		CultureInfo_t693 * L_13 = ___culture;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_14 = CultureInfo_get_InvariantCulture_m3234(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(CultureInfo_t693 *)L_13) == ((Object_t*)(CultureInfo_t693 *)L_14))))
		{
			goto IL_0091;
		}
	}
	{
		DateTime_t445  L_15 = DateTime_get_Date_m12754((&V_0), /*hidden argument*/NULL);
		bool L_16 = DateTime_Equals_m12755((&V_0), L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		CultureInfo_t693 * L_17 = ___culture;
		String_t* L_18 = DateTime_ToString_m3259((&V_0), (String_t*) &_stringLiteral1918, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0088:
	{
		CultureInfo_t693 * L_19 = ___culture;
		String_t* L_20 = DateTime_ToString_m5133((&V_0), L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_0091:
	{
		DateTime_t445  L_21 = V_0;
		DateTime_t445  L_22 = DateTime_get_Date_m12754((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
		bool L_23 = DateTime_op_Equality_m5134(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00b2;
		}
	}
	{
		DateTimeFormatInfo_t1787 * L_24 = V_1;
		NullCheck(L_24);
		String_t* L_25 = DateTimeFormatInfo_get_ShortDatePattern_m12756(L_24, /*hidden argument*/NULL);
		CultureInfo_t693 * L_26 = ___culture;
		String_t* L_27 = DateTime_ToString_m3259((&V_0), L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_00b2:
	{
		DateTimeFormatInfo_t1787 * L_28 = V_1;
		NullCheck(L_28);
		String_t* L_29 = DateTimeFormatInfo_get_ShortDatePattern_m12756(L_28, /*hidden argument*/NULL);
		DateTimeFormatInfo_t1787 * L_30 = V_1;
		NullCheck(L_30);
		String_t* L_31 = DateTimeFormatInfo_get_ShortTimePattern_m12757(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m1271(NULL /*static, unused*/, L_29, (String_t*) &_stringLiteral6, L_31, /*hidden argument*/NULL);
		CultureInfo_t693 * L_33 = ___culture;
		String_t* L_34 = DateTime_ToString_m3259((&V_0), L_32, L_33, /*hidden argument*/NULL);
		return L_34;
	}

IL_00d1:
	{
		Type_t * L_35 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(InstanceDescriptor_t1900_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_35) == ((Object_t*)(Type_t *)L_36))))
		{
			goto IL_0121;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_37 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(DateTime_t445_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_38 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 1));
		Type_t * L_39 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int64_t696_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 0);
		ArrayElementTypeCheck (L_38, L_39);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_38, 0)) = (Type_t *)L_39;
		NullCheck(L_37);
		ConstructorInfo_t574 * L_40 = (ConstructorInfo_t574 *)VirtFuncInvoker1< ConstructorInfo_t574 *, TypeU5BU5D_t570* >::Invoke(73 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_37, L_38);
		V_2 = L_40;
		ConstructorInfo_t574 * L_41 = V_2;
		ObjectU5BU5D_t300* L_42 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 1));
		int64_t L_43 = DateTime_get_Ticks_m5129((&V_0), /*hidden argument*/NULL);
		int64_t L_44 = L_43;
		Object_t * L_45 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		ArrayElementTypeCheck (L_42, L_45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, 0)) = (Object_t *)L_45;
		InstanceDescriptor_t1900 * L_46 = (InstanceDescriptor_t1900 *)il2cpp_codegen_object_new (InstanceDescriptor_t1900_il2cpp_TypeInfo_var);
		InstanceDescriptor__ctor_m10519(L_46, L_41, (Object_t *)(Object_t *)L_42, /*hidden argument*/NULL);
		return L_46;
	}

IL_0121:
	{
		Object_t * L_47 = ___context;
		CultureInfo_t693 * L_48 = ___culture;
		Object_t * L_49 = ___value;
		Type_t * L_50 = ___destinationType;
		Object_t * L_51 = TypeConverter_ConvertTo_m10711(__this, L_47, L_48, L_49, L_50, /*hidden argument*/NULL);
		return L_51;
	}
}
// System.ComponentModel.DecimalConverter
#include "System_System_ComponentModel_DecimalConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.DecimalConverter
#include "System_System_ComponentModel_DecimalConverterMethodDeclarations.h"

// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"


// System.Boolean System.ComponentModel.DecimalConverter::get_SupportHex()
extern "C" bool DecimalConverter_get_SupportHex_m10475 (DecimalConverter_t1896 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.ComponentModel.DecimalConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* InstanceDescriptor_t1900_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool DecimalConverter_CanConvertTo_m10476 (DecimalConverter_t1896 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InstanceDescriptor_t1900_0_0_0_var = il2cpp_codegen_type_from_index(4284);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(InstanceDescriptor_t1900_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_2 = ___context;
		Type_t * L_3 = ___destinationType;
		bool L_4 = BaseNumberConverter_CanConvertTo_m10426(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.ComponentModel.DecimalConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern const Il2CppType* InstanceDescriptor_t1900_0_0_0_var;
extern const Il2CppType* Decimal_t698_0_0_0_var;
extern const Il2CppType* Int32U5BU5D_t1_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t698_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* InstanceDescriptor_t1900_il2cpp_TypeInfo_var;
extern "C" Object_t * DecimalConverter_ConvertTo_m10477 (DecimalConverter_t1896 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InstanceDescriptor_t1900_0_0_0_var = il2cpp_codegen_type_from_index(4284);
		Decimal_t698_0_0_0_var = il2cpp_codegen_type_from_index(991);
		Int32U5BU5D_t1_0_0_0_var = il2cpp_codegen_type_from_index(132);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Decimal_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(991);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		InstanceDescriptor_t1900_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4284);
		s_Il2CppMethodIntialized = true;
	}
	Decimal_t698  V_0 = {0};
	ConstructorInfo_t574 * V_1 = {0};
	{
		Type_t * L_0 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(InstanceDescriptor_t1900_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_005c;
		}
	}
	{
		Object_t * L_2 = ___value;
		if (!((Object_t *)IsInst(L_2, Decimal_t698_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		Object_t * L_3 = ___value;
		V_0 = ((*(Decimal_t698 *)((Decimal_t698 *)UnBox (L_3, Decimal_t698_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Decimal_t698_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_5 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 1));
		Type_t * L_6 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int32U5BU5D_t1_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_6);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, 0)) = (Type_t *)L_6;
		NullCheck(L_4);
		ConstructorInfo_t574 * L_7 = (ConstructorInfo_t574 *)VirtFuncInvoker1< ConstructorInfo_t574 *, TypeU5BU5D_t570* >::Invoke(73 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_4, L_5);
		V_1 = L_7;
		ConstructorInfo_t574 * L_8 = V_1;
		ObjectU5BU5D_t300* L_9 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 1));
		Decimal_t698  L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t698_il2cpp_TypeInfo_var);
		Int32U5BU5D_t1* L_11 = Decimal_GetBits_m5135(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		ArrayElementTypeCheck (L_9, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 0)) = (Object_t *)L_11;
		InstanceDescriptor_t1900 * L_12 = (InstanceDescriptor_t1900 *)il2cpp_codegen_object_new (InstanceDescriptor_t1900_il2cpp_TypeInfo_var);
		InstanceDescriptor__ctor_m10519(L_12, L_8, (Object_t *)(Object_t *)L_9, /*hidden argument*/NULL);
		return L_12;
	}

IL_005c:
	{
		Object_t * L_13 = ___context;
		CultureInfo_t693 * L_14 = ___culture;
		Object_t * L_15 = ___value;
		Type_t * L_16 = ___destinationType;
		Object_t * L_17 = BaseNumberConverter_ConvertTo_m10428(__this, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.String System.ComponentModel.DecimalConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern TypeInfo* Decimal_t698_il2cpp_TypeInfo_var;
extern "C" String_t* DecimalConverter_ConvertToString_m10478 (DecimalConverter_t1896 * __this, Object_t * ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Decimal_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(991);
		s_Il2CppMethodIntialized = true;
	}
	Decimal_t698  V_0 = {0};
	{
		Object_t * L_0 = ___value;
		V_0 = ((*(Decimal_t698 *)((Decimal_t698 *)UnBox (L_0, Decimal_t698_il2cpp_TypeInfo_var))));
		NumberFormatInfo_t1037 * L_1 = ___format;
		String_t* L_2 = Decimal_ToString_m5172((&V_0), (String_t*) &_stringLiteral2904, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object System.ComponentModel.DecimalConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern TypeInfo* Decimal_t698_il2cpp_TypeInfo_var;
extern "C" Object_t * DecimalConverter_ConvertFromString_m10479 (DecimalConverter_t1896 * __this, String_t* ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Decimal_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(991);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		NumberFormatInfo_t1037 * L_1 = ___format;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t698_il2cpp_TypeInfo_var);
		Decimal_t698  L_2 = Decimal_Parse_m9923(NULL /*static, unused*/, L_0, ((int32_t)167), L_1, /*hidden argument*/NULL);
		Decimal_t698  L_3 = L_2;
		Object_t * L_4 = Box(Decimal_t698_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.ComponentModel.DefaultEventAttribute
#include "System_System_ComponentModel_DefaultEventAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.DefaultEventAttribute
#include "System_System_ComponentModel_DefaultEventAttributeMethodDeclarations.h"



// System.Void System.ComponentModel.DefaultEventAttribute::.ctor(System.String)
extern "C" void DefaultEventAttribute__ctor_m5300 (DefaultEventAttribute_t1177 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___eventName_0 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.DefaultEventAttribute::.cctor()
extern TypeInfo* DefaultEventAttribute_t1177_il2cpp_TypeInfo_var;
extern "C" void DefaultEventAttribute__cctor_m10480 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultEventAttribute_t1177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2096);
		s_Il2CppMethodIntialized = true;
	}
	{
		DefaultEventAttribute_t1177 * L_0 = (DefaultEventAttribute_t1177 *)il2cpp_codegen_object_new (DefaultEventAttribute_t1177_il2cpp_TypeInfo_var);
		DefaultEventAttribute__ctor_m5300(L_0, (String_t*)NULL, /*hidden argument*/NULL);
		((DefaultEventAttribute_t1177_StaticFields*)DefaultEventAttribute_t1177_il2cpp_TypeInfo_var->static_fields)->___Default_1 = L_0;
		return;
	}
}
// System.Boolean System.ComponentModel.DefaultEventAttribute::Equals(System.Object)
extern TypeInfo* DefaultEventAttribute_t1177_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool DefaultEventAttribute_Equals_m10481 (DefaultEventAttribute_t1177 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultEventAttribute_t1177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2096);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		if (((DefaultEventAttribute_t1177 *)IsInst(L_0, DefaultEventAttribute_t1177_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___o;
		NullCheck(((DefaultEventAttribute_t1177 *)Castclass(L_1, DefaultEventAttribute_t1177_il2cpp_TypeInfo_var)));
		String_t* L_2 = (((DefaultEventAttribute_t1177 *)Castclass(L_1, DefaultEventAttribute_t1177_il2cpp_TypeInfo_var))->___eventName_0);
		String_t* L_3 = (__this->___eventName_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1295(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.ComponentModel.DefaultEventAttribute::GetHashCode()
extern "C" int32_t DefaultEventAttribute_GetHashCode_m10482 (DefaultEventAttribute_t1177 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Attribute_GetHashCode_m3289(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.ComponentModel.DefaultPropertyAttribute
#include "System_System_ComponentModel_DefaultPropertyAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.DefaultPropertyAttribute
#include "System_System_ComponentModel_DefaultPropertyAttributeMethodDeclarations.h"



// System.Void System.ComponentModel.DefaultPropertyAttribute::.ctor(System.String)
extern "C" void DefaultPropertyAttribute__ctor_m5289 (DefaultPropertyAttribute_t1174 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___property_name_0 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.DefaultPropertyAttribute::.cctor()
extern TypeInfo* DefaultPropertyAttribute_t1174_il2cpp_TypeInfo_var;
extern "C" void DefaultPropertyAttribute__cctor_m10483 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultPropertyAttribute_t1174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2092);
		s_Il2CppMethodIntialized = true;
	}
	{
		DefaultPropertyAttribute_t1174 * L_0 = (DefaultPropertyAttribute_t1174 *)il2cpp_codegen_object_new (DefaultPropertyAttribute_t1174_il2cpp_TypeInfo_var);
		DefaultPropertyAttribute__ctor_m5289(L_0, (String_t*)NULL, /*hidden argument*/NULL);
		((DefaultPropertyAttribute_t1174_StaticFields*)DefaultPropertyAttribute_t1174_il2cpp_TypeInfo_var->static_fields)->___Default_1 = L_0;
		return;
	}
}
// System.String System.ComponentModel.DefaultPropertyAttribute::get_Name()
extern "C" String_t* DefaultPropertyAttribute_get_Name_m10484 (DefaultPropertyAttribute_t1174 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___property_name_0);
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DefaultPropertyAttribute::Equals(System.Object)
extern TypeInfo* DefaultPropertyAttribute_t1174_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool DefaultPropertyAttribute_Equals_m10485 (DefaultPropertyAttribute_t1174 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultPropertyAttribute_t1174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2092);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		if (((DefaultPropertyAttribute_t1174 *)IsInst(L_0, DefaultPropertyAttribute_t1174_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___o;
		NullCheck(((DefaultPropertyAttribute_t1174 *)Castclass(L_1, DefaultPropertyAttribute_t1174_il2cpp_TypeInfo_var)));
		String_t* L_2 = DefaultPropertyAttribute_get_Name_m10484(((DefaultPropertyAttribute_t1174 *)Castclass(L_1, DefaultPropertyAttribute_t1174_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_3 = (__this->___property_name_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1295(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.ComponentModel.DefaultPropertyAttribute::GetHashCode()
extern "C" int32_t DefaultPropertyAttribute_GetHashCode_m10486 (DefaultPropertyAttribute_t1174 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Attribute_GetHashCode_m3289(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttributeMethodDeclarations.h"



// System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.Boolean)
extern TypeInfo* Boolean_t311_il2cpp_TypeInfo_var;
extern "C" void DefaultValueAttribute__ctor_m5304 (DefaultValueAttribute_t738 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		bool L_0 = ___value;
		bool L_1 = L_0;
		Object_t * L_2 = Box(Boolean_t311_il2cpp_TypeInfo_var, &L_1);
		__this->___DefaultValue_0 = L_2;
		return;
	}
}
// System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.Int32)
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern "C" void DefaultValueAttribute__ctor_m5305 (DefaultValueAttribute_t738 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_1);
		__this->___DefaultValue_0 = L_2;
		return;
	}
}
// System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.Object)
extern "C" void DefaultValueAttribute__ctor_m3314 (DefaultValueAttribute_t738 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.String)
extern "C" void DefaultValueAttribute__ctor_m5297 (DefaultValueAttribute_t738 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object System.ComponentModel.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m10487 (DefaultValueAttribute_t738 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DefaultValueAttribute::Equals(System.Object)
extern TypeInfo* DefaultValueAttribute_t738_il2cpp_TypeInfo_var;
extern "C" bool DefaultValueAttribute_Equals_m10488 (DefaultValueAttribute_t738 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1071);
		s_Il2CppMethodIntialized = true;
	}
	DefaultValueAttribute_t738 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t738 *)IsInst(L_0, DefaultValueAttribute_t738_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t738 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t738 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.ComponentModel.DefaultValueAttribute::get_Value() */, L_3);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t738 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.ComponentModel.DefaultValueAttribute::get_Value() */, L_6);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
// System.Int32 System.ComponentModel.DefaultValueAttribute::GetHashCode()
extern "C" int32_t DefaultValueAttribute_GetHashCode_m10489 (DefaultValueAttribute_t738 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m3289(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
// System.ComponentModel.DescriptionAttribute
#include "System_System_ComponentModel_DescriptionAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.DescriptionAttribute
#include "System_System_ComponentModel_DescriptionAttributeMethodDeclarations.h"



// System.Void System.ComponentModel.DescriptionAttribute::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void DescriptionAttribute__ctor_m10490 (DescriptionAttribute_t958 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___desc_0 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.DescriptionAttribute::.ctor(System.String)
extern "C" void DescriptionAttribute__ctor_m5065 (DescriptionAttribute_t958 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___desc_0 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.DescriptionAttribute::.cctor()
extern TypeInfo* DescriptionAttribute_t958_il2cpp_TypeInfo_var;
extern "C" void DescriptionAttribute__cctor_m10491 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DescriptionAttribute_t958_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1985);
		s_Il2CppMethodIntialized = true;
	}
	{
		DescriptionAttribute_t958 * L_0 = (DescriptionAttribute_t958 *)il2cpp_codegen_object_new (DescriptionAttribute_t958_il2cpp_TypeInfo_var);
		DescriptionAttribute__ctor_m10490(L_0, /*hidden argument*/NULL);
		((DescriptionAttribute_t958_StaticFields*)DescriptionAttribute_t958_il2cpp_TypeInfo_var->static_fields)->___Default_1 = L_0;
		return;
	}
}
// System.String System.ComponentModel.DescriptionAttribute::get_Description()
extern "C" String_t* DescriptionAttribute_get_Description_m10492 (DescriptionAttribute_t958 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = DescriptionAttribute_get_DescriptionValue_m10493(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.ComponentModel.DescriptionAttribute::get_DescriptionValue()
extern "C" String_t* DescriptionAttribute_get_DescriptionValue_m10493 (DescriptionAttribute_t958 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___desc_0);
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DescriptionAttribute::Equals(System.Object)
extern TypeInfo* DescriptionAttribute_t958_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool DescriptionAttribute_Equals_m5405 (DescriptionAttribute_t958 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DescriptionAttribute_t958_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1985);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (((DescriptionAttribute_t958 *)IsInst(L_0, DescriptionAttribute_t958_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___obj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(DescriptionAttribute_t958 *)__this))))
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_2 = ___obj;
		NullCheck(((DescriptionAttribute_t958 *)Castclass(L_2, DescriptionAttribute_t958_il2cpp_TypeInfo_var)));
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.ComponentModel.DescriptionAttribute::get_Description() */, ((DescriptionAttribute_t958 *)Castclass(L_2, DescriptionAttribute_t958_il2cpp_TypeInfo_var)));
		String_t* L_4 = (__this->___desc_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1295(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 System.ComponentModel.DescriptionAttribute::GetHashCode()
extern "C" int32_t DescriptionAttribute_GetHashCode_m5406 (DescriptionAttribute_t958 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___desc_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Boolean System.ComponentModel.DescriptionAttribute::IsDefaultAttribute()
extern TypeInfo* DescriptionAttribute_t958_il2cpp_TypeInfo_var;
extern "C" bool DescriptionAttribute_IsDefaultAttribute_m5407 (DescriptionAttribute_t958 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DescriptionAttribute_t958_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1985);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DescriptionAttribute_t958_il2cpp_TypeInfo_var);
		DescriptionAttribute_t958 * L_0 = ((DescriptionAttribute_t958_StaticFields*)DescriptionAttribute_t958_il2cpp_TypeInfo_var->static_fields)->___Default_1;
		return ((((Object_t*)(DescriptionAttribute_t958 *)__this) == ((Object_t*)(DescriptionAttribute_t958 *)L_0))? 1 : 0);
	}
}
// System.ComponentModel.DesignerAttribute
#include "System_System_ComponentModel_DesignerAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.DesignerAttribute
#include "System_System_ComponentModel_DesignerAttributeMethodDeclarations.h"



// System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String,System.Type)
extern "C" void DesignerAttribute__ctor_m10494 (DesignerAttribute_t1182 * __this, String_t* ___designerTypeName, Type_t * ___designerBaseType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___designerTypeName;
		Type_t * L_1 = ___designerBaseType;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_1);
		DesignerAttribute__ctor_m5311(__this, L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String,System.String)
extern TypeInfo* NullReferenceException_t671_il2cpp_TypeInfo_var;
extern "C" void DesignerAttribute__ctor_m5311 (DesignerAttribute_t1182 * __this, String_t* ___designerTypeName, String_t* ___designerBaseTypeName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(881);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___designerTypeName;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		NullReferenceException_t671 * L_1 = (NullReferenceException_t671 *)il2cpp_codegen_object_new (NullReferenceException_t671_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m4997(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___designerTypeName;
		__this->___name_0 = L_2;
		String_t* L_3 = ___designerBaseTypeName;
		__this->___basetypename_1 = L_3;
		return;
	}
}
// System.String System.ComponentModel.DesignerAttribute::get_DesignerBaseTypeName()
extern "C" String_t* DesignerAttribute_get_DesignerBaseTypeName_m10495 (DesignerAttribute_t1182 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___basetypename_1);
		return L_0;
	}
}
// System.String System.ComponentModel.DesignerAttribute::get_DesignerTypeName()
extern "C" String_t* DesignerAttribute_get_DesignerTypeName_m10496 (DesignerAttribute_t1182 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_0);
		return L_0;
	}
}
// System.Object System.ComponentModel.DesignerAttribute::get_TypeId()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * DesignerAttribute_get_TypeId_m10497 (DesignerAttribute_t1182 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		String_t* L_0 = (__this->___basetypename_1);
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_m3182(L_1, ((int32_t)44), /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		String_t* L_6 = String_Substring_m1371(L_4, 0, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0020:
	{
		Type_t * L_7 = Object_GetType_m1416(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_7);
		String_t* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1269(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Boolean System.ComponentModel.DesignerAttribute::Equals(System.Object)
extern TypeInfo* DesignerAttribute_t1182_il2cpp_TypeInfo_var;
extern "C" bool DesignerAttribute_Equals_m10498 (DesignerAttribute_t1182 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DesignerAttribute_t1182_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2105);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___obj;
		if (((DesignerAttribute_t1182 *)IsInst(L_0, DesignerAttribute_t1182_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___obj;
		NullCheck(((DesignerAttribute_t1182 *)Castclass(L_1, DesignerAttribute_t1182_il2cpp_TypeInfo_var)));
		String_t* L_2 = DesignerAttribute_get_DesignerBaseTypeName_m10495(((DesignerAttribute_t1182 *)Castclass(L_1, DesignerAttribute_t1182_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_3 = (__this->___basetypename_1);
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(25 /* System.Boolean System.String::Equals(System.String) */, L_2, L_3);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		Object_t * L_5 = ___obj;
		NullCheck(((DesignerAttribute_t1182 *)Castclass(L_5, DesignerAttribute_t1182_il2cpp_TypeInfo_var)));
		String_t* L_6 = DesignerAttribute_get_DesignerTypeName_m10496(((DesignerAttribute_t1182 *)Castclass(L_5, DesignerAttribute_t1182_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_7 = (__this->___name_0);
		NullCheck(L_6);
		bool L_8 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(25 /* System.Boolean System.String::Equals(System.String) */, L_6, L_7);
		G_B5_0 = ((int32_t)(L_8));
		goto IL_0041;
	}

IL_0040:
	{
		G_B5_0 = 0;
	}

IL_0041:
	{
		return G_B5_0;
	}
}
// System.Int32 System.ComponentModel.DesignerAttribute::GetHashCode()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" int32_t DesignerAttribute_GetHashCode_m10499 (DesignerAttribute_t1182 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___name_0);
		String_t* L_1 = (__this->___basetypename_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m1269(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_2);
		return L_3;
	}
}
// System.ComponentModel.DesignerCategoryAttribute
#include "System_System_ComponentModel_DesignerCategoryAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.DesignerCategoryAttribute
#include "System_System_ComponentModel_DesignerCategoryAttributeMethodDeclarations.h"



// System.Void System.ComponentModel.DesignerCategoryAttribute::.ctor(System.String)
extern "C" void DesignerCategoryAttribute__ctor_m10500 (DesignerCategoryAttribute_t1897 * __this, String_t* ___category, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___category;
		__this->___category_0 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.DesignerCategoryAttribute::.cctor()
extern TypeInfo* DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void DesignerCategoryAttribute__cctor_m10501 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4287);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		DesignerCategoryAttribute_t1897 * L_0 = (DesignerCategoryAttribute_t1897 *)il2cpp_codegen_object_new (DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var);
		DesignerCategoryAttribute__ctor_m10500(L_0, (String_t*) &_stringLiteral2912, /*hidden argument*/NULL);
		((DesignerCategoryAttribute_t1897_StaticFields*)DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var->static_fields)->___Component_1 = L_0;
		DesignerCategoryAttribute_t1897 * L_1 = (DesignerCategoryAttribute_t1897 *)il2cpp_codegen_object_new (DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var);
		DesignerCategoryAttribute__ctor_m10500(L_1, (String_t*) &_stringLiteral2913, /*hidden argument*/NULL);
		((DesignerCategoryAttribute_t1897_StaticFields*)DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var->static_fields)->___Form_2 = L_1;
		DesignerCategoryAttribute_t1897 * L_2 = (DesignerCategoryAttribute_t1897 *)il2cpp_codegen_object_new (DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var);
		DesignerCategoryAttribute__ctor_m10500(L_2, (String_t*) &_stringLiteral2914, /*hidden argument*/NULL);
		((DesignerCategoryAttribute_t1897_StaticFields*)DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var->static_fields)->___Generic_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		DesignerCategoryAttribute_t1897 * L_4 = (DesignerCategoryAttribute_t1897 *)il2cpp_codegen_object_new (DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var);
		DesignerCategoryAttribute__ctor_m10500(L_4, L_3, /*hidden argument*/NULL);
		((DesignerCategoryAttribute_t1897_StaticFields*)DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var->static_fields)->___Default_4 = L_4;
		return;
	}
}
// System.Object System.ComponentModel.DesignerCategoryAttribute::get_TypeId()
extern "C" Object_t * DesignerCategoryAttribute_get_TypeId_m10502 (DesignerCategoryAttribute_t1897 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = Object_GetType_m1416(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.ComponentModel.DesignerCategoryAttribute::get_Category()
extern "C" String_t* DesignerCategoryAttribute_get_Category_m10503 (DesignerCategoryAttribute_t1897 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___category_0);
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DesignerCategoryAttribute::Equals(System.Object)
extern TypeInfo* DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool DesignerCategoryAttribute_Equals_m10504 (DesignerCategoryAttribute_t1897 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4287);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (((DesignerCategoryAttribute_t1897 *)IsInst(L_0, DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___obj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(DesignerCategoryAttribute_t1897 *)__this))))
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_2 = ___obj;
		NullCheck(((DesignerCategoryAttribute_t1897 *)Castclass(L_2, DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var)));
		String_t* L_3 = DesignerCategoryAttribute_get_Category_m10503(((DesignerCategoryAttribute_t1897 *)Castclass(L_2, DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_4 = (__this->___category_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1295(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 System.ComponentModel.DesignerCategoryAttribute::GetHashCode()
extern "C" int32_t DesignerCategoryAttribute_GetHashCode_m10505 (DesignerCategoryAttribute_t1897 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___category_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Boolean System.ComponentModel.DesignerCategoryAttribute::IsDefaultAttribute()
extern TypeInfo* DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool DesignerCategoryAttribute_IsDefaultAttribute_m10506 (DesignerCategoryAttribute_t1897 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4287);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___category_0);
		IL2CPP_RUNTIME_CLASS_INIT(DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var);
		DesignerCategoryAttribute_t1897 * L_1 = ((DesignerCategoryAttribute_t1897_StaticFields*)DesignerCategoryAttribute_t1897_il2cpp_TypeInfo_var->static_fields)->___Default_4;
		NullCheck(L_1);
		String_t* L_2 = DesignerCategoryAttribute_get_Category_m10503(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1295(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.ComponentModel.DesignerSerializationVisibilityAttribute
#include "System_System_ComponentModel_DesignerSerializationVisibility.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.DesignerSerializationVisibilityAttribute
#include "System_System_ComponentModel_DesignerSerializationVisibilityMethodDeclarations.h"

// System.ComponentModel.DesignerSerializationVisibility
#include "System_System_ComponentModel_DesignerSerializationVisibility_0.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"


// System.Void System.ComponentModel.DesignerSerializationVisibilityAttribute::.ctor(System.ComponentModel.DesignerSerializationVisibility)
extern "C" void DesignerSerializationVisibilityAttribute__ctor_m5306 (DesignerSerializationVisibilityAttribute_t1181 * __this, int32_t ___vis, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___vis;
		__this->___visibility_0 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.DesignerSerializationVisibilityAttribute::.cctor()
extern TypeInfo* DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var;
extern "C" void DesignerSerializationVisibilityAttribute__cctor_m10507 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2102);
		s_Il2CppMethodIntialized = true;
	}
	{
		DesignerSerializationVisibilityAttribute_t1181 * L_0 = (DesignerSerializationVisibilityAttribute_t1181 *)il2cpp_codegen_object_new (DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var);
		DesignerSerializationVisibilityAttribute__ctor_m5306(L_0, 1, /*hidden argument*/NULL);
		((DesignerSerializationVisibilityAttribute_t1181_StaticFields*)DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var->static_fields)->___Default_1 = L_0;
		DesignerSerializationVisibilityAttribute_t1181 * L_1 = (DesignerSerializationVisibilityAttribute_t1181 *)il2cpp_codegen_object_new (DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var);
		DesignerSerializationVisibilityAttribute__ctor_m5306(L_1, 2, /*hidden argument*/NULL);
		((DesignerSerializationVisibilityAttribute_t1181_StaticFields*)DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var->static_fields)->___Content_2 = L_1;
		DesignerSerializationVisibilityAttribute_t1181 * L_2 = (DesignerSerializationVisibilityAttribute_t1181 *)il2cpp_codegen_object_new (DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var);
		DesignerSerializationVisibilityAttribute__ctor_m5306(L_2, 0, /*hidden argument*/NULL);
		((DesignerSerializationVisibilityAttribute_t1181_StaticFields*)DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var->static_fields)->___Hidden_3 = L_2;
		DesignerSerializationVisibilityAttribute_t1181 * L_3 = (DesignerSerializationVisibilityAttribute_t1181 *)il2cpp_codegen_object_new (DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var);
		DesignerSerializationVisibilityAttribute__ctor_m5306(L_3, 1, /*hidden argument*/NULL);
		((DesignerSerializationVisibilityAttribute_t1181_StaticFields*)DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var->static_fields)->___Visible_4 = L_3;
		return;
	}
}
// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::get_Visibility()
extern "C" int32_t DesignerSerializationVisibilityAttribute_get_Visibility_m10508 (DesignerSerializationVisibilityAttribute_t1181 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___visibility_0);
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DesignerSerializationVisibilityAttribute::Equals(System.Object)
extern TypeInfo* DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var;
extern "C" bool DesignerSerializationVisibilityAttribute_Equals_m10509 (DesignerSerializationVisibilityAttribute_t1181 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2102);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (((DesignerSerializationVisibilityAttribute_t1181 *)IsInst(L_0, DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___obj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(DesignerSerializationVisibilityAttribute_t1181 *)__this))))
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_2 = ___obj;
		NullCheck(((DesignerSerializationVisibilityAttribute_t1181 *)Castclass(L_2, DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var)));
		int32_t L_3 = DesignerSerializationVisibilityAttribute_get_Visibility_m10508(((DesignerSerializationVisibilityAttribute_t1181 *)Castclass(L_2, DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		int32_t L_4 = (__this->___visibility_0);
		return ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}
}
// System.Int32 System.ComponentModel.DesignerSerializationVisibilityAttribute::GetHashCode()
extern TypeInfo* DesignerSerializationVisibility_t1898_il2cpp_TypeInfo_var;
extern "C" int32_t DesignerSerializationVisibilityAttribute_GetHashCode_m10510 (DesignerSerializationVisibilityAttribute_t1181 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DesignerSerializationVisibility_t1898_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___visibility_0);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(DesignerSerializationVisibility_t1898_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Enum::GetHashCode() */, L_2);
		return L_3;
	}
}
// System.Boolean System.ComponentModel.DesignerSerializationVisibilityAttribute::IsDefaultAttribute()
extern TypeInfo* DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var;
extern "C" bool DesignerSerializationVisibilityAttribute_IsDefaultAttribute_m10511 (DesignerSerializationVisibilityAttribute_t1181 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2102);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___visibility_0);
		IL2CPP_RUNTIME_CLASS_INIT(DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var);
		DesignerSerializationVisibilityAttribute_t1181 * L_1 = ((DesignerSerializationVisibilityAttribute_t1181_StaticFields*)DesignerSerializationVisibilityAttribute_t1181_il2cpp_TypeInfo_var->static_fields)->___Default_1;
		NullCheck(L_1);
		int32_t L_2 = DesignerSerializationVisibilityAttribute_get_Visibility_m10508(L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.DesignerSerializationVisibility
#include "System_System_ComponentModel_DesignerSerializationVisibility_0MethodDeclarations.h"



// System.ComponentModel.DesignOnlyAttribute
#include "System_System_ComponentModel_DesignOnlyAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.DesignOnlyAttribute
#include "System_System_ComponentModel_DesignOnlyAttributeMethodDeclarations.h"



// System.Void System.ComponentModel.DesignOnlyAttribute::.ctor(System.Boolean)
extern "C" void DesignOnlyAttribute__ctor_m5359 (DesignOnlyAttribute_t1195 * __this, bool ___design_only, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		bool L_0 = ___design_only;
		__this->___design_only_0 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.DesignOnlyAttribute::.cctor()
extern TypeInfo* DesignOnlyAttribute_t1195_il2cpp_TypeInfo_var;
extern "C" void DesignOnlyAttribute__cctor_m10512 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DesignOnlyAttribute_t1195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2113);
		s_Il2CppMethodIntialized = true;
	}
	{
		DesignOnlyAttribute_t1195 * L_0 = (DesignOnlyAttribute_t1195 *)il2cpp_codegen_object_new (DesignOnlyAttribute_t1195_il2cpp_TypeInfo_var);
		DesignOnlyAttribute__ctor_m5359(L_0, 0, /*hidden argument*/NULL);
		((DesignOnlyAttribute_t1195_StaticFields*)DesignOnlyAttribute_t1195_il2cpp_TypeInfo_var->static_fields)->___Default_1 = L_0;
		DesignOnlyAttribute_t1195 * L_1 = (DesignOnlyAttribute_t1195 *)il2cpp_codegen_object_new (DesignOnlyAttribute_t1195_il2cpp_TypeInfo_var);
		DesignOnlyAttribute__ctor_m5359(L_1, 0, /*hidden argument*/NULL);
		((DesignOnlyAttribute_t1195_StaticFields*)DesignOnlyAttribute_t1195_il2cpp_TypeInfo_var->static_fields)->___No_2 = L_1;
		DesignOnlyAttribute_t1195 * L_2 = (DesignOnlyAttribute_t1195 *)il2cpp_codegen_object_new (DesignOnlyAttribute_t1195_il2cpp_TypeInfo_var);
		DesignOnlyAttribute__ctor_m5359(L_2, 1, /*hidden argument*/NULL);
		((DesignOnlyAttribute_t1195_StaticFields*)DesignOnlyAttribute_t1195_il2cpp_TypeInfo_var->static_fields)->___Yes_3 = L_2;
		return;
	}
}
// System.Boolean System.ComponentModel.DesignOnlyAttribute::get_IsDesignOnly()
extern "C" bool DesignOnlyAttribute_get_IsDesignOnly_m10513 (DesignOnlyAttribute_t1195 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___design_only_0);
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DesignOnlyAttribute::Equals(System.Object)
extern TypeInfo* DesignOnlyAttribute_t1195_il2cpp_TypeInfo_var;
extern "C" bool DesignOnlyAttribute_Equals_m10514 (DesignOnlyAttribute_t1195 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DesignOnlyAttribute_t1195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2113);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (((DesignOnlyAttribute_t1195 *)IsInst(L_0, DesignOnlyAttribute_t1195_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___obj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(DesignOnlyAttribute_t1195 *)__this))))
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_2 = ___obj;
		NullCheck(((DesignOnlyAttribute_t1195 *)Castclass(L_2, DesignOnlyAttribute_t1195_il2cpp_TypeInfo_var)));
		bool L_3 = DesignOnlyAttribute_get_IsDesignOnly_m10513(((DesignOnlyAttribute_t1195 *)Castclass(L_2, DesignOnlyAttribute_t1195_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		bool L_4 = (__this->___design_only_0);
		return ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}
}
// System.Int32 System.ComponentModel.DesignOnlyAttribute::GetHashCode()
extern "C" int32_t DesignOnlyAttribute_GetHashCode_m10515 (DesignOnlyAttribute_t1195 * __this, const MethodInfo* method)
{
	{
		bool* L_0 = &(__this->___design_only_0);
		int32_t L_1 = Boolean_GetHashCode_m12749(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.ComponentModel.DesignOnlyAttribute::IsDefaultAttribute()
extern TypeInfo* DesignOnlyAttribute_t1195_il2cpp_TypeInfo_var;
extern "C" bool DesignOnlyAttribute_IsDefaultAttribute_m10516 (DesignOnlyAttribute_t1195 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DesignOnlyAttribute_t1195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2113);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___design_only_0);
		IL2CPP_RUNTIME_CLASS_INIT(DesignOnlyAttribute_t1195_il2cpp_TypeInfo_var);
		DesignOnlyAttribute_t1195 * L_1 = ((DesignOnlyAttribute_t1195_StaticFields*)DesignOnlyAttribute_t1195_il2cpp_TypeInfo_var->static_fields)->___Default_1;
		NullCheck(L_1);
		bool L_2 = DesignOnlyAttribute_get_IsDesignOnly_m10513(L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.ComponentModel.Design.Serialization.DesignerSerializerAttribute
#include "System_System_ComponentModel_Design_Serialization_DesignerSe.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.Design.Serialization.DesignerSerializerAttribute
#include "System_System_ComponentModel_Design_Serialization_DesignerSeMethodDeclarations.h"



// System.Void System.ComponentModel.Design.Serialization.DesignerSerializerAttribute::.ctor(System.String,System.String)
extern "C" void DesignerSerializerAttribute__ctor_m10517 (DesignerSerializerAttribute_t1899 * __this, String_t* ___serializerTypeName, String_t* ___baseSerializerTypeName, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___serializerTypeName;
		__this->___serializerTypeName_0 = L_0;
		String_t* L_1 = ___baseSerializerTypeName;
		__this->___baseSerializerTypeName_1 = L_1;
		return;
	}
}
// System.Object System.ComponentModel.Design.Serialization.DesignerSerializerAttribute::get_TypeId()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * DesignerSerializerAttribute_get_TypeId_m10518 (DesignerSerializerAttribute_t1899 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_1 = (__this->___baseSerializerTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m1269(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"


// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection)
extern "C" void InstanceDescriptor__ctor_m10519 (InstanceDescriptor_t1900 * __this, MemberInfo_t * ___member, Object_t * ___arguments, const MethodInfo* method)
{
	{
		MemberInfo_t * L_0 = ___member;
		Object_t * L_1 = ___arguments;
		InstanceDescriptor__ctor_m10520(__this, L_0, L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection,System.Boolean)
extern "C" void InstanceDescriptor__ctor_m10520 (InstanceDescriptor_t1900 * __this, MemberInfo_t * ___member, Object_t * ___arguments, bool ___isComplete, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		bool L_0 = ___isComplete;
		__this->___isComplete_2 = L_0;
		MemberInfo_t * L_1 = ___member;
		Object_t * L_2 = ___arguments;
		InstanceDescriptor_ValidateMember_m10521(__this, L_1, L_2, /*hidden argument*/NULL);
		MemberInfo_t * L_3 = ___member;
		__this->___member_0 = L_3;
		Object_t * L_4 = ___arguments;
		__this->___arguments_1 = L_4;
		return;
	}
}
// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::ValidateMember(System.Reflection.MemberInfo,System.Collections.ICollection)
extern TypeInfo* ConstructorInfo_t574_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern TypeInfo* MethodInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* FieldInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInfo_t_il2cpp_TypeInfo_var;
extern "C" void InstanceDescriptor_ValidateMember_m10521 (InstanceDescriptor_t1900 * __this, MemberInfo_t * ___member, Object_t * ___arguments, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructorInfo_t574_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1025);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		MethodInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1606);
		FieldInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1015);
		PropertyInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(585);
		s_Il2CppMethodIntialized = true;
	}
	ConstructorInfo_t574 * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	FieldInfo_t * V_2 = {0};
	PropertyInfo_t * V_3 = {0};
	MethodInfo_t * V_4 = {0};
	int32_t V_5 = {0};
	{
		MemberInfo_t * L_0 = ___member;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		MemberInfo_t * L_1 = ___member;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_1);
		V_5 = L_2;
		int32_t L_3 = V_5;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_003e;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_0028;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 2)
		{
			goto IL_0028;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 3)
		{
			goto IL_00ee;
		}
	}

IL_0028:
	{
		int32_t L_4 = V_5;
		if ((((int32_t)L_4) == ((int32_t)8)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_5 = V_5;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)16))))
		{
			goto IL_012c;
		}
	}
	{
		goto IL_016d;
	}

IL_003e:
	{
		MemberInfo_t * L_6 = ___member;
		V_0 = ((ConstructorInfo_t574 *)Castclass(L_6, ConstructorInfo_t574_il2cpp_TypeInfo_var));
		Object_t * L_7 = ___arguments;
		if (L_7)
		{
			goto IL_0063;
		}
	}
	{
		ConstructorInfo_t574 * L_8 = V_0;
		NullCheck(L_8);
		ParameterInfoU5BU5D_t718* L_9 = (ParameterInfoU5BU5D_t718*)VirtFuncInvoker0< ParameterInfoU5BU5D_t718* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_8);
		NullCheck(L_9);
		if (!(((int32_t)(((Array_t *)L_9)->max_length))))
		{
			goto IL_0063;
		}
	}
	{
		ArgumentException_t356 * L_10 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_10, (String_t*) &_stringLiteral2915, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0063:
	{
		Object_t * L_11 = ___arguments;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t793_il2cpp_TypeInfo_var, L_11);
		ConstructorInfo_t574 * L_13 = V_0;
		NullCheck(L_13);
		ParameterInfoU5BU5D_t718* L_14 = (ParameterInfoU5BU5D_t718*)VirtFuncInvoker0< ParameterInfoU5BU5D_t718* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_13);
		NullCheck(L_14);
		if ((((int32_t)L_12) == ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0081;
		}
	}
	{
		ArgumentException_t356 * L_15 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_15, (String_t*) &_stringLiteral2915, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0081:
	{
		goto IL_016d;
	}

IL_0086:
	{
		MemberInfo_t * L_16 = ___member;
		V_1 = ((MethodInfo_t *)Castclass(L_16, MethodInfo_t_il2cpp_TypeInfo_var));
		MethodInfo_t * L_17 = V_1;
		NullCheck(L_17);
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_17);
		if (L_18)
		{
			goto IL_00a8;
		}
	}
	{
		ArgumentException_t356 * L_19 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6326(L_19, (String_t*) &_stringLiteral2916, (String_t*) &_stringLiteral2917, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_00a8:
	{
		Object_t * L_20 = ___arguments;
		if (L_20)
		{
			goto IL_00cb;
		}
	}
	{
		MethodInfo_t * L_21 = V_1;
		NullCheck(L_21);
		ParameterInfoU5BU5D_t718* L_22 = (ParameterInfoU5BU5D_t718*)VirtFuncInvoker0< ParameterInfoU5BU5D_t718* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_21);
		NullCheck(L_22);
		if (!(((int32_t)(((Array_t *)L_22)->max_length))))
		{
			goto IL_00cb;
		}
	}
	{
		ArgumentException_t356 * L_23 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6326(L_23, (String_t*) &_stringLiteral2918, (String_t*) &_stringLiteral2919, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_00cb:
	{
		Object_t * L_24 = ___arguments;
		NullCheck(L_24);
		int32_t L_25 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t793_il2cpp_TypeInfo_var, L_24);
		MethodInfo_t * L_26 = V_1;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t718* L_27 = (ParameterInfoU5BU5D_t718*)VirtFuncInvoker0< ParameterInfoU5BU5D_t718* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		NullCheck(L_27);
		if ((((int32_t)L_25) == ((int32_t)(((int32_t)(((Array_t *)L_27)->max_length))))))
		{
			goto IL_00e9;
		}
	}
	{
		ArgumentException_t356 * L_28 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_28, (String_t*) &_stringLiteral2918, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_28);
	}

IL_00e9:
	{
		goto IL_016d;
	}

IL_00ee:
	{
		MemberInfo_t * L_29 = ___member;
		V_2 = ((FieldInfo_t *)Castclass(L_29, FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t * L_30 = V_2;
		NullCheck(L_30);
		bool L_31 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, L_30);
		if (L_31)
		{
			goto IL_010b;
		}
	}
	{
		ArgumentException_t356 * L_32 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_32, (String_t*) &_stringLiteral2920, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_32);
	}

IL_010b:
	{
		Object_t * L_33 = ___arguments;
		if (!L_33)
		{
			goto IL_0127;
		}
	}
	{
		Object_t * L_34 = ___arguments;
		NullCheck(L_34);
		int32_t L_35 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t793_il2cpp_TypeInfo_var, L_34);
		if (!L_35)
		{
			goto IL_0127;
		}
	}
	{
		ArgumentException_t356 * L_36 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_36, (String_t*) &_stringLiteral2921, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_0127:
	{
		goto IL_016d;
	}

IL_012c:
	{
		MemberInfo_t * L_37 = ___member;
		V_3 = ((PropertyInfo_t *)Castclass(L_37, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_38 = V_3;
		NullCheck(L_38);
		bool L_39 = (bool)VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_38);
		if (L_39)
		{
			goto IL_0149;
		}
	}
	{
		ArgumentException_t356 * L_40 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_40, (String_t*) &_stringLiteral2922, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_40);
	}

IL_0149:
	{
		PropertyInfo_t * L_41 = V_3;
		NullCheck(L_41);
		MethodInfo_t * L_42 = (MethodInfo_t *)VirtFuncInvoker0< MethodInfo_t * >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod() */, L_41);
		V_4 = L_42;
		MethodInfo_t * L_43 = V_4;
		NullCheck(L_43);
		bool L_44 = (bool)VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_43);
		if (L_44)
		{
			goto IL_0168;
		}
	}
	{
		ArgumentException_t356 * L_45 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_45, (String_t*) &_stringLiteral2920, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_45);
	}

IL_0168:
	{
		goto IL_016d;
	}

IL_016d:
	{
		return;
	}
}
// System.Object System.ComponentModel.Design.Serialization.InstanceDescriptor::Invoke()
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructorInfo_t574_il2cpp_TypeInfo_var;
extern TypeInfo* MethodInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* FieldInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInfo_t_il2cpp_TypeInfo_var;
extern "C" Object_t * InstanceDescriptor_Invoke_m10522 (InstanceDescriptor_t1900 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		ConstructorInfo_t574_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1025);
		MethodInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1606);
		FieldInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1015);
		PropertyInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(585);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t300* V_0 = {0};
	ConstructorInfo_t574 * V_1 = {0};
	MethodInfo_t * V_2 = {0};
	FieldInfo_t * V_3 = {0};
	PropertyInfo_t * V_4 = {0};
	int32_t V_5 = {0};
	{
		MemberInfo_t * L_0 = (__this->___member_0);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return NULL;
	}

IL_000d:
	{
		Object_t * L_1 = (__this->___arguments_1);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 0));
		goto IL_0042;
	}

IL_0024:
	{
		Object_t * L_2 = (__this->___arguments_1);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t793_il2cpp_TypeInfo_var, L_2);
		V_0 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, L_3));
		Object_t * L_4 = (__this->___arguments_1);
		ObjectU5BU5D_t300* L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t793_il2cpp_TypeInfo_var, L_4, (Array_t *)(Array_t *)L_5, 0);
	}

IL_0042:
	{
		MemberInfo_t * L_6 = (__this->___member_0);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_6);
		V_5 = L_7;
		int32_t L_8 = V_5;
		if (((int32_t)((int32_t)L_8-(int32_t)1)) == 0)
		{
			goto IL_007e;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)1)) == 1)
		{
			goto IL_0068;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)1)) == 2)
		{
			goto IL_0068;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)1)) == 3)
		{
			goto IL_00a7;
		}
	}

IL_0068:
	{
		int32_t L_9 = V_5;
		if ((((int32_t)L_9) == ((int32_t)8)))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_10 = V_5;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)16))))
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00d2;
	}

IL_007e:
	{
		MemberInfo_t * L_11 = (__this->___member_0);
		V_1 = ((ConstructorInfo_t574 *)Castclass(L_11, ConstructorInfo_t574_il2cpp_TypeInfo_var));
		ConstructorInfo_t574 * L_12 = V_1;
		ObjectU5BU5D_t300* L_13 = V_0;
		NullCheck(L_12);
		Object_t * L_14 = ConstructorInfo_Invoke_m3265(L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0092:
	{
		MemberInfo_t * L_15 = (__this->___member_0);
		V_2 = ((MethodInfo_t *)Castclass(L_15, MethodInfo_t_il2cpp_TypeInfo_var));
		MethodInfo_t * L_16 = V_2;
		ObjectU5BU5D_t300* L_17 = V_0;
		NullCheck(L_16);
		Object_t * L_18 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t300* >::Invoke(17 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_16, NULL, L_17);
		return L_18;
	}

IL_00a7:
	{
		MemberInfo_t * L_19 = (__this->___member_0);
		V_3 = ((FieldInfo_t *)Castclass(L_19, FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t * L_20 = V_3;
		NullCheck(L_20);
		Object_t * L_21 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_20, NULL);
		return L_21;
	}

IL_00bb:
	{
		MemberInfo_t * L_22 = (__this->___member_0);
		V_4 = ((PropertyInfo_t *)Castclass(L_22, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_23 = V_4;
		ObjectU5BU5D_t300* L_24 = V_0;
		NullCheck(L_23);
		Object_t * L_25 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t300* >::Invoke(23 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_23, NULL, L_24);
		return L_25;
	}

IL_00d2:
	{
		return NULL;
	}
}
// System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
#include "System_System_ComponentModel_Design_Serialization_RootDesign.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
#include "System_System_ComponentModel_Design_Serialization_RootDesignMethodDeclarations.h"



// System.Void System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::.ctor(System.String,System.String,System.Boolean)
extern "C" void RootDesignerSerializerAttribute__ctor_m10523 (RootDesignerSerializerAttribute_t1901 * __this, String_t* ___serializerTypeName, String_t* ___baseSerializerTypeName, bool ___reloadable, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___serializerTypeName;
		__this->___serializer_0 = L_0;
		String_t* L_1 = ___baseSerializerTypeName;
		__this->___baseserializer_1 = L_1;
		bool L_2 = ___reloadable;
		__this->___reload_2 = L_2;
		return;
	}
}
// System.Object System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::get_TypeId()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * RootDesignerSerializerAttribute_get_TypeId_m10524 (RootDesignerSerializerAttribute_t1901 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_1 = (__this->___baseserializer_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m1269(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.ComponentModel.DesignTimeVisibleAttribute
#include "System_System_ComponentModel_DesignTimeVisibleAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.DesignTimeVisibleAttribute
#include "System_System_ComponentModel_DesignTimeVisibleAttributeMethodDeclarations.h"



// System.Void System.ComponentModel.DesignTimeVisibleAttribute::.ctor(System.Boolean)
extern "C" void DesignTimeVisibleAttribute__ctor_m5302 (DesignTimeVisibleAttribute_t1179 * __this, bool ___visible, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		bool L_0 = ___visible;
		__this->___visible_0 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.DesignTimeVisibleAttribute::.cctor()
extern TypeInfo* DesignTimeVisibleAttribute_t1179_il2cpp_TypeInfo_var;
extern "C" void DesignTimeVisibleAttribute__cctor_m10525 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DesignTimeVisibleAttribute_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2098);
		s_Il2CppMethodIntialized = true;
	}
	{
		DesignTimeVisibleAttribute_t1179 * L_0 = (DesignTimeVisibleAttribute_t1179 *)il2cpp_codegen_object_new (DesignTimeVisibleAttribute_t1179_il2cpp_TypeInfo_var);
		DesignTimeVisibleAttribute__ctor_m5302(L_0, 1, /*hidden argument*/NULL);
		((DesignTimeVisibleAttribute_t1179_StaticFields*)DesignTimeVisibleAttribute_t1179_il2cpp_TypeInfo_var->static_fields)->___Default_1 = L_0;
		DesignTimeVisibleAttribute_t1179 * L_1 = (DesignTimeVisibleAttribute_t1179 *)il2cpp_codegen_object_new (DesignTimeVisibleAttribute_t1179_il2cpp_TypeInfo_var);
		DesignTimeVisibleAttribute__ctor_m5302(L_1, 0, /*hidden argument*/NULL);
		((DesignTimeVisibleAttribute_t1179_StaticFields*)DesignTimeVisibleAttribute_t1179_il2cpp_TypeInfo_var->static_fields)->___No_2 = L_1;
		DesignTimeVisibleAttribute_t1179 * L_2 = (DesignTimeVisibleAttribute_t1179 *)il2cpp_codegen_object_new (DesignTimeVisibleAttribute_t1179_il2cpp_TypeInfo_var);
		DesignTimeVisibleAttribute__ctor_m5302(L_2, 1, /*hidden argument*/NULL);
		((DesignTimeVisibleAttribute_t1179_StaticFields*)DesignTimeVisibleAttribute_t1179_il2cpp_TypeInfo_var->static_fields)->___Yes_3 = L_2;
		return;
	}
}
// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::get_Visible()
extern "C" bool DesignTimeVisibleAttribute_get_Visible_m10526 (DesignTimeVisibleAttribute_t1179 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___visible_0);
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::Equals(System.Object)
extern TypeInfo* DesignTimeVisibleAttribute_t1179_il2cpp_TypeInfo_var;
extern "C" bool DesignTimeVisibleAttribute_Equals_m10527 (DesignTimeVisibleAttribute_t1179 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DesignTimeVisibleAttribute_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2098);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (((DesignTimeVisibleAttribute_t1179 *)IsInst(L_0, DesignTimeVisibleAttribute_t1179_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___obj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(DesignTimeVisibleAttribute_t1179 *)__this))))
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_2 = ___obj;
		NullCheck(((DesignTimeVisibleAttribute_t1179 *)Castclass(L_2, DesignTimeVisibleAttribute_t1179_il2cpp_TypeInfo_var)));
		bool L_3 = DesignTimeVisibleAttribute_get_Visible_m10526(((DesignTimeVisibleAttribute_t1179 *)Castclass(L_2, DesignTimeVisibleAttribute_t1179_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		bool L_4 = (__this->___visible_0);
		return ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}
}
// System.Int32 System.ComponentModel.DesignTimeVisibleAttribute::GetHashCode()
extern "C" int32_t DesignTimeVisibleAttribute_GetHashCode_m10528 (DesignTimeVisibleAttribute_t1179 * __this, const MethodInfo* method)
{
	{
		bool* L_0 = &(__this->___visible_0);
		int32_t L_1 = Boolean_GetHashCode_m12749(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::IsDefaultAttribute()
extern TypeInfo* DesignTimeVisibleAttribute_t1179_il2cpp_TypeInfo_var;
extern "C" bool DesignTimeVisibleAttribute_IsDefaultAttribute_m10529 (DesignTimeVisibleAttribute_t1179 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DesignTimeVisibleAttribute_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2098);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___visible_0);
		IL2CPP_RUNTIME_CLASS_INIT(DesignTimeVisibleAttribute_t1179_il2cpp_TypeInfo_var);
		DesignTimeVisibleAttribute_t1179 * L_1 = ((DesignTimeVisibleAttribute_t1179_StaticFields*)DesignTimeVisibleAttribute_t1179_il2cpp_TypeInfo_var->static_fields)->___Default_1;
		NullCheck(L_1);
		bool L_2 = DesignTimeVisibleAttribute_get_Visible_m10526(L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.ComponentModel.DoubleConverter
#include "System_System_ComponentModel_DoubleConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.DoubleConverter
#include "System_System_ComponentModel_DoubleConverterMethodDeclarations.h"

// System.Double
#include "mscorlib_System_Double.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"


// System.Boolean System.ComponentModel.DoubleConverter::get_SupportHex()
extern "C" bool DoubleConverter_get_SupportHex_m10530 (DoubleConverter_t1902 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.String System.ComponentModel.DoubleConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern TypeInfo* Double_t695_il2cpp_TypeInfo_var;
extern "C" String_t* DoubleConverter_ConvertToString_m10531 (DoubleConverter_t1902 * __this, Object_t * ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Double_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(985);
		s_Il2CppMethodIntialized = true;
	}
	double V_0 = 0.0;
	{
		Object_t * L_0 = ___value;
		V_0 = ((*(double*)((double*)UnBox (L_0, Double_t695_il2cpp_TypeInfo_var))));
		NumberFormatInfo_t1037 * L_1 = ___format;
		String_t* L_2 = Double_ToString_m3248((&V_0), (String_t*) &_stringLiteral1948, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object System.ComponentModel.DoubleConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern TypeInfo* Double_t695_il2cpp_TypeInfo_var;
extern "C" Object_t * DoubleConverter_ConvertFromString_m10532 (DoubleConverter_t1902 * __this, String_t* ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Double_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(985);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		NumberFormatInfo_t1037 * L_1 = ___format;
		double L_2 = Double_Parse_m9853(NULL /*static, unused*/, L_0, ((int32_t)167), L_1, /*hidden argument*/NULL);
		double L_3 = L_2;
		Object_t * L_4 = Box(Double_t695_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.ComponentModel.EditorAttribute
#include "System_System_ComponentModel_EditorAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.EditorAttribute
#include "System_System_ComponentModel_EditorAttributeMethodDeclarations.h"



// System.Void System.ComponentModel.EditorAttribute::.ctor(System.String,System.String)
extern "C" void EditorAttribute__ctor_m5299 (EditorAttribute_t1176 * __this, String_t* ___typeName, String_t* ___baseTypeName, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___typeName;
		__this->___name_0 = L_0;
		String_t* L_1 = ___baseTypeName;
		__this->___basename_1 = L_1;
		return;
	}
}
// System.String System.ComponentModel.EditorAttribute::get_EditorBaseTypeName()
extern "C" String_t* EditorAttribute_get_EditorBaseTypeName_m10533 (EditorAttribute_t1176 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___basename_1);
		return L_0;
	}
}
// System.String System.ComponentModel.EditorAttribute::get_EditorTypeName()
extern "C" String_t* EditorAttribute_get_EditorTypeName_m10534 (EditorAttribute_t1176 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_0);
		return L_0;
	}
}
// System.Object System.ComponentModel.EditorAttribute::get_TypeId()
extern "C" Object_t * EditorAttribute_get_TypeId_m10535 (EditorAttribute_t1176 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = Object_GetType_m1416(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.ComponentModel.EditorAttribute::Equals(System.Object)
extern TypeInfo* EditorAttribute_t1176_il2cpp_TypeInfo_var;
extern "C" bool EditorAttribute_Equals_m10536 (EditorAttribute_t1176 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorAttribute_t1176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2095);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___obj;
		if (((EditorAttribute_t1176 *)IsInst(L_0, EditorAttribute_t1176_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___obj;
		NullCheck(((EditorAttribute_t1176 *)Castclass(L_1, EditorAttribute_t1176_il2cpp_TypeInfo_var)));
		String_t* L_2 = EditorAttribute_get_EditorBaseTypeName_m10533(((EditorAttribute_t1176 *)Castclass(L_1, EditorAttribute_t1176_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_3 = (__this->___basename_1);
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(25 /* System.Boolean System.String::Equals(System.String) */, L_2, L_3);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		Object_t * L_5 = ___obj;
		NullCheck(((EditorAttribute_t1176 *)Castclass(L_5, EditorAttribute_t1176_il2cpp_TypeInfo_var)));
		String_t* L_6 = EditorAttribute_get_EditorTypeName_m10534(((EditorAttribute_t1176 *)Castclass(L_5, EditorAttribute_t1176_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_7 = (__this->___name_0);
		NullCheck(L_6);
		bool L_8 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(25 /* System.Boolean System.String::Equals(System.String) */, L_6, L_7);
		G_B5_0 = ((int32_t)(L_8));
		goto IL_0041;
	}

IL_0040:
	{
		G_B5_0 = 0;
	}

IL_0041:
	{
		return G_B5_0;
	}
}
// System.Int32 System.ComponentModel.EditorAttribute::GetHashCode()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" int32_t EditorAttribute_GetHashCode_m10537 (EditorAttribute_t1176 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___name_0);
		String_t* L_1 = (__this->___basename_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m1269(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_2);
		return L_3;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"

// System.ComponentModel.EditorBrowsableState
#include "System_System_ComponentModel_EditorBrowsableState.h"


// System.Void System.ComponentModel.EditorBrowsableAttribute::.ctor(System.ComponentModel.EditorBrowsableState)
extern "C" void EditorBrowsableAttribute__ctor_m3299 (EditorBrowsableAttribute_t735 * __this, int32_t ___state, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___state;
		__this->___state_0 = L_0;
		return;
	}
}
// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::get_State()
extern "C" int32_t EditorBrowsableAttribute_get_State_m10538 (EditorBrowsableAttribute_t735 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___state_0);
		return L_0;
	}
}
// System.Boolean System.ComponentModel.EditorBrowsableAttribute::Equals(System.Object)
extern TypeInfo* EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var;
extern "C" bool EditorBrowsableAttribute_Equals_m10539 (EditorBrowsableAttribute_t735 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1069);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (((EditorBrowsableAttribute_t735 *)IsInst(L_0, EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___obj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(EditorBrowsableAttribute_t735 *)__this))))
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_2 = ___obj;
		NullCheck(((EditorBrowsableAttribute_t735 *)Castclass(L_2, EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var)));
		int32_t L_3 = EditorBrowsableAttribute_get_State_m10538(((EditorBrowsableAttribute_t735 *)Castclass(L_2, EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		int32_t L_4 = (__this->___state_0);
		return ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}
}
// System.Int32 System.ComponentModel.EditorBrowsableAttribute::GetHashCode()
extern TypeInfo* EditorBrowsableState_t1903_il2cpp_TypeInfo_var;
extern "C" int32_t EditorBrowsableAttribute_GetHashCode_m10540 (EditorBrowsableAttribute_t735 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableState_t1903_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4289);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___state_0);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(EditorBrowsableState_t1903_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Enum::GetHashCode() */, L_2);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.EditorBrowsableState
#include "System_System_ComponentModel_EditorBrowsableStateMethodDeclarations.h"



// System.ComponentModel.EnumConverter/EnumComparer
#include "System_System_ComponentModel_EnumConverter_EnumComparer.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.EnumConverter/EnumComparer
#include "System_System_ComponentModel_EnumConverter_EnumComparerMethodDeclarations.h"

// System.Collections.Comparer
#include "mscorlib_System_Collections_Comparer.h"
// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfo.h"
// System.Collections.Comparer
#include "mscorlib_System_Collections_ComparerMethodDeclarations.h"
// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfoMethodDeclarations.h"


// System.Void System.ComponentModel.EnumConverter/EnumComparer::.ctor()
extern "C" void EnumComparer__ctor_m10541 (EnumComparer_t1904 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.ComponentModel.EnumConverter/EnumComparer::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Comparer_t2226_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern "C" int32_t EnumComparer_System_Collections_IComparer_Compare_m10542 (EnumComparer_t1904 * __this, Object_t * ___compareObject1, Object_t * ___compareObject2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Comparer_t2226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4290);
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___compareObject1;
		V_0 = ((String_t*)IsInst(L_0, String_t_il2cpp_TypeInfo_var));
		Object_t * L_1 = ___compareObject2;
		V_1 = ((String_t*)IsInst(L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_3 = V_1;
		if (L_3)
		{
			goto IL_0027;
		}
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_t2226_il2cpp_TypeInfo_var);
		Comparer_t2226 * L_4 = ((Comparer_t2226_StaticFields*)Comparer_t2226_il2cpp_TypeInfo_var->static_fields)->___Default_0;
		Object_t * L_5 = ___compareObject1;
		Object_t * L_6 = ___compareObject2;
		NullCheck(L_4);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Object_t *, Object_t * >::Invoke(5 /* System.Int32 System.Collections.Comparer::Compare(System.Object,System.Object) */, L_4, L_5, L_6);
		return L_7;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_8 = CultureInfo_get_InvariantCulture_m3234(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		CompareInfo_t1143 * L_9 = (CompareInfo_t1143 *)VirtFuncInvoker0< CompareInfo_t1143 * >::Invoke(11 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_8);
		String_t* L_10 = V_0;
		String_t* L_11 = V_1;
		NullCheck(L_9);
		int32_t L_12 = (int32_t)VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(5 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.String) */, L_9, L_10, L_11);
		return L_12;
	}
}
// System.ComponentModel.EnumConverter
#include "System_System_ComponentModel_EnumConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.EnumConverter
#include "System_System_ComponentModel_EnumConverterMethodDeclarations.h"



// System.Void System.ComponentModel.EnumConverter::.ctor(System.Type)
extern "C" void EnumConverter__ctor_m10543 (EnumConverter_t1905 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		TypeConverter__ctor_m10707(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type;
		__this->___type_0 = L_0;
		return;
	}
}
// System.Boolean System.ComponentModel.EnumConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* InstanceDescriptor_t1900_0_0_0_var;
extern const Il2CppType* EnumU5BU5D_t2227_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool EnumConverter_CanConvertTo_m10544 (EnumConverter_t1905 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InstanceDescriptor_t1900_0_0_0_var = il2cpp_codegen_type_from_index(4284);
		EnumU5BU5D_t2227_0_0_0_var = il2cpp_codegen_type_from_index(4291);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(InstanceDescriptor_t1900_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Type_t * L_2 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(EnumU5BU5D_t2227_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		Object_t * L_4 = ___context;
		Type_t * L_5 = ___destinationType;
		bool L_6 = TypeConverter_CanConvertTo_m10708(__this, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.ComponentModel.EnumConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* InstanceDescriptor_t1900_0_0_0_var;
extern const Il2CppType* Enum_t353_0_0_0_var;
extern const Il2CppType* Type_t_0_0_0_var;
extern const Il2CppType* EnumU5BU5D_t2227_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IConvertible_t373_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t353_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* InstanceDescriptor_t1900_il2cpp_TypeInfo_var;
extern TypeInfo* EnumU5BU5D_t2227_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern TypeInfo* Int64U5BU5D_t1005_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" Object_t * EnumConverter_ConvertTo_m10545 (EnumConverter_t1905 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		InstanceDescriptor_t1900_0_0_0_var = il2cpp_codegen_type_from_index(4284);
		Enum_t353_0_0_0_var = il2cpp_codegen_type_from_index(192);
		Type_t_0_0_0_var = il2cpp_codegen_type_from_index(58);
		EnumU5BU5D_t2227_0_0_0_var = il2cpp_codegen_type_from_index(4291);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IConvertible_t373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		Enum_t353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		InstanceDescriptor_t1900_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4284);
		EnumU5BU5D_t2227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4291);
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		Int64U5BU5D_t1005_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2018);
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	String_t* V_1 = {0};
	Type_t * V_2 = {0};
	Object_t * V_3 = {0};
	MethodInfo_t * V_4 = {0};
	FieldInfo_t * V_5 = {0};
	int64_t V_6 = 0;
	Array_t * V_7 = {0};
	Int64U5BU5D_t1005* V_8 = {0};
	int32_t V_9 = 0;
	ArrayList_t913 * V_10 = {0};
	bool V_11 = false;
	int64_t V_12 = 0;
	Int64U5BU5D_t1005* V_13 = {0};
	int32_t V_14 = 0;
	{
		Type_t * L_0 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_007b;
		}
	}
	{
		Object_t * L_2 = ___value;
		if (!L_2)
		{
			goto IL_007b;
		}
	}
	{
		Object_t * L_3 = ___value;
		if (!((Object_t *)IsInst(L_3, IConvertible_t373_il2cpp_TypeInfo_var)))
		{
			goto IL_0049;
		}
	}
	{
		Type_t * L_4 = (__this->___type_0);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t353_il2cpp_TypeInfo_var);
		Type_t * L_5 = Enum_GetUnderlyingType_m12758(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Type_t * L_6 = V_0;
		Object_t * L_7 = ___value;
		NullCheck(L_7);
		Type_t * L_8 = Object_GetType_m1416(L_7, /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_8)))
		{
			goto IL_0049;
		}
	}
	{
		Object_t * L_9 = ___value;
		Type_t * L_10 = V_0;
		CultureInfo_t693 * L_11 = ___culture;
		NullCheck(((Object_t *)Castclass(L_9, IConvertible_t373_il2cpp_TypeInfo_var)));
		Object_t * L_12 = (Object_t *)InterfaceFuncInvoker2< Object_t *, Type_t *, Object_t * >::Invoke(13 /* System.Object System.IConvertible::ToType(System.Type,System.IFormatProvider) */, IConvertible_t373_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_9, IConvertible_t373_il2cpp_TypeInfo_var)), L_10, L_11);
		___value = L_12;
	}

IL_0049:
	{
		bool L_13 = EnumConverter_get_IsFlags_m10557(__this, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0069;
		}
	}
	{
		Object_t * L_14 = ___context;
		Object_t * L_15 = ___value;
		bool L_16 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(14 /* System.Boolean System.ComponentModel.EnumConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object) */, __this, L_14, L_15);
		if (L_16)
		{
			goto IL_0069;
		}
	}
	{
		Object_t * L_17 = ___value;
		ArgumentException_t356 * L_18 = EnumConverter_CreateValueNotValidException_m10556(__this, L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_0069:
	{
		Type_t * L_19 = (__this->___type_0);
		Object_t * L_20 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t353_il2cpp_TypeInfo_var);
		String_t* L_21 = Enum_Format_m12759(NULL /*static, unused*/, L_19, L_20, (String_t*) &_stringLiteral2904, /*hidden argument*/NULL);
		return L_21;
	}

IL_007b:
	{
		Type_t * L_22 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(InstanceDescriptor_t1900_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_22) == ((Object_t*)(Type_t *)L_23))))
		{
			goto IL_014d;
		}
	}
	{
		Object_t * L_24 = ___value;
		if (!L_24)
		{
			goto IL_014d;
		}
	}
	{
		Object_t * L_25 = ___context;
		CultureInfo_t693 * L_26 = ___culture;
		Object_t * L_27 = ___value;
		String_t* L_28 = TypeConverter_ConvertToString_m10713(__this, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		bool L_29 = EnumConverter_get_IsFlags_m10557(__this, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_012a;
		}
	}
	{
		String_t* L_30 = V_1;
		NullCheck(L_30);
		int32_t L_31 = String_IndexOf_m3190(L_30, (String_t*) &_stringLiteral349, /*hidden argument*/NULL);
		if ((((int32_t)L_31) == ((int32_t)(-1))))
		{
			goto IL_012a;
		}
	}
	{
		Object_t * L_32 = ___value;
		if (!((Object_t *)IsInst(L_32, IConvertible_t373_il2cpp_TypeInfo_var)))
		{
			goto IL_0125;
		}
	}
	{
		Type_t * L_33 = (__this->___type_0);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t353_il2cpp_TypeInfo_var);
		Type_t * L_34 = Enum_GetUnderlyingType_m12758(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		V_2 = L_34;
		Object_t * L_35 = ___value;
		Type_t * L_36 = V_2;
		CultureInfo_t693 * L_37 = ___culture;
		NullCheck(((Object_t *)Castclass(L_35, IConvertible_t373_il2cpp_TypeInfo_var)));
		Object_t * L_38 = (Object_t *)InterfaceFuncInvoker2< Object_t *, Type_t *, Object_t * >::Invoke(13 /* System.Object System.IConvertible::ToType(System.Type,System.IFormatProvider) */, IConvertible_t373_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_35, IConvertible_t373_il2cpp_TypeInfo_var)), L_36, L_37);
		V_3 = L_38;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_39 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Enum_t353_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_40 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 2));
		Type_t * L_41 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Type_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		ArrayElementTypeCheck (L_40, L_41);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_40, 0)) = (Type_t *)L_41;
		TypeU5BU5D_t570* L_42 = L_40;
		Type_t * L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 1);
		ArrayElementTypeCheck (L_42, L_43);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_42, 1)) = (Type_t *)L_43;
		NullCheck(L_39);
		MethodInfo_t * L_44 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, TypeU5BU5D_t570* >::Invoke(51 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[]) */, L_39, (String_t*) &_stringLiteral2923, L_42);
		V_4 = L_44;
		MethodInfo_t * L_45 = V_4;
		ObjectU5BU5D_t300* L_46 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 2));
		Type_t * L_47 = (__this->___type_0);
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 0);
		ArrayElementTypeCheck (L_46, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, 0)) = (Object_t *)L_47;
		ObjectU5BU5D_t300* L_48 = L_46;
		Object_t * L_49 = V_3;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, 1);
		ArrayElementTypeCheck (L_48, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, 1)) = (Object_t *)L_49;
		InstanceDescriptor_t1900 * L_50 = (InstanceDescriptor_t1900 *)il2cpp_codegen_object_new (InstanceDescriptor_t1900_il2cpp_TypeInfo_var);
		InstanceDescriptor__ctor_m10519(L_50, L_45, (Object_t *)(Object_t *)L_48, /*hidden argument*/NULL);
		return L_50;
	}

IL_0125:
	{
		goto IL_0148;
	}

IL_012a:
	{
		Type_t * L_51 = (__this->___type_0);
		String_t* L_52 = V_1;
		NullCheck(L_51);
		FieldInfo_t * L_53 = (FieldInfo_t *)VirtFuncInvoker1< FieldInfo_t *, String_t* >::Invoke(46 /* System.Reflection.FieldInfo System.Type::GetField(System.String) */, L_51, L_52);
		V_5 = L_53;
		FieldInfo_t * L_54 = V_5;
		if (!L_54)
		{
			goto IL_0148;
		}
	}
	{
		FieldInfo_t * L_55 = V_5;
		InstanceDescriptor_t1900 * L_56 = (InstanceDescriptor_t1900 *)il2cpp_codegen_object_new (InstanceDescriptor_t1900_il2cpp_TypeInfo_var);
		InstanceDescriptor__ctor_m10519(L_56, L_55, (Object_t *)NULL, /*hidden argument*/NULL);
		return L_56;
	}

IL_0148:
	{
		goto IL_0293;
	}

IL_014d:
	{
		Type_t * L_57 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_58 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(EnumU5BU5D_t2227_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_57) == ((Object_t*)(Type_t *)L_58))))
		{
			goto IL_0293;
		}
	}
	{
		Object_t * L_59 = ___value;
		if (!L_59)
		{
			goto IL_0293;
		}
	}
	{
		bool L_60 = EnumConverter_get_IsFlags_m10557(__this, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_018a;
		}
	}
	{
		EnumU5BU5D_t2227* L_61 = ((EnumU5BU5D_t2227*)SZArrayNew(EnumU5BU5D_t2227_il2cpp_TypeInfo_var, 1));
		Type_t * L_62 = (__this->___type_0);
		Object_t * L_63 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t353_il2cpp_TypeInfo_var);
		Object_t * L_64 = Enum_ToObject_m12760(NULL /*static, unused*/, L_62, L_63, /*hidden argument*/NULL);
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, 0);
		ArrayElementTypeCheck (L_61, ((Enum_t353 *)Castclass(L_64, Enum_t353_il2cpp_TypeInfo_var)));
		*((Enum_t353 **)(Enum_t353 **)SZArrayLdElema(L_61, 0)) = (Enum_t353 *)((Enum_t353 *)Castclass(L_64, Enum_t353_il2cpp_TypeInfo_var));
		return (Object_t *)L_61;
	}

IL_018a:
	{
		Object_t * L_65 = ___value;
		CultureInfo_t693 * L_66 = ___culture;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int64_t L_67 = Convert_ToInt64_m12761(NULL /*static, unused*/, ((Enum_t353 *)Castclass(L_65, Enum_t353_il2cpp_TypeInfo_var)), L_66, /*hidden argument*/NULL);
		V_6 = L_67;
		Type_t * L_68 = (__this->___type_0);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t353_il2cpp_TypeInfo_var);
		Array_t * L_69 = Enum_GetValues_m12762(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		V_7 = L_69;
		Array_t * L_70 = V_7;
		NullCheck(L_70);
		int32_t L_71 = Array_get_Length_m5054(L_70, /*hidden argument*/NULL);
		V_8 = ((Int64U5BU5D_t1005*)SZArrayNew(Int64U5BU5D_t1005_il2cpp_TypeInfo_var, L_71));
		V_9 = 0;
		goto IL_01d4;
	}

IL_01bb:
	{
		Int64U5BU5D_t1005* L_72 = V_8;
		int32_t L_73 = V_9;
		Array_t * L_74 = V_7;
		int32_t L_75 = V_9;
		NullCheck(L_74);
		Object_t * L_76 = Array_GetValue_m5008(L_74, L_75, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int64_t L_77 = Convert_ToInt64_m4978(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		NullCheck(L_72);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_72, L_73);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_72, L_73)) = (int64_t)L_77;
		int32_t L_78 = V_9;
		V_9 = ((int32_t)((int32_t)L_78+(int32_t)1));
	}

IL_01d4:
	{
		int32_t L_79 = V_9;
		Array_t * L_80 = V_7;
		NullCheck(L_80);
		int32_t L_81 = Array_get_Length_m5054(L_80, /*hidden argument*/NULL);
		if ((((int32_t)L_79) < ((int32_t)L_81)))
		{
			goto IL_01bb;
		}
	}
	{
		ArrayList_t913 * L_82 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_82, /*hidden argument*/NULL);
		V_10 = L_82;
		V_11 = 0;
		goto IL_025e;
	}

IL_01f1:
	{
		V_11 = 1;
		Int64U5BU5D_t1005* L_83 = V_8;
		V_13 = L_83;
		V_14 = 0;
		goto IL_0249;
	}

IL_0200:
	{
		Int64U5BU5D_t1005* L_84 = V_13;
		int32_t L_85 = V_14;
		NullCheck(L_84);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_84, L_85);
		int32_t L_86 = L_85;
		V_12 = (*(int64_t*)(int64_t*)SZArrayLdElema(L_84, L_86));
		int64_t L_87 = V_12;
		if (!L_87)
		{
			goto IL_021a;
		}
	}
	{
		int64_t L_88 = V_12;
		int64_t L_89 = V_6;
		int64_t L_90 = V_12;
		if ((((int64_t)((int64_t)((int64_t)L_88&(int64_t)L_89))) == ((int64_t)L_90)))
		{
			goto IL_0223;
		}
	}

IL_021a:
	{
		int64_t L_91 = V_12;
		int64_t L_92 = V_6;
		if ((!(((uint64_t)L_91) == ((uint64_t)L_92))))
		{
			goto IL_0243;
		}
	}

IL_0223:
	{
		ArrayList_t913 * L_93 = V_10;
		Type_t * L_94 = (__this->___type_0);
		int64_t L_95 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t353_il2cpp_TypeInfo_var);
		Object_t * L_96 = Enum_ToObject_m12763(NULL /*static, unused*/, L_94, L_95, /*hidden argument*/NULL);
		NullCheck(L_93);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_93, L_96);
		int64_t L_97 = V_6;
		int64_t L_98 = V_12;
		V_6 = ((int64_t)((int64_t)L_97&(int64_t)((~L_98))));
		V_11 = 0;
	}

IL_0243:
	{
		int32_t L_99 = V_14;
		V_14 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_0249:
	{
		int32_t L_100 = V_14;
		Int64U5BU5D_t1005* L_101 = V_13;
		NullCheck(L_101);
		if ((((int32_t)L_100) < ((int32_t)(((int32_t)(((Array_t *)L_101)->max_length))))))
		{
			goto IL_0200;
		}
	}
	{
		int64_t L_102 = V_6;
		if (L_102)
		{
			goto IL_025e;
		}
	}
	{
		V_11 = 1;
	}

IL_025e:
	{
		bool L_103 = V_11;
		if (!L_103)
		{
			goto IL_01f1;
		}
	}
	{
		int64_t L_104 = V_6;
		if (!L_104)
		{
			goto IL_0281;
		}
	}
	{
		ArrayList_t913 * L_105 = V_10;
		Type_t * L_106 = (__this->___type_0);
		int64_t L_107 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t353_il2cpp_TypeInfo_var);
		Object_t * L_108 = Enum_ToObject_m12763(NULL /*static, unused*/, L_106, L_107, /*hidden argument*/NULL);
		NullCheck(L_105);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_105, L_108);
	}

IL_0281:
	{
		ArrayList_t913 * L_109 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_110 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Enum_t353_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_109);
		Array_t * L_111 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(44 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_109, L_110);
		return L_111;
	}

IL_0293:
	{
		Object_t * L_112 = ___context;
		CultureInfo_t693 * L_113 = ___culture;
		Object_t * L_114 = ___value;
		Type_t * L_115 = ___destinationType;
		Object_t * L_116 = TypeConverter_ConvertTo_m10711(__this, L_112, L_113, L_114, L_115, /*hidden argument*/NULL);
		return L_116;
	}
}
// System.Boolean System.ComponentModel.EnumConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* EnumU5BU5D_t2227_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool EnumConverter_CanConvertFrom_m10546 (EnumConverter_t1905 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		EnumU5BU5D_t2227_0_0_0_var = il2cpp_codegen_type_from_index(4291);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___sourceType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Type_t * L_2 = ___sourceType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(EnumU5BU5D_t2227_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		Object_t * L_4 = ___context;
		Type_t * L_5 = ___sourceType;
		bool L_6 = TypeConverter_CanConvertFrom_m5367(__this, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.ComponentModel.EnumConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t353_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t260_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t306_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t687_il2cpp_TypeInfo_var;
extern TypeInfo* EnumU5BU5D_t2227_il2cpp_TypeInfo_var;
extern "C" Object_t * EnumConverter_ConvertFrom_m10547 (EnumConverter_t1905 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Enum_t353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		CharU5BU5D_t260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		Exception_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		FormatException_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(956);
		EnumU5BU5D_t2227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4291);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int64_t V_1 = 0;
	StringU5BU5D_t258* V_2 = {0};
	String_t* V_3 = {0};
	StringU5BU5D_t258* V_4 = {0};
	int32_t V_5 = 0;
	Enum_t353 * V_6 = {0};
	Exception_t306 * V_7 = {0};
	int64_t V_8 = 0;
	Enum_t353 * V_9 = {0};
	EnumU5BU5D_t2227* V_10 = {0};
	int32_t V_11 = 0;
	Object_t * V_12 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___value;
		if (!((String_t*)IsInst(L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_00c7;
		}
	}
	{
		Object_t * L_1 = ___value;
		V_0 = ((String_t*)IsInst(L_1, String_t_il2cpp_TypeInfo_var));
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_2 = V_0;
			NullCheck(L_2);
			int32_t L_3 = String_IndexOf_m3182(L_2, ((int32_t)44), /*hidden argument*/NULL);
			if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
			{
				goto IL_0034;
			}
		}

IL_0020:
		{
			Type_t * L_4 = (__this->___type_0);
			String_t* L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Enum_t353_il2cpp_TypeInfo_var);
			Object_t * L_6 = Enum_Parse_m1835(NULL /*static, unused*/, L_4, L_5, 1, /*hidden argument*/NULL);
			V_12 = L_6;
			goto IL_0123;
		}

IL_0034:
		{
			V_1 = (((int64_t)0));
			String_t* L_7 = V_0;
			CharU5BU5D_t260* L_8 = ((CharU5BU5D_t260*)SZArrayNew(CharU5BU5D_t260_il2cpp_TypeInfo_var, 1));
			NullCheck(L_8);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
			*((uint16_t*)(uint16_t*)SZArrayLdElema(L_8, 0)) = (uint16_t)((int32_t)44);
			NullCheck(L_7);
			StringU5BU5D_t258* L_9 = String_Split_m1813(L_7, L_8, /*hidden argument*/NULL);
			V_2 = L_9;
			StringU5BU5D_t258* L_10 = V_2;
			V_4 = L_10;
			V_5 = 0;
			goto IL_007f;
		}

IL_0054:
		{
			StringU5BU5D_t258* L_11 = V_4;
			int32_t L_12 = V_5;
			NullCheck(L_11);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
			int32_t L_13 = L_12;
			V_3 = (*(String_t**)(String_t**)SZArrayLdElema(L_11, L_13));
			Type_t * L_14 = (__this->___type_0);
			String_t* L_15 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Enum_t353_il2cpp_TypeInfo_var);
			Object_t * L_16 = Enum_Parse_m1835(NULL /*static, unused*/, L_14, L_15, 1, /*hidden argument*/NULL);
			V_6 = ((Enum_t353 *)Castclass(L_16, Enum_t353_il2cpp_TypeInfo_var));
			int64_t L_17 = V_1;
			Enum_t353 * L_18 = V_6;
			CultureInfo_t693 * L_19 = ___culture;
			IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
			int64_t L_20 = Convert_ToInt64_m12761(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
			V_1 = ((int64_t)((int64_t)L_17|(int64_t)L_20));
			int32_t L_21 = V_5;
			V_5 = ((int32_t)((int32_t)L_21+(int32_t)1));
		}

IL_007f:
		{
			int32_t L_22 = V_5;
			StringU5BU5D_t258* L_23 = V_4;
			NullCheck(L_23);
			if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((Array_t *)L_23)->max_length))))))
			{
				goto IL_0054;
			}
		}

IL_008a:
		{
			Type_t * L_24 = (__this->___type_0);
			int64_t L_25 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Enum_t353_il2cpp_TypeInfo_var);
			Object_t * L_26 = Enum_ToObject_m12763(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
			V_12 = L_26;
			goto IL_0123;
		}

IL_009d:
		{
			; // IL_009d: leave IL_00c7
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t306_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00a2;
		throw e;
	}

CATCH_00a2:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t306 *)__exception_local);
		String_t* L_27 = V_0;
		Type_t * L_28 = (__this->___type_0);
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_28);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_30 = String_Concat_m1271(NULL /*static, unused*/, L_27, (String_t*) &_stringLiteral2662, L_29, /*hidden argument*/NULL);
		Exception_t306 * L_31 = V_7;
		FormatException_t687 * L_32 = (FormatException_t687 *)il2cpp_codegen_object_new (FormatException_t687_il2cpp_TypeInfo_var);
		FormatException__ctor_m12764(L_32, L_30, L_31, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_32);
		goto IL_00c7;
	} // end catch (depth: 1)

IL_00c7:
	{
		Object_t * L_33 = ___value;
		if (!((EnumU5BU5D_t2227*)IsInst(L_33, EnumU5BU5D_t2227_il2cpp_TypeInfo_var)))
		{
			goto IL_0119;
		}
	}
	{
		V_8 = (((int64_t)0));
		Object_t * L_34 = ___value;
		V_10 = ((EnumU5BU5D_t2227*)Castclass(L_34, EnumU5BU5D_t2227_il2cpp_TypeInfo_var));
		V_11 = 0;
		goto IL_0100;
	}

IL_00e6:
	{
		EnumU5BU5D_t2227* L_35 = V_10;
		int32_t L_36 = V_11;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		int32_t L_37 = L_36;
		V_9 = (*(Enum_t353 **)(Enum_t353 **)SZArrayLdElema(L_35, L_37));
		int64_t L_38 = V_8;
		Enum_t353 * L_39 = V_9;
		CultureInfo_t693 * L_40 = ___culture;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int64_t L_41 = Convert_ToInt64_m12761(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/NULL);
		V_8 = ((int64_t)((int64_t)L_38|(int64_t)L_41));
		int32_t L_42 = V_11;
		V_11 = ((int32_t)((int32_t)L_42+(int32_t)1));
	}

IL_0100:
	{
		int32_t L_43 = V_11;
		EnumU5BU5D_t2227* L_44 = V_10;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)(((int32_t)(((Array_t *)L_44)->max_length))))))
		{
			goto IL_00e6;
		}
	}
	{
		Type_t * L_45 = (__this->___type_0);
		int64_t L_46 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t353_il2cpp_TypeInfo_var);
		Object_t * L_47 = Enum_ToObject_m12763(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		return L_47;
	}

IL_0119:
	{
		Object_t * L_48 = ___context;
		CultureInfo_t693 * L_49 = ___culture;
		Object_t * L_50 = ___value;
		Object_t * L_51 = TypeConverter_ConvertFrom_m5368(__this, L_48, L_49, L_50, /*hidden argument*/NULL);
		return L_51;
	}

IL_0123:
	{
		Object_t * L_52 = V_12;
		return L_52;
	}
}
// System.Boolean System.ComponentModel.EnumConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern TypeInfo* Enum_t353_il2cpp_TypeInfo_var;
extern "C" bool EnumConverter_IsValid_m10548 (EnumConverter_t1905 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enum_t353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->___type_0);
		Object_t * L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t353_il2cpp_TypeInfo_var);
		bool L_2 = Enum_IsDefined_m4980(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.ComponentModel.EnumConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool EnumConverter_GetStandardValuesSupported_m10549 (EnumConverter_t1905 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.ComponentModel.EnumConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool EnumConverter_GetStandardValuesExclusive_m10550 (EnumConverter_t1905 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		bool L_0 = EnumConverter_get_IsFlags_m10557(__this, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern TypeInfo* Enum_t353_il2cpp_TypeInfo_var;
extern TypeInfo* StandardValuesCollection_t1893_il2cpp_TypeInfo_var;
extern "C" StandardValuesCollection_t1893 * EnumConverter_GetStandardValues_m10551 (EnumConverter_t1905 * __this, Object_t * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enum_t353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		StandardValuesCollection_t1893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4281);
		s_Il2CppMethodIntialized = true;
	}
	Array_t * V_0 = {0};
	{
		StandardValuesCollection_t1893 * L_0 = (__this->___stdValues_1);
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		Type_t * L_1 = (__this->___type_0);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t353_il2cpp_TypeInfo_var);
		Array_t * L_2 = Enum_GetValues_m12762(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Array_t * L_3 = V_0;
		Array_Sort_m12765(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Array_t * L_4 = V_0;
		StandardValuesCollection_t1893 * L_5 = (StandardValuesCollection_t1893 *)il2cpp_codegen_object_new (StandardValuesCollection_t1893_il2cpp_TypeInfo_var);
		StandardValuesCollection__ctor_m10699(L_5, L_4, /*hidden argument*/NULL);
		__this->___stdValues_1 = L_5;
	}

IL_0029:
	{
		StandardValuesCollection_t1893 * L_6 = (__this->___stdValues_1);
		return L_6;
	}
}
// System.Collections.IComparer System.ComponentModel.EnumConverter::get_Comparer()
extern TypeInfo* EnumComparer_t1904_il2cpp_TypeInfo_var;
extern "C" Object_t * EnumConverter_get_Comparer_m10552 (EnumConverter_t1905 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnumComparer_t1904_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4292);
		s_Il2CppMethodIntialized = true;
	}
	{
		EnumComparer_t1904 * L_0 = (EnumComparer_t1904 *)il2cpp_codegen_object_new (EnumComparer_t1904_il2cpp_TypeInfo_var);
		EnumComparer__ctor_m10541(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Type System.ComponentModel.EnumConverter::get_EnumType()
extern "C" Type_t * EnumConverter_get_EnumType_m10553 (EnumConverter_t1905 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_0);
		return L_0;
	}
}
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::get_Values()
extern "C" StandardValuesCollection_t1893 * EnumConverter_get_Values_m10554 (EnumConverter_t1905 * __this, const MethodInfo* method)
{
	{
		StandardValuesCollection_t1893 * L_0 = (__this->___stdValues_1);
		return L_0;
	}
}
// System.Void System.ComponentModel.EnumConverter::set_Values(System.ComponentModel.TypeConverter/StandardValuesCollection)
extern "C" void EnumConverter_set_Values_m10555 (EnumConverter_t1905 * __this, StandardValuesCollection_t1893 * ___value, const MethodInfo* method)
{
	{
		StandardValuesCollection_t1893 * L_0 = ___value;
		__this->___stdValues_1 = L_0;
		return;
	}
}
// System.ArgumentException System.ComponentModel.EnumConverter::CreateValueNotValidException(System.Object)
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" ArgumentException_t356 * EnumConverter_CreateValueNotValidException_m10556 (EnumConverter_t1905 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_0 = CultureInfo_get_InvariantCulture_m3234(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t300* L_1 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 2));
		Object_t * L_2 = ___value;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
		ObjectU5BU5D_t300* L_3 = L_1;
		Type_t * L_4 = (__this->___type_0);
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 1)) = (Object_t *)L_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Format_m4981(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral2924, L_3, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		ArgumentException_t356 * L_8 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_8, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean System.ComponentModel.EnumConverter::get_IsFlags()
extern const Il2CppType* FlagsAttribute_t732_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool EnumConverter_get_IsFlags_m10557 (EnumConverter_t1905 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t732_0_0_0_var = il2cpp_codegen_type_from_index(1066);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->___type_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(FlagsAttribute_t732_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(11 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_1, 0);
		return L_2;
	}
}
// System.ComponentModel.ListEntry
#include "System_System_ComponentModel_ListEntry.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.ListEntry
#include "System_System_ComponentModel_ListEntryMethodDeclarations.h"



// System.Void System.ComponentModel.ListEntry::.ctor()
extern "C" void ListEntry__ctor_m10558 (ListEntry_t1906 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"


// System.Void System.ComponentModel.EventHandlerList::.ctor()
extern "C" void EventHandlerList__ctor_m4968 (EventHandlerList_t896 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Delegate System.ComponentModel.EventHandlerList::get_Item(System.Object)
extern "C" Delegate_t314 * EventHandlerList_get_Item_m4971 (EventHandlerList_t896 * __this, Object_t * ___key, const MethodInfo* method)
{
	ListEntry_t1906 * V_0 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		Delegate_t314 * L_1 = (__this->___null_entry_1);
		return L_1;
	}

IL_000d:
	{
		Object_t * L_2 = ___key;
		ListEntry_t1906 * L_3 = EventHandlerList_FindEntry_m10560(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		ListEntry_t1906 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		ListEntry_t1906 * L_5 = V_0;
		NullCheck(L_5);
		Delegate_t314 * L_6 = (L_5->___value_1);
		return L_6;
	}

IL_0022:
	{
		return (Delegate_t314 *)NULL;
	}
}
// System.Void System.ComponentModel.EventHandlerList::AddHandler(System.Object,System.Delegate)
extern TypeInfo* ListEntry_t1906_il2cpp_TypeInfo_var;
extern "C" void EventHandlerList_AddHandler_m4969 (EventHandlerList_t896 * __this, Object_t * ___key, Delegate_t314 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ListEntry_t1906_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4293);
		s_Il2CppMethodIntialized = true;
	}
	ListEntry_t1906 * V_0 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		Delegate_t314 * L_1 = (__this->___null_entry_1);
		Delegate_t314 * L_2 = ___value;
		Delegate_t314 * L_3 = Delegate_Combine_m1425(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		__this->___null_entry_1 = L_3;
		return;
	}

IL_0019:
	{
		Object_t * L_4 = ___key;
		ListEntry_t1906 * L_5 = EventHandlerList_FindEntry_m10560(__this, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		ListEntry_t1906 * L_6 = V_0;
		if (L_6)
		{
			goto IL_004e;
		}
	}
	{
		ListEntry_t1906 * L_7 = (ListEntry_t1906 *)il2cpp_codegen_object_new (ListEntry_t1906_il2cpp_TypeInfo_var);
		ListEntry__ctor_m10558(L_7, /*hidden argument*/NULL);
		V_0 = L_7;
		ListEntry_t1906 * L_8 = V_0;
		Object_t * L_9 = ___key;
		NullCheck(L_8);
		L_8->___key_0 = L_9;
		ListEntry_t1906 * L_10 = V_0;
		NullCheck(L_10);
		L_10->___value_1 = (Delegate_t314 *)NULL;
		ListEntry_t1906 * L_11 = V_0;
		ListEntry_t1906 * L_12 = (__this->___entries_0);
		NullCheck(L_11);
		L_11->___next_2 = L_12;
		ListEntry_t1906 * L_13 = V_0;
		__this->___entries_0 = L_13;
	}

IL_004e:
	{
		ListEntry_t1906 * L_14 = V_0;
		ListEntry_t1906 * L_15 = V_0;
		NullCheck(L_15);
		Delegate_t314 * L_16 = (L_15->___value_1);
		Delegate_t314 * L_17 = ___value;
		Delegate_t314 * L_18 = Delegate_Combine_m1425(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->___value_1 = L_18;
		return;
	}
}
// System.Void System.ComponentModel.EventHandlerList::RemoveHandler(System.Object,System.Delegate)
extern "C" void EventHandlerList_RemoveHandler_m4970 (EventHandlerList_t896 * __this, Object_t * ___key, Delegate_t314 * ___value, const MethodInfo* method)
{
	ListEntry_t1906 * V_0 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		Delegate_t314 * L_1 = (__this->___null_entry_1);
		Delegate_t314 * L_2 = ___value;
		Delegate_t314 * L_3 = Delegate_Remove_m1465(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		__this->___null_entry_1 = L_3;
		return;
	}

IL_0019:
	{
		Object_t * L_4 = ___key;
		ListEntry_t1906 * L_5 = EventHandlerList_FindEntry_m10560(__this, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		ListEntry_t1906 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return;
	}

IL_0028:
	{
		ListEntry_t1906 * L_7 = V_0;
		ListEntry_t1906 * L_8 = V_0;
		NullCheck(L_8);
		Delegate_t314 * L_9 = (L_8->___value_1);
		Delegate_t314 * L_10 = ___value;
		Delegate_t314 * L_11 = Delegate_Remove_m1465(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->___value_1 = L_11;
		return;
	}
}
// System.Void System.ComponentModel.EventHandlerList::Dispose()
extern "C" void EventHandlerList_Dispose_m10559 (EventHandlerList_t896 * __this, const MethodInfo* method)
{
	{
		__this->___entries_0 = (ListEntry_t1906 *)NULL;
		return;
	}
}
// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::FindEntry(System.Object)
extern "C" ListEntry_t1906 * EventHandlerList_FindEntry_m10560 (EventHandlerList_t896 * __this, Object_t * ___key, const MethodInfo* method)
{
	ListEntry_t1906 * V_0 = {0};
	{
		ListEntry_t1906 * L_0 = (__this->___entries_0);
		V_0 = L_0;
		goto IL_0021;
	}

IL_000c:
	{
		ListEntry_t1906 * L_1 = V_0;
		NullCheck(L_1);
		Object_t * L_2 = (L_1->___key_0);
		Object_t * L_3 = ___key;
		if ((!(((Object_t*)(Object_t *)L_2) == ((Object_t*)(Object_t *)L_3))))
		{
			goto IL_001a;
		}
	}
	{
		ListEntry_t1906 * L_4 = V_0;
		return L_4;
	}

IL_001a:
	{
		ListEntry_t1906 * L_5 = V_0;
		NullCheck(L_5);
		ListEntry_t1906 * L_6 = (L_5->___next_2);
		V_0 = L_6;
	}

IL_0021:
	{
		ListEntry_t1906 * L_7 = V_0;
		if (L_7)
		{
			goto IL_000c;
		}
	}
	{
		return (ListEntry_t1906 *)NULL;
	}
}
// System.ComponentModel.ExpandableObjectConverter
#include "System_System_ComponentModel_ExpandableObjectConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.ExpandableObjectConverter
#include "System_System_ComponentModel_ExpandableObjectConverterMethodDeclarations.h"



// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ExpandableObjectConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern "C" PropertyDescriptorCollection_t936 * ExpandableObjectConverter_GetProperties_m5370 (ExpandableObjectConverter_t894 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1913* ___attributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		AttributeU5BU5D_t1913* L_1 = ___attributes;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		PropertyDescriptorCollection_t936 * L_2 = TypeDescriptor_GetProperties_m10722(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.ComponentModel.ExpandableObjectConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ExpandableObjectConverter_GetPropertiesSupported_m5371 (ExpandableObjectConverter_t894 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.ComponentModel.GuidConverter
#include "System_System_ComponentModel_GuidConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.GuidConverter
#include "System_System_ComponentModel_GuidConverterMethodDeclarations.h"

// System.Guid
#include "mscorlib_System_Guid.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"


// System.Boolean System.ComponentModel.GuidConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool GuidConverter_CanConvertFrom_m10561 (GuidConverter_t1907 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___sourceType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_2 = ___context;
		Type_t * L_3 = ___sourceType;
		bool L_4 = TypeConverter_CanConvertFrom_m5367(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.ComponentModel.GuidConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* InstanceDescriptor_t1900_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool GuidConverter_CanConvertTo_m10562 (GuidConverter_t1907 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		InstanceDescriptor_t1900_0_0_0_var = il2cpp_codegen_type_from_index(4284);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Type_t * L_2 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(InstanceDescriptor_t1900_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		Object_t * L_4 = ___context;
		Type_t * L_5 = ___destinationType;
		bool L_6 = TypeConverter_CanConvertTo_m10708(__this, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.ComponentModel.GuidConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Guid_t713_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t687_il2cpp_TypeInfo_var;
extern "C" Object_t * GuidConverter_ConvertFrom_m10563 (GuidConverter_t1907 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Guid_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1019);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		FormatException_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(956);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___value;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m1416(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_1) == ((Object_t*)(Type_t *)L_2))))
		{
			goto IL_0049;
		}
	}
	{
		Object_t * L_3 = ___value;
		V_0 = ((String_t*)Castclass(L_3, String_t_il2cpp_TypeInfo_var));
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_4 = V_0;
			Guid_t713  L_5 = {0};
			Guid__ctor_m7025(&L_5, L_4, /*hidden argument*/NULL);
			Guid_t713  L_6 = L_5;
			Object_t * L_7 = Box(Guid_t713_il2cpp_TypeInfo_var, &L_6);
			V_1 = L_7;
			goto IL_0053;
		}

IL_002d:
		{
			; // IL_002d: leave IL_0049
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Object)
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m1269(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral2925, /*hidden argument*/NULL);
		FormatException_t687 * L_10 = (FormatException_t687 *)il2cpp_codegen_object_new (FormatException_t687_il2cpp_TypeInfo_var);
		FormatException__ctor_m3201(L_10, L_9, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
		goto IL_0049;
	} // end catch (depth: 1)

IL_0049:
	{
		Object_t * L_11 = ___context;
		CultureInfo_t693 * L_12 = ___culture;
		Object_t * L_13 = ___value;
		Object_t * L_14 = TypeConverter_ConvertFrom_m5368(__this, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0053:
	{
		Object_t * L_15 = V_1;
		return L_15;
	}
}
// System.Object System.ComponentModel.GuidConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* InstanceDescriptor_t1900_0_0_0_var;
extern const Il2CppType* Guid_t713_0_0_0_var;
extern TypeInfo* Guid_t713_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* InstanceDescriptor_t1900_il2cpp_TypeInfo_var;
extern "C" Object_t * GuidConverter_ConvertTo_m10564 (GuidConverter_t1907 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		InstanceDescriptor_t1900_0_0_0_var = il2cpp_codegen_type_from_index(4284);
		Guid_t713_0_0_0_var = il2cpp_codegen_type_from_index(1019);
		Guid_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1019);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		InstanceDescriptor_t1900_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4284);
		s_Il2CppMethodIntialized = true;
	}
	Guid_t713  V_0 = {0};
	ConstructorInfo_t574 * V_1 = {0};
	{
		Object_t * L_0 = ___value;
		if (!((Object_t *)IsInst(L_0, Guid_t713_il2cpp_TypeInfo_var)))
		{
			goto IL_0086;
		}
	}
	{
		Object_t * L_1 = ___value;
		V_0 = ((*(Guid_t713 *)((Guid_t713 *)UnBox (L_1, Guid_t713_il2cpp_TypeInfo_var))));
		Type_t * L_2 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_0036;
		}
	}
	{
		Object_t * L_4 = ___value;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_5 = Guid_ToString_m3262((&V_0), (String_t*) &_stringLiteral361, /*hidden argument*/NULL);
		return L_5;
	}

IL_0036:
	{
		Type_t * L_6 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(InstanceDescriptor_t1900_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_0086;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Guid_t713_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_9 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 1));
		Type_t * L_10 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		ArrayElementTypeCheck (L_9, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_9, 0)) = (Type_t *)L_10;
		NullCheck(L_8);
		ConstructorInfo_t574 * L_11 = (ConstructorInfo_t574 *)VirtFuncInvoker1< ConstructorInfo_t574 *, TypeU5BU5D_t570* >::Invoke(73 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_8, L_9);
		V_1 = L_11;
		ConstructorInfo_t574 * L_12 = V_1;
		ObjectU5BU5D_t300* L_13 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 1));
		String_t* L_14 = Guid_ToString_m3262((&V_0), (String_t*) &_stringLiteral361, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		ArrayElementTypeCheck (L_13, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 0)) = (Object_t *)L_14;
		InstanceDescriptor_t1900 * L_15 = (InstanceDescriptor_t1900 *)il2cpp_codegen_object_new (InstanceDescriptor_t1900_il2cpp_TypeInfo_var);
		InstanceDescriptor__ctor_m10519(L_15, L_12, (Object_t *)(Object_t *)L_13, /*hidden argument*/NULL);
		return L_15;
	}

IL_0086:
	{
		Object_t * L_16 = ___context;
		CultureInfo_t693 * L_17 = ___culture;
		Object_t * L_18 = ___value;
		Type_t * L_19 = ___destinationType;
		Object_t * L_20 = TypeConverter_ConvertTo_m10711(__this, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.ComponentModel.Int16Converter
#include "System_System_ComponentModel_Int16Converter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.Int16Converter
#include "System_System_ComponentModel_Int16ConverterMethodDeclarations.h"

// System.Int16
#include "mscorlib_System_Int16.h"
// System.Int16
#include "mscorlib_System_Int16MethodDeclarations.h"


// System.Boolean System.ComponentModel.Int16Converter::get_SupportHex()
extern "C" bool Int16Converter_get_SupportHex_m10565 (Int16Converter_t1908 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.String System.ComponentModel.Int16Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern TypeInfo* Int16_t378_il2cpp_TypeInfo_var;
extern "C" String_t* Int16Converter_ConvertToString_m10566 (Int16Converter_t1908 * __this, Object_t * ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int16_t378_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(993);
		s_Il2CppMethodIntialized = true;
	}
	int16_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		V_0 = ((*(int16_t*)((int16_t*)UnBox (L_0, Int16_t378_il2cpp_TypeInfo_var))));
		NumberFormatInfo_t1037 * L_1 = ___format;
		String_t* L_2 = Int16_ToString_m12766((&V_0), (String_t*) &_stringLiteral2904, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object System.ComponentModel.Int16Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern TypeInfo* Int16_t378_il2cpp_TypeInfo_var;
extern "C" Object_t * Int16Converter_ConvertFromString_m10567 (Int16Converter_t1908 * __this, String_t* ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int16_t378_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(993);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		NumberFormatInfo_t1037 * L_1 = ___format;
		int16_t L_2 = Int16_Parse_m9856(NULL /*static, unused*/, L_0, 7, L_1, /*hidden argument*/NULL);
		int16_t L_3 = L_2;
		Object_t * L_4 = Box(Int16_t378_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Object System.ComponentModel.Int16Converter::ConvertFromString(System.String,System.Int32)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern TypeInfo* Int16_t378_il2cpp_TypeInfo_var;
extern "C" Object_t * Int16Converter_ConvertFromString_m10568 (Int16Converter_t1908 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		Int16_t378_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(993);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		int32_t L_1 = ___fromBase;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int16_t L_2 = Convert_ToInt16_m12767(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		int16_t L_3 = L_2;
		Object_t * L_4 = Box(Int16_t378_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.ComponentModel.Int32Converter
#include "System_System_ComponentModel_Int32Converter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.Int32Converter
#include "System_System_ComponentModel_Int32ConverterMethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"


// System.Void System.ComponentModel.Int32Converter::.ctor()
extern const Il2CppType* Int32_t297_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Int32Converter__ctor_m10569 (Int32Converter_t1909 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t297_0_0_0_var = il2cpp_codegen_type_from_index(5);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		BaseNumberConverter__ctor_m10424(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int32_t297_0_0_0_var), /*hidden argument*/NULL);
		((BaseNumberConverter_t1884 *)__this)->___InnerType_0 = L_0;
		return;
	}
}
// System.Boolean System.ComponentModel.Int32Converter::get_SupportHex()
extern "C" bool Int32Converter_get_SupportHex_m10570 (Int32Converter_t1909 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.String System.ComponentModel.Int32Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern "C" String_t* Int32Converter_ConvertToString_m10571 (Int32Converter_t1909 * __this, Object_t * ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		V_0 = ((*(int32_t*)((int32_t*)UnBox (L_0, Int32_t297_il2cpp_TypeInfo_var))));
		NumberFormatInfo_t1037 * L_1 = ___format;
		String_t* L_2 = Int32_ToString_m6385((&V_0), (String_t*) &_stringLiteral2904, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object System.ComponentModel.Int32Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern "C" Object_t * Int32Converter_ConvertFromString_m10572 (Int32Converter_t1909 * __this, String_t* ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		NumberFormatInfo_t1037 * L_1 = ___format;
		int32_t L_2 = Int32_Parse_m9839(NULL /*static, unused*/, L_0, 7, L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Object System.ComponentModel.Int32Converter::ConvertFromString(System.String,System.Int32)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern "C" Object_t * Int32Converter_ConvertFromString_m10573 (Int32Converter_t1909 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		int32_t L_1 = ___fromBase;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m12768(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.ComponentModel.Int64Converter
#include "System_System_ComponentModel_Int64Converter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.Int64Converter
#include "System_System_ComponentModel_Int64ConverterMethodDeclarations.h"

// System.Int64
#include "mscorlib_System_Int64MethodDeclarations.h"


// System.Boolean System.ComponentModel.Int64Converter::get_SupportHex()
extern "C" bool Int64Converter_get_SupportHex_m10574 (Int64Converter_t1910 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.String System.ComponentModel.Int64Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern TypeInfo* Int64_t696_il2cpp_TypeInfo_var;
extern "C" String_t* Int64Converter_ConvertToString_m10575 (Int64Converter_t1910 * __this, Object_t * ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(986);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		V_0 = ((*(int64_t*)((int64_t*)UnBox (L_0, Int64_t696_il2cpp_TypeInfo_var))));
		NumberFormatInfo_t1037 * L_1 = ___format;
		String_t* L_2 = Int64_ToString_m12769((&V_0), (String_t*) &_stringLiteral2904, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object System.ComponentModel.Int64Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern TypeInfo* Int64_t696_il2cpp_TypeInfo_var;
extern "C" Object_t * Int64Converter_ConvertFromString_m10576 (Int64Converter_t1910 * __this, String_t* ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(986);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		NumberFormatInfo_t1037 * L_1 = ___format;
		int64_t L_2 = Int64_Parse_m9857(NULL /*static, unused*/, L_0, 7, L_1, /*hidden argument*/NULL);
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Object System.ComponentModel.Int64Converter::ConvertFromString(System.String,System.Int32)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t696_il2cpp_TypeInfo_var;
extern "C" Object_t * Int64Converter_ConvertFromString_m10577 (Int64Converter_t1910 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		Int64_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(986);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		int32_t L_1 = ___fromBase;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int64_t L_2 = Convert_ToInt64_m12770(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.ComponentModel.InvalidEnumArgumentException
#include "System_System_ComponentModel_InvalidEnumArgumentException.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.InvalidEnumArgumentException
#include "System_System_ComponentModel_InvalidEnumArgumentExceptionMethodDeclarations.h"



// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor()
extern "C" void InvalidEnumArgumentException__ctor_m10578 (InvalidEnumArgumentException_t1117 * __this, const MethodInfo* method)
{
	{
		InvalidEnumArgumentException__ctor_m4982(__this, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String)
extern "C" void InvalidEnumArgumentException__ctor_m4982 (InvalidEnumArgumentException_t1117 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		ArgumentException__ctor_m3152(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidEnumArgumentException__ctor_m10579 (InvalidEnumArgumentException_t1117 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___context;
		ArgumentException__ctor_m12771(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.ComponentModel.ListBindableAttribute
#include "System_System_ComponentModel_ListBindableAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.ListBindableAttribute
#include "System_System_ComponentModel_ListBindableAttributeMethodDeclarations.h"



// System.Void System.ComponentModel.ListBindableAttribute::.ctor(System.Boolean)
extern "C" void ListBindableAttribute__ctor_m5315 (ListBindableAttribute_t1185 * __this, bool ___listBindable, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		bool L_0 = ___listBindable;
		__this->___bindable_3 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.ListBindableAttribute::.cctor()
extern TypeInfo* ListBindableAttribute_t1185_il2cpp_TypeInfo_var;
extern "C" void ListBindableAttribute__cctor_m10580 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ListBindableAttribute_t1185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2108);
		s_Il2CppMethodIntialized = true;
	}
	{
		ListBindableAttribute_t1185 * L_0 = (ListBindableAttribute_t1185 *)il2cpp_codegen_object_new (ListBindableAttribute_t1185_il2cpp_TypeInfo_var);
		ListBindableAttribute__ctor_m5315(L_0, 1, /*hidden argument*/NULL);
		((ListBindableAttribute_t1185_StaticFields*)ListBindableAttribute_t1185_il2cpp_TypeInfo_var->static_fields)->___Default_0 = L_0;
		ListBindableAttribute_t1185 * L_1 = (ListBindableAttribute_t1185 *)il2cpp_codegen_object_new (ListBindableAttribute_t1185_il2cpp_TypeInfo_var);
		ListBindableAttribute__ctor_m5315(L_1, 0, /*hidden argument*/NULL);
		((ListBindableAttribute_t1185_StaticFields*)ListBindableAttribute_t1185_il2cpp_TypeInfo_var->static_fields)->___No_1 = L_1;
		ListBindableAttribute_t1185 * L_2 = (ListBindableAttribute_t1185 *)il2cpp_codegen_object_new (ListBindableAttribute_t1185_il2cpp_TypeInfo_var);
		ListBindableAttribute__ctor_m5315(L_2, 1, /*hidden argument*/NULL);
		((ListBindableAttribute_t1185_StaticFields*)ListBindableAttribute_t1185_il2cpp_TypeInfo_var->static_fields)->___Yes_2 = L_2;
		return;
	}
}
// System.Boolean System.ComponentModel.ListBindableAttribute::Equals(System.Object)
extern TypeInfo* ListBindableAttribute_t1185_il2cpp_TypeInfo_var;
extern "C" bool ListBindableAttribute_Equals_m10581 (ListBindableAttribute_t1185 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ListBindableAttribute_t1185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2108);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		Object_t * L_0 = ___obj;
		if (((ListBindableAttribute_t1185 *)IsInst(L_0, ListBindableAttribute_t1185_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___obj;
		NullCheck(((ListBindableAttribute_t1185 *)Castclass(L_1, ListBindableAttribute_t1185_il2cpp_TypeInfo_var)));
		bool L_2 = ListBindableAttribute_get_ListBindable_m10584(((ListBindableAttribute_t1185 *)Castclass(L_1, ListBindableAttribute_t1185_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = (__this->___bindable_3);
		bool L_4 = Boolean_Equals_m12772((&V_0), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.ComponentModel.ListBindableAttribute::GetHashCode()
extern "C" int32_t ListBindableAttribute_GetHashCode_m10582 (ListBindableAttribute_t1185 * __this, const MethodInfo* method)
{
	{
		bool* L_0 = &(__this->___bindable_3);
		int32_t L_1 = Boolean_GetHashCode_m12749(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.ComponentModel.ListBindableAttribute::IsDefaultAttribute()
extern TypeInfo* ListBindableAttribute_t1185_il2cpp_TypeInfo_var;
extern "C" bool ListBindableAttribute_IsDefaultAttribute_m10583 (ListBindableAttribute_t1185 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ListBindableAttribute_t1185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2108);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ListBindableAttribute_t1185_il2cpp_TypeInfo_var);
		ListBindableAttribute_t1185 * L_0 = ((ListBindableAttribute_t1185_StaticFields*)ListBindableAttribute_t1185_il2cpp_TypeInfo_var->static_fields)->___Default_0;
		bool L_1 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ComponentModel.ListBindableAttribute::Equals(System.Object) */, __this, L_0);
		return L_1;
	}
}
// System.Boolean System.ComponentModel.ListBindableAttribute::get_ListBindable()
extern "C" bool ListBindableAttribute_get_ListBindable_m10584 (ListBindableAttribute_t1185 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___bindable_3);
		return L_0;
	}
}
// System.ComponentModel.ListChangedEventArgs
#include "System_System_ComponentModel_ListChangedEventArgs.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.ListChangedEventArgs
#include "System_System_ComponentModel_ListChangedEventArgsMethodDeclarations.h"

// System.ComponentModel.ListChangedType
#include "System_System_ComponentModel_ListChangedType.h"


// System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.Int32,System.Int32)
extern TypeInfo* EventArgs_t912_il2cpp_TypeInfo_var;
extern "C" void ListChangedEventArgs__ctor_m5049 (ListChangedEventArgs_t1100 * __this, int32_t ___listChangedType, int32_t ___newIndex, int32_t ___oldIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1932);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t912_il2cpp_TypeInfo_var);
		EventArgs__ctor_m4987(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___listChangedType;
		__this->___changedType_1 = L_0;
		int32_t L_1 = ___newIndex;
		__this->___newIndex_3 = L_1;
		int32_t L_2 = ___oldIndex;
		__this->___oldIndex_2 = L_2;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.ListChangedType
#include "System_System_ComponentModel_ListChangedTypeMethodDeclarations.h"



// System.ComponentModel.ListSortDirection
#include "System_System_ComponentModel_ListSortDirection.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.ListSortDirection
#include "System_System_ComponentModel_ListSortDirectionMethodDeclarations.h"



// System.ComponentModel.MarshalByValueComponent
#include "System_System_ComponentModel_MarshalByValueComponent.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.MarshalByValueComponent
#include "System_System_ComponentModel_MarshalByValueComponentMethodDeclarations.h"



// System.Void System.ComponentModel.MarshalByValueComponent::.ctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" void MarshalByValueComponent__ctor_m4976 (MarshalByValueComponent_t910 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1291(L_0, /*hidden argument*/NULL);
		__this->___disposedEvent_2 = L_0;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.ComponentModel.MarshalByValueComponent::add_Disposed(System.EventHandler)
extern "C" void MarshalByValueComponent_add_Disposed_m5382 (MarshalByValueComponent_t910 * __this, EventHandler_t1926 * ___value, const MethodInfo* method)
{
	{
		EventHandlerList_t896 * L_0 = MarshalByValueComponent_get_Events_m10585(__this, /*hidden argument*/NULL);
		Object_t * L_1 = (__this->___disposedEvent_2);
		EventHandler_t1926 * L_2 = ___value;
		NullCheck(L_0);
		EventHandlerList_AddHandler_m4969(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.ComponentModel.MarshalByValueComponent::remove_Disposed(System.EventHandler)
extern "C" void MarshalByValueComponent_remove_Disposed_m5383 (MarshalByValueComponent_t910 * __this, EventHandler_t1926 * ___value, const MethodInfo* method)
{
	{
		EventHandlerList_t896 * L_0 = MarshalByValueComponent_get_Events_m10585(__this, /*hidden argument*/NULL);
		Object_t * L_1 = (__this->___disposedEvent_2);
		EventHandler_t1926 * L_2 = ___value;
		NullCheck(L_0);
		EventHandlerList_RemoveHandler_m4970(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.ComponentModel.MarshalByValueComponent::Dispose()
extern "C" void MarshalByValueComponent_Dispose_m5380 (MarshalByValueComponent_t910 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(9 /* System.Void System.ComponentModel.MarshalByValueComponent::Dispose(System.Boolean) */, __this, 1);
		GC_SuppressFinalize_m3572(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.ComponentModel.MarshalByValueComponent::Dispose(System.Boolean)
extern "C" void MarshalByValueComponent_Dispose_m5384 (MarshalByValueComponent_t910 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_0006;
		}
	}

IL_0006:
	{
		return;
	}
}
// System.Void System.ComponentModel.MarshalByValueComponent::Finalize()
extern "C" void MarshalByValueComponent_Finalize_m5379 (MarshalByValueComponent_t910 * __this, const MethodInfo* method)
{
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(9 /* System.Void System.ComponentModel.MarshalByValueComponent::Dispose(System.Boolean) */, __this, 0);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m1886(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0013:
	{
		return;
	}
}
// System.Object System.ComponentModel.MarshalByValueComponent::GetService(System.Type)
extern TypeInfo* IServiceProvider_t1197_il2cpp_TypeInfo_var;
extern "C" Object_t * MarshalByValueComponent_GetService_m5381 (MarshalByValueComponent_t910 * __this, Type_t * ___service, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IServiceProvider_t1197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2159);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___mySite_1);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_1 = (__this->___mySite_1);
		Type_t * L_2 = ___service;
		NullCheck(L_1);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Type_t * >::Invoke(0 /* System.Object System.IServiceProvider::GetService(System.Type) */, IServiceProvider_t1197_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_0018:
	{
		return NULL;
	}
}
// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::get_Site()
extern "C" Object_t * MarshalByValueComponent_get_Site_m5004 (MarshalByValueComponent_t910 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___mySite_1);
		return L_0;
	}
}
// System.Void System.ComponentModel.MarshalByValueComponent::set_Site(System.ComponentModel.ISite)
extern "C" void MarshalByValueComponent_set_Site_m5005 (MarshalByValueComponent_t910 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___mySite_1 = L_0;
		return;
	}
}
// System.String System.ComponentModel.MarshalByValueComponent::ToString()
extern TypeInfo* ISite_t934_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MarshalByValueComponent_ToString_m5385 (MarshalByValueComponent_t910 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISite_t934_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2200);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___mySite_1);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1416(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_1);
		return L_2;
	}

IL_0017:
	{
		Object_t * L_3 = (__this->___mySite_1);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.ComponentModel.ISite::get_Name() */, ISite_t934_il2cpp_TypeInfo_var, L_3);
		Type_t * L_5 = Object_GetType_m1416(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m3539(NULL /*static, unused*/, (String_t*) &_stringLiteral2908, L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::get_Events()
extern TypeInfo* EventHandlerList_t896_il2cpp_TypeInfo_var;
extern "C" EventHandlerList_t896 * MarshalByValueComponent_get_Events_m10585 (MarshalByValueComponent_t910 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandlerList_t896_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventHandlerList_t896 * L_0 = (__this->___eventList_0);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		EventHandlerList_t896 * L_1 = (EventHandlerList_t896 *)il2cpp_codegen_object_new (EventHandlerList_t896_il2cpp_TypeInfo_var);
		EventHandlerList__ctor_m4968(L_1, /*hidden argument*/NULL);
		__this->___eventList_0 = L_1;
	}

IL_0016:
	{
		EventHandlerList_t896 * L_2 = (__this->___eventList_0);
		return L_2;
	}
}
// System.ComponentModel.MemberDescriptor
#include "System_System_ComponentModel_MemberDescriptor.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.MemberDescriptor
#include "System_System_ComponentModel_MemberDescriptorMethodDeclarations.h"



// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.String,System.Attribute[])
extern "C" void MemberDescriptor__ctor_m10586 (MemberDescriptor_t1914 * __this, String_t* ___name, AttributeU5BU5D_t1913* ___attrs, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___name_0 = L_0;
		AttributeU5BU5D_t1913* L_1 = ___attrs;
		__this->___attrs_1 = L_1;
		return;
	}
}
// System.Attribute[] System.ComponentModel.MemberDescriptor::get_AttributeArray()
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* Attribute_t478_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeU5BU5D_t1913_il2cpp_TypeInfo_var;
extern "C" AttributeU5BU5D_t1913* MemberDescriptor_get_AttributeArray_m10587 (MemberDescriptor_t1914 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		Attribute_t478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1284);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		AttributeU5BU5D_t1913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4294);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t913 * V_0 = {0};
	Hashtable_t915 * V_1 = {0};
	Attribute_t478 * V_2 = {0};
	Object_t * V_3 = {0};
	AttributeU5BU5D_t1913* V_4 = {0};
	Object_t * V_5 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t913 * L_0 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		AttributeU5BU5D_t1913* L_1 = (__this->___attrs_1);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ArrayList_t913 * L_2 = V_0;
		AttributeU5BU5D_t1913* L_3 = (__this->___attrs_1);
		NullCheck(L_2);
		VirtActionInvoker1< Object_t * >::Invoke(40 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_2, (Object_t *)(Object_t *)L_3);
	}

IL_001d:
	{
		ArrayList_t913 * L_4 = V_0;
		VirtActionInvoker1< Object_t * >::Invoke(5 /* System.Void System.ComponentModel.MemberDescriptor::FillAttributes(System.Collections.IList) */, __this, L_4);
		Hashtable_t915 * L_5 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		ArrayList_t913 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_6);
		V_3 = L_7;
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004f;
		}

IL_0036:
		{
			Object_t * L_8 = V_3;
			NullCheck(L_8);
			Object_t * L_9 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_8);
			V_2 = ((Attribute_t478 *)Castclass(L_9, Attribute_t478_il2cpp_TypeInfo_var));
			Hashtable_t915 * L_10 = V_1;
			Attribute_t478 * L_11 = V_2;
			NullCheck(L_11);
			Object_t * L_12 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Object System.Attribute::get_TypeId() */, L_11);
			Attribute_t478 * L_13 = V_2;
			NullCheck(L_10);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_10, L_12, L_13);
		}

IL_004f:
		{
			Object_t * L_14 = V_3;
			NullCheck(L_14);
			bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0036;
			}
		}

IL_005a:
		{
			IL2CPP_LEAVE(0x74, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_16 = V_3;
			V_5 = ((Object_t *)IsInst(L_16, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_17 = V_5;
			if (L_17)
			{
				goto IL_006c;
			}
		}

IL_006b:
		{
			IL2CPP_END_FINALLY(95)
		}

IL_006c:
		{
			Object_t * L_18 = V_5;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_18);
			IL2CPP_END_FINALLY(95)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0074:
	{
		Hashtable_t915 * L_19 = V_1;
		NullCheck(L_19);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(23 /* System.Collections.ICollection System.Collections.Hashtable::get_Values() */, L_19);
		NullCheck(L_20);
		int32_t L_21 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t793_il2cpp_TypeInfo_var, L_20);
		V_4 = ((AttributeU5BU5D_t1913*)SZArrayNew(AttributeU5BU5D_t1913_il2cpp_TypeInfo_var, L_21));
		Hashtable_t915 * L_22 = V_1;
		NullCheck(L_22);
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(23 /* System.Collections.ICollection System.Collections.Hashtable::get_Values() */, L_22);
		AttributeU5BU5D_t1913* L_24 = V_4;
		NullCheck(L_23);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t793_il2cpp_TypeInfo_var, L_23, (Array_t *)(Array_t *)L_24, 0);
		AttributeU5BU5D_t1913* L_25 = V_4;
		return L_25;
	}
}
// System.Void System.ComponentModel.MemberDescriptor::FillAttributes(System.Collections.IList)
extern "C" void MemberDescriptor_FillAttributes_m10588 (MemberDescriptor_t1914 * __this, Object_t * ___attributeList, const MethodInfo* method)
{
	{
		return;
	}
}
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::get_Attributes()
extern "C" AttributeCollection_t1883 * MemberDescriptor_get_Attributes_m10589 (MemberDescriptor_t1914 * __this, const MethodInfo* method)
{
	{
		AttributeCollection_t1883 * L_0 = (__this->___attrCollection_2);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		AttributeCollection_t1883 * L_1 = (AttributeCollection_t1883 *)VirtFuncInvoker0< AttributeCollection_t1883 * >::Invoke(7 /* System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::CreateAttributeCollection() */, __this);
		__this->___attrCollection_2 = L_1;
	}

IL_0017:
	{
		AttributeCollection_t1883 * L_2 = (__this->___attrCollection_2);
		return L_2;
	}
}
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::CreateAttributeCollection()
extern TypeInfo* AttributeCollection_t1883_il2cpp_TypeInfo_var;
extern "C" AttributeCollection_t1883 * MemberDescriptor_CreateAttributeCollection_m10590 (MemberDescriptor_t1914 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeCollection_t1883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4280);
		s_Il2CppMethodIntialized = true;
	}
	{
		AttributeU5BU5D_t1913* L_0 = (AttributeU5BU5D_t1913*)VirtFuncInvoker0< AttributeU5BU5D_t1913* >::Invoke(4 /* System.Attribute[] System.ComponentModel.MemberDescriptor::get_AttributeArray() */, __this);
		AttributeCollection_t1883 * L_1 = (AttributeCollection_t1883 *)il2cpp_codegen_object_new (AttributeCollection_t1883_il2cpp_TypeInfo_var);
		AttributeCollection__ctor_m10412(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.ComponentModel.MemberDescriptor::get_Name()
extern "C" String_t* MemberDescriptor_get_Name_m10591 (MemberDescriptor_t1914 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_0);
		return L_0;
	}
}
// System.Int32 System.ComponentModel.MemberDescriptor::GetHashCode()
extern "C" int32_t MemberDescriptor_GetHashCode_m10592 (MemberDescriptor_t1914 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetHashCode_m1912(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.ComponentModel.MemberDescriptor::Equals(System.Object)
extern TypeInfo* MemberDescriptor_t1914_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool MemberDescriptor_Equals_m10593 (MemberDescriptor_t1914 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemberDescriptor_t1914_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4295);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	MemberDescriptor_t1914 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((MemberDescriptor_t1914 *)IsInst(L_0, MemberDescriptor_t1914_il2cpp_TypeInfo_var));
		MemberDescriptor_t1914 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		MemberDescriptor_t1914 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (L_2->___name_0);
		String_t* L_4 = (__this->___name_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1295(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.ComponentModel.MergablePropertyAttribute
#include "System_System_ComponentModel_MergablePropertyAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.MergablePropertyAttribute
#include "System_System_ComponentModel_MergablePropertyAttributeMethodDeclarations.h"



// System.Void System.ComponentModel.MergablePropertyAttribute::.ctor(System.Boolean)
extern "C" void MergablePropertyAttribute__ctor_m10594 (MergablePropertyAttribute_t1915 * __this, bool ___allowMerge, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		bool L_0 = ___allowMerge;
		__this->___mergable_0 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.MergablePropertyAttribute::.cctor()
extern TypeInfo* MergablePropertyAttribute_t1915_il2cpp_TypeInfo_var;
extern "C" void MergablePropertyAttribute__cctor_m10595 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MergablePropertyAttribute_t1915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4296);
		s_Il2CppMethodIntialized = true;
	}
	{
		MergablePropertyAttribute_t1915 * L_0 = (MergablePropertyAttribute_t1915 *)il2cpp_codegen_object_new (MergablePropertyAttribute_t1915_il2cpp_TypeInfo_var);
		MergablePropertyAttribute__ctor_m10594(L_0, 1, /*hidden argument*/NULL);
		((MergablePropertyAttribute_t1915_StaticFields*)MergablePropertyAttribute_t1915_il2cpp_TypeInfo_var->static_fields)->___Default_1 = L_0;
		MergablePropertyAttribute_t1915 * L_1 = (MergablePropertyAttribute_t1915 *)il2cpp_codegen_object_new (MergablePropertyAttribute_t1915_il2cpp_TypeInfo_var);
		MergablePropertyAttribute__ctor_m10594(L_1, 0, /*hidden argument*/NULL);
		((MergablePropertyAttribute_t1915_StaticFields*)MergablePropertyAttribute_t1915_il2cpp_TypeInfo_var->static_fields)->___No_2 = L_1;
		MergablePropertyAttribute_t1915 * L_2 = (MergablePropertyAttribute_t1915 *)il2cpp_codegen_object_new (MergablePropertyAttribute_t1915_il2cpp_TypeInfo_var);
		MergablePropertyAttribute__ctor_m10594(L_2, 1, /*hidden argument*/NULL);
		((MergablePropertyAttribute_t1915_StaticFields*)MergablePropertyAttribute_t1915_il2cpp_TypeInfo_var->static_fields)->___Yes_3 = L_2;
		return;
	}
}
// System.Boolean System.ComponentModel.MergablePropertyAttribute::get_AllowMerge()
extern "C" bool MergablePropertyAttribute_get_AllowMerge_m10596 (MergablePropertyAttribute_t1915 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___mergable_0);
		return L_0;
	}
}
// System.Boolean System.ComponentModel.MergablePropertyAttribute::Equals(System.Object)
extern TypeInfo* MergablePropertyAttribute_t1915_il2cpp_TypeInfo_var;
extern "C" bool MergablePropertyAttribute_Equals_m10597 (MergablePropertyAttribute_t1915 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MergablePropertyAttribute_t1915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4296);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (((MergablePropertyAttribute_t1915 *)IsInst(L_0, MergablePropertyAttribute_t1915_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___obj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(MergablePropertyAttribute_t1915 *)__this))))
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_2 = ___obj;
		NullCheck(((MergablePropertyAttribute_t1915 *)Castclass(L_2, MergablePropertyAttribute_t1915_il2cpp_TypeInfo_var)));
		bool L_3 = MergablePropertyAttribute_get_AllowMerge_m10596(((MergablePropertyAttribute_t1915 *)Castclass(L_2, MergablePropertyAttribute_t1915_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		bool L_4 = (__this->___mergable_0);
		return ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}
}
// System.Int32 System.ComponentModel.MergablePropertyAttribute::GetHashCode()
extern "C" int32_t MergablePropertyAttribute_GetHashCode_m10598 (MergablePropertyAttribute_t1915 * __this, const MethodInfo* method)
{
	{
		bool* L_0 = &(__this->___mergable_0);
		int32_t L_1 = Boolean_GetHashCode_m12749(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.ComponentModel.MergablePropertyAttribute::IsDefaultAttribute()
extern TypeInfo* MergablePropertyAttribute_t1915_il2cpp_TypeInfo_var;
extern "C" bool MergablePropertyAttribute_IsDefaultAttribute_m10599 (MergablePropertyAttribute_t1915 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MergablePropertyAttribute_t1915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4296);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___mergable_0);
		IL2CPP_RUNTIME_CLASS_INIT(MergablePropertyAttribute_t1915_il2cpp_TypeInfo_var);
		MergablePropertyAttribute_t1915 * L_1 = ((MergablePropertyAttribute_t1915_StaticFields*)MergablePropertyAttribute_t1915_il2cpp_TypeInfo_var->static_fields)->___Default_1;
		NullCheck(L_1);
		bool L_2 = MergablePropertyAttribute_get_AllowMerge_m10596(L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.ComponentModel.NullableConverter
#include "System_System_ComponentModel_NullableConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.NullableConverter
#include "System_System_ComponentModel_NullableConverterMethodDeclarations.h"



// System.Boolean System.ComponentModel.NullableConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool NullableConverter_CanConvertFrom_m10600 (NullableConverter_t1916 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___sourceType;
		Type_t * L_1 = (__this->___underlyingType_1);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		TypeConverter_t1427 * L_2 = (__this->___underlyingTypeConverter_2);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		TypeConverter_t1427 * L_3 = (__this->___underlyingTypeConverter_2);
		Object_t * L_4 = ___context;
		Type_t * L_5 = ___sourceType;
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, Type_t * >::Invoke(4 /* System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type) */, L_3, L_4, L_5);
		return L_6;
	}

IL_0027:
	{
		Object_t * L_7 = ___context;
		Type_t * L_8 = ___sourceType;
		bool L_9 = TypeConverter_CanConvertFrom_m5367(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean System.ComponentModel.NullableConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool NullableConverter_CanConvertTo_m10601 (NullableConverter_t1916 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___destinationType;
		Type_t * L_1 = (__this->___underlyingType_1);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		TypeConverter_t1427 * L_2 = (__this->___underlyingTypeConverter_2);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		TypeConverter_t1427 * L_3 = (__this->___underlyingTypeConverter_2);
		Object_t * L_4 = ___context;
		Type_t * L_5 = ___destinationType;
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, Type_t * >::Invoke(5 /* System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type) */, L_3, L_4, L_5);
		return L_6;
	}

IL_0027:
	{
		Object_t * L_7 = ___context;
		Type_t * L_8 = ___destinationType;
		bool L_9 = TypeConverter_CanConvertFrom_m5367(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Object System.ComponentModel.NullableConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * NullableConverter_ConvertFrom_m10602 (NullableConverter_t1916 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_1 = ___value;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m1416(L_1, /*hidden argument*/NULL);
		Type_t * L_3 = (__this->___underlyingType_1);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		Object_t * L_4 = ___value;
		return L_4;
	}

IL_0019:
	{
		Object_t * L_5 = ___value;
		if (!((String_t*)IsInst(L_5, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		Object_t * L_6 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, ((String_t*)Castclass(L_6, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		return NULL;
	}

IL_0036:
	{
		TypeConverter_t1427 * L_8 = (__this->___underlyingTypeConverter_2);
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		TypeConverter_t1427 * L_9 = (__this->___underlyingTypeConverter_2);
		Object_t * L_10 = ___context;
		CultureInfo_t693 * L_11 = ___culture;
		Object_t * L_12 = ___value;
		NullCheck(L_9);
		Object_t * L_13 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, CultureInfo_t693 *, Object_t * >::Invoke(6 /* System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object) */, L_9, L_10, L_11, L_12);
		return L_13;
	}

IL_0050:
	{
		Object_t * L_14 = ___context;
		CultureInfo_t693 * L_15 = ___culture;
		Object_t * L_16 = ___value;
		Object_t * L_17 = TypeConverter_ConvertFrom_m5368(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Object System.ComponentModel.NullableConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" Object_t * NullableConverter_ConvertTo_m10603 (NullableConverter_t1916 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___destinationType;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral2898, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Type_t * L_2 = ___destinationType;
		Type_t * L_3 = (__this->___underlyingType_1);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_0032;
		}
	}
	{
		Object_t * L_4 = ___value;
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m1416(L_4, /*hidden argument*/NULL);
		Type_t * L_6 = (__this->___nullableType_0);
		if ((!(((Object_t*)(Type_t *)L_5) == ((Object_t*)(Type_t *)L_6))))
		{
			goto IL_0032;
		}
	}
	{
		Object_t * L_7 = ___value;
		return L_7;
	}

IL_0032:
	{
		TypeConverter_t1427 * L_8 = (__this->___underlyingTypeConverter_2);
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		Object_t * L_9 = ___value;
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		TypeConverter_t1427 * L_10 = (__this->___underlyingTypeConverter_2);
		Object_t * L_11 = ___context;
		CultureInfo_t693 * L_12 = ___culture;
		Object_t * L_13 = ___value;
		Type_t * L_14 = ___destinationType;
		NullCheck(L_10);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker4< Object_t *, Object_t *, CultureInfo_t693 *, Object_t *, Type_t * >::Invoke(7 /* System.Object System.ComponentModel.TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type) */, L_10, L_11, L_12, L_13, L_14);
		return L_15;
	}

IL_0054:
	{
		Object_t * L_16 = ___context;
		CultureInfo_t693 * L_17 = ___culture;
		Object_t * L_18 = ___value;
		Type_t * L_19 = ___destinationType;
		Object_t * L_20 = TypeConverter_ConvertTo_m10711(__this, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Boolean System.ComponentModel.NullableConverter::GetCreateInstanceSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool NullableConverter_GetCreateInstanceSupported_m10604 (NullableConverter_t1916 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		TypeConverter_t1427 * L_0 = (__this->___underlyingTypeConverter_2);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		TypeConverter_t1427 * L_1 = (__this->___underlyingTypeConverter_2);
		Object_t * L_2 = ___context;
		NullCheck(L_1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(8 /* System.Boolean System.ComponentModel.TypeConverter::GetCreateInstanceSupported(System.ComponentModel.ITypeDescriptorContext) */, L_1, L_2);
		return L_3;
	}

IL_0018:
	{
		Object_t * L_4 = ___context;
		bool L_5 = TypeConverter_GetCreateInstanceSupported_m5369(__this, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.NullableConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t936 * NullableConverter_GetProperties_m10605 (NullableConverter_t1916 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1913* ___attributes, const MethodInfo* method)
{
	{
		TypeConverter_t1427 * L_0 = (__this->___underlyingTypeConverter_2);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		TypeConverter_t1427 * L_1 = (__this->___underlyingTypeConverter_2);
		Object_t * L_2 = ___context;
		Object_t * L_3 = ___value;
		AttributeU5BU5D_t1913* L_4 = ___attributes;
		NullCheck(L_1);
		PropertyDescriptorCollection_t936 * L_5 = (PropertyDescriptorCollection_t936 *)VirtFuncInvoker3< PropertyDescriptorCollection_t936 *, Object_t *, Object_t *, AttributeU5BU5D_t1913* >::Invoke(9 /* System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[]) */, L_1, L_2, L_3, L_4);
		return L_5;
	}

IL_001a:
	{
		Object_t * L_6 = ___context;
		Object_t * L_7 = ___value;
		AttributeU5BU5D_t1913* L_8 = ___attributes;
		PropertyDescriptorCollection_t936 * L_9 = TypeConverter_GetProperties_m10716(__this, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean System.ComponentModel.NullableConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool NullableConverter_GetPropertiesSupported_m10606 (NullableConverter_t1916 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		TypeConverter_t1427 * L_0 = (__this->___underlyingTypeConverter_2);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		TypeConverter_t1427 * L_1 = (__this->___underlyingTypeConverter_2);
		Object_t * L_2 = ___context;
		NullCheck(L_1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(8 /* System.Boolean System.ComponentModel.TypeConverter::GetCreateInstanceSupported(System.ComponentModel.ITypeDescriptorContext) */, L_1, L_2);
		return L_3;
	}

IL_0018:
	{
		Object_t * L_4 = ___context;
		bool L_5 = TypeConverter_GetCreateInstanceSupported_m5369(__this, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.NullableConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* StandardValuesCollection_t1893_il2cpp_TypeInfo_var;
extern "C" StandardValuesCollection_t1893 * NullableConverter_GetStandardValues_m10607 (NullableConverter_t1916 * __this, Object_t * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		StandardValuesCollection_t1893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4281);
		s_Il2CppMethodIntialized = true;
	}
	StandardValuesCollection_t1893 * V_0 = {0};
	ArrayList_t913 * V_1 = {0};
	{
		TypeConverter_t1427 * L_0 = (__this->___underlyingTypeConverter_2);
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		TypeConverter_t1427 * L_1 = (__this->___underlyingTypeConverter_2);
		Object_t * L_2 = ___context;
		NullCheck(L_1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(13 /* System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext) */, L_1, L_2);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		TypeConverter_t1427 * L_4 = (__this->___underlyingTypeConverter_2);
		Object_t * L_5 = ___context;
		NullCheck(L_4);
		StandardValuesCollection_t1893 * L_6 = (StandardValuesCollection_t1893 *)VirtFuncInvoker1< StandardValuesCollection_t1893 *, Object_t * >::Invoke(11 /* System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.TypeConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext) */, L_4, L_5);
		V_0 = L_6;
		StandardValuesCollection_t1893 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		StandardValuesCollection_t1893 * L_8 = V_0;
		ArrayList_t913 * L_9 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m5070(L_9, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		ArrayList_t913 * L_10 = V_1;
		NullCheck(L_10);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_10, NULL);
		ArrayList_t913 * L_11 = V_1;
		StandardValuesCollection_t1893 * L_12 = (StandardValuesCollection_t1893 *)il2cpp_codegen_object_new (StandardValuesCollection_t1893_il2cpp_TypeInfo_var);
		StandardValuesCollection__ctor_m10699(L_12, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0045:
	{
		Object_t * L_13 = ___context;
		StandardValuesCollection_t1893 * L_14 = TypeConverter_GetStandardValues_m5372(__this, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Boolean System.ComponentModel.NullableConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool NullableConverter_GetStandardValuesExclusive_m10608 (NullableConverter_t1916 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		TypeConverter_t1427 * L_0 = (__this->___underlyingTypeConverter_2);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		TypeConverter_t1427 * L_1 = (__this->___underlyingTypeConverter_2);
		Object_t * L_2 = ___context;
		NullCheck(L_1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(12 /* System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext) */, L_1, L_2);
		return L_3;
	}

IL_0018:
	{
		Object_t * L_4 = ___context;
		bool L_5 = TypeConverter_GetStandardValuesExclusive_m5373(__this, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.ComponentModel.NullableConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool NullableConverter_GetStandardValuesSupported_m10609 (NullableConverter_t1916 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		TypeConverter_t1427 * L_0 = (__this->___underlyingTypeConverter_2);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		TypeConverter_t1427 * L_1 = (__this->___underlyingTypeConverter_2);
		Object_t * L_2 = ___context;
		NullCheck(L_1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(13 /* System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext) */, L_1, L_2);
		return L_3;
	}

IL_0018:
	{
		Object_t * L_4 = ___context;
		bool L_5 = TypeConverter_GetStandardValuesSupported_m5374(__this, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.ComponentModel.NullableConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" bool NullableConverter_IsValid_m10610 (NullableConverter_t1916 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method)
{
	{
		TypeConverter_t1427 * L_0 = (__this->___underlyingTypeConverter_2);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		TypeConverter_t1427 * L_1 = (__this->___underlyingTypeConverter_2);
		Object_t * L_2 = ___context;
		Object_t * L_3 = ___value;
		NullCheck(L_1);
		bool L_4 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(14 /* System.Boolean System.ComponentModel.TypeConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object) */, L_1, L_2, L_3);
		return L_4;
	}

IL_0019:
	{
		Object_t * L_5 = ___context;
		Object_t * L_6 = ___value;
		bool L_7 = TypeConverter_IsValid_m5375(__this, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.ComponentModel.PropertyChangedEventArgs
#include "System_System_ComponentModel_PropertyChangedEventArgs.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.PropertyChangedEventArgs
#include "System_System_ComponentModel_PropertyChangedEventArgsMethodDeclarations.h"



// System.Void System.ComponentModel.PropertyChangedEventArgs::.ctor(System.String)
extern TypeInfo* EventArgs_t912_il2cpp_TypeInfo_var;
extern "C" void PropertyChangedEventArgs__ctor_m4986 (PropertyChangedEventArgs_t1099 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1932);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t912_il2cpp_TypeInfo_var);
		EventArgs__ctor_m4987(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___propertyName_1 = L_0;
		return;
	}
}
// System.String System.ComponentModel.PropertyChangedEventArgs::get_PropertyName()
extern "C" String_t* PropertyChangedEventArgs_get_PropertyName_m10611 (PropertyChangedEventArgs_t1099 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___propertyName_1);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.StringComparison
#include "mscorlib_System_StringComparison.h"


// System.Void System.ComponentModel.PropertyDescriptorCollection::.ctor(System.ComponentModel.PropertyDescriptor[])
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" void PropertyDescriptorCollection__ctor_m10612 (PropertyDescriptorCollection_t936 * __this, PropertyDescriptorU5BU5D_t2216* ___properties, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		ArrayList_t913 * L_0 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_0, /*hidden argument*/NULL);
		__this->___properties_1 = L_0;
		PropertyDescriptorU5BU5D_t2216* L_1 = ___properties;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		ArrayList_t913 * L_2 = (__this->___properties_1);
		PropertyDescriptorU5BU5D_t2216* L_3 = ___properties;
		NullCheck(L_2);
		VirtActionInvoker1< Object_t * >::Invoke(40 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_2, (Object_t *)(Object_t *)L_3);
		return;
	}
}
// System.Void System.ComponentModel.PropertyDescriptorCollection::.ctor(System.ComponentModel.PropertyDescriptor[],System.Boolean)
extern "C" void PropertyDescriptorCollection__ctor_m10613 (PropertyDescriptorCollection_t936 * __this, PropertyDescriptorU5BU5D_t2216* ___properties, bool ___readOnly, const MethodInfo* method)
{
	{
		PropertyDescriptorU5BU5D_t2216* L_0 = ___properties;
		PropertyDescriptorCollection__ctor_m10612(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___readOnly;
		__this->___readOnly_2 = L_1;
		return;
	}
}
// System.Void System.ComponentModel.PropertyDescriptorCollection::.cctor()
extern TypeInfo* PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var;
extern "C" void PropertyDescriptorCollection__cctor_m10614 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4278);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyDescriptorCollection_t936 * L_0 = (PropertyDescriptorCollection_t936 *)il2cpp_codegen_object_new (PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var);
		PropertyDescriptorCollection__ctor_m10613(L_0, (PropertyDescriptorU5BU5D_t2216*)(PropertyDescriptorU5BU5D_t2216*)NULL, 1, /*hidden argument*/NULL);
		((PropertyDescriptorCollection_t936_StaticFields*)PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var->static_fields)->___Empty_0 = L_0;
		return;
	}
}
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Add(System.Object)
extern TypeInfo* PropertyDescriptor_t1880_il2cpp_TypeInfo_var;
extern "C" int32_t PropertyDescriptorCollection_System_Collections_IList_Add_m10615 (PropertyDescriptorCollection_t936 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyDescriptor_t1880_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4297);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		int32_t L_1 = PropertyDescriptorCollection_Add_m10636(__this, ((PropertyDescriptor_t1880 *)Castclass(L_0, PropertyDescriptor_t1880_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Add(System.Object,System.Object)
extern TypeInfo* PropertyDescriptor_t1880_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" void PropertyDescriptorCollection_System_Collections_IDictionary_Add_m10616 (PropertyDescriptorCollection_t936 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyDescriptor_t1880_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4297);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (((PropertyDescriptor_t1880 *)IsInst(L_0, PropertyDescriptor_t1880_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t356 * L_1 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_1, (String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t * L_2 = ___value;
		PropertyDescriptorCollection_Add_m10636(__this, ((PropertyDescriptor_t1880 *)Castclass(L_2, PropertyDescriptor_t1880_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Clear()
extern "C" void PropertyDescriptorCollection_System_Collections_IList_Clear_m10617 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(26 /* System.Void System.ComponentModel.PropertyDescriptorCollection::Clear() */, __this);
		return;
	}
}
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Clear()
extern "C" void PropertyDescriptorCollection_System_Collections_IDictionary_Clear_m10618 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(26 /* System.Void System.ComponentModel.PropertyDescriptorCollection::Clear() */, __this);
		return;
	}
}
// System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Contains(System.Object)
extern TypeInfo* PropertyDescriptor_t1880_il2cpp_TypeInfo_var;
extern "C" bool PropertyDescriptorCollection_System_Collections_IList_Contains_m10619 (PropertyDescriptorCollection_t936 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyDescriptor_t1880_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4297);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		bool L_1 = PropertyDescriptorCollection_Contains_m10638(__this, ((PropertyDescriptor_t1880 *)Castclass(L_0, PropertyDescriptor_t1880_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* PropertyDescriptor_t1880_il2cpp_TypeInfo_var;
extern "C" bool PropertyDescriptorCollection_System_Collections_IDictionary_Contains_m10620 (PropertyDescriptorCollection_t936 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyDescriptor_t1880_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4297);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		bool L_1 = PropertyDescriptorCollection_Contains_m10638(__this, ((PropertyDescriptor_t1880 *)Castclass(L_0, PropertyDescriptor_t1880_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator System.ComponentModel.PropertyDescriptorCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IEnumerable_GetEnumerator_m10621 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Collections.IEnumerator System.ComponentModel.PropertyDescriptorCollection::GetEnumerator() */, __this);
		return L_0;
	}
}
// System.Collections.IDictionaryEnumerator System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.GetEnumerator()
extern TypeInfo* NotImplementedException_t333_il2cpp_TypeInfo_var;
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IDictionary_GetEnumerator_m10622 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t333 * L_0 = (NotImplementedException_t333 *)il2cpp_codegen_object_new (NotImplementedException_t333_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m4967(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* PropertyDescriptor_t1880_il2cpp_TypeInfo_var;
extern "C" int32_t PropertyDescriptorCollection_System_Collections_IList_IndexOf_m10623 (PropertyDescriptorCollection_t936 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyDescriptor_t1880_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4297);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		int32_t L_1 = PropertyDescriptorCollection_IndexOf_m10642(__this, ((PropertyDescriptor_t1880 *)Castclass(L_0, PropertyDescriptor_t1880_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* PropertyDescriptor_t1880_il2cpp_TypeInfo_var;
extern "C" void PropertyDescriptorCollection_System_Collections_IList_Insert_m10624 (PropertyDescriptorCollection_t936 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyDescriptor_t1880_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4297);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		PropertyDescriptorCollection_Insert_m10643(__this, L_0, ((PropertyDescriptor_t1880 *)Castclass(L_1, PropertyDescriptor_t1880_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* PropertyDescriptor_t1880_il2cpp_TypeInfo_var;
extern "C" void PropertyDescriptorCollection_System_Collections_IDictionary_Remove_m10625 (PropertyDescriptorCollection_t936 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyDescriptor_t1880_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4297);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		PropertyDescriptorCollection_Remove_m10644(__this, ((PropertyDescriptor_t1880 *)Castclass(L_0, PropertyDescriptor_t1880_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Remove(System.Object)
extern TypeInfo* PropertyDescriptor_t1880_il2cpp_TypeInfo_var;
extern "C" void PropertyDescriptorCollection_System_Collections_IList_Remove_m10626 (PropertyDescriptorCollection_t936 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyDescriptor_t1880_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4297);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		PropertyDescriptorCollection_Remove_m10644(__this, ((PropertyDescriptor_t1880 *)Castclass(L_0, PropertyDescriptor_t1880_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void PropertyDescriptorCollection_System_Collections_IList_RemoveAt_m10627 (PropertyDescriptorCollection_t936 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		VirtActionInvoker1< int32_t >::Invoke(29 /* System.Void System.ComponentModel.PropertyDescriptorCollection::RemoveAt(System.Int32) */, __this, L_0);
		return;
	}
}
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::System.Collections.ICollection.get_Count()
extern "C" int32_t PropertyDescriptorCollection_System_Collections_ICollection_get_Count_m10628 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(30 /* System.Int32 System.ComponentModel.PropertyDescriptorCollection::get_Count() */, __this);
		return L_0;
	}
}
// System.Object System.ComponentModel.PropertyDescriptorCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_ICollection_get_SyncRoot_m10629 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method)
{
	{
		return NULL;
	}
}
// System.Collections.ICollection System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.get_Keys()
extern TypeInfo* StringU5BU5D_t258_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyDescriptor_t1880_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IDictionary_get_Keys_m10630 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		PropertyDescriptor_t1880_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4297);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t258* V_0 = {0};
	int32_t V_1 = 0;
	PropertyDescriptor_t1880 * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t913 * L_0 = (__this->___properties_1);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		V_0 = ((StringU5BU5D_t258*)SZArrayNew(StringU5BU5D_t258_il2cpp_TypeInfo_var, L_1));
		V_1 = 0;
		ArrayList_t913 * L_2 = (__this->___properties_1);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_2);
		V_3 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003d;
		}

IL_0024:
		{
			Object_t * L_4 = V_3;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_4);
			V_2 = ((PropertyDescriptor_t1880 *)Castclass(L_5, PropertyDescriptor_t1880_il2cpp_TypeInfo_var));
			StringU5BU5D_t258* L_6 = V_0;
			int32_t L_7 = V_1;
			int32_t L_8 = L_7;
			V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
			PropertyDescriptor_t1880 * L_9 = V_2;
			NullCheck(L_9);
			String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.ComponentModel.MemberDescriptor::get_Name() */, L_9);
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
			ArrayElementTypeCheck (L_6, L_10);
			*((String_t**)(String_t**)SZArrayLdElema(L_6, L_8)) = (String_t*)L_10;
		}

IL_003d:
		{
			Object_t * L_11 = V_3;
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_0024;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x62, FINALLY_004d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_004d;
	}

FINALLY_004d:
	{ // begin finally (depth: 1)
		{
			Object_t * L_13 = V_3;
			V_4 = ((Object_t *)IsInst(L_13, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_14 = V_4;
			if (L_14)
			{
				goto IL_005a;
			}
		}

IL_0059:
		{
			IL2CPP_END_FINALLY(77)
		}

IL_005a:
		{
			Object_t * L_15 = V_4;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(77)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(77)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0062:
	{
		StringU5BU5D_t258* L_16 = V_0;
		return (Object_t *)L_16;
	}
}
// System.Collections.ICollection System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.get_Values()
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IDictionary_get_Values_m10631 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t913 * L_0 = (__this->___properties_1);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(45 /* System.Object System.Collections.ArrayList::Clone() */, L_0);
		return ((Object_t *)Castclass(L_1, ICollection_t793_il2cpp_TypeInfo_var));
	}
}
// System.Object System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.get_Item(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IDictionary_get_Item_m10632 (PropertyDescriptorCollection_t936 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (((String_t*)IsInst(L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return NULL;
	}

IL_000d:
	{
		Object_t * L_1 = ___key;
		PropertyDescriptor_t1880 * L_2 = (PropertyDescriptor_t1880 *)VirtFuncInvoker1< PropertyDescriptor_t1880 *, String_t* >::Invoke(31 /* System.ComponentModel.PropertyDescriptor System.ComponentModel.PropertyDescriptorCollection::get_Item(System.String) */, __this, ((String_t*)Castclass(L_1, String_t_il2cpp_TypeInfo_var)));
		return L_2;
	}
}
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyDescriptor_t1880_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" void PropertyDescriptorCollection_System_Collections_IDictionary_set_Item_m10633 (PropertyDescriptorCollection_t936 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		PropertyDescriptor_t1880_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4297);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___readOnly_2);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t303 * L_1 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1312(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((String_t*)IsInst(L_2, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		Object_t * L_3 = ___value;
		if (((PropertyDescriptor_t1880 *)IsInst(L_3, PropertyDescriptor_t1880_il2cpp_TypeInfo_var)))
		{
			goto IL_002d;
		}
	}

IL_0027:
	{
		ArgumentException_t356 * L_4 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4995(L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002d:
	{
		ArrayList_t913 * L_5 = (__this->___properties_1);
		Object_t * L_6 = ___value;
		NullCheck(L_5);
		int32_t L_7 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::IndexOf(System.Object) */, L_5, L_6);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_0053;
		}
	}
	{
		Object_t * L_9 = ___value;
		PropertyDescriptorCollection_Add_m10636(__this, ((PropertyDescriptor_t1880 *)Castclass(L_9, PropertyDescriptor_t1880_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_0060;
	}

IL_0053:
	{
		ArrayList_t913 * L_10 = (__this->___properties_1);
		int32_t L_11 = V_0;
		Object_t * L_12 = ___value;
		NullCheck(L_10);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(19 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_10, L_11, L_12);
	}

IL_0060:
	{
		return;
	}
}
// System.Object System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IList_get_Item_m10634 (PropertyDescriptorCollection_t936 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___properties_1);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void PropertyDescriptorCollection_System_Collections_IList_set_Item_m10635 (PropertyDescriptorCollection_t936 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___readOnly_2);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t303 * L_1 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1312(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		ArrayList_t913 * L_2 = (__this->___properties_1);
		int32_t L_3 = ___index;
		Object_t * L_4 = ___value;
		NullCheck(L_2);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(19 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_2, L_3, L_4);
		return;
	}
}
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::Add(System.ComponentModel.PropertyDescriptor)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" int32_t PropertyDescriptorCollection_Add_m10636 (PropertyDescriptorCollection_t936 * __this, PropertyDescriptor_t1880 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___readOnly_2);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t303 * L_1 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1312(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		ArrayList_t913 * L_2 = (__this->___properties_1);
		PropertyDescriptor_t1880 * L_3 = ___value;
		NullCheck(L_2);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_2, L_3);
		ArrayList_t913 * L_4 = (__this->___properties_1);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_4);
		return ((int32_t)((int32_t)L_5-(int32_t)1));
	}
}
// System.Void System.ComponentModel.PropertyDescriptorCollection::Clear()
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void PropertyDescriptorCollection_Clear_m10637 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___readOnly_2);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t303 * L_1 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1312(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		ArrayList_t913 * L_2 = (__this->___properties_1);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(27 /* System.Void System.Collections.ArrayList::Clear() */, L_2);
		return;
	}
}
// System.Boolean System.ComponentModel.PropertyDescriptorCollection::Contains(System.ComponentModel.PropertyDescriptor)
extern "C" bool PropertyDescriptorCollection_Contains_m10638 (PropertyDescriptorCollection_t936 * __this, PropertyDescriptor_t1880 * ___value, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___properties_1);
		PropertyDescriptor_t1880 * L_1 = ___value;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.ComponentModel.PropertyDescriptorCollection::CopyTo(System.Array,System.Int32)
extern "C" void PropertyDescriptorCollection_CopyTo_m10639 (PropertyDescriptorCollection_t936 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___properties_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(37 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.ComponentModel.PropertyDescriptor System.ComponentModel.PropertyDescriptorCollection::Find(System.String,System.Boolean)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyDescriptor_t1880_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" PropertyDescriptor_t1880 * PropertyDescriptorCollection_Find_m10640 (PropertyDescriptorCollection_t936 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		PropertyDescriptor_t1880_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4297);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	PropertyDescriptor_t1880 * V_1 = {0};
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral302, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_0061;
	}

IL_0018:
	{
		ArrayList_t913 * L_2 = (__this->___properties_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		V_1 = ((PropertyDescriptor_t1880 *)Castclass(L_4, PropertyDescriptor_t1880_il2cpp_TypeInfo_var));
		bool L_5 = ___ignoreCase;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_6 = ___name;
		PropertyDescriptor_t1880 * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.ComponentModel.MemberDescriptor::get_Name() */, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_9 = String_Compare_m5245(NULL /*static, unused*/, L_6, L_8, 5, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0044;
		}
	}
	{
		PropertyDescriptor_t1880 * L_10 = V_1;
		return L_10;
	}

IL_0044:
	{
		goto IL_005d;
	}

IL_0049:
	{
		String_t* L_11 = ___name;
		PropertyDescriptor_t1880 * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.ComponentModel.MemberDescriptor::get_Name() */, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_14 = String_Compare_m5245(NULL /*static, unused*/, L_11, L_13, 4, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_005d;
		}
	}
	{
		PropertyDescriptor_t1880 * L_15 = V_1;
		return L_15;
	}

IL_005d:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0061:
	{
		int32_t L_17 = V_0;
		ArrayList_t913 * L_18 = (__this->___properties_1);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_18);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0018;
		}
	}
	{
		return (PropertyDescriptor_t1880 *)NULL;
	}
}
// System.Collections.IEnumerator System.ComponentModel.PropertyDescriptorCollection::GetEnumerator()
extern "C" Object_t * PropertyDescriptorCollection_GetEnumerator_m10641 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___properties_1);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::IndexOf(System.ComponentModel.PropertyDescriptor)
extern "C" int32_t PropertyDescriptorCollection_IndexOf_m10642 (PropertyDescriptorCollection_t936 * __this, PropertyDescriptor_t1880 * ___value, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___properties_1);
		PropertyDescriptor_t1880 * L_1 = ___value;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::IndexOf(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.ComponentModel.PropertyDescriptorCollection::Insert(System.Int32,System.ComponentModel.PropertyDescriptor)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void PropertyDescriptorCollection_Insert_m10643 (PropertyDescriptorCollection_t936 * __this, int32_t ___index, PropertyDescriptor_t1880 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___readOnly_2);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t303 * L_1 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1312(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		ArrayList_t913 * L_2 = (__this->___properties_1);
		int32_t L_3 = ___index;
		PropertyDescriptor_t1880 * L_4 = ___value;
		NullCheck(L_2);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(32 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_2, L_3, L_4);
		return;
	}
}
// System.Void System.ComponentModel.PropertyDescriptorCollection::Remove(System.ComponentModel.PropertyDescriptor)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void PropertyDescriptorCollection_Remove_m10644 (PropertyDescriptorCollection_t936 * __this, PropertyDescriptor_t1880 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___readOnly_2);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t303 * L_1 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1312(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		ArrayList_t913 * L_2 = (__this->___properties_1);
		PropertyDescriptor_t1880 * L_3 = ___value;
		NullCheck(L_2);
		VirtActionInvoker1< Object_t * >::Invoke(34 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_2, L_3);
		return;
	}
}
// System.Void System.ComponentModel.PropertyDescriptorCollection::RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void PropertyDescriptorCollection_RemoveAt_m10645 (PropertyDescriptorCollection_t936 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___readOnly_2);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t303 * L_1 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1312(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		ArrayList_t913 * L_2 = (__this->___properties_1);
		int32_t L_3 = ___index;
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_2, L_3);
		return;
	}
}
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Filter(System.Attribute[])
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyDescriptor_t1880_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyDescriptorU5BU5D_t2216_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var;
extern "C" PropertyDescriptorCollection_t936 * PropertyDescriptorCollection_Filter_m10646 (PropertyDescriptorCollection_t936 * __this, AttributeU5BU5D_t1913* ___attributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		PropertyDescriptor_t1880_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4297);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		PropertyDescriptorU5BU5D_t2216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4298);
		PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4278);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t913 * V_0 = {0};
	PropertyDescriptor_t1880 * V_1 = {0};
	Object_t * V_2 = {0};
	PropertyDescriptorU5BU5D_t2216* V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t913 * L_0 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ArrayList_t913 * L_1 = (__this->___properties_1);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
		V_2 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003c;
		}

IL_0017:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_3);
			V_1 = ((PropertyDescriptor_t1880 *)Castclass(L_4, PropertyDescriptor_t1880_il2cpp_TypeInfo_var));
			PropertyDescriptor_t1880 * L_5 = V_1;
			NullCheck(L_5);
			AttributeCollection_t1883 * L_6 = (AttributeCollection_t1883 *)VirtFuncInvoker0< AttributeCollection_t1883 * >::Invoke(6 /* System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::get_Attributes() */, L_5);
			AttributeU5BU5D_t1913* L_7 = ___attributes;
			NullCheck(L_6);
			bool L_8 = AttributeCollection_Contains_m10418(L_6, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003c;
			}
		}

IL_0034:
		{
			ArrayList_t913 * L_9 = V_0;
			PropertyDescriptor_t1880 * L_10 = V_1;
			NullCheck(L_9);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_9, L_10);
		}

IL_003c:
		{
			Object_t * L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_0017;
			}
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x61, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		{
			Object_t * L_13 = V_2;
			V_4 = ((Object_t *)IsInst(L_13, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_14 = V_4;
			if (L_14)
			{
				goto IL_0059;
			}
		}

IL_0058:
		{
			IL2CPP_END_FINALLY(76)
		}

IL_0059:
		{
			Object_t * L_15 = V_4;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(76)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0061:
	{
		ArrayList_t913 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_16);
		V_3 = ((PropertyDescriptorU5BU5D_t2216*)SZArrayNew(PropertyDescriptorU5BU5D_t2216_il2cpp_TypeInfo_var, L_17));
		ArrayList_t913 * L_18 = V_0;
		PropertyDescriptorU5BU5D_t2216* L_19 = V_3;
		NullCheck(L_18);
		VirtActionInvoker1< Array_t * >::Invoke(36 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_18, (Array_t *)(Array_t *)L_19);
		PropertyDescriptorU5BU5D_t2216* L_20 = V_3;
		PropertyDescriptorCollection_t936 * L_21 = (PropertyDescriptorCollection_t936 *)il2cpp_codegen_object_new (PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var);
		PropertyDescriptorCollection__ctor_m10613(L_21, L_20, 1, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::get_Count()
extern "C" int32_t PropertyDescriptorCollection_get_Count_m10647 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___properties_1);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.ComponentModel.PropertyDescriptor System.ComponentModel.PropertyDescriptorCollection::get_Item(System.String)
extern "C" PropertyDescriptor_t1880 * PropertyDescriptorCollection_get_Item_m10648 (PropertyDescriptorCollection_t936 * __this, String_t* ___s, const MethodInfo* method)
{
	{
		String_t* L_0 = ___s;
		PropertyDescriptor_t1880 * L_1 = (PropertyDescriptor_t1880 *)VirtFuncInvoker2< PropertyDescriptor_t1880 *, String_t*, bool >::Invoke(27 /* System.ComponentModel.PropertyDescriptor System.ComponentModel.PropertyDescriptorCollection::Find(System.String,System.Boolean) */, __this, L_0, 0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.String,System.Attribute[])
extern "C" void PropertyDescriptor__ctor_m10649 (PropertyDescriptor_t1880 * __this, String_t* ___name, AttributeU5BU5D_t1913* ___attrs, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		AttributeU5BU5D_t1913* L_1 = ___attrs;
		MemberDescriptor__ctor_m10586(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Type System.ComponentModel.PropertyDescriptor::get_ComponentType()
// System.Type System.ComponentModel.PropertyDescriptor::get_PropertyType()
// System.Void System.ComponentModel.PropertyDescriptor::FillAttributes(System.Collections.IList)
extern "C" void PropertyDescriptor_FillAttributes_m10650 (PropertyDescriptor_t1880 * __this, Object_t * ___attributeList, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___attributeList;
		MemberDescriptor_FillAttributes_m10588(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.ComponentModel.PropertyDescriptor::Equals(System.Object)
extern TypeInfo* PropertyDescriptor_t1880_il2cpp_TypeInfo_var;
extern "C" bool PropertyDescriptor_Equals_m10651 (PropertyDescriptor_t1880 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyDescriptor_t1880_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4297);
		s_Il2CppMethodIntialized = true;
	}
	PropertyDescriptor_t1880 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		bool L_1 = MemberDescriptor_Equals_m10593(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Object_t * L_2 = ___obj;
		V_0 = ((PropertyDescriptor_t1880 *)IsInst(L_2, PropertyDescriptor_t1880_il2cpp_TypeInfo_var));
		PropertyDescriptor_t1880 * L_3 = V_0;
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		return 0;
	}

IL_001d:
	{
		PropertyDescriptor_t1880 * L_4 = V_0;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.ComponentModel.PropertyDescriptor::get_PropertyType() */, L_4);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.ComponentModel.PropertyDescriptor::get_PropertyType() */, __this);
		return ((((Object_t*)(Type_t *)L_5) == ((Object_t*)(Type_t *)L_6))? 1 : 0);
	}
}
// System.Int32 System.ComponentModel.PropertyDescriptor::GetHashCode()
extern "C" int32_t PropertyDescriptor_GetHashCode_m10652 (PropertyDescriptor_t1880 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = MemberDescriptor_GetHashCode_m10592(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.ComponentModel.ReadOnlyAttribute
#include "System_System_ComponentModel_ReadOnlyAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.ReadOnlyAttribute
#include "System_System_ComponentModel_ReadOnlyAttributeMethodDeclarations.h"



// System.Void System.ComponentModel.ReadOnlyAttribute::.ctor(System.Boolean)
extern "C" void ReadOnlyAttribute__ctor_m5316 (ReadOnlyAttribute_t1186 * __this, bool ___read_only, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		bool L_0 = ___read_only;
		__this->___read_only_0 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.ReadOnlyAttribute::.cctor()
extern TypeInfo* ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyAttribute__cctor_m10653 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2110);
		s_Il2CppMethodIntialized = true;
	}
	{
		ReadOnlyAttribute_t1186 * L_0 = (ReadOnlyAttribute_t1186 *)il2cpp_codegen_object_new (ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var);
		ReadOnlyAttribute__ctor_m5316(L_0, 0, /*hidden argument*/NULL);
		((ReadOnlyAttribute_t1186_StaticFields*)ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var->static_fields)->___No_1 = L_0;
		ReadOnlyAttribute_t1186 * L_1 = (ReadOnlyAttribute_t1186 *)il2cpp_codegen_object_new (ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var);
		ReadOnlyAttribute__ctor_m5316(L_1, 1, /*hidden argument*/NULL);
		((ReadOnlyAttribute_t1186_StaticFields*)ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var->static_fields)->___Yes_2 = L_1;
		ReadOnlyAttribute_t1186 * L_2 = (ReadOnlyAttribute_t1186 *)il2cpp_codegen_object_new (ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var);
		ReadOnlyAttribute__ctor_m5316(L_2, 0, /*hidden argument*/NULL);
		((ReadOnlyAttribute_t1186_StaticFields*)ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var->static_fields)->___Default_3 = L_2;
		return;
	}
}
// System.Boolean System.ComponentModel.ReadOnlyAttribute::get_IsReadOnly()
extern "C" bool ReadOnlyAttribute_get_IsReadOnly_m10654 (ReadOnlyAttribute_t1186 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___read_only_0);
		return L_0;
	}
}
// System.Int32 System.ComponentModel.ReadOnlyAttribute::GetHashCode()
extern "C" int32_t ReadOnlyAttribute_GetHashCode_m10655 (ReadOnlyAttribute_t1186 * __this, const MethodInfo* method)
{
	{
		bool* L_0 = &(__this->___read_only_0);
		int32_t L_1 = Boolean_GetHashCode_m12749(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.ComponentModel.ReadOnlyAttribute::Equals(System.Object)
extern TypeInfo* ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyAttribute_Equals_m10656 (ReadOnlyAttribute_t1186 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2110);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		Object_t * L_0 = ___o;
		if (((ReadOnlyAttribute_t1186 *)IsInst(L_0, ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___o;
		NullCheck(((ReadOnlyAttribute_t1186 *)Castclass(L_1, ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var)));
		bool L_2 = ReadOnlyAttribute_get_IsReadOnly_m10654(((ReadOnlyAttribute_t1186 *)Castclass(L_1, ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = (__this->___read_only_0);
		bool L_4 = Boolean_Equals_m12772((&V_0), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.ComponentModel.ReadOnlyAttribute::IsDefaultAttribute()
extern TypeInfo* ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyAttribute_IsDefaultAttribute_m10657 (ReadOnlyAttribute_t1186 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2110);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var);
		ReadOnlyAttribute_t1186 * L_0 = ((ReadOnlyAttribute_t1186_StaticFields*)ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var->static_fields)->___Default_3;
		bool L_1 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ComponentModel.ReadOnlyAttribute::Equals(System.Object) */, __this, L_0);
		return L_1;
	}
}
// System.ComponentModel.ReferenceConverter
#include "System_System_ComponentModel_ReferenceConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.ReferenceConverter
#include "System_System_ComponentModel_ReferenceConverterMethodDeclarations.h"

// System.Collections.ReadOnlyCollectionBase
#include "mscorlib_System_Collections_ReadOnlyCollectionBase.h"


// System.Boolean System.ComponentModel.ReferenceConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool ReferenceConverter_CanConvertFrom_m10658 (ReferenceConverter_t1891 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___context;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Type_t * L_1 = ___sourceType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_1) == ((Object_t*)(Type_t *)L_2))))
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		Object_t * L_3 = ___context;
		Type_t * L_4 = ___sourceType;
		bool L_5 = TypeConverter_CanConvertFrom_m5367(__this, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Object System.ComponentModel.ReferenceConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern const Il2CppType* IReferenceService_t2228_0_0_0_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IServiceProvider_t1197_il2cpp_TypeInfo_var;
extern TypeInfo* IReferenceService_t2228_il2cpp_TypeInfo_var;
extern TypeInfo* ITypeDescriptorContext_t1096_il2cpp_TypeInfo_var;
extern TypeInfo* IContainer_t2224_il2cpp_TypeInfo_var;
extern "C" Object_t * ReferenceConverter_ConvertFrom_m10659 (ReferenceConverter_t1891 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IReferenceService_t2228_0_0_0_var = il2cpp_codegen_type_from_index(4299);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IServiceProvider_t1197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2159);
		IReferenceService_t2228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4299);
		ITypeDescriptorContext_t1096_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2135);
		IContainer_t2224_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4282);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object_t * L_0 = ___value;
		if (((String_t*)IsInst(L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_1 = ___context;
		CultureInfo_t693 * L_2 = ___culture;
		Object_t * L_3 = ___value;
		Object_t * L_4 = TypeConverter_ConvertFrom_m5368(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		Object_t * L_5 = ___context;
		if (!L_5)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = NULL;
		Object_t * L_6 = ___context;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(IReferenceService_t2228_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Type_t * >::Invoke(0 /* System.Object System.IServiceProvider::GetService(System.Type) */, IServiceProvider_t1197_il2cpp_TypeInfo_var, L_6, L_7);
		V_1 = ((Object_t *)IsInst(L_8, IReferenceService_t2228_il2cpp_TypeInfo_var));
		Object_t * L_9 = V_1;
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		Object_t * L_10 = V_1;
		Object_t * L_11 = ___value;
		NullCheck(L_10);
		Object_t * L_12 = (Object_t *)InterfaceFuncInvoker1< Object_t *, String_t* >::Invoke(1 /* System.Object System.ComponentModel.Design.IReferenceService::GetReference(System.String) */, IReferenceService_t2228_il2cpp_TypeInfo_var, L_10, ((String_t*)Castclass(L_11, String_t_il2cpp_TypeInfo_var)));
		V_0 = L_12;
	}

IL_0046:
	{
		Object_t * L_13 = V_0;
		if (L_13)
		{
			goto IL_007e;
		}
	}
	{
		Object_t * L_14 = ___context;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.ComponentModel.IContainer System.ComponentModel.ITypeDescriptorContext::get_Container() */, ITypeDescriptorContext_t1096_il2cpp_TypeInfo_var, L_14);
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		Object_t * L_16 = ___context;
		NullCheck(L_16);
		Object_t * L_17 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.ComponentModel.IContainer System.ComponentModel.ITypeDescriptorContext::get_Container() */, ITypeDescriptorContext_t1096_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_17);
		ComponentCollection_t1889 * L_18 = (ComponentCollection_t1889 *)InterfaceFuncInvoker0< ComponentCollection_t1889 * >::Invoke(0 /* System.ComponentModel.ComponentCollection System.ComponentModel.IContainer::get_Components() */, IContainer_t2224_il2cpp_TypeInfo_var, L_17);
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		Object_t * L_19 = ___context;
		NullCheck(L_19);
		Object_t * L_20 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.ComponentModel.IContainer System.ComponentModel.ITypeDescriptorContext::get_Container() */, ITypeDescriptorContext_t1096_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		ComponentCollection_t1889 * L_21 = (ComponentCollection_t1889 *)InterfaceFuncInvoker0< ComponentCollection_t1889 * >::Invoke(0 /* System.ComponentModel.ComponentCollection System.ComponentModel.IContainer::get_Components() */, IContainer_t2224_il2cpp_TypeInfo_var, L_20);
		Object_t * L_22 = ___value;
		NullCheck(L_21);
		Object_t * L_23 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(10 /* System.ComponentModel.IComponent System.ComponentModel.ComponentCollection::get_Item(System.String) */, L_21, ((String_t*)Castclass(L_22, String_t_il2cpp_TypeInfo_var)));
		V_0 = L_23;
	}

IL_007e:
	{
		Object_t * L_24 = V_0;
		return L_24;
	}

IL_0080:
	{
		return NULL;
	}
}
// System.Object System.ComponentModel.ReferenceConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* IReferenceService_t2228_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IServiceProvider_t1197_il2cpp_TypeInfo_var;
extern TypeInfo* IReferenceService_t2228_il2cpp_TypeInfo_var;
extern TypeInfo* IComponent_t1198_il2cpp_TypeInfo_var;
extern TypeInfo* ISite_t934_il2cpp_TypeInfo_var;
extern "C" Object_t * ReferenceConverter_ConvertTo_m10660 (ReferenceConverter_t1891 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		IReferenceService_t2228_0_0_0_var = il2cpp_codegen_type_from_index(4299);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IServiceProvider_t1197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2159);
		IReferenceService_t2228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4299);
		IComponent_t1198_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2160);
		ISite_t934_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2200);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	{
		Type_t * L_0 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1)))
		{
			goto IL_001d;
		}
	}
	{
		Object_t * L_2 = ___context;
		CultureInfo_t693 * L_3 = ___culture;
		Object_t * L_4 = ___value;
		Type_t * L_5 = ___destinationType;
		Object_t * L_6 = TypeConverter_ConvertTo_m10711(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_001d:
	{
		Object_t * L_7 = ___value;
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		return (String_t*) &_stringLiteral2926;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_8;
		Object_t * L_9 = ___context;
		if (!L_9)
		{
			goto IL_00a3;
		}
	}
	{
		Object_t * L_10 = ___context;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(IReferenceService_t2228_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		Object_t * L_12 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Type_t * >::Invoke(0 /* System.Object System.IServiceProvider::GetService(System.Type) */, IServiceProvider_t1197_il2cpp_TypeInfo_var, L_10, L_11);
		V_1 = ((Object_t *)IsInst(L_12, IReferenceService_t2228_il2cpp_TypeInfo_var));
		Object_t * L_13 = V_1;
		if (!L_13)
		{
			goto IL_0059;
		}
	}
	{
		Object_t * L_14 = V_1;
		Object_t * L_15 = ___value;
		NullCheck(L_14);
		String_t* L_16 = (String_t*)InterfaceFuncInvoker1< String_t*, Object_t * >::Invoke(0 /* System.String System.ComponentModel.Design.IReferenceService::GetName(System.Object) */, IReferenceService_t2228_il2cpp_TypeInfo_var, L_14, L_15);
		V_0 = L_16;
	}

IL_0059:
	{
		String_t* L_17 = V_0;
		if (!L_17)
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m1368(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00a3;
		}
	}

IL_006a:
	{
		Object_t * L_20 = ___value;
		if (!((Object_t *)IsInst(L_20, IComponent_t1198_il2cpp_TypeInfo_var)))
		{
			goto IL_00a3;
		}
	}
	{
		Object_t * L_21 = ___value;
		V_2 = ((Object_t *)Castclass(L_21, IComponent_t1198_il2cpp_TypeInfo_var));
		Object_t * L_22 = V_2;
		NullCheck(L_22);
		Object_t * L_23 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.ComponentModel.ISite System.ComponentModel.IComponent::get_Site() */, IComponent_t1198_il2cpp_TypeInfo_var, L_22);
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		Object_t * L_24 = V_2;
		NullCheck(L_24);
		Object_t * L_25 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.ComponentModel.ISite System.ComponentModel.IComponent::get_Site() */, IComponent_t1198_il2cpp_TypeInfo_var, L_24);
		NullCheck(L_25);
		String_t* L_26 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.ComponentModel.ISite::get_Name() */, ISite_t934_il2cpp_TypeInfo_var, L_25);
		if (!L_26)
		{
			goto IL_00a3;
		}
	}
	{
		Object_t * L_27 = V_2;
		NullCheck(L_27);
		Object_t * L_28 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.ComponentModel.ISite System.ComponentModel.IComponent::get_Site() */, IComponent_t1198_il2cpp_TypeInfo_var, L_27);
		NullCheck(L_28);
		String_t* L_29 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.ComponentModel.ISite::get_Name() */, ISite_t934_il2cpp_TypeInfo_var, L_28);
		V_0 = L_29;
	}

IL_00a3:
	{
		String_t* L_30 = V_0;
		return L_30;
	}
}
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.ReferenceConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern const Il2CppType* IReferenceService_t2228_0_0_0_var;
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IServiceProvider_t1197_il2cpp_TypeInfo_var;
extern TypeInfo* IReferenceService_t2228_il2cpp_TypeInfo_var;
extern TypeInfo* ITypeDescriptorContext_t1096_il2cpp_TypeInfo_var;
extern TypeInfo* IContainer_t2224_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern TypeInfo* StandardValuesCollection_t1893_il2cpp_TypeInfo_var;
extern "C" StandardValuesCollection_t1893 * ReferenceConverter_GetStandardValues_m10661 (ReferenceConverter_t1891 * __this, Object_t * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IReferenceService_t2228_0_0_0_var = il2cpp_codegen_type_from_index(4299);
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IServiceProvider_t1197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2159);
		IReferenceService_t2228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4299);
		ITypeDescriptorContext_t1096_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2135);
		IContainer_t2224_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4282);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		StandardValuesCollection_t1893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4281);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t913 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	ObjectU5BU5D_t300* V_3 = {0};
	int32_t V_4 = 0;
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Object_t * V_7 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t913 * L_0 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Object_t * L_1 = ___context;
		if (!L_1)
		{
			goto IL_0106;
		}
	}
	{
		Object_t * L_2 = ___context;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(IReferenceService_t2228_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_4 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Type_t * >::Invoke(0 /* System.Object System.IServiceProvider::GetService(System.Type) */, IServiceProvider_t1197_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = ((Object_t *)IsInst(L_4, IReferenceService_t2228_il2cpp_TypeInfo_var));
		Object_t * L_5 = V_1;
		if (!L_5)
		{
			goto IL_006c;
		}
	}
	{
		Object_t * L_6 = V_1;
		Type_t * L_7 = (__this->___reference_type_0);
		NullCheck(L_6);
		ObjectU5BU5D_t300* L_8 = (ObjectU5BU5D_t300*)InterfaceFuncInvoker1< ObjectU5BU5D_t300*, Type_t * >::Invoke(2 /* System.Object[] System.ComponentModel.Design.IReferenceService::GetReferences(System.Type) */, IReferenceService_t2228_il2cpp_TypeInfo_var, L_6, L_7);
		V_3 = L_8;
		V_4 = 0;
		goto IL_005d;
	}

IL_003d:
	{
		ObjectU5BU5D_t300* L_9 = V_3;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11));
		Object_t * L_12 = ___context;
		Object_t * L_13 = V_2;
		bool L_14 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(15 /* System.Boolean System.ComponentModel.ReferenceConverter::IsValueAllowed(System.ComponentModel.ITypeDescriptorContext,System.Object) */, __this, L_12, L_13);
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		ArrayList_t913 * L_15 = V_0;
		Object_t * L_16 = V_2;
		NullCheck(L_15);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_15, L_16);
	}

IL_0057:
	{
		int32_t L_17 = V_4;
		V_4 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_005d:
	{
		int32_t L_18 = V_4;
		ObjectU5BU5D_t300* L_19 = V_3;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)(((Array_t *)L_19)->max_length))))))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_00fe;
	}

IL_006c:
	{
		Object_t * L_20 = ___context;
		NullCheck(L_20);
		Object_t * L_21 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.ComponentModel.IContainer System.ComponentModel.ITypeDescriptorContext::get_Container() */, ITypeDescriptorContext_t1096_il2cpp_TypeInfo_var, L_20);
		if (!L_21)
		{
			goto IL_00fe;
		}
	}
	{
		Object_t * L_22 = ___context;
		NullCheck(L_22);
		Object_t * L_23 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.ComponentModel.IContainer System.ComponentModel.ITypeDescriptorContext::get_Container() */, ITypeDescriptorContext_t1096_il2cpp_TypeInfo_var, L_22);
		NullCheck(L_23);
		ComponentCollection_t1889 * L_24 = (ComponentCollection_t1889 *)InterfaceFuncInvoker0< ComponentCollection_t1889 * >::Invoke(0 /* System.ComponentModel.ComponentCollection System.ComponentModel.IContainer::get_Components() */, IContainer_t2224_il2cpp_TypeInfo_var, L_23);
		if (!L_24)
		{
			goto IL_00fe;
		}
	}
	{
		Object_t * L_25 = ___context;
		NullCheck(L_25);
		Object_t * L_26 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.ComponentModel.IContainer System.ComponentModel.ITypeDescriptorContext::get_Container() */, ITypeDescriptorContext_t1096_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		ComponentCollection_t1889 * L_27 = (ComponentCollection_t1889 *)InterfaceFuncInvoker0< ComponentCollection_t1889 * >::Invoke(0 /* System.ComponentModel.ComponentCollection System.ComponentModel.IContainer::get_Components() */, IContainer_t2224_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_27);
		Object_t * L_28 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(9 /* System.Collections.IEnumerator System.Collections.ReadOnlyCollectionBase::GetEnumerator() */, L_27);
		V_6 = L_28;
	}

IL_0099:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d7;
		}

IL_009e:
		{
			Object_t * L_29 = V_6;
			NullCheck(L_29);
			Object_t * L_30 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_29);
			V_5 = L_30;
			Object_t * L_31 = V_5;
			if (!L_31)
			{
				goto IL_00d7;
			}
		}

IL_00ae:
		{
			Object_t * L_32 = ___context;
			Object_t * L_33 = V_5;
			bool L_34 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(15 /* System.Boolean System.ComponentModel.ReferenceConverter::IsValueAllowed(System.ComponentModel.ITypeDescriptorContext,System.Object) */, __this, L_32, L_33);
			if (!L_34)
			{
				goto IL_00d7;
			}
		}

IL_00bc:
		{
			Type_t * L_35 = (__this->___reference_type_0);
			Object_t * L_36 = V_5;
			NullCheck(L_35);
			bool L_37 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(42 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_35, L_36);
			if (!L_37)
			{
				goto IL_00d7;
			}
		}

IL_00ce:
		{
			ArrayList_t913 * L_38 = V_0;
			Object_t * L_39 = V_5;
			NullCheck(L_38);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_38, L_39);
		}

IL_00d7:
		{
			Object_t * L_40 = V_6;
			NullCheck(L_40);
			bool L_41 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_40);
			if (L_41)
			{
				goto IL_009e;
			}
		}

IL_00e3:
		{
			IL2CPP_LEAVE(0xFE, FINALLY_00e8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_00e8;
	}

FINALLY_00e8:
	{ // begin finally (depth: 1)
		{
			Object_t * L_42 = V_6;
			V_7 = ((Object_t *)IsInst(L_42, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_43 = V_7;
			if (L_43)
			{
				goto IL_00f6;
			}
		}

IL_00f5:
		{
			IL2CPP_END_FINALLY(232)
		}

IL_00f6:
		{
			Object_t * L_44 = V_7;
			NullCheck(L_44);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_44);
			IL2CPP_END_FINALLY(232)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(232)
	{
		IL2CPP_JUMP_TBL(0xFE, IL_00fe)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_00fe:
	{
		ArrayList_t913 * L_45 = V_0;
		NullCheck(L_45);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_45, NULL);
	}

IL_0106:
	{
		ArrayList_t913 * L_46 = V_0;
		StandardValuesCollection_t1893 * L_47 = (StandardValuesCollection_t1893 *)il2cpp_codegen_object_new (StandardValuesCollection_t1893_il2cpp_TypeInfo_var);
		StandardValuesCollection__ctor_m10699(L_47, L_46, /*hidden argument*/NULL);
		return L_47;
	}
}
// System.Boolean System.ComponentModel.ReferenceConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ReferenceConverter_GetStandardValuesExclusive_m10662 (ReferenceConverter_t1891 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.ComponentModel.ReferenceConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ReferenceConverter_GetStandardValuesSupported_m10663 (ReferenceConverter_t1891 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.ComponentModel.ReferenceConverter::IsValueAllowed(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" bool ReferenceConverter_IsValueAllowed_m10664 (ReferenceConverter_t1891 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.ComponentModel.ReflectionPropertyDescriptor
#include "System_System_ComponentModel_ReflectionPropertyDescriptor.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.ReflectionPropertyDescriptor
#include "System_System_ComponentModel_ReflectionPropertyDescriptorMethodDeclarations.h"

// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"


// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Reflection.PropertyInfo)
extern "C" void ReflectionPropertyDescriptor__ctor_m10665 (ReflectionPropertyDescriptor_t1917 * __this, PropertyInfo_t * ___info, const MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___info;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyDescriptor__ctor_m10649(__this, L_1, (AttributeU5BU5D_t1913*)(AttributeU5BU5D_t1913*)NULL, /*hidden argument*/NULL);
		PropertyInfo_t * L_2 = ___info;
		__this->____member_3 = L_2;
		PropertyInfo_t * L_3 = (__this->____member_3);
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_3);
		__this->____componentType_4 = L_4;
		PropertyInfo_t * L_5 = ___info;
		NullCheck(L_5);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_5);
		__this->____propertyType_5 = L_6;
		return;
	}
}
// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::GetPropertyInfo()
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern TypeInfo* ParameterModifierU5BU5D_t726_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" PropertyInfo_t * ReflectionPropertyDescriptor_GetPropertyInfo_m10666 (ReflectionPropertyDescriptor_t1917 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		ParameterModifierU5BU5D_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4300);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInfo_t * L_0 = (__this->____member_3);
		if (L_0)
		{
			goto IL_0060;
		}
	}
	{
		Type_t * L_1 = (__this->____componentType_4);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.ComponentModel.MemberDescriptor::get_Name() */, __this);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_PropertyType() */, __this);
		NullCheck(L_1);
		PropertyInfo_t * L_4 = (PropertyInfo_t *)VirtFuncInvoker6< PropertyInfo_t *, String_t*, int32_t, Binder_t725 *, Type_t *, TypeU5BU5D_t570*, ParameterModifierU5BU5D_t726* >::Invoke(61 /* System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[]) */, L_1, L_2, ((int32_t)4148), (Binder_t725 *)NULL, L_3, ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 0)), ((ParameterModifierU5BU5D_t726*)SZArrayNew(ParameterModifierU5BU5D_t726_il2cpp_TypeInfo_var, 0)));
		__this->____member_3 = L_4;
		PropertyInfo_t * L_5 = (__this->____member_3);
		if (L_5)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.ComponentModel.MemberDescriptor::get_Name() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral2927, L_6, (String_t*) &_stringLiteral2928, /*hidden argument*/NULL);
		ArgumentException_t356 * L_8 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_8, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0060:
	{
		PropertyInfo_t * L_9 = (__this->____member_3);
		return L_9;
	}
}
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_ComponentType()
extern "C" Type_t * ReflectionPropertyDescriptor_get_ComponentType_m10667 (ReflectionPropertyDescriptor_t1917 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____componentType_4);
		return L_0;
	}
}
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_PropertyType()
extern "C" Type_t * ReflectionPropertyDescriptor_get_PropertyType_m10668 (ReflectionPropertyDescriptor_t1917 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____propertyType_5);
		return L_0;
	}
}
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::FillAttributes(System.Collections.IList)
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t794_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeU5BU5DU5BU5D_t2229_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern TypeInfo* ParameterModifierU5BU5D_t726_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeU5BU5D_t1913_il2cpp_TypeInfo_var;
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* Attribute_t478_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void ReflectionPropertyDescriptor_FillAttributes_m10669 (ReflectionPropertyDescriptor_t1917 * __this, Object_t * ___attributeList, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2110);
		IList_t794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1549);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		AttributeU5BU5DU5BU5D_t2229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4302);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		ParameterModifierU5BU5D_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4300);
		AttributeU5BU5D_t1913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4294);
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		Attribute_t478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1284);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = {0};
	AttributeU5BU5DU5BU5D_t2229* V_2 = {0};
	PropertyInfo_t * V_3 = {0};
	ObjectU5BU5D_t300* V_4 = {0};
	AttributeU5BU5D_t1913* V_5 = {0};
	AttributeU5BU5D_t1913* V_6 = {0};
	AttributeU5BU5DU5BU5D_t2229* V_7 = {0};
	int32_t V_8 = 0;
	Attribute_t478 * V_9 = {0};
	AttributeU5BU5D_t1913* V_10 = {0};
	int32_t V_11 = 0;
	Attribute_t478 * V_12 = {0};
	Object_t * V_13 = {0};
	Object_t * V_14 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___attributeList;
		PropertyDescriptor_FillAttributes_m10650(__this, L_0, /*hidden argument*/NULL);
		PropertyInfo_t * L_1 = ReflectionPropertyDescriptor_GetPropertyInfo_m10666(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_1);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___attributeList;
		IL2CPP_RUNTIME_CLASS_INIT(ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var);
		ReadOnlyAttribute_t1186 * L_4 = ((ReadOnlyAttribute_t1186_StaticFields*)ReadOnlyAttribute_t1186_il2cpp_TypeInfo_var->static_fields)->___Yes_2;
		NullCheck(L_3);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t794_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_0023:
	{
		V_0 = 0;
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_ComponentType() */, __this);
		V_1 = L_5;
		goto IL_003c;
	}

IL_0031:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
		Type_t * L_7 = V_1;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_7);
		V_1 = L_8;
	}

IL_003c:
	{
		Type_t * L_9 = V_1;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_10) == ((Object_t*)(Type_t *)L_11))))
		{
			goto IL_0031;
		}
	}

IL_0052:
	{
		int32_t L_12 = V_0;
		V_2 = ((AttributeU5BU5DU5BU5D_t2229*)SZArrayNew(AttributeU5BU5DU5BU5D_t2229_il2cpp_TypeInfo_var, L_12));
		Type_t * L_13 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_ComponentType() */, __this);
		V_1 = L_13;
		goto IL_00bb;
	}

IL_0065:
	{
		Type_t * L_14 = V_1;
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.ComponentModel.MemberDescriptor::get_Name() */, __this);
		Type_t * L_16 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_PropertyType() */, __this);
		NullCheck(L_14);
		PropertyInfo_t * L_17 = (PropertyInfo_t *)VirtFuncInvoker6< PropertyInfo_t *, String_t*, int32_t, Binder_t725 *, Type_t *, TypeU5BU5D_t570*, ParameterModifierU5BU5D_t726* >::Invoke(61 /* System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[]) */, L_14, L_15, ((int32_t)54), (Binder_t725 *)NULL, L_16, ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 0)), ((ParameterModifierU5BU5D_t726*)SZArrayNew(ParameterModifierU5BU5D_t726_il2cpp_TypeInfo_var, 0)));
		V_3 = L_17;
		PropertyInfo_t * L_18 = V_3;
		if (!L_18)
		{
			goto IL_00b4;
		}
	}
	{
		PropertyInfo_t * L_19 = V_3;
		NullCheck(L_19);
		ObjectU5BU5D_t300* L_20 = (ObjectU5BU5D_t300*)VirtFuncInvoker1< ObjectU5BU5D_t300*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_19, 0);
		V_4 = L_20;
		ObjectU5BU5D_t300* L_21 = V_4;
		NullCheck(L_21);
		V_5 = ((AttributeU5BU5D_t1913*)SZArrayNew(AttributeU5BU5D_t1913_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_21)->max_length)))));
		ObjectU5BU5D_t300* L_22 = V_4;
		AttributeU5BU5D_t1913* L_23 = V_5;
		NullCheck(L_22);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_22, (Array_t *)(Array_t *)L_23, 0);
		AttributeU5BU5DU5BU5D_t2229* L_24 = V_2;
		int32_t L_25 = V_0;
		int32_t L_26 = ((int32_t)((int32_t)L_25-(int32_t)1));
		V_0 = L_26;
		AttributeU5BU5D_t1913* L_27 = V_5;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_26);
		ArrayElementTypeCheck (L_24, L_27);
		*((AttributeU5BU5D_t1913**)(AttributeU5BU5D_t1913**)SZArrayLdElema(L_24, L_26)) = (AttributeU5BU5D_t1913*)L_27;
	}

IL_00b4:
	{
		Type_t * L_28 = V_1;
		NullCheck(L_28);
		Type_t * L_29 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_28);
		V_1 = L_29;
	}

IL_00bb:
	{
		Type_t * L_30 = V_1;
		if (!L_30)
		{
			goto IL_00d1;
		}
	}
	{
		Type_t * L_31 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32))))
		{
			goto IL_0065;
		}
	}

IL_00d1:
	{
		AttributeU5BU5DU5BU5D_t2229* L_33 = V_2;
		V_7 = L_33;
		V_8 = 0;
		goto IL_011d;
	}

IL_00dc:
	{
		AttributeU5BU5DU5BU5D_t2229* L_34 = V_7;
		int32_t L_35 = V_8;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		int32_t L_36 = L_35;
		V_6 = (*(AttributeU5BU5D_t1913**)(AttributeU5BU5D_t1913**)SZArrayLdElema(L_34, L_36));
		AttributeU5BU5D_t1913* L_37 = V_6;
		if (!L_37)
		{
			goto IL_0117;
		}
	}
	{
		AttributeU5BU5D_t1913* L_38 = V_6;
		V_10 = L_38;
		V_11 = 0;
		goto IL_010c;
	}

IL_00f6:
	{
		AttributeU5BU5D_t1913* L_39 = V_10;
		int32_t L_40 = V_11;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = L_40;
		V_9 = (*(Attribute_t478 **)(Attribute_t478 **)SZArrayLdElema(L_39, L_41));
		Object_t * L_42 = ___attributeList;
		Attribute_t478 * L_43 = V_9;
		NullCheck(L_42);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t794_il2cpp_TypeInfo_var, L_42, L_43);
		int32_t L_44 = V_11;
		V_11 = ((int32_t)((int32_t)L_44+(int32_t)1));
	}

IL_010c:
	{
		int32_t L_45 = V_11;
		AttributeU5BU5D_t1913* L_46 = V_10;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)(((int32_t)(((Array_t *)L_46)->max_length))))))
		{
			goto IL_00f6;
		}
	}

IL_0117:
	{
		int32_t L_47 = V_8;
		V_8 = ((int32_t)((int32_t)L_47+(int32_t)1));
	}

IL_011d:
	{
		int32_t L_48 = V_8;
		AttributeU5BU5DU5BU5D_t2229* L_49 = V_7;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)(((int32_t)(((Array_t *)L_49)->max_length))))))
		{
			goto IL_00dc;
		}
	}
	{
		Type_t * L_50 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_PropertyType() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		AttributeCollection_t1883 * L_51 = TypeDescriptor_GetAttributes_m10719(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		Object_t * L_52 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.ComponentModel.AttributeCollection::GetEnumerator() */, L_51);
		V_13 = L_52;
	}

IL_013a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0156;
		}

IL_013f:
		{
			Object_t * L_53 = V_13;
			NullCheck(L_53);
			Object_t * L_54 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_53);
			V_12 = ((Attribute_t478 *)Castclass(L_54, Attribute_t478_il2cpp_TypeInfo_var));
			Object_t * L_55 = ___attributeList;
			Attribute_t478 * L_56 = V_12;
			NullCheck(L_55);
			InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t794_il2cpp_TypeInfo_var, L_55, L_56);
		}

IL_0156:
		{
			Object_t * L_57 = V_13;
			NullCheck(L_57);
			bool L_58 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_57);
			if (L_58)
			{
				goto IL_013f;
			}
		}

IL_0162:
		{
			IL2CPP_LEAVE(0x17D, FINALLY_0167);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0167;
	}

FINALLY_0167:
	{ // begin finally (depth: 1)
		{
			Object_t * L_59 = V_13;
			V_14 = ((Object_t *)IsInst(L_59, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_60 = V_14;
			if (L_60)
			{
				goto IL_0175;
			}
		}

IL_0174:
		{
			IL2CPP_END_FINALLY(359)
		}

IL_0175:
		{
			Object_t * L_61 = V_14;
			NullCheck(L_61);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_61);
			IL2CPP_END_FINALLY(359)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(359)
	{
		IL2CPP_JUMP_TBL(0x17D, IL_017d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_017d:
	{
		return;
	}
}
// System.ComponentModel.RefreshPropertiesAttribute
#include "System_System_ComponentModel_RefreshPropertiesAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.RefreshPropertiesAttribute
#include "System_System_ComponentModel_RefreshPropertiesAttributeMethodDeclarations.h"

// System.ComponentModel.RefreshProperties
#include "System_System_ComponentModel_RefreshProperties.h"


// System.Void System.ComponentModel.RefreshPropertiesAttribute::.ctor(System.ComponentModel.RefreshProperties)
extern "C" void RefreshPropertiesAttribute__ctor_m5303 (RefreshPropertiesAttribute_t1180 * __this, int32_t ___refresh, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___refresh;
		__this->___refresh_0 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.RefreshPropertiesAttribute::.cctor()
extern TypeInfo* RefreshPropertiesAttribute_t1180_il2cpp_TypeInfo_var;
extern "C" void RefreshPropertiesAttribute__cctor_m10670 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RefreshPropertiesAttribute_t1180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2099);
		s_Il2CppMethodIntialized = true;
	}
	{
		RefreshPropertiesAttribute_t1180 * L_0 = (RefreshPropertiesAttribute_t1180 *)il2cpp_codegen_object_new (RefreshPropertiesAttribute_t1180_il2cpp_TypeInfo_var);
		RefreshPropertiesAttribute__ctor_m5303(L_0, 1, /*hidden argument*/NULL);
		((RefreshPropertiesAttribute_t1180_StaticFields*)RefreshPropertiesAttribute_t1180_il2cpp_TypeInfo_var->static_fields)->___All_1 = L_0;
		RefreshPropertiesAttribute_t1180 * L_1 = (RefreshPropertiesAttribute_t1180 *)il2cpp_codegen_object_new (RefreshPropertiesAttribute_t1180_il2cpp_TypeInfo_var);
		RefreshPropertiesAttribute__ctor_m5303(L_1, 0, /*hidden argument*/NULL);
		((RefreshPropertiesAttribute_t1180_StaticFields*)RefreshPropertiesAttribute_t1180_il2cpp_TypeInfo_var->static_fields)->___Default_2 = L_1;
		RefreshPropertiesAttribute_t1180 * L_2 = (RefreshPropertiesAttribute_t1180 *)il2cpp_codegen_object_new (RefreshPropertiesAttribute_t1180_il2cpp_TypeInfo_var);
		RefreshPropertiesAttribute__ctor_m5303(L_2, 2, /*hidden argument*/NULL);
		((RefreshPropertiesAttribute_t1180_StaticFields*)RefreshPropertiesAttribute_t1180_il2cpp_TypeInfo_var->static_fields)->___Repaint_3 = L_2;
		return;
	}
}
// System.ComponentModel.RefreshProperties System.ComponentModel.RefreshPropertiesAttribute::get_RefreshProperties()
extern "C" int32_t RefreshPropertiesAttribute_get_RefreshProperties_m10671 (RefreshPropertiesAttribute_t1180 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___refresh_0);
		return L_0;
	}
}
// System.Boolean System.ComponentModel.RefreshPropertiesAttribute::Equals(System.Object)
extern TypeInfo* RefreshPropertiesAttribute_t1180_il2cpp_TypeInfo_var;
extern "C" bool RefreshPropertiesAttribute_Equals_m10672 (RefreshPropertiesAttribute_t1180 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RefreshPropertiesAttribute_t1180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2099);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (((RefreshPropertiesAttribute_t1180 *)IsInst(L_0, RefreshPropertiesAttribute_t1180_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___obj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(RefreshPropertiesAttribute_t1180 *)__this))))
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_2 = ___obj;
		NullCheck(((RefreshPropertiesAttribute_t1180 *)Castclass(L_2, RefreshPropertiesAttribute_t1180_il2cpp_TypeInfo_var)));
		int32_t L_3 = RefreshPropertiesAttribute_get_RefreshProperties_m10671(((RefreshPropertiesAttribute_t1180 *)Castclass(L_2, RefreshPropertiesAttribute_t1180_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		int32_t L_4 = (__this->___refresh_0);
		return ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}
}
// System.Int32 System.ComponentModel.RefreshPropertiesAttribute::GetHashCode()
extern TypeInfo* RefreshProperties_t1918_il2cpp_TypeInfo_var;
extern "C" int32_t RefreshPropertiesAttribute_GetHashCode_m10673 (RefreshPropertiesAttribute_t1180 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RefreshProperties_t1918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4303);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___refresh_0);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(RefreshProperties_t1918_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Enum::GetHashCode() */, L_2);
		return L_3;
	}
}
// System.Boolean System.ComponentModel.RefreshPropertiesAttribute::IsDefaultAttribute()
extern TypeInfo* RefreshPropertiesAttribute_t1180_il2cpp_TypeInfo_var;
extern "C" bool RefreshPropertiesAttribute_IsDefaultAttribute_m10674 (RefreshPropertiesAttribute_t1180 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RefreshPropertiesAttribute_t1180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2099);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RefreshPropertiesAttribute_t1180_il2cpp_TypeInfo_var);
		RefreshPropertiesAttribute_t1180 * L_0 = ((RefreshPropertiesAttribute_t1180_StaticFields*)RefreshPropertiesAttribute_t1180_il2cpp_TypeInfo_var->static_fields)->___Default_2;
		return ((((Object_t*)(RefreshPropertiesAttribute_t1180 *)__this) == ((Object_t*)(RefreshPropertiesAttribute_t1180 *)L_0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.RefreshProperties
#include "System_System_ComponentModel_RefreshPropertiesMethodDeclarations.h"



// System.ComponentModel.SByteConverter
#include "System_System_ComponentModel_SByteConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.SByteConverter
#include "System_System_ComponentModel_SByteConverterMethodDeclarations.h"

// System.SByte
#include "mscorlib_System_SByte.h"
// System.SByte
#include "mscorlib_System_SByteMethodDeclarations.h"


// System.Boolean System.ComponentModel.SByteConverter::get_SupportHex()
extern "C" bool SByteConverter_get_SupportHex_m10675 (SByteConverter_t1919 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.String System.ComponentModel.SByteConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern TypeInfo* SByte_t371_il2cpp_TypeInfo_var;
extern "C" String_t* SByteConverter_ConvertToString_m10676 (SByteConverter_t1919 * __this, Object_t * ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SByte_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(992);
		s_Il2CppMethodIntialized = true;
	}
	int8_t V_0 = 0x0;
	{
		Object_t * L_0 = ___value;
		V_0 = ((*(int8_t*)((int8_t*)UnBox (L_0, SByte_t371_il2cpp_TypeInfo_var))));
		NumberFormatInfo_t1037 * L_1 = ___format;
		String_t* L_2 = SByte_ToString_m12773((&V_0), (String_t*) &_stringLiteral2904, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object System.ComponentModel.SByteConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern TypeInfo* SByte_t371_il2cpp_TypeInfo_var;
extern "C" Object_t * SByteConverter_ConvertFromString_m10677 (SByteConverter_t1919 * __this, String_t* ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SByte_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(992);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		NumberFormatInfo_t1037 * L_1 = ___format;
		int8_t L_2 = SByte_Parse_m9858(NULL /*static, unused*/, L_0, 7, L_1, /*hidden argument*/NULL);
		int8_t L_3 = L_2;
		Object_t * L_4 = Box(SByte_t371_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Object System.ComponentModel.SByteConverter::ConvertFromString(System.String,System.Int32)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern TypeInfo* SByte_t371_il2cpp_TypeInfo_var;
extern "C" Object_t * SByteConverter_ConvertFromString_m10678 (SByteConverter_t1919 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		SByte_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(992);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		int32_t L_1 = ___fromBase;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int8_t L_2 = Convert_ToSByte_m12774(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		int8_t L_3 = L_2;
		Object_t * L_4 = Box(SByte_t371_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.ComponentModel.SingleConverter
#include "System_System_ComponentModel_SingleConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.SingleConverter
#include "System_System_ComponentModel_SingleConverterMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"


// System.Boolean System.ComponentModel.SingleConverter::get_SupportHex()
extern "C" bool SingleConverter_get_SupportHex_m10679 (SingleConverter_t1920 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.String System.ComponentModel.SingleConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern TypeInfo* Single_t308_il2cpp_TypeInfo_var;
extern "C" String_t* SingleConverter_ConvertToString_m10680 (SingleConverter_t1920 * __this, Object_t * ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		Object_t * L_0 = ___value;
		V_0 = ((*(float*)((float*)UnBox (L_0, Single_t308_il2cpp_TypeInfo_var))));
		NumberFormatInfo_t1037 * L_1 = ___format;
		String_t* L_2 = Single_ToString_m9877((&V_0), (String_t*) &_stringLiteral1948, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object System.ComponentModel.SingleConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern TypeInfo* Single_t308_il2cpp_TypeInfo_var;
extern "C" Object_t * SingleConverter_ConvertFromString_m10681 (SingleConverter_t1920 * __this, String_t* ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		NumberFormatInfo_t1037 * L_1 = ___format;
		float L_2 = Single_Parse_m9859(NULL /*static, unused*/, L_0, ((int32_t)167), L_1, /*hidden argument*/NULL);
		float L_3 = L_2;
		Object_t * L_4 = Box(Single_t308_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.ComponentModel.StringConverter
#include "System_System_ComponentModel_StringConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.StringConverter
#include "System_System_ComponentModel_StringConverterMethodDeclarations.h"



// System.Void System.ComponentModel.StringConverter::.ctor()
extern "C" void StringConverter__ctor_m10682 (StringConverter_t1921 * __this, const MethodInfo* method)
{
	{
		TypeConverter__ctor_m10707(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.ComponentModel.StringConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool StringConverter_CanConvertFrom_m10683 (StringConverter_t1921 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___sourceType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_2 = ___context;
		Type_t * L_3 = ___sourceType;
		bool L_4 = TypeConverter_CanConvertFrom_m5367(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.ComponentModel.StringConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * StringConverter_ConvertFrom_m10684 (StringConverter_t1921 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		Object_t * L_2 = ___value;
		if (!((String_t*)IsInst(L_2, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_3 = ___value;
		return ((String_t*)Castclass(L_3, String_t_il2cpp_TypeInfo_var));
	}

IL_001e:
	{
		Object_t * L_4 = ___context;
		CultureInfo_t693 * L_5 = ___culture;
		Object_t * L_6 = ___value;
		Object_t * L_7 = TypeConverter_ConvertFrom_m5368(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.ComponentModel.TimeSpanConverter
#include "System_System_ComponentModel_TimeSpanConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.TimeSpanConverter
#include "System_System_ComponentModel_TimeSpanConverterMethodDeclarations.h"

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"


// System.Void System.ComponentModel.TimeSpanConverter::.ctor()
extern "C" void TimeSpanConverter__ctor_m10685 (TimeSpanConverter_t1922 * __this, const MethodInfo* method)
{
	{
		TypeConverter__ctor_m10707(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.ComponentModel.TimeSpanConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool TimeSpanConverter_CanConvertFrom_m10686 (TimeSpanConverter_t1922 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___sourceType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_2 = ___context;
		Type_t * L_3 = ___sourceType;
		bool L_4 = TypeConverter_CanConvertFrom_m5367(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.ComponentModel.TimeSpanConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* InstanceDescriptor_t1900_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool TimeSpanConverter_CanConvertTo_m10687 (TimeSpanConverter_t1922 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		InstanceDescriptor_t1900_0_0_0_var = il2cpp_codegen_type_from_index(4284);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Type_t * L_2 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(InstanceDescriptor_t1900_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		Object_t * L_4 = ___context;
		Type_t * L_5 = ___destinationType;
		bool L_6 = TypeConverter_CanConvertTo_m10708(__this, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.ComponentModel.TimeSpanConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t1129_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t687_il2cpp_TypeInfo_var;
extern "C" Object_t * TimeSpanConverter_ConvertFrom_m10688 (TimeSpanConverter_t1922 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		TimeSpan_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1959);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		FormatException_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(956);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___value;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m1416(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_1) == ((Object_t*)(Type_t *)L_2))))
		{
			goto IL_0049;
		}
	}
	{
		Object_t * L_3 = ___value;
		V_0 = ((String_t*)Castclass(L_3, String_t_il2cpp_TypeInfo_var));
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_4 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1129_il2cpp_TypeInfo_var);
			TimeSpan_t1129  L_5 = TimeSpan_Parse_m5263(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
			TimeSpan_t1129  L_6 = L_5;
			Object_t * L_7 = Box(TimeSpan_t1129_il2cpp_TypeInfo_var, &L_6);
			V_1 = L_7;
			goto IL_0053;
		}

IL_002d:
		{
			; // IL_002d: leave IL_0049
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Object)
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m1269(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		FormatException_t687 * L_10 = (FormatException_t687 *)il2cpp_codegen_object_new (FormatException_t687_il2cpp_TypeInfo_var);
		FormatException__ctor_m3201(L_10, L_9, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
		goto IL_0049;
	} // end catch (depth: 1)

IL_0049:
	{
		Object_t * L_11 = ___context;
		CultureInfo_t693 * L_12 = ___culture;
		Object_t * L_13 = ___value;
		Object_t * L_14 = TypeConverter_ConvertFrom_m5368(__this, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0053:
	{
		Object_t * L_15 = V_1;
		return L_15;
	}
}
// System.Object System.ComponentModel.TimeSpanConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* InstanceDescriptor_t1900_0_0_0_var;
extern const Il2CppType* TimeSpan_t1129_0_0_0_var;
extern const Il2CppType* Int64_t696_0_0_0_var;
extern TypeInfo* TimeSpan_t1129_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t696_il2cpp_TypeInfo_var;
extern TypeInfo* InstanceDescriptor_t1900_il2cpp_TypeInfo_var;
extern "C" Object_t * TimeSpanConverter_ConvertTo_m10689 (TimeSpanConverter_t1922 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		InstanceDescriptor_t1900_0_0_0_var = il2cpp_codegen_type_from_index(4284);
		TimeSpan_t1129_0_0_0_var = il2cpp_codegen_type_from_index(1959);
		Int64_t696_0_0_0_var = il2cpp_codegen_type_from_index(986);
		TimeSpan_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1959);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Int64_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(986);
		InstanceDescriptor_t1900_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4284);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t1129  V_0 = {0};
	ConstructorInfo_t574 * V_1 = {0};
	{
		Object_t * L_0 = ___value;
		if (!((Object_t *)IsInst(L_0, TimeSpan_t1129_il2cpp_TypeInfo_var)))
		{
			goto IL_0081;
		}
	}
	{
		Object_t * L_1 = ___value;
		V_0 = ((*(TimeSpan_t1129 *)((TimeSpan_t1129 *)UnBox (L_1, TimeSpan_t1129_il2cpp_TypeInfo_var))));
		Type_t * L_2 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_0031;
		}
	}
	{
		Object_t * L_4 = ___value;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_5 = TimeSpan_ToString_m12775((&V_0), /*hidden argument*/NULL);
		return L_5;
	}

IL_0031:
	{
		Type_t * L_6 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(InstanceDescriptor_t1900_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_0081;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(TimeSpan_t1129_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_9 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 1));
		Type_t * L_10 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int64_t696_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		ArrayElementTypeCheck (L_9, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_9, 0)) = (Type_t *)L_10;
		NullCheck(L_8);
		ConstructorInfo_t574 * L_11 = (ConstructorInfo_t574 *)VirtFuncInvoker1< ConstructorInfo_t574 *, TypeU5BU5D_t570* >::Invoke(73 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_8, L_9);
		V_1 = L_11;
		ConstructorInfo_t574 * L_12 = V_1;
		ObjectU5BU5D_t300* L_13 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 1));
		int64_t L_14 = TimeSpan_get_Ticks_m9865((&V_0), /*hidden argument*/NULL);
		int64_t L_15 = L_14;
		Object_t * L_16 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 0)) = (Object_t *)L_16;
		InstanceDescriptor_t1900 * L_17 = (InstanceDescriptor_t1900 *)il2cpp_codegen_object_new (InstanceDescriptor_t1900_il2cpp_TypeInfo_var);
		InstanceDescriptor__ctor_m10519(L_17, L_12, (Object_t *)(Object_t *)L_13, /*hidden argument*/NULL);
		return L_17;
	}

IL_0081:
	{
		Object_t * L_18 = ___context;
		CultureInfo_t693 * L_19 = ___culture;
		Object_t * L_20 = ___value;
		Type_t * L_21 = ___destinationType;
		Object_t * L_22 = TypeConverter_ConvertTo_m10711(__this, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.ComponentModel.ToolboxItemAttribute
#include "System_System_ComponentModel_ToolboxItemAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.ToolboxItemAttribute
#include "System_System_ComponentModel_ToolboxItemAttributeMethodDeclarations.h"



// System.Void System.ComponentModel.ToolboxItemAttribute::.ctor(System.Boolean)
extern "C" void ToolboxItemAttribute__ctor_m5301 (ToolboxItemAttribute_t1178 * __this, bool ___defaultType, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		bool L_0 = ___defaultType;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		__this->___itemTypeName_3 = (String_t*) &_stringLiteral2930;
	}

IL_0017:
	{
		return;
	}
}
// System.Void System.ComponentModel.ToolboxItemAttribute::.ctor(System.String)
extern "C" void ToolboxItemAttribute__ctor_m5310 (ToolboxItemAttribute_t1178 * __this, String_t* ___toolboxItemName, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___toolboxItemName;
		__this->___itemTypeName_3 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.ToolboxItemAttribute::.cctor()
extern TypeInfo* ToolboxItemAttribute_t1178_il2cpp_TypeInfo_var;
extern "C" void ToolboxItemAttribute__cctor_m10690 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ToolboxItemAttribute_t1178_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2097);
		s_Il2CppMethodIntialized = true;
	}
	{
		ToolboxItemAttribute_t1178 * L_0 = (ToolboxItemAttribute_t1178 *)il2cpp_codegen_object_new (ToolboxItemAttribute_t1178_il2cpp_TypeInfo_var);
		ToolboxItemAttribute__ctor_m5310(L_0, (String_t*) &_stringLiteral2930, /*hidden argument*/NULL);
		((ToolboxItemAttribute_t1178_StaticFields*)ToolboxItemAttribute_t1178_il2cpp_TypeInfo_var->static_fields)->___Default_0 = L_0;
		ToolboxItemAttribute_t1178 * L_1 = (ToolboxItemAttribute_t1178 *)il2cpp_codegen_object_new (ToolboxItemAttribute_t1178_il2cpp_TypeInfo_var);
		ToolboxItemAttribute__ctor_m5301(L_1, 0, /*hidden argument*/NULL);
		((ToolboxItemAttribute_t1178_StaticFields*)ToolboxItemAttribute_t1178_il2cpp_TypeInfo_var->static_fields)->___None_1 = L_1;
		return;
	}
}
// System.String System.ComponentModel.ToolboxItemAttribute::get_ToolboxItemTypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ToolboxItemAttribute_get_ToolboxItemTypeName_m10691 (ToolboxItemAttribute_t1178 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___itemTypeName_3);
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		Type_t * L_1 = (__this->___itemType_2);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_2;
	}

IL_001c:
	{
		Type_t * L_3 = (__this->___itemType_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_3);
		__this->___itemTypeName_3 = L_4;
	}

IL_002d:
	{
		String_t* L_5 = (__this->___itemTypeName_3);
		return L_5;
	}
}
// System.Boolean System.ComponentModel.ToolboxItemAttribute::Equals(System.Object)
extern TypeInfo* ToolboxItemAttribute_t1178_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool ToolboxItemAttribute_Equals_m10692 (ToolboxItemAttribute_t1178 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ToolboxItemAttribute_t1178_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2097);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	ToolboxItemAttribute_t1178 * V_0 = {0};
	{
		Object_t * L_0 = ___o;
		V_0 = ((ToolboxItemAttribute_t1178 *)IsInst(L_0, ToolboxItemAttribute_t1178_il2cpp_TypeInfo_var));
		ToolboxItemAttribute_t1178 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		ToolboxItemAttribute_t1178 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = ToolboxItemAttribute_get_ToolboxItemTypeName_m10691(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ToolboxItemAttribute_get_ToolboxItemTypeName_m10691(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1295(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 System.ComponentModel.ToolboxItemAttribute::GetHashCode()
extern "C" int32_t ToolboxItemAttribute_GetHashCode_m10693 (ToolboxItemAttribute_t1178 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___itemTypeName_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = (__this->___itemTypeName_3);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_1);
		return L_2;
	}

IL_0017:
	{
		int32_t L_3 = Attribute_GetHashCode_m3289(__this, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean System.ComponentModel.ToolboxItemAttribute::IsDefaultAttribute()
extern TypeInfo* ToolboxItemAttribute_t1178_il2cpp_TypeInfo_var;
extern "C" bool ToolboxItemAttribute_IsDefaultAttribute_m10694 (ToolboxItemAttribute_t1178 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ToolboxItemAttribute_t1178_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2097);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ToolboxItemAttribute_t1178_il2cpp_TypeInfo_var);
		ToolboxItemAttribute_t1178 * L_0 = ((ToolboxItemAttribute_t1178_StaticFields*)ToolboxItemAttribute_t1178_il2cpp_TypeInfo_var->static_fields)->___Default_0;
		bool L_1 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ComponentModel.ToolboxItemAttribute::Equals(System.Object) */, __this, L_0);
		return L_1;
	}
}
// System.ComponentModel.TypeConverterAttribute
#include "System_System_ComponentModel_TypeConverterAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.TypeConverterAttribute
#include "System_System_ComponentModel_TypeConverterAttributeMethodDeclarations.h"



// System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TypeConverterAttribute__ctor_m10695 (TypeConverterAttribute_t1173 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___converter_type_1 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor(System.String)
extern "C" void TypeConverterAttribute__ctor_m5314 (TypeConverterAttribute_t1173 * __this, String_t* ___typeName, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___typeName;
		__this->___converter_type_1 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor(System.Type)
extern "C" void TypeConverterAttribute__ctor_m5288 (TypeConverterAttribute_t1173 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___converter_type_1 = L_1;
		return;
	}
}
// System.Void System.ComponentModel.TypeConverterAttribute::.cctor()
extern TypeInfo* TypeConverterAttribute_t1173_il2cpp_TypeInfo_var;
extern "C" void TypeConverterAttribute__cctor_m10696 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeConverterAttribute_t1173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2091);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeConverterAttribute_t1173 * L_0 = (TypeConverterAttribute_t1173 *)il2cpp_codegen_object_new (TypeConverterAttribute_t1173_il2cpp_TypeInfo_var);
		TypeConverterAttribute__ctor_m10695(L_0, /*hidden argument*/NULL);
		((TypeConverterAttribute_t1173_StaticFields*)TypeConverterAttribute_t1173_il2cpp_TypeInfo_var->static_fields)->___Default_0 = L_0;
		return;
	}
}
// System.Boolean System.ComponentModel.TypeConverterAttribute::Equals(System.Object)
extern TypeInfo* TypeConverterAttribute_t1173_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TypeConverterAttribute_Equals_m10697 (TypeConverterAttribute_t1173 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeConverterAttribute_t1173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2091);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (((TypeConverterAttribute_t1173 *)IsInst(L_0, TypeConverterAttribute_t1173_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___obj;
		NullCheck(((TypeConverterAttribute_t1173 *)Castclass(L_1, TypeConverterAttribute_t1173_il2cpp_TypeInfo_var)));
		String_t* L_2 = TypeConverterAttribute_get_ConverterTypeName_m6889(((TypeConverterAttribute_t1173 *)Castclass(L_1, TypeConverterAttribute_t1173_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_3 = (__this->___converter_type_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1295(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.ComponentModel.TypeConverterAttribute::GetHashCode()
extern "C" int32_t TypeConverterAttribute_GetHashCode_m10698 (TypeConverterAttribute_t1173 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___converter_type_1);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
extern "C" String_t* TypeConverterAttribute_get_ConverterTypeName_m6889 (TypeConverterAttribute_t1173 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___converter_type_1);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.ComponentModel.TypeConverter/StandardValuesCollection::.ctor(System.Collections.ICollection)
extern "C" void StandardValuesCollection__ctor_m10699 (StandardValuesCollection_t1893 * __this, Object_t * ___values, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___values;
		__this->___values_0 = L_0;
		return;
	}
}
// System.Void System.ComponentModel.TypeConverter/StandardValuesCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void StandardValuesCollection_System_Collections_ICollection_CopyTo_m10700 (StandardValuesCollection_t1893 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		int32_t L_1 = ___index;
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.ComponentModel.TypeConverter/StandardValuesCollection::CopyTo(System.Array,System.Int32) */, __this, L_0, L_1);
		return;
	}
}
// System.Collections.IEnumerator System.ComponentModel.TypeConverter/StandardValuesCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * StandardValuesCollection_System_Collections_IEnumerable_GetEnumerator_m10701 (StandardValuesCollection_t1893 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(9 /* System.Collections.IEnumerator System.ComponentModel.TypeConverter/StandardValuesCollection::GetEnumerator() */, __this);
		return L_0;
	}
}
// System.Object System.ComponentModel.TypeConverter/StandardValuesCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * StandardValuesCollection_System_Collections_ICollection_get_SyncRoot_m10702 (StandardValuesCollection_t1893 * __this, const MethodInfo* method)
{
	{
		return NULL;
	}
}
// System.Int32 System.ComponentModel.TypeConverter/StandardValuesCollection::System.Collections.ICollection.get_Count()
extern "C" int32_t StandardValuesCollection_System_Collections_ICollection_get_Count_m10703 (StandardValuesCollection_t1893 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.ComponentModel.TypeConverter/StandardValuesCollection::get_Count() */, __this);
		return L_0;
	}
}
// System.Void System.ComponentModel.TypeConverter/StandardValuesCollection::CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern "C" void StandardValuesCollection_CopyTo_m10704 (StandardValuesCollection_t1893 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___values_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t793_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.ComponentModel.TypeConverter/StandardValuesCollection::GetEnumerator()
extern TypeInfo* IEnumerable_t662_il2cpp_TypeInfo_var;
extern "C" Object_t * StandardValuesCollection_GetEnumerator_m10705 (StandardValuesCollection_t1893 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___values_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t662_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 System.ComponentModel.TypeConverter/StandardValuesCollection::get_Count()
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern "C" int32_t StandardValuesCollection_get_Count_m10706 (StandardValuesCollection_t1893 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___values_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t793_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.ComponentModel.TypeConverter::.ctor()
extern "C" void TypeConverter__ctor_m10707 (TypeConverter_t1427 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.Type)
extern "C" bool TypeConverter_CanConvertFrom_m6905 (TypeConverter_t1427 * __this, Type_t * ___sourceType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___sourceType;
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, Type_t * >::Invoke(4 /* System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type) */, __this, (Object_t *)NULL, L_0);
		return L_1;
	}
}
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* InstanceDescriptor_t1900_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool TypeConverter_CanConvertFrom_m5367 (TypeConverter_t1427 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InstanceDescriptor_t1900_0_0_0_var = il2cpp_codegen_type_from_index(4284);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___sourceType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(InstanceDescriptor_t1900_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		return 0;
	}
}
// System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool TypeConverter_CanConvertTo_m10708 (TypeConverter_t1427 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		return ((((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))? 1 : 0);
	}
}
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.Object)
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern "C" Object_t * TypeConverter_ConvertFrom_m6906 (TypeConverter_t1427 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_0 = CultureInfo_get_CurrentCulture_m4983(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t * L_1 = ___o;
		Object_t * L_2 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, CultureInfo_t693 *, Object_t * >::Invoke(6 /* System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object) */, __this, (Object_t *)NULL, L_0, L_1);
		return L_2;
	}
}
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern TypeInfo* InstanceDescriptor_t1900_il2cpp_TypeInfo_var;
extern "C" Object_t * TypeConverter_ConvertFrom_m5368 (TypeConverter_t1427 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InstanceDescriptor_t1900_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4284);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (!((InstanceDescriptor_t1900 *)IsInst(L_0, InstanceDescriptor_t1900_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_1 = ___value;
		NullCheck(((InstanceDescriptor_t1900 *)Castclass(L_1, InstanceDescriptor_t1900_il2cpp_TypeInfo_var)));
		Object_t * L_2 = InstanceDescriptor_Invoke_m10522(((InstanceDescriptor_t1900 *)Castclass(L_1, InstanceDescriptor_t1900_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		Object_t * L_3 = ___value;
		Exception_t306 * L_4 = TypeConverter_GetConvertFromException_m10714(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.String)
extern "C" Object_t * TypeConverter_ConvertFromInvariantString_m6907 (TypeConverter_t1427 * __this, String_t* ___text, const MethodInfo* method)
{
	{
		String_t* L_0 = ___text;
		Object_t * L_1 = TypeConverter_ConvertFromInvariantString_m10709(__this, (Object_t *)NULL, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.ComponentModel.ITypeDescriptorContext,System.String)
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern "C" Object_t * TypeConverter_ConvertFromInvariantString_m10709 (TypeConverter_t1427 * __this, Object_t * ___context, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___context;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_1 = CultureInfo_get_InvariantCulture_m3234(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = ___text;
		Object_t * L_3 = TypeConverter_ConvertFromString_m10710(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.String)
extern "C" Object_t * TypeConverter_ConvertFromString_m10710 (TypeConverter_t1427 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, String_t* ___text, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___context;
		CultureInfo_t693 * L_1 = ___culture;
		String_t* L_2 = ___text;
		Object_t * L_3 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, CultureInfo_t693 *, Object_t * >::Invoke(6 /* System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object) */, __this, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * TypeConverter_ConvertTo_m10711 (TypeConverter_t1427 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___destinationType;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral2898, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Type_t * L_2 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_0036;
		}
	}
	{
		Object_t * L_4 = ___value;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		Object_t * L_5 = ___value;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		return L_6;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_7;
	}

IL_0036:
	{
		Object_t * L_8 = ___value;
		Type_t * L_9 = ___destinationType;
		Exception_t306 * L_10 = TypeConverter_GetConvertToException_m10715(__this, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.Object)
extern "C" String_t* TypeConverter_ConvertToInvariantString_m6908 (TypeConverter_t1427 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		String_t* L_1 = TypeConverter_ConvertToInvariantString_m10712(__this, (Object_t *)NULL, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* TypeConverter_ConvertToInvariantString_m10712 (TypeConverter_t1427 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___context;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_1 = CultureInfo_get_InvariantCulture_m3234(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker4< Object_t *, Object_t *, CultureInfo_t693 *, Object_t *, Type_t * >::Invoke(7 /* System.Object System.ComponentModel.TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type) */, __this, L_0, L_1, L_2, L_3);
		return ((String_t*)Castclass(L_4, String_t_il2cpp_TypeInfo_var));
	}
}
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* TypeConverter_ConvertToString_m10713 (TypeConverter_t1427 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___context;
		CultureInfo_t693 * L_1 = ___culture;
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker4< Object_t *, Object_t *, CultureInfo_t693 *, Object_t *, Type_t * >::Invoke(7 /* System.Object System.ComponentModel.TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type) */, __this, L_0, L_1, L_2, L_3);
		return ((String_t*)Castclass(L_4, String_t_il2cpp_TypeInfo_var));
	}
}
// System.Exception System.ComponentModel.TypeConverter::GetConvertFromException(System.Object)
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" Exception_t306 * TypeConverter_GetConvertFromException_m10714 (TypeConverter_t1427 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		V_0 = (String_t*) &_stringLiteral2931;
		goto IL_001d;
	}

IL_0011:
	{
		Object_t * L_1 = ___value;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m1416(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_2);
		V_0 = L_3;
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_4 = CultureInfo_get_InvariantCulture_m3234(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t300* L_5 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 2));
		Type_t * L_6 = Object_GetType_m1416(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_6);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 0)) = (Object_t *)L_7;
		ObjectU5BU5D_t300* L_8 = L_5;
		String_t* L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 1)) = (Object_t *)L_9;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Format_m4981(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral2932, L_8, /*hidden argument*/NULL);
		NotSupportedException_t303 * L_11 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}
}
// System.Exception System.ComponentModel.TypeConverter::GetConvertToException(System.Object,System.Type)
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" Exception_t306 * TypeConverter_GetConvertToException_m10715 (TypeConverter_t1427 * __this, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		V_0 = (String_t*) &_stringLiteral2931;
		goto IL_001d;
	}

IL_0011:
	{
		Object_t * L_1 = ___value;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m1416(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_2);
		V_0 = L_3;
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_4 = CultureInfo_get_InvariantCulture_m3234(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t300* L_5 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 3));
		Type_t * L_6 = Object_GetType_m1416(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_6);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 0)) = (Object_t *)L_7;
		ObjectU5BU5D_t300* L_8 = L_5;
		String_t* L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 1)) = (Object_t *)L_9;
		ObjectU5BU5D_t300* L_10 = L_8;
		Type_t * L_11 = ___destinationType;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_11);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		ArrayElementTypeCheck (L_10, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 2)) = (Object_t *)L_12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Format_m4981(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral2933, L_10, /*hidden argument*/NULL);
		NotSupportedException_t303 * L_14 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_14, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}
}
// System.Boolean System.ComponentModel.TypeConverter::GetCreateInstanceSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool TypeConverter_GetCreateInstanceSupported_m5369 (TypeConverter_t1427 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t936 * TypeConverter_GetProperties_m10716 (TypeConverter_t1427 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1913* ___attributes, const MethodInfo* method)
{
	{
		return (PropertyDescriptorCollection_t936 *)NULL;
	}
}
// System.Boolean System.ComponentModel.TypeConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool TypeConverter_GetPropertiesSupported_m10717 (TypeConverter_t1427 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.TypeConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C" StandardValuesCollection_t1893 * TypeConverter_GetStandardValues_m5372 (TypeConverter_t1427 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		return (StandardValuesCollection_t1893 *)NULL;
	}
}
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool TypeConverter_GetStandardValuesExclusive_m5373 (TypeConverter_t1427 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool TypeConverter_GetStandardValuesSupported_m5374 (TypeConverter_t1427 * __this, Object_t * ___context, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.ComponentModel.TypeConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" bool TypeConverter_IsValid_m5375 (TypeConverter_t1427 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.ComponentModel.TypeDescriptionProvider
#include "System_System_ComponentModel_TypeDescriptionProvider.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.TypeDescriptionProvider
#include "System_System_ComponentModel_TypeDescriptionProviderMethodDeclarations.h"



// System.ComponentModel.TypeDescriptor
#include "System_System_ComponentModel_TypeDescriptor.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// System.ComponentModel.WeakObjectWrapperComparer
#include "System_System_ComponentModel_WeakObjectWrapperComparer.h"
// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12.h"
// System.ComponentModel.TypeInfo
#include "System_System_ComponentModel_TypeInfo.h"
// System.ComponentModel.ComponentInfo
#include "System_System_ComponentModel_ComponentInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
// System.ComponentModel.WeakObjectWrapperComparer
#include "System_System_ComponentModel_WeakObjectWrapperComparerMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"
// System.ComponentModel.TypeInfo
#include "System_System_ComponentModel_TypeInfoMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.ComponentModel.Info
#include "System_System_ComponentModel_InfoMethodDeclarations.h"
// System.ComponentModel.ComponentInfo
#include "System_System_ComponentModel_ComponentInfoMethodDeclarations.h"


// System.Void System.ComponentModel.TypeDescriptor::.cctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t1924_il2cpp_TypeInfo_var;
extern TypeInfo* WeakObjectWrapperComparer_t1935_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t1925_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m12776_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m12777_MethodInfo_var;
extern "C" void TypeDescriptor__cctor_m10718 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		Dictionary_2_t1924_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4307);
		WeakObjectWrapperComparer_t1935_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4308);
		Dictionary_2_t1925_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4309);
		Dictionary_2__ctor_m12776_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483974);
		Dictionary_2__ctor_m12777_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483975);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1291(L_0, /*hidden argument*/NULL);
		((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___creatingDefaultConverters_0 = L_0;
		Hashtable_t915 * L_1 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_1, /*hidden argument*/NULL);
		((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___componentTable_2 = L_1;
		Hashtable_t915 * L_2 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_2, /*hidden argument*/NULL);
		((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___typeTable_3 = L_2;
		Object_t * L_3 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1291(L_3, /*hidden argument*/NULL);
		((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___typeDescriptionProvidersLock_4 = L_3;
		Object_t * L_4 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1291(L_4, /*hidden argument*/NULL);
		((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___componentDescriptionProvidersLock_6 = L_4;
		Dictionary_2_t1924 * L_5 = (Dictionary_2_t1924 *)il2cpp_codegen_object_new (Dictionary_2_t1924_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m12776(L_5, /*hidden argument*/Dictionary_2__ctor_m12776_MethodInfo_var);
		((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___typeDescriptionProviders_5 = L_5;
		WeakObjectWrapperComparer_t1935 * L_6 = (WeakObjectWrapperComparer_t1935 *)il2cpp_codegen_object_new (WeakObjectWrapperComparer_t1935_il2cpp_TypeInfo_var);
		WeakObjectWrapperComparer__ctor_m10752(L_6, /*hidden argument*/NULL);
		Dictionary_2_t1925 * L_7 = (Dictionary_2_t1925 *)il2cpp_codegen_object_new (Dictionary_2_t1925_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m12777(L_7, L_6, /*hidden argument*/Dictionary_2__ctor_m12777_MethodInfo_var);
		((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___componentDescriptionProviders_7 = L_7;
		return;
	}
}
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Type)
extern TypeInfo* AttributeCollection_t1883_il2cpp_TypeInfo_var;
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern "C" AttributeCollection_t1883 * TypeDescriptor_GetAttributes_m10719 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeCollection_t1883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4280);
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___componentType;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AttributeCollection_t1883_il2cpp_TypeInfo_var);
		AttributeCollection_t1883 * L_1 = ((AttributeCollection_t1883_StaticFields*)AttributeCollection_t1883_il2cpp_TypeInfo_var->static_fields)->___Empty_1;
		return L_1;
	}

IL_000c:
	{
		Type_t * L_2 = ___componentType;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		TypeInfo_t1929 * L_3 = TypeDescriptor_GetTypeInfo_m10726(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		AttributeCollection_t1883 * L_4 = (AttributeCollection_t1883 *)VirtFuncInvoker0< AttributeCollection_t1883 * >::Invoke(4 /* System.ComponentModel.AttributeCollection System.ComponentModel.TypeInfo::GetAttributes() */, L_3);
		return L_4;
	}
}
// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::get_DefaultConverters()
extern const Il2CppType* Boolean_t311_0_0_0_var;
extern const Il2CppType* BooleanConverter_t1885_0_0_0_var;
extern const Il2CppType* Byte_t681_0_0_0_var;
extern const Il2CppType* ByteConverter_t1886_0_0_0_var;
extern const Il2CppType* SByte_t371_0_0_0_var;
extern const Il2CppType* SByteConverter_t1919_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* StringConverter_t1921_0_0_0_var;
extern const Il2CppType* Char_t323_0_0_0_var;
extern const Il2CppType* CharConverter_t1887_0_0_0_var;
extern const Il2CppType* Int16_t378_0_0_0_var;
extern const Il2CppType* Int16Converter_t1908_0_0_0_var;
extern const Il2CppType* Int32_t297_0_0_0_var;
extern const Il2CppType* Int32Converter_t1909_0_0_0_var;
extern const Il2CppType* Int64_t696_0_0_0_var;
extern const Il2CppType* Int64Converter_t1910_0_0_0_var;
extern const Il2CppType* UInt16_t700_0_0_0_var;
extern const Il2CppType* UInt16Converter_t1930_0_0_0_var;
extern const Il2CppType* UInt32_t386_0_0_0_var;
extern const Il2CppType* UInt32Converter_t1931_0_0_0_var;
extern const Il2CppType* UInt64_t699_0_0_0_var;
extern const Il2CppType* UInt64Converter_t1932_0_0_0_var;
extern const Il2CppType* Single_t308_0_0_0_var;
extern const Il2CppType* SingleConverter_t1920_0_0_0_var;
extern const Il2CppType* Double_t695_0_0_0_var;
extern const Il2CppType* DoubleConverter_t1902_0_0_0_var;
extern const Il2CppType* Decimal_t698_0_0_0_var;
extern const Il2CppType* DecimalConverter_t1896_0_0_0_var;
extern const Il2CppType* Void_t370_0_0_0_var;
extern const Il2CppType* TypeConverter_t1427_0_0_0_var;
extern const Il2CppType* Array_t_0_0_0_var;
extern const Il2CppType* ArrayConverter_t1881_0_0_0_var;
extern const Il2CppType* CultureInfo_t693_0_0_0_var;
extern const Il2CppType* CultureInfoConverter_t1894_0_0_0_var;
extern const Il2CppType* DateTime_t445_0_0_0_var;
extern const Il2CppType* DateTimeConverter_t1895_0_0_0_var;
extern const Il2CppType* Guid_t713_0_0_0_var;
extern const Il2CppType* GuidConverter_t1907_0_0_0_var;
extern const Il2CppType* TimeSpan_t1129_0_0_0_var;
extern const Il2CppType* TimeSpanConverter_t1922_0_0_0_var;
extern const Il2CppType* ICollection_t793_0_0_0_var;
extern const Il2CppType* CollectionConverter_t1882_0_0_0_var;
extern const Il2CppType* Enum_t353_0_0_0_var;
extern const Il2CppType* EnumConverter_t1905_0_0_0_var;
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t1150_il2cpp_TypeInfo_var;
extern "C" ArrayList_t913 * TypeDescriptor_get_DefaultConverters_m10720 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t311_0_0_0_var = il2cpp_codegen_type_from_index(64);
		BooleanConverter_t1885_0_0_0_var = il2cpp_codegen_type_from_index(4310);
		Byte_t681_0_0_0_var = il2cpp_codegen_type_from_index(559);
		ByteConverter_t1886_0_0_0_var = il2cpp_codegen_type_from_index(4311);
		SByte_t371_0_0_0_var = il2cpp_codegen_type_from_index(992);
		SByteConverter_t1919_0_0_0_var = il2cpp_codegen_type_from_index(4312);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		StringConverter_t1921_0_0_0_var = il2cpp_codegen_type_from_index(4313);
		Char_t323_0_0_0_var = il2cpp_codegen_type_from_index(109);
		CharConverter_t1887_0_0_0_var = il2cpp_codegen_type_from_index(4314);
		Int16_t378_0_0_0_var = il2cpp_codegen_type_from_index(993);
		Int16Converter_t1908_0_0_0_var = il2cpp_codegen_type_from_index(4315);
		Int32_t297_0_0_0_var = il2cpp_codegen_type_from_index(5);
		Int32Converter_t1909_0_0_0_var = il2cpp_codegen_type_from_index(4316);
		Int64_t696_0_0_0_var = il2cpp_codegen_type_from_index(986);
		Int64Converter_t1910_0_0_0_var = il2cpp_codegen_type_from_index(4317);
		UInt16_t700_0_0_0_var = il2cpp_codegen_type_from_index(994);
		UInt16Converter_t1930_0_0_0_var = il2cpp_codegen_type_from_index(4318);
		UInt32_t386_0_0_0_var = il2cpp_codegen_type_from_index(570);
		UInt32Converter_t1931_0_0_0_var = il2cpp_codegen_type_from_index(4319);
		UInt64_t699_0_0_0_var = il2cpp_codegen_type_from_index(990);
		UInt64Converter_t1932_0_0_0_var = il2cpp_codegen_type_from_index(4320);
		Single_t308_0_0_0_var = il2cpp_codegen_type_from_index(52);
		SingleConverter_t1920_0_0_0_var = il2cpp_codegen_type_from_index(4321);
		Double_t695_0_0_0_var = il2cpp_codegen_type_from_index(985);
		DoubleConverter_t1902_0_0_0_var = il2cpp_codegen_type_from_index(4322);
		Decimal_t698_0_0_0_var = il2cpp_codegen_type_from_index(991);
		DecimalConverter_t1896_0_0_0_var = il2cpp_codegen_type_from_index(4323);
		Void_t370_0_0_0_var = il2cpp_codegen_type_from_index(217);
		TypeConverter_t1427_0_0_0_var = il2cpp_codegen_type_from_index(2963);
		Array_t_0_0_0_var = il2cpp_codegen_type_from_index(1360);
		ArrayConverter_t1881_0_0_0_var = il2cpp_codegen_type_from_index(4324);
		CultureInfo_t693_0_0_0_var = il2cpp_codegen_type_from_index(983);
		CultureInfoConverter_t1894_0_0_0_var = il2cpp_codegen_type_from_index(4325);
		DateTime_t445_0_0_0_var = il2cpp_codegen_type_from_index(901);
		DateTimeConverter_t1895_0_0_0_var = il2cpp_codegen_type_from_index(4326);
		Guid_t713_0_0_0_var = il2cpp_codegen_type_from_index(1019);
		GuidConverter_t1907_0_0_0_var = il2cpp_codegen_type_from_index(4327);
		TimeSpan_t1129_0_0_0_var = il2cpp_codegen_type_from_index(1959);
		TimeSpanConverter_t1922_0_0_0_var = il2cpp_codegen_type_from_index(4328);
		ICollection_t793_0_0_0_var = il2cpp_codegen_type_from_index(1548);
		CollectionConverter_t1882_0_0_0_var = il2cpp_codegen_type_from_index(4329);
		Enum_t353_0_0_0_var = il2cpp_codegen_type_from_index(192);
		EnumConverter_t1905_0_0_0_var = il2cpp_codegen_type_from_index(4330);
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		DictionaryEntry_t1150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2048);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ArrayList_t913 * V_1 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___creatingDefaultConverters_0;
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
			ArrayList_t913 * L_2 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			if (!L_2)
			{
				goto IL_0021;
			}
		}

IL_0016:
		{
			IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
			ArrayList_t913 * L_3 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			V_1 = L_3;
			IL2CPP_LEAVE(0x3C3, FINALLY_03b6);
		}

IL_0021:
		{
			ArrayList_t913 * L_4 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
			ArrayList__ctor_m4965(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
			((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1 = L_4;
			ArrayList_t913 * L_5 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_6 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Boolean_t311_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_7 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(BooleanConverter_t1885_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_8 = {0};
			DictionaryEntry__ctor_m12744(&L_8, L_6, L_7, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_9 = L_8;
			Object_t * L_10 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_9);
			NullCheck(L_5);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_5, L_10);
			ArrayList_t913 * L_11 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_12 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Byte_t681_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_13 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ByteConverter_t1886_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_14 = {0};
			DictionaryEntry__ctor_m12744(&L_14, L_12, L_13, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_15 = L_14;
			Object_t * L_16 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_15);
			NullCheck(L_11);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_11, L_16);
			ArrayList_t913 * L_17 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_18 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(SByte_t371_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_19 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(SByteConverter_t1919_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_20 = {0};
			DictionaryEntry__ctor_m12744(&L_20, L_18, L_19, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_21 = L_20;
			Object_t * L_22 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_21);
			NullCheck(L_17);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_17, L_22);
			ArrayList_t913 * L_23 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_24 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_25 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(StringConverter_t1921_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_26 = {0};
			DictionaryEntry__ctor_m12744(&L_26, L_24, L_25, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_27 = L_26;
			Object_t * L_28 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_27);
			NullCheck(L_23);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_23, L_28);
			ArrayList_t913 * L_29 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_30 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Char_t323_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_31 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(CharConverter_t1887_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_32 = {0};
			DictionaryEntry__ctor_m12744(&L_32, L_30, L_31, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_33 = L_32;
			Object_t * L_34 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_33);
			NullCheck(L_29);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_29, L_34);
			ArrayList_t913 * L_35 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_36 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int16_t378_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_37 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int16Converter_t1908_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_38 = {0};
			DictionaryEntry__ctor_m12744(&L_38, L_36, L_37, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_39 = L_38;
			Object_t * L_40 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_39);
			NullCheck(L_35);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_35, L_40);
			ArrayList_t913 * L_41 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_42 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int32_t297_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_43 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int32Converter_t1909_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_44 = {0};
			DictionaryEntry__ctor_m12744(&L_44, L_42, L_43, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_45 = L_44;
			Object_t * L_46 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_45);
			NullCheck(L_41);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_41, L_46);
			ArrayList_t913 * L_47 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_48 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int64_t696_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_49 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int64Converter_t1910_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_50 = {0};
			DictionaryEntry__ctor_m12744(&L_50, L_48, L_49, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_51 = L_50;
			Object_t * L_52 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_51);
			NullCheck(L_47);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_47, L_52);
			ArrayList_t913 * L_53 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_54 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt16_t700_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_55 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt16Converter_t1930_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_56 = {0};
			DictionaryEntry__ctor_m12744(&L_56, L_54, L_55, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_57 = L_56;
			Object_t * L_58 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_57);
			NullCheck(L_53);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_53, L_58);
			ArrayList_t913 * L_59 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_60 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt32_t386_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_61 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt32Converter_t1931_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_62 = {0};
			DictionaryEntry__ctor_m12744(&L_62, L_60, L_61, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_63 = L_62;
			Object_t * L_64 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_63);
			NullCheck(L_59);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_59, L_64);
			ArrayList_t913 * L_65 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_66 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt64_t699_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_67 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt64Converter_t1932_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_68 = {0};
			DictionaryEntry__ctor_m12744(&L_68, L_66, L_67, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_69 = L_68;
			Object_t * L_70 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_69);
			NullCheck(L_65);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_65, L_70);
			ArrayList_t913 * L_71 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_72 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Single_t308_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_73 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(SingleConverter_t1920_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_74 = {0};
			DictionaryEntry__ctor_m12744(&L_74, L_72, L_73, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_75 = L_74;
			Object_t * L_76 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_75);
			NullCheck(L_71);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_71, L_76);
			ArrayList_t913 * L_77 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_78 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Double_t695_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_79 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(DoubleConverter_t1902_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_80 = {0};
			DictionaryEntry__ctor_m12744(&L_80, L_78, L_79, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_81 = L_80;
			Object_t * L_82 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_81);
			NullCheck(L_77);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_77, L_82);
			ArrayList_t913 * L_83 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_84 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Decimal_t698_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_85 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(DecimalConverter_t1896_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_86 = {0};
			DictionaryEntry__ctor_m12744(&L_86, L_84, L_85, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_87 = L_86;
			Object_t * L_88 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_87);
			NullCheck(L_83);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_83, L_88);
			ArrayList_t913 * L_89 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_90 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Void_t370_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_91 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(TypeConverter_t1427_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_92 = {0};
			DictionaryEntry__ctor_m12744(&L_92, L_90, L_91, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_93 = L_92;
			Object_t * L_94 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_93);
			NullCheck(L_89);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_89, L_94);
			ArrayList_t913 * L_95 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_96 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Array_t_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_97 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ArrayConverter_t1881_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_98 = {0};
			DictionaryEntry__ctor_m12744(&L_98, L_96, L_97, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_99 = L_98;
			Object_t * L_100 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_99);
			NullCheck(L_95);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_95, L_100);
			ArrayList_t913 * L_101 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_102 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(CultureInfo_t693_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_103 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(CultureInfoConverter_t1894_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_104 = {0};
			DictionaryEntry__ctor_m12744(&L_104, L_102, L_103, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_105 = L_104;
			Object_t * L_106 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_105);
			NullCheck(L_101);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_101, L_106);
			ArrayList_t913 * L_107 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_108 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(DateTime_t445_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_109 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(DateTimeConverter_t1895_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_110 = {0};
			DictionaryEntry__ctor_m12744(&L_110, L_108, L_109, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_111 = L_110;
			Object_t * L_112 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_111);
			NullCheck(L_107);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_107, L_112);
			ArrayList_t913 * L_113 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_114 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Guid_t713_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_115 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(GuidConverter_t1907_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_116 = {0};
			DictionaryEntry__ctor_m12744(&L_116, L_114, L_115, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_117 = L_116;
			Object_t * L_118 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_117);
			NullCheck(L_113);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_113, L_118);
			ArrayList_t913 * L_119 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_120 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(TimeSpan_t1129_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_121 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(TimeSpanConverter_t1922_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_122 = {0};
			DictionaryEntry__ctor_m12744(&L_122, L_120, L_121, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_123 = L_122;
			Object_t * L_124 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_123);
			NullCheck(L_119);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_119, L_124);
			ArrayList_t913 * L_125 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_126 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ICollection_t793_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_127 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(CollectionConverter_t1882_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_128 = {0};
			DictionaryEntry__ctor_m12744(&L_128, L_126, L_127, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_129 = L_128;
			Object_t * L_130 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_129);
			NullCheck(L_125);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_125, L_130);
			ArrayList_t913 * L_131 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
			Type_t * L_132 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Enum_t353_0_0_0_var), /*hidden argument*/NULL);
			Type_t * L_133 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(EnumConverter_t1905_0_0_0_var), /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_134 = {0};
			DictionaryEntry__ctor_m12744(&L_134, L_132, L_133, /*hidden argument*/NULL);
			DictionaryEntry_t1150  L_135 = L_134;
			Object_t * L_136 = Box(DictionaryEntry_t1150_il2cpp_TypeInfo_var, &L_135);
			NullCheck(L_131);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_131, L_136);
			IL2CPP_LEAVE(0x3BD, FINALLY_03b6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_03b6;
	}

FINALLY_03b6:
	{ // begin finally (depth: 1)
		Object_t * L_137 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_137, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(950)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(950)
	{
		IL2CPP_JUMP_TBL(0x3C3, IL_03c3)
		IL2CPP_JUMP_TBL(0x3BD, IL_03bd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_03bd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		ArrayList_t913 * L_138 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___defaultConverters_1;
		return L_138;
	}

IL_03c3:
	{
		ArrayList_t913 * L_139 = V_1;
		return L_139;
	}
}
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
extern const Il2CppType* TypeConverterAttribute_t1173_0_0_0_var;
extern const Il2CppType* Type_t_0_0_0_var;
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeConverterAttribute_t1173_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* TypeConverter_t1427_il2cpp_TypeInfo_var;
extern "C" TypeConverter_t1427 * TypeDescriptor_GetConverter_m6904 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeConverterAttribute_t1173_0_0_0_var = il2cpp_codegen_type_from_index(2091);
		Type_t_0_0_0_var = il2cpp_codegen_type_from_index(58);
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		TypeConverterAttribute_t1173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2091);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		TypeConverter_t1427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2963);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	AttributeCollection_t1883 * V_1 = {0};
	TypeConverterAttribute_t1173 * V_2 = {0};
	ConstructorInfo_t574 * V_3 = {0};
	{
		Type_t * L_0 = ___type;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral1091, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		V_0 = (Type_t *)NULL;
		Type_t * L_2 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		AttributeCollection_t1883 * L_3 = TypeDescriptor_GetAttributes_m10719(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		AttributeCollection_t1883 * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(TypeConverterAttribute_t1173_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		Attribute_t478 * L_6 = (Attribute_t478 *)VirtFuncInvoker1< Attribute_t478 *, Type_t * >::Invoke(10 /* System.Attribute System.ComponentModel.AttributeCollection::get_Item(System.Type) */, L_4, L_5);
		V_2 = ((TypeConverterAttribute_t1173 *)Castclass(L_6, TypeConverterAttribute_t1173_il2cpp_TypeInfo_var));
		TypeConverterAttribute_t1173 * L_7 = V_2;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		TypeConverterAttribute_t1173 * L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9 = TypeConverterAttribute_get_ConverterTypeName_m6889(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m1368(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		TypeConverterAttribute_t1173 * L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12 = TypeConverterAttribute_get_ConverterTypeName_m6889(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		Type_t * L_13 = TypeDescriptor_GetTypeFromName_m10727(NULL /*static, unused*/, (Object_t *)NULL, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_0054:
	{
		Type_t * L_14 = V_0;
		if (L_14)
		{
			goto IL_0061;
		}
	}
	{
		Type_t * L_15 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		Type_t * L_16 = TypeDescriptor_FindDefaultConverterType_m10721(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
	}

IL_0061:
	{
		Type_t * L_17 = V_0;
		if (!L_17)
		{
			goto IL_00a9;
		}
	}
	{
		Type_t * L_18 = V_0;
		TypeU5BU5D_t570* L_19 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Type_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 0)) = (Type_t *)L_20;
		NullCheck(L_18);
		ConstructorInfo_t574 * L_21 = (ConstructorInfo_t574 *)VirtFuncInvoker1< ConstructorInfo_t574 *, TypeU5BU5D_t570* >::Invoke(73 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_18, L_19);
		V_3 = L_21;
		ConstructorInfo_t574 * L_22 = V_3;
		if (!L_22)
		{
			goto IL_009d;
		}
	}
	{
		ConstructorInfo_t574 * L_23 = V_3;
		ObjectU5BU5D_t300* L_24 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 1));
		Type_t * L_25 = ___type;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
		ArrayElementTypeCheck (L_24, L_25);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 0)) = (Object_t *)L_25;
		NullCheck(L_23);
		Object_t * L_26 = ConstructorInfo_Invoke_m3265(L_23, L_24, /*hidden argument*/NULL);
		return ((TypeConverter_t1427 *)Castclass(L_26, TypeConverter_t1427_il2cpp_TypeInfo_var));
	}

IL_009d:
	{
		Type_t * L_27 = V_0;
		Object_t * L_28 = Activator_CreateInstance_m3582(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		return ((TypeConverter_t1427 *)Castclass(L_28, TypeConverter_t1427_il2cpp_TypeInfo_var));
	}

IL_00a9:
	{
		return (TypeConverter_t1427 *)NULL;
	}
}
// System.Type System.ComponentModel.TypeDescriptor::FindDefaultConverterType(System.Type)
extern const Il2CppType* Nullable_1_t1797_0_0_0_var;
extern const Il2CppType* NullableConverter_t1916_0_0_0_var;
extern const Il2CppType* Object_t_0_0_0_var;
extern const Il2CppType* ReferenceConverter_t1891_0_0_0_var;
extern const Il2CppType* TypeConverter_t1427_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t1150_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" Type_t * TypeDescriptor_FindDefaultConverterType_m10721 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t1797_0_0_0_var = il2cpp_codegen_type_from_index(3431);
		NullableConverter_t1916_0_0_0_var = il2cpp_codegen_type_from_index(4331);
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		ReferenceConverter_t1891_0_0_0_var = il2cpp_codegen_type_from_index(4332);
		TypeConverter_t1427_0_0_0_var = il2cpp_codegen_type_from_index(2963);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		DictionaryEntry_t1150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2048);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	DictionaryEntry_t1150  V_1 = {0};
	Object_t * V_2 = {0};
	Type_t * V_3 = {0};
	DictionaryEntry_t1150  V_4 = {0};
	Object_t * V_5 = {0};
	Type_t * V_6 = {0};
	Type_t * V_7 = {0};
	Object_t * V_8 = {0};
	Object_t * V_9 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Type_t *)NULL;
		Type_t * L_0 = ___type;
		if (!L_0)
		{
			goto IL_0099;
		}
	}
	{
		Type_t * L_1 = ___type;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(83 /* System.Boolean System.Type::get_IsGenericType() */, L_1);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(82 /* System.Type System.Type::GetGenericTypeDefinition() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Nullable_1_t1797_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5))))
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(NullableConverter_t1916_0_0_0_var), /*hidden argument*/NULL);
		return L_6;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		ArrayList_t913 * L_7 = TypeDescriptor_get_DefaultConverters_m10720(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_7);
		V_2 = L_8;
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0074;
		}

IL_0043:
		{
			Object_t * L_9 = V_2;
			NullCheck(L_9);
			Object_t * L_10 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_9);
			V_1 = ((*(DictionaryEntry_t1150 *)((DictionaryEntry_t1150 *)UnBox (L_10, DictionaryEntry_t1150_il2cpp_TypeInfo_var))));
			Object_t * L_11 = DictionaryEntry_get_Key_m5206((&V_1), /*hidden argument*/NULL);
			Type_t * L_12 = ___type;
			if ((!(((Object_t*)(Type_t *)((Type_t *)Castclass(L_11, Type_t_il2cpp_TypeInfo_var))) == ((Object_t*)(Type_t *)L_12))))
			{
				goto IL_0074;
			}
		}

IL_0061:
		{
			Object_t * L_13 = DictionaryEntry_get_Value_m5203((&V_1), /*hidden argument*/NULL);
			V_7 = ((Type_t *)Castclass(L_13, Type_t_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x164, FINALLY_0084);
		}

IL_0074:
		{
			Object_t * L_14 = V_2;
			NullCheck(L_14);
			bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0043;
			}
		}

IL_007f:
		{
			IL2CPP_LEAVE(0x99, FINALLY_0084);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0084;
	}

FINALLY_0084:
	{ // begin finally (depth: 1)
		{
			Object_t * L_16 = V_2;
			V_8 = ((Object_t *)IsInst(L_16, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_17 = V_8;
			if (L_17)
			{
				goto IL_0091;
			}
		}

IL_0090:
		{
			IL2CPP_END_FINALLY(132)
		}

IL_0091:
		{
			Object_t * L_18 = V_8;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_18);
			IL2CPP_END_FINALLY(132)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_JUMP_TBL(0x164, IL_0164)
		IL2CPP_JUMP_TBL(0x99, IL_0099)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0099:
	{
		Type_t * L_19 = ___type;
		V_3 = L_19;
		goto IL_011a;
	}

IL_00a0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		ArrayList_t913 * L_20 = TypeDescriptor_get_DefaultConverters_m10720(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_20);
		Object_t * L_21 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_20);
		V_5 = L_21;
	}

IL_00ac:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ec;
		}

IL_00b1:
		{
			Object_t * L_22 = V_5;
			NullCheck(L_22);
			Object_t * L_23 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_22);
			V_4 = ((*(DictionaryEntry_t1150 *)((DictionaryEntry_t1150 *)UnBox (L_23, DictionaryEntry_t1150_il2cpp_TypeInfo_var))));
			Object_t * L_24 = DictionaryEntry_get_Key_m5206((&V_4), /*hidden argument*/NULL);
			V_6 = ((Type_t *)Castclass(L_24, Type_t_il2cpp_TypeInfo_var));
			Type_t * L_25 = V_6;
			Type_t * L_26 = V_3;
			NullCheck(L_25);
			bool L_27 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_25, L_26);
			if (!L_27)
			{
				goto IL_00ec;
			}
		}

IL_00da:
		{
			Object_t * L_28 = DictionaryEntry_get_Value_m5203((&V_4), /*hidden argument*/NULL);
			V_0 = ((Type_t *)Castclass(L_28, Type_t_il2cpp_TypeInfo_var));
			goto IL_00f8;
		}

IL_00ec:
		{
			Object_t * L_29 = V_5;
			NullCheck(L_29);
			bool L_30 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_29);
			if (L_30)
			{
				goto IL_00b1;
			}
		}

IL_00f8:
		{
			IL2CPP_LEAVE(0x113, FINALLY_00fd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_00fd;
	}

FINALLY_00fd:
	{ // begin finally (depth: 1)
		{
			Object_t * L_31 = V_5;
			V_9 = ((Object_t *)IsInst(L_31, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_32 = V_9;
			if (L_32)
			{
				goto IL_010b;
			}
		}

IL_010a:
		{
			IL2CPP_END_FINALLY(253)
		}

IL_010b:
		{
			Object_t * L_33 = V_9;
			NullCheck(L_33);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_33);
			IL2CPP_END_FINALLY(253)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(253)
	{
		IL2CPP_JUMP_TBL(0x113, IL_0113)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0113:
	{
		Type_t * L_34 = V_3;
		NullCheck(L_34);
		Type_t * L_35 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_34);
		V_3 = L_35;
	}

IL_011a:
	{
		Type_t * L_36 = V_3;
		if (!L_36)
		{
			goto IL_0130;
		}
	}
	{
		Type_t * L_37 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_37) == ((Object_t*)(Type_t *)L_38))))
		{
			goto IL_00a0;
		}
	}

IL_0130:
	{
		Type_t * L_39 = V_0;
		if (L_39)
		{
			goto IL_0162;
		}
	}
	{
		Type_t * L_40 = ___type;
		if (!L_40)
		{
			goto IL_0157;
		}
	}
	{
		Type_t * L_41 = ___type;
		NullCheck(L_41);
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_41);
		if (!L_42)
		{
			goto IL_0157;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_43 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ReferenceConverter_t1891_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_43;
		goto IL_0162;
	}

IL_0157:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(TypeConverter_t1427_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_44;
	}

IL_0162:
	{
		Type_t * L_45 = V_0;
		return L_45;
	}

IL_0164:
	{
		Type_t * L_46 = V_7;
		return L_46;
	}
}
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[])
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern "C" PropertyDescriptorCollection_t936 * TypeDescriptor_GetProperties_m10722 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t1913* ___attributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___component;
		AttributeU5BU5D_t1913* L_1 = ___attributes;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		PropertyDescriptorCollection_t936 * L_2 = TypeDescriptor_GetProperties_m10723(NULL /*static, unused*/, L_0, L_1, 0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[],System.Boolean)
extern TypeInfo* PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var;
extern TypeInfo* ICustomTypeDescriptor_t2230_il2cpp_TypeInfo_var;
extern TypeInfo* IComponent_t1198_il2cpp_TypeInfo_var;
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern "C" PropertyDescriptorCollection_t936 * TypeDescriptor_GetProperties_m10723 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t1913* ___attributes, bool ___noCustomTypeDesc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4278);
		ICustomTypeDescriptor_t2230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4333);
		IComponent_t1198_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2160);
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___component;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var);
		PropertyDescriptorCollection_t936 * L_1 = ((PropertyDescriptorCollection_t936_StaticFields*)PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var->static_fields)->___Empty_0;
		return L_1;
	}

IL_000c:
	{
		bool L_2 = ___noCustomTypeDesc;
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		Object_t * L_3 = ___component;
		if (!((Object_t *)IsInst(L_3, ICustomTypeDescriptor_t2230_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		Object_t * L_4 = ___component;
		AttributeU5BU5D_t1913* L_5 = ___attributes;
		NullCheck(((Object_t *)Castclass(L_4, ICustomTypeDescriptor_t2230_il2cpp_TypeInfo_var)));
		PropertyDescriptorCollection_t936 * L_6 = (PropertyDescriptorCollection_t936 *)InterfaceFuncInvoker1< PropertyDescriptorCollection_t936 *, AttributeU5BU5D_t1913* >::Invoke(0 /* System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor::GetProperties(System.Attribute[]) */, ICustomTypeDescriptor_t2230_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_4, ICustomTypeDescriptor_t2230_il2cpp_TypeInfo_var)), L_5);
		return L_6;
	}

IL_002a:
	{
		Object_t * L_7 = ___component;
		V_0 = ((Object_t *)IsInst(L_7, IComponent_t1198_il2cpp_TypeInfo_var));
		Object_t * L_8 = V_0;
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		Object_t * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.ComponentModel.ISite System.ComponentModel.IComponent::get_Site() */, IComponent_t1198_il2cpp_TypeInfo_var, L_9);
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		Object_t * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		ComponentInfo_t1928 * L_12 = TypeDescriptor_GetComponentInfo_m10725(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		AttributeU5BU5D_t1913* L_13 = ___attributes;
		NullCheck(L_12);
		PropertyDescriptorCollection_t936 * L_14 = Info_GetProperties_m10730(L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_004f:
	{
		Object_t * L_15 = ___component;
		NullCheck(L_15);
		Type_t * L_16 = Object_GetType_m1416(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		TypeInfo_t1929 * L_17 = TypeDescriptor_GetTypeInfo_m10726(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		AttributeU5BU5D_t1913* L_18 = ___attributes;
		NullCheck(L_17);
		PropertyDescriptorCollection_t936 * L_19 = Info_GetProperties_m10730(L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Void System.ComponentModel.TypeDescriptor::OnComponentDisposed(System.Object,System.EventArgs)
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern "C" void TypeDescriptor_OnComponentDisposed_m10724 (Object_t * __this /* static, unused */, Object_t * ___sender, EventArgs_t912 * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t915 * V_0 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		Hashtable_t915 * L_0 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___componentTable_2;
		V_0 = L_0;
		Hashtable_t915 * L_1 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		Hashtable_t915 * L_2 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___componentTable_2;
		Object_t * L_3 = ___sender;
		NullCheck(L_2);
		VirtActionInvoker1< Object_t * >::Invoke(31 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_2, L_3);
		IL2CPP_LEAVE(0x23, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		Hashtable_t915 * L_4 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(28)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_JUMP_TBL(0x23, IL_0023)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0023:
	{
		return;
	}
}
// System.ComponentModel.ComponentInfo System.ComponentModel.TypeDescriptor::GetComponentInfo(System.ComponentModel.IComponent)
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ComponentInfo_t1928_il2cpp_TypeInfo_var;
extern TypeInfo* EventHandler_t1926_il2cpp_TypeInfo_var;
extern TypeInfo* IComponent_t1198_il2cpp_TypeInfo_var;
extern const MethodInfo* TypeDescriptor_OnComponentDisposed_m10724_MethodInfo_var;
extern "C" ComponentInfo_t1928 * TypeDescriptor_GetComponentInfo_m10725 (Object_t * __this /* static, unused */, Object_t * ___com, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		ComponentInfo_t1928_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4334);
		EventHandler_t1926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4283);
		IComponent_t1198_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2160);
		TypeDescriptor_OnComponentDisposed_m10724_MethodInfo_var = il2cpp_codegen_method_info_from_index(328);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t915 * V_0 = {0};
	ComponentInfo_t1928 * V_1 = {0};
	ComponentInfo_t1928 * V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		Hashtable_t915 * L_0 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___componentTable_2;
		V_0 = L_0;
		Hashtable_t915 * L_1 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
			Hashtable_t915 * L_2 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___componentTable_2;
			Object_t * L_3 = ___com;
			NullCheck(L_2);
			Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, L_3);
			V_1 = ((ComponentInfo_t1928 *)Castclass(L_4, ComponentInfo_t1928_il2cpp_TypeInfo_var));
			ComponentInfo_t1928 * L_5 = V_1;
			if (L_5)
			{
				goto IL_005c;
			}
		}

IL_0023:
		{
			IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
			EventHandler_t1926 * L_6 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___onDispose_8;
			if (L_6)
			{
				goto IL_003e;
			}
		}

IL_002d:
		{
			IntPtr_t L_7 = { (void*)TypeDescriptor_OnComponentDisposed_m10724_MethodInfo_var };
			EventHandler_t1926 * L_8 = (EventHandler_t1926 *)il2cpp_codegen_object_new (EventHandler_t1926_il2cpp_TypeInfo_var);
			EventHandler__ctor_m12778(L_8, NULL, L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
			((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___onDispose_8 = L_8;
		}

IL_003e:
		{
			Object_t * L_9 = ___com;
			IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
			EventHandler_t1926 * L_10 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___onDispose_8;
			NullCheck(L_9);
			InterfaceActionInvoker1< EventHandler_t1926 * >::Invoke(0 /* System.Void System.ComponentModel.IComponent::add_Disposed(System.EventHandler) */, IComponent_t1198_il2cpp_TypeInfo_var, L_9, L_10);
			Object_t * L_11 = ___com;
			ComponentInfo_t1928 * L_12 = (ComponentInfo_t1928 *)il2cpp_codegen_object_new (ComponentInfo_t1928_il2cpp_TypeInfo_var);
			ComponentInfo__ctor_m10732(L_12, L_11, /*hidden argument*/NULL);
			V_1 = L_12;
			Hashtable_t915 * L_13 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___componentTable_2;
			Object_t * L_14 = ___com;
			ComponentInfo_t1928 * L_15 = V_1;
			NullCheck(L_13);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_13, L_14, L_15);
		}

IL_005c:
		{
			ComponentInfo_t1928 * L_16 = V_1;
			V_2 = L_16;
			IL2CPP_LEAVE(0x6F, FINALLY_0068);
		}

IL_0063:
		{
			; // IL_0063: leave IL_006f
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		Hashtable_t915 * L_17 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(104)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_006f:
	{
		ComponentInfo_t1928 * L_18 = V_2;
		return L_18;
	}
}
// System.ComponentModel.TypeInfo System.ComponentModel.TypeDescriptor::GetTypeInfo(System.Type)
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInfo_t1929_il2cpp_TypeInfo_var;
extern "C" TypeInfo_t1929 * TypeDescriptor_GetTypeInfo_m10726 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		TypeInfo_t1929_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4335);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t915 * V_0 = {0};
	TypeInfo_t1929 * V_1 = {0};
	TypeInfo_t1929 * V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		Hashtable_t915 * L_0 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___typeTable_3;
		V_0 = L_0;
		Hashtable_t915 * L_1 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
			Hashtable_t915 * L_2 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___typeTable_3;
			Type_t * L_3 = ___type;
			NullCheck(L_2);
			Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, L_3);
			V_1 = ((TypeInfo_t1929 *)Castclass(L_4, TypeInfo_t1929_il2cpp_TypeInfo_var));
			TypeInfo_t1929 * L_5 = V_1;
			if (L_5)
			{
				goto IL_0036;
			}
		}

IL_0023:
		{
			Type_t * L_6 = ___type;
			TypeInfo_t1929 * L_7 = (TypeInfo_t1929 *)il2cpp_codegen_object_new (TypeInfo_t1929_il2cpp_TypeInfo_var);
			TypeInfo__ctor_m10735(L_7, L_6, /*hidden argument*/NULL);
			V_1 = L_7;
			IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
			Hashtable_t915 * L_8 = ((TypeDescriptor_t1474_StaticFields*)TypeDescriptor_t1474_il2cpp_TypeInfo_var->static_fields)->___typeTable_3;
			Type_t * L_9 = ___type;
			TypeInfo_t1929 * L_10 = V_1;
			NullCheck(L_8);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_8, L_9, L_10);
		}

IL_0036:
		{
			TypeInfo_t1929 * L_11 = V_1;
			V_2 = L_11;
			IL2CPP_LEAVE(0x49, FINALLY_0042);
		}

IL_003d:
		{
			; // IL_003d: leave IL_0049
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Hashtable_t915 * L_12 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x49, IL_0049)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0049:
	{
		TypeInfo_t1929 * L_13 = V_2;
		return L_13;
	}
}
// System.Type System.ComponentModel.TypeDescriptor::GetTypeFromName(System.ComponentModel.IComponent,System.String)
extern const Il2CppType* ITypeResolutionService_t2231_0_0_0_var;
extern TypeInfo* IComponent_t1198_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IServiceProvider_t1197_il2cpp_TypeInfo_var;
extern TypeInfo* ITypeResolutionService_t2231_il2cpp_TypeInfo_var;
extern "C" Type_t * TypeDescriptor_GetTypeFromName_m10727 (Object_t * __this /* static, unused */, Object_t * ___component, String_t* ___typeName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITypeResolutionService_t2231_0_0_0_var = il2cpp_codegen_type_from_index(4336);
		IComponent_t1198_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2160);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IServiceProvider_t1197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2159);
		ITypeResolutionService_t2231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4336);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		V_0 = (Type_t *)NULL;
		Object_t * L_0 = ___component;
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		Object_t * L_1 = ___component;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.ComponentModel.ISite System.ComponentModel.IComponent::get_Site() */, IComponent_t1198_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		Object_t * L_3 = ___component;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.ComponentModel.ISite System.ComponentModel.IComponent::get_Site() */, IComponent_t1198_il2cpp_TypeInfo_var, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ITypeResolutionService_t2231_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Type_t * >::Invoke(0 /* System.Object System.IServiceProvider::GetService(System.Type) */, IServiceProvider_t1197_il2cpp_TypeInfo_var, L_4, L_5);
		V_1 = ((Object_t *)Castclass(L_6, ITypeResolutionService_t2231_il2cpp_TypeInfo_var));
		Object_t * L_7 = V_1;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		Object_t * L_8 = V_1;
		String_t* L_9 = ___typeName;
		NullCheck(L_8);
		Type_t * L_10 = (Type_t *)InterfaceFuncInvoker1< Type_t *, String_t* >::Invoke(0 /* System.Type System.ComponentModel.Design.ITypeResolutionService::GetType(System.String) */, ITypeResolutionService_t2231_il2cpp_TypeInfo_var, L_8, L_9);
		V_0 = L_10;
	}

IL_003c:
	{
		Type_t * L_11 = V_0;
		if (L_11)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_12 = ___typeName;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetType_m5093(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_0049:
	{
		Type_t * L_14 = V_0;
		return L_14;
	}
}
// System.ComponentModel.Info
#include "System_System_ComponentModel_Info.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.ComponentModel.Info::.ctor(System.Type)
extern "C" void Info__ctor_m10728 (Info_t1927 * __this, Type_t * ___infoType, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___infoType;
		__this->____infoType_0 = L_0;
		return;
	}
}
// System.ComponentModel.AttributeCollection System.ComponentModel.Info::GetAttributes()
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.Info::GetProperties()
// System.Type System.ComponentModel.Info::get_InfoType()
extern "C" Type_t * Info_get_InfoType_m10729 (Info_t1927 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____infoType_0);
		return L_0;
	}
}
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.Info::GetProperties(System.Attribute[])
extern "C" PropertyDescriptorCollection_t936 * Info_GetProperties_m10730 (Info_t1927 * __this, AttributeU5BU5D_t1913* ___attributes, const MethodInfo* method)
{
	PropertyDescriptorCollection_t936 * V_0 = {0};
	{
		PropertyDescriptorCollection_t936 * L_0 = (PropertyDescriptorCollection_t936 *)VirtFuncInvoker0< PropertyDescriptorCollection_t936 * >::Invoke(5 /* System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.Info::GetProperties() */, __this);
		V_0 = L_0;
		AttributeU5BU5D_t1913* L_1 = ___attributes;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		PropertyDescriptorCollection_t936 * L_2 = V_0;
		return L_2;
	}

IL_000f:
	{
		PropertyDescriptorCollection_t936 * L_3 = V_0;
		AttributeU5BU5D_t1913* L_4 = ___attributes;
		NullCheck(L_3);
		PropertyDescriptorCollection_t936 * L_5 = PropertyDescriptorCollection_Filter_m10646(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.ComponentModel.AttributeCollection System.ComponentModel.Info::GetAttributes(System.ComponentModel.IComponent)
extern const Il2CppType* Object_t_0_0_0_var;
extern const Il2CppType* ITypeDescriptorFilterService_t2232_0_0_0_var;
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* Attribute_t478_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* IComponent_t1198_il2cpp_TypeInfo_var;
extern TypeInfo* IServiceProvider_t1197_il2cpp_TypeInfo_var;
extern TypeInfo* ITypeDescriptorFilterService_t2232_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeU5BU5D_t1913_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeCollection_t1883_il2cpp_TypeInfo_var;
extern "C" AttributeCollection_t1883 * Info_GetAttributes_m10731 (Info_t1927 * __this, Object_t * ___comp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		ITypeDescriptorFilterService_t2232_0_0_0_var = il2cpp_codegen_type_from_index(4337);
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		Attribute_t478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1284);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		IComponent_t1198_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2160);
		IServiceProvider_t1197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2159);
		ITypeDescriptorFilterService_t2232_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4337);
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		AttributeU5BU5D_t1913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4294);
		AttributeCollection_t1883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4280);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	ArrayList_t913 * V_1 = {0};
	Attribute_t478 * V_2 = {0};
	ObjectU5BU5D_t300* V_3 = {0};
	int32_t V_4 = 0;
	Type_t * V_5 = {0};
	Attribute_t478 * V_6 = {0};
	ObjectU5BU5D_t300* V_7 = {0};
	int32_t V_8 = 0;
	Type_t * V_9 = {0};
	TypeU5BU5D_t570* V_10 = {0};
	int32_t V_11 = 0;
	Attribute_t478 * V_12 = {0};
	Object_t * V_13 = {0};
	Hashtable_t915 * V_14 = {0};
	int32_t V_15 = 0;
	Attribute_t478 * V_16 = {0};
	Object_t * V_17 = {0};
	AttributeU5BU5D_t1913* V_18 = {0};
	AttributeCollection_t1883 * V_19 = {0};
	Object_t * V_20 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AttributeCollection_t1883 * L_0 = (__this->____attributes_1);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		AttributeCollection_t1883 * L_1 = (__this->____attributes_1);
		return L_1;
	}

IL_0012:
	{
		V_0 = 1;
		ArrayList_t913 * L_2 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		Type_t * L_3 = (__this->____infoType_0);
		NullCheck(L_3);
		ObjectU5BU5D_t300* L_4 = (ObjectU5BU5D_t300*)VirtFuncInvoker1< ObjectU5BU5D_t300*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_3, 0);
		V_3 = L_4;
		V_4 = 0;
		goto IL_0047;
	}

IL_002f:
	{
		ObjectU5BU5D_t300* L_5 = V_3;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_2 = ((Attribute_t478 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7)), Attribute_t478_il2cpp_TypeInfo_var));
		ArrayList_t913 * L_8 = V_1;
		Attribute_t478 * L_9 = V_2;
		NullCheck(L_8);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, L_9);
		int32_t L_10 = V_4;
		V_4 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_11 = V_4;
		ObjectU5BU5D_t300* L_12 = V_3;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		Type_t * L_13 = (__this->____infoType_0);
		NullCheck(L_13);
		Type_t * L_14 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_13);
		V_5 = L_14;
		goto IL_00a4;
	}

IL_0063:
	{
		Type_t * L_15 = V_5;
		NullCheck(L_15);
		ObjectU5BU5D_t300* L_16 = (ObjectU5BU5D_t300*)VirtFuncInvoker1< ObjectU5BU5D_t300*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_15, 0);
		V_7 = L_16;
		V_8 = 0;
		goto IL_0090;
	}

IL_0075:
	{
		ObjectU5BU5D_t300* L_17 = V_7;
		int32_t L_18 = V_8;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_6 = ((Attribute_t478 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), Attribute_t478_il2cpp_TypeInfo_var));
		ArrayList_t913 * L_20 = V_1;
		Attribute_t478 * L_21 = V_6;
		NullCheck(L_20);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_20, L_21);
		int32_t L_22 = V_8;
		V_8 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0090:
	{
		int32_t L_23 = V_8;
		ObjectU5BU5D_t300* L_24 = V_7;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_0075;
		}
	}
	{
		Type_t * L_25 = V_5;
		NullCheck(L_25);
		Type_t * L_26 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_25);
		V_5 = L_26;
	}

IL_00a4:
	{
		Type_t * L_27 = V_5;
		if (!L_27)
		{
			goto IL_00bc;
		}
	}
	{
		Type_t * L_28 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_29 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_28) == ((Object_t*)(Type_t *)L_29))))
		{
			goto IL_0063;
		}
	}

IL_00bc:
	{
		Type_t * L_30 = (__this->____infoType_0);
		NullCheck(L_30);
		TypeU5BU5D_t570* L_31 = (TypeU5BU5D_t570*)VirtFuncInvoker0< TypeU5BU5D_t570* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_30);
		V_10 = L_31;
		V_11 = 0;
		goto IL_012f;
	}

IL_00d1:
	{
		TypeU5BU5D_t570* L_32 = V_10;
		int32_t L_33 = V_11;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = L_33;
		V_9 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_32, L_34));
		Type_t * L_35 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		AttributeCollection_t1883 * L_36 = TypeDescriptor_GetAttributes_m10719(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Object_t * L_37 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.ComponentModel.AttributeCollection::GetEnumerator() */, L_36);
		V_13 = L_37;
	}

IL_00e6:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0102;
		}

IL_00eb:
		{
			Object_t * L_38 = V_13;
			NullCheck(L_38);
			Object_t * L_39 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_38);
			V_12 = ((Attribute_t478 *)Castclass(L_39, Attribute_t478_il2cpp_TypeInfo_var));
			ArrayList_t913 * L_40 = V_1;
			Attribute_t478 * L_41 = V_12;
			NullCheck(L_40);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_40, L_41);
		}

IL_0102:
		{
			Object_t * L_42 = V_13;
			NullCheck(L_42);
			bool L_43 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_42);
			if (L_43)
			{
				goto IL_00eb;
			}
		}

IL_010e:
		{
			IL2CPP_LEAVE(0x129, FINALLY_0113);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0113;
	}

FINALLY_0113:
	{ // begin finally (depth: 1)
		{
			Object_t * L_44 = V_13;
			V_20 = ((Object_t *)IsInst(L_44, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_45 = V_20;
			if (L_45)
			{
				goto IL_0121;
			}
		}

IL_0120:
		{
			IL2CPP_END_FINALLY(275)
		}

IL_0121:
		{
			Object_t * L_46 = V_20;
			NullCheck(L_46);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_46);
			IL2CPP_END_FINALLY(275)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(275)
	{
		IL2CPP_JUMP_TBL(0x129, IL_0129)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0129:
	{
		int32_t L_47 = V_11;
		V_11 = ((int32_t)((int32_t)L_47+(int32_t)1));
	}

IL_012f:
	{
		int32_t L_48 = V_11;
		TypeU5BU5D_t570* L_49 = V_10;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)(((int32_t)(((Array_t *)L_49)->max_length))))))
		{
			goto IL_00d1;
		}
	}
	{
		Hashtable_t915 * L_50 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_50, /*hidden argument*/NULL);
		V_14 = L_50;
		ArrayList_t913 * L_51 = V_1;
		NullCheck(L_51);
		int32_t L_52 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_51);
		V_15 = ((int32_t)((int32_t)L_52-(int32_t)1));
		goto IL_0175;
	}

IL_0150:
	{
		ArrayList_t913 * L_53 = V_1;
		int32_t L_54 = V_15;
		NullCheck(L_53);
		Object_t * L_55 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_53, L_54);
		V_16 = ((Attribute_t478 *)Castclass(L_55, Attribute_t478_il2cpp_TypeInfo_var));
		Hashtable_t915 * L_56 = V_14;
		Attribute_t478 * L_57 = V_16;
		NullCheck(L_57);
		Object_t * L_58 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Object System.Attribute::get_TypeId() */, L_57);
		Attribute_t478 * L_59 = V_16;
		NullCheck(L_56);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_56, L_58, L_59);
		int32_t L_60 = V_15;
		V_15 = ((int32_t)((int32_t)L_60-(int32_t)1));
	}

IL_0175:
	{
		int32_t L_61 = V_15;
		if ((((int32_t)L_61) >= ((int32_t)0)))
		{
			goto IL_0150;
		}
	}
	{
		Object_t * L_62 = ___comp;
		if (!L_62)
		{
			goto IL_01bc;
		}
	}
	{
		Object_t * L_63 = ___comp;
		NullCheck(L_63);
		Object_t * L_64 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.ComponentModel.ISite System.ComponentModel.IComponent::get_Site() */, IComponent_t1198_il2cpp_TypeInfo_var, L_63);
		if (!L_64)
		{
			goto IL_01bc;
		}
	}
	{
		Object_t * L_65 = ___comp;
		NullCheck(L_65);
		Object_t * L_66 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.ComponentModel.ISite System.ComponentModel.IComponent::get_Site() */, IComponent_t1198_il2cpp_TypeInfo_var, L_65);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_67 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ITypeDescriptorFilterService_t2232_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_66);
		Object_t * L_68 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Type_t * >::Invoke(0 /* System.Object System.IServiceProvider::GetService(System.Type) */, IServiceProvider_t1197_il2cpp_TypeInfo_var, L_66, L_67);
		V_17 = ((Object_t *)Castclass(L_68, ITypeDescriptorFilterService_t2232_il2cpp_TypeInfo_var));
		Object_t * L_69 = V_17;
		if (!L_69)
		{
			goto IL_01bc;
		}
	}
	{
		Object_t * L_70 = V_17;
		Object_t * L_71 = ___comp;
		Hashtable_t915 * L_72 = V_14;
		NullCheck(L_70);
		bool L_73 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.ComponentModel.Design.ITypeDescriptorFilterService::FilterAttributes(System.ComponentModel.IComponent,System.Collections.IDictionary) */, ITypeDescriptorFilterService_t2232_il2cpp_TypeInfo_var, L_70, L_71, L_72);
		V_0 = L_73;
	}

IL_01bc:
	{
		Hashtable_t915 * L_74 = V_14;
		NullCheck(L_74);
		Object_t * L_75 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(23 /* System.Collections.ICollection System.Collections.Hashtable::get_Values() */, L_74);
		NullCheck(L_75);
		int32_t L_76 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t793_il2cpp_TypeInfo_var, L_75);
		V_18 = ((AttributeU5BU5D_t1913*)SZArrayNew(AttributeU5BU5D_t1913_il2cpp_TypeInfo_var, L_76));
		Hashtable_t915 * L_77 = V_14;
		NullCheck(L_77);
		Object_t * L_78 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(23 /* System.Collections.ICollection System.Collections.Hashtable::get_Values() */, L_77);
		AttributeU5BU5D_t1913* L_79 = V_18;
		NullCheck(L_78);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t793_il2cpp_TypeInfo_var, L_78, (Array_t *)(Array_t *)L_79, 0);
		AttributeU5BU5D_t1913* L_80 = V_18;
		AttributeCollection_t1883 * L_81 = (AttributeCollection_t1883 *)il2cpp_codegen_object_new (AttributeCollection_t1883_il2cpp_TypeInfo_var);
		AttributeCollection__ctor_m10412(L_81, L_80, /*hidden argument*/NULL);
		V_19 = L_81;
		bool L_82 = V_0;
		if (!L_82)
		{
			goto IL_01f5;
		}
	}
	{
		AttributeCollection_t1883 * L_83 = V_19;
		__this->____attributes_1 = L_83;
	}

IL_01f5:
	{
		AttributeCollection_t1883 * L_84 = V_19;
		return L_84;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.ComponentModel.ComponentInfo::.ctor(System.ComponentModel.IComponent)
extern "C" void ComponentInfo__ctor_m10732 (ComponentInfo_t1928 * __this, Object_t * ___component, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___component;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m1416(L_0, /*hidden argument*/NULL);
		Info__ctor_m10728(__this, L_1, /*hidden argument*/NULL);
		Object_t * L_2 = ___component;
		__this->____component_2 = L_2;
		return;
	}
}
// System.ComponentModel.AttributeCollection System.ComponentModel.ComponentInfo::GetAttributes()
extern "C" AttributeCollection_t1883 * ComponentInfo_GetAttributes_m10733 (ComponentInfo_t1928 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____component_2);
		AttributeCollection_t1883 * L_1 = Info_GetAttributes_m10731(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentInfo::GetProperties()
extern const Il2CppType* ITypeDescriptorFilterService_t2232_0_0_0_var;
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionPropertyDescriptor_t1917_il2cpp_TypeInfo_var;
extern TypeInfo* IComponent_t1198_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IServiceProvider_t1197_il2cpp_TypeInfo_var;
extern TypeInfo* ITypeDescriptorFilterService_t2232_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyDescriptorU5BU5D_t2216_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var;
extern "C" PropertyDescriptorCollection_t936 * ComponentInfo_GetProperties_m10734 (ComponentInfo_t1928 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITypeDescriptorFilterService_t2232_0_0_0_var = il2cpp_codegen_type_from_index(4337);
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		ReflectionPropertyDescriptor_t1917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4338);
		IComponent_t1198_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2160);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IServiceProvider_t1197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2159);
		ITypeDescriptorFilterService_t2232_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4337);
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		PropertyDescriptorU5BU5D_t2216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4298);
		PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4278);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	PropertyInfoU5BU5D_t721* V_1 = {0};
	Hashtable_t915 * V_2 = {0};
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	PropertyDescriptorU5BU5D_t2216* V_5 = {0};
	PropertyDescriptorCollection_t936 * V_6 = {0};
	{
		PropertyDescriptorCollection_t936 * L_0 = (__this->____properties_3);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		PropertyDescriptorCollection_t936 * L_1 = (__this->____properties_3);
		return L_1;
	}

IL_0012:
	{
		V_0 = 1;
		Object_t * L_2 = (__this->____component_2);
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m1416(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		PropertyInfoU5BU5D_t721* L_4 = (PropertyInfoU5BU5D_t721*)VirtFuncInvoker1< PropertyInfoU5BU5D_t721*, int32_t >::Invoke(56 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_3, ((int32_t)20));
		V_1 = L_4;
		Hashtable_t915 * L_5 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		PropertyInfoU5BU5D_t721* L_6 = V_1;
		NullCheck(L_6);
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))-(int32_t)1));
		goto IL_0052;
	}

IL_0038:
	{
		Hashtable_t915 * L_7 = V_2;
		PropertyInfoU5BU5D_t721* L_8 = V_1;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		NullCheck((*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_8, L_10)));
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_8, L_10)));
		PropertyInfoU5BU5D_t721* L_12 = V_1;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		ReflectionPropertyDescriptor_t1917 * L_15 = (ReflectionPropertyDescriptor_t1917 *)il2cpp_codegen_object_new (ReflectionPropertyDescriptor_t1917_il2cpp_TypeInfo_var);
		ReflectionPropertyDescriptor__ctor_m10665(L_15, (*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_12, L_14)), /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_7, L_11, L_15);
		int32_t L_16 = V_3;
		V_3 = ((int32_t)((int32_t)L_16-(int32_t)1));
	}

IL_0052:
	{
		int32_t L_17 = V_3;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		Object_t * L_18 = (__this->____component_2);
		NullCheck(L_18);
		Object_t * L_19 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.ComponentModel.ISite System.ComponentModel.IComponent::get_Site() */, IComponent_t1198_il2cpp_TypeInfo_var, L_18);
		if (!L_19)
		{
			goto IL_00a0;
		}
	}
	{
		Object_t * L_20 = (__this->____component_2);
		NullCheck(L_20);
		Object_t * L_21 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.ComponentModel.ISite System.ComponentModel.IComponent::get_Site() */, IComponent_t1198_il2cpp_TypeInfo_var, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ITypeDescriptorFilterService_t2232_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_21);
		Object_t * L_23 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Type_t * >::Invoke(0 /* System.Object System.IServiceProvider::GetService(System.Type) */, IServiceProvider_t1197_il2cpp_TypeInfo_var, L_21, L_22);
		V_4 = ((Object_t *)Castclass(L_23, ITypeDescriptorFilterService_t2232_il2cpp_TypeInfo_var));
		Object_t * L_24 = V_4;
		if (!L_24)
		{
			goto IL_00a0;
		}
	}
	{
		Object_t * L_25 = V_4;
		Object_t * L_26 = (__this->____component_2);
		Hashtable_t915 * L_27 = V_2;
		NullCheck(L_25);
		bool L_28 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(1 /* System.Boolean System.ComponentModel.Design.ITypeDescriptorFilterService::FilterProperties(System.ComponentModel.IComponent,System.Collections.IDictionary) */, ITypeDescriptorFilterService_t2232_il2cpp_TypeInfo_var, L_25, L_26, L_27);
		V_0 = L_28;
	}

IL_00a0:
	{
		Hashtable_t915 * L_29 = V_2;
		NullCheck(L_29);
		Object_t * L_30 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(23 /* System.Collections.ICollection System.Collections.Hashtable::get_Values() */, L_29);
		NullCheck(L_30);
		int32_t L_31 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t793_il2cpp_TypeInfo_var, L_30);
		V_5 = ((PropertyDescriptorU5BU5D_t2216*)SZArrayNew(PropertyDescriptorU5BU5D_t2216_il2cpp_TypeInfo_var, L_31));
		Hashtable_t915 * L_32 = V_2;
		NullCheck(L_32);
		Object_t * L_33 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(23 /* System.Collections.ICollection System.Collections.Hashtable::get_Values() */, L_32);
		PropertyDescriptorU5BU5D_t2216* L_34 = V_5;
		NullCheck(L_33);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t793_il2cpp_TypeInfo_var, L_33, (Array_t *)(Array_t *)L_34, 0);
		PropertyDescriptorU5BU5D_t2216* L_35 = V_5;
		PropertyDescriptorCollection_t936 * L_36 = (PropertyDescriptorCollection_t936 *)il2cpp_codegen_object_new (PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var);
		PropertyDescriptorCollection__ctor_m10613(L_36, L_35, 1, /*hidden argument*/NULL);
		V_6 = L_36;
		bool L_37 = V_0;
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		PropertyDescriptorCollection_t936 * L_38 = V_6;
		__this->____properties_3 = L_38;
	}

IL_00d8:
	{
		PropertyDescriptorCollection_t936 * L_39 = V_6;
		return L_39;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.ComponentModel.TypeInfo::.ctor(System.Type)
extern "C" void TypeInfo__ctor_m10735 (TypeInfo_t1929 * __this, Type_t * ___t, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___t;
		Info__ctor_m10728(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeInfo::GetAttributes()
extern "C" AttributeCollection_t1883 * TypeInfo_GetAttributes_m10736 (TypeInfo_t1929 * __this, const MethodInfo* method)
{
	{
		AttributeCollection_t1883 * L_0 = Info_GetAttributes_m10731(__this, (Object_t *)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeInfo::GetProperties()
extern const Il2CppType* Object_t_0_0_0_var;
extern const Il2CppType* PropertyDescriptor_t1880_0_0_0_var;
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionPropertyDescriptor_t1917_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyDescriptorU5BU5D_t2216_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var;
extern "C" PropertyDescriptorCollection_t936 * TypeInfo_GetProperties_m10737 (TypeInfo_t1929 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		PropertyDescriptor_t1880_0_0_0_var = il2cpp_codegen_type_from_index(4297);
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		ReflectionPropertyDescriptor_t1917_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4338);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		PropertyDescriptorU5BU5D_t2216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4298);
		PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4278);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t915 * V_0 = {0};
	ArrayList_t913 * V_1 = {0};
	Type_t * V_2 = {0};
	PropertyInfoU5BU5D_t721* V_3 = {0};
	PropertyInfo_t * V_4 = {0};
	PropertyInfoU5BU5D_t721* V_5 = {0};
	int32_t V_6 = 0;
	{
		PropertyDescriptorCollection_t936 * L_0 = (__this->____properties_2);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		PropertyDescriptorCollection_t936 * L_1 = (__this->____properties_2);
		return L_1;
	}

IL_0012:
	{
		Hashtable_t915 * L_2 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		ArrayList_t913 * L_3 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		Type_t * L_4 = Info_get_InfoType_m10729(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_00a5;
	}

IL_002a:
	{
		Type_t * L_5 = V_2;
		NullCheck(L_5);
		PropertyInfoU5BU5D_t721* L_6 = (PropertyInfoU5BU5D_t721*)VirtFuncInvoker1< PropertyInfoU5BU5D_t721*, int32_t >::Invoke(56 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_5, ((int32_t)22));
		V_3 = L_6;
		PropertyInfoU5BU5D_t721* L_7 = V_3;
		V_5 = L_7;
		V_6 = 0;
		goto IL_0093;
	}

IL_003e:
	{
		PropertyInfoU5BU5D_t721* L_8 = V_5;
		int32_t L_9 = V_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_4 = (*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_8, L_10));
		PropertyInfo_t * L_11 = V_4;
		NullCheck(L_11);
		ParameterInfoU5BU5D_t718* L_12 = (ParameterInfoU5BU5D_t718*)VirtFuncInvoker0< ParameterInfoU5BU5D_t718* >::Invoke(21 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_11);
		NullCheck(L_12);
		if ((((int32_t)(((Array_t *)L_12)->max_length))))
		{
			goto IL_008d;
		}
	}
	{
		PropertyInfo_t * L_13 = V_4;
		NullCheck(L_13);
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_13);
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		Hashtable_t915 * L_15 = V_0;
		PropertyInfo_t * L_16 = V_4;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		NullCheck(L_15);
		bool L_18 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_15, L_17);
		if (L_18)
		{
			goto IL_008d;
		}
	}
	{
		ArrayList_t913 * L_19 = V_1;
		PropertyInfo_t * L_20 = V_4;
		ReflectionPropertyDescriptor_t1917 * L_21 = (ReflectionPropertyDescriptor_t1917 *)il2cpp_codegen_object_new (ReflectionPropertyDescriptor_t1917_il2cpp_TypeInfo_var);
		ReflectionPropertyDescriptor__ctor_m10665(L_21, L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_19, L_21);
		Hashtable_t915 * L_22 = V_0;
		PropertyInfo_t * L_23 = V_4;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		NullCheck(L_22);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_22, L_24, NULL);
	}

IL_008d:
	{
		int32_t L_25 = V_6;
		V_6 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_0093:
	{
		int32_t L_26 = V_6;
		PropertyInfoU5BU5D_t721* L_27 = V_5;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)(((Array_t *)L_27)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		Type_t * L_28 = V_2;
		NullCheck(L_28);
		Type_t * L_29 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_28);
		V_2 = L_29;
	}

IL_00a5:
	{
		Type_t * L_30 = V_2;
		if (!L_30)
		{
			goto IL_00bb;
		}
	}
	{
		Type_t * L_31 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32))))
		{
			goto IL_002a;
		}
	}

IL_00bb:
	{
		ArrayList_t913 * L_33 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(PropertyDescriptor_t1880_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_33);
		Array_t * L_35 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(44 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_33, L_34);
		PropertyDescriptorCollection_t936 * L_36 = (PropertyDescriptorCollection_t936 *)il2cpp_codegen_object_new (PropertyDescriptorCollection_t936_il2cpp_TypeInfo_var);
		PropertyDescriptorCollection__ctor_m10613(L_36, ((PropertyDescriptorU5BU5D_t2216*)Castclass(L_35, PropertyDescriptorU5BU5D_t2216_il2cpp_TypeInfo_var)), 1, /*hidden argument*/NULL);
		__this->____properties_2 = L_36;
		PropertyDescriptorCollection_t936 * L_37 = (__this->____properties_2);
		return L_37;
	}
}
// System.ComponentModel.UInt16Converter
#include "System_System_ComponentModel_UInt16Converter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.UInt16Converter
#include "System_System_ComponentModel_UInt16ConverterMethodDeclarations.h"

// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.UInt16
#include "mscorlib_System_UInt16MethodDeclarations.h"


// System.Boolean System.ComponentModel.UInt16Converter::get_SupportHex()
extern "C" bool UInt16Converter_get_SupportHex_m10738 (UInt16Converter_t1930 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.String System.ComponentModel.UInt16Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern TypeInfo* UInt16_t700_il2cpp_TypeInfo_var;
extern "C" String_t* UInt16Converter_ConvertToString_m10739 (UInt16Converter_t1930 * __this, Object_t * ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt16_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(994);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		V_0 = ((*(uint16_t*)((uint16_t*)UnBox (L_0, UInt16_t700_il2cpp_TypeInfo_var))));
		NumberFormatInfo_t1037 * L_1 = ___format;
		String_t* L_2 = UInt16_ToString_m12779((&V_0), (String_t*) &_stringLiteral2904, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object System.ComponentModel.UInt16Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern TypeInfo* UInt16_t700_il2cpp_TypeInfo_var;
extern "C" Object_t * UInt16Converter_ConvertFromString_m10740 (UInt16Converter_t1930 * __this, String_t* ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt16_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(994);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		NumberFormatInfo_t1037 * L_1 = ___format;
		uint16_t L_2 = UInt16_Parse_m9881(NULL /*static, unused*/, L_0, 7, L_1, /*hidden argument*/NULL);
		uint16_t L_3 = L_2;
		Object_t * L_4 = Box(UInt16_t700_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Object System.ComponentModel.UInt16Converter::ConvertFromString(System.String,System.Int32)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t700_il2cpp_TypeInfo_var;
extern "C" Object_t * UInt16Converter_ConvertFromString_m10741 (UInt16Converter_t1930 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		UInt16_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(994);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		int32_t L_1 = ___fromBase;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		uint16_t L_2 = Convert_ToUInt16_m12780(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		uint16_t L_3 = L_2;
		Object_t * L_4 = Box(UInt16_t700_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.ComponentModel.UInt32Converter
#include "System_System_ComponentModel_UInt32Converter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.UInt32Converter
#include "System_System_ComponentModel_UInt32ConverterMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"


// System.Boolean System.ComponentModel.UInt32Converter::get_SupportHex()
extern "C" bool UInt32Converter_get_SupportHex_m10742 (UInt32Converter_t1931 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.String System.ComponentModel.UInt32Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern TypeInfo* UInt32_t386_il2cpp_TypeInfo_var;
extern "C" String_t* UInt32Converter_ConvertToString_m10743 (UInt32Converter_t1931 * __this, Object_t * ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt32_t386_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		V_0 = ((*(uint32_t*)((uint32_t*)UnBox (L_0, UInt32_t386_il2cpp_TypeInfo_var))));
		NumberFormatInfo_t1037 * L_1 = ___format;
		String_t* L_2 = UInt32_ToString_m12781((&V_0), (String_t*) &_stringLiteral2904, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object System.ComponentModel.UInt32Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern TypeInfo* UInt32_t386_il2cpp_TypeInfo_var;
extern "C" Object_t * UInt32Converter_ConvertFromString_m10744 (UInt32Converter_t1931 * __this, String_t* ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt32_t386_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		NumberFormatInfo_t1037 * L_1 = ___format;
		uint32_t L_2 = UInt32_Parse_m9882(NULL /*static, unused*/, L_0, 7, L_1, /*hidden argument*/NULL);
		uint32_t L_3 = L_2;
		Object_t * L_4 = Box(UInt32_t386_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Object System.ComponentModel.UInt32Converter::ConvertFromString(System.String,System.Int32)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t386_il2cpp_TypeInfo_var;
extern "C" Object_t * UInt32Converter_ConvertFromString_m10745 (UInt32Converter_t1931 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		UInt32_t386_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		int32_t L_1 = ___fromBase;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		uint32_t L_2 = Convert_ToUInt32_m12782(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		uint32_t L_3 = L_2;
		Object_t * L_4 = Box(UInt32_t386_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.ComponentModel.UInt64Converter
#include "System_System_ComponentModel_UInt64Converter.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.UInt64Converter
#include "System_System_ComponentModel_UInt64ConverterMethodDeclarations.h"

// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.UInt64
#include "mscorlib_System_UInt64MethodDeclarations.h"


// System.Boolean System.ComponentModel.UInt64Converter::get_SupportHex()
extern "C" bool UInt64Converter_get_SupportHex_m10746 (UInt64Converter_t1932 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.String System.ComponentModel.UInt64Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern TypeInfo* UInt64_t699_il2cpp_TypeInfo_var;
extern "C" String_t* UInt64Converter_ConvertToString_m10747 (UInt64Converter_t1932 * __this, Object_t * ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt64_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(990);
		s_Il2CppMethodIntialized = true;
	}
	uint64_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		V_0 = ((*(uint64_t*)((uint64_t*)UnBox (L_0, UInt64_t699_il2cpp_TypeInfo_var))));
		NumberFormatInfo_t1037 * L_1 = ___format;
		String_t* L_2 = UInt64_ToString_m12783((&V_0), (String_t*) &_stringLiteral2904, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object System.ComponentModel.UInt64Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern TypeInfo* UInt64_t699_il2cpp_TypeInfo_var;
extern "C" Object_t * UInt64Converter_ConvertFromString_m10748 (UInt64Converter_t1932 * __this, String_t* ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt64_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(990);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		NumberFormatInfo_t1037 * L_1 = ___format;
		uint64_t L_2 = UInt64_Parse_m9883(NULL /*static, unused*/, L_0, 7, L_1, /*hidden argument*/NULL);
		uint64_t L_3 = L_2;
		Object_t * L_4 = Box(UInt64_t699_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Object System.ComponentModel.UInt64Converter::ConvertFromString(System.String,System.Int32)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t699_il2cpp_TypeInfo_var;
extern "C" Object_t * UInt64Converter_ConvertFromString_m10749 (UInt64Converter_t1932 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		UInt64_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(990);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		int32_t L_1 = ___fromBase;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		uint64_t L_2 = Convert_ToUInt64_m12784(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		uint64_t L_3 = L_2;
		Object_t * L_4 = Box(UInt64_t699_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.ComponentModel.WeakObjectWrapper
#include "System_System_ComponentModel_WeakObjectWrapper.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.WeakObjectWrapper
#include "System_System_ComponentModel_WeakObjectWrapperMethodDeclarations.h"

// System.WeakReference
#include "mscorlib_System_WeakReference.h"


// System.Int32 System.ComponentModel.WeakObjectWrapper::get_TargetHashCode()
extern "C" int32_t WeakObjectWrapper_get_TargetHashCode_m10750 (WeakObjectWrapper_t1934 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CTargetHashCodeU3Ek__BackingField_0);
		return L_0;
	}
}
// System.WeakReference System.ComponentModel.WeakObjectWrapper::get_Weak()
extern "C" WeakReference_t1933 * WeakObjectWrapper_get_Weak_m10751 (WeakObjectWrapper_t1934 * __this, const MethodInfo* method)
{
	{
		WeakReference_t1933 * L_0 = (__this->___U3CWeakU3Ek__BackingField_1);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1<System.ComponentModel.WeakObjectWrapper>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"


// System.Void System.ComponentModel.WeakObjectWrapperComparer::.ctor()
extern TypeInfo* EqualityComparer_1_t1936_il2cpp_TypeInfo_var;
extern const MethodInfo* EqualityComparer_1__ctor_m12785_MethodInfo_var;
extern "C" void WeakObjectWrapperComparer__ctor_m10752 (WeakObjectWrapperComparer_t1935 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t1936_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4339);
		EqualityComparer_1__ctor_m12785_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483977);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t1936_il2cpp_TypeInfo_var);
		EqualityComparer_1__ctor_m12785(__this, /*hidden argument*/EqualityComparer_1__ctor_m12785_MethodInfo_var);
		return;
	}
}
// System.Boolean System.ComponentModel.WeakObjectWrapperComparer::Equals(System.ComponentModel.WeakObjectWrapper,System.ComponentModel.WeakObjectWrapper)
extern "C" bool WeakObjectWrapperComparer_Equals_m10753 (WeakObjectWrapperComparer_t1935 * __this, WeakObjectWrapper_t1934 * ___x, WeakObjectWrapper_t1934 * ___y, const MethodInfo* method)
{
	WeakReference_t1933 * V_0 = {0};
	WeakReference_t1933 * V_1 = {0};
	{
		WeakObjectWrapper_t1934 * L_0 = ___x;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		WeakObjectWrapper_t1934 * L_1 = ___y;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		WeakObjectWrapper_t1934 * L_2 = ___x;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		WeakObjectWrapper_t1934 * L_3 = ___y;
		if (L_3)
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return 0;
	}

IL_001c:
	{
		WeakObjectWrapper_t1934 * L_4 = ___x;
		NullCheck(L_4);
		WeakReference_t1933 * L_5 = WeakObjectWrapper_get_Weak_m10751(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		WeakObjectWrapper_t1934 * L_6 = ___y;
		NullCheck(L_6);
		WeakReference_t1933 * L_7 = WeakObjectWrapper_get_Weak_m10751(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		WeakReference_t1933 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_8);
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		WeakReference_t1933 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_10);
		if (L_11)
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}

IL_0042:
	{
		WeakReference_t1933 * L_12 = V_0;
		NullCheck(L_12);
		Object_t * L_13 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_12);
		WeakReference_t1933 * L_14 = V_1;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_14);
		return ((((Object_t*)(Object_t *)L_13) == ((Object_t*)(Object_t *)L_15))? 1 : 0);
	}
}
// System.Int32 System.ComponentModel.WeakObjectWrapperComparer::GetHashCode(System.ComponentModel.WeakObjectWrapper)
extern "C" int32_t WeakObjectWrapperComparer_GetHashCode_m10754 (WeakObjectWrapperComparer_t1935 * __this, WeakObjectWrapper_t1934 * ___obj, const MethodInfo* method)
{
	{
		WeakObjectWrapper_t1934 * L_0 = ___obj;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		WeakObjectWrapper_t1934 * L_1 = ___obj;
		NullCheck(L_1);
		int32_t L_2 = WeakObjectWrapper_get_TargetHashCode_m10750(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.ComponentModel.Win32Exception
#include "System_System_ComponentModel_Win32Exception.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.Win32Exception
#include "System_System_ComponentModel_Win32ExceptionMethodDeclarations.h"

// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_MarshalMethodDeclarations.h"
// System.Runtime.InteropServices.ExternalException
#include "mscorlib_System_Runtime_InteropServices_ExternalExceptionMethodDeclarations.h"


// System.Void System.ComponentModel.Win32Exception::.ctor()
extern TypeInfo* Marshal_t2233_il2cpp_TypeInfo_var;
extern "C" void Win32Exception__ctor_m10755 (Win32Exception_t1937 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t2233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4340);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t2233_il2cpp_TypeInfo_var);
		int32_t L_0 = Marshal_GetLastWin32Error_m12786(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = Win32Exception_W32ErrorMessage_m10761(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		ExternalException__ctor_m12787(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = Marshal_GetLastWin32Error_m12786(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___native_error_code_11 = L_2;
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
extern "C" void Win32Exception__ctor_m10756 (Win32Exception_t1937 * __this, int32_t ___error, const MethodInfo* method)
{
	{
		int32_t L_0 = ___error;
		String_t* L_1 = Win32Exception_W32ErrorMessage_m10761(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		ExternalException__ctor_m12787(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___error;
		__this->___native_error_code_11 = L_2;
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
extern "C" void Win32Exception__ctor_m10757 (Win32Exception_t1937 * __this, int32_t ___error, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		ExternalException__ctor_m12787(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___error;
		__this->___native_error_code_11 = L_1;
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Win32Exception__ctor_m10758 (Win32Exception_t1937 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___context;
		ExternalException__ctor_m12788(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_2 = ___info;
		NullCheck(L_2);
		int32_t L_3 = SerializationInfo_GetInt32_m5041(L_2, (String_t*) &_stringLiteral2934, /*hidden argument*/NULL);
		__this->___native_error_code_11 = L_3;
		return;
	}
}
// System.Int32 System.ComponentModel.Win32Exception::get_NativeErrorCode()
extern "C" int32_t Win32Exception_get_NativeErrorCode_m10759 (Win32Exception_t1937 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___native_error_code_11);
		return L_0;
	}
}
// System.Void System.ComponentModel.Win32Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" void Win32Exception_GetObjectData_m10760 (Win32Exception_t1937 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t669 * L_0 = ___info;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral2882, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		SerializationInfo_t669 * L_2 = ___info;
		int32_t L_3 = (__this->___native_error_code_11);
		NullCheck(L_2);
		SerializationInfo_AddValue_m5038(L_2, (String_t*) &_stringLiteral2934, L_3, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_4 = ___info;
		StreamingContext_t670  L_5 = ___context;
		Exception_GetObjectData_m3367(__this, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.ComponentModel.Win32Exception::W32ErrorMessage(System.Int32)
extern "C" String_t* Win32Exception_W32ErrorMessage_m10761 (Object_t * __this /* static, unused */, int32_t ___error_code, const MethodInfo* method)
{
	typedef String_t* (*Win32Exception_W32ErrorMessage_m10761_ftn) (int32_t);
	static Win32Exception_W32ErrorMessage_m10761_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Win32Exception_W32ErrorMessage_m10761_ftn)il2cpp_codegen_resolve_icall ("System.ComponentModel.Win32Exception::W32ErrorMessage(System.Int32)");
	return _il2cpp_icall_func(___error_code);
}
// System.Configuration.ConfigurationException
#include "System_System_Configuration_ConfigurationException.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationException
#include "System_System_Configuration_ConfigurationExceptionMethodDeclarations.h"

// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationException::.ctor()
extern "C" void ConfigurationException__ctor_m6891 (ConfigurationException_t1420 * __this, const MethodInfo* method)
{
	{
		ConfigurationException__ctor_m6886(__this, (String_t*)NULL, /*hidden argument*/NULL);
		__this->___filename_11 = (String_t*)NULL;
		__this->___line_12 = 0;
		return;
	}
}
// System.Void System.Configuration.ConfigurationException::.ctor(System.String)
extern "C" void ConfigurationException__ctor_m6886 (ConfigurationException_t1420 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m4993(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationException__ctor_m6892 (ConfigurationException_t1420 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___context;
		SystemException__ctor_m4994(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_2 = ___info;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m5039(L_2, (String_t*) &_stringLiteral2935, /*hidden argument*/NULL);
		__this->___filename_11 = L_3;
		SerializationInfo_t669 * L_4 = ___info;
		NullCheck(L_4);
		int32_t L_5 = SerializationInfo_GetInt32_m5041(L_4, (String_t*) &_stringLiteral2936, /*hidden argument*/NULL);
		__this->___line_12 = L_5;
		return;
	}
}
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Exception)
extern "C" void ConfigurationException__ctor_m6893 (ConfigurationException_t1420 * __this, String_t* ___message, Exception_t306 * ___inner, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t306 * L_1 = ___inner;
		SystemException__ctor_m9847(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Xml.XmlNode)
extern "C" void ConfigurationException__ctor_m10762 (ConfigurationException_t1420 * __this, String_t* ___message, XmlNode_t1124 * ___node, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m4993(__this, L_0, /*hidden argument*/NULL);
		XmlNode_t1124 * L_1 = ___node;
		String_t* L_2 = ConfigurationException_GetXmlNodeFilename_m10765(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->___filename_11 = L_2;
		XmlNode_t1124 * L_3 = ___node;
		int32_t L_4 = ConfigurationException_GetXmlNodeLineNumber_m10766(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->___line_12 = L_4;
		return;
	}
}
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Exception,System.Xml.XmlNode)
extern "C" void ConfigurationException__ctor_m10763 (ConfigurationException_t1420 * __this, String_t* ___message, Exception_t306 * ___inner, XmlNode_t1124 * ___node, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t306 * L_1 = ___inner;
		SystemException__ctor_m9847(__this, L_0, L_1, /*hidden argument*/NULL);
		XmlNode_t1124 * L_2 = ___node;
		String_t* L_3 = ConfigurationException_GetXmlNodeFilename_m10765(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->___filename_11 = L_3;
		XmlNode_t1124 * L_4 = ___node;
		int32_t L_5 = ConfigurationException_GetXmlNodeLineNumber_m10766(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->___line_12 = L_5;
		return;
	}
}
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.String,System.Int32)
extern "C" void ConfigurationException__ctor_m6883 (ConfigurationException_t1420 * __this, String_t* ___message, String_t* ___filename, int32_t ___line, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m4993(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___filename;
		__this->___filename_11 = L_1;
		int32_t L_2 = ___line;
		__this->___line_12 = L_2;
		return;
	}
}
// System.String System.Configuration.ConfigurationException::get_BareMessage()
extern "C" String_t* ConfigurationException_get_BareMessage_m6894 (ConfigurationException_t1420 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Exception_get_Message_m3369(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Configuration.ConfigurationException::get_Message()
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigurationException_get_Message_m10764 (ConfigurationException_t1420 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = (__this->___filename_11);
		if (!L_0)
		{
			goto IL_0090;
		}
	}
	{
		String_t* L_1 = (__this->___filename_11);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1368(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_3 = (__this->___line_12);
		if (!L_3)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t300* L_4 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 6));
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Configuration.ConfigurationException::get_BareMessage() */, __this);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 0)) = (Object_t *)L_5;
		ObjectU5BU5D_t300* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral1509);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 1)) = (Object_t *)(String_t*) &_stringLiteral1509;
		ObjectU5BU5D_t300* L_7 = L_6;
		String_t* L_8 = (__this->___filename_11);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_8;
		ObjectU5BU5D_t300* L_9 = L_7;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral1510);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3)) = (Object_t *)(String_t*) &_stringLiteral1510;
		ObjectU5BU5D_t300* L_10 = L_9;
		int32_t L_11 = (__this->___line_12);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)L_13;
		ObjectU5BU5D_t300* L_14 = L_10;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 5);
		ArrayElementTypeCheck (L_14, (String_t*) &_stringLiteral409);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 5)) = (Object_t *)(String_t*) &_stringLiteral409;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m1267(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_008b;
	}

IL_006f:
	{
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Configuration.ConfigurationException::get_BareMessage() */, __this);
		String_t* L_17 = (__this->___filename_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m3275(NULL /*static, unused*/, L_16, (String_t*) &_stringLiteral1509, L_17, (String_t*) &_stringLiteral409, /*hidden argument*/NULL);
		V_0 = L_18;
	}

IL_008b:
	{
		goto IL_00da;
	}

IL_0090:
	{
		int32_t L_19 = (__this->___line_12);
		if (!L_19)
		{
			goto IL_00d3;
		}
	}
	{
		ObjectU5BU5D_t300* L_20 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 4));
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Configuration.ConfigurationException::get_BareMessage() */, __this);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 0)) = (Object_t *)L_21;
		ObjectU5BU5D_t300* L_22 = L_20;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 1);
		ArrayElementTypeCheck (L_22, (String_t*) &_stringLiteral1511);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_22, 1)) = (Object_t *)(String_t*) &_stringLiteral1511;
		ObjectU5BU5D_t300* L_23 = L_22;
		int32_t L_24 = (__this->___line_12);
		int32_t L_25 = L_24;
		Object_t * L_26 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 2);
		ArrayElementTypeCheck (L_23, L_26);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, 2)) = (Object_t *)L_26;
		ObjectU5BU5D_t300* L_27 = L_23;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 3);
		ArrayElementTypeCheck (L_27, (String_t*) &_stringLiteral409);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_27, 3)) = (Object_t *)(String_t*) &_stringLiteral409;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m1267(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		goto IL_00da;
	}

IL_00d3:
	{
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Configuration.ConfigurationException::get_BareMessage() */, __this);
		V_0 = L_29;
	}

IL_00da:
	{
		String_t* L_30 = V_0;
		return L_30;
	}
}
// System.String System.Configuration.ConfigurationException::GetXmlNodeFilename(System.Xml.XmlNode)
extern TypeInfo* IConfigXmlNode_t2234_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigurationException_GetXmlNodeFilename_m10765 (Object_t * __this /* static, unused */, XmlNode_t1124 * ___node, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConfigXmlNode_t2234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4341);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlNode_t1124 * L_0 = ___node;
		if (((Object_t *)IsInst(L_0, IConfigXmlNode_t2234_il2cpp_TypeInfo_var)))
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_0011:
	{
		XmlNode_t1124 * L_2 = ___node;
		NullCheck(((Object_t *)Castclass(L_2, IConfigXmlNode_t2234_il2cpp_TypeInfo_var)));
		String_t* L_3 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Configuration.IConfigXmlNode::get_Filename() */, IConfigXmlNode_t2234_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_2, IConfigXmlNode_t2234_il2cpp_TypeInfo_var)));
		return L_3;
	}
}
// System.Int32 System.Configuration.ConfigurationException::GetXmlNodeLineNumber(System.Xml.XmlNode)
extern TypeInfo* IConfigXmlNode_t2234_il2cpp_TypeInfo_var;
extern "C" int32_t ConfigurationException_GetXmlNodeLineNumber_m10766 (Object_t * __this /* static, unused */, XmlNode_t1124 * ___node, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConfigXmlNode_t2234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4341);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlNode_t1124 * L_0 = ___node;
		if (((Object_t *)IsInst(L_0, IConfigXmlNode_t2234_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		XmlNode_t1124 * L_1 = ___node;
		NullCheck(((Object_t *)Castclass(L_1, IConfigXmlNode_t2234_il2cpp_TypeInfo_var)));
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Configuration.IConfigXmlNode::get_LineNumber() */, IConfigXmlNode_t2234_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_1, IConfigXmlNode_t2234_il2cpp_TypeInfo_var)));
		return L_2;
	}
}
// System.Void System.Configuration.ConfigurationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationException_GetObjectData_m6895 (ConfigurationException_t1420 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___context;
		Exception_GetObjectData_m3367(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_2 = ___info;
		String_t* L_3 = (__this->___filename_11);
		NullCheck(L_2);
		SerializationInfo_AddValue_m5012(L_2, (String_t*) &_stringLiteral2935, L_3, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_4 = ___info;
		int32_t L_5 = (__this->___line_12);
		NullCheck(L_4);
		SerializationInfo_AddValue_m5038(L_4, (String_t*) &_stringLiteral2936, L_5, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
