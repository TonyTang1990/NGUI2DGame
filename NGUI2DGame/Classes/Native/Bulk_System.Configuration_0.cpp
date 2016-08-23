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
#include "System_Configuration_U3CModuleU3E.h"
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
#include "System_Configuration_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// System.Configuration.Provider.ProviderBase
#include "System_Configuration_System_Configuration_Provider_ProviderB.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.Provider.ProviderBase
#include "System_Configuration_System_Configuration_Provider_ProviderBMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Collections.Specialized.NameValueCollection
#include "System_System_Collections_Specialized_NameValueCollection.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Collections.Specialized.NameValueCollection
#include "System_System_Collections_Specialized_NameValueCollectionMethodDeclarations.h"


// System.Void System.Configuration.Provider.ProviderBase::Initialize(System.String,System.Collections.Specialized.NameValueCollection)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ProviderBase_Initialize_m6480 (ProviderBase_t1396 * __this, String_t* ___name, NameValueCollection_t1401 * ___config, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
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
		String_t* L_2 = ___name;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1368(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_t356 * L_4 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6326(L_4, (String_t*) &_stringLiteral1472, (String_t*) &_stringLiteral302, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002c:
	{
		bool L_5 = (__this->___alreadyInitialized_0);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		InvalidOperationException_t1116 * L_6 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_6, (String_t*) &_stringLiteral1473, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0042:
	{
		__this->___alreadyInitialized_0 = 1;
		String_t* L_7 = ___name;
		__this->____name_2 = L_7;
		NameValueCollection_t1401 * L_8 = ___config;
		if (!L_8)
		{
			goto IL_0072;
		}
	}
	{
		NameValueCollection_t1401 * L_9 = ___config;
		NullCheck(L_9);
		String_t* L_10 = NameValueCollection_get_Item_m6876(L_9, (String_t*) &_stringLiteral1474, /*hidden argument*/NULL);
		__this->____description_1 = L_10;
		NameValueCollection_t1401 * L_11 = ___config;
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.Collections.Specialized.NameValueCollection::Remove(System.String) */, L_11, (String_t*) &_stringLiteral1474);
	}

IL_0072:
	{
		String_t* L_12 = (__this->____description_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_14 = (__this->____name_2);
		__this->____description_1 = L_14;
	}

IL_008e:
	{
		return;
	}
}
// System.String System.Configuration.Provider.ProviderBase::get_Name()
extern "C" String_t* ProviderBase_get_Name_m6481 (ProviderBase_t1396 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____name_2);
		return L_0;
	}
}
// System.Configuration.Provider.ProviderCollection
#include "System_Configuration_System_Configuration_Provider_ProviderC.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.Provider.ProviderCollection
#include "System_Configuration_System_Configuration_Provider_ProviderCMethodDeclarations.h"

// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.StringComparer
#include "mscorlib_System_StringComparerMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void System.Configuration.Provider.ProviderCollection::.ctor()
extern TypeInfo* StringComparer_t678_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" void ProviderCollection__ctor_m6482 (ProviderCollection_t1397 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringComparer_t678_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(918);
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t678_il2cpp_TypeInfo_var);
		StringComparer_t678 * L_0 = StringComparer_get_InvariantCultureIgnoreCase_m6877(NULL /*static, unused*/, /*hidden argument*/NULL);
		Hashtable_t915 * L_1 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6878(L_1, ((int32_t)10), L_0, /*hidden argument*/NULL);
		__this->___lookup_0 = L_1;
		ArrayList_t913 * L_2 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_2, /*hidden argument*/NULL);
		__this->___values_2 = L_2;
		return;
	}
}
// System.Void System.Configuration.Provider.ProviderCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ProviderCollection_System_Collections_ICollection_CopyTo_m6483 (ProviderCollection_t1397 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___values_2);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(37 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Configuration.Provider.ProviderCollection::Add(System.Configuration.Provider.ProviderBase)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" void ProviderCollection_Add_m6484 (ProviderCollection_t1397 * __this, ProviderBase_t1396 * ___provider, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___readOnly_1);
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
		ProviderBase_t1396 * L_2 = ___provider;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		ProviderBase_t1396 * L_3 = ___provider;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Configuration.Provider.ProviderBase::get_Name() */, L_3);
		if (L_4)
		{
			goto IL_0028;
		}
	}

IL_0022:
	{
		ArgumentNullException_t692 * L_5 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3549(L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0028:
	{
		ArrayList_t913 * L_6 = (__this->___values_2);
		ProviderBase_t1396 * L_7 = ___provider;
		NullCheck(L_6);
		int32_t L_8 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_6, L_7);
		V_0 = L_8;
	}

IL_0035:
	try
	{ // begin try (depth: 1)
		Hashtable_t915 * L_9 = (__this->___lookup_0);
		ProviderBase_t1396 * L_10 = ___provider;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Configuration.Provider.ProviderBase::get_Name() */, L_10);
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_9);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_9, L_11, L_14);
		goto IL_0065;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0051;
		throw e;
	}

CATCH_0051:
	{ // begin catch(System.Object)
		ArrayList_t913 * L_15 = (__this->___values_2);
		int32_t L_16 = V_0;
		NullCheck(L_15);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_15, L_16);
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_0065;
	} // end catch (depth: 1)

IL_0065:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Configuration.Provider.ProviderCollection::GetEnumerator()
extern "C" Object_t * ProviderCollection_GetEnumerator_m6485 (ProviderCollection_t1397 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___values_2);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Configuration.Provider.ProviderCollection::get_Count()
extern "C" int32_t ProviderCollection_get_Count_m6486 (ProviderCollection_t1397 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___values_2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Object System.Configuration.Provider.ProviderCollection::get_SyncRoot()
extern "C" Object_t * ProviderCollection_get_SyncRoot_m6487 (ProviderCollection_t1397 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Configuration.Provider.ProviderBase System.Configuration.Provider.ProviderCollection::get_Item(System.String)
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderBase_t1396_il2cpp_TypeInfo_var;
extern "C" ProviderBase_t1396 * ProviderCollection_get_Item_m6488 (ProviderCollection_t1397 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		ProviderBase_t1396_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2939);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Hashtable_t915 * L_0 = (__this->___lookup_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		return (ProviderBase_t1396 *)NULL;
	}

IL_0015:
	{
		ArrayList_t913 * L_4 = (__this->___values_2);
		Object_t * L_5 = V_0;
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, ((*(int32_t*)((int32_t*)UnBox (L_5, Int32_t297_il2cpp_TypeInfo_var)))));
		return ((ProviderBase_t1396 *)IsInst(L_6, ProviderBase_t1396_il2cpp_TypeInfo_var));
	}
}
// System.Configuration.ClientConfigurationSystem
#include "System_Configuration_System_Configuration_ClientConfiguratio.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ClientConfigurationSystem
#include "System_Configuration_System_Configuration_ClientConfiguratioMethodDeclarations.h"

// System.Configuration.Configuration
#include "System_Configuration_System_Configuration_Configuration.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Configuration.ConfigurationUserLevel
#include "System_Configuration_System_Configuration_ConfigurationUserL.h"
// System.Configuration.ConfigurationErrorsException
#include "System_Configuration_System_Configuration_ConfigurationError.h"
// System.Configuration.ConfigurationSection
#include "System_Configuration_System_Configuration_ConfigurationSecti.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// System.Configuration.ConfigurationManager
#include "System_Configuration_System_Configuration_ConfigurationManagMethodDeclarations.h"
// System.Configuration.ConfigurationErrorsException
#include "System_Configuration_System_Configuration_ConfigurationErrorMethodDeclarations.h"
// System.Configuration.Configuration
#include "System_Configuration_System_Configuration_ConfigurationMethodDeclarations.h"
// System.Configuration.ConfigurationSection
#include "System_Configuration_System_Configuration_ConfigurationSectiMethodDeclarations.h"


// System.Void System.Configuration.ClientConfigurationSystem::.ctor()
extern "C" void ClientConfigurationSystem__ctor_m6489 (ClientConfigurationSystem_t1399 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.ClientConfigurationSystem::System.Configuration.Internal.IInternalConfigSystem.GetSection(System.String)
extern "C" Object_t * ClientConfigurationSystem_System_Configuration_Internal_IInternalConfigSystem_GetSection_m6490 (ClientConfigurationSystem_t1399 * __this, String_t* ___configKey, const MethodInfo* method)
{
	ConfigurationSection_t1436 * V_0 = {0};
	Object_t * G_B3_0 = {0};
	{
		Configuration_t1398 * L_0 = ClientConfigurationSystem_get_Configuration_m6491(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___configKey;
		NullCheck(L_0);
		ConfigurationSection_t1436 * L_2 = Configuration_GetSection_m6517(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConfigurationSection_t1436 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		ConfigurationSection_t1436 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(24 /* System.Object System.Configuration.ConfigurationSection::GetRuntimeObject() */, L_4);
		G_B3_0 = L_5;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = NULL;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Configuration.Configuration System.Configuration.ClientConfigurationSystem::get_Configuration()
extern TypeInfo* ConfigurationManager_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t306_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var;
extern "C" Configuration_t1398 * ClientConfigurationSystem_get_Configuration_m6491 (ClientConfigurationSystem_t1399 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationManager_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2030);
		Exception_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2028);
		s_Il2CppMethodIntialized = true;
	}
	Assembly_t1120 * V_0 = {0};
	Exception_t306 * V_1 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Configuration_t1398 * L_0 = (__this->___cfg_0);
		if (L_0)
		{
			goto IL_0036;
		}
	}
	{
		Assembly_t1120 * L_1 = Assembly_GetEntryAssembly_m6879(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		Assembly_t1120 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationManager_t1140_il2cpp_TypeInfo_var);
		Configuration_t1398 * L_3 = ConfigurationManager_OpenExeConfigurationInternal_m6657(NULL /*static, unused*/, 0, L_2, (String_t*)NULL, /*hidden argument*/NULL);
		__this->___cfg_0 = L_3;
		goto IL_0036;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t306_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0024;
		throw e;
	}

CATCH_0024:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t306 *)__exception_local);
		Exception_t306 * L_4 = V_1;
		ConfigurationErrorsException_t1139 * L_5 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m6622(L_5, (String_t*) &_stringLiteral1475, L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
		goto IL_0036;
	} // end catch (depth: 1)

IL_0036:
	{
		Configuration_t1398 * L_6 = (__this->___cfg_0);
		return L_6;
	}
}
// System.Configuration.ConfigNameValueCollection
#include "System_Configuration_System_Configuration_ConfigNameValueCol.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigNameValueCollection
#include "System_Configuration_System_Configuration_ConfigNameValueColMethodDeclarations.h"

// System.Collections.Specialized.NameObjectCollectionBase
#include "System_System_Collections_Specialized_NameObjectCollectionBa.h"
// System.Collections.Specialized.NameObjectCollectionBase
#include "System_System_Collections_Specialized_NameObjectCollectionBaMethodDeclarations.h"


// System.Void System.Configuration.ConfigNameValueCollection::.ctor()
extern "C" void ConfigNameValueCollection__ctor_m6492 (ConfigNameValueCollection_t1400 * __this, const MethodInfo* method)
{
	{
		NameValueCollection__ctor_m6880(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigNameValueCollection::.ctor(System.Configuration.ConfigNameValueCollection)
extern "C" void ConfigNameValueCollection__ctor_m6493 (ConfigNameValueCollection_t1400 * __this, ConfigNameValueCollection_t1400 * ___col, const MethodInfo* method)
{
	{
		ConfigNameValueCollection_t1400 * L_0 = ___col;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_0);
		ConfigNameValueCollection_t1400 * L_2 = ___col;
		NameValueCollection__ctor_m6881(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigNameValueCollection::ResetModified()
extern "C" void ConfigNameValueCollection_ResetModified_m6494 (ConfigNameValueCollection_t1400 * __this, const MethodInfo* method)
{
	{
		__this->___modified_12 = 0;
		return;
	}
}
// System.Boolean System.Configuration.ConfigNameValueCollection::get_IsModified()
extern "C" bool ConfigNameValueCollection_get_IsModified_m6495 (ConfigNameValueCollection_t1400 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___modified_12);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigNameValueCollection::Set(System.String,System.String)
extern "C" void ConfigNameValueCollection_Set_m6496 (ConfigNameValueCollection_t1400 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		String_t* L_1 = ___value;
		NameValueCollection_Set_m6882(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___modified_12 = 1;
		return;
	}
}
// System.Configuration.ConfigInfo
#include "System_Configuration_System_Configuration_ConfigInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigInfo
#include "System_Configuration_System_Configuration_ConfigInfoMethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"


// System.Void System.Configuration.ConfigInfo::.ctor()
extern "C" void ConfigInfo__ctor_m6497 (ConfigInfo_t1402 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.ConfigInfo::CreateInstance()
extern TypeInfo* IInternalConfigHost_t1403_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigInfo_CreateInstance_m6498 (ConfigInfo_t1402 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IInternalConfigHost_t1403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2940);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->___Type_2);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_1 = (__this->___ConfigHost_5);
		String_t* L_2 = (__this->___TypeName_1);
		NullCheck(L_1);
		Type_t * L_3 = (Type_t *)InterfaceFuncInvoker2< Type_t *, String_t*, bool >::Invoke(2 /* System.Type System.Configuration.Internal.IInternalConfigHost::GetConfigType(System.String,System.Boolean) */, IInternalConfigHost_t1403_il2cpp_TypeInfo_var, L_1, L_2, 1);
		__this->___Type_2 = L_3;
	}

IL_0023:
	{
		Type_t * L_4 = (__this->___Type_2);
		Object_t * L_5 = Activator_CreateInstance_m5006(NULL /*static, unused*/, L_4, 1, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void System.Configuration.ConfigInfo::set_StreamName(System.String)
extern "C" void ConfigInfo_set_StreamName_m6499 (ConfigInfo_t1402 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___streamName_3 = L_0;
		return;
	}
}
// System.Void System.Configuration.ConfigInfo::ThrowException(System.String,System.Xml.XmlReader)
extern TypeInfo* ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var;
extern "C" void ConfigInfo_ThrowException_m6500 (ConfigInfo_t1402 * __this, String_t* ___text, XmlReader_t843 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2028);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___text;
		XmlReader_t843 * L_1 = ___reader;
		ConfigurationErrorsException_t1139 * L_2 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m6624(L_2, L_0, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}
}
// System.Void System.Configuration.ConfigInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
// System.Void System.Configuration.ConfigInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
// System.Void System.Configuration.ConfigInfo::Merge(System.Configuration.ConfigInfo)
#ifndef _MSC_VER
#else
#endif

// System.Configuration.ConfigurationLocationCollection
#include "System_Configuration_System_Configuration_ConfigurationLocat_0.h"
// System.Configuration.ConfigurationSectionGroup
#include "System_Configuration_System_Configuration_ConfigurationSecti_2.h"
// System.Configuration.SectionGroupInfo
#include "System_Configuration_System_Configuration_SectionGroupInfo.h"
// System.Configuration.ConfigurationSectionGroupCollection
#include "System_Configuration_System_Configuration_ConfigurationSecti_3.h"
// System.Configuration.ConfigurationSectionCollection
#include "System_Configuration_System_Configuration_ConfigurationSecti_1.h"
// System.Configuration.InternalConfigurationSystem
#include "System_Configuration_System_Configuration_InternalConfigurat_0.h"
// System.Configuration.ConfigurationLocation
#include "System_Configuration_System_Configuration_ConfigurationLocat.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
#include "mscorlib_ArrayTypes.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Configuration.SectionInfo
#include "System_Configuration_System_Configuration_SectionInfo.h"
// System.Configuration.DefaultSection
#include "System_Configuration_System_Configuration_DefaultSection.h"
// System.Xml.XmlTextReader
#include "System_Xml_System_Xml_XmlTextReader.h"
// System.Configuration.SectionInformation
#include "System_Configuration_System_Configuration_SectionInformation.h"
// System.Configuration.ConfigurationElement
#include "System_Configuration_System_Configuration_ConfigurationEleme_0.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReader.h"
// ConfigXmlTextReader
#include "System_Configuration_ConfigXmlTextReader.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Configuration.ConfigurationException
#include "System_System_Configuration_ConfigurationException.h"
// System.Configuration.ConfigurationLocationCollection
#include "System_Configuration_System_Configuration_ConfigurationLocat_0MethodDeclarations.h"
// System.Configuration.ConfigurationSectionGroup
#include "System_Configuration_System_Configuration_ConfigurationSecti_2MethodDeclarations.h"
// System.Configuration.InternalConfigurationSystem
#include "System_Configuration_System_Configuration_InternalConfigurat_0MethodDeclarations.h"
// System.Configuration.ConfigurationLocation
#include "System_Configuration_System_Configuration_ConfigurationLocatMethodDeclarations.h"
// System.Configuration.SectionGroupInfo
#include "System_Configuration_System_Configuration_SectionGroupInfoMethodDeclarations.h"
// System.Configuration.ConfigurationSectionCollection
#include "System_Configuration_System_Configuration_ConfigurationSecti_1MethodDeclarations.h"
// System.Configuration.ConfigurationSectionGroupCollection
#include "System_Configuration_System_Configuration_ConfigurationSecti_3MethodDeclarations.h"
// System.Configuration.SectionInfo
#include "System_Configuration_System_Configuration_SectionInfoMethodDeclarations.h"
// System.Configuration.DefaultSection
#include "System_Configuration_System_Configuration_DefaultSectionMethodDeclarations.h"
// System.Configuration.ConfigurationElement
#include "System_Configuration_System_Configuration_ConfigurationEleme_0MethodDeclarations.h"
// System.Configuration.SectionInformation
#include "System_Configuration_System_Configuration_SectionInformationMethodDeclarations.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"
// ConfigXmlTextReader
#include "System_Configuration_ConfigXmlTextReaderMethodDeclarations.h"
// System.Xml.XmlTextReader
#include "System_Xml_System_Xml_XmlTextReaderMethodDeclarations.h"
// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReaderMethodDeclarations.h"
// System.Configuration.ConfigurationException
#include "System_System_Configuration_ConfigurationExceptionMethodDeclarations.h"


// System.Void System.Configuration.Configuration::.ctor(System.Configuration.Configuration,System.String)
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern "C" void Configuration__ctor_m6501 (Configuration_t1398 * __this, Configuration_t1398 * ___parent, String_t* ___locationSubPath, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t915 * L_0 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_0, /*hidden argument*/NULL);
		__this->___elementData_1 = L_0;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Configuration_t1398 * L_1 = ___parent;
		__this->___parent_0 = L_1;
		Configuration_t1398 * L_2 = ___parent;
		NullCheck(L_2);
		Object_t * L_3 = (L_2->___system_6);
		__this->___system_6 = L_3;
		Configuration_t1398 * L_4 = ___parent;
		NullCheck(L_4);
		SectionGroupInfo_t1406 * L_5 = (L_4->___rootGroup_5);
		__this->___rootGroup_5 = L_5;
		String_t* L_6 = ___locationSubPath;
		__this->___locationSubPath_11 = L_6;
		Configuration_t1398 * L_7 = ___parent;
		NullCheck(L_7);
		String_t* L_8 = Configuration_get_ConfigPath_m6510(L_7, /*hidden argument*/NULL);
		__this->___configPath_9 = L_8;
		return;
	}
}
// System.Void System.Configuration.Configuration::.ctor(System.Configuration.InternalConfigurationSystem,System.String)
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* Configuration_t1398_il2cpp_TypeInfo_var;
extern "C" void Configuration__ctor_m6502 (Configuration_t1398 * __this, InternalConfigurationSystem_t1451 * ___system, String_t* ___locationSubPath, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		Configuration_t1398_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2941);
		s_Il2CppMethodIntialized = true;
	}
	Configuration_t1398 * V_0 = {0};
	{
		Hashtable_t915 * L_0 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_0, /*hidden argument*/NULL);
		__this->___elementData_1 = L_0;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		__this->___hasFile_7 = 1;
		InternalConfigurationSystem_t1451 * L_1 = ___system;
		__this->___system_6 = L_1;
		InternalConfigurationSystem_t1451 * L_2 = ___system;
		String_t** L_3 = &(__this->___configPath_9);
		String_t** L_4 = &(__this->___locationConfigPath_10);
		NullCheck(L_2);
		InternalConfigurationSystem_InitForConfiguration_m6767(L_2, (&___locationSubPath), L_3, L_4, /*hidden argument*/NULL);
		V_0 = (Configuration_t1398 *)NULL;
		String_t* L_5 = ___locationSubPath;
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		InternalConfigurationSystem_t1451 * L_6 = ___system;
		String_t* L_7 = ___locationSubPath;
		Configuration_t1398 * L_8 = (Configuration_t1398 *)il2cpp_codegen_object_new (Configuration_t1398_il2cpp_TypeInfo_var);
		Configuration__ctor_m6502(L_8, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = (__this->___locationConfigPath_10);
		if (!L_9)
		{
			goto IL_005c;
		}
	}
	{
		Configuration_t1398 * L_10 = V_0;
		String_t* L_11 = (__this->___locationConfigPath_10);
		Configuration_t1398 * L_12 = V_0;
		NullCheck(L_10);
		Configuration_t1398 * L_13 = Configuration_FindLocationConfiguration_m6503(L_10, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_005c:
	{
		InternalConfigurationSystem_t1451 * L_14 = ___system;
		String_t* L_15 = (__this->___configPath_9);
		Configuration_t1398 * L_16 = V_0;
		Configuration_Init_m6504(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.Configuration System.Configuration.Configuration::FindLocationConfiguration(System.String,System.Configuration.Configuration)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IConfigSystem_t1407_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalConfigHost_t1403_il2cpp_TypeInfo_var;
extern "C" Configuration_t1398 * Configuration_FindLocationConfiguration_m6503 (Configuration_t1398 * __this, String_t* ___relativePath, Configuration_t1398 * ___defaultConfiguration, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IConfigSystem_t1407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2942);
		IInternalConfigHost_t1403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2940);
		s_Il2CppMethodIntialized = true;
	}
	Configuration_t1398 * V_0 = {0};
	Configuration_t1398 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	ConfigurationLocation_t1422 * V_4 = {0};
	{
		Configuration_t1398 * L_0 = ___defaultConfiguration;
		V_0 = L_0;
		String_t* L_1 = Configuration_get_LocationConfigPath_m6509(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0040;
		}
	}
	{
		Configuration_t1398 * L_3 = Configuration_GetParentWithFile_m6507(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		Configuration_t1398 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		Object_t * L_5 = (__this->___system_6);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Configuration.Internal.IInternalConfigHost System.Configuration.Internal.IConfigSystem::get_Host() */, IConfigSystem_t1407_il2cpp_TypeInfo_var, L_5);
		String_t* L_7 = (__this->___configPath_9);
		String_t* L_8 = ___relativePath;
		NullCheck(L_6);
		String_t* L_9 = (String_t*)InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(1 /* System.String System.Configuration.Internal.IInternalConfigHost::GetConfigPathFromLocationSubPath(System.String,System.String) */, IInternalConfigHost_t1403_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		V_2 = L_9;
		Configuration_t1398 * L_10 = V_1;
		String_t* L_11 = V_2;
		Configuration_t1398 * L_12 = ___defaultConfiguration;
		NullCheck(L_10);
		Configuration_t1398 * L_13 = Configuration_FindLocationConfiguration_m6503(L_10, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_0040:
	{
		String_t* L_14 = (__this->___configPath_9);
		NullCheck(L_14);
		String_t* L_15 = String_Substring_m3180(L_14, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m1269(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral73, /*hidden argument*/NULL);
		V_3 = L_16;
		String_t* L_17 = ___relativePath;
		String_t* L_18 = V_3;
		NullCheck(L_17);
		bool L_19 = String_StartsWith_m4990(L_17, L_18, 4, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_20 = ___relativePath;
		String_t* L_21 = V_3;
		NullCheck(L_21);
		int32_t L_22 = String_get_Length_m1368(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_23 = String_Substring_m3180(L_20, L_22, /*hidden argument*/NULL);
		___relativePath = L_23;
	}

IL_0072:
	{
		ConfigurationLocationCollection_t1405 * L_24 = Configuration_get_Locations_m6513(__this, /*hidden argument*/NULL);
		String_t* L_25 = ___relativePath;
		NullCheck(L_24);
		ConfigurationLocation_t1422 * L_26 = ConfigurationLocationCollection_Find_m6645(L_24, L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		ConfigurationLocation_t1422 * L_27 = V_4;
		if (L_27)
		{
			goto IL_0089;
		}
	}
	{
		Configuration_t1398 * L_28 = V_0;
		return L_28;
	}

IL_0089:
	{
		ConfigurationLocation_t1422 * L_29 = V_4;
		Configuration_t1398 * L_30 = V_0;
		NullCheck(L_29);
		ConfigurationLocation_SetParentConfiguration_m6642(L_29, L_30, /*hidden argument*/NULL);
		ConfigurationLocation_t1422 * L_31 = V_4;
		NullCheck(L_31);
		Configuration_t1398 * L_32 = ConfigurationLocation_OpenConfiguration_m6641(L_31, /*hidden argument*/NULL);
		return L_32;
	}
}
// System.Void System.Configuration.Configuration::Init(System.Configuration.Internal.IConfigSystem,System.String,System.Configuration.Configuration)
extern TypeInfo* IConfigSystem_t1407_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalConfigHost_t1403_il2cpp_TypeInfo_var;
extern TypeInfo* SectionGroupInfo_t1406_il2cpp_TypeInfo_var;
extern "C" void Configuration_Init_m6504 (Configuration_t1398 * __this, Object_t * ___system, String_t* ___configPath, Configuration_t1398 * ___parent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConfigSystem_t1407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2942);
		IInternalConfigHost_t1403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2940);
		SectionGroupInfo_t1406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2943);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___system;
		__this->___system_6 = L_0;
		String_t* L_1 = ___configPath;
		__this->___configPath_9 = L_1;
		Object_t * L_2 = ___system;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Configuration.Internal.IInternalConfigHost System.Configuration.Internal.IConfigSystem::get_Host() */, IConfigSystem_t1407_il2cpp_TypeInfo_var, L_2);
		String_t* L_4 = ___configPath;
		NullCheck(L_3);
		String_t* L_5 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String System.Configuration.Internal.IInternalConfigHost::GetStreamName(System.String) */, IInternalConfigHost_t1403_il2cpp_TypeInfo_var, L_3, L_4);
		__this->___streamName_2 = L_5;
		Configuration_t1398 * L_6 = ___parent;
		__this->___parent_0 = L_6;
		Configuration_t1398 * L_7 = ___parent;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		Configuration_t1398 * L_8 = ___parent;
		NullCheck(L_8);
		SectionGroupInfo_t1406 * L_9 = (L_8->___rootGroup_5);
		__this->___rootGroup_5 = L_9;
		goto IL_005a;
	}

IL_003e:
	{
		SectionGroupInfo_t1406 * L_10 = (SectionGroupInfo_t1406 *)il2cpp_codegen_object_new (SectionGroupInfo_t1406_il2cpp_TypeInfo_var);
		SectionGroupInfo__ctor_m6836(L_10, /*hidden argument*/NULL);
		__this->___rootGroup_5 = L_10;
		SectionGroupInfo_t1406 * L_11 = (__this->___rootGroup_5);
		String_t* L_12 = (__this->___streamName_2);
		NullCheck(L_11);
		ConfigInfo_set_StreamName_m6499(L_11, L_12, /*hidden argument*/NULL);
	}

IL_005a:
	{
		String_t* L_13 = (__this->___streamName_2);
		if (!L_13)
		{
			goto IL_006c;
		}
	}
	{
		Configuration_Load_m6522(__this, /*hidden argument*/NULL);
	}

IL_006c:
	{
		return;
	}
}
// System.Configuration.Configuration System.Configuration.Configuration::get_Parent()
extern "C" Configuration_t1398 * Configuration_get_Parent_m6505 (Configuration_t1398 * __this, const MethodInfo* method)
{
	{
		Configuration_t1398 * L_0 = (__this->___parent_0);
		return L_0;
	}
}
// System.Void System.Configuration.Configuration::set_Parent(System.Configuration.Configuration)
extern "C" void Configuration_set_Parent_m6506 (Configuration_t1398 * __this, Configuration_t1398 * ___value, const MethodInfo* method)
{
	{
		Configuration_t1398 * L_0 = ___value;
		__this->___parent_0 = L_0;
		return;
	}
}
// System.Configuration.Configuration System.Configuration.Configuration::GetParentWithFile()
extern "C" Configuration_t1398 * Configuration_GetParentWithFile_m6507 (Configuration_t1398 * __this, const MethodInfo* method)
{
	Configuration_t1398 * V_0 = {0};
	{
		Configuration_t1398 * L_0 = Configuration_get_Parent_m6505(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0013;
	}

IL_000c:
	{
		Configuration_t1398 * L_1 = V_0;
		NullCheck(L_1);
		Configuration_t1398 * L_2 = Configuration_get_Parent_m6505(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0013:
	{
		Configuration_t1398 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		Configuration_t1398 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = Configuration_get_HasFile_m6512(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_000c;
		}
	}

IL_0024:
	{
		Configuration_t1398 * L_6 = V_0;
		return L_6;
	}
}
// System.Configuration.Internal.IInternalConfigHost System.Configuration.Configuration::get_ConfigHost()
extern TypeInfo* IConfigSystem_t1407_il2cpp_TypeInfo_var;
extern "C" Object_t * Configuration_get_ConfigHost_m6508 (Configuration_t1398 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConfigSystem_t1407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2942);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___system_6);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Configuration.Internal.IInternalConfigHost System.Configuration.Internal.IConfigSystem::get_Host() */, IConfigSystem_t1407_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String System.Configuration.Configuration::get_LocationConfigPath()
extern "C" String_t* Configuration_get_LocationConfigPath_m6509 (Configuration_t1398 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___locationConfigPath_10);
		return L_0;
	}
}
// System.String System.Configuration.Configuration::get_ConfigPath()
extern "C" String_t* Configuration_get_ConfigPath_m6510 (Configuration_t1398 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___configPath_9);
		return L_0;
	}
}
// System.String System.Configuration.Configuration::get_FilePath()
extern "C" String_t* Configuration_get_FilePath_m6511 (Configuration_t1398 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___streamName_2);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		Configuration_t1398 * L_1 = (__this->___parent_0);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Configuration_t1398 * L_2 = (__this->___parent_0);
		NullCheck(L_2);
		String_t* L_3 = Configuration_get_FilePath_m6511(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0022:
	{
		String_t* L_4 = (__this->___streamName_2);
		return L_4;
	}
}
// System.Boolean System.Configuration.Configuration::get_HasFile()
extern "C" bool Configuration_get_HasFile_m6512 (Configuration_t1398 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___hasFile_7);
		return L_0;
	}
}
// System.Configuration.ConfigurationLocationCollection System.Configuration.Configuration::get_Locations()
extern TypeInfo* ConfigurationLocationCollection_t1405_il2cpp_TypeInfo_var;
extern "C" ConfigurationLocationCollection_t1405 * Configuration_get_Locations_m6513 (Configuration_t1398 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationLocationCollection_t1405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2944);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationLocationCollection_t1405 * L_0 = (__this->___locations_4);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ConfigurationLocationCollection_t1405 * L_1 = (ConfigurationLocationCollection_t1405 *)il2cpp_codegen_object_new (ConfigurationLocationCollection_t1405_il2cpp_TypeInfo_var);
		ConfigurationLocationCollection__ctor_m6643(L_1, /*hidden argument*/NULL);
		__this->___locations_4 = L_1;
	}

IL_0016:
	{
		ConfigurationLocationCollection_t1405 * L_2 = (__this->___locations_4);
		return L_2;
	}
}
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::get_RootSectionGroup()
extern TypeInfo* ConfigurationSectionGroup_t1404_il2cpp_TypeInfo_var;
extern "C" ConfigurationSectionGroup_t1404 * Configuration_get_RootSectionGroup_m6514 (Configuration_t1398 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSectionGroup_t1404_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2945);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationSectionGroup_t1404 * L_0 = (__this->___rootSectionGroup_3);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		ConfigurationSectionGroup_t1404 * L_1 = (ConfigurationSectionGroup_t1404 *)il2cpp_codegen_object_new (ConfigurationSectionGroup_t1404_il2cpp_TypeInfo_var);
		ConfigurationSectionGroup__ctor_m6716(L_1, /*hidden argument*/NULL);
		__this->___rootSectionGroup_3 = L_1;
		ConfigurationSectionGroup_t1404 * L_2 = (__this->___rootSectionGroup_3);
		SectionGroupInfo_t1406 * L_3 = (__this->___rootGroup_5);
		NullCheck(L_2);
		ConfigurationSectionGroup_Initialize_m6718(L_2, __this, L_3, /*hidden argument*/NULL);
	}

IL_0028:
	{
		ConfigurationSectionGroup_t1404 * L_4 = (__this->___rootSectionGroup_3);
		return L_4;
	}
}
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.Configuration::get_SectionGroups()
extern "C" ConfigurationSectionGroupCollection_t1440 * Configuration_get_SectionGroups_m6515 (Configuration_t1398 * __this, const MethodInfo* method)
{
	{
		ConfigurationSectionGroup_t1404 * L_0 = Configuration_get_RootSectionGroup_m6514(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ConfigurationSectionGroupCollection_t1440 * L_1 = ConfigurationSectionGroup_get_SectionGroups_m6719(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Configuration.ConfigurationSectionCollection System.Configuration.Configuration::get_Sections()
extern "C" ConfigurationSectionCollection_t1437 * Configuration_get_Sections_m6516 (Configuration_t1398 * __this, const MethodInfo* method)
{
	{
		ConfigurationSectionGroup_t1404 * L_0 = Configuration_get_RootSectionGroup_m6514(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ConfigurationSectionCollection_t1437 * L_1 = ConfigurationSectionGroup_get_Sections_m6720(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSection(System.String)
extern TypeInfo* CharU5BU5D_t260_il2cpp_TypeInfo_var;
extern "C" ConfigurationSection_t1436 * Configuration_GetSection_m6517 (Configuration_t1398 * __this, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t258* V_0 = {0};
	ConfigurationSectionGroup_t1404 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___path;
		CharU5BU5D_t260* L_1 = ((CharU5BU5D_t260*)SZArrayNew(CharU5BU5D_t260_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0)) = (uint16_t)((int32_t)47);
		NullCheck(L_0);
		StringU5BU5D_t258* L_2 = String_Split_m1813(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t258* L_3 = V_0;
		NullCheck(L_3);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		ConfigurationSectionCollection_t1437 * L_4 = Configuration_get_Sections_m6516(__this, /*hidden argument*/NULL);
		StringU5BU5D_t258* L_5 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		int32_t L_6 = 0;
		NullCheck(L_4);
		ConfigurationSection_t1436 * L_7 = ConfigurationSectionCollection_get_Item_m6713(L_4, (*(String_t**)(String_t**)SZArrayLdElema(L_5, L_6)), /*hidden argument*/NULL);
		return L_7;
	}

IL_002a:
	{
		ConfigurationSectionGroupCollection_t1440 * L_8 = Configuration_get_SectionGroups_m6515(__this, /*hidden argument*/NULL);
		StringU5BU5D_t258* L_9 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		NullCheck(L_8);
		ConfigurationSectionGroup_t1404 * L_11 = ConfigurationSectionGroupCollection_get_Item_m6724(L_8, (*(String_t**)(String_t**)SZArrayLdElema(L_9, L_10)), /*hidden argument*/NULL);
		V_1 = L_11;
		V_2 = 1;
		goto IL_0053;
	}

IL_0040:
	{
		ConfigurationSectionGroup_t1404 * L_12 = V_1;
		NullCheck(L_12);
		ConfigurationSectionGroupCollection_t1440 * L_13 = ConfigurationSectionGroup_get_SectionGroups_m6719(L_12, /*hidden argument*/NULL);
		StringU5BU5D_t258* L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck(L_13);
		ConfigurationSectionGroup_t1404 * L_17 = ConfigurationSectionGroupCollection_get_Item_m6724(L_13, (*(String_t**)(String_t**)SZArrayLdElema(L_14, L_16)), /*hidden argument*/NULL);
		V_1 = L_17;
		int32_t L_18 = V_2;
		V_2 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0053:
	{
		ConfigurationSectionGroup_t1404 * L_19 = V_1;
		if (!L_19)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_20 = V_2;
		StringU5BU5D_t258* L_21 = V_0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_21)->max_length)))-(int32_t)1)))))
		{
			goto IL_0040;
		}
	}

IL_0064:
	{
		ConfigurationSectionGroup_t1404 * L_22 = V_1;
		if (!L_22)
		{
			goto IL_007d;
		}
	}
	{
		ConfigurationSectionGroup_t1404 * L_23 = V_1;
		NullCheck(L_23);
		ConfigurationSectionCollection_t1437 * L_24 = ConfigurationSectionGroup_get_Sections_m6720(L_23, /*hidden argument*/NULL);
		StringU5BU5D_t258* L_25 = V_0;
		StringU5BU5D_t258* L_26 = V_0;
		NullCheck(L_26);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_26)->max_length)))-(int32_t)1)));
		int32_t L_27 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_26)->max_length)))-(int32_t)1));
		NullCheck(L_24);
		ConfigurationSection_t1436 * L_28 = ConfigurationSectionCollection_get_Item_m6713(L_24, (*(String_t**)(String_t**)SZArrayLdElema(L_25, L_27)), /*hidden argument*/NULL);
		return L_28;
	}

IL_007d:
	{
		return (ConfigurationSection_t1436 *)NULL;
	}
}
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSectionInstance(System.Configuration.SectionInfo,System.Boolean)
extern TypeInfo* ConfigurationSection_t1436_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultSection_t1444_il2cpp_TypeInfo_var;
extern TypeInfo* IConfigurationSectionHandler_t1435_il2cpp_TypeInfo_var;
extern TypeInfo* IConfigSystem_t1407_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalConfigHost_t1403_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t685_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigXmlTextReader_t1443_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t862_il2cpp_TypeInfo_var;
extern "C" ConfigurationSection_t1436 * Configuration_GetSectionInstance_m6518 (Configuration_t1398 * __this, SectionInfo_t1463 * ___config, bool ___createDefaultInstance, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSection_t1436_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2946);
		DefaultSection_t1444_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2947);
		IConfigurationSectionHandler_t1435_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2948);
		IConfigSystem_t1407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2942);
		IInternalConfigHost_t1403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2940);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		StringReader_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(933);
		ConfigXmlTextReader_t1443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2949);
		Path_t862_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1779);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ConfigurationSection_t1436 * V_1 = {0};
	Object_t * V_2 = {0};
	DefaultSection_t1444 * V_3 = {0};
	ConfigurationSection_t1436 * V_4 = {0};
	String_t* V_5 = {0};
	XmlTextReader_t1121 * V_6 = {0};
	{
		Hashtable_t915 * L_0 = (__this->___elementData_1);
		SectionInfo_t1463 * L_1 = ___config;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		V_1 = ((ConfigurationSection_t1436 *)IsInst(L_3, ConfigurationSection_t1436_il2cpp_TypeInfo_var));
		ConfigurationSection_t1436 * L_4 = V_1;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		bool L_5 = ___createDefaultInstance;
		if (L_5)
		{
			goto IL_0022;
		}
	}

IL_0020:
	{
		ConfigurationSection_t1436 * L_6 = V_1;
		return L_6;
	}

IL_0022:
	{
		SectionInfo_t1463 * L_7 = ___config;
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Object System.Configuration.SectionInfo::CreateInstance() */, L_7);
		V_2 = L_8;
		Object_t * L_9 = V_2;
		V_1 = ((ConfigurationSection_t1436 *)IsInst(L_9, ConfigurationSection_t1436_il2cpp_TypeInfo_var));
		ConfigurationSection_t1436 * L_10 = V_1;
		if (L_10)
		{
			goto IL_004a;
		}
	}
	{
		DefaultSection_t1444 * L_11 = (DefaultSection_t1444 *)il2cpp_codegen_object_new (DefaultSection_t1444_il2cpp_TypeInfo_var);
		DefaultSection__ctor_m6733(L_11, /*hidden argument*/NULL);
		V_3 = L_11;
		DefaultSection_t1444 * L_12 = V_3;
		Object_t * L_13 = V_2;
		NullCheck(L_12);
		ConfigurationSection_set_SectionHandler_m6693(L_12, ((Object_t *)IsInst(L_13, IConfigurationSectionHandler_t1435_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		DefaultSection_t1444 * L_14 = V_3;
		V_1 = L_14;
	}

IL_004a:
	{
		ConfigurationSection_t1436 * L_15 = V_1;
		NullCheck(L_15);
		ConfigurationElement_set_Configuration_m6533(L_15, __this, /*hidden argument*/NULL);
		V_4 = (ConfigurationSection_t1436 *)NULL;
		Configuration_t1398 * L_16 = (__this->___parent_0);
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		Configuration_t1398 * L_17 = (__this->___parent_0);
		SectionInfo_t1463 * L_18 = ___config;
		NullCheck(L_17);
		ConfigurationSection_t1436 * L_19 = Configuration_GetSectionInstance_m6518(L_17, L_18, 1, /*hidden argument*/NULL);
		V_4 = L_19;
		ConfigurationSection_t1436 * L_20 = V_1;
		NullCheck(L_20);
		SectionInformation_t1434 * L_21 = ConfigurationSection_get_SectionInformation_m6694(L_20, /*hidden argument*/NULL);
		ConfigurationSection_t1436 * L_22 = V_4;
		NullCheck(L_21);
		SectionInformation_SetParentSection_m6869(L_21, L_22, /*hidden argument*/NULL);
	}

IL_007b:
	{
		ConfigurationSection_t1436 * L_23 = V_1;
		NullCheck(L_23);
		SectionInformation_t1434 * L_24 = ConfigurationSection_get_SectionInformation_m6694(L_23, /*hidden argument*/NULL);
		String_t* L_25 = Configuration_get_FilePath_m6511(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		SectionInformation_set_ConfigFilePath_m6860(L_24, L_25, /*hidden argument*/NULL);
		ConfigurationSection_t1436 * L_26 = V_1;
		Object_t * L_27 = (__this->___system_6);
		NullCheck(L_27);
		Object_t * L_28 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Configuration.Internal.IInternalConfigHost System.Configuration.Internal.IConfigSystem::get_Host() */, IConfigSystem_t1407_il2cpp_TypeInfo_var, L_27);
		String_t* L_29 = (__this->___configPath_9);
		NullCheck(L_28);
		Object_t * L_30 = (Object_t *)InterfaceFuncInvoker1< Object_t *, String_t* >::Invoke(0 /* System.Object System.Configuration.Internal.IInternalConfigHost::CreateDeprecatedConfigContext(System.String) */, IInternalConfigHost_t1403_il2cpp_TypeInfo_var, L_28, L_29);
		NullCheck(L_26);
		ConfigurationSection_set_ConfigContext_m6696(L_26, L_30, /*hidden argument*/NULL);
		Object_t * L_31 = V_0;
		V_5 = ((String_t*)IsInst(L_31, String_t_il2cpp_TypeInfo_var));
		ConfigurationSection_t1436 * L_32 = V_1;
		String_t* L_33 = V_5;
		NullCheck(L_32);
		ConfigurationElement_set_RawXml_m6537(L_32, L_33, /*hidden argument*/NULL);
		ConfigurationSection_t1436 * L_34 = V_1;
		ConfigurationSection_t1436 * L_35 = V_4;
		NullCheck(L_34);
		VirtActionInvoker1< ConfigurationElement_t1416 * >::Invoke(19 /* System.Void System.Configuration.ConfigurationElement::Reset(System.Configuration.ConfigurationElement) */, L_34, L_35);
		String_t* L_36 = V_5;
		if (!L_36)
		{
			goto IL_0128;
		}
	}
	{
		String_t* L_37 = V_5;
		Object_t * L_38 = V_0;
		if ((!(((Object_t*)(String_t*)L_37) == ((Object_t*)(Object_t *)L_38))))
		{
			goto IL_0128;
		}
	}
	{
		String_t* L_39 = V_5;
		StringReader_t685 * L_40 = (StringReader_t685 *)il2cpp_codegen_object_new (StringReader_t685_il2cpp_TypeInfo_var);
		StringReader__ctor_m3189(L_40, L_39, /*hidden argument*/NULL);
		String_t* L_41 = Configuration_get_FilePath_m6511(__this, /*hidden argument*/NULL);
		ConfigXmlTextReader_t1443 * L_42 = (ConfigXmlTextReader_t1443 *)il2cpp_codegen_object_new (ConfigXmlTextReader_t1443_il2cpp_TypeInfo_var);
		ConfigXmlTextReader__ctor_m6731(L_42, L_40, L_41, /*hidden argument*/NULL);
		V_6 = L_42;
		ConfigurationSection_t1436 * L_43 = V_1;
		XmlTextReader_t1121 * L_44 = V_6;
		NullCheck(L_43);
		VirtActionInvoker1< XmlReader_t843 * >::Invoke(25 /* System.Void System.Configuration.ConfigurationSection::DeserializeSection(System.Xml.XmlReader) */, L_43, L_44);
		XmlTextReader_t1121 * L_45 = V_6;
		NullCheck(L_45);
		VirtActionInvoker0::Invoke(29 /* System.Void System.Xml.XmlTextReader::Close() */, L_45);
		ConfigurationSection_t1436 * L_46 = V_1;
		NullCheck(L_46);
		SectionInformation_t1434 * L_47 = ConfigurationSection_get_SectionInformation_m6694(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		String_t* L_48 = SectionInformation_get_ConfigSource_m6864(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_49 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_0128;
		}
	}
	{
		String_t* L_50 = Configuration_get_FilePath_m6511(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_51 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_0128;
		}
	}
	{
		ConfigurationSection_t1436 * L_52 = V_1;
		String_t* L_53 = Configuration_get_FilePath_m6511(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_54 = Path_GetDirectoryName_m3565(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		ConfigurationSection_DeserializeConfigSource_m6703(L_52, L_54, /*hidden argument*/NULL);
	}

IL_0128:
	{
		Hashtable_t915 * L_55 = (__this->___elementData_1);
		SectionInfo_t1463 * L_56 = ___config;
		ConfigurationSection_t1436 * L_57 = V_1;
		NullCheck(L_55);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_55, L_56, L_57);
		ConfigurationSection_t1436 * L_58 = V_1;
		return L_58;
	}
}
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::GetSectionGroupInstance(System.Configuration.SectionGroupInfo)
extern TypeInfo* ConfigurationSectionGroup_t1404_il2cpp_TypeInfo_var;
extern "C" ConfigurationSectionGroup_t1404 * Configuration_GetSectionGroupInstance_m6519 (Configuration_t1398 * __this, SectionGroupInfo_t1406 * ___group, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSectionGroup_t1404_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2945);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationSectionGroup_t1404 * V_0 = {0};
	{
		SectionGroupInfo_t1406 * L_0 = ___group;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Object System.Configuration.ConfigInfo::CreateInstance() */, L_0);
		V_0 = ((ConfigurationSectionGroup_t1404 *)IsInst(L_1, ConfigurationSectionGroup_t1404_il2cpp_TypeInfo_var));
		ConfigurationSectionGroup_t1404 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		ConfigurationSectionGroup_t1404 * L_3 = V_0;
		SectionGroupInfo_t1406 * L_4 = ___group;
		NullCheck(L_3);
		ConfigurationSectionGroup_Initialize_m6718(L_3, __this, L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
		ConfigurationSectionGroup_t1404 * L_5 = V_0;
		return L_5;
	}
}
// System.Void System.Configuration.Configuration::SetSectionXml(System.Configuration.SectionInfo,System.String)
extern "C" void Configuration_SetSectionXml_m6520 (Configuration_t1398 * __this, SectionInfo_t1463 * ___config, String_t* ___data, const MethodInfo* method)
{
	{
		Hashtable_t915 * L_0 = (__this->___elementData_1);
		SectionInfo_t1463 * L_1 = ___config;
		String_t* L_2 = ___data;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
// System.String System.Configuration.Configuration::GetSectionXml(System.Configuration.SectionInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Configuration_GetSectionXml_m6521 (Configuration_t1398 * __this, SectionInfo_t1463 * ___config, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t915 * L_0 = (__this->___elementData_1);
		SectionInfo_t1463 * L_1 = ___config;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		return ((String_t*)IsInst(L_2, String_t_il2cpp_TypeInfo_var));
	}
}
// System.Boolean System.Configuration.Configuration::Load()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IConfigSystem_t1407_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalConfigHost_t1403_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigXmlTextReader_t1443_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" bool Configuration_Load_m6522 (Configuration_t1398 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IConfigSystem_t1407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2942);
		IInternalConfigHost_t1403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2940);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		ConfigXmlTextReader_t1443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2949);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	Stream_t844 * V_0 = {0};
	XmlTextReader_t1121 * V_1 = {0};
	bool V_2 = false;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = (__this->___streamName_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		V_0 = (Stream_t844 *)NULL;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		Object_t * L_2 = (__this->___system_6);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Configuration.Internal.IInternalConfigHost System.Configuration.Internal.IConfigSystem::get_Host() */, IConfigSystem_t1407_il2cpp_TypeInfo_var, L_2);
		String_t* L_4 = (__this->___streamName_2);
		NullCheck(L_3);
		Stream_t844 * L_5 = (Stream_t844 *)InterfaceFuncInvoker1< Stream_t844 *, String_t* >::Invoke(6 /* System.IO.Stream System.Configuration.Internal.IInternalConfigHost::OpenStreamForRead(System.String) */, IInternalConfigHost_t1403_il2cpp_TypeInfo_var, L_3, L_4);
		Stream_t844 * L_6 = L_5;
		V_0 = L_6;
		V_0 = L_6;
		goto IL_003f;
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
		{
			V_2 = 0;
			goto IL_006d;
		}

IL_003a:
		{
			; // IL_003a: leave IL_003f
		}
	} // end catch (depth: 1)

IL_003f:
	{
		Stream_t844 * L_7 = V_0;
		String_t* L_8 = (__this->___streamName_2);
		ConfigXmlTextReader_t1443 * L_9 = (ConfigXmlTextReader_t1443 *)il2cpp_codegen_object_new (ConfigXmlTextReader_t1443_il2cpp_TypeInfo_var);
		ConfigXmlTextReader__ctor_m6730(L_9, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
	}

IL_004c:
	try
	{ // begin try (depth: 1)
		XmlTextReader_t1121 * L_10 = V_1;
		String_t* L_11 = (__this->___streamName_2);
		Configuration_ReadConfigFile_m6523(__this, L_10, L_11, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x6B, FINALLY_005e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		{
			XmlTextReader_t1121 * L_12 = V_1;
			if (!L_12)
			{
				goto IL_006a;
			}
		}

IL_0064:
		{
			XmlTextReader_t1121 * L_13 = V_1;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_13);
		}

IL_006a:
		{
			IL2CPP_END_FINALLY(94)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_006b:
	{
		return 1;
	}

IL_006d:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Void System.Configuration.Configuration::ReadConfigFile(System.Xml.XmlReader,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Configuration_ReadConfigFile_m6523 (Configuration_t1398 * __this, XmlReader_t843 * ___reader, String_t* ___fileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlReader_t843 * L_0 = ___reader;
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(38 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_0);
		XmlReader_t843 * L_1 = ___reader;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		XmlReader_t843 * L_3 = ___reader;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Name() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m1484(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral1476, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}

IL_0028:
	{
		XmlReader_t843 * L_6 = ___reader;
		Configuration_ThrowException_m6525(__this, (String_t*) &_stringLiteral1477, L_6, /*hidden argument*/NULL);
	}

IL_0034:
	{
		XmlReader_t843 * L_7 = ___reader;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlReader::get_HasAttributes() */, L_7);
		if (!L_8)
		{
			goto IL_008c;
		}
	}
	{
		goto IL_0081;
	}

IL_0044:
	{
		XmlReader_t843 * L_9 = ___reader;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m1295(NULL /*static, unused*/, L_10, (String_t*) &_stringLiteral742, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		XmlReader_t843 * L_12 = ___reader;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_12);
		__this->___rootNamespace_8 = L_13;
		goto IL_0081;
	}

IL_006a:
	{
		XmlReader_t843 * L_14 = ___reader;
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral1478, L_15, /*hidden argument*/NULL);
		XmlReader_t843 * L_17 = ___reader;
		Configuration_ThrowException_m6525(__this, L_16, L_17, /*hidden argument*/NULL);
	}

IL_0081:
	{
		XmlReader_t843 * L_18 = ___reader;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_18);
		if (L_19)
		{
			goto IL_0044;
		}
	}

IL_008c:
	{
		XmlReader_t843 * L_20 = ___reader;
		NullCheck(L_20);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_20);
		XmlReader_t843 * L_21 = ___reader;
		NullCheck(L_21);
		bool L_22 = (bool)VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_21);
		if (!L_22)
		{
			goto IL_00a5;
		}
	}
	{
		XmlReader_t843 * L_23 = ___reader;
		NullCheck(L_23);
		VirtActionInvoker0::Invoke(54 /* System.Void System.Xml.XmlReader::Skip() */, L_23);
		return;
	}

IL_00a5:
	{
		XmlReader_t843 * L_24 = ___reader;
		NullCheck(L_24);
		VirtActionInvoker0::Invoke(48 /* System.Void System.Xml.XmlReader::ReadStartElement() */, L_24);
		XmlReader_t843 * L_25 = ___reader;
		NullCheck(L_25);
		VirtFuncInvoker0< int32_t >::Invoke(38 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_25);
		XmlReader_t843 * L_26 = ___reader;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_28 = String_op_Equality_m1295(NULL /*static, unused*/, L_27, (String_t*) &_stringLiteral1479, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		XmlReader_t843 * L_29 = ___reader;
		NullCheck(L_29);
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlReader::get_HasAttributes() */, L_29);
		if (!L_30)
		{
			goto IL_00de;
		}
	}
	{
		XmlReader_t843 * L_31 = ___reader;
		Configuration_ThrowException_m6525(__this, (String_t*) &_stringLiteral1480, L_31, /*hidden argument*/NULL);
	}

IL_00de:
	{
		SectionGroupInfo_t1406 * L_32 = (__this->___rootGroup_5);
		String_t* L_33 = ___fileName;
		XmlReader_t843 * L_34 = ___reader;
		NullCheck(L_32);
		VirtActionInvoker3< Configuration_t1398 *, String_t*, XmlReader_t843 * >::Invoke(5 /* System.Void System.Configuration.SectionGroupInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader) */, L_32, __this, L_33, L_34);
	}

IL_00ec:
	{
		SectionGroupInfo_t1406 * L_35 = (__this->___rootGroup_5);
		XmlReader_t843 * L_36 = ___reader;
		NullCheck(L_35);
		SectionGroupInfo_ReadRootData_m6846(L_35, L_36, __this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.Configuration::ReadData(System.Xml.XmlReader,System.Boolean)
extern "C" void Configuration_ReadData_m6524 (Configuration_t1398 * __this, XmlReader_t843 * ___reader, bool ___allowOverride, const MethodInfo* method)
{
	{
		SectionGroupInfo_t1406 * L_0 = (__this->___rootGroup_5);
		XmlReader_t843 * L_1 = ___reader;
		bool L_2 = ___allowOverride;
		NullCheck(L_0);
		VirtActionInvoker3< Configuration_t1398 *, XmlReader_t843 *, bool >::Invoke(6 /* System.Void System.Configuration.SectionGroupInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean) */, L_0, __this, L_1, L_2);
		return;
	}
}
// System.Void System.Configuration.Configuration::ThrowException(System.String,System.Xml.XmlReader)
extern TypeInfo* IXmlLineInfo_t1469_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationException_t1420_il2cpp_TypeInfo_var;
extern "C" void Configuration_ThrowException_m6525 (Configuration_t1398 * __this, String_t* ___text, XmlReader_t843 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IXmlLineInfo_t1469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2950);
		ConfigurationException_t1420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2951);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	{
		XmlReader_t843 * L_0 = ___reader;
		V_0 = ((Object_t *)IsInst(L_0, IXmlLineInfo_t1469_il2cpp_TypeInfo_var));
		String_t* L_1 = ___text;
		String_t* L_2 = (__this->___streamName_2);
		Object_t * L_3 = V_0;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		if (!L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			goto IL_001f;
		}
	}
	{
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_t1469_il2cpp_TypeInfo_var, L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0020:
	{
		ConfigurationException_t1420 * L_6 = (ConfigurationException_t1420 *)il2cpp_codegen_object_new (ConfigurationException_t1420_il2cpp_TypeInfo_var);
		ConfigurationException__ctor_m6883(L_6, G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Configuration.ConfigurationAllowDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllow.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationAllowDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllowMethodDeclarations.h"



// System.Configuration.ConfigurationAllowExeDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllow_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationAllowExeDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllow_0MethodDeclarations.h"



// System.Configuration.ConfigurationCollectionAttribute
#include "System_Configuration_System_Configuration_ConfigurationColle.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationCollectionAttribute
#include "System_Configuration_System_Configuration_ConfigurationColleMethodDeclarations.h"

// System.Configuration.ConfigurationElementCollectionType
#include "System_Configuration_System_Configuration_ConfigurationEleme.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationCollectionAttribute::.ctor(System.Type)
extern "C" void ConfigurationCollectionAttribute__ctor_m6526 (ConfigurationCollectionAttribute_t1410 * __this, Type_t * ___itemType, const MethodInfo* method)
{
	{
		__this->___addItemName_0 = (String_t*) &_stringLiteral1481;
		__this->___clearItemsName_1 = (String_t*) &_stringLiteral1482;
		__this->___removeItemName_2 = (String_t*) &_stringLiteral1483;
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___itemType;
		__this->___itemType_4 = L_0;
		return;
	}
}
// System.String System.Configuration.ConfigurationCollectionAttribute::get_AddItemName()
extern "C" String_t* ConfigurationCollectionAttribute_get_AddItemName_m6527 (ConfigurationCollectionAttribute_t1410 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___addItemName_0);
		return L_0;
	}
}
// System.String System.Configuration.ConfigurationCollectionAttribute::get_ClearItemsName()
extern "C" String_t* ConfigurationCollectionAttribute_get_ClearItemsName_m6528 (ConfigurationCollectionAttribute_t1410 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___clearItemsName_1);
		return L_0;
	}
}
// System.String System.Configuration.ConfigurationCollectionAttribute::get_RemoveItemName()
extern "C" String_t* ConfigurationCollectionAttribute_get_RemoveItemName_m6529 (ConfigurationCollectionAttribute_t1410 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___removeItemName_2);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationCollectionAttribute::set_CollectionType(System.Configuration.ConfigurationElementCollectionType)
extern "C" void ConfigurationCollectionAttribute_set_CollectionType_m6530 (ConfigurationCollectionAttribute_t1410 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___collectionType_3 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Configuration.ElementInformation
#include "System_Configuration_System_Configuration_ElementInformation.h"
// System.Configuration.PropertyInformation
#include "System_Configuration_System_Configuration_PropertyInformatio.h"
// System.Configuration.ConfigurationLockCollection
#include "System_Configuration_System_Configuration_ConfigurationLockC.h"
// System.Configuration.ConfigurationLockType
#include "System_Configuration_System_Configuration_ConfigurationLockT.h"
// System.Configuration.ConfigurationProperty
#include "System_Configuration_System_Configuration_ConfigurationPrope.h"
// System.Configuration.PropertyInformationCollection
#include "System_Configuration_System_Configuration_PropertyInformatio_1.h"
// System.Configuration.ConfigurationPropertyCollection
#include "System_Configuration_System_Configuration_ConfigurationPrope_2.h"
// System.Configuration.ElementMap
#include "System_Configuration_System_Configuration_ElementMap.h"
// System.Configuration.ConfigurationElementCollection
#include "System_Configuration_System_Configuration_ConfigurationEleme_2.h"
// System.Configuration.PropertyValueOrigin
#include "System_Configuration_System_Configuration_PropertyValueOrigi.h"
// System.Xml.XmlWriter
#include "System_Xml_System_Xml_XmlWriter.h"
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveM.h"
// System.Configuration.ConfigurationValidatorBase
#include "System_Configuration_System_Configuration_ConfigurationValid_0.h"
// System.Configuration.ElementInformation
#include "System_Configuration_System_Configuration_ElementInformationMethodDeclarations.h"
// System.Configuration.ConfigurationLockCollection
#include "System_Configuration_System_Configuration_ConfigurationLockCMethodDeclarations.h"
// System.Configuration.ConfigurationProperty
#include "System_Configuration_System_Configuration_ConfigurationPropeMethodDeclarations.h"
// System.Configuration.PropertyInformationCollection
#include "System_Configuration_System_Configuration_PropertyInformatio_1MethodDeclarations.h"
// System.Configuration.PropertyInformation
#include "System_Configuration_System_Configuration_PropertyInformatioMethodDeclarations.h"
// System.Configuration.ElementMap
#include "System_Configuration_System_Configuration_ElementMapMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Configuration.ConfigurationPropertyCollection
#include "System_Configuration_System_Configuration_ConfigurationPrope_2MethodDeclarations.h"
// System.Xml.XmlWriter
#include "System_Xml_System_Xml_XmlWriterMethodDeclarations.h"
// System.Configuration.ConfigurationValidatorBase
#include "System_Configuration_System_Configuration_ConfigurationValid_0MethodDeclarations.h"


// System.Void System.Configuration.ConfigurationElement::.ctor()
extern "C" void ConfigurationElement__ctor_m6531 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.Configuration System.Configuration.ConfigurationElement::get_Configuration()
extern "C" Configuration_t1398 * ConfigurationElement_get_Configuration_m6532 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	{
		Configuration_t1398 * L_0 = (__this->____configuration_7);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationElement::set_Configuration(System.Configuration.Configuration)
extern "C" void ConfigurationElement_set_Configuration_m6533 (ConfigurationElement_t1416 * __this, Configuration_t1398 * ___value, const MethodInfo* method)
{
	{
		Configuration_t1398 * L_0 = ___value;
		__this->____configuration_7 = L_0;
		return;
	}
}
// System.Void System.Configuration.ConfigurationElement::InitFromProperty(System.Configuration.PropertyInformation)
extern TypeInfo* ElementInformation_t1414_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElement_InitFromProperty_m6534 (ConfigurationElement_t1416 * __this, PropertyInformation_t1446 * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ElementInformation_t1414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2952);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInformation_t1446 * L_0 = ___propertyInfo;
		ElementInformation_t1414 * L_1 = (ElementInformation_t1414 *)il2cpp_codegen_object_new (ElementInformation_t1414_il2cpp_TypeInfo_var);
		ElementInformation__ctor_m6744(L_1, __this, L_0, /*hidden argument*/NULL);
		__this->___elementInfo_6 = L_1;
		VirtActionInvoker0::Invoke(5 /* System.Void System.Configuration.ConfigurationElement::Init() */, __this);
		return;
	}
}
// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::get_ElementInformation()
extern TypeInfo* ElementInformation_t1414_il2cpp_TypeInfo_var;
extern "C" ElementInformation_t1414 * ConfigurationElement_get_ElementInformation_m6535 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ElementInformation_t1414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2952);
		s_Il2CppMethodIntialized = true;
	}
	{
		ElementInformation_t1414 * L_0 = (__this->___elementInfo_6);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ElementInformation_t1414 * L_1 = (ElementInformation_t1414 *)il2cpp_codegen_object_new (ElementInformation_t1414_il2cpp_TypeInfo_var);
		ElementInformation__ctor_m6744(L_1, __this, (PropertyInformation_t1446 *)NULL, /*hidden argument*/NULL);
		__this->___elementInfo_6 = L_1;
	}

IL_0018:
	{
		ElementInformation_t1414 * L_2 = (__this->___elementInfo_6);
		return L_2;
	}
}
// System.String System.Configuration.ConfigurationElement::get_RawXml()
extern "C" String_t* ConfigurationElement_get_RawXml_m6536 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___rawXml_0);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationElement::set_RawXml(System.String)
extern "C" void ConfigurationElement_set_RawXml_m6537 (ConfigurationElement_t1416 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___rawXml_0);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___value;
		if (!L_1)
		{
			goto IL_0018;
		}
	}

IL_0011:
	{
		String_t* L_2 = ___value;
		__this->___rawXml_0 = L_2;
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Configuration.ConfigurationElement::Init()
extern "C" void ConfigurationElement_Init_m6538 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllAttributesExcept()
extern TypeInfo* ConfigurationLockCollection_t1415_il2cpp_TypeInfo_var;
extern "C" ConfigurationLockCollection_t1415 * ConfigurationElement_get_LockAllAttributesExcept_m6539 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationLockCollection_t1415_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2953);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationLockCollection_t1415 * L_0 = (__this->___lockAllAttributesExcept_8);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		ConfigurationLockCollection_t1415 * L_1 = (ConfigurationLockCollection_t1415 *)il2cpp_codegen_object_new (ConfigurationLockCollection_t1415_il2cpp_TypeInfo_var);
		ConfigurationLockCollection__ctor_m6646(L_1, __this, ((int32_t)17), /*hidden argument*/NULL);
		__this->___lockAllAttributesExcept_8 = L_1;
	}

IL_0019:
	{
		ConfigurationLockCollection_t1415 * L_2 = (__this->___lockAllAttributesExcept_8);
		return L_2;
	}
}
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllElementsExcept()
extern TypeInfo* ConfigurationLockCollection_t1415_il2cpp_TypeInfo_var;
extern "C" ConfigurationLockCollection_t1415 * ConfigurationElement_get_LockAllElementsExcept_m6540 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationLockCollection_t1415_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2953);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationLockCollection_t1415 * L_0 = (__this->___lockAllElementsExcept_9);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		ConfigurationLockCollection_t1415 * L_1 = (ConfigurationLockCollection_t1415 *)il2cpp_codegen_object_new (ConfigurationLockCollection_t1415_il2cpp_TypeInfo_var);
		ConfigurationLockCollection__ctor_m6646(L_1, __this, ((int32_t)18), /*hidden argument*/NULL);
		__this->___lockAllElementsExcept_9 = L_1;
	}

IL_0019:
	{
		ConfigurationLockCollection_t1415 * L_2 = (__this->___lockAllElementsExcept_9);
		return L_2;
	}
}
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAttributes()
extern TypeInfo* ConfigurationLockCollection_t1415_il2cpp_TypeInfo_var;
extern "C" ConfigurationLockCollection_t1415 * ConfigurationElement_get_LockAttributes_m6541 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationLockCollection_t1415_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2953);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationLockCollection_t1415 * L_0 = (__this->___lockAttributes_10);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ConfigurationLockCollection_t1415 * L_1 = (ConfigurationLockCollection_t1415 *)il2cpp_codegen_object_new (ConfigurationLockCollection_t1415_il2cpp_TypeInfo_var);
		ConfigurationLockCollection__ctor_m6646(L_1, __this, 1, /*hidden argument*/NULL);
		__this->___lockAttributes_10 = L_1;
	}

IL_0018:
	{
		ConfigurationLockCollection_t1415 * L_2 = (__this->___lockAttributes_10);
		return L_2;
	}
}
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockElements()
extern TypeInfo* ConfigurationLockCollection_t1415_il2cpp_TypeInfo_var;
extern "C" ConfigurationLockCollection_t1415 * ConfigurationElement_get_LockElements_m6542 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationLockCollection_t1415_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2953);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationLockCollection_t1415 * L_0 = (__this->___lockElements_11);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ConfigurationLockCollection_t1415 * L_1 = (ConfigurationLockCollection_t1415 *)il2cpp_codegen_object_new (ConfigurationLockCollection_t1415_il2cpp_TypeInfo_var);
		ConfigurationLockCollection__ctor_m6646(L_1, __this, 2, /*hidden argument*/NULL);
		__this->___lockElements_11 = L_1;
	}

IL_0018:
	{
		ConfigurationLockCollection_t1415 * L_2 = (__this->___lockElements_11);
		return L_2;
	}
}
// System.Void System.Configuration.ConfigurationElement::set_LockItem(System.Boolean)
extern "C" void ConfigurationElement_set_LockItem_m6543 (ConfigurationElement_t1416 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___lockItem_12 = L_0;
		return;
	}
}
// System.Void System.Configuration.ConfigurationElement::SetPropertyValue(System.Configuration.ConfigurationProperty,System.Object,System.Boolean)
extern TypeInfo* Exception_t306_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElement_SetPropertyValue_m6544 (ConfigurationElement_t1416 * __this, ConfigurationProperty_t1429 * ___prop, Object_t * ___value, bool ___ignoreLocks, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2028);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t306 * V_0 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		ConfigurationProperty_t1429 * L_0 = ___prop;
		Object_t * L_1 = ___value;
		NullCheck(L_0);
		ConfigurationProperty_Validate_m6678(L_0, L_1, /*hidden argument*/NULL);
		goto IL_002f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t306_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_000c;
		throw e;
	}

CATCH_000c:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t306 *)__exception_local);
		ConfigurationProperty_t1429 * L_2 = ___prop;
		NullCheck(L_2);
		String_t* L_3 = ConfigurationProperty_get_Name_m6670(L_2, /*hidden argument*/NULL);
		Exception_t306 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Format_m3539(NULL /*static, unused*/, (String_t*) &_stringLiteral1486, L_3, L_5, /*hidden argument*/NULL);
		Exception_t306 * L_7 = V_0;
		ConfigurationErrorsException_t1139 * L_8 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m6622(L_8, L_6, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
		goto IL_002f;
	} // end catch (depth: 1)

IL_002f:
	{
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::GetKeyProperties()
extern TypeInfo* ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t1429_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" ConfigurationPropertyCollection_t1412 * ConfigurationElement_GetKeyProperties_m6545 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2954);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		ConfigurationProperty_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2955);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationPropertyCollection_t1412 * V_0 = {0};
	ConfigurationProperty_t1429 * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	ConfigurationPropertyCollection_t1412 * V_4 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ConfigurationPropertyCollection_t1412 * L_0 = (__this->___keyProps_3);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ConfigurationPropertyCollection_t1412 * L_1 = (__this->___keyProps_3);
		return L_1;
	}

IL_0012:
	{
		ConfigurationPropertyCollection_t1412 * L_2 = (ConfigurationPropertyCollection_t1412 *)il2cpp_codegen_object_new (ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection__ctor_m6685(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		ConfigurationPropertyCollection_t1412 * L_3 = (ConfigurationPropertyCollection_t1412 *)VirtFuncInvoker0< ConfigurationPropertyCollection_t1412 * >::Invoke(6 /* System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties() */, __this);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_3);
		V_2 = L_4;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_0029:
		{
			Object_t * L_5 = V_2;
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_5);
			V_1 = ((ConfigurationProperty_t1429 *)Castclass(L_6, ConfigurationProperty_t1429_il2cpp_TypeInfo_var));
			ConfigurationProperty_t1429 * L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = ConfigurationProperty_get_IsKey_m6667(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			ConfigurationPropertyCollection_t1412 * L_9 = V_0;
			ConfigurationProperty_t1429 * L_10 = V_1;
			NullCheck(L_9);
			ConfigurationPropertyCollection_Add_m6689(L_9, L_10, /*hidden argument*/NULL);
		}

IL_0047:
		{
			Object_t * L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_0029;
			}
		}

IL_0052:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0057);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0057;
	}

FINALLY_0057:
	{ // begin finally (depth: 1)
		{
			Object_t * L_13 = V_2;
			V_3 = ((Object_t *)IsInst(L_13, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_14 = V_3;
			if (L_14)
			{
				goto IL_0062;
			}
		}

IL_0061:
		{
			IL2CPP_END_FINALLY(87)
		}

IL_0062:
		{
			Object_t * L_15 = V_3;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(87)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(87)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0069:
	{
		ConfigurationPropertyCollection_t1412 * L_16 = V_0;
		ConfigurationPropertyCollection_t1412 * L_17 = L_16;
		V_4 = L_17;
		__this->___keyProps_3 = L_17;
		ConfigurationPropertyCollection_t1412 * L_18 = V_4;
		return L_18;
	}
}
// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::GetDefaultCollection()
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t1429_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationElementCollection_t1413_il2cpp_TypeInfo_var;
extern "C" ConfigurationElementCollection_t1413 * ConfigurationElement_GetDefaultCollection_m6546 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		ConfigurationProperty_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2955);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		ConfigurationElementCollection_t1413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2956);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationProperty_t1429 * V_0 = {0};
	ConfigurationProperty_t1429 * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ConfigurationElementCollection_t1413 * L_0 = (__this->___defaultCollection_4);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ConfigurationElementCollection_t1413 * L_1 = (__this->___defaultCollection_4);
		return L_1;
	}

IL_0012:
	{
		V_0 = (ConfigurationProperty_t1429 *)NULL;
		ConfigurationPropertyCollection_t1412 * L_2 = (ConfigurationPropertyCollection_t1412 *)VirtFuncInvoker0< ConfigurationPropertyCollection_t1412 * >::Invoke(6 /* System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties() */, __this);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_2);
		V_2 = L_3;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0043;
		}

IL_0025:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_4);
			V_1 = ((ConfigurationProperty_t1429 *)Castclass(L_5, ConfigurationProperty_t1429_il2cpp_TypeInfo_var));
			ConfigurationProperty_t1429 * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = ConfigurationProperty_get_IsDefaultCollection_m6669(L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0043;
			}
		}

IL_003c:
		{
			ConfigurationProperty_t1429 * L_8 = V_1;
			V_0 = L_8;
			goto IL_004e;
		}

IL_0043:
		{
			Object_t * L_9 = V_2;
			NullCheck(L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0025;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x65, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		{
			Object_t * L_11 = V_2;
			V_3 = ((Object_t *)IsInst(L_11, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_12 = V_3;
			if (L_12)
			{
				goto IL_005e;
			}
		}

IL_005d:
		{
			IL2CPP_END_FINALLY(83)
		}

IL_005e:
		{
			Object_t * L_13 = V_3;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_13);
			IL2CPP_END_FINALLY(83)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_JUMP_TBL(0x65, IL_0065)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0065:
	{
		ConfigurationProperty_t1429 * L_14 = V_0;
		if (!L_14)
		{
			goto IL_007d;
		}
	}
	{
		ConfigurationProperty_t1429 * L_15 = V_0;
		Object_t * L_16 = ConfigurationElement_get_Item_m6547(__this, L_15, /*hidden argument*/NULL);
		__this->___defaultCollection_4 = ((ConfigurationElementCollection_t1413 *)IsInst(L_16, ConfigurationElementCollection_t1413_il2cpp_TypeInfo_var));
	}

IL_007d:
	{
		ConfigurationElementCollection_t1413 * L_17 = (__this->___defaultCollection_4);
		return L_17;
	}
}
// System.Object System.Configuration.ConfigurationElement::get_Item(System.Configuration.ConfigurationProperty)
extern "C" Object_t * ConfigurationElement_get_Item_m6547 (ConfigurationElement_t1416 * __this, ConfigurationProperty_t1429 * ___property, const MethodInfo* method)
{
	{
		ConfigurationProperty_t1429 * L_0 = ___property;
		NullCheck(L_0);
		String_t* L_1 = ConfigurationProperty_get_Name_m6670(L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ConfigurationElement_get_Item_m6549(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Configuration.ConfigurationElement::set_Item(System.Configuration.ConfigurationProperty,System.Object)
extern "C" void ConfigurationElement_set_Item_m6548 (ConfigurationElement_t1416 * __this, ConfigurationProperty_t1429 * ___property, Object_t * ___value, const MethodInfo* method)
{
	{
		ConfigurationProperty_t1429 * L_0 = ___property;
		NullCheck(L_0);
		String_t* L_1 = ConfigurationProperty_get_Name_m6670(L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___value;
		ConfigurationElement_set_Item_m6550(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.ConfigurationElement::get_Item(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationElement_get_Item_m6549 (ConfigurationElement_t1416 * __this, String_t* ___property_name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	PropertyInformation_t1446 * V_0 = {0};
	{
		ElementInformation_t1414 * L_0 = ConfigurationElement_get_ElementInformation_m6535(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PropertyInformationCollection_t1447 * L_1 = ElementInformation_get_Properties_m6745(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___property_name;
		NullCheck(L_1);
		PropertyInformation_t1446 * L_3 = PropertyInformationCollection_get_Item_m6802(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		PropertyInformation_t1446 * L_4 = V_0;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_5 = ___property_name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral1484, L_5, (String_t*) &_stringLiteral1485, /*hidden argument*/NULL);
		InvalidOperationException_t1116 * L_7 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002e:
	{
		PropertyInformation_t1446 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = PropertyInformation_get_Value_m6790(L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void System.Configuration.ConfigurationElement::set_Item(System.String,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElement_set_Item_m6550 (ConfigurationElement_t1416 * __this, String_t* ___property_name, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	PropertyInformation_t1446 * V_0 = {0};
	{
		ElementInformation_t1414 * L_0 = ConfigurationElement_get_ElementInformation_m6535(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PropertyInformationCollection_t1447 * L_1 = ElementInformation_get_Properties_m6745(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___property_name;
		NullCheck(L_1);
		PropertyInformation_t1446 * L_3 = PropertyInformationCollection_get_Item_m6802(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		PropertyInformation_t1446 * L_4 = V_0;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_5 = ___property_name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral1484, L_5, (String_t*) &_stringLiteral1485, /*hidden argument*/NULL);
		InvalidOperationException_t1116 * L_7 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002e:
	{
		PropertyInformation_t1446 * L_8 = V_0;
		NullCheck(L_8);
		ConfigurationProperty_t1429 * L_9 = PropertyInformation_get_Property_m6797(L_8, /*hidden argument*/NULL);
		Object_t * L_10 = ___value;
		ConfigurationElement_SetPropertyValue_m6544(__this, L_9, L_10, 0, /*hidden argument*/NULL);
		PropertyInformation_t1446 * L_11 = V_0;
		Object_t * L_12 = ___value;
		NullCheck(L_11);
		PropertyInformation_set_Value_m6791(L_11, L_12, /*hidden argument*/NULL);
		__this->___modified_1 = 1;
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties()
extern TypeInfo* ElementMap_t1411_il2cpp_TypeInfo_var;
extern "C" ConfigurationPropertyCollection_t1412 * ConfigurationElement_get_Properties_m6551 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ElementMap_t1411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2957);
		s_Il2CppMethodIntialized = true;
	}
	{
		ElementMap_t1411 * L_0 = (__this->___map_2);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1416(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ElementMap_t1411_il2cpp_TypeInfo_var);
		ElementMap_t1411 * L_2 = ElementMap_GetMap_m6575(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->___map_2 = L_2;
	}

IL_001c:
	{
		ElementMap_t1411 * L_3 = (__this->___map_2);
		NullCheck(L_3);
		ConfigurationPropertyCollection_t1412 * L_4 = ElementMap_get_Properties_m6576(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::Equals(System.Object)
extern TypeInfo* ConfigurationElement_t1416_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t1429_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElement_Equals_m6552 (ConfigurationElement_t1416 * __this, Object_t * ___compareTo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t1416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2958);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		ConfigurationProperty_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2955);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationElement_t1416 * V_0 = {0};
	ConfigurationProperty_t1429 * V_1 = {0};
	Object_t * V_2 = {0};
	bool V_3 = false;
	Object_t * V_4 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___compareTo;
		V_0 = ((ConfigurationElement_t1416 *)IsInst(L_0, ConfigurationElement_t1416_il2cpp_TypeInfo_var));
		ConfigurationElement_t1416 * L_1 = V_0;
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
		Type_t * L_2 = Object_GetType_m1416(__this, /*hidden argument*/NULL);
		ConfigurationElement_t1416 * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1416(L_3, /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_4)))
		{
			goto IL_0022;
		}
	}
	{
		return 0;
	}

IL_0022:
	{
		ConfigurationPropertyCollection_t1412 * L_5 = (ConfigurationPropertyCollection_t1412 *)VirtFuncInvoker0< ConfigurationPropertyCollection_t1412 * >::Invoke(6 /* System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties() */, __this);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_5);
		V_2 = L_6;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005e;
		}

IL_0033:
		{
			Object_t * L_7 = V_2;
			NullCheck(L_7);
			Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_7);
			V_1 = ((ConfigurationProperty_t1429 *)Castclass(L_8, ConfigurationProperty_t1429_il2cpp_TypeInfo_var));
			ConfigurationProperty_t1429 * L_9 = V_1;
			Object_t * L_10 = ConfigurationElement_get_Item_m6547(__this, L_9, /*hidden argument*/NULL);
			ConfigurationElement_t1416 * L_11 = V_0;
			ConfigurationProperty_t1429 * L_12 = V_1;
			NullCheck(L_11);
			Object_t * L_13 = ConfigurationElement_get_Item_m6547(L_11, L_12, /*hidden argument*/NULL);
			bool L_14 = Object_Equals_m6884(NULL /*static, unused*/, L_10, L_13, /*hidden argument*/NULL);
			if (L_14)
			{
				goto IL_005e;
			}
		}

IL_0057:
		{
			V_3 = 0;
			IL2CPP_LEAVE(0x85, FINALLY_006e);
		}

IL_005e:
		{
			Object_t * L_15 = V_2;
			NullCheck(L_15);
			bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0033;
			}
		}

IL_0069:
		{
			IL2CPP_LEAVE(0x83, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_17 = V_2;
			V_4 = ((Object_t *)IsInst(L_17, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_18 = V_4;
			if (L_18)
			{
				goto IL_007b;
			}
		}

IL_007a:
		{
			IL2CPP_END_FINALLY(110)
		}

IL_007b:
		{
			Object_t * L_19 = V_4;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_19);
			IL2CPP_END_FINALLY(110)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_JUMP_TBL(0x85, IL_0085)
		IL2CPP_JUMP_TBL(0x83, IL_0083)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0083:
	{
		return 1;
	}

IL_0085:
	{
		bool L_20 = V_3;
		return L_20;
	}
}
// System.Int32 System.Configuration.ConfigurationElement::GetHashCode()
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t1429_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" int32_t ConfigurationElement_GetHashCode_m6553 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		ConfigurationProperty_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2955);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	ConfigurationProperty_t1429 * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		ConfigurationPropertyCollection_t1412 * L_0 = (ConfigurationPropertyCollection_t1412 *)VirtFuncInvoker0< ConfigurationPropertyCollection_t1412 * >::Invoke(6 /* System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties() */, __this);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_0);
		V_3 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0013:
		{
			Object_t * L_2 = V_3;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_2);
			V_2 = ((ConfigurationProperty_t1429 *)Castclass(L_3, ConfigurationProperty_t1429_il2cpp_TypeInfo_var));
			ConfigurationProperty_t1429 * L_4 = V_2;
			Object_t * L_5 = ConfigurationElement_get_Item_m6547(__this, L_4, /*hidden argument*/NULL);
			V_1 = L_5;
			Object_t * L_6 = V_1;
			if (L_6)
			{
				goto IL_0032;
			}
		}

IL_002d:
		{
			goto IL_003b;
		}

IL_0032:
		{
			int32_t L_7 = V_0;
			Object_t * L_8 = V_1;
			NullCheck(L_8);
			int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
			V_0 = ((int32_t)((int32_t)L_7+(int32_t)L_9));
		}

IL_003b:
		{
			Object_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0013;
			}
		}

IL_0046:
		{
			IL2CPP_LEAVE(0x60, FINALLY_004b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_3;
			V_4 = ((Object_t *)IsInst(L_12, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_4;
			if (L_13)
			{
				goto IL_0058;
			}
		}

IL_0057:
		{
			IL2CPP_END_FINALLY(75)
		}

IL_0058:
		{
			Object_t * L_14 = V_4;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(75)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0060:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::HasValues()
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInformation_t1446_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElement_HasValues_m6554 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		PropertyInformation_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2959);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	PropertyInformation_t1446 * V_0 = {0};
	Object_t * V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ElementInformation_t1414 * L_0 = ConfigurationElement_get_ElementInformation_m6535(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PropertyInformationCollection_t1447 * L_1 = ElementInformation_get_Properties_m6745(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, L_1);
		V_1 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0034;
		}

IL_0016:
		{
			Object_t * L_3 = V_1;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_3);
			V_0 = ((PropertyInformation_t1446 *)Castclass(L_4, PropertyInformation_t1446_il2cpp_TypeInfo_var));
			PropertyInformation_t1446 * L_5 = V_0;
			NullCheck(L_5);
			int32_t L_6 = PropertyInformation_get_ValueOrigin_m6794(L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0034;
			}
		}

IL_002d:
		{
			V_2 = 1;
			IL2CPP_LEAVE(0x58, FINALLY_0044);
		}

IL_0034:
		{
			Object_t * L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0016;
			}
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			Object_t * L_9 = V_1;
			V_3 = ((Object_t *)IsInst(L_9, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_10 = V_3;
			if (L_10)
			{
				goto IL_004f;
			}
		}

IL_004e:
		{
			IL2CPP_END_FINALLY(68)
		}

IL_004f:
		{
			Object_t * L_11 = V_3;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_11);
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0056:
	{
		return 0;
	}

IL_0058:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::HasLocalModifications()
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInformation_t1446_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElement_HasLocalModifications_m6555 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		PropertyInformation_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2959);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	PropertyInformation_t1446 * V_0 = {0};
	Object_t * V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ElementInformation_t1414 * L_0 = ConfigurationElement_get_ElementInformation_m6535(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PropertyInformationCollection_t1447 * L_1 = ElementInformation_get_Properties_m6745(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, L_1);
		V_1 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0016:
		{
			Object_t * L_3 = V_1;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_3);
			V_0 = ((PropertyInformation_t1446 *)Castclass(L_4, PropertyInformation_t1446_il2cpp_TypeInfo_var));
			PropertyInformation_t1446 * L_5 = V_0;
			NullCheck(L_5);
			int32_t L_6 = PropertyInformation_get_ValueOrigin_m6794(L_5, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_6) == ((uint32_t)2))))
			{
				goto IL_0040;
			}
		}

IL_002e:
		{
			PropertyInformation_t1446 * L_7 = V_0;
			NullCheck(L_7);
			bool L_8 = PropertyInformation_get_IsModified_m6785(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0040;
			}
		}

IL_0039:
		{
			V_2 = 1;
			IL2CPP_LEAVE(0x64, FINALLY_0050);
		}

IL_0040:
		{
			Object_t * L_9 = V_1;
			NullCheck(L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0016;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x62, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			Object_t * L_11 = V_1;
			V_3 = ((Object_t *)IsInst(L_11, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_12 = V_3;
			if (L_12)
			{
				goto IL_005b;
			}
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(80)
		}

IL_005b:
		{
			Object_t * L_13 = V_3;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_13);
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x64, IL_0064)
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0062:
	{
		return 0;
	}

IL_0064:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationSection_t1436_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationException_t1420_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t306_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationElement_t1416_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInformation_t1446_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElement_DeserializeElement_m6556 (ConfigurationElement_t1416 * __this, XmlReader_t843 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ConfigurationSection_t1436_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2946);
		ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2028);
		ConfigurationException_t1420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2951);
		Exception_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		ConfigurationElement_t1416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2958);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		PropertyInformation_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2959);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t915 * V_0 = {0};
	PropertyInformation_t1446 * V_1 = {0};
	String_t* V_2 = {0};
	Exception_t306 * V_3 = {0};
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	PropertyInformation_t1446 * V_6 = {0};
	ConfigurationElementCollection_t1413 * V_7 = {0};
	ConfigurationElement_t1416 * V_8 = {0};
	PropertyInformation_t1446 * V_9 = {0};
	Object_t * V_10 = {0};
	PropertyInformation_t1446 * V_11 = {0};
	Object_t * V_12 = {0};
	Object_t * V_13 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Hashtable_t915 * L_0 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		XmlReader_t843 * L_1 = ___reader;
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(38 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_1);
		goto IL_0226;
	}

IL_0012:
	{
		ElementInformation_t1414 * L_2 = ConfigurationElement_get_ElementInformation_m6535(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		PropertyInformationCollection_t1447 * L_3 = ElementInformation_get_Properties_m6745(L_2, /*hidden argument*/NULL);
		XmlReader_t843 * L_4 = ___reader;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_4);
		NullCheck(L_3);
		PropertyInformation_t1446 * L_6 = PropertyInformationCollection_get_Item_m6802(L_3, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		PropertyInformation_t1446 * L_7 = V_1;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		bool L_8 = ___serializeCollectionKey;
		if (!L_8)
		{
			goto IL_0198;
		}
	}
	{
		PropertyInformation_t1446 * L_9 = V_1;
		NullCheck(L_9);
		bool L_10 = PropertyInformation_get_IsKey_m6784(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0198;
		}
	}

IL_0040:
	{
		XmlReader_t843 * L_11 = ___reader;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m1295(NULL /*static, unused*/, L_12, (String_t*) &_stringLiteral1487, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		ConfigurationLockCollection_t1415 * L_14 = ConfigurationElement_get_LockAllAttributesExcept_m6539(__this, /*hidden argument*/NULL);
		XmlReader_t843 * L_15 = ___reader;
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_15);
		NullCheck(L_14);
		ConfigurationLockCollection_SetFromList_m6652(L_14, L_16, /*hidden argument*/NULL);
		goto IL_0193;
	}

IL_006b:
	{
		XmlReader_t843 * L_17 = ___reader;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m1295(NULL /*static, unused*/, L_18, (String_t*) &_stringLiteral1488, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0096;
		}
	}
	{
		ConfigurationLockCollection_t1415 * L_20 = ConfigurationElement_get_LockAllElementsExcept_m6540(__this, /*hidden argument*/NULL);
		XmlReader_t843 * L_21 = ___reader;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_21);
		NullCheck(L_20);
		ConfigurationLockCollection_SetFromList_m6652(L_20, L_22, /*hidden argument*/NULL);
		goto IL_0193;
	}

IL_0096:
	{
		XmlReader_t843 * L_23 = ___reader;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_23);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_op_Equality_m1295(NULL /*static, unused*/, L_24, (String_t*) &_stringLiteral1489, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00c1;
		}
	}
	{
		ConfigurationLockCollection_t1415 * L_26 = ConfigurationElement_get_LockAttributes_m6541(__this, /*hidden argument*/NULL);
		XmlReader_t843 * L_27 = ___reader;
		NullCheck(L_27);
		String_t* L_28 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_27);
		NullCheck(L_26);
		ConfigurationLockCollection_SetFromList_m6652(L_26, L_28, /*hidden argument*/NULL);
		goto IL_0193;
	}

IL_00c1:
	{
		XmlReader_t843 * L_29 = ___reader;
		NullCheck(L_29);
		String_t* L_30 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_29);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_31 = String_op_Equality_m1295(NULL /*static, unused*/, L_30, (String_t*) &_stringLiteral1490, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00ec;
		}
	}
	{
		ConfigurationLockCollection_t1415 * L_32 = ConfigurationElement_get_LockElements_m6542(__this, /*hidden argument*/NULL);
		XmlReader_t843 * L_33 = ___reader;
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_33);
		NullCheck(L_32);
		ConfigurationLockCollection_SetFromList_m6652(L_32, L_34, /*hidden argument*/NULL);
		goto IL_0193;
	}

IL_00ec:
	{
		XmlReader_t843 * L_35 = ___reader;
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_35);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_op_Equality_m1295(NULL /*static, unused*/, L_36, (String_t*) &_stringLiteral1491, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0121;
		}
	}
	{
		XmlReader_t843 * L_38 = ___reader;
		NullCheck(L_38);
		String_t* L_39 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_38);
		NullCheck(L_39);
		String_t* L_40 = String_ToLowerInvariant_m6885(L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_41 = String_op_Equality_m1295(NULL /*static, unused*/, L_40, (String_t*) &_stringLiteral345, /*hidden argument*/NULL);
		ConfigurationElement_set_LockItem_m6543(__this, L_41, /*hidden argument*/NULL);
		goto IL_0193;
	}

IL_0121:
	{
		XmlReader_t843 * L_42 = ___reader;
		NullCheck(L_42);
		String_t* L_43 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_42);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_44 = String_op_Equality_m1295(NULL /*static, unused*/, L_43, (String_t*) &_stringLiteral742, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_013b;
		}
	}
	{
		goto IL_0193;
	}

IL_013b:
	{
		if (!((ConfigurationSection_t1436 *)IsInst(__this, ConfigurationSection_t1436_il2cpp_TypeInfo_var)))
		{
			goto IL_0160;
		}
	}
	{
		XmlReader_t843 * L_45 = ___reader;
		NullCheck(L_45);
		String_t* L_46 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_45);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_47 = String_op_Equality_m1295(NULL /*static, unused*/, L_46, (String_t*) &_stringLiteral1492, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0193;
	}

IL_0160:
	{
		XmlReader_t843 * L_48 = ___reader;
		NullCheck(L_48);
		String_t* L_49 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_48);
		XmlReader_t843 * L_50 = ___reader;
		NullCheck(L_50);
		String_t* L_51 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_50);
		bool L_52 = (bool)VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(10 /* System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedAttribute(System.String,System.String) */, __this, L_49, L_51);
		if (L_52)
		{
			goto IL_0193;
		}
	}
	{
		XmlReader_t843 * L_53 = ___reader;
		NullCheck(L_53);
		String_t* L_54 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_53);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral1493, L_54, (String_t*) &_stringLiteral1494, /*hidden argument*/NULL);
		XmlReader_t843 * L_56 = ___reader;
		ConfigurationErrorsException_t1139 * L_57 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m6624(L_57, L_55, L_56, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_57);
	}

IL_0193:
	{
		goto IL_0226;
	}

IL_0198:
	{
		Hashtable_t915 * L_58 = V_0;
		PropertyInformation_t1446 * L_59 = V_1;
		NullCheck(L_58);
		bool L_60 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_58, L_59);
		if (!L_60)
		{
			goto IL_01c0;
		}
	}
	{
		PropertyInformation_t1446 * L_61 = V_1;
		NullCheck(L_61);
		String_t* L_62 = PropertyInformation_get_Name_m6788(L_61, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_63 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral1495, L_62, (String_t*) &_stringLiteral1496, /*hidden argument*/NULL);
		XmlReader_t843 * L_64 = ___reader;
		ConfigurationErrorsException_t1139 * L_65 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m6624(L_65, L_63, L_64, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_65);
	}

IL_01c0:
	{
		V_2 = (String_t*)NULL;
	}

IL_01c2:
	try
	{ // begin try (depth: 1)
		XmlReader_t843 * L_66 = ___reader;
		NullCheck(L_66);
		String_t* L_67 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_66);
		V_2 = L_67;
		PropertyInformation_t1446 * L_68 = V_1;
		NullCheck(L_68);
		ConfigurationProperty_t1429 * L_69 = PropertyInformation_get_Property_m6797(L_68, /*hidden argument*/NULL);
		String_t* L_70 = V_2;
		ConfigurationElement_ValidateValue_m6572(__this, L_69, L_70, /*hidden argument*/NULL);
		PropertyInformation_t1446 * L_71 = V_1;
		String_t* L_72 = V_2;
		NullCheck(L_71);
		PropertyInformation_SetStringValue_m6796(L_71, L_72, /*hidden argument*/NULL);
		goto IL_0219;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_01e2;
		if(il2cpp_codegen_class_is_assignable_from (ConfigurationException_t1420_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_01ea;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t306_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_01f2;
		throw e;
	}

CATCH_01e2:
	{ // begin catch(System.Configuration.ConfigurationErrorsException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_0219;
	} // end catch (depth: 1)

CATCH_01ea:
	{ // begin catch(System.Configuration.ConfigurationException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_0219;
	} // end catch (depth: 1)

CATCH_01f2:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t306 *)__exception_local);
		PropertyInformation_t1446 * L_73 = V_1;
		NullCheck(L_73);
		String_t* L_74 = PropertyInformation_get_Name_m6788(L_73, /*hidden argument*/NULL);
		Exception_t306 * L_75 = V_3;
		NullCheck(L_75);
		String_t* L_76 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_75);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_77 = String_Format_m3539(NULL /*static, unused*/, (String_t*) &_stringLiteral1486, L_74, L_76, /*hidden argument*/NULL);
		V_4 = L_77;
		String_t* L_78 = V_4;
		XmlReader_t843 * L_79 = ___reader;
		ConfigurationErrorsException_t1139 * L_80 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m6624(L_80, L_78, L_79, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_80);
		goto IL_0219;
	} // end catch (depth: 1)

IL_0219:
	{
		Hashtable_t915 * L_81 = V_0;
		PropertyInformation_t1446 * L_82 = V_1;
		PropertyInformation_t1446 * L_83 = V_1;
		NullCheck(L_83);
		String_t* L_84 = PropertyInformation_get_Name_m6788(L_83, /*hidden argument*/NULL);
		NullCheck(L_81);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_81, L_82, L_84);
	}

IL_0226:
	{
		XmlReader_t843 * L_85 = ___reader;
		NullCheck(L_85);
		bool L_86 = (bool)VirtFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_85);
		if (L_86)
		{
			goto IL_0012;
		}
	}
	{
		XmlReader_t843 * L_87 = ___reader;
		NullCheck(L_87);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_87);
		XmlReader_t843 * L_88 = ___reader;
		NullCheck(L_88);
		bool L_89 = (bool)VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_88);
		if (!L_89)
		{
			goto IL_024e;
		}
	}
	{
		XmlReader_t843 * L_90 = ___reader;
		NullCheck(L_90);
		VirtActionInvoker0::Invoke(54 /* System.Void System.Xml.XmlReader::Skip() */, L_90);
		goto IL_03a5;
	}

IL_024e:
	{
		XmlReader_t843 * L_91 = ___reader;
		NullCheck(L_91);
		int32_t L_92 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_91);
		V_5 = L_92;
		XmlReader_t843 * L_93 = ___reader;
		NullCheck(L_93);
		VirtActionInvoker0::Invoke(48 /* System.Void System.Xml.XmlReader::ReadStartElement() */, L_93);
		XmlReader_t843 * L_94 = ___reader;
		NullCheck(L_94);
		VirtFuncInvoker0< int32_t >::Invoke(38 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_94);
	}

IL_0263:
	{
		XmlReader_t843 * L_95 = ___reader;
		NullCheck(L_95);
		int32_t L_96 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_95);
		if ((((int32_t)L_96) == ((int32_t)1)))
		{
			goto IL_027a;
		}
	}
	{
		XmlReader_t843 * L_97 = ___reader;
		NullCheck(L_97);
		VirtActionInvoker0::Invoke(54 /* System.Void System.Xml.XmlReader::Skip() */, L_97);
		goto IL_0398;
	}

IL_027a:
	{
		ElementInformation_t1414 * L_98 = ConfigurationElement_get_ElementInformation_m6535(__this, /*hidden argument*/NULL);
		NullCheck(L_98);
		PropertyInformationCollection_t1447 * L_99 = ElementInformation_get_Properties_m6745(L_98, /*hidden argument*/NULL);
		XmlReader_t843 * L_100 = ___reader;
		NullCheck(L_100);
		String_t* L_101 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_100);
		NullCheck(L_99);
		PropertyInformation_t1446 * L_102 = PropertyInformationCollection_get_Item_m6802(L_99, L_101, /*hidden argument*/NULL);
		V_6 = L_102;
		PropertyInformation_t1446 * L_103 = V_6;
		if (!L_103)
		{
			goto IL_02ab;
		}
	}
	{
		bool L_104 = ___serializeCollectionKey;
		if (!L_104)
		{
			goto IL_030c;
		}
	}
	{
		PropertyInformation_t1446 * L_105 = V_6;
		NullCheck(L_105);
		bool L_106 = PropertyInformation_get_IsKey_m6784(L_105, /*hidden argument*/NULL);
		if (L_106)
		{
			goto IL_030c;
		}
	}

IL_02ab:
	{
		XmlReader_t843 * L_107 = ___reader;
		NullCheck(L_107);
		String_t* L_108 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_107);
		XmlReader_t843 * L_109 = ___reader;
		bool L_110 = (bool)VirtFuncInvoker2< bool, String_t*, XmlReader_t843 * >::Invoke(11 /* System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader) */, __this, L_108, L_109);
		if (L_110)
		{
			goto IL_0307;
		}
	}
	{
		PropertyInformation_t1446 * L_111 = V_6;
		if (L_111)
		{
			goto IL_02eb;
		}
	}
	{
		ConfigurationElementCollection_t1413 * L_112 = ConfigurationElement_GetDefaultCollection_m6546(__this, /*hidden argument*/NULL);
		V_7 = L_112;
		ConfigurationElementCollection_t1413 * L_113 = V_7;
		if (!L_113)
		{
			goto IL_02eb;
		}
	}
	{
		ConfigurationElementCollection_t1413 * L_114 = V_7;
		XmlReader_t843 * L_115 = ___reader;
		NullCheck(L_115);
		String_t* L_116 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_115);
		XmlReader_t843 * L_117 = ___reader;
		NullCheck(L_114);
		bool L_118 = (bool)VirtFuncInvoker2< bool, String_t*, XmlReader_t843 * >::Invoke(11 /* System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader) */, L_114, L_116, L_117);
		if (!L_118)
		{
			goto IL_02eb;
		}
	}
	{
		goto IL_0398;
	}

IL_02eb:
	{
		XmlReader_t843 * L_119 = ___reader;
		NullCheck(L_119);
		String_t* L_120 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_119);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_121 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral1497, L_120, (String_t*) &_stringLiteral1494, /*hidden argument*/NULL);
		XmlReader_t843 * L_122 = ___reader;
		ConfigurationErrorsException_t1139 * L_123 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m6624(L_123, L_121, L_122, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_123);
	}

IL_0307:
	{
		goto IL_0398;
	}

IL_030c:
	{
		PropertyInformation_t1446 * L_124 = V_6;
		NullCheck(L_124);
		bool L_125 = PropertyInformation_get_IsElement_m6793(L_124, /*hidden argument*/NULL);
		if (L_125)
		{
			goto IL_0334;
		}
	}
	{
		PropertyInformation_t1446 * L_126 = V_6;
		NullCheck(L_126);
		String_t* L_127 = PropertyInformation_get_Name_m6788(L_126, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_128 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral1484, L_127, (String_t*) &_stringLiteral1498, /*hidden argument*/NULL);
		ConfigurationException_t1420 * L_129 = (ConfigurationException_t1420 *)il2cpp_codegen_object_new (ConfigurationException_t1420_il2cpp_TypeInfo_var);
		ConfigurationException__ctor_m6886(L_129, L_128, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_129);
	}

IL_0334:
	{
		Hashtable_t915 * L_130 = V_0;
		PropertyInformation_t1446 * L_131 = V_6;
		NullCheck(L_130);
		bool L_132 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(29 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_130, L_131);
		if (!L_132)
		{
			goto IL_035e;
		}
	}
	{
		PropertyInformation_t1446 * L_133 = V_6;
		NullCheck(L_133);
		String_t* L_134 = PropertyInformation_get_Name_m6788(L_133, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_135 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral1499, L_134, (String_t*) &_stringLiteral1500, /*hidden argument*/NULL);
		XmlReader_t843 * L_136 = ___reader;
		ConfigurationErrorsException_t1139 * L_137 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m6624(L_137, L_135, L_136, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_137);
	}

IL_035e:
	{
		PropertyInformation_t1446 * L_138 = V_6;
		NullCheck(L_138);
		Object_t * L_139 = PropertyInformation_get_Value_m6790(L_138, /*hidden argument*/NULL);
		V_8 = ((ConfigurationElement_t1416 *)Castclass(L_139, ConfigurationElement_t1416_il2cpp_TypeInfo_var));
		ConfigurationElement_t1416 * L_140 = V_8;
		XmlReader_t843 * L_141 = ___reader;
		bool L_142 = ___serializeCollectionKey;
		NullCheck(L_140);
		VirtActionInvoker2< XmlReader_t843 *, bool >::Invoke(9 /* System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean) */, L_140, L_141, L_142);
		Hashtable_t915 * L_143 = V_0;
		PropertyInformation_t1446 * L_144 = V_6;
		PropertyInformation_t1446 * L_145 = V_6;
		NullCheck(L_145);
		String_t* L_146 = PropertyInformation_get_Name_m6788(L_145, /*hidden argument*/NULL);
		NullCheck(L_143);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_143, L_144, L_146);
		int32_t L_147 = V_5;
		XmlReader_t843 * L_148 = ___reader;
		NullCheck(L_148);
		int32_t L_149 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_148);
		if ((!(((uint32_t)L_147) == ((uint32_t)L_149))))
		{
			goto IL_0398;
		}
	}
	{
		XmlReader_t843 * L_150 = ___reader;
		NullCheck(L_150);
		VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean System.Xml.XmlReader::Read() */, L_150);
	}

IL_0398:
	{
		int32_t L_151 = V_5;
		XmlReader_t843 * L_152 = ___reader;
		NullCheck(L_152);
		int32_t L_153 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_152);
		if ((((int32_t)L_151) < ((int32_t)L_153)))
		{
			goto IL_0263;
		}
	}

IL_03a5:
	{
		__this->___modified_1 = 0;
		ElementInformation_t1414 * L_154 = ConfigurationElement_get_ElementInformation_m6535(__this, /*hidden argument*/NULL);
		NullCheck(L_154);
		PropertyInformationCollection_t1447 * L_155 = ElementInformation_get_Properties_m6745(L_154, /*hidden argument*/NULL);
		NullCheck(L_155);
		Object_t * L_156 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, L_155);
		V_10 = L_156;
	}

IL_03be:
	try
	{ // begin try (depth: 1)
		{
			goto IL_044e;
		}

IL_03c3:
		{
			Object_t * L_157 = V_10;
			NullCheck(L_157);
			Object_t * L_158 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_157);
			V_9 = ((PropertyInformation_t1446 *)Castclass(L_158, PropertyInformation_t1446_il2cpp_TypeInfo_var));
			PropertyInformation_t1446 * L_159 = V_9;
			NullCheck(L_159);
			String_t* L_160 = PropertyInformation_get_Name_m6788(L_159, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_161 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_160, /*hidden argument*/NULL);
			if (L_161)
			{
				goto IL_044e;
			}
		}

IL_03e2:
		{
			PropertyInformation_t1446 * L_162 = V_9;
			NullCheck(L_162);
			bool L_163 = PropertyInformation_get_IsRequired_m6787(L_162, /*hidden argument*/NULL);
			if (!L_163)
			{
				goto IL_044e;
			}
		}

IL_03ee:
		{
			Hashtable_t915 * L_164 = V_0;
			PropertyInformation_t1446 * L_165 = V_9;
			NullCheck(L_164);
			bool L_166 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_164, L_165);
			if (L_166)
			{
				goto IL_044e;
			}
		}

IL_03fb:
		{
			ElementInformation_t1414 * L_167 = ConfigurationElement_get_ElementInformation_m6535(__this, /*hidden argument*/NULL);
			NullCheck(L_167);
			PropertyInformationCollection_t1447 * L_168 = ElementInformation_get_Properties_m6745(L_167, /*hidden argument*/NULL);
			PropertyInformation_t1446 * L_169 = V_9;
			NullCheck(L_169);
			String_t* L_170 = PropertyInformation_get_Name_m6788(L_169, /*hidden argument*/NULL);
			NullCheck(L_168);
			PropertyInformation_t1446 * L_171 = PropertyInformationCollection_get_Item_m6802(L_168, L_170, /*hidden argument*/NULL);
			V_11 = L_171;
			PropertyInformation_t1446 * L_172 = V_11;
			if (L_172)
			{
				goto IL_044e;
			}
		}

IL_041b:
		{
			PropertyInformation_t1446 * L_173 = V_9;
			NullCheck(L_173);
			String_t* L_174 = PropertyInformation_get_Name_m6788(L_173, /*hidden argument*/NULL);
			Object_t * L_175 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(12 /* System.Object System.Configuration.ConfigurationElement::OnRequiredPropertyNotFound(System.String) */, __this, L_174);
			V_12 = L_175;
			Object_t * L_176 = V_12;
			PropertyInformation_t1446 * L_177 = V_9;
			NullCheck(L_177);
			Object_t * L_178 = PropertyInformation_get_DefaultValue_m6783(L_177, /*hidden argument*/NULL);
			bool L_179 = Object_Equals_m6884(NULL /*static, unused*/, L_176, L_178, /*hidden argument*/NULL);
			if (L_179)
			{
				goto IL_044e;
			}
		}

IL_043d:
		{
			PropertyInformation_t1446 * L_180 = V_9;
			Object_t * L_181 = V_12;
			NullCheck(L_180);
			PropertyInformation_set_Value_m6791(L_180, L_181, /*hidden argument*/NULL);
			PropertyInformation_t1446 * L_182 = V_9;
			NullCheck(L_182);
			PropertyInformation_set_IsModified_m6786(L_182, 0, /*hidden argument*/NULL);
		}

IL_044e:
		{
			Object_t * L_183 = V_10;
			NullCheck(L_183);
			bool L_184 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_183);
			if (L_184)
			{
				goto IL_03c3;
			}
		}

IL_045a:
		{
			IL2CPP_LEAVE(0x475, FINALLY_045f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_045f;
	}

FINALLY_045f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_185 = V_10;
			V_13 = ((Object_t *)IsInst(L_185, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_186 = V_13;
			if (L_186)
			{
				goto IL_046d;
			}
		}

IL_046c:
		{
			IL2CPP_END_FINALLY(1119)
		}

IL_046d:
		{
			Object_t * L_187 = V_13;
			NullCheck(L_187);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_187);
			IL2CPP_END_FINALLY(1119)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1119)
	{
		IL2CPP_JUMP_TBL(0x475, IL_0475)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0475:
	{
		VirtActionInvoker0::Invoke(14 /* System.Void System.Configuration.ConfigurationElement::PostDeserialize() */, __this);
		return;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern "C" bool ConfigurationElement_OnDeserializeUnrecognizedAttribute_m6557 (ConfigurationElement_t1416 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader)
extern "C" bool ConfigurationElement_OnDeserializeUnrecognizedElement_m6558 (ConfigurationElement_t1416 * __this, String_t* ___element, XmlReader_t843 * ___reader, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Configuration.ConfigurationElement::OnRequiredPropertyNotFound(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationElement_OnRequiredPropertyNotFound_m6559 (ConfigurationElement_t1416 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2028);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral1501, L_0, (String_t*) &_stringLiteral1502, /*hidden argument*/NULL);
		ConfigurationErrorsException_t1139 * L_2 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m5115(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}
}
// System.Void System.Configuration.ConfigurationElement::PreSerialize(System.Xml.XmlWriter)
extern "C" void ConfigurationElement_PreSerialize_m6560 (ConfigurationElement_t1416 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Configuration.ConfigurationElement::PostDeserialize()
extern "C" void ConfigurationElement_PostDeserialize_m6561 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Configuration.ConfigurationElement::InitializeDefault()
extern "C" void ConfigurationElement_InitializeDefault_m6562 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::IsModified()
extern "C" bool ConfigurationElement_IsModified_m6563 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___modified_1);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationElement::SetReadOnly()
extern "C" void ConfigurationElement_SetReadOnly_m6564 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	{
		__this->___readOnly_5 = 1;
		return;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::IsReadOnly()
extern "C" bool ConfigurationElement_IsReadOnly_m6565 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___readOnly_5);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationElement::Reset(System.Configuration.ConfigurationElement)
extern "C" void ConfigurationElement_Reset_m6566 (ConfigurationElement_t1416 * __this, ConfigurationElement_t1416 * ___parentElement, const MethodInfo* method)
{
	{
		ConfigurationElement_t1416 * L_0 = ___parentElement;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		ElementInformation_t1414 * L_1 = ConfigurationElement_get_ElementInformation_m6535(__this, /*hidden argument*/NULL);
		ConfigurationElement_t1416 * L_2 = ___parentElement;
		NullCheck(L_2);
		ElementInformation_t1414 * L_3 = ConfigurationElement_get_ElementInformation_m6535(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ElementInformation_Reset_m6746(L_1, L_3, /*hidden argument*/NULL);
		goto IL_0022;
	}

IL_001c:
	{
		VirtActionInvoker0::Invoke(15 /* System.Void System.Configuration.ConfigurationElement::InitializeDefault() */, __this);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Configuration.ConfigurationElement::ResetModified()
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInformation_t1446_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElement_ResetModified_m6567 (ConfigurationElement_t1416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		PropertyInformation_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2959);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	PropertyInformation_t1446 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->___modified_1 = 0;
		ElementInformation_t1414 * L_0 = ConfigurationElement_get_ElementInformation_m6535(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PropertyInformationCollection_t1447 * L_1 = ElementInformation_get_Properties_m6745(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, L_1);
		V_1 = L_2;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_001d:
		{
			Object_t * L_3 = V_1;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_3);
			V_0 = ((PropertyInformation_t1446 *)Castclass(L_4, PropertyInformation_t1446_il2cpp_TypeInfo_var));
			PropertyInformation_t1446 * L_5 = V_0;
			NullCheck(L_5);
			PropertyInformation_set_IsModified_m6786(L_5, 0, /*hidden argument*/NULL);
		}

IL_0030:
		{
			Object_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			Object_t * L_8 = V_1;
			V_2 = ((Object_t *)IsInst(L_8, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_9 = V_2;
			if (L_9)
			{
				goto IL_004b;
			}
		}

IL_004a:
		{
			IL2CPP_END_FINALLY(64)
		}

IL_004b:
		{
			Object_t * L_10 = V_2;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_10);
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0052:
	{
		return;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::SerializeElement(System.Xml.XmlWriter,System.Boolean)
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t1429_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInformation_t1446_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationElement_t1416_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElement_SerializeElement_m6568 (ConfigurationElement_t1416 * __this, XmlWriter_t1056 * ___writer, bool ___serializeCollectionKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		ConfigurationProperty_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2955);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		PropertyInformation_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2959);
		ConfigurationElement_t1416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2958);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationPropertyCollection_t1412 * V_0 = {0};
	ConfigurationProperty_t1429 * V_1 = {0};
	Object_t * V_2 = {0};
	bool V_3 = false;
	PropertyInformation_t1446 * V_4 = {0};
	Object_t * V_5 = {0};
	PropertyInformation_t1446 * V_6 = {0};
	Object_t * V_7 = {0};
	ConfigurationElement_t1416 * V_8 = {0};
	Object_t * V_9 = {0};
	Object_t * V_10 = {0};
	Object_t * V_11 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B30_0 = 0;
	{
		XmlWriter_t1056 * L_0 = ___writer;
		VirtActionInvoker1< XmlWriter_t1056 * >::Invoke(13 /* System.Void System.Configuration.ConfigurationElement::PreSerialize(System.Xml.XmlWriter) */, __this, L_0);
		bool L_1 = ___serializeCollectionKey;
		if (!L_1)
		{
			goto IL_0079;
		}
	}
	{
		ConfigurationPropertyCollection_t1412 * L_2 = ConfigurationElement_GetKeyProperties_m6545(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		ConfigurationPropertyCollection_t1412 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_3);
		V_2 = L_4;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0020:
		{
			Object_t * L_5 = V_2;
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_5);
			V_1 = ((ConfigurationProperty_t1429 *)Castclass(L_6, ConfigurationProperty_t1429_il2cpp_TypeInfo_var));
			XmlWriter_t1056 * L_7 = ___writer;
			ConfigurationProperty_t1429 * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = ConfigurationProperty_get_Name_m6670(L_8, /*hidden argument*/NULL);
			ConfigurationProperty_t1429 * L_10 = V_1;
			ConfigurationProperty_t1429 * L_11 = V_1;
			NullCheck(L_11);
			String_t* L_12 = ConfigurationProperty_get_Name_m6670(L_11, /*hidden argument*/NULL);
			Object_t * L_13 = ConfigurationElement_get_Item_m6549(__this, L_12, /*hidden argument*/NULL);
			NullCheck(L_10);
			String_t* L_14 = ConfigurationProperty_ConvertToString_m6674(L_10, L_13, /*hidden argument*/NULL);
			NullCheck(L_7);
			XmlWriter_WriteAttributeString_m5034(L_7, L_9, L_14, /*hidden argument*/NULL);
		}

IL_004a:
		{
			Object_t * L_15 = V_2;
			NullCheck(L_15);
			bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0020;
			}
		}

IL_0055:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_005a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		{
			Object_t * L_17 = V_2;
			V_9 = ((Object_t *)IsInst(L_17, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_18 = V_9;
			if (L_18)
			{
				goto IL_0067;
			}
		}

IL_0066:
		{
			IL2CPP_END_FINALLY(90)
		}

IL_0067:
		{
			Object_t * L_19 = V_9;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_19);
			IL2CPP_END_FINALLY(90)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_006f:
	{
		ConfigurationPropertyCollection_t1412 * L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Configuration.ConfigurationPropertyCollection::get_Count() */, L_20);
		return ((((int32_t)L_21) > ((int32_t)0))? 1 : 0);
	}

IL_0079:
	{
		V_3 = 0;
		ElementInformation_t1414 * L_22 = ConfigurationElement_get_ElementInformation_m6535(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		PropertyInformationCollection_t1447 * L_23 = ElementInformation_get_Properties_m6745(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, L_23);
		V_5 = L_24;
	}

IL_008d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00eb;
		}

IL_0092:
		{
			Object_t * L_25 = V_5;
			NullCheck(L_25);
			Object_t * L_26 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_25);
			V_4 = ((PropertyInformation_t1446 *)Castclass(L_26, PropertyInformation_t1446_il2cpp_TypeInfo_var));
			PropertyInformation_t1446 * L_27 = V_4;
			NullCheck(L_27);
			bool L_28 = PropertyInformation_get_IsElement_m6793(L_27, /*hidden argument*/NULL);
			if (L_28)
			{
				goto IL_00b8;
			}
		}

IL_00ac:
		{
			PropertyInformation_t1446 * L_29 = V_4;
			NullCheck(L_29);
			int32_t L_30 = PropertyInformation_get_ValueOrigin_m6794(L_29, /*hidden argument*/NULL);
			if (L_30)
			{
				goto IL_00bd;
			}
		}

IL_00b8:
		{
			goto IL_00eb;
		}

IL_00bd:
		{
			PropertyInformation_t1446 * L_31 = V_4;
			NullCheck(L_31);
			Object_t * L_32 = PropertyInformation_get_Value_m6790(L_31, /*hidden argument*/NULL);
			PropertyInformation_t1446 * L_33 = V_4;
			NullCheck(L_33);
			Object_t * L_34 = PropertyInformation_get_DefaultValue_m6783(L_33, /*hidden argument*/NULL);
			bool L_35 = Object_Equals_m6884(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/NULL);
			if (L_35)
			{
				goto IL_00eb;
			}
		}

IL_00d5:
		{
			XmlWriter_t1056 * L_36 = ___writer;
			PropertyInformation_t1446 * L_37 = V_4;
			NullCheck(L_37);
			String_t* L_38 = PropertyInformation_get_Name_m6788(L_37, /*hidden argument*/NULL);
			PropertyInformation_t1446 * L_39 = V_4;
			NullCheck(L_39);
			String_t* L_40 = PropertyInformation_GetStringValue_m6795(L_39, /*hidden argument*/NULL);
			NullCheck(L_36);
			XmlWriter_WriteAttributeString_m5034(L_36, L_38, L_40, /*hidden argument*/NULL);
			V_3 = 1;
		}

IL_00eb:
		{
			Object_t * L_41 = V_5;
			NullCheck(L_41);
			bool L_42 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_41);
			if (L_42)
			{
				goto IL_0092;
			}
		}

IL_00f7:
		{
			IL2CPP_LEAVE(0x112, FINALLY_00fc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_00fc;
	}

FINALLY_00fc:
	{ // begin finally (depth: 1)
		{
			Object_t * L_43 = V_5;
			V_10 = ((Object_t *)IsInst(L_43, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_44 = V_10;
			if (L_44)
			{
				goto IL_010a;
			}
		}

IL_0109:
		{
			IL2CPP_END_FINALLY(252)
		}

IL_010a:
		{
			Object_t * L_45 = V_10;
			NullCheck(L_45);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_45);
			IL2CPP_END_FINALLY(252)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(252)
	{
		IL2CPP_JUMP_TBL(0x112, IL_0112)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0112:
	{
		ElementInformation_t1414 * L_46 = ConfigurationElement_get_ElementInformation_m6535(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		PropertyInformationCollection_t1447 * L_47 = ElementInformation_get_Properties_m6745(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		Object_t * L_48 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, L_47);
		V_7 = L_48;
	}

IL_0124:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0176;
		}

IL_0129:
		{
			Object_t * L_49 = V_7;
			NullCheck(L_49);
			Object_t * L_50 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_49);
			V_6 = ((PropertyInformation_t1446 *)Castclass(L_50, PropertyInformation_t1446_il2cpp_TypeInfo_var));
			PropertyInformation_t1446 * L_51 = V_6;
			NullCheck(L_51);
			bool L_52 = PropertyInformation_get_IsElement_m6793(L_51, /*hidden argument*/NULL);
			if (L_52)
			{
				goto IL_0148;
			}
		}

IL_0143:
		{
			goto IL_0176;
		}

IL_0148:
		{
			PropertyInformation_t1446 * L_53 = V_6;
			NullCheck(L_53);
			Object_t * L_54 = PropertyInformation_get_Value_m6790(L_53, /*hidden argument*/NULL);
			V_8 = ((ConfigurationElement_t1416 *)Castclass(L_54, ConfigurationElement_t1416_il2cpp_TypeInfo_var));
			ConfigurationElement_t1416 * L_55 = V_8;
			if (!L_55)
			{
				goto IL_0176;
			}
		}

IL_015d:
		{
			ConfigurationElement_t1416 * L_56 = V_8;
			XmlWriter_t1056 * L_57 = ___writer;
			PropertyInformation_t1446 * L_58 = V_6;
			NullCheck(L_58);
			String_t* L_59 = PropertyInformation_get_Name_m6788(L_58, /*hidden argument*/NULL);
			NullCheck(L_56);
			bool L_60 = (bool)VirtFuncInvoker2< bool, XmlWriter_t1056 *, String_t* >::Invoke(22 /* System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String) */, L_56, L_57, L_59);
			if (L_60)
			{
				goto IL_0174;
			}
		}

IL_0171:
		{
			bool L_61 = V_3;
			G_B30_0 = ((int32_t)(L_61));
			goto IL_0175;
		}

IL_0174:
		{
			G_B30_0 = 1;
		}

IL_0175:
		{
			V_3 = G_B30_0;
		}

IL_0176:
		{
			Object_t * L_62 = V_7;
			NullCheck(L_62);
			bool L_63 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_62);
			if (L_63)
			{
				goto IL_0129;
			}
		}

IL_0182:
		{
			IL2CPP_LEAVE(0x19D, FINALLY_0187);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0187;
	}

FINALLY_0187:
	{ // begin finally (depth: 1)
		{
			Object_t * L_64 = V_7;
			V_11 = ((Object_t *)IsInst(L_64, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_65 = V_11;
			if (L_65)
			{
				goto IL_0195;
			}
		}

IL_0194:
		{
			IL2CPP_END_FINALLY(391)
		}

IL_0195:
		{
			Object_t * L_66 = V_11;
			NullCheck(L_66);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_66);
			IL2CPP_END_FINALLY(391)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(391)
	{
		IL2CPP_JUMP_TBL(0x19D, IL_019d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_019d:
	{
		bool L_67 = V_3;
		return L_67;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElement_SerializeToXmlElement_m6569 (ConfigurationElement_t1416 * __this, XmlWriter_t1056 * ___writer, String_t* ___elementName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Configuration.ConfigurationElement::HasValues() */, __this);
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
		String_t* L_1 = ___elementName;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_2 = ___elementName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_4 = String_op_Inequality_m1484(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		XmlWriter_t1056 * L_5 = ___writer;
		String_t* L_6 = ___elementName;
		NullCheck(L_5);
		XmlWriter_WriteStartElement_m6887(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002a:
	{
		XmlWriter_t1056 * L_7 = ___writer;
		bool L_8 = (bool)VirtFuncInvoker2< bool, XmlWriter_t1056 *, bool >::Invoke(21 /* System.Boolean System.Configuration.ConfigurationElement::SerializeElement(System.Xml.XmlWriter,System.Boolean) */, __this, L_7, 0);
		V_0 = L_8;
		String_t* L_9 = ___elementName;
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_10 = ___elementName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_12 = String_op_Inequality_m1484(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		XmlWriter_t1056 * L_13 = ___writer;
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_13);
	}

IL_004f:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern TypeInfo* ConfigurationException_t1420_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInformation_t1446_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationElement_t1416_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElement_Unmerge_m6570 (ConfigurationElement_t1416 * __this, ConfigurationElement_t1416 * ___source, ConfigurationElement_t1416 * ___parent, int32_t ___updateMode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationException_t1420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2951);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		PropertyInformation_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2959);
		ConfigurationElement_t1416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2958);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	PropertyInformation_t1446 * V_0 = {0};
	Object_t * V_1 = {0};
	PropertyInformation_t1446 * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	ConfigurationElement_t1416 * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ConfigurationElement_t1416 * L_0 = ___parent;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		ConfigurationElement_t1416 * L_1 = ___source;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m1416(L_1, /*hidden argument*/NULL);
		ConfigurationElement_t1416 * L_3 = ___parent;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1416(L_3, /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_4)))
		{
			goto IL_0022;
		}
	}
	{
		ConfigurationException_t1420 * L_5 = (ConfigurationException_t1420 *)il2cpp_codegen_object_new (ConfigurationException_t1420_il2cpp_TypeInfo_var);
		ConfigurationException__ctor_m6886(L_5, (String_t*) &_stringLiteral1503, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0022:
	{
		ConfigurationElement_t1416 * L_6 = ___source;
		NullCheck(L_6);
		ElementInformation_t1414 * L_7 = ConfigurationElement_get_ElementInformation_m6535(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		PropertyInformationCollection_t1447 * L_8 = ElementInformation_get_Properties_m6745(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, L_8);
		V_1 = L_9;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			goto IL_011b;
		}

IL_0038:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_10);
			V_0 = ((PropertyInformation_t1446 *)Castclass(L_11, PropertyInformation_t1446_il2cpp_TypeInfo_var));
			PropertyInformation_t1446 * L_12 = V_0;
			NullCheck(L_12);
			int32_t L_13 = PropertyInformation_get_ValueOrigin_m6794(L_12, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_0054;
			}
		}

IL_004f:
		{
			goto IL_011b;
		}

IL_0054:
		{
			ElementInformation_t1414 * L_14 = ConfigurationElement_get_ElementInformation_m6535(__this, /*hidden argument*/NULL);
			NullCheck(L_14);
			PropertyInformationCollection_t1447 * L_15 = ElementInformation_get_Properties_m6745(L_14, /*hidden argument*/NULL);
			PropertyInformation_t1446 * L_16 = V_0;
			NullCheck(L_16);
			String_t* L_17 = PropertyInformation_get_Name_m6788(L_16, /*hidden argument*/NULL);
			NullCheck(L_15);
			PropertyInformation_t1446 * L_18 = PropertyInformationCollection_get_Item_m6802(L_15, L_17, /*hidden argument*/NULL);
			V_2 = L_18;
			PropertyInformation_t1446 * L_19 = V_0;
			NullCheck(L_19);
			Object_t * L_20 = PropertyInformation_get_Value_m6790(L_19, /*hidden argument*/NULL);
			V_3 = L_20;
			ConfigurationElement_t1416 * L_21 = ___parent;
			if (!L_21)
			{
				goto IL_0089;
			}
		}

IL_0078:
		{
			ConfigurationElement_t1416 * L_22 = ___parent;
			PropertyInformation_t1446 * L_23 = V_0;
			NullCheck(L_23);
			String_t* L_24 = PropertyInformation_get_Name_m6788(L_23, /*hidden argument*/NULL);
			NullCheck(L_22);
			bool L_25 = ConfigurationElement_HasValue_m6571(L_22, L_24, /*hidden argument*/NULL);
			if (L_25)
			{
				goto IL_0095;
			}
		}

IL_0089:
		{
			PropertyInformation_t1446 * L_26 = V_2;
			Object_t * L_27 = V_3;
			NullCheck(L_26);
			PropertyInformation_set_Value_m6791(L_26, L_27, /*hidden argument*/NULL);
			goto IL_011b;
		}

IL_0095:
		{
			Object_t * L_28 = V_3;
			if (!L_28)
			{
				goto IL_011b;
			}
		}

IL_009b:
		{
			ConfigurationElement_t1416 * L_29 = ___parent;
			PropertyInformation_t1446 * L_30 = V_0;
			NullCheck(L_30);
			String_t* L_31 = PropertyInformation_get_Name_m6788(L_30, /*hidden argument*/NULL);
			NullCheck(L_29);
			Object_t * L_32 = ConfigurationElement_get_Item_m6549(L_29, L_31, /*hidden argument*/NULL);
			V_4 = L_32;
			PropertyInformation_t1446 * L_33 = V_0;
			NullCheck(L_33);
			bool L_34 = PropertyInformation_get_IsElement_m6793(L_33, /*hidden argument*/NULL);
			if (!L_34)
			{
				goto IL_00ee;
			}
		}

IL_00b4:
		{
			Object_t * L_35 = V_4;
			if (!L_35)
			{
				goto IL_00e2;
			}
		}

IL_00bb:
		{
			PropertyInformation_t1446 * L_36 = V_2;
			NullCheck(L_36);
			Object_t * L_37 = PropertyInformation_get_Value_m6790(L_36, /*hidden argument*/NULL);
			V_5 = ((ConfigurationElement_t1416 *)Castclass(L_37, ConfigurationElement_t1416_il2cpp_TypeInfo_var));
			ConfigurationElement_t1416 * L_38 = V_5;
			Object_t * L_39 = V_3;
			Object_t * L_40 = V_4;
			int32_t L_41 = ___updateMode;
			NullCheck(L_38);
			VirtActionInvoker3< ConfigurationElement_t1416 *, ConfigurationElement_t1416 *, int32_t >::Invoke(23 /* System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode) */, L_38, ((ConfigurationElement_t1416 *)Castclass(L_39, ConfigurationElement_t1416_il2cpp_TypeInfo_var)), ((ConfigurationElement_t1416 *)Castclass(L_40, ConfigurationElement_t1416_il2cpp_TypeInfo_var)), L_41);
			goto IL_00e9;
		}

IL_00e2:
		{
			PropertyInformation_t1446 * L_42 = V_2;
			Object_t * L_43 = V_3;
			NullCheck(L_42);
			PropertyInformation_set_Value_m6791(L_42, L_43, /*hidden argument*/NULL);
		}

IL_00e9:
		{
			goto IL_011b;
		}

IL_00ee:
		{
			Object_t * L_44 = V_3;
			Object_t * L_45 = V_4;
			bool L_46 = Object_Equals_m6884(NULL /*static, unused*/, L_44, L_45, /*hidden argument*/NULL);
			if (!L_46)
			{
				goto IL_0114;
			}
		}

IL_00fb:
		{
			int32_t L_47 = ___updateMode;
			if ((((int32_t)L_47) == ((int32_t)2)))
			{
				goto IL_0114;
			}
		}

IL_0102:
		{
			int32_t L_48 = ___updateMode;
			if (L_48)
			{
				goto IL_011b;
			}
		}

IL_0108:
		{
			PropertyInformation_t1446 * L_49 = V_0;
			NullCheck(L_49);
			int32_t L_50 = PropertyInformation_get_ValueOrigin_m6794(L_49, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_50) == ((uint32_t)2))))
			{
				goto IL_011b;
			}
		}

IL_0114:
		{
			PropertyInformation_t1446 * L_51 = V_2;
			Object_t * L_52 = V_3;
			NullCheck(L_51);
			PropertyInformation_set_Value_m6791(L_51, L_52, /*hidden argument*/NULL);
		}

IL_011b:
		{
			Object_t * L_53 = V_1;
			NullCheck(L_53);
			bool L_54 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_53);
			if (L_54)
			{
				goto IL_0038;
			}
		}

IL_0126:
		{
			IL2CPP_LEAVE(0x140, FINALLY_012b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_012b;
	}

FINALLY_012b:
	{ // begin finally (depth: 1)
		{
			Object_t * L_55 = V_1;
			V_6 = ((Object_t *)IsInst(L_55, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_56 = V_6;
			if (L_56)
			{
				goto IL_0138;
			}
		}

IL_0137:
		{
			IL2CPP_END_FINALLY(299)
		}

IL_0138:
		{
			Object_t * L_57 = V_6;
			NullCheck(L_57);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_57);
			IL2CPP_END_FINALLY(299)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(299)
	{
		IL2CPP_JUMP_TBL(0x140, IL_0140)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0140:
	{
		return;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::HasValue(System.String)
extern "C" bool ConfigurationElement_HasValue_m6571 (ConfigurationElement_t1416 * __this, String_t* ___propName, const MethodInfo* method)
{
	PropertyInformation_t1446 * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		ElementInformation_t1414 * L_0 = ConfigurationElement_get_ElementInformation_m6535(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PropertyInformationCollection_t1447 * L_1 = ElementInformation_get_Properties_m6745(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___propName;
		NullCheck(L_1);
		PropertyInformation_t1446 * L_3 = PropertyInformationCollection_get_Item_m6802(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		PropertyInformation_t1446 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		PropertyInformation_t1446 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = PropertyInformation_get_ValueOrigin_m6794(L_5, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		return G_B3_0;
	}
}
// System.Void System.Configuration.ConfigurationElement::ValidateValue(System.Configuration.ConfigurationProperty,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationException_t1420_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElement_ValidateValue_m6572 (ConfigurationElement_t1416 * __this, ConfigurationProperty_t1429 * ___p, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ConfigurationException_t1420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2951);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationValidatorBase_t1428 * V_0 = {0};
	{
		ConfigurationProperty_t1429 * L_0 = ___p;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ConfigurationProperty_t1429 * L_1 = ___p;
		NullCheck(L_1);
		ConfigurationValidatorBase_t1428 * L_2 = ConfigurationProperty_get_Validator_m6672(L_1, /*hidden argument*/NULL);
		ConfigurationValidatorBase_t1428 * L_3 = L_2;
		V_0 = L_3;
		if (L_3)
		{
			goto IL_0014;
		}
	}

IL_0013:
	{
		return;
	}

IL_0014:
	{
		ConfigurationValidatorBase_t1428 * L_4 = V_0;
		ConfigurationProperty_t1429 * L_5 = ___p;
		NullCheck(L_5);
		Type_t * L_6 = ConfigurationProperty_get_Type_m6671(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(4 /* System.Boolean System.Configuration.ConfigurationValidatorBase::CanValidate(System.Type) */, L_4, L_6);
		if (L_7)
		{
			goto IL_003b;
		}
	}
	{
		ConfigurationProperty_t1429 * L_8 = ___p;
		NullCheck(L_8);
		Type_t * L_9 = ConfigurationProperty_get_Type_m6671(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral1504, L_9, /*hidden argument*/NULL);
		ConfigurationException_t1420 * L_11 = (ConfigurationException_t1420 *)il2cpp_codegen_object_new (ConfigurationException_t1420_il2cpp_TypeInfo_var);
		ConfigurationException__ctor_m6886(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_003b:
	{
		ConfigurationValidatorBase_t1428 * L_12 = V_0;
		ConfigurationProperty_t1429 * L_13 = ___p;
		String_t* L_14 = ___value;
		NullCheck(L_13);
		Object_t * L_15 = ConfigurationProperty_ConvertFromString_m6673(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< Object_t * >::Invoke(5 /* System.Void System.Configuration.ConfigurationValidatorBase::Validate(System.Object) */, L_12, L_15);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Configuration.ConfigurationPropertyAttribute
#include "System_Configuration_System_Configuration_ConfigurationPrope_1.h"
// System.Configuration.ConfigurationValidatorAttribute
#include "System_Configuration_System_Configuration_ConfigurationValid.h"
// System.ComponentModel.TypeConverterAttribute
#include "System_System_ComponentModel_TypeConverterAttribute.h"
// System.ComponentModel.TypeConverter
#include "System_System_ComponentModel_TypeConverter.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Configuration.ConfigurationPropertyOptions
#include "System_Configuration_System_Configuration_ConfigurationPrope_0.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Configuration.ConfigurationPropertyAttribute
#include "System_Configuration_System_Configuration_ConfigurationPrope_1MethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Configuration.ConfigurationValidatorAttribute
#include "System_Configuration_System_Configuration_ConfigurationValidMethodDeclarations.h"
// System.ComponentModel.TypeConverterAttribute
#include "System_System_ComponentModel_TypeConverterAttributeMethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"


// System.Void System.Configuration.ElementMap::.ctor(System.Type)
extern const Il2CppType* ConfigurationCollectionAttribute_t1410_0_0_0_var;
extern const Il2CppType* ConfigurationPropertyAttribute_t1430_0_0_0_var;
extern const Il2CppType* ConfigurationValidatorAttribute_t1442_0_0_0_var;
extern const Il2CppType* TypeConverterAttribute_t1173_0_0_0_var;
extern TypeInfo* ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationCollectionAttribute_t1410_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationPropertyAttribute_t1430_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationValidatorAttribute_t1442_il2cpp_TypeInfo_var;
extern TypeInfo* TypeConverterAttribute_t1173_il2cpp_TypeInfo_var;
extern TypeInfo* TypeConverter_t1427_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t1429_il2cpp_TypeInfo_var;
extern "C" void ElementMap__ctor_m6573 (ElementMap_t1411 * __this, Type_t * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationCollectionAttribute_t1410_0_0_0_var = il2cpp_codegen_type_from_index(2960);
		ConfigurationPropertyAttribute_t1430_0_0_0_var = il2cpp_codegen_type_from_index(2961);
		ConfigurationValidatorAttribute_t1442_0_0_0_var = il2cpp_codegen_type_from_index(2962);
		TypeConverterAttribute_t1173_0_0_0_var = il2cpp_codegen_type_from_index(2091);
		ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2954);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		ConfigurationCollectionAttribute_t1410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2960);
		ConfigurationPropertyAttribute_t1430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2961);
		ConfigurationValidatorAttribute_t1442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2962);
		TypeConverterAttribute_t1173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2091);
		TypeConverter_t1427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2963);
		ConfigurationProperty_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2955);
		s_Il2CppMethodIntialized = true;
	}
	PropertyInfoU5BU5D_t721* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	PropertyInfoU5BU5D_t721* V_2 = {0};
	int32_t V_3 = 0;
	ConfigurationPropertyAttribute_t1430 * V_4 = {0};
	String_t* V_5 = {0};
	ConfigurationValidatorAttribute_t1442 * V_6 = {0};
	ConfigurationValidatorBase_t1428 * V_7 = {0};
	TypeConverterAttribute_t1173 * V_8 = {0};
	TypeConverter_t1427 * V_9 = {0};
	ConfigurationProperty_t1429 * V_10 = {0};
	String_t* G_B6_0 = {0};
	ConfigurationValidatorBase_t1428 * G_B9_0 = {0};
	TypeConverter_t1427 * G_B12_0 = {0};
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		ConfigurationPropertyCollection_t1412 * L_0 = (ConfigurationPropertyCollection_t1412 *)il2cpp_codegen_object_new (ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection__ctor_m6685(L_0, /*hidden argument*/NULL);
		__this->___properties_1 = L_0;
		Type_t * L_1 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ConfigurationCollectionAttribute_t1410_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t478 * L_3 = Attribute_GetCustomAttribute_m6888(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		__this->___collectionAttribute_2 = ((ConfigurationCollectionAttribute_t1410 *)IsInst(L_3, ConfigurationCollectionAttribute_t1410_il2cpp_TypeInfo_var));
		Type_t * L_4 = ___t;
		NullCheck(L_4);
		PropertyInfoU5BU5D_t721* L_5 = (PropertyInfoU5BU5D_t721*)VirtFuncInvoker1< PropertyInfoU5BU5D_t721*, int32_t >::Invoke(56 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_4, ((int32_t)60));
		V_0 = L_5;
		PropertyInfoU5BU5D_t721* L_6 = V_0;
		V_2 = L_6;
		V_3 = 0;
		goto IL_013d;
	}

IL_003e:
	{
		PropertyInfoU5BU5D_t721* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_1 = (*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_7, L_9));
		PropertyInfo_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ConfigurationPropertyAttribute_t1430_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t478 * L_12 = Attribute_GetCustomAttribute_m6888(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		V_4 = ((ConfigurationPropertyAttribute_t1430 *)IsInst(L_12, ConfigurationPropertyAttribute_t1430_il2cpp_TypeInfo_var));
		ConfigurationPropertyAttribute_t1430 * L_13 = V_4;
		if (L_13)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0139;
	}

IL_0065:
	{
		ConfigurationPropertyAttribute_t1430 * L_14 = V_4;
		NullCheck(L_14);
		String_t* L_15 = ConfigurationPropertyAttribute_get_Name_m6684(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_007d;
		}
	}
	{
		ConfigurationPropertyAttribute_t1430 * L_16 = V_4;
		NullCheck(L_16);
		String_t* L_17 = ConfigurationPropertyAttribute_get_Name_m6684(L_16, /*hidden argument*/NULL);
		G_B6_0 = L_17;
		goto IL_0083;
	}

IL_007d:
	{
		PropertyInfo_t * L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_18);
		G_B6_0 = L_19;
	}

IL_0083:
	{
		V_5 = G_B6_0;
		PropertyInfo_t * L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ConfigurationValidatorAttribute_t1442_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t478 * L_22 = Attribute_GetCustomAttribute_m6888(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		V_6 = ((ConfigurationValidatorAttribute_t1442 *)IsInst(L_22, ConfigurationValidatorAttribute_t1442_il2cpp_TypeInfo_var));
		ConfigurationValidatorAttribute_t1442 * L_23 = V_6;
		if (!L_23)
		{
			goto IL_00af;
		}
	}
	{
		ConfigurationValidatorAttribute_t1442 * L_24 = V_6;
		NullCheck(L_24);
		ConfigurationValidatorBase_t1428 * L_25 = (ConfigurationValidatorBase_t1428 *)VirtFuncInvoker0< ConfigurationValidatorBase_t1428 * >::Invoke(6 /* System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationValidatorAttribute::get_ValidatorInstance() */, L_24);
		G_B9_0 = L_25;
		goto IL_00b0;
	}

IL_00af:
	{
		G_B9_0 = ((ConfigurationValidatorBase_t1428 *)(NULL));
	}

IL_00b0:
	{
		V_7 = G_B9_0;
		PropertyInfo_t * L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(TypeConverterAttribute_t1173_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t478 * L_28 = Attribute_GetCustomAttribute_m6888(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		V_8 = ((TypeConverterAttribute_t1173 *)Castclass(L_28, TypeConverterAttribute_t1173_il2cpp_TypeInfo_var));
		TypeConverterAttribute_t1173 * L_29 = V_8;
		if (!L_29)
		{
			goto IL_00ec;
		}
	}
	{
		TypeConverterAttribute_t1173 * L_30 = V_8;
		NullCheck(L_30);
		String_t* L_31 = TypeConverterAttribute_get_ConverterTypeName_m6889(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetType_m5093(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		Object_t * L_33 = Activator_CreateInstance_m5006(NULL /*static, unused*/, L_32, 1, /*hidden argument*/NULL);
		G_B12_0 = ((TypeConverter_t1427 *)Castclass(L_33, TypeConverter_t1427_il2cpp_TypeInfo_var));
		goto IL_00ed;
	}

IL_00ec:
	{
		G_B12_0 = ((TypeConverter_t1427 *)(NULL));
	}

IL_00ed:
	{
		V_9 = G_B12_0;
		String_t* L_34 = V_5;
		PropertyInfo_t * L_35 = V_1;
		NullCheck(L_35);
		Type_t * L_36 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_35);
		ConfigurationPropertyAttribute_t1430 * L_37 = V_4;
		NullCheck(L_37);
		Object_t * L_38 = ConfigurationPropertyAttribute_get_DefaultValue_m6680(L_37, /*hidden argument*/NULL);
		TypeConverter_t1427 * L_39 = V_9;
		ConfigurationValidatorBase_t1428 * L_40 = V_7;
		ConfigurationPropertyAttribute_t1430 * L_41 = V_4;
		NullCheck(L_41);
		int32_t L_42 = ConfigurationPropertyAttribute_get_Options_m6682(L_41, /*hidden argument*/NULL);
		ConfigurationProperty_t1429 * L_43 = (ConfigurationProperty_t1429 *)il2cpp_codegen_object_new (ConfigurationProperty_t1429_il2cpp_TypeInfo_var);
		ConfigurationProperty__ctor_m6663(L_43, L_34, L_36, L_38, L_39, L_40, L_42, /*hidden argument*/NULL);
		V_10 = L_43;
		ConfigurationProperty_t1429 * L_44 = V_10;
		PropertyInfo_t * L_45 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ConfigurationCollectionAttribute_t1410_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t478 * L_47 = Attribute_GetCustomAttribute_m6888(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		ConfigurationProperty_set_CollectionAttribute_m6677(L_44, ((ConfigurationCollectionAttribute_t1410 *)IsInst(L_47, ConfigurationCollectionAttribute_t1410_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		ConfigurationPropertyCollection_t1412 * L_48 = (__this->___properties_1);
		ConfigurationProperty_t1429 * L_49 = V_10;
		NullCheck(L_48);
		ConfigurationPropertyCollection_Add_m6689(L_48, L_49, /*hidden argument*/NULL);
	}

IL_0139:
	{
		int32_t L_50 = V_3;
		V_3 = ((int32_t)((int32_t)L_50+(int32_t)1));
	}

IL_013d:
	{
		int32_t L_51 = V_3;
		PropertyInfoU5BU5D_t721* L_52 = V_2;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)(((int32_t)(((Array_t *)L_52)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		return;
	}
}
// System.Void System.Configuration.ElementMap::.cctor()
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* ElementMap_t1411_il2cpp_TypeInfo_var;
extern "C" void ElementMap__cctor_m6574 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		ElementMap_t1411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2957);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t915 * L_0 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable_t915 * L_1 = Hashtable_Synchronized_m6890(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		((ElementMap_t1411_StaticFields*)ElementMap_t1411_il2cpp_TypeInfo_var->static_fields)->___elementMaps_0 = L_1;
		return;
	}
}
// System.Configuration.ElementMap System.Configuration.ElementMap::GetMap(System.Type)
extern TypeInfo* ElementMap_t1411_il2cpp_TypeInfo_var;
extern "C" ElementMap_t1411 * ElementMap_GetMap_m6575 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ElementMap_t1411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2957);
		s_Il2CppMethodIntialized = true;
	}
	ElementMap_t1411 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(ElementMap_t1411_il2cpp_TypeInfo_var);
		Hashtable_t915 * L_0 = ((ElementMap_t1411_StaticFields*)ElementMap_t1411_il2cpp_TypeInfo_var->static_fields)->___elementMaps_0;
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_0 = ((ElementMap_t1411 *)IsInst(L_2, ElementMap_t1411_il2cpp_TypeInfo_var));
		ElementMap_t1411 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		ElementMap_t1411 * L_4 = V_0;
		return L_4;
	}

IL_0019:
	{
		Type_t * L_5 = ___t;
		ElementMap_t1411 * L_6 = (ElementMap_t1411 *)il2cpp_codegen_object_new (ElementMap_t1411_il2cpp_TypeInfo_var);
		ElementMap__ctor_m6573(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(ElementMap_t1411_il2cpp_TypeInfo_var);
		Hashtable_t915 * L_7 = ((ElementMap_t1411_StaticFields*)ElementMap_t1411_il2cpp_TypeInfo_var->static_fields)->___elementMaps_0;
		Type_t * L_8 = ___t;
		ElementMap_t1411 * L_9 = V_0;
		NullCheck(L_7);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_7, L_8, L_9);
		ElementMap_t1411 * L_10 = V_0;
		return L_10;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ElementMap::get_Properties()
extern "C" ConfigurationPropertyCollection_t1412 * ElementMap_get_Properties_m6576 (ElementMap_t1411 * __this, const MethodInfo* method)
{
	{
		ConfigurationPropertyCollection_t1412 * L_0 = (__this->___properties_1);
		return L_0;
	}
}
// System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement
#include "System_Configuration_System_Configuration_ConfigurationEleme_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement
#include "System_Configuration_System_Configuration_ConfigurationEleme_1MethodDeclarations.h"

// System.Configuration.ConfigurationElementCollection
#include "System_Configuration_System_Configuration_ConfigurationEleme_2MethodDeclarations.h"


// System.Void System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement::.ctor(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElementCollection)
extern TypeInfo* ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t1429_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void ConfigurationRemoveElement__ctor_m6577 (ConfigurationRemoveElement_t1417 * __this, ConfigurationElement_t1416 * ___origElement, ConfigurationElementCollection_t1413 * ___origCollection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2954);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		ConfigurationProperty_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2955);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationProperty_t1429 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ConfigurationPropertyCollection_t1412 * L_0 = (ConfigurationPropertyCollection_t1412 *)il2cpp_codegen_object_new (ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection__ctor_m6685(L_0, /*hidden argument*/NULL);
		__this->___properties_13 = L_0;
		ConfigurationElement__ctor_m6531(__this, /*hidden argument*/NULL);
		ConfigurationElement_t1416 * L_1 = ___origElement;
		__this->____origElement_14 = L_1;
		ConfigurationElementCollection_t1413 * L_2 = ___origCollection;
		__this->____origCollection_15 = L_2;
		ConfigurationElement_t1416 * L_3 = ___origElement;
		NullCheck(L_3);
		ConfigurationPropertyCollection_t1412 * L_4 = (ConfigurationPropertyCollection_t1412 *)VirtFuncInvoker0< ConfigurationPropertyCollection_t1412 * >::Invoke(6 /* System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties() */, L_3);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_4);
		V_1 = L_5;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0053;
		}

IL_0030:
		{
			Object_t * L_6 = V_1;
			NullCheck(L_6);
			Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_6);
			V_0 = ((ConfigurationProperty_t1429 *)Castclass(L_7, ConfigurationProperty_t1429_il2cpp_TypeInfo_var));
			ConfigurationProperty_t1429 * L_8 = V_0;
			NullCheck(L_8);
			bool L_9 = ConfigurationProperty_get_IsKey_m6667(L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0053;
			}
		}

IL_0047:
		{
			ConfigurationPropertyCollection_t1412 * L_10 = (__this->___properties_13);
			ConfigurationProperty_t1429 * L_11 = V_0;
			NullCheck(L_10);
			ConfigurationPropertyCollection_Add_m6689(L_10, L_11, /*hidden argument*/NULL);
		}

IL_0053:
		{
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0030;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x75, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_1;
			V_2 = ((Object_t *)IsInst(L_14, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_2;
			if (L_15)
			{
				goto IL_006e;
			}
		}

IL_006d:
		{
			IL2CPP_END_FINALLY(99)
		}

IL_006e:
		{
			Object_t * L_16 = V_2;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(99)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x75, IL_0075)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0075:
	{
		return;
	}
}
// System.Object System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement::get_KeyValue()
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t1429_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationRemoveElement_get_KeyValue_m6578 (ConfigurationRemoveElement_t1417 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		ConfigurationProperty_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2955);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationProperty_t1429 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ConfigurationPropertyCollection_t1412 * L_0 = (ConfigurationPropertyCollection_t1412 *)VirtFuncInvoker0< ConfigurationPropertyCollection_t1412 * >::Invoke(6 /* System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement::get_Properties() */, __this);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0011:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_2);
			V_0 = ((ConfigurationProperty_t1429 *)Castclass(L_3, ConfigurationProperty_t1429_il2cpp_TypeInfo_var));
			ConfigurationElement_t1416 * L_4 = (__this->____origElement_14);
			ConfigurationProperty_t1429 * L_5 = V_0;
			ConfigurationProperty_t1429 * L_6 = V_0;
			Object_t * L_7 = ConfigurationElement_get_Item_m6547(__this, L_6, /*hidden argument*/NULL);
			NullCheck(L_4);
			ConfigurationElement_set_Item_m6548(L_4, L_5, L_7, /*hidden argument*/NULL);
		}

IL_0030:
		{
			Object_t * L_8 = V_1;
			NullCheck(L_8);
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0011;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			Object_t * L_10 = V_1;
			V_2 = ((Object_t *)IsInst(L_10, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_11 = V_2;
			if (L_11)
			{
				goto IL_004b;
			}
		}

IL_004a:
		{
			IL2CPP_END_FINALLY(64)
		}

IL_004b:
		{
			Object_t * L_12 = V_2;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_12);
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0052:
	{
		ConfigurationElementCollection_t1413 * L_13 = (__this->____origCollection_15);
		ConfigurationElement_t1416 * L_14 = (__this->____origElement_14);
		NullCheck(L_13);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, ConfigurationElement_t1416 * >::Invoke(34 /* System.Object System.Configuration.ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement) */, L_13, L_14);
		return L_15;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement::get_Properties()
extern "C" ConfigurationPropertyCollection_t1412 * ConfigurationRemoveElement_get_Properties_m6579 (ConfigurationRemoveElement_t1417 * __this, const MethodInfo* method)
{
	{
		ConfigurationPropertyCollection_t1412 * L_0 = (__this->___properties_13);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ConfigurationElementCollection::.ctor()
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElementCollection__ctor_m6580 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
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
		__this->___list_13 = L_0;
		__this->___addElementName_20 = (String_t*) &_stringLiteral1481;
		__this->___clearElementName_21 = (String_t*) &_stringLiteral1482;
		__this->___removeElementName_22 = (String_t*) &_stringLiteral1483;
		ConfigurationElement__ctor_m6531(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ConfigurationElementCollection_System_Collections_ICollection_CopyTo_m6581 (ConfigurationElementCollection_t1413 * __this, Array_t * ___arr, int32_t ___index, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___list_13);
		Array_t * L_1 = ___arr;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(37 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::InitFromProperty(System.Configuration.PropertyInformation)
extern const Il2CppType* ConfigurationCollectionAttribute_t1410_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationCollectionAttribute_t1410_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElementCollection_InitFromProperty_m6582 (ConfigurationElementCollection_t1413 * __this, PropertyInformation_t1446 * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationCollectionAttribute_t1410_0_0_0_var = il2cpp_codegen_type_from_index(2960);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		ConfigurationCollectionAttribute_t1410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2960);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationCollectionAttribute_t1410 * V_0 = {0};
	{
		PropertyInformation_t1446 * L_0 = ___propertyInfo;
		NullCheck(L_0);
		ConfigurationProperty_t1429 * L_1 = PropertyInformation_get_Property_m6797(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ConfigurationCollectionAttribute_t1410 * L_2 = ConfigurationProperty_get_CollectionAttribute_m6676(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConfigurationCollectionAttribute_t1410 * L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		PropertyInformation_t1446 * L_4 = ___propertyInfo;
		NullCheck(L_4);
		Type_t * L_5 = PropertyInformation_get_Type_m6789(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ConfigurationCollectionAttribute_t1410_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t478 * L_7 = Attribute_GetCustomAttribute_m6888(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_0 = ((ConfigurationCollectionAttribute_t1410 *)IsInst(L_7, ConfigurationCollectionAttribute_t1410_il2cpp_TypeInfo_var));
	}

IL_002d:
	{
		ConfigurationCollectionAttribute_t1410 * L_8 = V_0;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		ConfigurationCollectionAttribute_t1410 * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = ConfigurationCollectionAttribute_get_AddItemName_m6527(L_9, /*hidden argument*/NULL);
		__this->___addElementName_20 = L_10;
		ConfigurationCollectionAttribute_t1410 * L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = ConfigurationCollectionAttribute_get_ClearItemsName_m6528(L_11, /*hidden argument*/NULL);
		__this->___clearElementName_21 = L_12;
		ConfigurationCollectionAttribute_t1410 * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = ConfigurationCollectionAttribute_get_RemoveItemName_m6529(L_13, /*hidden argument*/NULL);
		__this->___removeElementName_22 = L_14;
	}

IL_0057:
	{
		PropertyInformation_t1446 * L_15 = ___propertyInfo;
		ConfigurationElement_InitFromProperty_m6534(__this, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType()
extern "C" int32_t ConfigurationElementCollection_get_CollectionType_m6583 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsBasic()
extern "C" bool ConfigurationElementCollection_get_IsBasic_m6584 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType() */, __this);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsAlternate()
extern "C" bool ConfigurationElementCollection_get_IsAlternate_m6585 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType() */, __this);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType() */, __this);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Int32 System.Configuration.ConfigurationElementCollection::get_Count()
extern "C" int32_t ConfigurationElementCollection_get_Count_m6586 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___list_13);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.String System.Configuration.ConfigurationElementCollection::get_ElementName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigurationElementCollection_get_ElementName_m6587 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::set_EmitClear(System.Boolean)
extern "C" void ConfigurationElementCollection_set_EmitClear_m6588 (ConfigurationElementCollection_t1413 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___emitClear_16 = L_0;
		return;
	}
}
// System.Object System.Configuration.ConfigurationElementCollection::get_SyncRoot()
extern "C" Object_t * ConfigurationElementCollection_get_SyncRoot_m6589 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::get_ThrowOnDuplicate()
extern "C" bool ConfigurationElementCollection_get_ThrowOnDuplicate_m6590 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType() */, __this);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType() */, __this);
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		return 0;
	}

IL_001a:
	{
		return 1;
	}
}
// System.String System.Configuration.ConfigurationElementCollection::get_AddElementName()
extern "C" String_t* ConfigurationElementCollection_get_AddElementName_m6591 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___addElementName_20);
		return L_0;
	}
}
// System.String System.Configuration.ConfigurationElementCollection::get_ClearElementName()
extern "C" String_t* ConfigurationElementCollection_get_ClearElementName_m6592 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___clearElementName_21);
		return L_0;
	}
}
// System.String System.Configuration.ConfigurationElementCollection::get_RemoveElementName()
extern "C" String_t* ConfigurationElementCollection_get_RemoveElementName_m6593 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___removeElementName_22);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement)
extern "C" void ConfigurationElementCollection_BaseAdd_m6594 (ConfigurationElementCollection_t1413 * __this, ConfigurationElement_t1416 * ___element, const MethodInfo* method)
{
	{
		ConfigurationElement_t1416 * L_0 = ___element;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Configuration.ConfigurationElementCollection::get_ThrowOnDuplicate() */, __this);
		ConfigurationElementCollection_BaseAdd_m6595(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement,System.Boolean)
extern TypeInfo* ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationException_t1420_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElementCollection_BaseAdd_m6595 (ConfigurationElementCollection_t1413 * __this, ConfigurationElement_t1416 * ___element, bool ___throwIfExists, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2028);
		ConfigurationException_t1420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2951);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Configuration.ConfigurationElementCollection::IsReadOnly() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ConfigurationErrorsException_t1139 * L_1 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m5115(L_1, (String_t*) &_stringLiteral1505, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		bool L_2 = ConfigurationElementCollection_get_IsAlternate_m6585(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0046;
		}
	}
	{
		ArrayList_t913 * L_3 = (__this->___list_13);
		int32_t L_4 = (__this->___inheritedLimitIndex_19);
		ConfigurationElement_t1416 * L_5 = ___element;
		NullCheck(L_3);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(32 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_3, L_4, L_5);
		int32_t L_6 = (__this->___inheritedLimitIndex_19);
		__this->___inheritedLimitIndex_19 = ((int32_t)((int32_t)L_6+(int32_t)1));
		goto IL_009d;
	}

IL_0046:
	{
		ConfigurationElement_t1416 * L_7 = ___element;
		Object_t * L_8 = (Object_t *)VirtFuncInvoker1< Object_t *, ConfigurationElement_t1416 * >::Invoke(34 /* System.Object System.Configuration.ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement) */, __this, L_7);
		int32_t L_9 = ConfigurationElementCollection_IndexOfKey_m6600(__this, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		ConfigurationElement_t1416 * L_11 = ___element;
		ArrayList_t913 * L_12 = (__this->___list_13);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_12, L_13);
		NullCheck(L_11);
		bool L_15 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Configuration.ConfigurationElement::Equals(System.Object) */, L_11, L_14);
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_0073:
	{
		bool L_16 = ___throwIfExists;
		if (!L_16)
		{
			goto IL_0084;
		}
	}
	{
		ConfigurationException_t1420 * L_17 = (ConfigurationException_t1420 *)il2cpp_codegen_object_new (ConfigurationException_t1420_il2cpp_TypeInfo_var);
		ConfigurationException__ctor_m6886(L_17, (String_t*) &_stringLiteral1506, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0084:
	{
		ArrayList_t913 * L_18 = (__this->___list_13);
		int32_t L_19 = V_0;
		NullCheck(L_18);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_18, L_19);
	}

IL_0090:
	{
		ArrayList_t913 * L_20 = (__this->___list_13);
		ConfigurationElement_t1416 * L_21 = ___element;
		NullCheck(L_20);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_20, L_21);
	}

IL_009d:
	{
		__this->___modified_17 = 1;
		return;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::BaseClear()
extern TypeInfo* ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElementCollection_BaseClear_m6596 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2028);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Configuration.ConfigurationElementCollection::IsReadOnly() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ConfigurationErrorsException_t1139 * L_1 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m5115(L_1, (String_t*) &_stringLiteral1505, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		ArrayList_t913 * L_2 = (__this->___list_13);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(27 /* System.Void System.Collections.ArrayList::Clear() */, L_2);
		__this->___modified_17 = 1;
		return;
	}
}
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::BaseGet(System.Int32)
extern TypeInfo* ConfigurationElement_t1416_il2cpp_TypeInfo_var;
extern "C" ConfigurationElement_t1416 * ConfigurationElementCollection_BaseGet_m6597 (ConfigurationElementCollection_t1413 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t1416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2958);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t913 * L_0 = (__this->___list_13);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return ((ConfigurationElement_t1416 *)Castclass(L_2, ConfigurationElement_t1416_il2cpp_TypeInfo_var));
	}
}
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::BaseGet(System.Object)
extern TypeInfo* ConfigurationElement_t1416_il2cpp_TypeInfo_var;
extern "C" ConfigurationElement_t1416 * ConfigurationElementCollection_BaseGet_m6598 (ConfigurationElementCollection_t1413 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t1416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2958);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = ConfigurationElementCollection_IndexOfKey_m6600(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0021;
		}
	}
	{
		ArrayList_t913 * L_3 = (__this->___list_13);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		return ((ConfigurationElement_t1416 *)Castclass(L_5, ConfigurationElement_t1416_il2cpp_TypeInfo_var));
	}

IL_0021:
	{
		return (ConfigurationElement_t1416 *)NULL;
	}
}
// System.Int32 System.Configuration.ConfigurationElementCollection::BaseIndexOf(System.Configuration.ConfigurationElement)
extern "C" int32_t ConfigurationElementCollection_BaseIndexOf_m6599 (ConfigurationElementCollection_t1413 * __this, ConfigurationElement_t1416 * ___element, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___list_13);
		ConfigurationElement_t1416 * L_1 = ___element;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::IndexOf(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Int32 System.Configuration.ConfigurationElementCollection::IndexOfKey(System.Object)
extern TypeInfo* ConfigurationElement_t1416_il2cpp_TypeInfo_var;
extern "C" int32_t ConfigurationElementCollection_IndexOfKey_m6600 (ConfigurationElementCollection_t1413 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t1416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2958);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0030;
	}

IL_0007:
	{
		ArrayList_t913 * L_0 = (__this->___list_13);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, ConfigurationElement_t1416 * >::Invoke(34 /* System.Object System.Configuration.ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement) */, __this, ((ConfigurationElement_t1416 *)Castclass(L_2, ConfigurationElement_t1416_il2cpp_TypeInfo_var)));
		Object_t * L_4 = ___key;
		bool L_5 = ConfigurationElementCollection_CompareKeys_m6603(__this, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_002c:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_8 = V_0;
		ArrayList_t913 * L_9 = (__this->___list_13);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::BaseRemove(System.Object)
extern TypeInfo* ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElementCollection_BaseRemove_m6601 (ConfigurationElementCollection_t1413 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2028);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Configuration.ConfigurationElementCollection::IsReadOnly() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ConfigurationErrorsException_t1139 * L_1 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m5115(L_1, (String_t*) &_stringLiteral1505, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t * L_2 = ___key;
		int32_t L_3 = ConfigurationElementCollection_IndexOfKey_m6600(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = V_0;
		ConfigurationElementCollection_BaseRemoveAt_m6602(__this, L_5, /*hidden argument*/NULL);
		__this->___modified_17 = 1;
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::BaseRemoveAt(System.Int32)
extern TypeInfo* ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationElement_t1416_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElementCollection_BaseRemoveAt_m6602 (ConfigurationElementCollection_t1413 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2028);
		ConfigurationElement_t1416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2958);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationElement_t1416 * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Configuration.ConfigurationElementCollection::IsReadOnly() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ConfigurationErrorsException_t1139 * L_1 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m5115(L_1, (String_t*) &_stringLiteral1505, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		ArrayList_t913 * L_2 = (__this->___list_13);
		int32_t L_3 = ___index;
		NullCheck(L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		V_0 = ((ConfigurationElement_t1416 *)Castclass(L_4, ConfigurationElement_t1416_il2cpp_TypeInfo_var));
		ConfigurationElement_t1416 * L_5 = V_0;
		bool L_6 = (bool)VirtFuncInvoker1< bool, ConfigurationElement_t1416 * >::Invoke(36 /* System.Boolean System.Configuration.ConfigurationElementCollection::IsElementRemovable(System.Configuration.ConfigurationElement) */, __this, L_5);
		if (L_6)
		{
			goto IL_003f;
		}
	}
	{
		ConfigurationErrorsException_t1139 * L_7 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m5115(L_7, (String_t*) &_stringLiteral1507, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003f:
	{
		ArrayList_t913 * L_8 = (__this->___inherited_15);
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		ArrayList_t913 * L_9 = (__this->___inherited_15);
		ConfigurationElement_t1416 * L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		ConfigurationErrorsException_t1139 * L_12 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m5115(L_12, (String_t*) &_stringLiteral1508, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0066:
	{
		ArrayList_t913 * L_13 = (__this->___list_13);
		int32_t L_14 = ___index;
		NullCheck(L_13);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_13, L_14);
		__this->___modified_17 = 1;
		return;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::CompareKeys(System.Object,System.Object)
extern TypeInfo* IComparer_t1418_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElementCollection_CompareKeys_m6603 (ConfigurationElementCollection_t1413 * __this, Object_t * ___key1, Object_t * ___key2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparer_t1418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2964);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___comparer_18);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Object_t * L_1 = (__this->___comparer_18);
		Object_t * L_2 = ___key1;
		Object_t * L_3 = ___key2;
		NullCheck(L_1);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker2< int32_t, Object_t *, Object_t * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1418_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		Object_t * L_5 = ___key1;
		Object_t * L_6 = ___key2;
		bool L_7 = Object_Equals_m6884(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement()
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement(System.String)
extern "C" ConfigurationElement_t1416 * ConfigurationElementCollection_CreateNewElement_m6604 (ConfigurationElementCollection_t1413 * __this, String_t* ___elementName, const MethodInfo* method)
{
	{
		ConfigurationElement_t1416 * L_0 = (ConfigurationElement_t1416 *)VirtFuncInvoker0< ConfigurationElement_t1416 * >::Invoke(32 /* System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement() */, __this);
		return L_0;
	}
}
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElementInternal(System.String)
extern "C" ConfigurationElement_t1416 * ConfigurationElementCollection_CreateNewElementInternal_m6605 (ConfigurationElementCollection_t1413 * __this, String_t* ___elementName, const MethodInfo* method)
{
	ConfigurationElement_t1416 * V_0 = {0};
	{
		String_t* L_0 = ___elementName;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ConfigurationElement_t1416 * L_1 = (ConfigurationElement_t1416 *)VirtFuncInvoker0< ConfigurationElement_t1416 * >::Invoke(32 /* System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement() */, __this);
		V_0 = L_1;
		goto IL_001a;
	}

IL_0012:
	{
		String_t* L_2 = ___elementName;
		ConfigurationElement_t1416 * L_3 = (ConfigurationElement_t1416 *)VirtFuncInvoker1< ConfigurationElement_t1416 *, String_t* >::Invoke(33 /* System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement(System.String) */, __this, L_2);
		V_0 = L_3;
	}

IL_001a:
	{
		ConfigurationElement_t1416 * L_4 = V_0;
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(5 /* System.Void System.Configuration.ConfigurationElement::Init() */, L_4);
		ConfigurationElement_t1416 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::Equals(System.Object)
extern TypeInfo* ConfigurationElementCollection_t1413_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElementCollection_Equals_m6606 (ConfigurationElementCollection_t1413 * __this, Object_t * ___compareTo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElementCollection_t1413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2956);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationElementCollection_t1413 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___compareTo;
		V_0 = ((ConfigurationElementCollection_t1413 *)IsInst(L_0, ConfigurationElementCollection_t1413_il2cpp_TypeInfo_var));
		ConfigurationElementCollection_t1413 * L_1 = V_0;
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
		Type_t * L_2 = Object_GetType_m1416(__this, /*hidden argument*/NULL);
		ConfigurationElementCollection_t1413 * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1416(L_3, /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_4)))
		{
			goto IL_0022;
		}
	}
	{
		return 0;
	}

IL_0022:
	{
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 System.Configuration.ConfigurationElementCollection::get_Count() */, __this);
		ConfigurationElementCollection_t1413 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 System.Configuration.ConfigurationElementCollection::get_Count() */, L_6);
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0035;
		}
	}
	{
		return 0;
	}

IL_0035:
	{
		V_1 = 0;
		goto IL_005a;
	}

IL_003c:
	{
		int32_t L_8 = V_1;
		ConfigurationElement_t1416 * L_9 = ConfigurationElementCollection_BaseGet_m6597(__this, L_8, /*hidden argument*/NULL);
		ConfigurationElementCollection_t1413 * L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		ConfigurationElement_t1416 * L_12 = ConfigurationElementCollection_BaseGet_m6597(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_13 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Configuration.ConfigurationElement::Equals(System.Object) */, L_9, L_12);
		if (L_13)
		{
			goto IL_0056;
		}
	}
	{
		return 0;
	}

IL_0056:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_005a:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 System.Configuration.ConfigurationElementCollection::get_Count() */, __this);
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_003c;
		}
	}
	{
		return 1;
	}
}
// System.Object System.Configuration.ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
// System.Int32 System.Configuration.ConfigurationElementCollection::GetHashCode()
extern "C" int32_t ConfigurationElementCollection_GetHashCode_m6607 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_001c;
	}

IL_0009:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		ConfigurationElement_t1416 * L_2 = ConfigurationElementCollection_BaseGet_m6597(__this, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Configuration.ConfigurationElement::GetHashCode() */, L_2);
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_3));
		int32_t L_4 = V_1;
		V_1 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_001c:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 System.Configuration.ConfigurationElementCollection::get_Count() */, __this);
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Collections.IEnumerator System.Configuration.ConfigurationElementCollection::GetEnumerator()
extern "C" Object_t * ConfigurationElementCollection_GetEnumerator_m6608 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___list_13);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::IsElementName(System.String)
extern "C" bool ConfigurationElementCollection_IsElementName_m6609 (ConfigurationElementCollection_t1413 * __this, String_t* ___elementName, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::IsElementRemovable(System.Configuration.ConfigurationElement)
extern "C" bool ConfigurationElementCollection_IsElementRemovable_m6610 (ConfigurationElementCollection_t1413 * __this, ConfigurationElement_t1416 * ___element, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Configuration.ConfigurationElementCollection::IsReadOnly() */, __this);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::IsModified()
extern "C" bool ConfigurationElementCollection_IsModified_m6611 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___modified_17);
		return L_0;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::IsReadOnly()
extern "C" bool ConfigurationElementCollection_IsReadOnly_m6612 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	{
		bool L_0 = ConfigurationElement_IsReadOnly_m6565(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::HasValues()
extern "C" bool ConfigurationElementCollection_HasValues_m6613 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___list_13);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return ((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::Reset(System.Configuration.ConfigurationElement)
extern TypeInfo* ConfigurationElementCollection_t1413_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElementCollection_Reset_m6614 (ConfigurationElementCollection_t1413 * __this, ConfigurationElement_t1416 * ___parentElement, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElementCollection_t1413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2956);
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	ConfigurationElementCollection_t1413 * V_1 = {0};
	int32_t V_2 = 0;
	ConfigurationElement_t1416 * V_3 = {0};
	ConfigurationElement_t1416 * V_4 = {0};
	{
		bool L_0 = ConfigurationElementCollection_get_IsBasic_m6584(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		ConfigurationElement_t1416 * L_1 = ___parentElement;
		V_1 = ((ConfigurationElementCollection_t1413 *)Castclass(L_1, ConfigurationElementCollection_t1413_il2cpp_TypeInfo_var));
		V_2 = 0;
		goto IL_0064;
	}

IL_0015:
	{
		ConfigurationElementCollection_t1413 * L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		ConfigurationElement_t1416 * L_4 = ConfigurationElementCollection_BaseGet_m6597(L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		ConfigurationElement_t1416 * L_5 = ConfigurationElementCollection_CreateNewElementInternal_m6605(__this, (String_t*)NULL, /*hidden argument*/NULL);
		V_4 = L_5;
		ConfigurationElement_t1416 * L_6 = V_4;
		ConfigurationElement_t1416 * L_7 = V_3;
		NullCheck(L_6);
		VirtActionInvoker1< ConfigurationElement_t1416 * >::Invoke(19 /* System.Void System.Configuration.ConfigurationElement::Reset(System.Configuration.ConfigurationElement) */, L_6, L_7);
		ConfigurationElement_t1416 * L_8 = V_4;
		VirtActionInvoker1< ConfigurationElement_t1416 * >::Invoke(31 /* System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement) */, __this, L_8);
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		ArrayList_t913 * L_10 = (__this->___inherited_15);
		if (L_10)
		{
			goto IL_0052;
		}
	}
	{
		ArrayList_t913 * L_11 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_11, /*hidden argument*/NULL);
		__this->___inherited_15 = L_11;
	}

IL_0052:
	{
		ArrayList_t913 * L_12 = (__this->___inherited_15);
		ConfigurationElement_t1416 * L_13 = V_4;
		NullCheck(L_12);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_12, L_13);
	}

IL_0060:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0064:
	{
		int32_t L_15 = V_2;
		ConfigurationElementCollection_t1413 * L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 System.Configuration.ConfigurationElementCollection::get_Count() */, L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0015;
		}
	}
	{
		bool L_18 = ConfigurationElementCollection_get_IsAlternate_m6585(__this, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0087;
		}
	}
	{
		__this->___inheritedLimitIndex_19 = 0;
		goto IL_0095;
	}

IL_0087:
	{
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 System.Configuration.ConfigurationElementCollection::get_Count() */, __this);
		__this->___inheritedLimitIndex_19 = ((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_0095:
	{
		__this->___modified_17 = 0;
		return;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::ResetModified()
extern "C" void ConfigurationElementCollection_ResetModified_m6615 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	{
		__this->___modified_17 = 0;
		return;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::SetReadOnly()
extern "C" void ConfigurationElementCollection_SetReadOnly_m6616 (ConfigurationElementCollection_t1413 * __this, const MethodInfo* method)
{
	{
		ConfigurationElement_SetReadOnly_m6564(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::SerializeElement(System.Xml.XmlWriter,System.Boolean)
extern TypeInfo* ConfigurationElement_t1416_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElementCollection_SerializeElement_m6617 (ConfigurationElementCollection_t1413 * __this, XmlWriter_t1056 * ___writer, bool ___serializeCollectionKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t1416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2958);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ConfigurationElement_t1416 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ConfigurationElement_t1416 * V_5 = {0};
	int32_t G_B8_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B32_0 = 0;
	{
		bool L_0 = ___serializeCollectionKey;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		XmlWriter_t1056 * L_1 = ___writer;
		bool L_2 = ___serializeCollectionKey;
		bool L_3 = ConfigurationElement_SerializeElement_m6568(__this, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_000f:
	{
		V_0 = 0;
		bool L_4 = ConfigurationElementCollection_get_IsBasic_m6584(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0092;
		}
	}
	{
		V_1 = 0;
		goto IL_007c;
	}

IL_0023:
	{
		ArrayList_t913 * L_5 = (__this->___list_13);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_5, L_6);
		V_2 = ((ConfigurationElement_t1416 *)Castclass(L_7, ConfigurationElement_t1416_il2cpp_TypeInfo_var));
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(29 /* System.String System.Configuration.ConfigurationElementCollection::get_ElementName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_10 = String_op_Inequality_m1484(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		ConfigurationElement_t1416 * L_11 = V_2;
		XmlWriter_t1056 * L_12 = ___writer;
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(29 /* System.String System.Configuration.ConfigurationElementCollection::get_ElementName() */, __this);
		NullCheck(L_11);
		bool L_14 = (bool)VirtFuncInvoker2< bool, XmlWriter_t1056 *, String_t* >::Invoke(22 /* System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String) */, L_11, L_12, L_13);
		if (L_14)
		{
			goto IL_005f;
		}
	}
	{
		bool L_15 = V_0;
		G_B8_0 = ((int32_t)(L_15));
		goto IL_0060;
	}

IL_005f:
	{
		G_B8_0 = 1;
	}

IL_0060:
	{
		V_0 = G_B8_0;
		goto IL_0078;
	}

IL_0066:
	{
		ConfigurationElement_t1416 * L_16 = V_2;
		XmlWriter_t1056 * L_17 = ___writer;
		NullCheck(L_16);
		bool L_18 = (bool)VirtFuncInvoker2< bool, XmlWriter_t1056 *, bool >::Invoke(21 /* System.Boolean System.Configuration.ConfigurationElement::SerializeElement(System.Xml.XmlWriter,System.Boolean) */, L_16, L_17, 0);
		if (L_18)
		{
			goto IL_0076;
		}
	}
	{
		bool L_19 = V_0;
		G_B12_0 = ((int32_t)(L_19));
		goto IL_0077;
	}

IL_0076:
	{
		G_B12_0 = 1;
	}

IL_0077:
	{
		V_0 = G_B12_0;
	}

IL_0078:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_007c:
	{
		int32_t L_21 = V_1;
		ArrayList_t913 * L_22 = (__this->___list_13);
		NullCheck(L_22);
		int32_t L_23 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_22);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0175;
	}

IL_0092:
	{
		bool L_24 = (__this->___emitClear_16);
		if (!L_24)
		{
			goto IL_00b0;
		}
	}
	{
		XmlWriter_t1056 * L_25 = ___writer;
		String_t* L_26 = (__this->___clearElementName_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_25);
		XmlWriter_WriteElementString_m5031(L_25, L_26, L_27, /*hidden argument*/NULL);
		V_0 = 1;
	}

IL_00b0:
	{
		ArrayList_t913 * L_28 = (__this->___removed_14);
		if (!L_28)
		{
			goto IL_011a;
		}
	}
	{
		V_3 = 0;
		goto IL_00f1;
	}

IL_00c2:
	{
		XmlWriter_t1056 * L_29 = ___writer;
		String_t* L_30 = (__this->___removeElementName_22);
		NullCheck(L_29);
		XmlWriter_WriteStartElement_m6887(L_29, L_30, /*hidden argument*/NULL);
		ArrayList_t913 * L_31 = (__this->___removed_14);
		int32_t L_32 = V_3;
		NullCheck(L_31);
		Object_t * L_33 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_31, L_32);
		XmlWriter_t1056 * L_34 = ___writer;
		NullCheck(((ConfigurationElement_t1416 *)Castclass(L_33, ConfigurationElement_t1416_il2cpp_TypeInfo_var)));
		VirtFuncInvoker2< bool, XmlWriter_t1056 *, bool >::Invoke(21 /* System.Boolean System.Configuration.ConfigurationElement::SerializeElement(System.Xml.XmlWriter,System.Boolean) */, ((ConfigurationElement_t1416 *)Castclass(L_33, ConfigurationElement_t1416_il2cpp_TypeInfo_var)), L_34, 1);
		XmlWriter_t1056 * L_35 = ___writer;
		NullCheck(L_35);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_35);
		int32_t L_36 = V_3;
		V_3 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00f1:
	{
		int32_t L_37 = V_3;
		ArrayList_t913 * L_38 = (__this->___removed_14);
		NullCheck(L_38);
		int32_t L_39 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_38);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_00c2;
		}
	}
	{
		bool L_40 = V_0;
		if (L_40)
		{
			goto IL_0118;
		}
	}
	{
		ArrayList_t913 * L_41 = (__this->___removed_14);
		NullCheck(L_41);
		int32_t L_42 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_41);
		G_B25_0 = ((((int32_t)L_42) > ((int32_t)0))? 1 : 0);
		goto IL_0119;
	}

IL_0118:
	{
		G_B25_0 = 1;
	}

IL_0119:
	{
		V_0 = G_B25_0;
	}

IL_011a:
	{
		V_4 = 0;
		goto IL_014b;
	}

IL_0122:
	{
		ArrayList_t913 * L_43 = (__this->___list_13);
		int32_t L_44 = V_4;
		NullCheck(L_43);
		Object_t * L_45 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_43, L_44);
		V_5 = ((ConfigurationElement_t1416 *)Castclass(L_45, ConfigurationElement_t1416_il2cpp_TypeInfo_var));
		ConfigurationElement_t1416 * L_46 = V_5;
		XmlWriter_t1056 * L_47 = ___writer;
		String_t* L_48 = (__this->___addElementName_20);
		NullCheck(L_46);
		VirtFuncInvoker2< bool, XmlWriter_t1056 *, String_t* >::Invoke(22 /* System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String) */, L_46, L_47, L_48);
		int32_t L_49 = V_4;
		V_4 = ((int32_t)((int32_t)L_49+(int32_t)1));
	}

IL_014b:
	{
		int32_t L_50 = V_4;
		ArrayList_t913 * L_51 = (__this->___list_13);
		NullCheck(L_51);
		int32_t L_52 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_51);
		if ((((int32_t)L_50) < ((int32_t)L_52)))
		{
			goto IL_0122;
		}
	}
	{
		bool L_53 = V_0;
		if (L_53)
		{
			goto IL_0173;
		}
	}
	{
		ArrayList_t913 * L_54 = (__this->___list_13);
		NullCheck(L_54);
		int32_t L_55 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_54);
		G_B32_0 = ((((int32_t)L_55) > ((int32_t)0))? 1 : 0);
		goto IL_0174;
	}

IL_0173:
	{
		G_B32_0 = 1;
	}

IL_0174:
	{
		V_0 = G_B32_0;
	}

IL_0175:
	{
		bool L_56 = V_0;
		return L_56;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationRemoveElement_t1417_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElementCollection_OnDeserializeUnrecognizedElement_m6618 (ConfigurationElementCollection_t1413 * __this, String_t* ___elementName, XmlReader_t843 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2028);
		ConfigurationRemoveElement_t1417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2965);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationElement_t1416 * V_0 = {0};
	ConfigurationElement_t1416 * V_1 = {0};
	ConfigurationRemoveElement_t1417 * V_2 = {0};
	ConfigurationElement_t1416 * V_3 = {0};
	{
		bool L_0 = ConfigurationElementCollection_get_IsBasic_m6584(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005d;
		}
	}
	{
		V_0 = (ConfigurationElement_t1416 *)NULL;
		String_t* L_1 = ___elementName;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(29 /* System.String System.Configuration.ConfigurationElementCollection::get_ElementName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1295(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		ConfigurationElement_t1416 * L_4 = ConfigurationElementCollection_CreateNewElementInternal_m6605(__this, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0026:
	{
		String_t* L_5 = ___elementName;
		bool L_6 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(35 /* System.Boolean System.Configuration.ConfigurationElementCollection::IsElementName(System.String) */, __this, L_5);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_7 = ___elementName;
		ConfigurationElement_t1416 * L_8 = ConfigurationElementCollection_CreateNewElementInternal_m6605(__this, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_003a:
	{
		ConfigurationElement_t1416 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		ConfigurationElement_t1416 * L_10 = V_0;
		XmlReader_t843 * L_11 = ___reader;
		NullCheck(L_10);
		VirtActionInvoker2< XmlReader_t843 *, bool >::Invoke(9 /* System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean) */, L_10, L_11, 0);
		ConfigurationElement_t1416 * L_12 = V_0;
		VirtActionInvoker1< ConfigurationElement_t1416 * >::Invoke(31 /* System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement) */, __this, L_12);
		__this->___modified_17 = 0;
		return 1;
	}

IL_0058:
	{
		goto IL_012d;
	}

IL_005d:
	{
		String_t* L_13 = ___elementName;
		String_t* L_14 = (__this->___clearElementName_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m1295(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00be;
		}
	}
	{
		XmlReader_t843 * L_16 = ___reader;
		NullCheck(L_16);
		VirtFuncInvoker0< int32_t >::Invoke(38 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_16);
		XmlReader_t843 * L_17 = ___reader;
		NullCheck(L_17);
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_17);
		if (!L_18)
		{
			goto IL_009b;
		}
	}
	{
		XmlReader_t843 * L_19 = ___reader;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_19);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral1493, L_20, (String_t*) &_stringLiteral1494, /*hidden argument*/NULL);
		ConfigurationErrorsException_t1139 * L_22 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m5115(L_22, L_21, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_009b:
	{
		XmlReader_t843 * L_23 = ___reader;
		NullCheck(L_23);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_23);
		XmlReader_t843 * L_24 = ___reader;
		NullCheck(L_24);
		VirtActionInvoker0::Invoke(54 /* System.Void System.Xml.XmlReader::Skip() */, L_24);
		ConfigurationElementCollection_BaseClear_m6596(__this, /*hidden argument*/NULL);
		__this->___emitClear_16 = 1;
		__this->___modified_17 = 0;
		return 1;
	}

IL_00be:
	{
		String_t* L_25 = ___elementName;
		String_t* L_26 = (__this->___removeElementName_22);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_27 = String_op_Equality_m1295(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		ConfigurationElement_t1416 * L_28 = ConfigurationElementCollection_CreateNewElementInternal_m6605(__this, (String_t*)NULL, /*hidden argument*/NULL);
		V_1 = L_28;
		ConfigurationElement_t1416 * L_29 = V_1;
		ConfigurationRemoveElement_t1417 * L_30 = (ConfigurationRemoveElement_t1417 *)il2cpp_codegen_object_new (ConfigurationRemoveElement_t1417_il2cpp_TypeInfo_var);
		ConfigurationRemoveElement__ctor_m6577(L_30, L_29, __this, /*hidden argument*/NULL);
		V_2 = L_30;
		ConfigurationRemoveElement_t1417 * L_31 = V_2;
		XmlReader_t843 * L_32 = ___reader;
		NullCheck(L_31);
		VirtActionInvoker2< XmlReader_t843 *, bool >::Invoke(9 /* System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean) */, L_31, L_32, 1);
		ConfigurationRemoveElement_t1417 * L_33 = V_2;
		NullCheck(L_33);
		Object_t * L_34 = ConfigurationRemoveElement_get_KeyValue_m6578(L_33, /*hidden argument*/NULL);
		ConfigurationElementCollection_BaseRemove_m6601(__this, L_34, /*hidden argument*/NULL);
		__this->___modified_17 = 0;
		return 1;
	}

IL_00fc:
	{
		String_t* L_35 = ___elementName;
		String_t* L_36 = (__this->___addElementName_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_op_Equality_m1295(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_012d;
		}
	}
	{
		ConfigurationElement_t1416 * L_38 = ConfigurationElementCollection_CreateNewElementInternal_m6605(__this, (String_t*)NULL, /*hidden argument*/NULL);
		V_3 = L_38;
		ConfigurationElement_t1416 * L_39 = V_3;
		XmlReader_t843 * L_40 = ___reader;
		NullCheck(L_39);
		VirtActionInvoker2< XmlReader_t843 *, bool >::Invoke(9 /* System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean) */, L_39, L_40, 0);
		ConfigurationElement_t1416 * L_41 = V_3;
		VirtActionInvoker1< ConfigurationElement_t1416 * >::Invoke(31 /* System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement) */, __this, L_41);
		__this->___modified_17 = 0;
		return 1;
	}

IL_012d:
	{
		return 0;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern TypeInfo* ConfigurationElementCollection_t1413_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElementCollection_Unmerge_m6619 (ConfigurationElementCollection_t1413 * __this, ConfigurationElement_t1416 * ___sourceElement, ConfigurationElement_t1416 * ___parentElement, int32_t ___updateMode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElementCollection_t1413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2956);
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationElementCollection_t1413 * V_0 = {0};
	ConfigurationElementCollection_t1413 * V_1 = {0};
	int32_t V_2 = 0;
	ConfigurationElement_t1416 * V_3 = {0};
	Object_t * V_4 = {0};
	ConfigurationElement_t1416 * V_5 = {0};
	ConfigurationElement_t1416 * V_6 = {0};
	ConfigurationElement_t1416 * V_7 = {0};
	int32_t V_8 = 0;
	ConfigurationElement_t1416 * V_9 = {0};
	Object_t * V_10 = {0};
	ConfigurationElement_t1416 * G_B4_0 = {0};
	{
		ConfigurationElement_t1416 * L_0 = ___sourceElement;
		V_0 = ((ConfigurationElementCollection_t1413 *)Castclass(L_0, ConfigurationElementCollection_t1413_il2cpp_TypeInfo_var));
		ConfigurationElement_t1416 * L_1 = ___parentElement;
		V_1 = ((ConfigurationElementCollection_t1413 *)Castclass(L_1, ConfigurationElementCollection_t1413_il2cpp_TypeInfo_var));
		V_2 = 0;
		goto IL_0096;
	}

IL_0015:
	{
		ConfigurationElementCollection_t1413 * L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		ConfigurationElement_t1416 * L_4 = ConfigurationElementCollection_BaseGet_m6597(L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		ConfigurationElementCollection_t1413 * L_5 = V_0;
		ConfigurationElement_t1416 * L_6 = V_3;
		NullCheck(L_5);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, ConfigurationElement_t1416 * >::Invoke(34 /* System.Object System.Configuration.ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement) */, L_5, L_6);
		V_4 = L_7;
		ConfigurationElementCollection_t1413 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		ConfigurationElementCollection_t1413 * L_9 = V_1;
		Object_t * L_10 = V_4;
		NullCheck(L_9);
		ConfigurationElement_t1416 * L_11 = ConfigurationElementCollection_BaseGet_m6598(L_9, L_10, /*hidden argument*/NULL);
		G_B4_0 = L_11;
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = ((ConfigurationElement_t1416 *)(NULL));
	}

IL_003a:
	{
		V_5 = G_B4_0;
		ConfigurationElement_t1416 * L_12 = V_5;
		if (!L_12)
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_13 = ___updateMode;
		if ((((int32_t)L_13) == ((int32_t)2)))
		{
			goto IL_0077;
		}
	}
	{
		ConfigurationElement_t1416 * L_14 = ConfigurationElementCollection_CreateNewElementInternal_m6605(__this, (String_t*)NULL, /*hidden argument*/NULL);
		V_6 = L_14;
		ConfigurationElement_t1416 * L_15 = V_6;
		ConfigurationElement_t1416 * L_16 = V_3;
		ConfigurationElement_t1416 * L_17 = V_5;
		NullCheck(L_15);
		VirtActionInvoker3< ConfigurationElement_t1416 *, ConfigurationElement_t1416 *, int32_t >::Invoke(23 /* System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode) */, L_15, L_16, L_17, 1);
		ConfigurationElement_t1416 * L_18 = V_6;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Configuration.ConfigurationElement::HasValues() */, L_18);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		ConfigurationElement_t1416 * L_20 = V_6;
		VirtActionInvoker1< ConfigurationElement_t1416 * >::Invoke(31 /* System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement) */, __this, L_20);
	}

IL_0072:
	{
		goto IL_0092;
	}

IL_0077:
	{
		ConfigurationElement_t1416 * L_21 = ConfigurationElementCollection_CreateNewElementInternal_m6605(__this, (String_t*)NULL, /*hidden argument*/NULL);
		V_7 = L_21;
		ConfigurationElement_t1416 * L_22 = V_7;
		ConfigurationElement_t1416 * L_23 = V_3;
		NullCheck(L_22);
		VirtActionInvoker3< ConfigurationElement_t1416 *, ConfigurationElement_t1416 *, int32_t >::Invoke(23 /* System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode) */, L_22, L_23, (ConfigurationElement_t1416 *)NULL, 2);
		ConfigurationElement_t1416 * L_24 = V_7;
		VirtActionInvoker1< ConfigurationElement_t1416 * >::Invoke(31 /* System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement) */, __this, L_24);
	}

IL_0092:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_0096:
	{
		int32_t L_26 = V_2;
		ConfigurationElementCollection_t1413 * L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 System.Configuration.ConfigurationElementCollection::get_Count() */, L_27);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_29 = ___updateMode;
		if ((!(((uint32_t)L_29) == ((uint32_t)2))))
		{
			goto IL_00b5;
		}
	}
	{
		ConfigurationElementCollection_set_EmitClear_m6588(__this, 1, /*hidden argument*/NULL);
		goto IL_011c;
	}

IL_00b5:
	{
		ConfigurationElementCollection_t1413 * L_30 = V_1;
		if (!L_30)
		{
			goto IL_011c;
		}
	}
	{
		V_8 = 0;
		goto IL_010f;
	}

IL_00c3:
	{
		ConfigurationElementCollection_t1413 * L_31 = V_1;
		int32_t L_32 = V_8;
		NullCheck(L_31);
		ConfigurationElement_t1416 * L_33 = ConfigurationElementCollection_BaseGet_m6597(L_31, L_32, /*hidden argument*/NULL);
		V_9 = L_33;
		ConfigurationElementCollection_t1413 * L_34 = V_1;
		ConfigurationElement_t1416 * L_35 = V_9;
		NullCheck(L_34);
		Object_t * L_36 = (Object_t *)VirtFuncInvoker1< Object_t *, ConfigurationElement_t1416 * >::Invoke(34 /* System.Object System.Configuration.ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement) */, L_34, L_35);
		V_10 = L_36;
		ConfigurationElementCollection_t1413 * L_37 = V_0;
		Object_t * L_38 = V_10;
		NullCheck(L_37);
		int32_t L_39 = ConfigurationElementCollection_IndexOfKey_m6600(L_37, L_38, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)(-1)))))
		{
			goto IL_0109;
		}
	}
	{
		ArrayList_t913 * L_40 = (__this->___removed_14);
		if (L_40)
		{
			goto IL_00fb;
		}
	}
	{
		ArrayList_t913 * L_41 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_41, /*hidden argument*/NULL);
		__this->___removed_14 = L_41;
	}

IL_00fb:
	{
		ArrayList_t913 * L_42 = (__this->___removed_14);
		ConfigurationElement_t1416 * L_43 = V_9;
		NullCheck(L_42);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_42, L_43);
	}

IL_0109:
	{
		int32_t L_44 = V_8;
		V_8 = ((int32_t)((int32_t)L_44+(int32_t)1));
	}

IL_010f:
	{
		int32_t L_45 = V_8;
		ConfigurationElementCollection_t1413 * L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 System.Configuration.ConfigurationElementCollection::get_Count() */, L_46);
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_00c3;
		}
	}

IL_011c:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationElementCollectionType
#include "System_Configuration_System_Configuration_ConfigurationElemeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationErrorsException::.ctor()
extern "C" void ConfigurationErrorsException__ctor_m6620 (ConfigurationErrorsException_t1139 * __this, const MethodInfo* method)
{
	{
		ConfigurationException__ctor_m6891(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String)
extern "C" void ConfigurationErrorsException__ctor_m5115 (ConfigurationErrorsException_t1139 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		ConfigurationException__ctor_m6886(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationErrorsException__ctor_m6621 (ConfigurationErrorsException_t1139 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___context;
		ConfigurationException__ctor_m6892(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_2 = ___info;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m5039(L_2, (String_t*) &_stringLiteral1512, /*hidden argument*/NULL);
		__this->___filename_13 = L_3;
		SerializationInfo_t669 * L_4 = ___info;
		NullCheck(L_4);
		int32_t L_5 = SerializationInfo_GetInt32_m5041(L_4, (String_t*) &_stringLiteral1513, /*hidden argument*/NULL);
		__this->___line_14 = L_5;
		return;
	}
}
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception)
extern "C" void ConfigurationErrorsException__ctor_m6622 (ConfigurationErrorsException_t1139 * __this, String_t* ___message, Exception_t306 * ___inner, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t306 * L_1 = ___inner;
		ConfigurationException__ctor_m6893(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlNode)
extern "C" void ConfigurationErrorsException__ctor_m6623 (ConfigurationErrorsException_t1139 * __this, String_t* ___message, XmlNode_t1124 * ___node, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		XmlNode_t1124 * L_1 = ___node;
		String_t* L_2 = ConfigurationErrorsException_GetFilename_m6630(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		XmlNode_t1124 * L_3 = ___node;
		int32_t L_4 = ConfigurationErrorsException_GetLineNumber_m6631(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		ConfigurationErrorsException__ctor_m6625(__this, L_0, (Exception_t306 *)NULL, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlReader)
extern "C" void ConfigurationErrorsException__ctor_m6624 (ConfigurationErrorsException_t1139 * __this, String_t* ___message, XmlReader_t843 * ___reader, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		XmlReader_t843 * L_1 = ___reader;
		String_t* L_2 = ConfigurationErrorsException_GetFilename_m6628(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		XmlReader_t843 * L_3 = ___reader;
		int32_t L_4 = ConfigurationErrorsException_GetLineNumber_m6629(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		ConfigurationErrorsException__ctor_m6625(__this, L_0, (Exception_t306 *)NULL, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception,System.String,System.Int32)
extern "C" void ConfigurationErrorsException__ctor_m6625 (ConfigurationErrorsException_t1139 * __this, String_t* ___message, Exception_t306 * ___inner, String_t* ___filename, int32_t ___line, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t306 * L_1 = ___inner;
		ConfigurationException__ctor_m6893(__this, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___filename;
		__this->___filename_13 = L_2;
		int32_t L_3 = ___line;
		__this->___line_14 = L_3;
		return;
	}
}
// System.String System.Configuration.ConfigurationErrorsException::get_BareMessage()
extern "C" String_t* ConfigurationErrorsException_get_BareMessage_m6626 (ConfigurationErrorsException_t1139 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = ConfigurationException_get_BareMessage_m6894(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Configuration.ConfigurationErrorsException::get_Message()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigurationErrorsException_get_Message_m6627 (ConfigurationErrorsException_t1139 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = (__this->___filename_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_2 = (__this->___line_14);
		if (!L_2)
		{
			goto IL_0064;
		}
	}
	{
		ObjectU5BU5D_t300* L_3 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 6));
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Configuration.ConfigurationErrorsException::get_BareMessage() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 0)) = (Object_t *)L_4;
		ObjectU5BU5D_t300* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral1509);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1)) = (Object_t *)(String_t*) &_stringLiteral1509;
		ObjectU5BU5D_t300* L_6 = L_5;
		String_t* L_7 = (__this->___filename_13);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t300* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral1510);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)(String_t*) &_stringLiteral1510;
		ObjectU5BU5D_t300* L_9 = L_8;
		int32_t L_10 = (__this->___line_14);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 4);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 4)) = (Object_t *)L_12;
		ObjectU5BU5D_t300* L_13 = L_9;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 5);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral409);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 5)) = (Object_t *)(String_t*) &_stringLiteral409;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m1267(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_0080;
	}

IL_0064:
	{
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Configuration.ConfigurationErrorsException::get_BareMessage() */, __this);
		String_t* L_16 = (__this->___filename_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m3275(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral1509, L_16, (String_t*) &_stringLiteral409, /*hidden argument*/NULL);
		V_0 = L_17;
	}

IL_0080:
	{
		goto IL_00cf;
	}

IL_0085:
	{
		int32_t L_18 = (__this->___line_14);
		if (!L_18)
		{
			goto IL_00c8;
		}
	}
	{
		ObjectU5BU5D_t300* L_19 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 4));
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Configuration.ConfigurationErrorsException::get_BareMessage() */, __this);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		ArrayElementTypeCheck (L_19, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 0)) = (Object_t *)L_20;
		ObjectU5BU5D_t300* L_21 = L_19;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 1);
		ArrayElementTypeCheck (L_21, (String_t*) &_stringLiteral1511);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 1)) = (Object_t *)(String_t*) &_stringLiteral1511;
		ObjectU5BU5D_t300* L_22 = L_21;
		int32_t L_23 = (__this->___line_14);
		int32_t L_24 = L_23;
		Object_t * L_25 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 2);
		ArrayElementTypeCheck (L_22, L_25);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_22, 2)) = (Object_t *)L_25;
		ObjectU5BU5D_t300* L_26 = L_22;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 3);
		ArrayElementTypeCheck (L_26, (String_t*) &_stringLiteral409);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 3)) = (Object_t *)(String_t*) &_stringLiteral409;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m1267(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		goto IL_00cf;
	}

IL_00c8:
	{
		String_t* L_28 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Configuration.ConfigurationErrorsException::get_BareMessage() */, __this);
		V_0 = L_28;
	}

IL_00cf:
	{
		String_t* L_29 = V_0;
		return L_29;
	}
}
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlReader)
extern TypeInfo* IConfigErrorInfo_t1470_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigurationErrorsException_GetFilename_m6628 (Object_t * __this /* static, unused */, XmlReader_t843 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConfigErrorInfo_t1470_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2966);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B5_0 = {0};
	{
		XmlReader_t843 * L_0 = ___reader;
		if (!((Object_t *)IsInst(L_0, IConfigErrorInfo_t1470_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		XmlReader_t843 * L_1 = ___reader;
		NullCheck(((Object_t *)Castclass(L_1, IConfigErrorInfo_t1470_il2cpp_TypeInfo_var)));
		String_t* L_2 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Configuration.Internal.IConfigErrorInfo::get_Filename() */, IConfigErrorInfo_t1470_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_1, IConfigErrorInfo_t1470_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0017:
	{
		XmlReader_t843 * L_3 = ___reader;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		XmlReader_t843 * L_4 = ___reader;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_4);
		G_B5_0 = L_5;
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = ((String_t*)(NULL));
	}

IL_0029:
	{
		return G_B5_0;
	}
}
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlReader)
extern TypeInfo* IConfigErrorInfo_t1470_il2cpp_TypeInfo_var;
extern TypeInfo* IXmlLineInfo_t1469_il2cpp_TypeInfo_var;
extern "C" int32_t ConfigurationErrorsException_GetLineNumber_m6629 (Object_t * __this /* static, unused */, XmlReader_t843 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConfigErrorInfo_t1470_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2966);
		IXmlLineInfo_t1469_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2950);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		XmlReader_t843 * L_0 = ___reader;
		if (!((Object_t *)IsInst(L_0, IConfigErrorInfo_t1470_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		XmlReader_t843 * L_1 = ___reader;
		NullCheck(((Object_t *)Castclass(L_1, IConfigErrorInfo_t1470_il2cpp_TypeInfo_var)));
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Configuration.Internal.IConfigErrorInfo::get_LineNumber() */, IConfigErrorInfo_t1470_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_1, IConfigErrorInfo_t1470_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0017:
	{
		XmlReader_t843 * L_3 = ___reader;
		V_0 = ((Object_t *)IsInst(L_3, IXmlLineInfo_t1469_il2cpp_TypeInfo_var));
		Object_t * L_4 = V_0;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_t1469_il2cpp_TypeInfo_var, L_5);
		G_B5_0 = L_6;
		goto IL_0030;
	}

IL_002f:
	{
		G_B5_0 = 0;
	}

IL_0030:
	{
		return G_B5_0;
	}
}
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlNode)
extern TypeInfo* IConfigErrorInfo_t1470_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigurationErrorsException_GetFilename_m6630 (Object_t * __this /* static, unused */, XmlNode_t1124 * ___node, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConfigErrorInfo_t1470_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2966);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlNode_t1124 * L_0 = ___node;
		if (((Object_t *)IsInst(L_0, IConfigErrorInfo_t1470_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000d:
	{
		XmlNode_t1124 * L_1 = ___node;
		NullCheck(((Object_t *)Castclass(L_1, IConfigErrorInfo_t1470_il2cpp_TypeInfo_var)));
		String_t* L_2 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Configuration.Internal.IConfigErrorInfo::get_Filename() */, IConfigErrorInfo_t1470_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_1, IConfigErrorInfo_t1470_il2cpp_TypeInfo_var)));
		return L_2;
	}
}
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlNode)
extern TypeInfo* IConfigErrorInfo_t1470_il2cpp_TypeInfo_var;
extern "C" int32_t ConfigurationErrorsException_GetLineNumber_m6631 (Object_t * __this /* static, unused */, XmlNode_t1124 * ___node, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConfigErrorInfo_t1470_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2966);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlNode_t1124 * L_0 = ___node;
		if (((Object_t *)IsInst(L_0, IConfigErrorInfo_t1470_il2cpp_TypeInfo_var)))
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
		NullCheck(((Object_t *)Castclass(L_1, IConfigErrorInfo_t1470_il2cpp_TypeInfo_var)));
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Configuration.Internal.IConfigErrorInfo::get_LineNumber() */, IConfigErrorInfo_t1470_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_1, IConfigErrorInfo_t1470_il2cpp_TypeInfo_var)));
		return L_2;
	}
}
// System.Void System.Configuration.ConfigurationErrorsException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationErrorsException_GetObjectData_m6632 (ConfigurationErrorsException_t1139 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___context;
		ConfigurationException_GetObjectData_m6895(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_2 = ___info;
		String_t* L_3 = (__this->___filename_13);
		NullCheck(L_2);
		SerializationInfo_AddValue_m5012(L_2, (String_t*) &_stringLiteral1512, L_3, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_4 = ___info;
		int32_t L_5 = (__this->___line_14);
		NullCheck(L_4);
		SerializationInfo_AddValue_m5038(L_4, (String_t*) &_stringLiteral1513, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.ConfigurationFileMap
#include "System_Configuration_System_Configuration_ConfigurationFileM.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationFileMap
#include "System_Configuration_System_Configuration_ConfigurationFileMMethodDeclarations.h"

// System.Runtime.InteropServices.RuntimeEnvironment
#include "mscorlib_System_Runtime_InteropServices_RuntimeEnvironmentMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationFileMap::.ctor()
extern "C" void ConfigurationFileMap__ctor_m6633 (ConfigurationFileMap_t1421 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		String_t* L_0 = RuntimeEnvironment_get_SystemConfigurationFile_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___machineConfigFilename_0 = L_0;
		return;
	}
}
// System.Void System.Configuration.ConfigurationFileMap::.ctor(System.String)
extern "C" void ConfigurationFileMap__ctor_m6634 (ConfigurationFileMap_t1421 * __this, String_t* ___machineConfigFilename, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___machineConfigFilename;
		__this->___machineConfigFilename_0 = L_0;
		return;
	}
}
// System.String System.Configuration.ConfigurationFileMap::get_MachineConfigFilename()
extern "C" String_t* ConfigurationFileMap_get_MachineConfigFilename_m6635 (ConfigurationFileMap_t1421 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___machineConfigFilename_0);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationFileMap::set_MachineConfigFilename(System.String)
extern "C" void ConfigurationFileMap_set_MachineConfigFilename_m6636 (ConfigurationFileMap_t1421 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___machineConfigFilename_0 = L_0;
		return;
	}
}
// System.Object System.Configuration.ConfigurationFileMap::Clone()
extern TypeInfo* ConfigurationFileMap_t1421_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationFileMap_Clone_m6637 (ConfigurationFileMap_t1421 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationFileMap_t1421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2967);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___machineConfigFilename_0);
		ConfigurationFileMap_t1421 * L_1 = (ConfigurationFileMap_t1421 *)il2cpp_codegen_object_new (ConfigurationFileMap_t1421_il2cpp_TypeInfo_var);
		ConfigurationFileMap__ctor_m6634(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ConfigurationLocation::.ctor(System.String,System.String,System.Configuration.Configuration,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationLocation_t1422_il2cpp_TypeInfo_var;
extern "C" void ConfigurationLocation__ctor_m6638 (ConfigurationLocation_t1422 * __this, String_t* ___path, String_t* ___xmlContent, Configuration_t1398 * ___parent, bool ___allowOverride, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2028);
		ConfigurationLocation_t1422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2968);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_2 = ___path;
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m1370(L_2, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		uint16_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)46))))
		{
			goto IL_003e;
		}
	}
	{
		uint16_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)47))))
		{
			goto IL_003e;
		}
	}
	{
		uint16_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)32))))
		{
			goto IL_003e;
		}
	}
	{
		uint16_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0049;
	}

IL_003e:
	{
		ConfigurationErrorsException_t1139 * L_8 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m5115(L_8, (String_t*) &_stringLiteral1514, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0049:
	{
		String_t* L_9 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationLocation_t1422_il2cpp_TypeInfo_var);
		CharU5BU5D_t260* L_10 = ((ConfigurationLocation_t1422_StaticFields*)ConfigurationLocation_t1422_il2cpp_TypeInfo_var->static_fields)->___pathTrimChars_0;
		NullCheck(L_9);
		String_t* L_11 = String_TrimEnd_m5237(L_9, L_10, /*hidden argument*/NULL);
		___path = L_11;
	}

IL_0056:
	{
		String_t* L_12 = ___path;
		__this->___path_1 = L_12;
		String_t* L_13 = ___xmlContent;
		__this->___xmlContent_4 = L_13;
		Configuration_t1398 * L_14 = ___parent;
		__this->___parent_3 = L_14;
		bool L_15 = ___allowOverride;
		__this->___allowOverride_6 = L_15;
		return;
	}
}
// System.Void System.Configuration.ConfigurationLocation::.cctor()
extern TypeInfo* CharU5BU5D_t260_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationLocation_t1422_il2cpp_TypeInfo_var;
extern "C" void ConfigurationLocation__cctor_m6639 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		ConfigurationLocation_t1422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2968);
		s_Il2CppMethodIntialized = true;
	}
	{
		CharU5BU5D_t260* L_0 = ((CharU5BU5D_t260*)SZArrayNew(CharU5BU5D_t260_il2cpp_TypeInfo_var, 1));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)47);
		((ConfigurationLocation_t1422_StaticFields*)ConfigurationLocation_t1422_il2cpp_TypeInfo_var->static_fields)->___pathTrimChars_0 = L_0;
		return;
	}
}
// System.String System.Configuration.ConfigurationLocation::get_Path()
extern "C" String_t* ConfigurationLocation_get_Path_m6640 (ConfigurationLocation_t1422 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___path_1);
		return L_0;
	}
}
// System.Configuration.Configuration System.Configuration.ConfigurationLocation::OpenConfiguration()
extern TypeInfo* IInternalConfigHost_t1403_il2cpp_TypeInfo_var;
extern TypeInfo* Configuration_t1398_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t685_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigXmlTextReader_t1443_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" Configuration_t1398 * ConfigurationLocation_OpenConfiguration_m6641 (ConfigurationLocation_t1422 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IInternalConfigHost_t1403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2940);
		Configuration_t1398_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2941);
		StringReader_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(933);
		ConfigXmlTextReader_t1443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2949);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	Configuration_t1398 * V_0 = {0};
	String_t* V_1 = {0};
	XmlTextReader_t1121 * V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Configuration_t1398 * L_0 = (__this->___configuration_2);
		if (L_0)
		{
			goto IL_00b6;
		}
	}
	{
		bool L_1 = (__this->___parentResolved_5);
		if (L_1)
		{
			goto IL_005d;
		}
	}
	{
		Configuration_t1398 * L_2 = (__this->___parent_3);
		NullCheck(L_2);
		Configuration_t1398 * L_3 = Configuration_GetParentWithFile_m6507(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Configuration_t1398 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_005d;
		}
	}
	{
		Configuration_t1398 * L_5 = (__this->___parent_3);
		NullCheck(L_5);
		Object_t * L_6 = Configuration_get_ConfigHost_m6508(L_5, /*hidden argument*/NULL);
		Configuration_t1398 * L_7 = (__this->___parent_3);
		NullCheck(L_7);
		String_t* L_8 = Configuration_get_LocationConfigPath_m6509(L_7, /*hidden argument*/NULL);
		String_t* L_9 = (__this->___path_1);
		NullCheck(L_6);
		String_t* L_10 = (String_t*)InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(1 /* System.String System.Configuration.Internal.IInternalConfigHost::GetConfigPathFromLocationSubPath(System.String,System.String) */, IInternalConfigHost_t1403_il2cpp_TypeInfo_var, L_6, L_8, L_9);
		V_1 = L_10;
		Configuration_t1398 * L_11 = V_0;
		String_t* L_12 = V_1;
		Configuration_t1398 * L_13 = (__this->___parent_3);
		NullCheck(L_11);
		Configuration_t1398 * L_14 = Configuration_FindLocationConfiguration_m6503(L_11, L_12, L_13, /*hidden argument*/NULL);
		__this->___parent_3 = L_14;
	}

IL_005d:
	{
		Configuration_t1398 * L_15 = (__this->___parent_3);
		String_t* L_16 = (__this->___path_1);
		Configuration_t1398 * L_17 = (Configuration_t1398 *)il2cpp_codegen_object_new (Configuration_t1398_il2cpp_TypeInfo_var);
		Configuration__ctor_m6501(L_17, L_15, L_16, /*hidden argument*/NULL);
		__this->___configuration_2 = L_17;
		String_t* L_18 = (__this->___xmlContent_4);
		StringReader_t685 * L_19 = (StringReader_t685 *)il2cpp_codegen_object_new (StringReader_t685_il2cpp_TypeInfo_var);
		StringReader__ctor_m3189(L_19, L_18, /*hidden argument*/NULL);
		String_t* L_20 = (__this->___path_1);
		ConfigXmlTextReader_t1443 * L_21 = (ConfigXmlTextReader_t1443 *)il2cpp_codegen_object_new (ConfigXmlTextReader_t1443_il2cpp_TypeInfo_var);
		ConfigXmlTextReader__ctor_m6731(L_21, L_19, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		Configuration_t1398 * L_22 = (__this->___configuration_2);
		XmlTextReader_t1121 * L_23 = V_2;
		bool L_24 = (__this->___allowOverride_6);
		NullCheck(L_22);
		Configuration_ReadData_m6524(L_22, L_23, L_24, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0xAF, FINALLY_00a2);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_00a2;
	}

FINALLY_00a2:
	{ // begin finally (depth: 1)
		{
			XmlTextReader_t1121 * L_25 = V_2;
			if (!L_25)
			{
				goto IL_00ae;
			}
		}

IL_00a8:
		{
			XmlTextReader_t1121 * L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_26);
		}

IL_00ae:
		{
			IL2CPP_END_FINALLY(162)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(162)
	{
		IL2CPP_JUMP_TBL(0xAF, IL_00af)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_00af:
	{
		__this->___xmlContent_4 = (String_t*)NULL;
	}

IL_00b6:
	{
		Configuration_t1398 * L_27 = (__this->___configuration_2);
		return L_27;
	}
}
// System.Void System.Configuration.ConfigurationLocation::SetParentConfiguration(System.Configuration.Configuration)
extern "C" void ConfigurationLocation_SetParentConfiguration_m6642 (ConfigurationLocation_t1422 * __this, Configuration_t1398 * ___parent, const MethodInfo* method)
{
	{
		__this->___parentResolved_5 = 1;
		Configuration_t1398 * L_0 = ___parent;
		__this->___parent_3 = L_0;
		Configuration_t1398 * L_1 = (__this->___configuration_2);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Configuration_t1398 * L_2 = (__this->___configuration_2);
		Configuration_t1398 * L_3 = ___parent;
		NullCheck(L_2);
		Configuration_set_Parent_m6506(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.ReadOnlyCollectionBase
#include "mscorlib_System_Collections_ReadOnlyCollectionBaseMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationLocationCollection::.ctor()
extern "C" void ConfigurationLocationCollection__ctor_m6643 (ConfigurationLocationCollection_t1405 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollectionBase__ctor_m6897(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationLocationCollection::Add(System.Configuration.ConfigurationLocation)
extern "C" void ConfigurationLocationCollection_Add_m6644 (ConfigurationLocationCollection_t1405 * __this, ConfigurationLocation_t1422 * ___loc, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = ReadOnlyCollectionBase_get_InnerList_m6898(__this, /*hidden argument*/NULL);
		ConfigurationLocation_t1422 * L_1 = ___loc;
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Configuration.ConfigurationLocation System.Configuration.ConfigurationLocationCollection::Find(System.String)
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationLocation_t1422_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" ConfigurationLocation_t1422 * ConfigurationLocationCollection_Find_m6645 (ConfigurationLocationCollection_t1405 * __this, String_t* ___location, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		ConfigurationLocation_t1422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2968);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationLocation_t1422 * V_0 = {0};
	Object_t * V_1 = {0};
	ConfigurationLocation_t1422 * V_2 = {0};
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
			goto IL_0036;
		}

IL_0011:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_2);
			V_0 = ((ConfigurationLocation_t1422 *)Castclass(L_3, ConfigurationLocation_t1422_il2cpp_TypeInfo_var));
			ConfigurationLocation_t1422 * L_4 = V_0;
			NullCheck(L_4);
			String_t* L_5 = ConfigurationLocation_get_Path_m6640(L_4, /*hidden argument*/NULL);
			String_t* L_6 = ___location;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			int32_t L_7 = String_Compare_m5245(NULL /*static, unused*/, L_5, L_6, 5, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0036;
			}
		}

IL_002f:
		{
			ConfigurationLocation_t1422 * L_8 = V_0;
			V_2 = L_8;
			IL2CPP_LEAVE(0x5A, FINALLY_0046);
		}

IL_0036:
		{
			Object_t * L_9 = V_1;
			NullCheck(L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0011;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x58, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		{
			Object_t * L_11 = V_1;
			V_3 = ((Object_t *)IsInst(L_11, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_12 = V_3;
			if (L_12)
			{
				goto IL_0051;
			}
		}

IL_0050:
		{
			IL2CPP_END_FINALLY(70)
		}

IL_0051:
		{
			Object_t * L_13 = V_3;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_13);
			IL2CPP_END_FINALLY(70)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0058:
	{
		return (ConfigurationLocation_t1422 *)NULL;
	}

IL_005a:
	{
		ConfigurationLocation_t1422 * L_14 = V_2;
		return L_14;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationLockType
#include "System_Configuration_System_Configuration_ConfigurationLockTMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ConfigurationLockCollection::.ctor(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationLockType)
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" void ConfigurationLockCollection__ctor_m6646 (ConfigurationLockCollection_t1415 * __this, ConfigurationElement_t1416 * ___element, int32_t ___lockType, const MethodInfo* method)
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
		__this->___names_0 = L_0;
		ConfigurationElement_t1416 * L_1 = ___element;
		__this->___element_1 = L_1;
		int32_t L_2 = ___lockType;
		__this->___lockType_2 = L_2;
		return;
	}
}
// System.Void System.Configuration.ConfigurationLockCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ConfigurationLockCollection_System_Collections_ICollection_CopyTo_m6647 (ConfigurationLockCollection_t1415 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___names_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(37 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Configuration.ConfigurationLockCollection::CheckName(System.String)
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t1429_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t311_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t258_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var;
extern "C" void ConfigurationLockCollection_CheckName_m6648 (ConfigurationLockCollection_t1415 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		ConfigurationProperty_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2955);
		Boolean_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		StringU5BU5D_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2028);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	ConfigurationProperty_t1429 * V_1 = {0};
	Object_t * V_2 = {0};
	ConfigurationElementCollection_t1413 * V_3 = {0};
	StringU5BU5D_t258* V_4 = {0};
	Object_t * V_5 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B17_0 = 0;
	ObjectU5BU5D_t300* G_B17_1 = {0};
	ObjectU5BU5D_t300* G_B17_2 = {0};
	String_t* G_B17_3 = {0};
	int32_t G_B16_0 = 0;
	ObjectU5BU5D_t300* G_B16_1 = {0};
	ObjectU5BU5D_t300* G_B16_2 = {0};
	String_t* G_B16_3 = {0};
	String_t* G_B18_0 = {0};
	int32_t G_B18_1 = 0;
	ObjectU5BU5D_t300* G_B18_2 = {0};
	ObjectU5BU5D_t300* G_B18_3 = {0};
	String_t* G_B18_4 = {0};
	int32_t G_B20_0 = 0;
	ObjectU5BU5D_t300* G_B20_1 = {0};
	ObjectU5BU5D_t300* G_B20_2 = {0};
	String_t* G_B20_3 = {0};
	int32_t G_B19_0 = 0;
	ObjectU5BU5D_t300* G_B19_1 = {0};
	ObjectU5BU5D_t300* G_B19_2 = {0};
	String_t* G_B19_3 = {0};
	String_t* G_B21_0 = {0};
	int32_t G_B21_1 = 0;
	ObjectU5BU5D_t300* G_B21_2 = {0};
	ObjectU5BU5D_t300* G_B21_3 = {0};
	String_t* G_B21_4 = {0};
	{
		int32_t L_0 = (__this->___lockType_2);
		V_0 = ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
		Hashtable_t915 * L_1 = (__this->___valid_name_hash_4);
		if (L_1)
		{
			goto IL_0124;
		}
	}
	{
		Hashtable_t915 * L_2 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_2, /*hidden argument*/NULL);
		__this->___valid_name_hash_4 = L_2;
		ConfigurationElement_t1416 * L_3 = (__this->___element_1);
		NullCheck(L_3);
		ConfigurationPropertyCollection_t1412 * L_4 = (ConfigurationPropertyCollection_t1412 *)VirtFuncInvoker0< ConfigurationPropertyCollection_t1412 * >::Invoke(6 /* System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties() */, L_3);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_4);
		V_2 = L_5;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_0038:
		{
			Object_t * L_6 = V_2;
			NullCheck(L_6);
			Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_6);
			V_1 = ((ConfigurationProperty_t1429 *)Castclass(L_7, ConfigurationProperty_t1429_il2cpp_TypeInfo_var));
			bool L_8 = V_0;
			ConfigurationProperty_t1429 * L_9 = V_1;
			NullCheck(L_9);
			bool L_10 = ConfigurationProperty_get_IsElement_m6675(L_9, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
			{
				goto IL_0055;
			}
		}

IL_0050:
		{
			goto IL_006c;
		}

IL_0055:
		{
			Hashtable_t915 * L_11 = (__this->___valid_name_hash_4);
			ConfigurationProperty_t1429 * L_12 = V_1;
			NullCheck(L_12);
			String_t* L_13 = ConfigurationProperty_get_Name_m6670(L_12, /*hidden argument*/NULL);
			bool L_14 = 1;
			Object_t * L_15 = Box(Boolean_t311_il2cpp_TypeInfo_var, &L_14);
			NullCheck(L_11);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_11, L_13, L_15);
		}

IL_006c:
		{
			Object_t * L_16 = V_2;
			NullCheck(L_16);
			bool L_17 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_16);
			if (L_17)
			{
				goto IL_0038;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0x91, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		{
			Object_t * L_18 = V_2;
			V_5 = ((Object_t *)IsInst(L_18, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_19 = V_5;
			if (L_19)
			{
				goto IL_0089;
			}
		}

IL_0088:
		{
			IL2CPP_END_FINALLY(124)
		}

IL_0089:
		{
			Object_t * L_20 = V_5;
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_20);
			IL2CPP_END_FINALLY(124)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0091:
	{
		bool L_21 = V_0;
		if (L_21)
		{
			goto IL_00e8;
		}
	}
	{
		ConfigurationElement_t1416 * L_22 = (__this->___element_1);
		NullCheck(L_22);
		ConfigurationElementCollection_t1413 * L_23 = ConfigurationElement_GetDefaultCollection_m6546(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		Hashtable_t915 * L_24 = (__this->___valid_name_hash_4);
		ConfigurationElementCollection_t1413 * L_25 = V_3;
		NullCheck(L_25);
		String_t* L_26 = ConfigurationElementCollection_get_AddElementName_m6591(L_25, /*hidden argument*/NULL);
		bool L_27 = 1;
		Object_t * L_28 = Box(Boolean_t311_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_24);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_24, L_26, L_28);
		Hashtable_t915 * L_29 = (__this->___valid_name_hash_4);
		ConfigurationElementCollection_t1413 * L_30 = V_3;
		NullCheck(L_30);
		String_t* L_31 = ConfigurationElementCollection_get_ClearElementName_m6592(L_30, /*hidden argument*/NULL);
		bool L_32 = 1;
		Object_t * L_33 = Box(Boolean_t311_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_29);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_29, L_31, L_33);
		Hashtable_t915 * L_34 = (__this->___valid_name_hash_4);
		ConfigurationElementCollection_t1413 * L_35 = V_3;
		NullCheck(L_35);
		String_t* L_36 = ConfigurationElementCollection_get_RemoveElementName_m6593(L_35, /*hidden argument*/NULL);
		bool L_37 = 1;
		Object_t * L_38 = Box(Boolean_t311_il2cpp_TypeInfo_var, &L_37);
		NullCheck(L_34);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_34, L_36, L_38);
	}

IL_00e8:
	{
		Hashtable_t915 * L_39 = (__this->___valid_name_hash_4);
		NullCheck(L_39);
		Object_t * L_40 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(22 /* System.Collections.ICollection System.Collections.Hashtable::get_Keys() */, L_39);
		NullCheck(L_40);
		int32_t L_41 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t793_il2cpp_TypeInfo_var, L_40);
		V_4 = ((StringU5BU5D_t258*)SZArrayNew(StringU5BU5D_t258_il2cpp_TypeInfo_var, L_41));
		Hashtable_t915 * L_42 = (__this->___valid_name_hash_4);
		NullCheck(L_42);
		Object_t * L_43 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(22 /* System.Collections.ICollection System.Collections.Hashtable::get_Keys() */, L_42);
		StringU5BU5D_t258* L_44 = V_4;
		NullCheck(L_43);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t793_il2cpp_TypeInfo_var, L_43, (Array_t *)(Array_t *)L_44, 0);
		StringU5BU5D_t258* L_45 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_46 = String_Join_m5063(NULL /*static, unused*/, (String_t*) &_stringLiteral349, L_45, /*hidden argument*/NULL);
		__this->___valid_names_5 = L_46;
	}

IL_0124:
	{
		Hashtable_t915 * L_47 = (__this->___valid_name_hash_4);
		String_t* L_48 = ___name;
		NullCheck(L_47);
		Object_t * L_49 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_47, L_48);
		if (L_49)
		{
			goto IL_0188;
		}
	}
	{
		ObjectU5BU5D_t300* L_50 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 4));
		String_t* L_51 = ___name;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 0);
		ArrayElementTypeCheck (L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 0)) = (Object_t *)L_51;
		ObjectU5BU5D_t300* L_52 = L_50;
		String_t* L_53 = (__this->___valid_names_5);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 1);
		ArrayElementTypeCheck (L_52, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 1)) = (Object_t *)L_53;
		ObjectU5BU5D_t300* L_54 = L_52;
		bool L_55 = V_0;
		G_B16_0 = 2;
		G_B16_1 = L_54;
		G_B16_2 = L_54;
		G_B16_3 = (String_t*) &_stringLiteral1515;
		if (!L_55)
		{
			G_B17_0 = 2;
			G_B17_1 = L_54;
			G_B17_2 = L_54;
			G_B17_3 = (String_t*) &_stringLiteral1515;
			goto IL_015f;
		}
	}
	{
		G_B18_0 = (String_t*) &_stringLiteral1092;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		G_B18_4 = G_B16_3;
		goto IL_0164;
	}

IL_015f:
	{
		G_B18_0 = (String_t*) &_stringLiteral1069;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
		G_B18_4 = G_B17_3;
	}

IL_0164:
	{
		NullCheck(G_B18_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B18_2, G_B18_1);
		ArrayElementTypeCheck (G_B18_2, G_B18_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B18_2, G_B18_1)) = (Object_t *)G_B18_0;
		ObjectU5BU5D_t300* L_56 = G_B18_3;
		bool L_57 = V_0;
		G_B19_0 = 3;
		G_B19_1 = L_56;
		G_B19_2 = L_56;
		G_B19_3 = G_B18_4;
		if (!L_57)
		{
			G_B20_0 = 3;
			G_B20_1 = L_56;
			G_B20_2 = L_56;
			G_B20_3 = G_B18_4;
			goto IL_0177;
		}
	}
	{
		G_B21_0 = (String_t*) &_stringLiteral1516;
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		G_B21_3 = G_B19_2;
		G_B21_4 = G_B19_3;
		goto IL_017c;
	}

IL_0177:
	{
		G_B21_0 = (String_t*) &_stringLiteral1517;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		G_B21_3 = G_B20_2;
		G_B21_4 = G_B20_3;
	}

IL_017c:
	{
		NullCheck(G_B21_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B21_2, G_B21_1);
		ArrayElementTypeCheck (G_B21_2, G_B21_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B21_2, G_B21_1)) = (Object_t *)G_B21_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = String_Format_m1819(NULL /*static, unused*/, G_B21_4, G_B21_3, /*hidden argument*/NULL);
		ConfigurationErrorsException_t1139 * L_59 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m5115(L_59, L_58, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_59);
	}

IL_0188:
	{
		return;
	}
}
// System.Void System.Configuration.ConfigurationLockCollection::Add(System.String)
extern "C" void ConfigurationLockCollection_Add_m6649 (ConfigurationLockCollection_t1415 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		ConfigurationLockCollection_CheckName_m6648(__this, L_0, /*hidden argument*/NULL);
		ArrayList_t913 * L_1 = (__this->___names_0);
		String_t* L_2 = ___name;
		NullCheck(L_1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_1, L_2);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		ArrayList_t913 * L_4 = (__this->___names_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_4, L_5);
		__this->___is_modified_3 = 1;
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Configuration.ConfigurationLockCollection::Clear()
extern "C" void ConfigurationLockCollection_Clear_m6650 (ConfigurationLockCollection_t1415 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___names_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(27 /* System.Void System.Collections.ArrayList::Clear() */, L_0);
		__this->___is_modified_3 = 1;
		return;
	}
}
// System.Collections.IEnumerator System.Configuration.ConfigurationLockCollection::GetEnumerator()
extern "C" Object_t * ConfigurationLockCollection_GetEnumerator_m6651 (ConfigurationLockCollection_t1415 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___names_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Void System.Configuration.ConfigurationLockCollection::SetFromList(System.String)
extern TypeInfo* CharU5BU5D_t260_il2cpp_TypeInfo_var;
extern "C" void ConfigurationLockCollection_SetFromList_m6652 (ConfigurationLockCollection_t1415 * __this, String_t* ___attributeList, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t260* V_0 = {0};
	StringU5BU5D_t258* V_1 = {0};
	String_t* V_2 = {0};
	StringU5BU5D_t258* V_3 = {0};
	int32_t V_4 = 0;
	{
		ConfigurationLockCollection_Clear_m6650(__this, /*hidden argument*/NULL);
		CharU5BU5D_t260* L_0 = ((CharU5BU5D_t260*)SZArrayNew(CharU5BU5D_t260_il2cpp_TypeInfo_var, 1));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)44);
		V_0 = L_0;
		String_t* L_1 = ___attributeList;
		CharU5BU5D_t260* L_2 = V_0;
		NullCheck(L_1);
		StringU5BU5D_t258* L_3 = String_Split_m1813(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		StringU5BU5D_t258* L_4 = V_1;
		V_3 = L_4;
		V_4 = 0;
		goto IL_003b;
	}

IL_0024:
	{
		StringU5BU5D_t258* L_5 = V_3;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_2 = (*(String_t**)(String_t**)SZArrayLdElema(L_5, L_7));
		String_t* L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9 = String_Trim_m1528(L_8, /*hidden argument*/NULL);
		ConfigurationLockCollection_Add_m6649(__this, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_4;
		V_4 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_11 = V_4;
		StringU5BU5D_t258* L_12 = V_3;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Configuration.ConfigurationLockCollection::get_Count()
extern "C" int32_t ConfigurationLockCollection_get_Count_m6653 (ConfigurationLockCollection_t1415 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___names_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Object System.Configuration.ConfigurationLockCollection::get_SyncRoot()
extern "C" Object_t * ConfigurationLockCollection_get_SyncRoot_m6654 (ConfigurationLockCollection_t1415 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Configuration.ConfigurationManager
#include "System_Configuration_System_Configuration_ConfigurationManag.h"
#ifndef _MSC_VER
#else
#endif

// System.Configuration.InternalConfigurationFactory
#include "System_Configuration_System_Configuration_InternalConfigurat.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.AppDomain
#include "mscorlib_System_AppDomain.h"
// System.Reflection.AssemblyVersionAttribute
#include "mscorlib_System_Reflection_AssemblyVersionAttribute.h"
// System.Configuration.ExeConfigurationFileMap
#include "System_Configuration_System_Configuration_ExeConfigurationFi.h"
// System.AppDomainSetup
#include "mscorlib_System_AppDomainSetup.h"
// System.Environment/SpecialFolder
#include "mscorlib_System_Environment_SpecialFolder.h"
// System.Configuration.InternalConfigurationFactory
#include "System_Configuration_System_Configuration_InternalConfiguratMethodDeclarations.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Reflection.AssemblyVersionAttribute
#include "mscorlib_System_Reflection_AssemblyVersionAttributeMethodDeclarations.h"
// System.Configuration.ExeConfigurationFileMap
#include "System_Configuration_System_Configuration_ExeConfigurationFiMethodDeclarations.h"
// System.AppDomainSetup
#include "mscorlib_System_AppDomainSetupMethodDeclarations.h"
// System.IO.File
#include "mscorlib_System_IO_FileMethodDeclarations.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationManager::.cctor()
extern TypeInfo* InternalConfigurationFactory_t1425_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationManager_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* ClientConfigurationSystem_t1399_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" void ConfigurationManager__cctor_m6655 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalConfigurationFactory_t1425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2969);
		ConfigurationManager_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2030);
		ClientConfigurationSystem_t1399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2970);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		InternalConfigurationFactory_t1425 * L_0 = (InternalConfigurationFactory_t1425 *)il2cpp_codegen_object_new (InternalConfigurationFactory_t1425_il2cpp_TypeInfo_var);
		InternalConfigurationFactory__ctor_m6763(L_0, /*hidden argument*/NULL);
		((ConfigurationManager_t1140_StaticFields*)ConfigurationManager_t1140_il2cpp_TypeInfo_var->static_fields)->___configFactory_0 = L_0;
		ClientConfigurationSystem_t1399 * L_1 = (ClientConfigurationSystem_t1399 *)il2cpp_codegen_object_new (ClientConfigurationSystem_t1399_il2cpp_TypeInfo_var);
		ClientConfigurationSystem__ctor_m6489(L_1, /*hidden argument*/NULL);
		((ConfigurationManager_t1140_StaticFields*)ConfigurationManager_t1140_il2cpp_TypeInfo_var->static_fields)->___configSystem_1 = L_1;
		Object_t * L_2 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1291(L_2, /*hidden argument*/NULL);
		((ConfigurationManager_t1140_StaticFields*)ConfigurationManager_t1140_il2cpp_TypeInfo_var->static_fields)->___lockobj_2 = L_2;
		return;
	}
}
// System.String System.Configuration.ConfigurationManager::GetAssemblyInfo(System.Reflection.Assembly)
extern const Il2CppType* AssemblyProductAttribute_t868_0_0_0_var;
extern const Il2CppType* AssemblyVersionAttribute_t1472_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t868_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t294_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyVersionAttribute_t1472_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t862_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigurationManager_GetAssemblyInfo_m6656 (Object_t * __this /* static, unused */, Assembly_t1120 * ___a, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyProductAttribute_t868_0_0_0_var = il2cpp_codegen_type_from_index(1798);
		AssemblyVersionAttribute_t1472_0_0_0_var = il2cpp_codegen_type_from_index(2971);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		AssemblyProductAttribute_t868_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1798);
		StringBuilder_t294_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(170);
		AssemblyVersionAttribute_t1472_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2971);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Path_t862_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1779);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t300* V_0 = {0};
	StringBuilder_t294 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	{
		Assembly_t1120 * L_0 = ___a;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(AssemblyProductAttribute_t868_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t300* L_2 = (ObjectU5BU5D_t300*)VirtFuncInvoker2< ObjectU5BU5D_t300*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t300* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		ObjectU5BU5D_t300* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		ObjectU5BU5D_t300* L_5 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		int32_t L_6 = 0;
		NullCheck(((AssemblyProductAttribute_t868 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_6)), AssemblyProductAttribute_t868_il2cpp_TypeInfo_var)));
		String_t* L_7 = AssemblyProductAttribute_get_Product_m6899(((AssemblyProductAttribute_t868 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_6)), AssemblyProductAttribute_t868_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_003f;
	}

IL_0034:
	{
		AppDomain_t1471 * L_8 = AppDomain_get_CurrentDomain_m6900(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.AppDomain::get_FriendlyName() */, L_8);
		V_2 = L_9;
	}

IL_003f:
	{
		StringBuilder_t294 * L_10 = (StringBuilder_t294 *)il2cpp_codegen_object_new (StringBuilder_t294_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1754(L_10, /*hidden argument*/NULL);
		V_1 = L_10;
		StringBuilder_t294 * L_11 = V_1;
		NullCheck(L_11);
		StringBuilder_Append_m1755(L_11, (String_t*) &_stringLiteral1518, /*hidden argument*/NULL);
		StringBuilder_t294 * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_12);
		V_3 = L_13;
		Assembly_t1120 * L_14 = ___a;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(AssemblyVersionAttribute_t1472_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		ObjectU5BU5D_t300* L_16 = (ObjectU5BU5D_t300*)VirtFuncInvoker2< ObjectU5BU5D_t300*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean) */, L_14, L_15, 0);
		V_0 = L_16;
		ObjectU5BU5D_t300* L_17 = V_0;
		if (!L_17)
		{
			goto IL_008d;
		}
	}
	{
		ObjectU5BU5D_t300* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)(((int32_t)(((Array_t *)L_18)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		ObjectU5BU5D_t300* L_19 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		int32_t L_20 = 0;
		NullCheck(((AssemblyVersionAttribute_t1472 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_19, L_20)), AssemblyVersionAttribute_t1472_il2cpp_TypeInfo_var)));
		String_t* L_21 = AssemblyVersionAttribute_get_Version_m6901(((AssemblyVersionAttribute_t1472 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_19, L_20)), AssemblyVersionAttribute_t1472_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_4 = L_21;
		goto IL_0094;
	}

IL_008d:
	{
		V_4 = (String_t*) &_stringLiteral1519;
	}

IL_0094:
	{
		String_t* L_22 = V_2;
		String_t* L_23 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Format_m3539(NULL /*static, unused*/, (String_t*) &_stringLiteral418, L_22, L_23, /*hidden argument*/NULL);
		String_t* L_25 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_26 = Path_Combine_m3558(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Configuration.Configuration System.Configuration.ConfigurationManager::OpenExeConfigurationInternal(System.Configuration.ConfigurationUserLevel,System.Reflection.Assembly,System.String)
extern const Il2CppType* ExeConfigurationHost_t1453_0_0_0_var;
extern TypeInfo* ExeConfigurationFileMap_t1448_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t862_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationManager_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationUserLevel_t1441_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalConfigConfigurationFactory_t1467_il2cpp_TypeInfo_var;
extern "C" Configuration_t1398 * ConfigurationManager_OpenExeConfigurationInternal_m6657 (Object_t * __this /* static, unused */, int32_t ___userLevel, Assembly_t1120 * ___calling_assembly, String_t* ___exePath, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExeConfigurationHost_t1453_0_0_0_var = il2cpp_codegen_type_from_index(2972);
		ExeConfigurationFileMap_t1448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2973);
		Path_t862_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1779);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2028);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ConfigurationManager_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2030);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		ConfigurationUserLevel_t1441_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2974);
		IInternalConfigConfigurationFactory_t1467_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2975);
		s_Il2CppMethodIntialized = true;
	}
	ExeConfigurationFileMap_t1448 * V_0 = {0};
	Exception_t306 * V_1 = {0};
	int32_t V_2 = {0};
	{
		ExeConfigurationFileMap_t1448 * L_0 = (ExeConfigurationFileMap_t1448 *)il2cpp_codegen_object_new (ExeConfigurationFileMap_t1448_il2cpp_TypeInfo_var);
		ExeConfigurationFileMap__ctor_m6747(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ___userLevel;
		V_2 = L_1;
		int32_t L_2 = V_2;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)10))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)20))))
		{
			goto IL_00d1;
		}
	}
	{
		goto IL_0104;
	}

IL_0023:
	{
		String_t* L_5 = ___exePath;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_6 = ___exePath;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m1368(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_004e;
		}
	}

IL_0034:
	{
		ExeConfigurationFileMap_t1448 * L_8 = V_0;
		AppDomain_t1471 * L_9 = AppDomain_get_CurrentDomain_m6900(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		AppDomainSetup_t1473 * L_10 = AppDomain_get_SetupInformation_m6902(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.AppDomainSetup::get_ConfigurationFile() */, L_10);
		NullCheck(L_8);
		ExeConfigurationFileMap_set_ExeConfigFilename_m6749(L_8, L_11, /*hidden argument*/NULL);
		goto IL_0099;
	}

IL_004e:
	{
		String_t* L_12 = ___exePath;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		bool L_13 = Path_IsPathRooted_m6903(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_14 = ___exePath;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_15 = Path_GetFullPath_m3564(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		___exePath = L_15;
	}

IL_0061:
	{
		String_t* L_16 = ___exePath;
		bool L_17 = File_Exists_m1583(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0088;
		}
	}
	{
		ArgumentException_t356 * L_18 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6326(L_18, (String_t*) &_stringLiteral1520, (String_t*) &_stringLiteral1521, /*hidden argument*/NULL);
		V_1 = L_18;
		Exception_t306 * L_19 = V_1;
		ConfigurationErrorsException_t1139 * L_20 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m6622(L_20, (String_t*) &_stringLiteral1522, L_19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0088:
	{
		ExeConfigurationFileMap_t1448 * L_21 = V_0;
		String_t* L_22 = ___exePath;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m1269(NULL /*static, unused*/, L_22, (String_t*) &_stringLiteral1523, /*hidden argument*/NULL);
		NullCheck(L_21);
		ExeConfigurationFileMap_set_ExeConfigFilename_m6749(L_21, L_23, /*hidden argument*/NULL);
	}

IL_0099:
	{
		goto IL_0104;
	}

IL_009e:
	{
		ExeConfigurationFileMap_t1448 * L_24 = V_0;
		String_t* L_25 = Environment_GetFolderPath_m6383(NULL /*static, unused*/, ((int32_t)26), /*hidden argument*/NULL);
		Assembly_t1120 * L_26 = ___calling_assembly;
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationManager_t1140_il2cpp_TypeInfo_var);
		String_t* L_27 = ConfigurationManager_GetAssemblyInfo_m6656(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_28 = Path_Combine_m3558(NULL /*static, unused*/, L_25, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		ExeConfigurationFileMap_set_RoamingUserConfigFilename_m6753(L_24, L_28, /*hidden argument*/NULL);
		ExeConfigurationFileMap_t1448 * L_29 = V_0;
		ExeConfigurationFileMap_t1448 * L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31 = ExeConfigurationFileMap_get_RoamingUserConfigFilename_m6752(L_30, /*hidden argument*/NULL);
		String_t* L_32 = Path_Combine_m3558(NULL /*static, unused*/, L_31, (String_t*) &_stringLiteral1524, /*hidden argument*/NULL);
		NullCheck(L_29);
		ExeConfigurationFileMap_set_RoamingUserConfigFilename_m6753(L_29, L_32, /*hidden argument*/NULL);
		goto IL_00d1;
	}

IL_00d1:
	{
		ExeConfigurationFileMap_t1448 * L_33 = V_0;
		String_t* L_34 = Environment_GetFolderPath_m6383(NULL /*static, unused*/, ((int32_t)28), /*hidden argument*/NULL);
		Assembly_t1120 * L_35 = ___calling_assembly;
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationManager_t1140_il2cpp_TypeInfo_var);
		String_t* L_36 = ConfigurationManager_GetAssemblyInfo_m6656(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_37 = Path_Combine_m3558(NULL /*static, unused*/, L_34, L_36, /*hidden argument*/NULL);
		NullCheck(L_33);
		ExeConfigurationFileMap_set_LocalUserConfigFilename_m6751(L_33, L_37, /*hidden argument*/NULL);
		ExeConfigurationFileMap_t1448 * L_38 = V_0;
		ExeConfigurationFileMap_t1448 * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = ExeConfigurationFileMap_get_LocalUserConfigFilename_m6750(L_39, /*hidden argument*/NULL);
		String_t* L_41 = Path_Combine_m3558(NULL /*static, unused*/, L_40, (String_t*) &_stringLiteral1524, /*hidden argument*/NULL);
		NullCheck(L_38);
		ExeConfigurationFileMap_set_LocalUserConfigFilename_m6751(L_38, L_41, /*hidden argument*/NULL);
		goto IL_0104;
	}

IL_0104:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationManager_t1140_il2cpp_TypeInfo_var);
		Object_t * L_42 = ConfigurationManager_get_ConfigurationFactory_m6658(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_43 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ExeConfigurationHost_t1453_0_0_0_var), /*hidden argument*/NULL);
		ObjectU5BU5D_t300* L_44 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 2));
		ExeConfigurationFileMap_t1448 * L_45 = V_0;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, 0);
		ArrayElementTypeCheck (L_44, L_45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, 0)) = (Object_t *)L_45;
		ObjectU5BU5D_t300* L_46 = L_44;
		int32_t L_47 = ___userLevel;
		int32_t L_48 = L_47;
		Object_t * L_49 = Box(ConfigurationUserLevel_t1441_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 1);
		ArrayElementTypeCheck (L_46, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, 1)) = (Object_t *)L_49;
		NullCheck(L_42);
		Configuration_t1398 * L_50 = (Configuration_t1398 *)InterfaceFuncInvoker2< Configuration_t1398 *, Type_t *, ObjectU5BU5D_t300* >::Invoke(0 /* System.Configuration.Configuration System.Configuration.Internal.IInternalConfigConfigurationFactory::Create(System.Type,System.Object[]) */, IInternalConfigConfigurationFactory_t1467_il2cpp_TypeInfo_var, L_42, L_43, L_46);
		return L_50;
	}
}
// System.Configuration.Internal.IInternalConfigConfigurationFactory System.Configuration.ConfigurationManager::get_ConfigurationFactory()
extern TypeInfo* ConfigurationManager_t1140_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationManager_get_ConfigurationFactory_m6658 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationManager_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2030);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationManager_t1140_il2cpp_TypeInfo_var);
		InternalConfigurationFactory_t1425 * L_0 = ((ConfigurationManager_t1140_StaticFields*)ConfigurationManager_t1140_il2cpp_TypeInfo_var->static_fields)->___configFactory_0;
		return L_0;
	}
}
// System.Configuration.Internal.IInternalConfigSystem System.Configuration.ConfigurationManager::get_ConfigurationSystem()
extern TypeInfo* ConfigurationManager_t1140_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationManager_get_ConfigurationSystem_m6659 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationManager_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2030);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationManager_t1140_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((ConfigurationManager_t1140_StaticFields*)ConfigurationManager_t1140_il2cpp_TypeInfo_var->static_fields)->___configSystem_1;
		return L_0;
	}
}
// System.Object System.Configuration.ConfigurationManager::GetSection(System.String)
extern TypeInfo* ConfigurationManager_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalConfigSystem_t1426_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationSection_t1436_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationManager_GetSection_m5116 (Object_t * __this /* static, unused */, String_t* ___sectionName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationManager_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2030);
		IInternalConfigSystem_t1426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2976);
		ConfigurationSection_t1436_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2946);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationManager_t1140_il2cpp_TypeInfo_var);
		Object_t * L_0 = ConfigurationManager_get_ConfigurationSystem_m6659(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___sectionName;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, String_t* >::Invoke(0 /* System.Object System.Configuration.Internal.IInternalConfigSystem::GetSection(System.String) */, IInternalConfigSystem_t1426_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		if (!((ConfigurationSection_t1436 *)IsInst(L_3, ConfigurationSection_t1436_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_4 = V_0;
		NullCheck(((ConfigurationSection_t1436 *)Castclass(L_4, ConfigurationSection_t1436_il2cpp_TypeInfo_var)));
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(24 /* System.Object System.Configuration.ConfigurationSection::GetRuntimeObject() */, ((ConfigurationSection_t1436 *)Castclass(L_4, ConfigurationSection_t1436_il2cpp_TypeInfo_var)));
		return L_5;
	}

IL_0023:
	{
		Object_t * L_6 = V_0;
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Configuration.DefaultValidator
#include "System_Configuration_System_Configuration_DefaultValidator.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// System.ComponentModel.TypeDescriptor
#include "System_System_ComponentModel_TypeDescriptorMethodDeclarations.h"
// System.Configuration.DefaultValidator
#include "System_Configuration_System_Configuration_DefaultValidatorMethodDeclarations.h"
// System.ComponentModel.TypeConverter
#include "System_System_ComponentModel_TypeConverterMethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type)
extern TypeInfo* ConfigurationProperty_t1429_il2cpp_TypeInfo_var;
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultValidator_t1445_il2cpp_TypeInfo_var;
extern "C" void ConfigurationProperty__ctor_m6660 (ConfigurationProperty_t1429 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationProperty_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2955);
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		DefaultValidator_t1445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationProperty_t1429_il2cpp_TypeInfo_var);
		Object_t * L_2 = ((ConfigurationProperty_t1429_StaticFields*)ConfigurationProperty_t1429_il2cpp_TypeInfo_var->static_fields)->___NoDefaultValue_0;
		Type_t * L_3 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		TypeConverter_t1427 * L_4 = TypeDescriptor_GetConverter_m6904(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		DefaultValidator_t1445 * L_5 = (DefaultValidator_t1445 *)il2cpp_codegen_object_new (DefaultValidator_t1445_il2cpp_TypeInfo_var);
		DefaultValidator__ctor_m6741(L_5, /*hidden argument*/NULL);
		ConfigurationProperty__ctor_m6664(__this, L_0, L_1, L_2, L_4, L_5, 0, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object)
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultValidator_t1445_il2cpp_TypeInfo_var;
extern "C" void ConfigurationProperty__ctor_m6661 (ConfigurationProperty_t1429 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		DefaultValidator_t1445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		Type_t * L_1 = ___type;
		Object_t * L_2 = ___default_value;
		Type_t * L_3 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		TypeConverter_t1427 * L_4 = TypeDescriptor_GetConverter_m6904(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		DefaultValidator_t1445 * L_5 = (DefaultValidator_t1445 *)il2cpp_codegen_object_new (DefaultValidator_t1445_il2cpp_TypeInfo_var);
		DefaultValidator__ctor_m6741(L_5, /*hidden argument*/NULL);
		ConfigurationProperty__ctor_m6664(__this, L_0, L_1, L_2, L_4, L_5, 0, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.Configuration.ConfigurationPropertyOptions)
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultValidator_t1445_il2cpp_TypeInfo_var;
extern "C" void ConfigurationProperty__ctor_m6662 (ConfigurationProperty_t1429 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, int32_t ___flags, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		DefaultValidator_t1445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		Type_t * L_1 = ___type;
		Object_t * L_2 = ___default_value;
		Type_t * L_3 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		TypeConverter_t1427 * L_4 = TypeDescriptor_GetConverter_m6904(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		DefaultValidator_t1445 * L_5 = (DefaultValidator_t1445 *)il2cpp_codegen_object_new (DefaultValidator_t1445_il2cpp_TypeInfo_var);
		DefaultValidator__ctor_m6741(L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___flags;
		ConfigurationProperty__ctor_m6664(__this, L_0, L_1, L_2, L_4, L_5, L_6, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions)
extern "C" void ConfigurationProperty__ctor_m6663 (ConfigurationProperty_t1429 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, TypeConverter_t1427 * ___converter, ConfigurationValidatorBase_t1428 * ___validation, int32_t ___flags, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Type_t * L_1 = ___type;
		Object_t * L_2 = ___default_value;
		TypeConverter_t1427 * L_3 = ___converter;
		ConfigurationValidatorBase_t1428 * L_4 = ___validation;
		int32_t L_5 = ___flags;
		ConfigurationProperty__ctor_m6664(__this, L_0, L_1, L_2, L_3, L_4, L_5, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions,System.String)
extern TypeInfo* TypeDescriptor_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t1429_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultValidator_t1445_il2cpp_TypeInfo_var;
extern "C" void ConfigurationProperty__ctor_m6664 (ConfigurationProperty_t1429 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, TypeConverter_t1427 * ___converter, ConfigurationValidatorBase_t1428 * ___validation, int32_t ___flags, String_t* ___description, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeDescriptor_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2977);
		ConfigurationProperty_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2955);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2028);
		DefaultValidator_t1445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2978);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	ConfigurationProperty_t1429 * G_B2_0 = {0};
	ConfigurationProperty_t1429 * G_B1_0 = {0};
	TypeConverter_t1427 * G_B3_0 = {0};
	ConfigurationProperty_t1429 * G_B3_1 = {0};
	ConfigurationProperty_t1429 * G_B18_0 = {0};
	ConfigurationProperty_t1429 * G_B17_0 = {0};
	ConfigurationValidatorBase_t1428 * G_B19_0 = {0};
	ConfigurationProperty_t1429 * G_B19_1 = {0};
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___name_1 = L_0;
		TypeConverter_t1427 * L_1 = ___converter;
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_001c;
		}
	}
	{
		TypeConverter_t1427 * L_2 = ___converter;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0022;
	}

IL_001c:
	{
		Type_t * L_3 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1474_il2cpp_TypeInfo_var);
		TypeConverter_t1427 * L_4 = TypeDescriptor_GetConverter_m6904(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0022:
	{
		NullCheck(G_B3_1);
		G_B3_1->___converter_4 = G_B3_0;
		Object_t * L_5 = ___default_value;
		if (!L_5)
		{
			goto IL_00c6;
		}
	}
	{
		Object_t * L_6 = ___default_value;
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationProperty_t1429_il2cpp_TypeInfo_var);
		Object_t * L_7 = ((ConfigurationProperty_t1429_StaticFields*)ConfigurationProperty_t1429_il2cpp_TypeInfo_var->static_fields)->___NoDefaultValue_0;
		if ((!(((Object_t*)(Object_t *)L_6) == ((Object_t*)(Object_t *)L_7))))
		{
			goto IL_0079;
		}
	}
	{
		Type_t * L_8 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_9 = Type_GetTypeCode_m4985(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)18))))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_0067;
	}

IL_0053:
	{
		___default_value = NULL;
		goto IL_0074;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___default_value = L_12;
		goto IL_0074;
	}

IL_0067:
	{
		Type_t * L_13 = ___type;
		Object_t * L_14 = Activator_CreateInstance_m3582(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		___default_value = L_14;
		goto IL_0074;
	}

IL_0074:
	{
		goto IL_00c6;
	}

IL_0079:
	{
		Type_t * L_15 = ___type;
		Object_t * L_16 = ___default_value;
		NullCheck(L_16);
		Type_t * L_17 = Object_GetType_m1416(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		bool L_18 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_15, L_17);
		if (L_18)
		{
			goto IL_00c6;
		}
	}
	{
		TypeConverter_t1427 * L_19 = (__this->___converter_4);
		Object_t * L_20 = ___default_value;
		NullCheck(L_20);
		Type_t * L_21 = Object_GetType_m1416(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_22 = TypeConverter_CanConvertFrom_m6905(L_19, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00b8;
		}
	}
	{
		String_t* L_23 = ___name;
		Type_t * L_24 = ___type;
		Object_t * L_25 = ___default_value;
		NullCheck(L_25);
		Type_t * L_26 = Object_GetType_m1416(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Format_m5073(NULL /*static, unused*/, (String_t*) &_stringLiteral1525, L_23, L_24, L_26, /*hidden argument*/NULL);
		ConfigurationErrorsException_t1139 * L_28 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m5115(L_28, L_27, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_28);
	}

IL_00b8:
	{
		TypeConverter_t1427 * L_29 = (__this->___converter_4);
		Object_t * L_30 = ___default_value;
		NullCheck(L_29);
		Object_t * L_31 = TypeConverter_ConvertFrom_m6906(L_29, L_30, /*hidden argument*/NULL);
		___default_value = L_31;
	}

IL_00c6:
	{
		Object_t * L_32 = ___default_value;
		__this->___default_value_3 = L_32;
		int32_t L_33 = ___flags;
		__this->___flags_6 = L_33;
		Type_t * L_34 = ___type;
		__this->___type_2 = L_34;
		ConfigurationValidatorBase_t1428 * L_35 = ___validation;
		G_B17_0 = __this;
		if (!L_35)
		{
			G_B18_0 = __this;
			goto IL_00eb;
		}
	}
	{
		ConfigurationValidatorBase_t1428 * L_36 = ___validation;
		G_B19_0 = L_36;
		G_B19_1 = G_B17_0;
		goto IL_00f0;
	}

IL_00eb:
	{
		DefaultValidator_t1445 * L_37 = (DefaultValidator_t1445 *)il2cpp_codegen_object_new (DefaultValidator_t1445_il2cpp_TypeInfo_var);
		DefaultValidator__ctor_m6741(L_37, /*hidden argument*/NULL);
		G_B19_0 = ((ConfigurationValidatorBase_t1428 *)(L_37));
		G_B19_1 = G_B18_0;
	}

IL_00f0:
	{
		NullCheck(G_B19_1);
		G_B19_1->___validation_5 = G_B19_0;
		String_t* L_38 = ___description;
		__this->___description_7 = L_38;
		return;
	}
}
// System.Void System.Configuration.ConfigurationProperty::.cctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t1429_il2cpp_TypeInfo_var;
extern "C" void ConfigurationProperty__cctor_m6665 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		ConfigurationProperty_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2955);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1291(L_0, /*hidden argument*/NULL);
		((ConfigurationProperty_t1429_StaticFields*)ConfigurationProperty_t1429_il2cpp_TypeInfo_var->static_fields)->___NoDefaultValue_0 = L_0;
		return;
	}
}
// System.Object System.Configuration.ConfigurationProperty::get_DefaultValue()
extern "C" Object_t * ConfigurationProperty_get_DefaultValue_m6666 (ConfigurationProperty_t1429 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___default_value_3);
		return L_0;
	}
}
// System.Boolean System.Configuration.ConfigurationProperty::get_IsKey()
extern "C" bool ConfigurationProperty_get_IsKey_m6667 (ConfigurationProperty_t1429 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___flags_6);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Configuration.ConfigurationProperty::get_IsRequired()
extern "C" bool ConfigurationProperty_get_IsRequired_m6668 (ConfigurationProperty_t1429 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___flags_6);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Configuration.ConfigurationProperty::get_IsDefaultCollection()
extern "C" bool ConfigurationProperty_get_IsDefaultCollection_m6669 (ConfigurationProperty_t1429 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___flags_6);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.String System.Configuration.ConfigurationProperty::get_Name()
extern "C" String_t* ConfigurationProperty_get_Name_m6670 (ConfigurationProperty_t1429 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_1);
		return L_0;
	}
}
// System.Type System.Configuration.ConfigurationProperty::get_Type()
extern "C" Type_t * ConfigurationProperty_get_Type_m6671 (ConfigurationProperty_t1429 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_2);
		return L_0;
	}
}
// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationProperty::get_Validator()
extern "C" ConfigurationValidatorBase_t1428 * ConfigurationProperty_get_Validator_m6672 (ConfigurationProperty_t1429 * __this, const MethodInfo* method)
{
	{
		ConfigurationValidatorBase_t1428 * L_0 = (__this->___validation_5);
		return L_0;
	}
}
// System.Object System.Configuration.ConfigurationProperty::ConvertFromString(System.String)
extern TypeInfo* NotImplementedException_t333_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationProperty_ConvertFromString_m6673 (ConfigurationProperty_t1429 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeConverter_t1427 * L_0 = (__this->___converter_4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		TypeConverter_t1427 * L_1 = (__this->___converter_4);
		String_t* L_2 = ___value;
		NullCheck(L_1);
		Object_t * L_3 = TypeConverter_ConvertFromInvariantString_m6907(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0018:
	{
		NotImplementedException_t333 * L_4 = (NotImplementedException_t333 *)il2cpp_codegen_object_new (NotImplementedException_t333_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m4967(L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.String System.Configuration.ConfigurationProperty::ConvertToString(System.Object)
extern TypeInfo* NotImplementedException_t333_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigurationProperty_ConvertToString_m6674 (ConfigurationProperty_t1429 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeConverter_t1427 * L_0 = (__this->___converter_4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		TypeConverter_t1427 * L_1 = (__this->___converter_4);
		Object_t * L_2 = ___value;
		NullCheck(L_1);
		String_t* L_3 = TypeConverter_ConvertToInvariantString_m6908(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0018:
	{
		NotImplementedException_t333 * L_4 = (NotImplementedException_t333 *)il2cpp_codegen_object_new (NotImplementedException_t333_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m4967(L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Boolean System.Configuration.ConfigurationProperty::get_IsElement()
extern const Il2CppType* ConfigurationElement_t1416_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationProperty_get_IsElement_m6675 (ConfigurationProperty_t1429 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t1416_0_0_0_var = il2cpp_codegen_type_from_index(2958);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ConfigurationElement_t1416_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_1 = (__this->___type_2);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_1);
		return L_2;
	}
}
// System.Configuration.ConfigurationCollectionAttribute System.Configuration.ConfigurationProperty::get_CollectionAttribute()
extern "C" ConfigurationCollectionAttribute_t1410 * ConfigurationProperty_get_CollectionAttribute_m6676 (ConfigurationProperty_t1429 * __this, const MethodInfo* method)
{
	{
		ConfigurationCollectionAttribute_t1410 * L_0 = (__this->___collectionAttribute_8);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationProperty::set_CollectionAttribute(System.Configuration.ConfigurationCollectionAttribute)
extern "C" void ConfigurationProperty_set_CollectionAttribute_m6677 (ConfigurationProperty_t1429 * __this, ConfigurationCollectionAttribute_t1410 * ___value, const MethodInfo* method)
{
	{
		ConfigurationCollectionAttribute_t1410 * L_0 = ___value;
		__this->___collectionAttribute_8 = L_0;
		return;
	}
}
// System.Void System.Configuration.ConfigurationProperty::Validate(System.Object)
extern "C" void ConfigurationProperty_Validate_m6678 (ConfigurationProperty_t1429 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		ConfigurationValidatorBase_t1428 * L_0 = (__this->___validation_5);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ConfigurationValidatorBase_t1428 * L_1 = (__this->___validation_5);
		Object_t * L_2 = ___value;
		NullCheck(L_1);
		VirtActionInvoker1< Object_t * >::Invoke(5 /* System.Void System.Configuration.ConfigurationValidatorBase::Validate(System.Object) */, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ConfigurationPropertyAttribute::.ctor(System.String)
extern TypeInfo* ConfigurationProperty_t1429_il2cpp_TypeInfo_var;
extern "C" void ConfigurationPropertyAttribute__ctor_m6679 (ConfigurationPropertyAttribute_t1430 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationProperty_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2955);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationProperty_t1429_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((ConfigurationProperty_t1429_StaticFields*)ConfigurationProperty_t1429_il2cpp_TypeInfo_var->static_fields)->___NoDefaultValue_0;
		__this->___default_value_1 = L_0;
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___name;
		__this->___name_0 = L_1;
		return;
	}
}
// System.Object System.Configuration.ConfigurationPropertyAttribute::get_DefaultValue()
extern "C" Object_t * ConfigurationPropertyAttribute_get_DefaultValue_m6680 (ConfigurationPropertyAttribute_t1430 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___default_value_1);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationPropertyAttribute::set_DefaultValue(System.Object)
extern "C" void ConfigurationPropertyAttribute_set_DefaultValue_m6681 (ConfigurationPropertyAttribute_t1430 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___default_value_1 = L_0;
		return;
	}
}
// System.Configuration.ConfigurationPropertyOptions System.Configuration.ConfigurationPropertyAttribute::get_Options()
extern "C" int32_t ConfigurationPropertyAttribute_get_Options_m6682 (ConfigurationPropertyAttribute_t1430 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___flags_2);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationPropertyAttribute::set_Options(System.Configuration.ConfigurationPropertyOptions)
extern "C" void ConfigurationPropertyAttribute_set_Options_m6683 (ConfigurationPropertyAttribute_t1430 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___flags_2 = L_0;
		return;
	}
}
// System.String System.Configuration.ConfigurationPropertyAttribute::get_Name()
extern "C" String_t* ConfigurationPropertyAttribute_get_Name_m6684 (ConfigurationPropertyAttribute_t1430 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>
#include "mscorlib_System_Collections_Generic_List_1_gen_34.h"
// System.Collections.Generic.List`1/Enumerator<System.Configuration.ConfigurationProperty>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"
// System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>
#include "mscorlib_System_Collections_Generic_List_1_gen_34MethodDeclarations.h"


// System.Void System.Configuration.ConfigurationPropertyCollection::.ctor()
extern TypeInfo* List_1_t1431_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m6909_MethodInfo_var;
extern "C" void ConfigurationPropertyCollection__ctor_m6685 (ConfigurationPropertyCollection_t1412 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2979);
		List_1__ctor_m6909_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483955);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		List_1_t1431 * L_0 = (List_1_t1431 *)il2cpp_codegen_object_new (List_1_t1431_il2cpp_TypeInfo_var);
		List_1__ctor_m6909(L_0, /*hidden argument*/List_1__ctor_m6909_MethodInfo_var);
		__this->___collection_0 = L_0;
		return;
	}
}
// System.Void System.Configuration.ConfigurationPropertyCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern "C" void ConfigurationPropertyCollection_System_Collections_ICollection_CopyTo_m6686 (ConfigurationPropertyCollection_t1412 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t1431 * L_0 = (__this->___collection_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t793_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Int32 System.Configuration.ConfigurationPropertyCollection::get_Count()
extern "C" int32_t ConfigurationPropertyCollection_get_Count_m6687 (ConfigurationPropertyCollection_t1412 * __this, const MethodInfo* method)
{
	{
		List_1_t1431 * L_0 = (__this->___collection_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::get_Count() */, L_0);
		return L_1;
	}
}
// System.Object System.Configuration.ConfigurationPropertyCollection::get_SyncRoot()
extern "C" Object_t * ConfigurationPropertyCollection_get_SyncRoot_m6688 (ConfigurationPropertyCollection_t1412 * __this, const MethodInfo* method)
{
	{
		List_1_t1431 * L_0 = (__this->___collection_0);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationPropertyCollection::Add(System.Configuration.ConfigurationProperty)
extern "C" void ConfigurationPropertyCollection_Add_m6689 (ConfigurationPropertyCollection_t1412 * __this, ConfigurationProperty_t1429 * ___property, const MethodInfo* method)
{
	{
		List_1_t1431 * L_0 = (__this->___collection_0);
		ConfigurationProperty_t1429 * L_1 = ___property;
		NullCheck(L_0);
		VirtActionInvoker1< ConfigurationProperty_t1429 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator()
extern TypeInfo* Enumerator_t1475_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m6910_MethodInfo_var;
extern "C" Object_t * ConfigurationPropertyCollection_GetEnumerator_m6690 (ConfigurationPropertyCollection_t1412 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t1475_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2980);
		List_1_GetEnumerator_m6910_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483956);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t1431 * L_0 = (__this->___collection_0);
		NullCheck(L_0);
		Enumerator_t1475  L_1 = List_1_GetEnumerator_m6910(L_0, /*hidden argument*/List_1_GetEnumerator_m6910_MethodInfo_var);
		Enumerator_t1475  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t1475_il2cpp_TypeInfo_var, &L_2);
		return (Object_t *)L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationPropertyOptions
#include "System_Configuration_System_Configuration_ConfigurationPrope_0MethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveMMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Xml.XmlDocument
#include "System_Xml_System_Xml_XmlDocument.h"
// System.Xml.XmlElement
#include "System_Xml_System_Xml_XmlElement.h"
// System.Configuration.ProtectedConfigurationProvider
#include "System_Configuration_System_Configuration_ProtectedConfigura_0.h"
// System.Xml.XmlNodeReader
#include "System_Xml_System_Xml_XmlNodeReader.h"
// System.IO.StringWriter
#include "mscorlib_System_IO_StringWriter.h"
// System.Xml.XmlTextWriter
#include "System_Xml_System_Xml_XmlTextWriter.h"
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.Xml.Formatting
#include "System_Xml_System_Xml_Formatting.h"
// System.Xml.XmlDocument
#include "System_Xml_System_Xml_XmlDocumentMethodDeclarations.h"
// System.Configuration.ProtectedConfiguration
#include "System_Configuration_System_Configuration_ProtectedConfiguraMethodDeclarations.h"
// System.Configuration.ProtectedConfigurationProvider
#include "System_Configuration_System_Configuration_ProtectedConfigura_0MethodDeclarations.h"
// System.Xml.XmlNodeReader
#include "System_Xml_System_Xml_XmlNodeReaderMethodDeclarations.h"
// System.IO.StringWriter
#include "mscorlib_System_IO_StringWriterMethodDeclarations.h"
// System.Xml.XmlTextWriter
#include "System_Xml_System_Xml_XmlTextWriterMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationSection::.ctor()
extern "C" void ConfigurationSection__ctor_m6691 (ConfigurationSection_t1436 * __this, const MethodInfo* method)
{
	{
		ConfigurationElement__ctor_m6531(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::get_SectionHandler()
extern "C" Object_t * ConfigurationSection_get_SectionHandler_m6692 (ConfigurationSection_t1436 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___section_handler_14);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationSection::set_SectionHandler(System.Configuration.IConfigurationSectionHandler)
extern "C" void ConfigurationSection_set_SectionHandler_m6693 (ConfigurationSection_t1436 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___section_handler_14 = L_0;
		return;
	}
}
// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::get_SectionInformation()
extern TypeInfo* SectionInformation_t1434_il2cpp_TypeInfo_var;
extern "C" SectionInformation_t1434 * ConfigurationSection_get_SectionInformation_m6694 (ConfigurationSection_t1436 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SectionInformation_t1434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2981);
		s_Il2CppMethodIntialized = true;
	}
	{
		SectionInformation_t1434 * L_0 = (__this->___sectionInformation_13);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		SectionInformation_t1434 * L_1 = (SectionInformation_t1434 *)il2cpp_codegen_object_new (SectionInformation_t1434_il2cpp_TypeInfo_var);
		SectionInformation__ctor_m6858(L_1, /*hidden argument*/NULL);
		__this->___sectionInformation_13 = L_1;
	}

IL_0016:
	{
		SectionInformation_t1434 * L_2 = (__this->___sectionInformation_13);
		return L_2;
	}
}
// System.Object System.Configuration.ConfigurationSection::get_ConfigContext()
extern "C" Object_t * ConfigurationSection_get_ConfigContext_m6695 (ConfigurationSection_t1436 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____configContext_16);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationSection::set_ConfigContext(System.Object)
extern "C" void ConfigurationSection_set_ConfigContext_m6696 (ConfigurationSection_t1436 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____configContext_16 = L_0;
		return;
	}
}
// System.Object System.Configuration.ConfigurationSection::GetRuntimeObject()
extern TypeInfo* StringReader_t685_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigXmlTextReader_t1443_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t862_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlDocument_t978_il2cpp_TypeInfo_var;
extern TypeInfo* IConfigurationSectionHandler_t1435_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationSection_GetRuntimeObject_m6697 (ConfigurationSection_t1436 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringReader_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(933);
		ConfigXmlTextReader_t1443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2949);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Path_t862_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1779);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		XmlDocument_t978_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1953);
		IConfigurationSectionHandler_t1435_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2948);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationSection_t1436 * V_0 = {0};
	Object_t * V_1 = {0};
	XmlReader_t843 * V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	XmlDocument_t978 * V_5 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	ConfigurationSection_t1436 * G_B4_0 = {0};
	Object_t * G_B7_0 = {0};
	{
		Object_t * L_0 = ConfigurationSection_get_SectionHandler_m6692(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_011f;
		}
	}
	{
		SectionInformation_t1434 * L_1 = (__this->___sectionInformation_13);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		SectionInformation_t1434 * L_2 = (__this->___sectionInformation_13);
		NullCheck(L_2);
		ConfigurationSection_t1436 * L_3 = SectionInformation_GetParentSection_m6868(L_2, /*hidden argument*/NULL);
		G_B4_0 = L_3;
		goto IL_0027;
	}

IL_0026:
	{
		G_B4_0 = ((ConfigurationSection_t1436 *)(NULL));
	}

IL_0027:
	{
		V_0 = G_B4_0;
		ConfigurationSection_t1436 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		ConfigurationSection_t1436 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(24 /* System.Object System.Configuration.ConfigurationSection::GetRuntimeObject() */, L_5);
		G_B7_0 = L_6;
		goto IL_003a;
	}

IL_0039:
	{
		G_B7_0 = NULL;
	}

IL_003a:
	{
		V_1 = G_B7_0;
		String_t* L_7 = ConfigurationElement_get_RawXml_m6536(__this, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0048;
		}
	}
	{
		Object_t * L_8 = V_1;
		return L_8;
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_9 = ConfigurationElement_get_RawXml_m6536(__this, /*hidden argument*/NULL);
			StringReader_t685 * L_10 = (StringReader_t685 *)il2cpp_codegen_object_new (StringReader_t685_il2cpp_TypeInfo_var);
			StringReader__ctor_m3189(L_10, L_9, /*hidden argument*/NULL);
			Configuration_t1398 * L_11 = ConfigurationElement_get_Configuration_m6532(__this, /*hidden argument*/NULL);
			NullCheck(L_11);
			String_t* L_12 = Configuration_get_FilePath_m6511(L_11, /*hidden argument*/NULL);
			ConfigXmlTextReader_t1443 * L_13 = (ConfigXmlTextReader_t1443 *)il2cpp_codegen_object_new (ConfigXmlTextReader_t1443_il2cpp_TypeInfo_var);
			ConfigXmlTextReader__ctor_m6731(L_13, L_10, L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			XmlReader_t843 * L_14 = V_2;
			ConfigurationSection_DoDeserializeSection_m6701(__this, L_14, /*hidden argument*/NULL);
			SectionInformation_t1434 * L_15 = ConfigurationSection_get_SectionInformation_m6694(__this, /*hidden argument*/NULL);
			NullCheck(L_15);
			String_t* L_16 = SectionInformation_get_ConfigSource_m6864(L_15, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_17 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
			if (L_17)
			{
				goto IL_00e6;
			}
		}

IL_0080:
		{
			SectionInformation_t1434 * L_18 = ConfigurationSection_get_SectionInformation_m6694(__this, /*hidden argument*/NULL);
			NullCheck(L_18);
			String_t* L_19 = SectionInformation_get_ConfigFilePath_m6859(L_18, /*hidden argument*/NULL);
			V_3 = L_19;
			String_t* L_20 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_21 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_00a3;
			}
		}

IL_0097:
		{
			String_t* L_22 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
			String_t* L_23 = Path_GetDirectoryName_m3565(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
			V_3 = L_23;
			goto IL_00a9;
		}

IL_00a3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_24 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
			V_3 = L_24;
		}

IL_00a9:
		{
			String_t* L_25 = V_3;
			SectionInformation_t1434 * L_26 = ConfigurationSection_get_SectionInformation_m6694(__this, /*hidden argument*/NULL);
			NullCheck(L_26);
			String_t* L_27 = SectionInformation_get_ConfigSource_m6864(L_26, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
			String_t* L_28 = Path_Combine_m3558(NULL /*static, unused*/, L_25, L_27, /*hidden argument*/NULL);
			V_4 = L_28;
			String_t* L_29 = V_4;
			bool L_30 = File_Exists_m1583(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
			if (!L_30)
			{
				goto IL_00e6;
			}
		}

IL_00c8:
		{
			String_t* L_31 = V_4;
			String_t* L_32 = File_ReadAllText_m6911(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
			ConfigurationElement_set_RawXml_m6537(__this, L_32, /*hidden argument*/NULL);
			SectionInformation_t1434 * L_33 = ConfigurationSection_get_SectionInformation_m6694(__this, /*hidden argument*/NULL);
			String_t* L_34 = ConfigurationElement_get_RawXml_m6536(__this, /*hidden argument*/NULL);
			NullCheck(L_33);
			SectionInformation_SetRawXml_m6871(L_33, L_34, /*hidden argument*/NULL);
		}

IL_00e6:
		{
			goto IL_00f1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00eb;
		throw e;
	}

CATCH_00eb:
	{ // begin catch(System.Object)
		goto IL_00f1;
	} // end catch (depth: 1)

IL_00f1:
	{
		XmlDocument_t978 * L_35 = (XmlDocument_t978 *)il2cpp_codegen_object_new (XmlDocument_t978_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m5010(L_35, /*hidden argument*/NULL);
		V_5 = L_35;
		XmlDocument_t978 * L_36 = V_5;
		String_t* L_37 = ConfigurationElement_get_RawXml_m6536(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		VirtActionInvoker1< String_t* >::Invoke(56 /* System.Void System.Xml.XmlDocument::LoadXml(System.String) */, L_36, L_37);
		Object_t * L_38 = ConfigurationSection_get_SectionHandler_m6692(__this, /*hidden argument*/NULL);
		Object_t * L_39 = V_1;
		Object_t * L_40 = ConfigurationSection_get_ConfigContext_m6695(__this, /*hidden argument*/NULL);
		XmlDocument_t978 * L_41 = V_5;
		NullCheck(L_41);
		XmlElement_t1103 * L_42 = XmlDocument_get_DocumentElement_m5071(L_41, /*hidden argument*/NULL);
		NullCheck(L_38);
		Object_t * L_43 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Object_t *, Object_t *, XmlNode_t1124 * >::Invoke(0 /* System.Object System.Configuration.IConfigurationSectionHandler::Create(System.Object,System.Object,System.Xml.XmlNode) */, IConfigurationSectionHandler_t1435_il2cpp_TypeInfo_var, L_38, L_39, L_40, L_42);
		return L_43;
	}

IL_011f:
	{
		return __this;
	}
}
// System.Boolean System.Configuration.ConfigurationSection::IsModified()
extern "C" bool ConfigurationSection_IsModified_m6698 (ConfigurationSection_t1436 * __this, const MethodInfo* method)
{
	{
		bool L_0 = ConfigurationElement_IsModified_m6563(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationSection::ResetModified()
extern "C" void ConfigurationSection_ResetModified_m6699 (ConfigurationSection_t1436 * __this, const MethodInfo* method)
{
	{
		ConfigurationElement_ResetModified_m6567(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationSection::CreateElement(System.Type)
extern TypeInfo* ConfigurationElement_t1416_il2cpp_TypeInfo_var;
extern "C" ConfigurationElement_t1416 * ConfigurationSection_CreateElement_m6700 (ConfigurationSection_t1436 * __this, Type_t * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t1416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2958);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationElement_t1416 * V_0 = {0};
	{
		Type_t * L_0 = ___t;
		Object_t * L_1 = Activator_CreateInstance_m3582(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((ConfigurationElement_t1416 *)Castclass(L_1, ConfigurationElement_t1416_il2cpp_TypeInfo_var));
		ConfigurationElement_t1416 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(5 /* System.Void System.Configuration.ConfigurationElement::Init() */, L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Configuration.ConfigurationElement::IsReadOnly() */, __this);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		ConfigurationElement_t1416 * L_4 = V_0;
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Configuration.ConfigurationElement::SetReadOnly() */, L_4);
	}

IL_0023:
	{
		ConfigurationElement_t1416 * L_5 = V_0;
		return L_5;
	}
}
// System.Void System.Configuration.ConfigurationSection::DoDeserializeSection(System.Xml.XmlReader)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlDocument_t978_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t685_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNodeReader_t1125_il2cpp_TypeInfo_var;
extern "C" void ConfigurationSection_DoDeserializeSection_m6701 (ConfigurationSection_t1436 * __this, XmlReader_t843 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		XmlDocument_t978_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1953);
		StringReader_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(933);
		XmlNodeReader_t1125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1954);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	ProtectedConfigurationProvider_t1458 * V_3 = {0};
	XmlDocument_t978 * V_4 = {0};
	XmlNode_t1124 * V_5 = {0};
	{
		XmlReader_t843 * L_0 = ___reader;
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(38 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_0);
		V_0 = (String_t*)NULL;
		V_1 = (String_t*)NULL;
		goto IL_004a;
	}

IL_0010:
	{
		XmlReader_t843 * L_1 = ___reader;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_1);
		V_2 = L_2;
		String_t* L_3 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1295(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral1526, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		XmlReader_t843 * L_5 = ___reader;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_5);
		V_0 = L_6;
		goto IL_004a;
	}

IL_0033:
	{
		String_t* L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m1295(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral1492, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		XmlReader_t843 * L_9 = ___reader;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_9);
		V_1 = L_10;
	}

IL_004a:
	{
		XmlReader_t843 * L_11 = ___reader;
		NullCheck(L_11);
		bool L_12 = (bool)VirtFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_11);
		if (L_12)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_13 = V_0;
		if (!L_13)
		{
			goto IL_00a9;
		}
	}
	{
		String_t* L_14 = V_0;
		ProtectedConfigurationProvider_t1458 * L_15 = ProtectedConfiguration_GetProvider_m6808(NULL /*static, unused*/, L_14, 1, /*hidden argument*/NULL);
		V_3 = L_15;
		XmlDocument_t978 * L_16 = (XmlDocument_t978 *)il2cpp_codegen_object_new (XmlDocument_t978_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m5010(L_16, /*hidden argument*/NULL);
		V_4 = L_16;
		XmlReader_t843 * L_17 = ___reader;
		NullCheck(L_17);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_17);
		XmlDocument_t978 * L_18 = V_4;
		XmlReader_t843 * L_19 = ___reader;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(46 /* System.String System.Xml.XmlReader::ReadInnerXml() */, L_19);
		StringReader_t685 * L_21 = (StringReader_t685 *)il2cpp_codegen_object_new (StringReader_t685_il2cpp_TypeInfo_var);
		StringReader__ctor_m3189(L_21, L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker1< TextReader_t1101 * >::Invoke(54 /* System.Void System.Xml.XmlDocument::Load(System.IO.TextReader) */, L_18, L_21);
		ProtectedConfigurationProvider_t1458 * L_22 = V_3;
		XmlDocument_t978 * L_23 = V_4;
		NullCheck(L_22);
		XmlNode_t1124 * L_24 = (XmlNode_t1124 *)VirtFuncInvoker1< XmlNode_t1124 *, XmlNode_t1124 * >::Invoke(6 /* System.Xml.XmlNode System.Configuration.ProtectedConfigurationProvider::Decrypt(System.Xml.XmlNode) */, L_22, L_23);
		V_5 = L_24;
		XmlNode_t1124 * L_25 = V_5;
		XmlNodeReader_t1125 * L_26 = (XmlNodeReader_t1125 *)il2cpp_codegen_object_new (XmlNodeReader_t1125_il2cpp_TypeInfo_var);
		XmlNodeReader__ctor_m5011(L_26, L_25, /*hidden argument*/NULL);
		___reader = L_26;
		SectionInformation_t1434 * L_27 = ConfigurationSection_get_SectionInformation_m6694(__this, /*hidden argument*/NULL);
		String_t* L_28 = V_0;
		NullCheck(L_27);
		SectionInformation_ProtectSection_m6870(L_27, L_28, /*hidden argument*/NULL);
		XmlReader_t843 * L_29 = ___reader;
		NullCheck(L_29);
		VirtFuncInvoker0< int32_t >::Invoke(38 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_29);
	}

IL_00a9:
	{
		String_t* L_30 = V_1;
		if (!L_30)
		{
			goto IL_00bb;
		}
	}
	{
		SectionInformation_t1434 * L_31 = ConfigurationSection_get_SectionInformation_m6694(__this, /*hidden argument*/NULL);
		String_t* L_32 = V_1;
		NullCheck(L_31);
		SectionInformation_set_ConfigSource_m6865(L_31, L_32, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		SectionInformation_t1434 * L_33 = ConfigurationSection_get_SectionInformation_m6694(__this, /*hidden argument*/NULL);
		String_t* L_34 = ConfigurationElement_get_RawXml_m6536(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		SectionInformation_SetRawXml_m6871(L_33, L_34, /*hidden argument*/NULL);
		XmlReader_t843 * L_35 = ___reader;
		VirtActionInvoker2< XmlReader_t843 *, bool >::Invoke(9 /* System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean) */, __this, L_35, 0);
		return;
	}
}
// System.Void System.Configuration.ConfigurationSection::DeserializeSection(System.Xml.XmlReader)
extern "C" void ConfigurationSection_DeserializeSection_m6702 (ConfigurationSection_t1436 * __this, XmlReader_t843 * ___reader, const MethodInfo* method)
{
	{
		XmlReader_t843 * L_0 = ___reader;
		ConfigurationSection_DoDeserializeSection_m6701(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationSection::DeserializeConfigSource(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t862_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationException_t1420_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t685_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigXmlTextReader_t1443_il2cpp_TypeInfo_var;
extern "C" void ConfigurationSection_DeserializeConfigSource_m6703 (ConfigurationSection_t1436 * __this, String_t* ___basePath, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Path_t862_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1779);
		ConfigurationException_t1420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2951);
		StringReader_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(933);
		ConfigXmlTextReader_t1443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2949);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		SectionInformation_t1434 * L_0 = ConfigurationSection_get_SectionInformation_m6694(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = SectionInformation_get_ConfigSource_m6864(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		bool L_5 = Path_IsPathRooted_m6903(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		ConfigurationException_t1420 * L_6 = (ConfigurationException_t1420 *)il2cpp_codegen_object_new (ConfigurationException_t1420_il2cpp_TypeInfo_var);
		ConfigurationException__ctor_m6886(L_6, (String_t*) &_stringLiteral1527, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002e:
	{
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Configuration.ConfigurationElement::HasLocalModifications() */, __this);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		ConfigurationException_t1420 * L_8 = (ConfigurationException_t1420 *)il2cpp_codegen_object_new (ConfigurationException_t1420_il2cpp_TypeInfo_var);
		ConfigurationException__ctor_m6886(L_8, (String_t*) &_stringLiteral1528, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0044:
	{
		String_t* L_9 = ___basePath;
		String_t* L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_11 = Path_Combine_m3558(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		String_t* L_12 = V_1;
		bool L_13 = File_Exists_m1583(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_006b;
		}
	}
	{
		ConfigurationElement_set_RawXml_m6537(__this, (String_t*)NULL, /*hidden argument*/NULL);
		SectionInformation_t1434 * L_14 = ConfigurationSection_get_SectionInformation_m6694(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		SectionInformation_SetRawXml_m6871(L_14, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}

IL_006b:
	{
		String_t* L_15 = V_1;
		String_t* L_16 = File_ReadAllText_m6911(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		ConfigurationElement_set_RawXml_m6537(__this, L_16, /*hidden argument*/NULL);
		SectionInformation_t1434 * L_17 = ConfigurationSection_get_SectionInformation_m6694(__this, /*hidden argument*/NULL);
		String_t* L_18 = ConfigurationElement_get_RawXml_m6536(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		SectionInformation_SetRawXml_m6871(L_17, L_18, /*hidden argument*/NULL);
		String_t* L_19 = ConfigurationElement_get_RawXml_m6536(__this, /*hidden argument*/NULL);
		StringReader_t685 * L_20 = (StringReader_t685 *)il2cpp_codegen_object_new (StringReader_t685_il2cpp_TypeInfo_var);
		StringReader__ctor_m3189(L_20, L_19, /*hidden argument*/NULL);
		String_t* L_21 = V_1;
		ConfigXmlTextReader_t1443 * L_22 = (ConfigXmlTextReader_t1443 *)il2cpp_codegen_object_new (ConfigXmlTextReader_t1443_il2cpp_TypeInfo_var);
		ConfigXmlTextReader__ctor_m6731(L_22, L_20, L_21, /*hidden argument*/NULL);
		VirtActionInvoker2< XmlReader_t843 *, bool >::Invoke(9 /* System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean) */, __this, L_22, 0);
		return;
	}
}
// System.String System.Configuration.ConfigurationSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern TypeInfo* StringWriter_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTextWriter_t1127_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigurationSection_SerializeSection_m6704 (ConfigurationSection_t1436 * __this, ConfigurationElement_t1416 * ___parentElement, String_t* ___name, int32_t ___saveMode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringWriter_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1956);
		XmlTextWriter_t1127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1957);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationElement_t1416 * V_0 = {0};
	String_t* V_1 = {0};
	StringWriter_t1126 * V_2 = {0};
	XmlTextWriter_t1127 * V_3 = {0};
	String_t* V_4 = {0};
	StringWriter_t1126 * V_5 = {0};
	bool V_6 = false;
	XmlTextWriter_t1127 * V_7 = {0};
	String_t* V_8 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->___externalDataXml_15 = (String_t*)NULL;
		ConfigurationElement_t1416 * L_0 = ___parentElement;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1416(__this, /*hidden argument*/NULL);
		ConfigurationElement_t1416 * L_2 = ConfigurationSection_CreateElement_m6700(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConfigurationElement_t1416 * L_3 = V_0;
		ConfigurationElement_t1416 * L_4 = ___parentElement;
		int32_t L_5 = ___saveMode;
		NullCheck(L_3);
		VirtActionInvoker3< ConfigurationElement_t1416 *, ConfigurationElement_t1416 *, int32_t >::Invoke(23 /* System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode) */, L_3, __this, L_4, L_5);
		goto IL_002a;
	}

IL_0028:
	{
		V_0 = __this;
	}

IL_002a:
	{
		StringWriter_t1126 * L_6 = (StringWriter_t1126 *)il2cpp_codegen_object_new (StringWriter_t1126_il2cpp_TypeInfo_var);
		StringWriter__ctor_m5013(L_6, /*hidden argument*/NULL);
		V_2 = L_6;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			StringWriter_t1126 * L_7 = V_2;
			XmlTextWriter_t1127 * L_8 = (XmlTextWriter_t1127 *)il2cpp_codegen_object_new (XmlTextWriter_t1127_il2cpp_TypeInfo_var);
			XmlTextWriter__ctor_m5014(L_8, L_7, /*hidden argument*/NULL);
			V_3 = L_8;
		}

IL_0037:
		try
		{ // begin try (depth: 2)
			XmlTextWriter_t1127 * L_9 = V_3;
			NullCheck(L_9);
			XmlTextWriter_set_Formatting_m5050(L_9, 1, /*hidden argument*/NULL);
			ConfigurationElement_t1416 * L_10 = V_0;
			XmlTextWriter_t1127 * L_11 = V_3;
			String_t* L_12 = ___name;
			NullCheck(L_10);
			VirtFuncInvoker2< bool, XmlWriter_t1056 *, String_t* >::Invoke(22 /* System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String) */, L_10, L_11, L_12);
			XmlTextWriter_t1127 * L_13 = V_3;
			NullCheck(L_13);
			VirtActionInvoker0::Invoke(9 /* System.Void System.Xml.XmlTextWriter::Close() */, L_13);
			IL2CPP_LEAVE(0x5F, FINALLY_0052);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t306 *)e.ex;
			goto FINALLY_0052;
		}

FINALLY_0052:
		{ // begin finally (depth: 2)
			{
				XmlTextWriter_t1127 * L_14 = V_3;
				if (!L_14)
				{
					goto IL_005e;
				}
			}

IL_0058:
			{
				XmlTextWriter_t1127 * L_15 = V_3;
				NullCheck(L_15);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_15);
			}

IL_005e:
			{
				IL2CPP_END_FINALLY(82)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(82)
		{
			IL2CPP_JUMP_TBL(0x5F, IL_005f)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
		}

IL_005f:
		{
			StringWriter_t1126 * L_16 = V_2;
			NullCheck(L_16);
			String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.IO.StringWriter::ToString() */, L_16);
			V_1 = L_17;
			IL2CPP_LEAVE(0x78, FINALLY_006b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_006b;
	}

FINALLY_006b:
	{ // begin finally (depth: 1)
		{
			StringWriter_t1126 * L_18 = V_2;
			if (!L_18)
			{
				goto IL_0077;
			}
		}

IL_0071:
		{
			StringWriter_t1126 * L_19 = V_2;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_19);
		}

IL_0077:
		{
			IL2CPP_END_FINALLY(107)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(107)
	{
		IL2CPP_JUMP_TBL(0x78, IL_0078)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0078:
	{
		SectionInformation_t1434 * L_20 = ConfigurationSection_get_SectionInformation_m6694(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21 = SectionInformation_get_ConfigSource_m6864(L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		String_t* L_22 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0093;
		}
	}
	{
		String_t* L_24 = V_1;
		return L_24;
	}

IL_0093:
	{
		String_t* L_25 = V_1;
		__this->___externalDataXml_15 = L_25;
		StringWriter_t1126 * L_26 = (StringWriter_t1126 *)il2cpp_codegen_object_new (StringWriter_t1126_il2cpp_TypeInfo_var);
		StringWriter__ctor_m5013(L_26, /*hidden argument*/NULL);
		V_5 = L_26;
	}

IL_00a1:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_27 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_28 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
			V_6 = ((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
			StringWriter_t1126 * L_29 = V_5;
			XmlTextWriter_t1127 * L_30 = (XmlTextWriter_t1127 *)il2cpp_codegen_object_new (XmlTextWriter_t1127_il2cpp_TypeInfo_var);
			XmlTextWriter__ctor_m5014(L_30, L_29, /*hidden argument*/NULL);
			V_7 = L_30;
		}

IL_00b5:
		try
		{ // begin try (depth: 2)
			{
				bool L_31 = V_6;
				if (!L_31)
				{
					goto IL_00c4;
				}
			}

IL_00bc:
			{
				XmlTextWriter_t1127 * L_32 = V_7;
				String_t* L_33 = ___name;
				NullCheck(L_32);
				XmlWriter_WriteStartElement_m6887(L_32, L_33, /*hidden argument*/NULL);
			}

IL_00c4:
			{
				XmlTextWriter_t1127 * L_34 = V_7;
				String_t* L_35 = V_4;
				NullCheck(L_34);
				XmlWriter_WriteAttributeString_m5034(L_34, (String_t*) &_stringLiteral1492, L_35, /*hidden argument*/NULL);
				bool L_36 = V_6;
				if (!L_36)
				{
					goto IL_00e0;
				}
			}

IL_00d9:
			{
				XmlTextWriter_t1127 * L_37 = V_7;
				NullCheck(L_37);
				VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlTextWriter::WriteEndElement() */, L_37);
			}

IL_00e0:
			{
				IL2CPP_LEAVE(0xF4, FINALLY_00e5);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t306 *)e.ex;
			goto FINALLY_00e5;
		}

FINALLY_00e5:
		{ // begin finally (depth: 2)
			{
				XmlTextWriter_t1127 * L_38 = V_7;
				if (!L_38)
				{
					goto IL_00f3;
				}
			}

IL_00ec:
			{
				XmlTextWriter_t1127 * L_39 = V_7;
				NullCheck(L_39);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_39);
			}

IL_00f3:
			{
				IL2CPP_END_FINALLY(229)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(229)
		{
			IL2CPP_JUMP_TBL(0xF4, IL_00f4)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
		}

IL_00f4:
		{
			StringWriter_t1126 * L_40 = V_5;
			NullCheck(L_40);
			String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.IO.StringWriter::ToString() */, L_40);
			V_8 = L_41;
			IL2CPP_LEAVE(0x116, FINALLY_0107);
		}

IL_0102:
		{
			; // IL_0102: leave IL_0116
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0107;
	}

FINALLY_0107:
	{ // begin finally (depth: 1)
		{
			StringWriter_t1126 * L_42 = V_5;
			if (!L_42)
			{
				goto IL_0115;
			}
		}

IL_010e:
		{
			StringWriter_t1126 * L_43 = V_5;
			NullCheck(L_43);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_43);
		}

IL_0115:
		{
			IL2CPP_END_FINALLY(263)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(263)
	{
		IL2CPP_JUMP_TBL(0x116, IL_0116)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0116:
	{
		String_t* L_44 = V_8;
		return L_44;
	}
}
// System.Configuration.ConfigurationSectionCollection/<GetEnumerator>c__Iterator0
#include "System_Configuration_System_Configuration_ConfigurationSecti_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationSectionCollection/<GetEnumerator>c__Iterator0
#include "System_Configuration_System_Configuration_ConfigurationSecti_0MethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Configuration.ConfigInfoCollection
#include "System_Configuration_System_Configuration_ConfigInfoCollecti.h"
// System.Configuration.ConfigInfoCollection
#include "System_Configuration_System_Configuration_ConfigInfoCollectiMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationSectionCollection/<GetEnumerator>c__Iterator0::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0__ctor_m6705 (U3CGetEnumeratorU3Ec__Iterator0_t1438 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.ConfigurationSectionCollection/<GetEnumerator>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6706 (U3CGetEnumeratorU3Ec__Iterator0_t1438 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object System.Configuration.ConfigurationSectionCollection/<GetEnumerator>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m6707 (U3CGetEnumeratorU3Ec__Iterator0_t1438 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean System.Configuration.ConfigurationSectionCollection/<GetEnumerator>c__Iterator0::MoveNext()
extern TypeInfo* IEnumerable_t662_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m6708 (U3CGetEnumeratorU3Ec__Iterator0_t1438 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Object_t * V_2 = {0};
	bool V_3 = false;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		V_1 = 0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0046;
		}
	}
	{
		goto IL_00c9;
	}

IL_0023:
	{
		ConfigurationSectionCollection_t1437 * L_2 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_2);
		SectionGroupInfo_t1406 * L_3 = (L_2->___group_10);
		NullCheck(L_3);
		ConfigInfoCollection_t1464 * L_4 = SectionGroupInfo_get_Sections_m6842(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Object_t * L_5 = ConfigInfoCollection_get_AllKeys_m6852(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t662_il2cpp_TypeInfo_var, L_5);
		__this->___U3CU24s_32U3E__0_0 = L_6;
		V_0 = ((int32_t)-3);
	}

IL_0046:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_7 = V_0;
			if (((int32_t)((int32_t)L_7-(int32_t)1)) == 0)
			{
				goto IL_0092;
			}
		}

IL_0052:
		{
			goto IL_0092;
		}

IL_0057:
		{
			Object_t * L_8 = (__this->___U3CU24s_32U3E__0_0);
			NullCheck(L_8);
			Object_t * L_9 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_8);
			__this->___U3CkeyU3E__1_1 = ((String_t*)Castclass(L_9, String_t_il2cpp_TypeInfo_var));
			ConfigurationSectionCollection_t1437 * L_10 = (__this->___U3CU3Ef__this_4);
			String_t* L_11 = (__this->___U3CkeyU3E__1_1);
			NullCheck(L_10);
			ConfigurationSection_t1436 * L_12 = ConfigurationSectionCollection_get_Item_m6713(L_10, L_11, /*hidden argument*/NULL);
			__this->___U24current_3 = L_12;
			__this->___U24PC_2 = 1;
			V_1 = 1;
			IL2CPP_LEAVE(0xCB, FINALLY_00a7);
		}

IL_0092:
		{
			Object_t * L_13 = (__this->___U3CU24s_32U3E__0_0);
			NullCheck(L_13);
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0057;
			}
		}

IL_00a2:
		{
			IL2CPP_LEAVE(0xC2, FINALLY_00a7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_00a7;
	}

FINALLY_00a7:
	{ // begin finally (depth: 1)
		{
			bool L_15 = V_1;
			if (!L_15)
			{
				goto IL_00ab;
			}
		}

IL_00aa:
		{
			IL2CPP_END_FINALLY(167)
		}

IL_00ab:
		{
			Object_t * L_16 = (__this->___U3CU24s_32U3E__0_0);
			V_2 = ((Object_t *)IsInst(L_16, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_17 = V_2;
			if (L_17)
			{
				goto IL_00bb;
			}
		}

IL_00ba:
		{
			IL2CPP_END_FINALLY(167)
		}

IL_00bb:
		{
			Object_t * L_18 = V_2;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_18);
			IL2CPP_END_FINALLY(167)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(167)
	{
		IL2CPP_JUMP_TBL(0xCB, IL_00cb)
		IL2CPP_JUMP_TBL(0xC2, IL_00c2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_00c2:
	{
		__this->___U24PC_2 = (-1);
	}

IL_00c9:
	{
		return 0;
	}

IL_00cb:
	{
		return 1;
	}
	// Dead block : IL_00cd: ldloc.3
}
// System.Void System.Configuration.ConfigurationSectionCollection/<GetEnumerator>c__Iterator0::Dispose()
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m6709 (U3CGetEnumeratorU3Ec__Iterator0_t1438 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Object_t * V_1 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003d;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003d;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3D, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t * L_2 = (__this->___U3CU24s_32U3E__0_0);
			V_1 = ((Object_t *)IsInst(L_2, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_3 = V_1;
			if (L_3)
			{
				goto IL_0036;
			}
		}

IL_0035:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_0036:
		{
			Object_t * L_4 = V_1;
			NullCheck(L_4);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_4);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_003d:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
#include "System_System_Collections_Specialized_NameObjectCollectionBa_0.h"


// System.Void System.Configuration.ConfigurationSectionCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern TypeInfo* StringComparer_t678_il2cpp_TypeInfo_var;
extern "C" void ConfigurationSectionCollection__ctor_m6710 (ConfigurationSectionCollection_t1437 * __this, Configuration_t1398 * ___config, SectionGroupInfo_t1406 * ___group, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringComparer_t678_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(918);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t678_il2cpp_TypeInfo_var);
		StringComparer_t678 * L_0 = StringComparer_get_Ordinal_m6912(NULL /*static, unused*/, /*hidden argument*/NULL);
		NameObjectCollectionBase__ctor_m6913(__this, L_0, /*hidden argument*/NULL);
		Configuration_t1398 * L_1 = ___config;
		__this->___config_11 = L_1;
		SectionGroupInfo_t1406 * L_2 = ___group;
		__this->___group_10 = L_2;
		return;
	}
}
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionCollection::get_Keys()
extern "C" KeysCollection_t1468 * ConfigurationSectionCollection_get_Keys_m6711 (ConfigurationSectionCollection_t1437 * __this, const MethodInfo* method)
{
	{
		SectionGroupInfo_t1406 * L_0 = (__this->___group_10);
		NullCheck(L_0);
		ConfigInfoCollection_t1464 * L_1 = SectionGroupInfo_get_Sections_m6842(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		KeysCollection_t1468 * L_2 = (KeysCollection_t1468 *)VirtFuncInvoker0< KeysCollection_t1468 * >::Invoke(10 /* System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys() */, L_1);
		return L_2;
	}
}
// System.Int32 System.Configuration.ConfigurationSectionCollection::get_Count()
extern "C" int32_t ConfigurationSectionCollection_get_Count_m6712 (ConfigurationSectionCollection_t1437 * __this, const MethodInfo* method)
{
	{
		SectionGroupInfo_t1406 * L_0 = (__this->___group_10);
		NullCheck(L_0);
		ConfigInfoCollection_t1464 * L_1 = SectionGroupInfo_get_Sections_m6842(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_1);
		return L_2;
	}
}
// System.Configuration.ConfigurationSection System.Configuration.ConfigurationSectionCollection::get_Item(System.String)
extern TypeInfo* ConfigurationSection_t1436_il2cpp_TypeInfo_var;
extern TypeInfo* SectionInfo_t1463_il2cpp_TypeInfo_var;
extern "C" ConfigurationSection_t1436 * ConfigurationSectionCollection_get_Item_m6713 (ConfigurationSectionCollection_t1437 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSection_t1436_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2946);
		SectionInfo_t1463_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2982);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationSection_t1436 * V_0 = {0};
	SectionInfo_t1463 * V_1 = {0};
	{
		String_t* L_0 = ___name;
		Object_t * L_1 = NameObjectCollectionBase_BaseGet_m6914(__this, L_0, /*hidden argument*/NULL);
		V_0 = ((ConfigurationSection_t1436 *)IsInst(L_1, ConfigurationSection_t1436_il2cpp_TypeInfo_var));
		ConfigurationSection_t1436 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0050;
		}
	}
	{
		SectionGroupInfo_t1406 * L_3 = (__this->___group_10);
		NullCheck(L_3);
		ConfigInfoCollection_t1464 * L_4 = SectionGroupInfo_get_Sections_m6842(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		ConfigInfo_t1402 * L_6 = ConfigInfoCollection_get_Item_m6853(L_4, L_5, /*hidden argument*/NULL);
		V_1 = ((SectionInfo_t1463 *)IsInst(L_6, SectionInfo_t1463_il2cpp_TypeInfo_var));
		SectionInfo_t1463 * L_7 = V_1;
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (ConfigurationSection_t1436 *)NULL;
	}

IL_0032:
	{
		Configuration_t1398 * L_8 = (__this->___config_11);
		SectionInfo_t1463 * L_9 = V_1;
		NullCheck(L_8);
		ConfigurationSection_t1436 * L_10 = Configuration_GetSectionInstance_m6518(L_8, L_9, 1, /*hidden argument*/NULL);
		V_0 = L_10;
		ConfigurationSection_t1436 * L_11 = V_0;
		if (L_11)
		{
			goto IL_0048;
		}
	}
	{
		return (ConfigurationSection_t1436 *)NULL;
	}

IL_0048:
	{
		String_t* L_12 = ___name;
		ConfigurationSection_t1436 * L_13 = V_0;
		NameObjectCollectionBase_BaseSet_m6915(__this, L_12, L_13, /*hidden argument*/NULL);
	}

IL_0050:
	{
		ConfigurationSection_t1436 * L_14 = V_0;
		return L_14;
	}
}
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionCollection::GetEnumerator()
extern TypeInfo* U3CGetEnumeratorU3Ec__Iterator0_t1438_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationSectionCollection_GetEnumerator_m6714 (ConfigurationSectionCollection_t1437 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetEnumeratorU3Ec__Iterator0_t1438_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2983);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetEnumeratorU3Ec__Iterator0_t1438 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator0_t1438 * L_0 = (U3CGetEnumeratorU3Ec__Iterator0_t1438 *)il2cpp_codegen_object_new (U3CGetEnumeratorU3Ec__Iterator0_t1438_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ec__Iterator0__ctor_m6705(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetEnumeratorU3Ec__Iterator0_t1438 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_4 = __this;
		U3CGetEnumeratorU3Ec__Iterator0_t1438 * L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Configuration.ConfigurationSectionCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* NotImplementedException_t333_il2cpp_TypeInfo_var;
extern "C" void ConfigurationSectionCollection_GetObjectData_m6715 (ConfigurationSectionCollection_t1437 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
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
#ifndef _MSC_VER
#else
#endif

// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationSectionGroup::.ctor()
extern "C" void ConfigurationSectionGroup__ctor_m6716 (ConfigurationSectionGroup_t1404 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::get_Config()
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" Configuration_t1398 * ConfigurationSectionGroup_get_Config_m6717 (ConfigurationSectionGroup_t1404 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		Configuration_t1398 * L_0 = (__this->___config_2);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t1116 * L_1 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_1, (String_t*) &_stringLiteral1529, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Configuration_t1398 * L_2 = (__this->___config_2);
		return L_2;
	}
}
// System.Void System.Configuration.ConfigurationSectionGroup::Initialize(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SystemException_t916_il2cpp_TypeInfo_var;
extern "C" void ConfigurationSectionGroup_Initialize_m6718 (ConfigurationSectionGroup_t1404 * __this, Configuration_t1398 * ___config, SectionGroupInfo_t1406 * ___group, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		SystemException_t916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1983);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___initialized_4);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m1416(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m1248(NULL /*static, unused*/, (String_t*) &_stringLiteral1530, L_1, /*hidden argument*/NULL);
		SystemException_t916 * L_3 = (SystemException_t916 *)il2cpp_codegen_object_new (SystemException_t916_il2cpp_TypeInfo_var);
		SystemException__ctor_m4993(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0021:
	{
		__this->___initialized_4 = 1;
		Configuration_t1398 * L_4 = ___config;
		__this->___config_2 = L_4;
		SectionGroupInfo_t1406 * L_5 = ___group;
		__this->___group_3 = L_5;
		return;
	}
}
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::get_SectionGroups()
extern TypeInfo* ConfigurationSectionGroupCollection_t1440_il2cpp_TypeInfo_var;
extern "C" ConfigurationSectionGroupCollection_t1440 * ConfigurationSectionGroup_get_SectionGroups_m6719 (ConfigurationSectionGroup_t1404 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSectionGroupCollection_t1440_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2984);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationSectionGroupCollection_t1440 * L_0 = (__this->___groups_1);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		Configuration_t1398 * L_1 = ConfigurationSectionGroup_get_Config_m6717(__this, /*hidden argument*/NULL);
		SectionGroupInfo_t1406 * L_2 = (__this->___group_3);
		ConfigurationSectionGroupCollection_t1440 * L_3 = (ConfigurationSectionGroupCollection_t1440 *)il2cpp_codegen_object_new (ConfigurationSectionGroupCollection_t1440_il2cpp_TypeInfo_var);
		ConfigurationSectionGroupCollection__ctor_m6721(L_3, L_1, L_2, /*hidden argument*/NULL);
		__this->___groups_1 = L_3;
	}

IL_0022:
	{
		ConfigurationSectionGroupCollection_t1440 * L_4 = (__this->___groups_1);
		return L_4;
	}
}
// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::get_Sections()
extern TypeInfo* ConfigurationSectionCollection_t1437_il2cpp_TypeInfo_var;
extern "C" ConfigurationSectionCollection_t1437 * ConfigurationSectionGroup_get_Sections_m6720 (ConfigurationSectionGroup_t1404 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSectionCollection_t1437_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2985);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationSectionCollection_t1437 * L_0 = (__this->___sections_0);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		Configuration_t1398 * L_1 = ConfigurationSectionGroup_get_Config_m6717(__this, /*hidden argument*/NULL);
		SectionGroupInfo_t1406 * L_2 = (__this->___group_3);
		ConfigurationSectionCollection_t1437 * L_3 = (ConfigurationSectionCollection_t1437 *)il2cpp_codegen_object_new (ConfigurationSectionCollection_t1437_il2cpp_TypeInfo_var);
		ConfigurationSectionCollection__ctor_m6710(L_3, L_1, L_2, /*hidden argument*/NULL);
		__this->___sections_0 = L_3;
	}

IL_0022:
	{
		ConfigurationSectionCollection_t1437 * L_4 = (__this->___sections_0);
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ConfigurationSectionGroupCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern TypeInfo* StringComparer_t678_il2cpp_TypeInfo_var;
extern "C" void ConfigurationSectionGroupCollection__ctor_m6721 (ConfigurationSectionGroupCollection_t1440 * __this, Configuration_t1398 * ___config, SectionGroupInfo_t1406 * ___group, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringComparer_t678_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(918);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t678_il2cpp_TypeInfo_var);
		StringComparer_t678 * L_0 = StringComparer_get_Ordinal_m6912(NULL /*static, unused*/, /*hidden argument*/NULL);
		NameObjectCollectionBase__ctor_m6913(__this, L_0, /*hidden argument*/NULL);
		Configuration_t1398 * L_1 = ___config;
		__this->___config_11 = L_1;
		SectionGroupInfo_t1406 * L_2 = ___group;
		__this->___group_10 = L_2;
		return;
	}
}
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionGroupCollection::get_Keys()
extern "C" KeysCollection_t1468 * ConfigurationSectionGroupCollection_get_Keys_m6722 (ConfigurationSectionGroupCollection_t1440 * __this, const MethodInfo* method)
{
	{
		SectionGroupInfo_t1406 * L_0 = (__this->___group_10);
		NullCheck(L_0);
		ConfigInfoCollection_t1464 * L_1 = SectionGroupInfo_get_Groups_m6843(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		KeysCollection_t1468 * L_2 = (KeysCollection_t1468 *)VirtFuncInvoker0< KeysCollection_t1468 * >::Invoke(10 /* System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys() */, L_1);
		return L_2;
	}
}
// System.Int32 System.Configuration.ConfigurationSectionGroupCollection::get_Count()
extern "C" int32_t ConfigurationSectionGroupCollection_get_Count_m6723 (ConfigurationSectionGroupCollection_t1440 * __this, const MethodInfo* method)
{
	{
		SectionGroupInfo_t1406 * L_0 = (__this->___group_10);
		NullCheck(L_0);
		ConfigInfoCollection_t1464 * L_1 = SectionGroupInfo_get_Groups_m6843(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_1);
		return L_2;
	}
}
// System.Configuration.ConfigurationSectionGroup System.Configuration.ConfigurationSectionGroupCollection::get_Item(System.String)
extern TypeInfo* ConfigurationSectionGroup_t1404_il2cpp_TypeInfo_var;
extern TypeInfo* SectionGroupInfo_t1406_il2cpp_TypeInfo_var;
extern "C" ConfigurationSectionGroup_t1404 * ConfigurationSectionGroupCollection_get_Item_m6724 (ConfigurationSectionGroupCollection_t1440 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSectionGroup_t1404_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2945);
		SectionGroupInfo_t1406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2943);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationSectionGroup_t1404 * V_0 = {0};
	SectionGroupInfo_t1406 * V_1 = {0};
	{
		String_t* L_0 = ___name;
		Object_t * L_1 = NameObjectCollectionBase_BaseGet_m6914(__this, L_0, /*hidden argument*/NULL);
		V_0 = ((ConfigurationSectionGroup_t1404 *)IsInst(L_1, ConfigurationSectionGroup_t1404_il2cpp_TypeInfo_var));
		ConfigurationSectionGroup_t1404 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		SectionGroupInfo_t1406 * L_3 = (__this->___group_10);
		NullCheck(L_3);
		ConfigInfoCollection_t1464 * L_4 = SectionGroupInfo_get_Groups_m6843(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		ConfigInfo_t1402 * L_6 = ConfigInfoCollection_get_Item_m6853(L_4, L_5, /*hidden argument*/NULL);
		V_1 = ((SectionGroupInfo_t1406 *)IsInst(L_6, SectionGroupInfo_t1406_il2cpp_TypeInfo_var));
		SectionGroupInfo_t1406 * L_7 = V_1;
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (ConfigurationSectionGroup_t1404 *)NULL;
	}

IL_0032:
	{
		Configuration_t1398 * L_8 = (__this->___config_11);
		SectionGroupInfo_t1406 * L_9 = V_1;
		NullCheck(L_8);
		ConfigurationSectionGroup_t1404 * L_10 = Configuration_GetSectionGroupInstance_m6519(L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11 = ___name;
		ConfigurationSectionGroup_t1404 * L_12 = V_0;
		NameObjectCollectionBase_BaseSet_m6915(__this, L_11, L_12, /*hidden argument*/NULL);
	}

IL_0047:
	{
		ConfigurationSectionGroup_t1404 * L_13 = V_0;
		return L_13;
	}
}
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionGroupCollection::GetEnumerator()
extern TypeInfo* IEnumerable_t662_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationSectionGroupCollection_GetEnumerator_m6725 (ConfigurationSectionGroupCollection_t1440 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		s_Il2CppMethodIntialized = true;
	}
	{
		SectionGroupInfo_t1406 * L_0 = (__this->___group_10);
		NullCheck(L_0);
		ConfigInfoCollection_t1464 * L_1 = SectionGroupInfo_get_Groups_m6843(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t * L_2 = ConfigInfoCollection_get_AllKeys_m6852(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t662_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}
}
// System.Void System.Configuration.ConfigurationSectionGroupCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* NotImplementedException_t333_il2cpp_TypeInfo_var;
extern "C" void ConfigurationSectionGroupCollection_GetObjectData_m6726 (ConfigurationSectionGroupCollection_t1440 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
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
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationUserLevel
#include "System_Configuration_System_Configuration_ConfigurationUserLMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationValidatorAttribute::get_ValidatorInstance()
extern TypeInfo* ConfigurationValidatorBase_t1428_il2cpp_TypeInfo_var;
extern "C" ConfigurationValidatorBase_t1428 * ConfigurationValidatorAttribute_get_ValidatorInstance_m6727 (ConfigurationValidatorAttribute_t1442 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationValidatorBase_t1428_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2986);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationValidatorBase_t1428 * L_0 = (__this->___instance_1);
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = (__this->___validatorType_0);
		Object_t * L_2 = Activator_CreateInstance_m3582(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->___instance_1 = ((ConfigurationValidatorBase_t1428 *)Castclass(L_2, ConfigurationValidatorBase_t1428_il2cpp_TypeInfo_var));
	}

IL_0021:
	{
		ConfigurationValidatorBase_t1428 * L_3 = (__this->___instance_1);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ConfigurationValidatorBase::.ctor()
extern "C" void ConfigurationValidatorBase__ctor_m6728 (ConfigurationValidatorBase_t1428 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Configuration.ConfigurationValidatorBase::CanValidate(System.Type)
extern "C" bool ConfigurationValidatorBase_CanValidate_m6729 (ConfigurationValidatorBase_t1428 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Configuration.ConfigurationValidatorBase::Validate(System.Object)
#ifndef _MSC_VER
#else
#endif



// System.Void ConfigXmlTextReader::.ctor(System.IO.Stream,System.String)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" void ConfigXmlTextReader__ctor_m6730 (ConfigXmlTextReader_t1443 * __this, Stream_t844 * ___s, String_t* ___fileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stream_t844 * L_0 = ___s;
		XmlTextReader__ctor_m6916(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___fileName;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t692 * L_2 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_2, (String_t*) &_stringLiteral1531, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		String_t* L_3 = ___fileName;
		__this->___fileName_8 = L_3;
		return;
	}
}
// System.Void ConfigXmlTextReader::.ctor(System.IO.TextReader,System.String)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" void ConfigXmlTextReader__ctor_m6731 (ConfigXmlTextReader_t1443 * __this, TextReader_t1101 * ___input, String_t* ___fileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	{
		TextReader_t1101 * L_0 = ___input;
		XmlTextReader__ctor_m4999(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___fileName;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t692 * L_2 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_2, (String_t*) &_stringLiteral1531, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		String_t* L_3 = ___fileName;
		__this->___fileName_8 = L_3;
		return;
	}
}
// System.String ConfigXmlTextReader::get_Filename()
extern "C" String_t* ConfigXmlTextReader_get_Filename_m6732 (ConfigXmlTextReader_t1443 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___fileName_8);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.DefaultSection::.ctor()
extern "C" void DefaultSection__ctor_m6733 (DefaultSection_t1444 * __this, const MethodInfo* method)
{
	{
		ConfigurationSection__ctor_m6691(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.DefaultSection::.cctor()
extern TypeInfo* ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultSection_t1444_il2cpp_TypeInfo_var;
extern "C" void DefaultSection__cctor_m6734 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2954);
		DefaultSection_t1444_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2947);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationPropertyCollection_t1412 * L_0 = (ConfigurationPropertyCollection_t1412 *)il2cpp_codegen_object_new (ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection__ctor_m6685(L_0, /*hidden argument*/NULL);
		((DefaultSection_t1444_StaticFields*)DefaultSection_t1444_il2cpp_TypeInfo_var->static_fields)->___properties_17 = L_0;
		return;
	}
}
// System.Void System.Configuration.DefaultSection::DeserializeSection(System.Xml.XmlReader)
extern "C" void DefaultSection_DeserializeSection_m6735 (DefaultSection_t1444 * __this, XmlReader_t843 * ___xmlReader, const MethodInfo* method)
{
	{
		String_t* L_0 = ConfigurationElement_get_RawXml_m6536(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		XmlReader_t843 * L_1 = ___xmlReader;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(47 /* System.String System.Xml.XmlReader::ReadOuterXml() */, L_1);
		ConfigurationElement_set_RawXml_m6537(__this, L_2, /*hidden argument*/NULL);
		goto IL_0022;
	}

IL_001c:
	{
		XmlReader_t843 * L_3 = ___xmlReader;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(54 /* System.Void System.Xml.XmlReader::Skip() */, L_3);
	}

IL_0022:
	{
		return;
	}
}
// System.Boolean System.Configuration.DefaultSection::IsModified()
extern "C" bool DefaultSection_IsModified_m6736 (DefaultSection_t1444 * __this, const MethodInfo* method)
{
	{
		bool L_0 = ConfigurationSection_IsModified_m6698(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Configuration.DefaultSection::Reset(System.Configuration.ConfigurationElement)
extern "C" void DefaultSection_Reset_m6737 (DefaultSection_t1444 * __this, ConfigurationElement_t1416 * ___parentSection, const MethodInfo* method)
{
	{
		ConfigurationElement_t1416 * L_0 = ___parentSection;
		ConfigurationElement_Reset_m6566(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.DefaultSection::ResetModified()
extern "C" void DefaultSection_ResetModified_m6738 (DefaultSection_t1444 * __this, const MethodInfo* method)
{
	{
		ConfigurationSection_ResetModified_m6699(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Configuration.DefaultSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C" String_t* DefaultSection_SerializeSection_m6739 (DefaultSection_t1444 * __this, ConfigurationElement_t1416 * ___parentSection, String_t* ___name, int32_t ___saveMode, const MethodInfo* method)
{
	{
		ConfigurationElement_t1416 * L_0 = ___parentSection;
		String_t* L_1 = ___name;
		int32_t L_2 = ___saveMode;
		String_t* L_3 = ConfigurationSection_SerializeSection_m6704(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.DefaultSection::get_Properties()
extern TypeInfo* DefaultSection_t1444_il2cpp_TypeInfo_var;
extern "C" ConfigurationPropertyCollection_t1412 * DefaultSection_get_Properties_m6740 (DefaultSection_t1444 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultSection_t1444_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2947);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DefaultSection_t1444_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection_t1412 * L_0 = ((DefaultSection_t1444_StaticFields*)DefaultSection_t1444_il2cpp_TypeInfo_var->static_fields)->___properties_17;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.DefaultValidator::.ctor()
extern "C" void DefaultValidator__ctor_m6741 (DefaultValidator_t1445 * __this, const MethodInfo* method)
{
	{
		ConfigurationValidatorBase__ctor_m6728(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Configuration.DefaultValidator::CanValidate(System.Type)
extern "C" bool DefaultValidator_CanValidate_m6742 (DefaultValidator_t1445 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Configuration.DefaultValidator::Validate(System.Object)
extern "C" void DefaultValidator_Validate_m6743 (DefaultValidator_t1445 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ElementInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.PropertyInformation)
extern TypeInfo* PropertyInformationCollection_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t1429_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInformation_t1446_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void ElementInformation__ctor_m6744 (ElementInformation_t1414 * __this, ConfigurationElement_t1416 * ___owner, PropertyInformation_t1446 * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyInformationCollection_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2987);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		ConfigurationProperty_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2955);
		PropertyInformation_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2959);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationProperty_t1429 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		PropertyInformation_t1446 * L_0 = ___propertyInfo;
		__this->___propertyInfo_0 = L_0;
		ConfigurationElement_t1416 * L_1 = ___owner;
		__this->___owner_1 = L_1;
		PropertyInformationCollection_t1447 * L_2 = (PropertyInformationCollection_t1447 *)il2cpp_codegen_object_new (PropertyInformationCollection_t1447_il2cpp_TypeInfo_var);
		PropertyInformationCollection__ctor_m6801(L_2, /*hidden argument*/NULL);
		__this->___properties_2 = L_2;
		ConfigurationElement_t1416 * L_3 = ___owner;
		NullCheck(L_3);
		ConfigurationPropertyCollection_t1412 * L_4 = (ConfigurationPropertyCollection_t1412 *)VirtFuncInvoker0< ConfigurationPropertyCollection_t1412 * >::Invoke(6 /* System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties() */, L_3);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_4);
		V_1 = L_5;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004e;
		}

IL_0030:
		{
			Object_t * L_6 = V_1;
			NullCheck(L_6);
			Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_6);
			V_0 = ((ConfigurationProperty_t1429 *)Castclass(L_7, ConfigurationProperty_t1429_il2cpp_TypeInfo_var));
			PropertyInformationCollection_t1447 * L_8 = (__this->___properties_2);
			ConfigurationElement_t1416 * L_9 = ___owner;
			ConfigurationProperty_t1429 * L_10 = V_0;
			PropertyInformation_t1446 * L_11 = (PropertyInformation_t1446 *)il2cpp_codegen_object_new (PropertyInformation_t1446_il2cpp_TypeInfo_var);
			PropertyInformation__ctor_m6782(L_11, L_9, L_10, /*hidden argument*/NULL);
			NullCheck(L_8);
			PropertyInformationCollection_Add_m6804(L_8, L_11, /*hidden argument*/NULL);
		}

IL_004e:
		{
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0030;
			}
		}

IL_0059:
		{
			IL2CPP_LEAVE(0x70, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_1;
			V_2 = ((Object_t *)IsInst(L_14, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_2;
			if (L_15)
			{
				goto IL_0069;
			}
		}

IL_0068:
		{
			IL2CPP_END_FINALLY(94)
		}

IL_0069:
		{
			Object_t * L_16 = V_2;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(94)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_JUMP_TBL(0x70, IL_0070)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0070:
	{
		return;
	}
}
// System.Configuration.PropertyInformationCollection System.Configuration.ElementInformation::get_Properties()
extern "C" PropertyInformationCollection_t1447 * ElementInformation_get_Properties_m6745 (ElementInformation_t1414 * __this, const MethodInfo* method)
{
	{
		PropertyInformationCollection_t1447 * L_0 = (__this->___properties_2);
		return L_0;
	}
}
// System.Void System.Configuration.ElementInformation::Reset(System.Configuration.ElementInformation)
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInformation_t1446_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void ElementInformation_Reset_m6746 (ElementInformation_t1414 * __this, ElementInformation_t1414 * ___parentInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		PropertyInformation_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2959);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	PropertyInformation_t1446 * V_0 = {0};
	Object_t * V_1 = {0};
	PropertyInformation_t1446 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		PropertyInformationCollection_t1447 * L_0 = ElementInformation_get_Properties_m6745(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0011:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_2);
			V_0 = ((PropertyInformation_t1446 *)Castclass(L_3, PropertyInformation_t1446_il2cpp_TypeInfo_var));
			ElementInformation_t1414 * L_4 = ___parentInfo;
			NullCheck(L_4);
			PropertyInformationCollection_t1447 * L_5 = ElementInformation_get_Properties_m6745(L_4, /*hidden argument*/NULL);
			PropertyInformation_t1446 * L_6 = V_0;
			NullCheck(L_6);
			String_t* L_7 = PropertyInformation_get_Name_m6788(L_6, /*hidden argument*/NULL);
			NullCheck(L_5);
			PropertyInformation_t1446 * L_8 = PropertyInformationCollection_get_Item_m6802(L_5, L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			PropertyInformation_t1446 * L_9 = V_0;
			PropertyInformation_t1446 * L_10 = V_2;
			NullCheck(L_9);
			PropertyInformation_Reset_m6792(L_9, L_10, /*hidden argument*/NULL);
		}

IL_0036:
		{
			Object_t * L_11 = V_1;
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_0011;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x58, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		{
			Object_t * L_13 = V_1;
			V_3 = ((Object_t *)IsInst(L_13, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_14 = V_3;
			if (L_14)
			{
				goto IL_0051;
			}
		}

IL_0050:
		{
			IL2CPP_END_FINALLY(70)
		}

IL_0051:
		{
			Object_t * L_15 = V_3;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(70)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0058:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ExeConfigurationFileMap::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ExeConfigurationFileMap__ctor_m6747 (ExeConfigurationFileMap_t1448 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationFileMap__ctor_m6633(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___exeConfigFilename_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___localUserConfigFilename_2 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___roamingUserConfigFilename_3 = L_2;
		return;
	}
}
// System.String System.Configuration.ExeConfigurationFileMap::get_ExeConfigFilename()
extern "C" String_t* ExeConfigurationFileMap_get_ExeConfigFilename_m6748 (ExeConfigurationFileMap_t1448 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___exeConfigFilename_1);
		return L_0;
	}
}
// System.Void System.Configuration.ExeConfigurationFileMap::set_ExeConfigFilename(System.String)
extern "C" void ExeConfigurationFileMap_set_ExeConfigFilename_m6749 (ExeConfigurationFileMap_t1448 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___exeConfigFilename_1 = L_0;
		return;
	}
}
// System.String System.Configuration.ExeConfigurationFileMap::get_LocalUserConfigFilename()
extern "C" String_t* ExeConfigurationFileMap_get_LocalUserConfigFilename_m6750 (ExeConfigurationFileMap_t1448 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___localUserConfigFilename_2);
		return L_0;
	}
}
// System.Void System.Configuration.ExeConfigurationFileMap::set_LocalUserConfigFilename(System.String)
extern "C" void ExeConfigurationFileMap_set_LocalUserConfigFilename_m6751 (ExeConfigurationFileMap_t1448 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___localUserConfigFilename_2 = L_0;
		return;
	}
}
// System.String System.Configuration.ExeConfigurationFileMap::get_RoamingUserConfigFilename()
extern "C" String_t* ExeConfigurationFileMap_get_RoamingUserConfigFilename_m6752 (ExeConfigurationFileMap_t1448 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___roamingUserConfigFilename_3);
		return L_0;
	}
}
// System.Void System.Configuration.ExeConfigurationFileMap::set_RoamingUserConfigFilename(System.String)
extern "C" void ExeConfigurationFileMap_set_RoamingUserConfigFilename_m6753 (ExeConfigurationFileMap_t1448 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___roamingUserConfigFilename_3 = L_0;
		return;
	}
}
// System.Object System.Configuration.ExeConfigurationFileMap::Clone()
extern TypeInfo* ExeConfigurationFileMap_t1448_il2cpp_TypeInfo_var;
extern "C" Object_t * ExeConfigurationFileMap_Clone_m6754 (ExeConfigurationFileMap_t1448 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExeConfigurationFileMap_t1448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2973);
		s_Il2CppMethodIntialized = true;
	}
	ExeConfigurationFileMap_t1448 * V_0 = {0};
	{
		ExeConfigurationFileMap_t1448 * L_0 = (ExeConfigurationFileMap_t1448 *)il2cpp_codegen_object_new (ExeConfigurationFileMap_t1448_il2cpp_TypeInfo_var);
		ExeConfigurationFileMap__ctor_m6747(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ExeConfigurationFileMap_t1448 * L_1 = V_0;
		String_t* L_2 = (__this->___exeConfigFilename_1);
		NullCheck(L_1);
		L_1->___exeConfigFilename_1 = L_2;
		ExeConfigurationFileMap_t1448 * L_3 = V_0;
		String_t* L_4 = (__this->___localUserConfigFilename_2);
		NullCheck(L_3);
		L_3->___localUserConfigFilename_2 = L_4;
		ExeConfigurationFileMap_t1448 * L_5 = V_0;
		String_t* L_6 = (__this->___roamingUserConfigFilename_3);
		NullCheck(L_5);
		L_5->___roamingUserConfigFilename_3 = L_6;
		ExeConfigurationFileMap_t1448 * L_7 = V_0;
		String_t* L_8 = ConfigurationFileMap_get_MachineConfigFilename_m6635(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ConfigurationFileMap_set_MachineConfigFilename_m6636(L_7, L_8, /*hidden argument*/NULL);
		ExeConfigurationFileMap_t1448 * L_9 = V_0;
		return L_9;
	}
}
// System.Configuration.IgnoreSection
#include "System_Configuration_System_Configuration_IgnoreSection.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.IgnoreSection
#include "System_Configuration_System_Configuration_IgnoreSectionMethodDeclarations.h"



// System.Void System.Configuration.IgnoreSection::.ctor()
extern "C" void IgnoreSection__ctor_m6755 (IgnoreSection_t1449 * __this, const MethodInfo* method)
{
	{
		ConfigurationSection__ctor_m6691(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.IgnoreSection::.cctor()
extern TypeInfo* ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var;
extern TypeInfo* IgnoreSection_t1449_il2cpp_TypeInfo_var;
extern "C" void IgnoreSection__cctor_m6756 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2954);
		IgnoreSection_t1449_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2988);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationPropertyCollection_t1412 * L_0 = (ConfigurationPropertyCollection_t1412 *)il2cpp_codegen_object_new (ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection__ctor_m6685(L_0, /*hidden argument*/NULL);
		((IgnoreSection_t1449_StaticFields*)IgnoreSection_t1449_il2cpp_TypeInfo_var->static_fields)->___properties_18 = L_0;
		return;
	}
}
// System.Boolean System.Configuration.IgnoreSection::IsModified()
extern "C" bool IgnoreSection_IsModified_m6757 (IgnoreSection_t1449 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Configuration.IgnoreSection::DeserializeSection(System.Xml.XmlReader)
extern "C" void IgnoreSection_DeserializeSection_m6758 (IgnoreSection_t1449 * __this, XmlReader_t843 * ___reader, const MethodInfo* method)
{
	{
		XmlReader_t843 * L_0 = ___reader;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(47 /* System.String System.Xml.XmlReader::ReadOuterXml() */, L_0);
		__this->___xml_17 = L_1;
		return;
	}
}
// System.Void System.Configuration.IgnoreSection::Reset(System.Configuration.ConfigurationElement)
extern "C" void IgnoreSection_Reset_m6759 (IgnoreSection_t1449 * __this, ConfigurationElement_t1416 * ___parentElement, const MethodInfo* method)
{
	{
		ConfigurationElement_t1416 * L_0 = ___parentElement;
		ConfigurationElement_Reset_m6566(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.IgnoreSection::ResetModified()
extern "C" void IgnoreSection_ResetModified_m6760 (IgnoreSection_t1449 * __this, const MethodInfo* method)
{
	{
		ConfigurationSection_ResetModified_m6699(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Configuration.IgnoreSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C" String_t* IgnoreSection_SerializeSection_m6761 (IgnoreSection_t1449 * __this, ConfigurationElement_t1416 * ___parentElement, String_t* ___name, int32_t ___saveMode, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___xml_17);
		return L_0;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.IgnoreSection::get_Properties()
extern TypeInfo* IgnoreSection_t1449_il2cpp_TypeInfo_var;
extern "C" ConfigurationPropertyCollection_t1412 * IgnoreSection_get_Properties_m6762 (IgnoreSection_t1449 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IgnoreSection_t1449_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2988);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IgnoreSection_t1449_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection_t1412 * L_0 = ((IgnoreSection_t1449_StaticFields*)IgnoreSection_t1449_il2cpp_TypeInfo_var->static_fields)->___properties_18;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.InternalConfigurationFactory::.ctor()
extern "C" void InternalConfigurationFactory__ctor_m6763 (InternalConfigurationFactory_t1425 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.Configuration System.Configuration.InternalConfigurationFactory::Create(System.Type,System.Object[])
extern TypeInfo* InternalConfigurationSystem_t1451_il2cpp_TypeInfo_var;
extern TypeInfo* Configuration_t1398_il2cpp_TypeInfo_var;
extern "C" Configuration_t1398 * InternalConfigurationFactory_Create_m6764 (InternalConfigurationFactory_t1425 * __this, Type_t * ___typeConfigHost, ObjectU5BU5D_t300* ___hostInitConfigurationParams, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalConfigurationSystem_t1451_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2989);
		Configuration_t1398_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2941);
		s_Il2CppMethodIntialized = true;
	}
	InternalConfigurationSystem_t1451 * V_0 = {0};
	{
		InternalConfigurationSystem_t1451 * L_0 = (InternalConfigurationSystem_t1451 *)il2cpp_codegen_object_new (InternalConfigurationSystem_t1451_il2cpp_TypeInfo_var);
		InternalConfigurationSystem__ctor_m6765(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		InternalConfigurationSystem_t1451 * L_1 = V_0;
		Type_t * L_2 = ___typeConfigHost;
		ObjectU5BU5D_t300* L_3 = ___hostInitConfigurationParams;
		NullCheck(L_1);
		VirtActionInvoker2< Type_t *, ObjectU5BU5D_t300* >::Invoke(5 /* System.Void System.Configuration.InternalConfigurationSystem::Init(System.Type,System.Object[]) */, L_1, L_2, L_3);
		InternalConfigurationSystem_t1451 * L_4 = V_0;
		Configuration_t1398 * L_5 = (Configuration_t1398 *)il2cpp_codegen_object_new (Configuration_t1398_il2cpp_TypeInfo_var);
		Configuration__ctor_m6502(L_5, L_4, (String_t*)NULL, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Configuration.InternalConfigurationRoot
#include "System_Configuration_System_Configuration_InternalConfigurat_2.h"
// System.Configuration.InternalConfigurationRoot
#include "System_Configuration_System_Configuration_InternalConfigurat_2MethodDeclarations.h"


// System.Void System.Configuration.InternalConfigurationSystem::.ctor()
extern "C" void InternalConfigurationSystem__ctor_m6765 (InternalConfigurationSystem_t1451 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.InternalConfigurationSystem::Init(System.Type,System.Object[])
extern TypeInfo* IInternalConfigHost_t1403_il2cpp_TypeInfo_var;
extern TypeInfo* InternalConfigurationRoot_t1454_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalConfigRoot_t1450_il2cpp_TypeInfo_var;
extern "C" void InternalConfigurationSystem_Init_m6766 (InternalConfigurationSystem_t1451 * __this, Type_t * ___typeConfigHost, ObjectU5BU5D_t300* ___hostInitParams, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IInternalConfigHost_t1403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2940);
		InternalConfigurationRoot_t1454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2990);
		IInternalConfigRoot_t1450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2991);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t300* L_0 = ___hostInitParams;
		__this->___hostInitParams_2 = L_0;
		Type_t * L_1 = ___typeConfigHost;
		Object_t * L_2 = Activator_CreateInstance_m3582(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->___host_0 = ((Object_t *)Castclass(L_2, IInternalConfigHost_t1403_il2cpp_TypeInfo_var));
		InternalConfigurationRoot_t1454 * L_3 = (InternalConfigurationRoot_t1454 *)il2cpp_codegen_object_new (InternalConfigurationRoot_t1454_il2cpp_TypeInfo_var);
		InternalConfigurationRoot__ctor_m6780(L_3, /*hidden argument*/NULL);
		__this->___root_1 = L_3;
		Object_t * L_4 = (__this->___root_1);
		Object_t * L_5 = (__this->___host_0);
		NullCheck(L_4);
		InterfaceActionInvoker2< Object_t *, bool >::Invoke(0 /* System.Void System.Configuration.Internal.IInternalConfigRoot::Init(System.Configuration.Internal.IInternalConfigHost,System.Boolean) */, IInternalConfigRoot_t1450_il2cpp_TypeInfo_var, L_4, L_5, 0);
		return;
	}
}
// System.Void System.Configuration.InternalConfigurationSystem::InitForConfiguration(System.String&,System.String&,System.String&)
extern TypeInfo* IInternalConfigHost_t1403_il2cpp_TypeInfo_var;
extern "C" void InternalConfigurationSystem_InitForConfiguration_m6767 (InternalConfigurationSystem_t1451 * __this, String_t** ___locationConfigPath, String_t** ___parentConfigPath, String_t** ___parentLocationConfigPath, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IInternalConfigHost_t1403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2940);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___host_0);
		String_t** L_1 = ___locationConfigPath;
		String_t** L_2 = ___parentConfigPath;
		String_t** L_3 = ___parentLocationConfigPath;
		Object_t * L_4 = (__this->___root_1);
		ObjectU5BU5D_t300* L_5 = (__this->___hostInitParams_2);
		NullCheck(L_0);
		InterfaceActionInvoker5< String_t**, String_t**, String_t**, Object_t *, ObjectU5BU5D_t300* >::Invoke(4 /* System.Void System.Configuration.Internal.IInternalConfigHost::InitForConfiguration(System.String&,System.String&,System.String&,System.Configuration.Internal.IInternalConfigRoot,System.Object[]) */, IInternalConfigHost_t1403_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5);
		return;
	}
}
// System.Configuration.Internal.IInternalConfigHost System.Configuration.InternalConfigurationSystem::get_Host()
extern "C" Object_t * InternalConfigurationSystem_get_Host_m6768 (InternalConfigurationSystem_t1451 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___host_0);
		return L_0;
	}
}
// System.Configuration.InternalConfigurationHost
#include "System_Configuration_System_Configuration_InternalConfigurat_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.InternalConfigurationHost
#include "System_Configuration_System_Configuration_InternalConfigurat_1MethodDeclarations.h"

// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStream.h"
// System.IO.FileStream
#include "mscorlib_System_IO_FileStream.h"
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
// System.IO.FileStream
#include "mscorlib_System_IO_FileStreamMethodDeclarations.h"


// System.Void System.Configuration.InternalConfigurationHost::.ctor()
extern "C" void InternalConfigurationHost__ctor_m6769 (InternalConfigurationHost_t1452 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.InternalConfigurationHost::CreateDeprecatedConfigContext(System.String)
extern "C" Object_t * InternalConfigurationHost_CreateDeprecatedConfigContext_m6770 (InternalConfigurationHost_t1452 * __this, String_t* ___configPath, const MethodInfo* method)
{
	{
		return NULL;
	}
}
// System.String System.Configuration.InternalConfigurationHost::GetConfigPathFromLocationSubPath(System.String,System.String)
extern "C" String_t* InternalConfigurationHost_GetConfigPathFromLocationSubPath_m6771 (InternalConfigurationHost_t1452 * __this, String_t* ___configPath, String_t* ___locationSubPath, const MethodInfo* method)
{
	{
		String_t* L_0 = ___configPath;
		return L_0;
	}
}
// System.Type System.Configuration.InternalConfigurationHost::GetConfigType(System.String,System.Boolean)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var;
extern "C" Type_t * InternalConfigurationHost_GetConfigType_m6772 (InternalConfigurationHost_t1452 * __this, String_t* ___typeName, bool ___throwOnError, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2028);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	{
		String_t* L_0 = ___typeName;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetType_m5093(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = V_0;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		bool L_3 = ___throwOnError;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = ___typeName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral1532, L_4, (String_t*) &_stringLiteral1502, /*hidden argument*/NULL);
		ConfigurationErrorsException_t1139 * L_6 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m5115(L_6, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0029:
	{
		Type_t * L_7 = V_0;
		return L_7;
	}
}
// System.String System.Configuration.InternalConfigurationHost::GetStreamName(System.String)
// System.Void System.Configuration.InternalConfigurationHost::Init(System.Configuration.Internal.IInternalConfigRoot,System.Object[])
// System.Void System.Configuration.InternalConfigurationHost::InitForConfiguration(System.String&,System.String&,System.String&,System.Configuration.Internal.IInternalConfigRoot,System.Object[])
// System.Boolean System.Configuration.InternalConfigurationHost::IsDefinitionAllowed(System.String,System.Configuration.ConfigurationAllowDefinition,System.Configuration.ConfigurationAllowExeDefinition)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool InternalConfigurationHost_IsDefinitionAllowed_m6773 (InternalConfigurationHost_t1452 * __this, String_t* ___configPath, int32_t ___allowDefinition, int32_t ___allowExeDefinition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = ___allowDefinition;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)200))))
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0043;
	}

IL_0018:
	{
		String_t* L_3 = ___configPath;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1295(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral1533, /*hidden argument*/NULL);
		return L_4;
	}

IL_0024:
	{
		String_t* L_5 = ___configPath;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m1295(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral1533, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_7 = ___configPath;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m1295(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral1534, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_8));
		goto IL_0042;
	}

IL_0041:
	{
		G_B7_0 = 1;
	}

IL_0042:
	{
		return G_B7_0;
	}

IL_0043:
	{
		return 1;
	}
}
// System.String System.Configuration.InternalConfigurationHost::get_bundled_machine_config()
extern "C" String_t* InternalConfigurationHost_get_bundled_machine_config_m6774 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*InternalConfigurationHost_get_bundled_machine_config_m6774_ftn) ();
	static InternalConfigurationHost_get_bundled_machine_config_m6774_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InternalConfigurationHost_get_bundled_machine_config_m6774_ftn)il2cpp_codegen_resolve_icall ("System.Configuration.InternalConfigurationHost::get_bundled_machine_config()");
	return _il2cpp_icall_func();
}
// System.IO.Stream System.Configuration.InternalConfigurationHost::OpenStreamForRead(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t321_il2cpp_TypeInfo_var;
extern TypeInfo* MemoryStream_t686_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationException_t1420_il2cpp_TypeInfo_var;
extern TypeInfo* FileStream_t327_il2cpp_TypeInfo_var;
extern "C" Stream_t844 * InternalConfigurationHost_OpenStreamForRead_m6775 (InternalConfigurationHost_t1452 * __this, String_t* ___streamName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Encoding_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		MemoryStream_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(935);
		ConfigurationException_t1420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2951);
		FileStream_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2992);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___streamName;
		String_t* L_1 = RuntimeEnvironment_get_SystemConfigurationFile_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_2 = String_CompareOrdinal_m6917(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_3 = InternalConfigurationHost_get_bundled_machine_config_m6774(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		Encoding_t321 * L_5 = Encoding_get_UTF8_m1525(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_6 = V_0;
		NullCheck(L_5);
		ByteU5BU5D_t159* L_7 = (ByteU5BU5D_t159*)VirtFuncInvoker1< ByteU5BU5D_t159*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
		MemoryStream_t686 * L_8 = (MemoryStream_t686 *)il2cpp_codegen_object_new (MemoryStream_t686_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m5043(L_8, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002d:
	{
		String_t* L_9 = ___streamName;
		bool L_10 = File_Exists_m1583(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_11 = ___streamName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral1535, L_11, (String_t*) &_stringLiteral1536, /*hidden argument*/NULL);
		ConfigurationException_t1420 * L_13 = (ConfigurationException_t1420 *)il2cpp_codegen_object_new (ConfigurationException_t1420_il2cpp_TypeInfo_var);
		ConfigurationException__ctor_m6886(L_13, L_12, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_004e:
	{
		String_t* L_14 = ___streamName;
		FileStream_t327 * L_15 = (FileStream_t327 *)il2cpp_codegen_object_new (FileStream_t327_il2cpp_TypeInfo_var);
		FileStream__ctor_m6918(L_15, L_14, 3, 1, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Configuration.ExeConfigurationHost
#include "System_Configuration_System_Configuration_ExeConfigurationHo.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ExeConfigurationHost
#include "System_Configuration_System_Configuration_ExeConfigurationHoMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_genMethodDeclarations.h"


// System.Void System.Configuration.ExeConfigurationHost::.ctor()
extern "C" void ExeConfigurationHost__ctor_m6776 (ExeConfigurationHost_t1453 * __this, const MethodInfo* method)
{
	{
		InternalConfigurationHost__ctor_m6769(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ExeConfigurationHost::Init(System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern TypeInfo* ExeConfigurationFileMap_t1448_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern "C" void ExeConfigurationHost_Init_m6777 (ExeConfigurationHost_t1453 * __this, Object_t * ___root, ObjectU5BU5D_t300* ___hostInitParams, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExeConfigurationFileMap_t1448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2973);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t300* L_0 = ___hostInitParams;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		int32_t L_1 = 0;
		__this->___map_0 = ((ExeConfigurationFileMap_t1448 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_0, L_1)), ExeConfigurationFileMap_t1448_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t300* L_2 = ___hostInitParams;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		int32_t L_3 = 1;
		__this->___level_1 = ((*(int32_t*)((int32_t*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), Int32_t297_il2cpp_TypeInfo_var))));
		return;
	}
}
// System.String System.Configuration.ExeConfigurationHost::GetStreamName(System.String)
extern TypeInfo* ExeConfigurationHost_t1453_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t60_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1353_MethodInfo_var;
extern "C" String_t* ExeConfigurationHost_GetStreamName_m6778 (ExeConfigurationHost_t1453 * __this, String_t* ___configPath, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExeConfigurationHost_t1453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2972);
		Dictionary_2_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		Dictionary_2__ctor_m1353_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t60 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		String_t* L_0 = ___configPath;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00ac;
		}
	}
	{
		Dictionary_2_t60 * L_2 = ((ExeConfigurationHost_t1453_StaticFields*)ExeConfigurationHost_t1453_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_2;
		if (L_2)
		{
			goto IL_004f;
		}
	}
	{
		Dictionary_2_t60 * L_3 = (Dictionary_2_t60 *)il2cpp_codegen_object_new (Dictionary_2_t60_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1353(L_3, 4, /*hidden argument*/Dictionary_2__ctor_m1353_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t60 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, (String_t*) &_stringLiteral1534, 0);
		Dictionary_2_t60 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, (String_t*) &_stringLiteral1537, 1);
		Dictionary_2_t60 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, (String_t*) &_stringLiteral1538, 2);
		Dictionary_2_t60 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, (String_t*) &_stringLiteral1533, 3);
		Dictionary_2_t60 * L_8 = V_1;
		((ExeConfigurationHost_t1453_StaticFields*)ExeConfigurationHost_t1453_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_2 = L_8;
	}

IL_004f:
	{
		Dictionary_2_t60 * L_9 = ((ExeConfigurationHost_t1453_StaticFields*)ExeConfigurationHost_t1453_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_2;
		String_t* L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_9, L_10, (&V_2));
		if (!L_11)
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_12 = V_2;
		if (L_12 == 0)
		{
			goto IL_007c;
		}
		if (L_12 == 1)
		{
			goto IL_0088;
		}
		if (L_12 == 2)
		{
			goto IL_0094;
		}
		if (L_12 == 3)
		{
			goto IL_00a0;
		}
	}
	{
		goto IL_00ac;
	}

IL_007c:
	{
		ExeConfigurationFileMap_t1448 * L_13 = (__this->___map_0);
		NullCheck(L_13);
		String_t* L_14 = ExeConfigurationFileMap_get_ExeConfigFilename_m6748(L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0088:
	{
		ExeConfigurationFileMap_t1448 * L_15 = (__this->___map_0);
		NullCheck(L_15);
		String_t* L_16 = ExeConfigurationFileMap_get_LocalUserConfigFilename_m6750(L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0094:
	{
		ExeConfigurationFileMap_t1448 * L_17 = (__this->___map_0);
		NullCheck(L_17);
		String_t* L_18 = ExeConfigurationFileMap_get_RoamingUserConfigFilename_m6752(L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_00a0:
	{
		ExeConfigurationFileMap_t1448 * L_19 = (__this->___map_0);
		NullCheck(L_19);
		String_t* L_20 = ConfigurationFileMap_get_MachineConfigFilename_m6635(L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_00ac:
	{
		int32_t L_21 = (__this->___level_1);
		V_3 = L_21;
		int32_t L_22 = V_3;
		if (!L_22)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)10))))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)20))))
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00f2;
	}

IL_00ce:
	{
		ExeConfigurationFileMap_t1448 * L_25 = (__this->___map_0);
		NullCheck(L_25);
		String_t* L_26 = ExeConfigurationFileMap_get_ExeConfigFilename_m6748(L_25, /*hidden argument*/NULL);
		return L_26;
	}

IL_00da:
	{
		ExeConfigurationFileMap_t1448 * L_27 = (__this->___map_0);
		NullCheck(L_27);
		String_t* L_28 = ExeConfigurationFileMap_get_RoamingUserConfigFilename_m6752(L_27, /*hidden argument*/NULL);
		return L_28;
	}

IL_00e6:
	{
		ExeConfigurationFileMap_t1448 * L_29 = (__this->___map_0);
		NullCheck(L_29);
		String_t* L_30 = ExeConfigurationFileMap_get_LocalUserConfigFilename_m6750(L_29, /*hidden argument*/NULL);
		return L_30;
	}

IL_00f2:
	{
		ExeConfigurationFileMap_t1448 * L_31 = (__this->___map_0);
		NullCheck(L_31);
		String_t* L_32 = ConfigurationFileMap_get_MachineConfigFilename_m6635(L_31, /*hidden argument*/NULL);
		return L_32;
	}
}
// System.Void System.Configuration.ExeConfigurationHost::InitForConfiguration(System.String&,System.String&,System.String&,System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern TypeInfo* ExeConfigurationFileMap_t1448_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationUserLevel_t1441_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ExeConfigurationHost_InitForConfiguration_m6779 (ExeConfigurationHost_t1453 * __this, String_t** ___locationSubPath, String_t** ___configPath, String_t** ___locationConfigPath, Object_t * ___root, ObjectU5BU5D_t300* ___hostInitConfigurationParams, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExeConfigurationFileMap_t1448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2973);
		ConfigurationUserLevel_t1441_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2974);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	{
		ObjectU5BU5D_t300* L_0 = ___hostInitConfigurationParams;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		int32_t L_1 = 0;
		__this->___map_0 = ((ExeConfigurationFileMap_t1448 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_0, L_1)), ExeConfigurationFileMap_t1448_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t300* L_2 = ___hostInitConfigurationParams;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		ObjectU5BU5D_t300* L_3 = ___hostInitConfigurationParams;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		int32_t L_4 = 1;
		if (!((Object_t *)IsInst((*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_4)), ConfigurationUserLevel_t1441_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		ObjectU5BU5D_t300* L_5 = ___hostInitConfigurationParams;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		int32_t L_6 = 1;
		__this->___level_1 = ((*(int32_t*)((int32_t*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_6)), Int32_t297_il2cpp_TypeInfo_var))));
	}

IL_0036:
	{
		String_t** L_7 = ___locationSubPath;
		if ((*((String_t**)L_7)))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_8 = (__this->___level_1);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)10))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)20))))
		{
			goto IL_0080;
		}
	}
	{
		goto IL_00a7;
	}

IL_0059:
	{
		ExeConfigurationFileMap_t1448 * L_11 = (__this->___map_0);
		NullCheck(L_11);
		String_t* L_12 = ExeConfigurationFileMap_get_RoamingUserConfigFilename_m6752(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0074;
		}
	}
	{
		ArgumentException_t356 * L_13 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_13, (String_t*) &_stringLiteral1539, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0074:
	{
		String_t** L_14 = ___locationSubPath;
		*((Object_t **)(L_14)) = (Object_t *)(String_t*) &_stringLiteral1538;
		goto IL_00a7;
	}

IL_0080:
	{
		ExeConfigurationFileMap_t1448 * L_15 = (__this->___map_0);
		NullCheck(L_15);
		String_t* L_16 = ExeConfigurationFileMap_get_LocalUserConfigFilename_m6750(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_009b;
		}
	}
	{
		ArgumentException_t356 * L_17 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_17, (String_t*) &_stringLiteral1540, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_009b:
	{
		String_t** L_18 = ___locationSubPath;
		*((Object_t **)(L_18)) = (Object_t *)(String_t*) &_stringLiteral1537;
		goto IL_00a7;
	}

IL_00a7:
	{
		String_t** L_19 = ___configPath;
		*((Object_t **)(L_19)) = (Object_t *)NULL;
		V_0 = (String_t*)NULL;
		String_t** L_20 = ___locationConfigPath;
		*((Object_t **)(L_20)) = (Object_t *)NULL;
		String_t** L_21 = ___locationSubPath;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_op_Equality_m1295(NULL /*static, unused*/, (*((String_t**)L_21)), (String_t*) &_stringLiteral1534, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00d7;
		}
	}
	{
		String_t** L_23 = ___locationSubPath;
		if ((*((String_t**)L_23)))
		{
			goto IL_00f1;
		}
	}
	{
		ExeConfigurationFileMap_t1448 * L_24 = (__this->___map_0);
		NullCheck(L_24);
		String_t* L_25 = ExeConfigurationFileMap_get_ExeConfigFilename_m6748(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00f1;
		}
	}

IL_00d7:
	{
		String_t** L_26 = ___configPath;
		*((Object_t **)(L_26)) = (Object_t *)(String_t*) &_stringLiteral1534;
		V_0 = (String_t*) &_stringLiteral1537;
		String_t** L_27 = ___locationConfigPath;
		ExeConfigurationFileMap_t1448 * L_28 = (__this->___map_0);
		NullCheck(L_28);
		String_t* L_29 = ExeConfigurationFileMap_get_ExeConfigFilename_m6748(L_28, /*hidden argument*/NULL);
		*((Object_t **)(L_27)) = (Object_t *)L_29;
	}

IL_00f1:
	{
		String_t** L_30 = ___locationSubPath;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_31 = String_op_Equality_m1295(NULL /*static, unused*/, (*((String_t**)L_30)), (String_t*) &_stringLiteral1537, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_012c;
		}
	}
	{
		ExeConfigurationFileMap_t1448 * L_32 = (__this->___map_0);
		NullCheck(L_32);
		String_t* L_33 = ExeConfigurationFileMap_get_LocalUserConfigFilename_m6750(L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_012c;
		}
	}
	{
		String_t** L_34 = ___configPath;
		*((Object_t **)(L_34)) = (Object_t *)(String_t*) &_stringLiteral1537;
		V_0 = (String_t*) &_stringLiteral1538;
		String_t** L_35 = ___locationConfigPath;
		ExeConfigurationFileMap_t1448 * L_36 = (__this->___map_0);
		NullCheck(L_36);
		String_t* L_37 = ExeConfigurationFileMap_get_LocalUserConfigFilename_m6750(L_36, /*hidden argument*/NULL);
		*((Object_t **)(L_35)) = (Object_t *)L_37;
	}

IL_012c:
	{
		String_t** L_38 = ___locationSubPath;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_39 = String_op_Equality_m1295(NULL /*static, unused*/, (*((String_t**)L_38)), (String_t*) &_stringLiteral1538, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0167;
		}
	}
	{
		ExeConfigurationFileMap_t1448 * L_40 = (__this->___map_0);
		NullCheck(L_40);
		String_t* L_41 = ExeConfigurationFileMap_get_RoamingUserConfigFilename_m6752(L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0167;
		}
	}
	{
		String_t** L_42 = ___configPath;
		*((Object_t **)(L_42)) = (Object_t *)(String_t*) &_stringLiteral1538;
		V_0 = (String_t*) &_stringLiteral1533;
		String_t** L_43 = ___locationConfigPath;
		ExeConfigurationFileMap_t1448 * L_44 = (__this->___map_0);
		NullCheck(L_44);
		String_t* L_45 = ExeConfigurationFileMap_get_RoamingUserConfigFilename_m6752(L_44, /*hidden argument*/NULL);
		*((Object_t **)(L_43)) = (Object_t *)L_45;
	}

IL_0167:
	{
		String_t** L_46 = ___locationSubPath;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_47 = String_op_Equality_m1295(NULL /*static, unused*/, (*((String_t**)L_46)), (String_t*) &_stringLiteral1533, /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_017f;
		}
	}
	{
		String_t** L_48 = ___configPath;
		if ((*((String_t**)L_48)))
		{
			goto IL_0198;
		}
	}

IL_017f:
	{
		ExeConfigurationFileMap_t1448 * L_49 = (__this->___map_0);
		NullCheck(L_49);
		String_t* L_50 = ConfigurationFileMap_get_MachineConfigFilename_m6635(L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0198;
		}
	}
	{
		String_t** L_51 = ___configPath;
		*((Object_t **)(L_51)) = (Object_t *)(String_t*) &_stringLiteral1533;
		V_0 = (String_t*)NULL;
	}

IL_0198:
	{
		String_t** L_52 = ___locationSubPath;
		String_t* L_53 = V_0;
		*((Object_t **)(L_52)) = (Object_t *)L_53;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.InternalConfigurationRoot::.ctor()
extern "C" void InternalConfigurationRoot__ctor_m6780 (InternalConfigurationRoot_t1454 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.InternalConfigurationRoot::Init(System.Configuration.Internal.IInternalConfigHost,System.Boolean)
extern "C" void InternalConfigurationRoot_Init_m6781 (InternalConfigurationRoot_t1454 * __this, Object_t * ___host, bool ___isDesignTime, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___host;
		__this->___host_0 = L_0;
		bool L_1 = ___isDesignTime;
		__this->___isDesignTime_1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.PropertyInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationProperty)
extern "C" void PropertyInformation__ctor_m6782 (PropertyInformation_t1446 * __this, ConfigurationElement_t1416 * ___owner, ConfigurationProperty_t1429 * ___property, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		ConfigurationElement_t1416 * L_0 = ___owner;
		__this->___owner_3 = L_0;
		ConfigurationProperty_t1429 * L_1 = ___property;
		__this->___property_4 = L_1;
		return;
	}
}
// System.Object System.Configuration.PropertyInformation::get_DefaultValue()
extern "C" Object_t * PropertyInformation_get_DefaultValue_m6783 (PropertyInformation_t1446 * __this, const MethodInfo* method)
{
	{
		ConfigurationProperty_t1429 * L_0 = (__this->___property_4);
		NullCheck(L_0);
		Object_t * L_1 = ConfigurationProperty_get_DefaultValue_m6666(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Configuration.PropertyInformation::get_IsKey()
extern "C" bool PropertyInformation_get_IsKey_m6784 (PropertyInformation_t1446 * __this, const MethodInfo* method)
{
	{
		ConfigurationProperty_t1429 * L_0 = (__this->___property_4);
		NullCheck(L_0);
		bool L_1 = ConfigurationProperty_get_IsKey_m6667(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Configuration.PropertyInformation::get_IsModified()
extern "C" bool PropertyInformation_get_IsModified_m6785 (PropertyInformation_t1446 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isModified_0);
		return L_0;
	}
}
// System.Void System.Configuration.PropertyInformation::set_IsModified(System.Boolean)
extern "C" void PropertyInformation_set_IsModified_m6786 (PropertyInformation_t1446 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___isModified_0 = L_0;
		return;
	}
}
// System.Boolean System.Configuration.PropertyInformation::get_IsRequired()
extern "C" bool PropertyInformation_get_IsRequired_m6787 (PropertyInformation_t1446 * __this, const MethodInfo* method)
{
	{
		ConfigurationProperty_t1429 * L_0 = (__this->___property_4);
		NullCheck(L_0);
		bool L_1 = ConfigurationProperty_get_IsRequired_m6668(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Configuration.PropertyInformation::get_Name()
extern "C" String_t* PropertyInformation_get_Name_m6788 (PropertyInformation_t1446 * __this, const MethodInfo* method)
{
	{
		ConfigurationProperty_t1429 * L_0 = (__this->___property_4);
		NullCheck(L_0);
		String_t* L_1 = ConfigurationProperty_get_Name_m6670(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Type System.Configuration.PropertyInformation::get_Type()
extern "C" Type_t * PropertyInformation_get_Type_m6789 (PropertyInformation_t1446 * __this, const MethodInfo* method)
{
	{
		ConfigurationProperty_t1429 * L_0 = (__this->___property_4);
		NullCheck(L_0);
		Type_t * L_1 = ConfigurationProperty_get_Type_m6671(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Configuration.PropertyInformation::get_Value()
extern TypeInfo* ConfigurationElement_t1416_il2cpp_TypeInfo_var;
extern "C" Object_t * PropertyInformation_get_Value_m6790 (PropertyInformation_t1446 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t1416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2958);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationElement_t1416 * V_0 = {0};
	{
		int32_t L_0 = (__this->___origin_2);
		if (L_0)
		{
			goto IL_006f;
		}
	}
	{
		ConfigurationProperty_t1429 * L_1 = (__this->___property_4);
		NullCheck(L_1);
		bool L_2 = ConfigurationProperty_get_IsElement_m6675(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0068;
		}
	}
	{
		Type_t * L_3 = PropertyInformation_get_Type_m6789(__this, /*hidden argument*/NULL);
		Object_t * L_4 = Activator_CreateInstance_m5006(NULL /*static, unused*/, L_3, 1, /*hidden argument*/NULL);
		V_0 = ((ConfigurationElement_t1416 *)Castclass(L_4, ConfigurationElement_t1416_il2cpp_TypeInfo_var));
		ConfigurationElement_t1416 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< PropertyInformation_t1446 * >::Invoke(4 /* System.Void System.Configuration.ConfigurationElement::InitFromProperty(System.Configuration.PropertyInformation) */, L_5, __this);
		ConfigurationElement_t1416 * L_6 = (__this->___owner_3);
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		ConfigurationElement_t1416 * L_7 = (__this->___owner_3);
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Configuration.ConfigurationElement::IsReadOnly() */, L_7);
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		ConfigurationElement_t1416 * L_9 = V_0;
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Configuration.ConfigurationElement::SetReadOnly() */, L_9);
	}

IL_0055:
	{
		ConfigurationElement_t1416 * L_10 = V_0;
		__this->___val_1 = L_10;
		__this->___origin_2 = 1;
		goto IL_006f;
	}

IL_0068:
	{
		Object_t * L_11 = PropertyInformation_get_DefaultValue_m6783(__this, /*hidden argument*/NULL);
		return L_11;
	}

IL_006f:
	{
		Object_t * L_12 = (__this->___val_1);
		return L_12;
	}
}
// System.Void System.Configuration.PropertyInformation::set_Value(System.Object)
extern "C" void PropertyInformation_set_Value_m6791 (PropertyInformation_t1446 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___val_1 = L_0;
		__this->___isModified_0 = 1;
		__this->___origin_2 = 2;
		return;
	}
}
// System.Void System.Configuration.PropertyInformation::Reset(System.Configuration.PropertyInformation)
extern TypeInfo* ConfigurationElement_t1416_il2cpp_TypeInfo_var;
extern "C" void PropertyInformation_Reset_m6792 (PropertyInformation_t1446 * __this, PropertyInformation_t1446 * ___parentProperty, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t1416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2958);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInformation_t1446 * L_0 = ___parentProperty;
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		ConfigurationProperty_t1429 * L_1 = (__this->___property_4);
		NullCheck(L_1);
		bool L_2 = ConfigurationProperty_get_IsElement_m6675(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		Object_t * L_3 = PropertyInformation_get_Value_m6790(__this, /*hidden argument*/NULL);
		PropertyInformation_t1446 * L_4 = ___parentProperty;
		NullCheck(L_4);
		Object_t * L_5 = PropertyInformation_get_Value_m6790(L_4, /*hidden argument*/NULL);
		NullCheck(((ConfigurationElement_t1416 *)Castclass(L_3, ConfigurationElement_t1416_il2cpp_TypeInfo_var)));
		VirtActionInvoker1< ConfigurationElement_t1416 * >::Invoke(19 /* System.Void System.Configuration.ConfigurationElement::Reset(System.Configuration.ConfigurationElement) */, ((ConfigurationElement_t1416 *)Castclass(L_3, ConfigurationElement_t1416_il2cpp_TypeInfo_var)), ((ConfigurationElement_t1416 *)Castclass(L_5, ConfigurationElement_t1416_il2cpp_TypeInfo_var)));
		goto IL_0049;
	}

IL_0036:
	{
		PropertyInformation_t1446 * L_6 = ___parentProperty;
		NullCheck(L_6);
		Object_t * L_7 = PropertyInformation_get_Value_m6790(L_6, /*hidden argument*/NULL);
		__this->___val_1 = L_7;
		__this->___origin_2 = 1;
	}

IL_0049:
	{
		goto IL_0055;
	}

IL_004e:
	{
		__this->___origin_2 = 0;
	}

IL_0055:
	{
		return;
	}
}
// System.Boolean System.Configuration.PropertyInformation::get_IsElement()
extern "C" bool PropertyInformation_get_IsElement_m6793 (PropertyInformation_t1446 * __this, const MethodInfo* method)
{
	{
		ConfigurationProperty_t1429 * L_0 = (__this->___property_4);
		NullCheck(L_0);
		bool L_1 = ConfigurationProperty_get_IsElement_m6675(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Configuration.PropertyValueOrigin System.Configuration.PropertyInformation::get_ValueOrigin()
extern "C" int32_t PropertyInformation_get_ValueOrigin_m6794 (PropertyInformation_t1446 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___origin_2);
		return L_0;
	}
}
// System.String System.Configuration.PropertyInformation::GetStringValue()
extern "C" String_t* PropertyInformation_GetStringValue_m6795 (PropertyInformation_t1446 * __this, const MethodInfo* method)
{
	{
		ConfigurationProperty_t1429 * L_0 = (__this->___property_4);
		Object_t * L_1 = PropertyInformation_get_Value_m6790(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_2 = ConfigurationProperty_ConvertToString_m6674(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Configuration.PropertyInformation::SetStringValue(System.String)
extern "C" void PropertyInformation_SetStringValue_m6796 (PropertyInformation_t1446 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		ConfigurationProperty_t1429 * L_0 = (__this->___property_4);
		String_t* L_1 = ___value;
		NullCheck(L_0);
		Object_t * L_2 = ConfigurationProperty_ConvertFromString_m6673(L_0, L_1, /*hidden argument*/NULL);
		__this->___val_1 = L_2;
		Object_t * L_3 = (__this->___val_1);
		Object_t * L_4 = PropertyInformation_get_DefaultValue_m6783(__this, /*hidden argument*/NULL);
		bool L_5 = Object_Equals_m6884(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		__this->___origin_2 = 2;
	}

IL_002f:
	{
		return;
	}
}
// System.Configuration.ConfigurationProperty System.Configuration.PropertyInformation::get_Property()
extern "C" ConfigurationProperty_t1429 * PropertyInformation_get_Property_m6797 (PropertyInformation_t1446 * __this, const MethodInfo* method)
{
	{
		ConfigurationProperty_t1429 * L_0 = (__this->___property_4);
		return L_0;
	}
}
// System.Configuration.PropertyInformationCollection/PropertyInformationEnumerator
#include "System_Configuration_System_Configuration_PropertyInformatio_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.PropertyInformationCollection/PropertyInformationEnumerator
#include "System_Configuration_System_Configuration_PropertyInformatio_0MethodDeclarations.h"



// System.Void System.Configuration.PropertyInformationCollection/PropertyInformationEnumerator::.ctor(System.Configuration.PropertyInformationCollection)
extern "C" void PropertyInformationEnumerator__ctor_m6798 (PropertyInformationEnumerator_t1455 * __this, PropertyInformationCollection_t1447 * ___collection, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		PropertyInformationCollection_t1447 * L_0 = ___collection;
		__this->___collection_0 = L_0;
		__this->___position_1 = (-1);
		return;
	}
}
// System.Object System.Configuration.PropertyInformationCollection/PropertyInformationEnumerator::get_Current()
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" Object_t * PropertyInformationEnumerator_get_Current_m6799 (PropertyInformationEnumerator_t1455 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___position_1);
		PropertyInformationCollection_t1447 * L_1 = (__this->___collection_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_1);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = (__this->___position_1);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		PropertyInformationCollection_t1447 * L_4 = (__this->___collection_0);
		int32_t L_5 = (__this->___position_1);
		NullCheck(L_4);
		Object_t * L_6 = NameObjectCollectionBase_BaseGet_m6919(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0034:
	{
		InvalidOperationException_t1116 * L_7 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5032(L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.Boolean System.Configuration.PropertyInformationCollection/PropertyInformationEnumerator::MoveNext()
extern "C" bool PropertyInformationEnumerator_MoveNext_m6800 (PropertyInformationEnumerator_t1455 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___position_1);
		int32_t L_1 = ((int32_t)((int32_t)L_0+(int32_t)1));
		V_0 = L_1;
		__this->___position_1 = L_1;
		int32_t L_2 = V_0;
		PropertyInformationCollection_t1447 * L_3 = (__this->___collection_0);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_3);
		if ((((int32_t)L_2) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.PropertyInformationCollection::.ctor()
extern TypeInfo* StringComparer_t678_il2cpp_TypeInfo_var;
extern "C" void PropertyInformationCollection__ctor_m6801 (PropertyInformationCollection_t1447 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringComparer_t678_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(918);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t678_il2cpp_TypeInfo_var);
		StringComparer_t678 * L_0 = StringComparer_get_Ordinal_m6912(NULL /*static, unused*/, /*hidden argument*/NULL);
		NameObjectCollectionBase__ctor_m6913(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.PropertyInformation System.Configuration.PropertyInformationCollection::get_Item(System.String)
extern TypeInfo* PropertyInformation_t1446_il2cpp_TypeInfo_var;
extern "C" PropertyInformation_t1446 * PropertyInformationCollection_get_Item_m6802 (PropertyInformationCollection_t1447 * __this, String_t* ___propertyName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyInformation_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2959);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___propertyName;
		Object_t * L_1 = NameObjectCollectionBase_BaseGet_m6914(__this, L_0, /*hidden argument*/NULL);
		return ((PropertyInformation_t1446 *)Castclass(L_1, PropertyInformation_t1446_il2cpp_TypeInfo_var));
	}
}
// System.Collections.IEnumerator System.Configuration.PropertyInformationCollection::GetEnumerator()
extern TypeInfo* PropertyInformationEnumerator_t1455_il2cpp_TypeInfo_var;
extern "C" Object_t * PropertyInformationCollection_GetEnumerator_m6803 (PropertyInformationCollection_t1447 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyInformationEnumerator_t1455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2993);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInformationEnumerator_t1455 * L_0 = (PropertyInformationEnumerator_t1455 *)il2cpp_codegen_object_new (PropertyInformationEnumerator_t1455_il2cpp_TypeInfo_var);
		PropertyInformationEnumerator__ctor_m6798(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Configuration.PropertyInformationCollection::Add(System.Configuration.PropertyInformation)
extern "C" void PropertyInformationCollection_Add_m6804 (PropertyInformationCollection_t1447 * __this, PropertyInformation_t1446 * ___pi, const MethodInfo* method)
{
	{
		PropertyInformation_t1446 * L_0 = ___pi;
		NullCheck(L_0);
		String_t* L_1 = PropertyInformation_get_Name_m6788(L_0, /*hidden argument*/NULL);
		PropertyInformation_t1446 * L_2 = ___pi;
		NameObjectCollectionBase_BaseAdd_m6920(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.PropertyInformationCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* NotImplementedException_t333_il2cpp_TypeInfo_var;
extern "C" void PropertyInformationCollection_GetObjectData_m6805 (PropertyInformationCollection_t1447 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
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
#ifndef _MSC_VER
#else
#endif
// System.Configuration.PropertyValueOrigin
#include "System_Configuration_System_Configuration_PropertyValueOrigiMethodDeclarations.h"



// System.Configuration.ProtectedConfiguration
#include "System_Configuration_System_Configuration_ProtectedConfigura.h"
#ifndef _MSC_VER
#else
#endif

// System.Configuration.ProtectedConfigurationProviderCollection
#include "System_Configuration_System_Configuration_ProtectedConfigura_1.h"
// System.Configuration.ProtectedConfigurationSection
#include "System_Configuration_System_Configuration_ProtectedConfigura_2.h"
// System.Configuration.ProtectedConfigurationSection
#include "System_Configuration_System_Configuration_ProtectedConfigura_2MethodDeclarations.h"
// System.Configuration.ProtectedConfigurationProviderCollection
#include "System_Configuration_System_Configuration_ProtectedConfigura_1MethodDeclarations.h"


// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfiguration::get_Providers()
extern "C" ProtectedConfigurationProviderCollection_t1459 * ProtectedConfiguration_get_Providers_m6806 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		ProtectedConfigurationSection_t1460 * L_0 = ProtectedConfiguration_get_Section_m6807(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ProtectedConfigurationProviderCollection_t1459 * L_1 = ProtectedConfigurationSection_GetAllProviders_m6815(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Configuration.ProtectedConfigurationSection System.Configuration.ProtectedConfiguration::get_Section()
extern TypeInfo* ConfigurationManager_t1140_il2cpp_TypeInfo_var;
extern TypeInfo* ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var;
extern "C" ProtectedConfigurationSection_t1460 * ProtectedConfiguration_get_Section_m6807 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationManager_t1140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2030);
		ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2994);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationManager_t1140_il2cpp_TypeInfo_var);
		Object_t * L_0 = ConfigurationManager_GetSection_m5116(NULL /*static, unused*/, (String_t*) &_stringLiteral1541, /*hidden argument*/NULL);
		return ((ProtectedConfigurationSection_t1460 *)Castclass(L_0, ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var));
	}
}
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfiguration::GetProvider(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t306_il2cpp_TypeInfo_var;
extern "C" ProtectedConfigurationProvider_t1458 * ProtectedConfiguration_GetProvider_m6808 (Object_t * __this /* static, unused */, String_t* ___name, bool ___throwOnError, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Exception_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		s_Il2CppMethodIntialized = true;
	}
	ProtectedConfigurationProvider_t1458 * V_0 = {0};
	{
		ProtectedConfigurationProviderCollection_t1459 * L_0 = ProtectedConfiguration_get_Providers_m6806(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		ProtectedConfigurationProvider_t1458 * L_2 = ProtectedConfigurationProviderCollection_get_Item_m6810(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ProtectedConfigurationProvider_t1458 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		bool L_4 = ___throwOnError;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral1542, L_5, /*hidden argument*/NULL);
		Exception_t306 * L_7 = (Exception_t306 *)il2cpp_codegen_object_new (Exception_t306_il2cpp_TypeInfo_var);
		Exception__ctor_m3196(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0029:
	{
		ProtectedConfigurationProvider_t1458 * L_8 = V_0;
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Xml.XmlNode System.Configuration.ProtectedConfigurationProvider::Decrypt(System.Xml.XmlNode)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ProtectedConfigurationProviderCollection::.ctor()
extern "C" void ProtectedConfigurationProviderCollection__ctor_m6809 (ProtectedConfigurationProviderCollection_t1459 * __this, const MethodInfo* method)
{
	{
		ProviderCollection__ctor_m6482(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationProviderCollection::get_Item(System.String)
extern TypeInfo* ProtectedConfigurationProvider_t1458_il2cpp_TypeInfo_var;
extern "C" ProtectedConfigurationProvider_t1458 * ProtectedConfigurationProviderCollection_get_Item_m6810 (ProtectedConfigurationProviderCollection_t1459 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProtectedConfigurationProvider_t1458_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2995);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		ProviderBase_t1396 * L_1 = ProviderCollection_get_Item_m6488(__this, L_0, /*hidden argument*/NULL);
		return ((ProtectedConfigurationProvider_t1458 *)Castclass(L_1, ProtectedConfigurationProvider_t1458_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Configuration.ProtectedConfigurationProviderCollection::Add(System.Configuration.Provider.ProviderBase)
extern "C" void ProtectedConfigurationProviderCollection_Add_m6811 (ProtectedConfigurationProviderCollection_t1459 * __this, ProviderBase_t1396 * ___provider, const MethodInfo* method)
{
	{
		ProviderBase_t1396 * L_0 = ___provider;
		ProviderCollection_Add_m6484(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Configuration.ProviderSettingsCollection
#include "System_Configuration_System_Configuration_ProviderSettingsCo.h"
// System.Configuration.ProviderSettings
#include "System_Configuration_System_Configuration_ProviderSettings.h"
// System.Configuration.ProviderSettings
#include "System_Configuration_System_Configuration_ProviderSettingsMethodDeclarations.h"


// System.Void System.Configuration.ProtectedConfigurationSection::.cctor()
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* ProviderSettingsCollection_t1462_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t1429_il2cpp_TypeInfo_var;
extern TypeInfo* ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var;
extern "C" void ProtectedConfigurationSection__cctor_m6812 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		ProviderSettingsCollection_t1462_0_0_0_var = il2cpp_codegen_type_from_index(2996);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		ConfigurationProperty_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2955);
		ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2994);
		ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2954);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		ConfigurationProperty_t1429 * L_1 = (ConfigurationProperty_t1429 *)il2cpp_codegen_object_new (ConfigurationProperty_t1429_il2cpp_TypeInfo_var);
		ConfigurationProperty__ctor_m6661(L_1, (String_t*) &_stringLiteral1543, L_0, (String_t*) &_stringLiteral1544, /*hidden argument*/NULL);
		((ProtectedConfigurationSection_t1460_StaticFields*)ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var->static_fields)->___defaultProviderProp_17 = L_1;
		Type_t * L_2 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ProviderSettingsCollection_t1462_0_0_0_var), /*hidden argument*/NULL);
		ConfigurationProperty_t1429 * L_3 = (ConfigurationProperty_t1429 *)il2cpp_codegen_object_new (ConfigurationProperty_t1429_il2cpp_TypeInfo_var);
		ConfigurationProperty__ctor_m6661(L_3, (String_t*) &_stringLiteral1545, L_2, NULL, /*hidden argument*/NULL);
		((ProtectedConfigurationSection_t1460_StaticFields*)ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var->static_fields)->___providersProp_18 = L_3;
		ConfigurationPropertyCollection_t1412 * L_4 = (ConfigurationPropertyCollection_t1412 *)il2cpp_codegen_object_new (ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection__ctor_m6685(L_4, /*hidden argument*/NULL);
		((ProtectedConfigurationSection_t1460_StaticFields*)ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var->static_fields)->___properties_19 = L_4;
		ConfigurationPropertyCollection_t1412 * L_5 = ((ProtectedConfigurationSection_t1460_StaticFields*)ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var->static_fields)->___properties_19;
		ConfigurationProperty_t1429 * L_6 = ((ProtectedConfigurationSection_t1460_StaticFields*)ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var->static_fields)->___defaultProviderProp_17;
		NullCheck(L_5);
		ConfigurationPropertyCollection_Add_m6689(L_5, L_6, /*hidden argument*/NULL);
		ConfigurationPropertyCollection_t1412 * L_7 = ((ProtectedConfigurationSection_t1460_StaticFields*)ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var->static_fields)->___properties_19;
		ConfigurationProperty_t1429 * L_8 = ((ProtectedConfigurationSection_t1460_StaticFields*)ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var->static_fields)->___providersProp_18;
		NullCheck(L_7);
		ConfigurationPropertyCollection_Add_m6689(L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.ProviderSettingsCollection System.Configuration.ProtectedConfigurationSection::get_Providers()
extern TypeInfo* ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderSettingsCollection_t1462_il2cpp_TypeInfo_var;
extern "C" ProviderSettingsCollection_t1462 * ProtectedConfigurationSection_get_Providers_m6813 (ProtectedConfigurationSection_t1460 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2994);
		ProviderSettingsCollection_t1462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2996);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var);
		ConfigurationProperty_t1429 * L_0 = ((ProtectedConfigurationSection_t1460_StaticFields*)ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var->static_fields)->___providersProp_18;
		Object_t * L_1 = ConfigurationElement_get_Item_m6547(__this, L_0, /*hidden argument*/NULL);
		return ((ProviderSettingsCollection_t1462 *)Castclass(L_1, ProviderSettingsCollection_t1462_il2cpp_TypeInfo_var));
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProtectedConfigurationSection::get_Properties()
extern TypeInfo* ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var;
extern "C" ConfigurationPropertyCollection_t1412 * ProtectedConfigurationSection_get_Properties_m6814 (ProtectedConfigurationSection_t1460 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2994);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection_t1412 * L_0 = ((ProtectedConfigurationSection_t1460_StaticFields*)ProtectedConfigurationSection_t1460_il2cpp_TypeInfo_var->static_fields)->___properties_19;
		return L_0;
	}
}
// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfigurationSection::GetAllProviders()
extern TypeInfo* ProtectedConfigurationProviderCollection_t1459_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderSettings_t1461_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" ProtectedConfigurationProviderCollection_t1459 * ProtectedConfigurationSection_GetAllProviders_m6815 (ProtectedConfigurationSection_t1460 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProtectedConfigurationProviderCollection_t1459_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2997);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		ProviderSettings_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2998);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	ProviderSettings_t1461 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ProtectedConfigurationProviderCollection_t1459 * L_0 = (__this->___providers_20);
		if (L_0)
		{
			goto IL_0067;
		}
	}
	{
		ProtectedConfigurationProviderCollection_t1459 * L_1 = (ProtectedConfigurationProviderCollection_t1459 *)il2cpp_codegen_object_new (ProtectedConfigurationProviderCollection_t1459_il2cpp_TypeInfo_var);
		ProtectedConfigurationProviderCollection__ctor_m6809(L_1, /*hidden argument*/NULL);
		__this->___providers_20 = L_1;
		ProviderSettingsCollection_t1462 * L_2 = ProtectedConfigurationSection_get_Providers_m6813(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(27 /* System.Collections.IEnumerator System.Configuration.ConfigurationElementCollection::GetEnumerator() */, L_2);
		V_1 = L_3;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0045;
		}

IL_0027:
		{
			Object_t * L_4 = V_1;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_4);
			V_0 = ((ProviderSettings_t1461 *)Castclass(L_5, ProviderSettings_t1461_il2cpp_TypeInfo_var));
			ProtectedConfigurationProviderCollection_t1459 * L_6 = (__this->___providers_20);
			ProviderSettings_t1461 * L_7 = V_0;
			ProtectedConfigurationProvider_t1458 * L_8 = ProtectedConfigurationSection_InstantiateProvider_m6816(__this, L_7, /*hidden argument*/NULL);
			NullCheck(L_6);
			VirtActionInvoker1< ProviderBase_t1396 * >::Invoke(8 /* System.Void System.Configuration.ProtectedConfigurationProviderCollection::Add(System.Configuration.Provider.ProviderBase) */, L_6, L_8);
		}

IL_0045:
		{
			Object_t * L_9 = V_1;
			NullCheck(L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0027;
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
			Object_t * L_11 = V_1;
			V_2 = ((Object_t *)IsInst(L_11, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_12 = V_2;
			if (L_12)
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
			Object_t * L_13 = V_2;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_13);
			IL2CPP_END_FINALLY(85)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x67, IL_0067)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0067:
	{
		ProtectedConfigurationProviderCollection_t1459 * L_14 = (__this->___providers_20);
		return L_14;
	}
}
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationSection::InstantiateProvider(System.Configuration.ProviderSettings)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ProtectedConfigurationProvider_t1458_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t306_il2cpp_TypeInfo_var;
extern "C" ProtectedConfigurationProvider_t1458 * ProtectedConfigurationSection_InstantiateProvider_m6816 (ProtectedConfigurationSection_t1460 * __this, ProviderSettings_t1461 * ___ps, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		ProtectedConfigurationProvider_t1458_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2995);
		Exception_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	ProtectedConfigurationProvider_t1458 * V_1 = {0};
	{
		ProviderSettings_t1461 * L_0 = ___ps;
		NullCheck(L_0);
		String_t* L_1 = ProviderSettings_get_Type_m6824(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetType_m5262(NULL /*static, unused*/, L_1, 1, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		Object_t * L_4 = Activator_CreateInstance_m3582(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = ((ProtectedConfigurationProvider_t1458 *)IsInst(L_4, ProtectedConfigurationProvider_t1458_il2cpp_TypeInfo_var));
		ProtectedConfigurationProvider_t1458 * L_5 = V_1;
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t306 * L_6 = (Exception_t306 *)il2cpp_codegen_object_new (Exception_t306_il2cpp_TypeInfo_var);
		Exception__ctor_m3196(L_6, (String_t*) &_stringLiteral1546, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002a:
	{
		ProtectedConfigurationProvider_t1458 * L_7 = V_1;
		ProviderSettings_t1461 * L_8 = ___ps;
		NullCheck(L_8);
		String_t* L_9 = ProviderSettings_get_Name_m6823(L_8, /*hidden argument*/NULL);
		ProviderSettings_t1461 * L_10 = ___ps;
		NullCheck(L_10);
		NameValueCollection_t1401 * L_11 = ProviderSettings_get_Parameters_m6826(L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, NameValueCollection_t1401 * >::Invoke(4 /* System.Void System.Configuration.Provider.ProviderBase::Initialize(System.String,System.Collections.Specialized.NameValueCollection) */, L_7, L_9, L_11);
		ProtectedConfigurationProvider_t1458 * L_12 = V_1;
		return L_12;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ProviderSettings::.ctor()
extern "C" void ProviderSettings__ctor_m6817 (ProviderSettings_t1461 * __this, const MethodInfo* method)
{
	{
		ConfigurationElement__ctor_m6531(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ProviderSettings::.cctor()
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t1429_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderSettings_t1461_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var;
extern "C" void ProviderSettings__cctor_m6818 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		ConfigurationProperty_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2955);
		ProviderSettings_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2998);
		ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2954);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		ConfigurationProperty_t1429 * L_1 = (ConfigurationProperty_t1429 *)il2cpp_codegen_object_new (ConfigurationProperty_t1429_il2cpp_TypeInfo_var);
		ConfigurationProperty__ctor_m6662(L_1, (String_t*) &_stringLiteral302, L_0, NULL, 6, /*hidden argument*/NULL);
		((ProviderSettings_t1461_StaticFields*)ProviderSettings_t1461_il2cpp_TypeInfo_var->static_fields)->___nameProp_14 = L_1;
		Type_t * L_2 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		ConfigurationProperty_t1429 * L_3 = (ConfigurationProperty_t1429 *)il2cpp_codegen_object_new (ConfigurationProperty_t1429_il2cpp_TypeInfo_var);
		ConfigurationProperty__ctor_m6662(L_3, (String_t*) &_stringLiteral1091, L_2, NULL, 2, /*hidden argument*/NULL);
		((ProviderSettings_t1461_StaticFields*)ProviderSettings_t1461_il2cpp_TypeInfo_var->static_fields)->___typeProp_15 = L_3;
		ConfigurationPropertyCollection_t1412 * L_4 = (ConfigurationPropertyCollection_t1412 *)il2cpp_codegen_object_new (ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection__ctor_m6685(L_4, /*hidden argument*/NULL);
		((ProviderSettings_t1461_StaticFields*)ProviderSettings_t1461_il2cpp_TypeInfo_var->static_fields)->___properties_16 = L_4;
		ConfigurationPropertyCollection_t1412 * L_5 = ((ProviderSettings_t1461_StaticFields*)ProviderSettings_t1461_il2cpp_TypeInfo_var->static_fields)->___properties_16;
		ConfigurationProperty_t1429 * L_6 = ((ProviderSettings_t1461_StaticFields*)ProviderSettings_t1461_il2cpp_TypeInfo_var->static_fields)->___nameProp_14;
		NullCheck(L_5);
		ConfigurationPropertyCollection_Add_m6689(L_5, L_6, /*hidden argument*/NULL);
		ConfigurationPropertyCollection_t1412 * L_7 = ((ProviderSettings_t1461_StaticFields*)ProviderSettings_t1461_il2cpp_TypeInfo_var->static_fields)->___properties_16;
		ConfigurationProperty_t1429 * L_8 = ((ProviderSettings_t1461_StaticFields*)ProviderSettings_t1461_il2cpp_TypeInfo_var->static_fields)->___typeProp_15;
		NullCheck(L_7);
		ConfigurationPropertyCollection_Add_m6689(L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Configuration.ProviderSettings::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern TypeInfo* ConfigNameValueCollection_t1400_il2cpp_TypeInfo_var;
extern "C" bool ProviderSettings_OnDeserializeUnrecognizedAttribute_m6819 (ProviderSettings_t1461 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigNameValueCollection_t1400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2999);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigNameValueCollection_t1400 * L_0 = (__this->___parameters_13);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ConfigNameValueCollection_t1400 * L_1 = (ConfigNameValueCollection_t1400 *)il2cpp_codegen_object_new (ConfigNameValueCollection_t1400_il2cpp_TypeInfo_var);
		ConfigNameValueCollection__ctor_m6492(L_1, /*hidden argument*/NULL);
		__this->___parameters_13 = L_1;
	}

IL_0016:
	{
		ConfigNameValueCollection_t1400 * L_2 = (__this->___parameters_13);
		String_t* L_3 = ___name;
		String_t* L_4 = ___value;
		NullCheck(L_2);
		NameValueCollection_set_Item_m6921(L_2, L_3, L_4, /*hidden argument*/NULL);
		ConfigNameValueCollection_t1400 * L_5 = (__this->___parameters_13);
		NullCheck(L_5);
		ConfigNameValueCollection_ResetModified_m6494(L_5, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Boolean System.Configuration.ProviderSettings::IsModified()
extern "C" bool ProviderSettings_IsModified_m6820 (ProviderSettings_t1461 * __this, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		ConfigNameValueCollection_t1400 * L_0 = (__this->___parameters_13);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		ConfigNameValueCollection_t1400 * L_1 = (__this->___parameters_13);
		NullCheck(L_1);
		bool L_2 = ConfigNameValueCollection_get_IsModified_m6495(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0023;
		}
	}

IL_001b:
	{
		bool L_3 = ConfigurationElement_IsModified_m6563(__this, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_3));
		goto IL_0024;
	}

IL_0023:
	{
		G_B4_0 = 1;
	}

IL_0024:
	{
		return G_B4_0;
	}
}
// System.Void System.Configuration.ProviderSettings::Reset(System.Configuration.ConfigurationElement)
extern TypeInfo* ProviderSettings_t1461_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigNameValueCollection_t1400_il2cpp_TypeInfo_var;
extern "C" void ProviderSettings_Reset_m6821 (ProviderSettings_t1461 * __this, ConfigurationElement_t1416 * ___parentElement, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProviderSettings_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2998);
		ConfigNameValueCollection_t1400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2999);
		s_Il2CppMethodIntialized = true;
	}
	ProviderSettings_t1461 * V_0 = {0};
	{
		ConfigurationElement_t1416 * L_0 = ___parentElement;
		ConfigurationElement_Reset_m6566(__this, L_0, /*hidden argument*/NULL);
		ConfigurationElement_t1416 * L_1 = ___parentElement;
		V_0 = ((ProviderSettings_t1461 *)IsInst(L_1, ProviderSettings_t1461_il2cpp_TypeInfo_var));
		ProviderSettings_t1461 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		ProviderSettings_t1461 * L_3 = V_0;
		NullCheck(L_3);
		ConfigNameValueCollection_t1400 * L_4 = (L_3->___parameters_13);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		ProviderSettings_t1461 * L_5 = V_0;
		NullCheck(L_5);
		ConfigNameValueCollection_t1400 * L_6 = (L_5->___parameters_13);
		ConfigNameValueCollection_t1400 * L_7 = (ConfigNameValueCollection_t1400 *)il2cpp_codegen_object_new (ConfigNameValueCollection_t1400_il2cpp_TypeInfo_var);
		ConfigNameValueCollection__ctor_m6493(L_7, L_6, /*hidden argument*/NULL);
		__this->___parameters_13 = L_7;
		goto IL_003c;
	}

IL_0035:
	{
		__this->___parameters_13 = (ConfigNameValueCollection_t1400 *)NULL;
	}

IL_003c:
	{
		return;
	}
}
// System.Void System.Configuration.ProviderSettings::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C" void ProviderSettings_Unmerge_m6822 (ProviderSettings_t1461 * __this, ConfigurationElement_t1416 * ___source, ConfigurationElement_t1416 * ___parent, int32_t ___updateMode, const MethodInfo* method)
{
	{
		ConfigurationElement_t1416 * L_0 = ___source;
		ConfigurationElement_t1416 * L_1 = ___parent;
		int32_t L_2 = ___updateMode;
		ConfigurationElement_Unmerge_m6570(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Configuration.ProviderSettings::get_Name()
extern TypeInfo* ProviderSettings_t1461_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ProviderSettings_get_Name_m6823 (ProviderSettings_t1461 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProviderSettings_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2998);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProviderSettings_t1461_il2cpp_TypeInfo_var);
		ConfigurationProperty_t1429 * L_0 = ((ProviderSettings_t1461_StaticFields*)ProviderSettings_t1461_il2cpp_TypeInfo_var->static_fields)->___nameProp_14;
		Object_t * L_1 = ConfigurationElement_get_Item_m6547(__this, L_0, /*hidden argument*/NULL);
		return ((String_t*)Castclass(L_1, String_t_il2cpp_TypeInfo_var));
	}
}
// System.String System.Configuration.ProviderSettings::get_Type()
extern TypeInfo* ProviderSettings_t1461_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ProviderSettings_get_Type_m6824 (ProviderSettings_t1461 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProviderSettings_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2998);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProviderSettings_t1461_il2cpp_TypeInfo_var);
		ConfigurationProperty_t1429 * L_0 = ((ProviderSettings_t1461_StaticFields*)ProviderSettings_t1461_il2cpp_TypeInfo_var->static_fields)->___typeProp_15;
		Object_t * L_1 = ConfigurationElement_get_Item_m6547(__this, L_0, /*hidden argument*/NULL);
		return ((String_t*)Castclass(L_1, String_t_il2cpp_TypeInfo_var));
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettings::get_Properties()
extern TypeInfo* ProviderSettings_t1461_il2cpp_TypeInfo_var;
extern "C" ConfigurationPropertyCollection_t1412 * ProviderSettings_get_Properties_m6825 (ProviderSettings_t1461 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProviderSettings_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2998);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProviderSettings_t1461_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection_t1412 * L_0 = ((ProviderSettings_t1461_StaticFields*)ProviderSettings_t1461_il2cpp_TypeInfo_var->static_fields)->___properties_16;
		return L_0;
	}
}
// System.Collections.Specialized.NameValueCollection System.Configuration.ProviderSettings::get_Parameters()
extern TypeInfo* ConfigNameValueCollection_t1400_il2cpp_TypeInfo_var;
extern "C" NameValueCollection_t1401 * ProviderSettings_get_Parameters_m6826 (ProviderSettings_t1461 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigNameValueCollection_t1400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2999);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigNameValueCollection_t1400 * L_0 = (__this->___parameters_13);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ConfigNameValueCollection_t1400 * L_1 = (ConfigNameValueCollection_t1400 *)il2cpp_codegen_object_new (ConfigNameValueCollection_t1400_il2cpp_TypeInfo_var);
		ConfigNameValueCollection__ctor_m6492(L_1, /*hidden argument*/NULL);
		__this->___parameters_13 = L_1;
	}

IL_0016:
	{
		ConfigNameValueCollection_t1400 * L_2 = (__this->___parameters_13);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ProviderSettingsCollection
#include "System_Configuration_System_Configuration_ProviderSettingsCoMethodDeclarations.h"



// System.Void System.Configuration.ProviderSettingsCollection::.cctor()
extern TypeInfo* ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderSettingsCollection_t1462_il2cpp_TypeInfo_var;
extern "C" void ProviderSettingsCollection__cctor_m6827 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2954);
		ProviderSettingsCollection_t1462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2996);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationPropertyCollection_t1412 * L_0 = (ConfigurationPropertyCollection_t1412 *)il2cpp_codegen_object_new (ConfigurationPropertyCollection_t1412_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection__ctor_m6685(L_0, /*hidden argument*/NULL);
		((ProviderSettingsCollection_t1462_StaticFields*)ProviderSettingsCollection_t1462_il2cpp_TypeInfo_var->static_fields)->___props_23 = L_0;
		return;
	}
}
// System.Configuration.ConfigurationElement System.Configuration.ProviderSettingsCollection::CreateNewElement()
extern TypeInfo* ProviderSettings_t1461_il2cpp_TypeInfo_var;
extern "C" ConfigurationElement_t1416 * ProviderSettingsCollection_CreateNewElement_m6828 (ProviderSettingsCollection_t1462 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProviderSettings_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2998);
		s_Il2CppMethodIntialized = true;
	}
	{
		ProviderSettings_t1461 * L_0 = (ProviderSettings_t1461 *)il2cpp_codegen_object_new (ProviderSettings_t1461_il2cpp_TypeInfo_var);
		ProviderSettings__ctor_m6817(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Object System.Configuration.ProviderSettingsCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern TypeInfo* ProviderSettings_t1461_il2cpp_TypeInfo_var;
extern "C" Object_t * ProviderSettingsCollection_GetElementKey_m6829 (ProviderSettingsCollection_t1462 * __this, ConfigurationElement_t1416 * ___element, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProviderSettings_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2998);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationElement_t1416 * L_0 = ___element;
		NullCheck(((ProviderSettings_t1461 *)Castclass(L_0, ProviderSettings_t1461_il2cpp_TypeInfo_var)));
		String_t* L_1 = ProviderSettings_get_Name_m6823(((ProviderSettings_t1461 *)Castclass(L_0, ProviderSettings_t1461_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettingsCollection::get_Properties()
extern TypeInfo* ProviderSettingsCollection_t1462_il2cpp_TypeInfo_var;
extern "C" ConfigurationPropertyCollection_t1412 * ProviderSettingsCollection_get_Properties_m6830 (ProviderSettingsCollection_t1462 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProviderSettingsCollection_t1462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2996);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProviderSettingsCollection_t1462_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection_t1412 * L_0 = ((ProviderSettingsCollection_t1462_StaticFields*)ProviderSettingsCollection_t1462_il2cpp_TypeInfo_var->static_fields)->___props_23;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"


// System.Void System.Configuration.SectionInfo::.ctor()
extern "C" void SectionInfo__ctor_m6831 (SectionInfo_t1463 * __this, const MethodInfo* method)
{
	{
		__this->___allowLocation_6 = 1;
		__this->___requirePermission_7 = 1;
		__this->___allowDefinition_9 = ((int32_t)300);
		__this->___allowExeDefinition_10 = ((int32_t)100);
		ConfigInfo__ctor_m6497(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.SectionInfo::CreateInstance()
extern TypeInfo* ConfigurationSection_t1436_il2cpp_TypeInfo_var;
extern "C" Object_t * SectionInfo_CreateInstance_m6832 (SectionInfo_t1463 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSection_t1436_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2946);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ConfigurationSection_t1436 * V_1 = {0};
	{
		Object_t * L_0 = ConfigInfo_CreateInstance_m6498(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Object_t * L_1 = V_0;
		V_1 = ((ConfigurationSection_t1436 *)IsInst(L_1, ConfigurationSection_t1436_il2cpp_TypeInfo_var));
		ConfigurationSection_t1436 * L_2 = V_1;
		if (!L_2)
		{
			goto IL_007a;
		}
	}
	{
		ConfigurationSection_t1436 * L_3 = V_1;
		NullCheck(L_3);
		SectionInformation_t1434 * L_4 = ConfigurationSection_get_SectionInformation_m6694(L_3, /*hidden argument*/NULL);
		bool L_5 = (__this->___allowLocation_6);
		NullCheck(L_4);
		SectionInformation_set_AllowLocation_m6863(L_4, L_5, /*hidden argument*/NULL);
		ConfigurationSection_t1436 * L_6 = V_1;
		NullCheck(L_6);
		SectionInformation_t1434 * L_7 = ConfigurationSection_get_SectionInformation_m6694(L_6, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___allowDefinition_9);
		NullCheck(L_7);
		SectionInformation_set_AllowDefinition_m6861(L_7, L_8, /*hidden argument*/NULL);
		ConfigurationSection_t1436 * L_9 = V_1;
		NullCheck(L_9);
		SectionInformation_t1434 * L_10 = ConfigurationSection_get_SectionInformation_m6694(L_9, /*hidden argument*/NULL);
		int32_t L_11 = (__this->___allowExeDefinition_10);
		NullCheck(L_10);
		SectionInformation_set_AllowExeDefinition_m6862(L_10, L_11, /*hidden argument*/NULL);
		ConfigurationSection_t1436 * L_12 = V_1;
		NullCheck(L_12);
		SectionInformation_t1434 * L_13 = ConfigurationSection_get_SectionInformation_m6694(L_12, /*hidden argument*/NULL);
		bool L_14 = (__this->___requirePermission_7);
		NullCheck(L_13);
		SectionInformation_set_RequirePermission_m6866(L_13, L_14, /*hidden argument*/NULL);
		ConfigurationSection_t1436 * L_15 = V_1;
		NullCheck(L_15);
		SectionInformation_t1434 * L_16 = ConfigurationSection_get_SectionInformation_m6694(L_15, /*hidden argument*/NULL);
		bool L_17 = (__this->___restartOnExternalChanges_8);
		NullCheck(L_16);
		SectionInformation_set_RestartOnExternalChanges_m6867(L_16, L_17, /*hidden argument*/NULL);
		ConfigurationSection_t1436 * L_18 = V_1;
		NullCheck(L_18);
		SectionInformation_t1434 * L_19 = ConfigurationSection_get_SectionInformation_m6694(L_18, /*hidden argument*/NULL);
		String_t* L_20 = (((ConfigInfo_t1402 *)__this)->___Name_0);
		NullCheck(L_19);
		SectionInformation_SetName_m6872(L_19, L_20, /*hidden argument*/NULL);
	}

IL_007a:
	{
		Object_t * L_21 = V_0;
		return L_21;
	}
}
// System.Void System.Configuration.SectionInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
extern const Il2CppType* ConfigurationAllowDefinition_t1408_0_0_0_var;
extern const Il2CppType* ConfigurationAllowExeDefinition_t1409_0_0_0_var;
extern TypeInfo* SectionInfo_t1463_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t60_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t353_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1353_MethodInfo_var;
extern "C" void SectionInfo_ReadConfig_m6833 (SectionInfo_t1463 * __this, Configuration_t1398 * ___cfg, String_t* ___streamName, XmlReader_t843 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationAllowDefinition_t1408_0_0_0_var = il2cpp_codegen_type_from_index(3000);
		ConfigurationAllowExeDefinition_t1409_0_0_0_var = il2cpp_codegen_type_from_index(3001);
		SectionInfo_t1463_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2982);
		Dictionary_2_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Enum_t353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		Dictionary_2__ctor_m1353_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	bool V_4 = false;
	String_t* V_5 = {0};
	bool V_6 = false;
	String_t* V_7 = {0};
	Dictionary_2_t60 * V_8 = {0};
	int32_t V_9 = 0;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___streamName;
		ConfigInfo_set_StreamName_m6499(__this, L_0, /*hidden argument*/NULL);
		Configuration_t1398 * L_1 = ___cfg;
		NullCheck(L_1);
		Object_t * L_2 = Configuration_get_ConfigHost_m6508(L_1, /*hidden argument*/NULL);
		((ConfigInfo_t1402 *)__this)->___ConfigHost_5 = L_2;
		goto IL_0280;
	}

IL_0018:
	{
		XmlReader_t843 * L_3 = ___reader;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Name() */, L_3);
		V_7 = L_4;
		String_t* L_5 = V_7;
		if (!L_5)
		{
			goto IL_0264;
		}
	}
	{
		Dictionary_2_t60 * L_6 = ((SectionInfo_t1463_StaticFields*)SectionInfo_t1463_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1_11;
		if (L_6)
		{
			goto IL_009b;
		}
	}
	{
		Dictionary_2_t60 * L_7 = (Dictionary_2_t60 *)il2cpp_codegen_object_new (Dictionary_2_t60_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1353(L_7, 7, /*hidden argument*/Dictionary_2__ctor_m1353_MethodInfo_var);
		V_8 = L_7;
		Dictionary_2_t60 * L_8 = V_8;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, (String_t*) &_stringLiteral1547, 0);
		Dictionary_2_t60 * L_9 = V_8;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_9, (String_t*) &_stringLiteral1548, 1);
		Dictionary_2_t60 * L_10 = V_8;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_10, (String_t*) &_stringLiteral1549, 2);
		Dictionary_2_t60 * L_11 = V_8;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_11, (String_t*) &_stringLiteral1091, 3);
		Dictionary_2_t60 * L_12 = V_8;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_12, (String_t*) &_stringLiteral302, 4);
		Dictionary_2_t60 * L_13 = V_8;
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_13, (String_t*) &_stringLiteral1550, 5);
		Dictionary_2_t60 * L_14 = V_8;
		NullCheck(L_14);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_14, (String_t*) &_stringLiteral1551, 6);
		Dictionary_2_t60 * L_15 = V_8;
		((SectionInfo_t1463_StaticFields*)SectionInfo_t1463_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1_11 = L_15;
	}

IL_009b:
	{
		Dictionary_2_t60 * L_16 = ((SectionInfo_t1463_StaticFields*)SectionInfo_t1463_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1_11;
		String_t* L_17 = V_7;
		NullCheck(L_16);
		bool L_18 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_16, L_17, (&V_9));
		if (!L_18)
		{
			goto IL_0264;
		}
	}
	{
		int32_t L_19 = V_9;
		if (L_19 == 0)
		{
			goto IL_00d6;
		}
		if (L_19 == 1)
		{
			goto IL_011a;
		}
		if (L_19 == 2)
		{
			goto IL_0158;
		}
		if (L_19 == 3)
		{
			goto IL_0196;
		}
		if (L_19 == 4)
		{
			goto IL_01a7;
		}
		if (L_19 == 5)
		{
			goto IL_01d9;
		}
		if (L_19 == 6)
		{
			goto IL_021d;
		}
	}
	{
		goto IL_0264;
	}

IL_00d6:
	{
		XmlReader_t843 * L_20 = ___reader;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_20);
		V_0 = L_21;
		String_t* L_22 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_op_Equality_m1295(NULL /*static, unused*/, L_22, (String_t*) &_stringLiteral345, /*hidden argument*/NULL);
		__this->___allowLocation_6 = L_23;
		bool L_24 = (__this->___allowLocation_6);
		if (L_24)
		{
			goto IL_0115;
		}
	}
	{
		String_t* L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_op_Inequality_m1484(NULL /*static, unused*/, L_25, (String_t*) &_stringLiteral346, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0115;
		}
	}
	{
		XmlReader_t843 * L_27 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, (String_t*) &_stringLiteral1552, L_27, /*hidden argument*/NULL);
	}

IL_0115:
	{
		goto IL_0280;
	}

IL_011a:
	{
		XmlReader_t843 * L_28 = ___reader;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_28);
		V_1 = L_29;
	}

IL_0121:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ConfigurationAllowDefinition_t1408_0_0_0_var), /*hidden argument*/NULL);
		String_t* L_31 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t353_il2cpp_TypeInfo_var);
		Object_t * L_32 = Enum_Parse_m1830(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		__this->___allowDefinition_9 = ((*(int32_t*)((int32_t*)UnBox (L_32, Int32_t297_il2cpp_TypeInfo_var))));
		goto IL_0153;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0141;
		throw e;
	}

CATCH_0141:
	{ // begin catch(System.Object)
		XmlReader_t843 * L_33 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, (String_t*) &_stringLiteral1552, L_33, /*hidden argument*/NULL);
		goto IL_0153;
	} // end catch (depth: 1)

IL_0153:
	{
		goto IL_0280;
	}

IL_0158:
	{
		XmlReader_t843 * L_34 = ___reader;
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_34);
		V_2 = L_35;
	}

IL_015f:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ConfigurationAllowExeDefinition_t1409_0_0_0_var), /*hidden argument*/NULL);
		String_t* L_37 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t353_il2cpp_TypeInfo_var);
		Object_t * L_38 = Enum_Parse_m1830(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		__this->___allowExeDefinition_10 = ((*(int32_t*)((int32_t*)UnBox (L_38, Int32_t297_il2cpp_TypeInfo_var))));
		goto IL_0191;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_017f;
		throw e;
	}

CATCH_017f:
	{ // begin catch(System.Object)
		XmlReader_t843 * L_39 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, (String_t*) &_stringLiteral1552, L_39, /*hidden argument*/NULL);
		goto IL_0191;
	} // end catch (depth: 1)

IL_0191:
	{
		goto IL_0280;
	}

IL_0196:
	{
		XmlReader_t843 * L_40 = ___reader;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_40);
		((ConfigInfo_t1402 *)__this)->___TypeName_1 = L_41;
		goto IL_0280;
	}

IL_01a7:
	{
		XmlReader_t843 * L_42 = ___reader;
		NullCheck(L_42);
		String_t* L_43 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_42);
		((ConfigInfo_t1402 *)__this)->___Name_0 = L_43;
		String_t* L_44 = (((ConfigInfo_t1402 *)__this)->___Name_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m1295(NULL /*static, unused*/, L_44, (String_t*) &_stringLiteral1553, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_01d4;
		}
	}
	{
		XmlReader_t843 * L_46 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, (String_t*) &_stringLiteral1554, L_46, /*hidden argument*/NULL);
	}

IL_01d4:
	{
		goto IL_0280;
	}

IL_01d9:
	{
		XmlReader_t843 * L_47 = ___reader;
		NullCheck(L_47);
		String_t* L_48 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_47);
		V_3 = L_48;
		String_t* L_49 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_50 = String_op_Equality_m1295(NULL /*static, unused*/, L_49, (String_t*) &_stringLiteral345, /*hidden argument*/NULL);
		V_4 = L_50;
		bool L_51 = V_4;
		if (L_51)
		{
			goto IL_0210;
		}
	}
	{
		String_t* L_52 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_53 = String_op_Inequality_m1484(NULL /*static, unused*/, L_52, (String_t*) &_stringLiteral346, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0210;
		}
	}
	{
		XmlReader_t843 * L_54 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, (String_t*) &_stringLiteral1552, L_54, /*hidden argument*/NULL);
	}

IL_0210:
	{
		bool L_55 = V_4;
		__this->___requirePermission_7 = L_55;
		goto IL_0280;
	}

IL_021d:
	{
		XmlReader_t843 * L_56 = ___reader;
		NullCheck(L_56);
		String_t* L_57 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_56);
		V_5 = L_57;
		String_t* L_58 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_59 = String_op_Equality_m1295(NULL /*static, unused*/, L_58, (String_t*) &_stringLiteral345, /*hidden argument*/NULL);
		V_6 = L_59;
		bool L_60 = V_6;
		if (L_60)
		{
			goto IL_0257;
		}
	}
	{
		String_t* L_61 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_62 = String_op_Inequality_m1484(NULL /*static, unused*/, L_61, (String_t*) &_stringLiteral346, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_0257;
		}
	}
	{
		XmlReader_t843 * L_63 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, (String_t*) &_stringLiteral1552, L_63, /*hidden argument*/NULL);
	}

IL_0257:
	{
		bool L_64 = V_6;
		__this->___restartOnExternalChanges_8 = L_64;
		goto IL_0280;
	}

IL_0264:
	{
		XmlReader_t843 * L_65 = ___reader;
		NullCheck(L_65);
		String_t* L_66 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Name() */, L_65);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_67 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral1555, L_66, /*hidden argument*/NULL);
		XmlReader_t843 * L_68 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, L_67, L_68, /*hidden argument*/NULL);
		goto IL_0280;
	}

IL_0280:
	{
		XmlReader_t843 * L_69 = ___reader;
		NullCheck(L_69);
		bool L_70 = (bool)VirtFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_69);
		if (L_70)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_71 = (((ConfigInfo_t1402 *)__this)->___Name_0);
		if (!L_71)
		{
			goto IL_02a1;
		}
	}
	{
		String_t* L_72 = (((ConfigInfo_t1402 *)__this)->___TypeName_1);
		if (L_72)
		{
			goto IL_02ad;
		}
	}

IL_02a1:
	{
		XmlReader_t843 * L_73 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, (String_t*) &_stringLiteral1556, L_73, /*hidden argument*/NULL);
	}

IL_02ad:
	{
		XmlReader_t843 * L_74 = ___reader;
		NullCheck(L_74);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_74);
		XmlReader_t843 * L_75 = ___reader;
		NullCheck(L_75);
		VirtActionInvoker0::Invoke(54 /* System.Void System.Xml.XmlReader::Skip() */, L_75);
		return;
	}
}
// System.Void System.Configuration.SectionInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalConfigHost_t1403_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationAllowExeDefinition_t1409_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationAllowDefinition_t1408_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern "C" void SectionInfo_ReadData_m6834 (SectionInfo_t1463 * __this, Configuration_t1398 * ___config, XmlReader_t843 * ___reader, bool ___overrideAllowed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2028);
		IInternalConfigHost_t1403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2940);
		ConfigurationAllowExeDefinition_t1409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3001);
		ConfigurationAllowDefinition_t1408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3000);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * G_B7_0 = {0};
	{
		Configuration_t1398 * L_0 = ___config;
		NullCheck(L_0);
		bool L_1 = Configuration_get_HasFile_m6512(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		bool L_2 = (__this->___allowLocation_6);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = (((ConfigInfo_t1402 *)__this)->___Name_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral1557, L_3, (String_t*) &_stringLiteral1558, /*hidden argument*/NULL);
		XmlReader_t843 * L_5 = ___reader;
		ConfigurationErrorsException_t1139 * L_6 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m6624(L_6, L_4, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0032:
	{
		Configuration_t1398 * L_7 = ___config;
		NullCheck(L_7);
		Object_t * L_8 = Configuration_get_ConfigHost_m6508(L_7, /*hidden argument*/NULL);
		Configuration_t1398 * L_9 = ___config;
		NullCheck(L_9);
		String_t* L_10 = Configuration_get_ConfigPath_m6510(L_9, /*hidden argument*/NULL);
		int32_t L_11 = (__this->___allowDefinition_9);
		int32_t L_12 = (__this->___allowExeDefinition_10);
		NullCheck(L_8);
		bool L_13 = (bool)InterfaceFuncInvoker3< bool, String_t*, int32_t, int32_t >::Invoke(5 /* System.Boolean System.Configuration.Internal.IInternalConfigHost::IsDefinitionAllowed(System.String,System.Configuration.ConfigurationAllowDefinition,System.Configuration.ConfigurationAllowExeDefinition) */, IInternalConfigHost_t1403_il2cpp_TypeInfo_var, L_8, L_10, L_11, L_12);
		if (L_13)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_14 = (__this->___allowExeDefinition_10);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)100))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_15 = (__this->___allowExeDefinition_10);
		int32_t L_16 = L_15;
		Object_t * L_17 = Box(ConfigurationAllowExeDefinition_t1409_il2cpp_TypeInfo_var, &L_16);
		G_B7_0 = L_17;
		goto IL_007c;
	}

IL_0071:
	{
		int32_t L_18 = (__this->___allowDefinition_9);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(ConfigurationAllowDefinition_t1408_il2cpp_TypeInfo_var, &L_19);
		G_B7_0 = L_20;
	}

IL_007c:
	{
		V_0 = G_B7_0;
		ObjectU5BU5D_t300* L_21 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 5));
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 0);
		ArrayElementTypeCheck (L_21, (String_t*) &_stringLiteral1559);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 0)) = (Object_t *)(String_t*) &_stringLiteral1559;
		ObjectU5BU5D_t300* L_22 = L_21;
		String_t* L_23 = (((ConfigInfo_t1402 *)__this)->___Name_0);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 1);
		ArrayElementTypeCheck (L_22, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_22, 1)) = (Object_t *)L_23;
		ObjectU5BU5D_t300* L_24 = L_22;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 2);
		ArrayElementTypeCheck (L_24, (String_t*) &_stringLiteral1560);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 2)) = (Object_t *)(String_t*) &_stringLiteral1560;
		ObjectU5BU5D_t300* L_25 = L_24;
		Object_t * L_26 = V_0;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 3);
		ArrayElementTypeCheck (L_25, L_26);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 3)) = (Object_t *)L_26;
		ObjectU5BU5D_t300* L_27 = L_25;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 4);
		ArrayElementTypeCheck (L_27, (String_t*) &_stringLiteral1561);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_27, 4)) = (Object_t *)(String_t*) &_stringLiteral1561;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m1267(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		XmlReader_t843 * L_29 = ___reader;
		ConfigurationErrorsException_t1139 * L_30 = (ConfigurationErrorsException_t1139 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t1139_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m6624(L_30, L_28, L_29, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_00b4:
	{
		Configuration_t1398 * L_31 = ___config;
		NullCheck(L_31);
		String_t* L_32 = Configuration_GetSectionXml_m6521(L_31, __this, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00dc;
		}
	}
	{
		String_t* L_33 = (((ConfigInfo_t1402 *)__this)->___Name_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral1559, L_33, (String_t*) &_stringLiteral1562, /*hidden argument*/NULL);
		XmlReader_t843 * L_35 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, L_34, L_35, /*hidden argument*/NULL);
	}

IL_00dc:
	{
		Configuration_t1398 * L_36 = ___config;
		XmlReader_t843 * L_37 = ___reader;
		NullCheck(L_37);
		String_t* L_38 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(47 /* System.String System.Xml.XmlReader::ReadOuterXml() */, L_37);
		NullCheck(L_36);
		Configuration_SetSectionXml_m6520(L_36, __this, L_38, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.SectionInfo::Merge(System.Configuration.ConfigInfo)
extern "C" void SectionInfo_Merge_m6835 (SectionInfo_t1463 * __this, ConfigInfo_t1402 * ___data, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"


// System.Void System.Configuration.SectionGroupInfo::.ctor()
extern const Il2CppType* ConfigurationSectionGroup_t1404_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SectionGroupInfo__ctor_m6836 (SectionGroupInfo_t1406 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSectionGroup_t1404_0_0_0_var = il2cpp_codegen_type_from_index(2945);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigInfo__ctor_m6497(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ConfigurationSectionGroup_t1404_0_0_0_var), /*hidden argument*/NULL);
		((ConfigInfo_t1402 *)__this)->___Type_2 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionGroupInfo::.cctor()
extern TypeInfo* ConfigInfoCollection_t1464_il2cpp_TypeInfo_var;
extern TypeInfo* SectionGroupInfo_t1406_il2cpp_TypeInfo_var;
extern "C" void SectionGroupInfo__cctor_m6837 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigInfoCollection_t1464_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3002);
		SectionGroupInfo_t1406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2943);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigInfoCollection_t1464 * L_0 = (ConfigInfoCollection_t1464 *)il2cpp_codegen_object_new (ConfigInfoCollection_t1464_il2cpp_TypeInfo_var);
		ConfigInfoCollection__ctor_m6851(L_0, /*hidden argument*/NULL);
		((SectionGroupInfo_t1406_StaticFields*)SectionGroupInfo_t1406_il2cpp_TypeInfo_var->static_fields)->___emptyList_8 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionGroupInfo::AddChild(System.Configuration.ConfigInfo)
extern TypeInfo* SectionInfo_t1463_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigInfoCollection_t1464_il2cpp_TypeInfo_var;
extern "C" void SectionGroupInfo_AddChild_m6838 (SectionGroupInfo_t1406 * __this, ConfigInfo_t1402 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SectionInfo_t1463_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2982);
		ConfigInfoCollection_t1464_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3002);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigInfo_t1402 * L_0 = ___data;
		NullCheck(L_0);
		L_0->___Parent_4 = __this;
		ConfigInfo_t1402 * L_1 = ___data;
		if (!((SectionInfo_t1463 *)IsInst(L_1, SectionInfo_t1463_il2cpp_TypeInfo_var)))
		{
			goto IL_003f;
		}
	}
	{
		ConfigInfoCollection_t1464 * L_2 = (__this->___sections_6);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		ConfigInfoCollection_t1464 * L_3 = (ConfigInfoCollection_t1464 *)il2cpp_codegen_object_new (ConfigInfoCollection_t1464_il2cpp_TypeInfo_var);
		ConfigInfoCollection__ctor_m6851(L_3, /*hidden argument*/NULL);
		__this->___sections_6 = L_3;
	}

IL_0028:
	{
		ConfigInfoCollection_t1464 * L_4 = (__this->___sections_6);
		ConfigInfo_t1402 * L_5 = ___data;
		NullCheck(L_5);
		String_t* L_6 = (L_5->___Name_0);
		ConfigInfo_t1402 * L_7 = ___data;
		NullCheck(L_4);
		ConfigInfoCollection_set_Item_m6854(L_4, L_6, L_7, /*hidden argument*/NULL);
		goto IL_0067;
	}

IL_003f:
	{
		ConfigInfoCollection_t1464 * L_8 = (__this->___groups_7);
		if (L_8)
		{
			goto IL_0055;
		}
	}
	{
		ConfigInfoCollection_t1464 * L_9 = (ConfigInfoCollection_t1464 *)il2cpp_codegen_object_new (ConfigInfoCollection_t1464_il2cpp_TypeInfo_var);
		ConfigInfoCollection__ctor_m6851(L_9, /*hidden argument*/NULL);
		__this->___groups_7 = L_9;
	}

IL_0055:
	{
		ConfigInfoCollection_t1464 * L_10 = (__this->___groups_7);
		ConfigInfo_t1402 * L_11 = ___data;
		NullCheck(L_11);
		String_t* L_12 = (L_11->___Name_0);
		ConfigInfo_t1402 * L_13 = ___data;
		NullCheck(L_10);
		ConfigInfoCollection_set_Item_m6854(L_10, L_12, L_13, /*hidden argument*/NULL);
	}

IL_0067:
	{
		return;
	}
}
// System.Void System.Configuration.SectionGroupInfo::Clear()
extern "C" void SectionGroupInfo_Clear_m6839 (SectionGroupInfo_t1406 * __this, const MethodInfo* method)
{
	{
		ConfigInfoCollection_t1464 * L_0 = (__this->___sections_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ConfigInfoCollection_t1464 * L_1 = (__this->___sections_6);
		NullCheck(L_1);
		ConfigInfoCollection_Clear_m6856(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		ConfigInfoCollection_t1464 * L_2 = (__this->___groups_7);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		ConfigInfoCollection_t1464 * L_3 = (__this->___groups_7);
		NullCheck(L_3);
		ConfigInfoCollection_Clear_m6856(L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Boolean System.Configuration.SectionGroupInfo::HasChild(System.String)
extern "C" bool SectionGroupInfo_HasChild_m6840 (SectionGroupInfo_t1406 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		ConfigInfoCollection_t1464 * L_0 = (__this->___sections_6);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		ConfigInfoCollection_t1464 * L_1 = (__this->___sections_6);
		String_t* L_2 = ___name;
		NullCheck(L_1);
		ConfigInfo_t1402 * L_3 = ConfigInfoCollection_get_Item_m6853(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		return 1;
	}

IL_001e:
	{
		ConfigInfoCollection_t1464 * L_4 = (__this->___groups_7);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		ConfigInfoCollection_t1464 * L_5 = (__this->___groups_7);
		String_t* L_6 = ___name;
		NullCheck(L_5);
		ConfigInfo_t1402 * L_7 = ConfigInfoCollection_get_Item_m6853(L_5, L_6, /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)((((Object_t*)(ConfigInfo_t1402 *)L_7) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B6_0 = 0;
	}

IL_003e:
	{
		return G_B6_0;
	}
}
// System.Void System.Configuration.SectionGroupInfo::RemoveChild(System.String)
extern "C" void SectionGroupInfo_RemoveChild_m6841 (SectionGroupInfo_t1406 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		ConfigInfoCollection_t1464 * L_0 = (__this->___sections_6);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ConfigInfoCollection_t1464 * L_1 = (__this->___sections_6);
		String_t* L_2 = ___name;
		NullCheck(L_1);
		ConfigInfoCollection_Remove_m6857(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		ConfigInfoCollection_t1464 * L_3 = (__this->___groups_7);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		ConfigInfoCollection_t1464 * L_4 = (__this->___groups_7);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		ConfigInfoCollection_Remove_m6857(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::get_Sections()
extern TypeInfo* SectionGroupInfo_t1406_il2cpp_TypeInfo_var;
extern "C" ConfigInfoCollection_t1464 * SectionGroupInfo_get_Sections_m6842 (SectionGroupInfo_t1406 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SectionGroupInfo_t1406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2943);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigInfoCollection_t1464 * L_0 = (__this->___sections_6);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SectionGroupInfo_t1406_il2cpp_TypeInfo_var);
		ConfigInfoCollection_t1464 * L_1 = ((SectionGroupInfo_t1406_StaticFields*)SectionGroupInfo_t1406_il2cpp_TypeInfo_var->static_fields)->___emptyList_8;
		return L_1;
	}

IL_0011:
	{
		ConfigInfoCollection_t1464 * L_2 = (__this->___sections_6);
		return L_2;
	}
}
// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::get_Groups()
extern TypeInfo* SectionGroupInfo_t1406_il2cpp_TypeInfo_var;
extern "C" ConfigInfoCollection_t1464 * SectionGroupInfo_get_Groups_m6843 (SectionGroupInfo_t1406 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SectionGroupInfo_t1406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2943);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigInfoCollection_t1464 * L_0 = (__this->___groups_7);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SectionGroupInfo_t1406_il2cpp_TypeInfo_var);
		ConfigInfoCollection_t1464 * L_1 = ((SectionGroupInfo_t1406_StaticFields*)SectionGroupInfo_t1406_il2cpp_TypeInfo_var->static_fields)->___emptyList_8;
		return L_1;
	}

IL_0011:
	{
		ConfigInfoCollection_t1464 * L_2 = (__this->___groups_7);
		return L_2;
	}
}
// System.Void System.Configuration.SectionGroupInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SectionInfo_t1463_il2cpp_TypeInfo_var;
extern TypeInfo* SectionGroupInfo_t1406_il2cpp_TypeInfo_var;
extern "C" void SectionGroupInfo_ReadConfig_m6844 (SectionGroupInfo_t1406 * __this, Configuration_t1398 * ___cfg, String_t* ___streamName, XmlReader_t843 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		SectionInfo_t1463_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2982);
		SectionGroupInfo_t1406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2943);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	ConfigInfo_t1402 * V_1 = {0};
	ConfigInfo_t1402 * V_2 = {0};
	{
		String_t* L_0 = ___streamName;
		ConfigInfo_set_StreamName_m6499(__this, L_0, /*hidden argument*/NULL);
		Configuration_t1398 * L_1 = ___cfg;
		NullCheck(L_1);
		Object_t * L_2 = Configuration_get_ConfigHost_m6508(L_1, /*hidden argument*/NULL);
		((ConfigInfo_t1402 *)__this)->___ConfigHost_5 = L_2;
		XmlReader_t843 * L_3 = ___reader;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m1484(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral1479, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_008c;
	}

IL_002d:
	{
		XmlReader_t843 * L_6 = ___reader;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Name() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m1295(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral302, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		XmlReader_t843 * L_9 = ___reader;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_9);
		((ConfigInfo_t1402 *)__this)->___Name_0 = L_10;
		goto IL_008c;
	}

IL_0053:
	{
		XmlReader_t843 * L_11 = ___reader;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Name() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m1295(NULL /*static, unused*/, L_12, (String_t*) &_stringLiteral1091, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		XmlReader_t843 * L_14 = ___reader;
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_14);
		((ConfigInfo_t1402 *)__this)->___TypeName_1 = L_15;
		((ConfigInfo_t1402 *)__this)->___Type_2 = (Type_t *)NULL;
		goto IL_008c;
	}

IL_0080:
	{
		XmlReader_t843 * L_16 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, (String_t*) &_stringLiteral1563, L_16, /*hidden argument*/NULL);
	}

IL_008c:
	{
		XmlReader_t843 * L_17 = ___reader;
		NullCheck(L_17);
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_17);
		if (L_18)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_19 = (((ConfigInfo_t1402 *)__this)->___Name_0);
		if (L_19)
		{
			goto IL_00ae;
		}
	}
	{
		XmlReader_t843 * L_20 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, (String_t*) &_stringLiteral1564, L_20, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		String_t* L_21 = (((ConfigInfo_t1402 *)__this)->___Name_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_op_Equality_m1295(NULL /*static, unused*/, L_21, (String_t*) &_stringLiteral1553, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00cf;
		}
	}
	{
		XmlReader_t843 * L_23 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, (String_t*) &_stringLiteral1554, L_23, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		String_t* L_24 = (((ConfigInfo_t1402 *)__this)->___TypeName_1);
		if (L_24)
		{
			goto IL_00e5;
		}
	}
	{
		((ConfigInfo_t1402 *)__this)->___TypeName_1 = (String_t*) &_stringLiteral1565;
	}

IL_00e5:
	{
		XmlReader_t843 * L_25 = ___reader;
		NullCheck(L_25);
		bool L_26 = (bool)VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_25);
		if (!L_26)
		{
			goto IL_00f7;
		}
	}
	{
		XmlReader_t843 * L_27 = ___reader;
		NullCheck(L_27);
		VirtActionInvoker0::Invoke(54 /* System.Void System.Xml.XmlReader::Skip() */, L_27);
		return;
	}

IL_00f7:
	{
		XmlReader_t843 * L_28 = ___reader;
		NullCheck(L_28);
		VirtActionInvoker0::Invoke(48 /* System.Void System.Xml.XmlReader::ReadStartElement() */, L_28);
		XmlReader_t843 * L_29 = ___reader;
		NullCheck(L_29);
		VirtFuncInvoker0< int32_t >::Invoke(38 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_29);
		goto IL_024a;
	}

IL_0109:
	{
		XmlReader_t843 * L_30 = ___reader;
		NullCheck(L_30);
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_30);
		if ((((int32_t)L_31) == ((int32_t)1)))
		{
			goto IL_0120;
		}
	}
	{
		XmlReader_t843 * L_32 = ___reader;
		NullCheck(L_32);
		VirtActionInvoker0::Invoke(54 /* System.Void System.Xml.XmlReader::Skip() */, L_32);
		goto IL_024a;
	}

IL_0120:
	{
		XmlReader_t843 * L_33 = ___reader;
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_33);
		V_0 = L_34;
		V_1 = (ConfigInfo_t1402 *)NULL;
		String_t* L_35 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_36 = String_op_Equality_m1295(NULL /*static, unused*/, L_35, (String_t*) &_stringLiteral1483, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0145;
		}
	}
	{
		XmlReader_t843 * L_37 = ___reader;
		SectionGroupInfo_ReadRemoveSection_m6845(__this, L_37, /*hidden argument*/NULL);
		goto IL_024a;
	}

IL_0145:
	{
		String_t* L_38 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_39 = String_op_Equality_m1295(NULL /*static, unused*/, L_38, (String_t*) &_stringLiteral1482, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_017d;
		}
	}
	{
		XmlReader_t843 * L_40 = ___reader;
		NullCheck(L_40);
		bool L_41 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlReader::get_HasAttributes() */, L_40);
		if (!L_41)
		{
			goto IL_016c;
		}
	}
	{
		XmlReader_t843 * L_42 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, (String_t*) &_stringLiteral1566, L_42, /*hidden argument*/NULL);
	}

IL_016c:
	{
		SectionGroupInfo_Clear_m6839(__this, /*hidden argument*/NULL);
		XmlReader_t843 * L_43 = ___reader;
		NullCheck(L_43);
		VirtActionInvoker0::Invoke(54 /* System.Void System.Xml.XmlReader::Skip() */, L_43);
		goto IL_024a;
	}

IL_017d:
	{
		String_t* L_44 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m1295(NULL /*static, unused*/, L_44, (String_t*) &_stringLiteral1567, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0198;
		}
	}
	{
		SectionInfo_t1463 * L_46 = (SectionInfo_t1463 *)il2cpp_codegen_object_new (SectionInfo_t1463_il2cpp_TypeInfo_var);
		SectionInfo__ctor_m6831(L_46, /*hidden argument*/NULL);
		V_1 = L_46;
		goto IL_01ca;
	}

IL_0198:
	{
		String_t* L_47 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_op_Equality_m1295(NULL /*static, unused*/, L_47, (String_t*) &_stringLiteral1568, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_01b3;
		}
	}
	{
		SectionGroupInfo_t1406 * L_49 = (SectionGroupInfo_t1406 *)il2cpp_codegen_object_new (SectionGroupInfo_t1406_il2cpp_TypeInfo_var);
		SectionGroupInfo__ctor_m6836(L_49, /*hidden argument*/NULL);
		V_1 = L_49;
		goto IL_01ca;
	}

IL_01b3:
	{
		XmlReader_t843 * L_50 = ___reader;
		NullCheck(L_50);
		String_t* L_51 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Name() */, L_50);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_52 = String_Concat_m1269(NULL /*static, unused*/, (String_t*) &_stringLiteral1569, L_51, /*hidden argument*/NULL);
		XmlReader_t843 * L_53 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, L_52, L_53, /*hidden argument*/NULL);
	}

IL_01ca:
	{
		ConfigInfo_t1402 * L_54 = V_1;
		Configuration_t1398 * L_55 = ___cfg;
		String_t* L_56 = ___streamName;
		XmlReader_t843 * L_57 = ___reader;
		NullCheck(L_54);
		VirtActionInvoker3< Configuration_t1398 *, String_t*, XmlReader_t843 * >::Invoke(5 /* System.Void System.Configuration.ConfigInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader) */, L_54, L_55, L_56, L_57);
		ConfigInfoCollection_t1464 * L_58 = SectionGroupInfo_get_Groups_m6843(__this, /*hidden argument*/NULL);
		ConfigInfo_t1402 * L_59 = V_1;
		NullCheck(L_59);
		String_t* L_60 = (L_59->___Name_0);
		NullCheck(L_58);
		ConfigInfo_t1402 * L_61 = ConfigInfoCollection_get_Item_m6853(L_58, L_60, /*hidden argument*/NULL);
		V_2 = L_61;
		ConfigInfo_t1402 * L_62 = V_2;
		if (L_62)
		{
			goto IL_01fd;
		}
	}
	{
		ConfigInfoCollection_t1464 * L_63 = SectionGroupInfo_get_Sections_m6842(__this, /*hidden argument*/NULL);
		ConfigInfo_t1402 * L_64 = V_1;
		NullCheck(L_64);
		String_t* L_65 = (L_64->___Name_0);
		NullCheck(L_63);
		ConfigInfo_t1402 * L_66 = ConfigInfoCollection_get_Item_m6853(L_63, L_65, /*hidden argument*/NULL);
		V_2 = L_66;
	}

IL_01fd:
	{
		ConfigInfo_t1402 * L_67 = V_2;
		if (!L_67)
		{
			goto IL_0243;
		}
	}
	{
		ConfigInfo_t1402 * L_68 = V_2;
		NullCheck(L_68);
		Type_t * L_69 = Object_GetType_m1416(L_68, /*hidden argument*/NULL);
		ConfigInfo_t1402 * L_70 = V_1;
		NullCheck(L_70);
		Type_t * L_71 = Object_GetType_m1416(L_70, /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_69) == ((Object_t*)(Type_t *)L_71)))
		{
			goto IL_0230;
		}
	}
	{
		ConfigInfo_t1402 * L_72 = V_1;
		NullCheck(L_72);
		String_t* L_73 = (L_72->___Name_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral1570, L_73, (String_t*) &_stringLiteral1571, /*hidden argument*/NULL);
		XmlReader_t843 * L_75 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, L_74, L_75, /*hidden argument*/NULL);
	}

IL_0230:
	{
		ConfigInfo_t1402 * L_76 = V_2;
		ConfigInfo_t1402 * L_77 = V_1;
		NullCheck(L_76);
		VirtActionInvoker1< ConfigInfo_t1402 * >::Invoke(7 /* System.Void System.Configuration.ConfigInfo::Merge(System.Configuration.ConfigInfo) */, L_76, L_77);
		ConfigInfo_t1402 * L_78 = V_2;
		String_t* L_79 = ___streamName;
		NullCheck(L_78);
		ConfigInfo_set_StreamName_m6499(L_78, L_79, /*hidden argument*/NULL);
		goto IL_024a;
	}

IL_0243:
	{
		ConfigInfo_t1402 * L_80 = V_1;
		SectionGroupInfo_AddChild_m6838(__this, L_80, /*hidden argument*/NULL);
	}

IL_024a:
	{
		XmlReader_t843 * L_81 = ___reader;
		NullCheck(L_81);
		int32_t L_82 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_81);
		if ((!(((uint32_t)L_82) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0109;
		}
	}
	{
		XmlReader_t843 * L_83 = ___reader;
		NullCheck(L_83);
		VirtActionInvoker0::Invoke(45 /* System.Void System.Xml.XmlReader::ReadEndElement() */, L_83);
		return;
	}
}
// System.Void System.Configuration.SectionGroupInfo::ReadRemoveSection(System.Xml.XmlReader)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SectionGroupInfo_ReadRemoveSection_m6845 (SectionGroupInfo_t1406 * __this, XmlReader_t843 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		XmlReader_t843 * L_0 = ___reader;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_0);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		XmlReader_t843 * L_2 = ___reader;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Name() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m1484(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral302, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}

IL_0020:
	{
		XmlReader_t843 * L_5 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, (String_t*) &_stringLiteral1566, L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		XmlReader_t843 * L_6 = ___reader;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_6);
		V_0 = L_7;
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004a;
		}
	}
	{
		XmlReader_t843 * L_10 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, (String_t*) &_stringLiteral1572, L_10, /*hidden argument*/NULL);
	}

IL_004a:
	{
		XmlReader_t843 * L_11 = ___reader;
		NullCheck(L_11);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_11);
		String_t* L_12 = V_0;
		bool L_13 = SectionGroupInfo_HasChild_m6840(__this, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m1269(NULL /*static, unused*/, (String_t*) &_stringLiteral1573, L_14, /*hidden argument*/NULL);
		XmlReader_t843 * L_16 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, L_15, L_16, /*hidden argument*/NULL);
	}

IL_006f:
	{
		String_t* L_17 = V_0;
		SectionGroupInfo_RemoveChild_m6841(__this, L_17, /*hidden argument*/NULL);
		XmlReader_t843 * L_18 = ___reader;
		NullCheck(L_18);
		VirtActionInvoker0::Invoke(54 /* System.Void System.Xml.XmlReader::Skip() */, L_18);
		return;
	}
}
// System.Void System.Configuration.SectionGroupInfo::ReadRootData(System.Xml.XmlReader,System.Configuration.Configuration,System.Boolean)
extern "C" void SectionGroupInfo_ReadRootData_m6846 (SectionGroupInfo_t1406 * __this, XmlReader_t843 * ___reader, Configuration_t1398 * ___config, bool ___overrideAllowed, const MethodInfo* method)
{
	{
		XmlReader_t843 * L_0 = ___reader;
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(38 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_0);
		XmlReader_t843 * L_1 = ___reader;
		Configuration_t1398 * L_2 = ___config;
		bool L_3 = ___overrideAllowed;
		SectionGroupInfo_ReadContent_m6848(__this, L_1, L_2, L_3, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.SectionGroupInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
extern "C" void SectionGroupInfo_ReadData_m6847 (SectionGroupInfo_t1406 * __this, Configuration_t1398 * ___config, XmlReader_t843 * ___reader, bool ___overrideAllowed, const MethodInfo* method)
{
	{
		XmlReader_t843 * L_0 = ___reader;
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(38 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_0);
		XmlReader_t843 * L_1 = ___reader;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_1);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		XmlReader_t843 * L_3 = ___reader;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(48 /* System.Void System.Xml.XmlReader::ReadStartElement() */, L_3);
		XmlReader_t843 * L_4 = ___reader;
		Configuration_t1398 * L_5 = ___config;
		bool L_6 = ___overrideAllowed;
		SectionGroupInfo_ReadContent_m6848(__this, L_4, L_5, L_6, 0, /*hidden argument*/NULL);
		XmlReader_t843 * L_7 = ___reader;
		NullCheck(L_7);
		VirtFuncInvoker0< int32_t >::Invoke(38 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_7);
		XmlReader_t843 * L_8 = ___reader;
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(45 /* System.Void System.Xml.XmlReader::ReadEndElement() */, L_8);
		goto IL_003b;
	}

IL_0034:
	{
		XmlReader_t843 * L_9 = ___reader;
		NullCheck(L_9);
		VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean System.Xml.XmlReader::Read() */, L_9);
	}

IL_003b:
	{
		return;
	}
}
// System.Void System.Configuration.SectionGroupInfo::ReadContent(System.Xml.XmlReader,System.Configuration.Configuration,System.Boolean,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t311_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t260_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationLocation_t1422_il2cpp_TypeInfo_var;
extern "C" void SectionGroupInfo_ReadContent_m6848 (SectionGroupInfo_t1406 * __this, XmlReader_t843 * ___reader, Configuration_t1398 * ___config, bool ___overrideAllowed, bool ___root, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Boolean_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		CharU5BU5D_t260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		ConfigurationLocation_t1422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2968);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	bool V_1 = false;
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	StringU5BU5D_t258* V_4 = {0};
	String_t* V_5 = {0};
	String_t* V_6 = {0};
	StringU5BU5D_t258* V_7 = {0};
	int32_t V_8 = 0;
	ConfigurationLocation_t1422 * V_9 = {0};
	ConfigInfo_t1402 * V_10 = {0};
	int32_t G_B12_0 = 0;
	{
		goto IL_0176;
	}

IL_0005:
	{
		XmlReader_t843 * L_0 = ___reader;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_0);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		XmlReader_t843 * L_2 = ___reader;
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(54 /* System.Void System.Xml.XmlReader::Skip() */, L_2);
		goto IL_0176;
	}

IL_001c:
	{
		XmlReader_t843 * L_3 = ___reader;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1295(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral1574, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		XmlReader_t843 * L_6 = ___reader;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(54 /* System.Void System.Xml.XmlReader::Skip() */, L_6);
		goto IL_0176;
	}

IL_003c:
	{
		XmlReader_t843 * L_7 = ___reader;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m1295(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral1553, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_013a;
		}
	}
	{
		bool L_10 = ___root;
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		XmlReader_t843 * L_11 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, (String_t*) &_stringLiteral1575, L_11, /*hidden argument*/NULL);
	}

IL_0064:
	{
		XmlReader_t843 * L_12 = ___reader;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_12, (String_t*) &_stringLiteral1576);
		V_0 = L_13;
		String_t* L_14 = V_0;
		if (!L_14)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m1368(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t311_il2cpp_TypeInfo_var);
		bool L_18 = Boolean_Parse_m5211(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_18));
		goto IL_008a;
	}

IL_0089:
	{
		G_B12_0 = 1;
	}

IL_008a:
	{
		V_1 = G_B12_0;
		XmlReader_t843 * L_19 = ___reader;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_19, (String_t*) &_stringLiteral1577);
		V_2 = L_20;
		String_t* L_21 = V_2;
		if (!L_21)
		{
			goto IL_012c;
		}
	}
	{
		String_t* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m1368(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_012c;
		}
	}
	{
		XmlReader_t843 * L_24 = ___reader;
		NullCheck(L_24);
		String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(47 /* System.String System.Xml.XmlReader::ReadOuterXml() */, L_24);
		V_3 = L_25;
		String_t* L_26 = V_2;
		CharU5BU5D_t260* L_27 = ((CharU5BU5D_t260*)SZArrayNew(CharU5BU5D_t260_il2cpp_TypeInfo_var, 1));
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_27, 0)) = (uint16_t)((int32_t)44);
		NullCheck(L_26);
		StringU5BU5D_t258* L_28 = String_Split_m1813(L_26, L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		StringU5BU5D_t258* L_29 = V_4;
		V_7 = L_29;
		V_8 = 0;
		goto IL_011c;
	}

IL_00cf:
	{
		StringU5BU5D_t258* L_30 = V_7;
		int32_t L_31 = V_8;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		int32_t L_32 = L_31;
		V_6 = (*(String_t**)(String_t**)SZArrayLdElema(L_30, L_32));
		String_t* L_33 = V_6;
		NullCheck(L_33);
		String_t* L_34 = String_Trim_m1528(L_33, /*hidden argument*/NULL);
		V_5 = L_34;
		Configuration_t1398 * L_35 = ___config;
		NullCheck(L_35);
		ConfigurationLocationCollection_t1405 * L_36 = Configuration_get_Locations_m6513(L_35, /*hidden argument*/NULL);
		String_t* L_37 = V_5;
		NullCheck(L_36);
		ConfigurationLocation_t1422 * L_38 = ConfigurationLocationCollection_Find_m6645(L_36, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00fd;
		}
	}
	{
		XmlReader_t843 * L_39 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, (String_t*) &_stringLiteral1578, L_39, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		String_t* L_40 = V_5;
		String_t* L_41 = V_3;
		Configuration_t1398 * L_42 = ___config;
		bool L_43 = V_1;
		ConfigurationLocation_t1422 * L_44 = (ConfigurationLocation_t1422 *)il2cpp_codegen_object_new (ConfigurationLocation_t1422_il2cpp_TypeInfo_var);
		ConfigurationLocation__ctor_m6638(L_44, L_40, L_41, L_42, L_43, /*hidden argument*/NULL);
		V_9 = L_44;
		Configuration_t1398 * L_45 = ___config;
		NullCheck(L_45);
		ConfigurationLocationCollection_t1405 * L_46 = Configuration_get_Locations_m6513(L_45, /*hidden argument*/NULL);
		ConfigurationLocation_t1422 * L_47 = V_9;
		NullCheck(L_46);
		ConfigurationLocationCollection_Add_m6644(L_46, L_47, /*hidden argument*/NULL);
		int32_t L_48 = V_8;
		V_8 = ((int32_t)((int32_t)L_48+(int32_t)1));
	}

IL_011c:
	{
		int32_t L_49 = V_8;
		StringU5BU5D_t258* L_50 = V_7;
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)(((int32_t)(((Array_t *)L_50)->max_length))))))
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_0135;
	}

IL_012c:
	{
		Configuration_t1398 * L_51 = ___config;
		XmlReader_t843 * L_52 = ___reader;
		bool L_53 = V_1;
		VirtActionInvoker3< Configuration_t1398 *, XmlReader_t843 *, bool >::Invoke(6 /* System.Void System.Configuration.SectionGroupInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean) */, __this, L_51, L_52, L_53);
	}

IL_0135:
	{
		goto IL_0176;
	}

IL_013a:
	{
		XmlReader_t843 * L_54 = ___reader;
		ConfigInfo_t1402 * L_55 = SectionGroupInfo_GetConfigInfo_m6849(__this, L_54, __this, /*hidden argument*/NULL);
		V_10 = L_55;
		ConfigInfo_t1402 * L_56 = V_10;
		if (!L_56)
		{
			goto IL_015a;
		}
	}
	{
		ConfigInfo_t1402 * L_57 = V_10;
		Configuration_t1398 * L_58 = ___config;
		XmlReader_t843 * L_59 = ___reader;
		bool L_60 = ___overrideAllowed;
		NullCheck(L_57);
		VirtActionInvoker3< Configuration_t1398 *, XmlReader_t843 *, bool >::Invoke(6 /* System.Void System.Configuration.ConfigInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean) */, L_57, L_58, L_59, L_60);
		goto IL_0176;
	}

IL_015a:
	{
		XmlReader_t843 * L_61 = ___reader;
		NullCheck(L_61);
		String_t* L_62 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_61);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_63 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral1579, L_62, (String_t*) &_stringLiteral1580, /*hidden argument*/NULL);
		XmlReader_t843 * L_64 = ___reader;
		ConfigInfo_ThrowException_m6500(__this, L_63, L_64, /*hidden argument*/NULL);
	}

IL_0176:
	{
		XmlReader_t843 * L_65 = ___reader;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_65);
		if ((((int32_t)L_66) == ((int32_t)((int32_t)15))))
		{
			goto IL_018e;
		}
	}
	{
		XmlReader_t843 * L_67 = ___reader;
		NullCheck(L_67);
		int32_t L_68 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_67);
		if (L_68)
		{
			goto IL_0005;
		}
	}

IL_018e:
	{
		return;
	}
}
// System.Configuration.ConfigInfo System.Configuration.SectionGroupInfo::GetConfigInfo(System.Xml.XmlReader,System.Configuration.SectionGroupInfo)
extern TypeInfo* IEnumerable_t662_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SectionGroupInfo_t1406_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" ConfigInfo_t1402 * SectionGroupInfo_GetConfigInfo_m6849 (SectionGroupInfo_t1406 * __this, XmlReader_t843 * ___reader, SectionGroupInfo_t1406 * ___current, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		SectionGroupInfo_t1406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2943);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	ConfigInfo_t1402 * V_0 = {0};
	String_t* V_1 = {0};
	Object_t * V_2 = {0};
	ConfigInfo_t1402 * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (ConfigInfo_t1402 *)NULL;
		SectionGroupInfo_t1406 * L_0 = ___current;
		NullCheck(L_0);
		ConfigInfoCollection_t1464 * L_1 = (L_0->___sections_6);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		SectionGroupInfo_t1406 * L_2 = ___current;
		NullCheck(L_2);
		ConfigInfoCollection_t1464 * L_3 = (L_2->___sections_6);
		XmlReader_t843 * L_4 = ___reader;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_4);
		NullCheck(L_3);
		ConfigInfo_t1402 * L_6 = ConfigInfoCollection_get_Item_m6853(L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_001f:
	{
		ConfigInfo_t1402 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0027;
		}
	}
	{
		ConfigInfo_t1402 * L_8 = V_0;
		return L_8;
	}

IL_0027:
	{
		SectionGroupInfo_t1406 * L_9 = ___current;
		NullCheck(L_9);
		ConfigInfoCollection_t1464 * L_10 = (L_9->___groups_7);
		if (!L_10)
		{
			goto IL_0044;
		}
	}
	{
		SectionGroupInfo_t1406 * L_11 = ___current;
		NullCheck(L_11);
		ConfigInfoCollection_t1464 * L_12 = (L_11->___groups_7);
		XmlReader_t843 * L_13 = ___reader;
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_13);
		NullCheck(L_12);
		ConfigInfo_t1402 * L_15 = ConfigInfoCollection_get_Item_m6853(L_12, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_0044:
	{
		ConfigInfo_t1402 * L_16 = V_0;
		if (!L_16)
		{
			goto IL_004c;
		}
	}
	{
		ConfigInfo_t1402 * L_17 = V_0;
		return L_17;
	}

IL_004c:
	{
		SectionGroupInfo_t1406 * L_18 = ___current;
		NullCheck(L_18);
		ConfigInfoCollection_t1464 * L_19 = (L_18->___groups_7);
		if (L_19)
		{
			goto IL_0059;
		}
	}
	{
		return (ConfigInfo_t1402 *)NULL;
	}

IL_0059:
	{
		SectionGroupInfo_t1406 * L_20 = ___current;
		NullCheck(L_20);
		ConfigInfoCollection_t1464 * L_21 = (L_20->___groups_7);
		NullCheck(L_21);
		Object_t * L_22 = ConfigInfoCollection_get_AllKeys_m6852(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Object_t * L_23 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t662_il2cpp_TypeInfo_var, L_22);
		V_2 = L_23;
	}

IL_006a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a1;
		}

IL_006f:
		{
			Object_t * L_24 = V_2;
			NullCheck(L_24);
			Object_t * L_25 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_24);
			V_1 = ((String_t*)Castclass(L_25, String_t_il2cpp_TypeInfo_var));
			XmlReader_t843 * L_26 = ___reader;
			SectionGroupInfo_t1406 * L_27 = ___current;
			NullCheck(L_27);
			ConfigInfoCollection_t1464 * L_28 = (L_27->___groups_7);
			String_t* L_29 = V_1;
			NullCheck(L_28);
			ConfigInfo_t1402 * L_30 = ConfigInfoCollection_get_Item_m6853(L_28, L_29, /*hidden argument*/NULL);
			ConfigInfo_t1402 * L_31 = SectionGroupInfo_GetConfigInfo_m6849(__this, L_26, ((SectionGroupInfo_t1406 *)Castclass(L_30, SectionGroupInfo_t1406_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			V_0 = L_31;
			ConfigInfo_t1402 * L_32 = V_0;
			if (!L_32)
			{
				goto IL_00a1;
			}
		}

IL_009a:
		{
			ConfigInfo_t1402 * L_33 = V_0;
			V_3 = L_33;
			IL2CPP_LEAVE(0xC8, FINALLY_00b1);
		}

IL_00a1:
		{
			Object_t * L_34 = V_2;
			NullCheck(L_34);
			bool L_35 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_34);
			if (L_35)
			{
				goto IL_006f;
			}
		}

IL_00ac:
		{
			IL2CPP_LEAVE(0xC6, FINALLY_00b1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_00b1;
	}

FINALLY_00b1:
	{ // begin finally (depth: 1)
		{
			Object_t * L_36 = V_2;
			V_4 = ((Object_t *)IsInst(L_36, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_37 = V_4;
			if (L_37)
			{
				goto IL_00be;
			}
		}

IL_00bd:
		{
			IL2CPP_END_FINALLY(177)
		}

IL_00be:
		{
			Object_t * L_38 = V_4;
			NullCheck(L_38);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_38);
			IL2CPP_END_FINALLY(177)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(177)
	{
		IL2CPP_JUMP_TBL(0xC8, IL_00c8)
		IL2CPP_JUMP_TBL(0xC6, IL_00c6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_00c6:
	{
		return (ConfigInfo_t1402 *)NULL;
	}

IL_00c8:
	{
		ConfigInfo_t1402 * L_39 = V_3;
		return L_39;
	}
}
// System.Void System.Configuration.SectionGroupInfo::Merge(System.Configuration.ConfigInfo)
extern TypeInfo* SectionGroupInfo_t1406_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t662_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void SectionGroupInfo_Merge_m6850 (SectionGroupInfo_t1406 * __this, ConfigInfo_t1402 * ___newData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SectionGroupInfo_t1406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2943);
		IEnumerable_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	SectionGroupInfo_t1406 * V_0 = {0};
	ConfigInfo_t1402 * V_1 = {0};
	String_t* V_2 = {0};
	Object_t * V_3 = {0};
	String_t* V_4 = {0};
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
		ConfigInfo_t1402 * L_0 = ___newData;
		V_0 = ((SectionGroupInfo_t1406 *)IsInst(L_0, SectionGroupInfo_t1406_il2cpp_TypeInfo_var));
		SectionGroupInfo_t1406 * L_1 = V_0;
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
		SectionGroupInfo_t1406 * L_2 = V_0;
		NullCheck(L_2);
		ConfigInfoCollection_t1464 * L_3 = (L_2->___sections_6);
		if (!L_3)
		{
			goto IL_00a1;
		}
	}
	{
		SectionGroupInfo_t1406 * L_4 = V_0;
		NullCheck(L_4);
		ConfigInfoCollection_t1464 * L_5 = (L_4->___sections_6);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_5);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		SectionGroupInfo_t1406 * L_7 = V_0;
		NullCheck(L_7);
		ConfigInfoCollection_t1464 * L_8 = (L_7->___sections_6);
		NullCheck(L_8);
		Object_t * L_9 = ConfigInfoCollection_get_AllKeys_m6852(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t662_il2cpp_TypeInfo_var, L_9);
		V_3 = L_10;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_0040:
		{
			Object_t * L_11 = V_3;
			NullCheck(L_11);
			Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_11);
			V_2 = ((String_t*)Castclass(L_12, String_t_il2cpp_TypeInfo_var));
			ConfigInfoCollection_t1464 * L_13 = (__this->___sections_6);
			String_t* L_14 = V_2;
			NullCheck(L_13);
			ConfigInfo_t1402 * L_15 = ConfigInfoCollection_get_Item_m6853(L_13, L_14, /*hidden argument*/NULL);
			V_1 = L_15;
			ConfigInfo_t1402 * L_16 = V_1;
			if (!L_16)
			{
				goto IL_0064;
			}
		}

IL_005f:
		{
			goto IL_007c;
		}

IL_0064:
		{
			ConfigInfoCollection_t1464 * L_17 = (__this->___sections_6);
			String_t* L_18 = V_2;
			SectionGroupInfo_t1406 * L_19 = V_0;
			NullCheck(L_19);
			ConfigInfoCollection_t1464 * L_20 = (L_19->___sections_6);
			String_t* L_21 = V_2;
			NullCheck(L_20);
			ConfigInfo_t1402 * L_22 = ConfigInfoCollection_get_Item_m6853(L_20, L_21, /*hidden argument*/NULL);
			NullCheck(L_17);
			ConfigInfoCollection_Add_m6855(L_17, L_18, L_22, /*hidden argument*/NULL);
		}

IL_007c:
		{
			Object_t * L_23 = V_3;
			NullCheck(L_23);
			bool L_24 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_0040;
			}
		}

IL_0087:
		{
			IL2CPP_LEAVE(0xA1, FINALLY_008c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_008c;
	}

FINALLY_008c:
	{ // begin finally (depth: 1)
		{
			Object_t * L_25 = V_3;
			V_6 = ((Object_t *)IsInst(L_25, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_26 = V_6;
			if (L_26)
			{
				goto IL_0099;
			}
		}

IL_0098:
		{
			IL2CPP_END_FINALLY(140)
		}

IL_0099:
		{
			Object_t * L_27 = V_6;
			NullCheck(L_27);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_27);
			IL2CPP_END_FINALLY(140)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_JUMP_TBL(0xA1, IL_00a1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_00a1:
	{
		SectionGroupInfo_t1406 * L_28 = V_0;
		NullCheck(L_28);
		ConfigInfoCollection_t1464 * L_29 = (L_28->___groups_7);
		if (!L_29)
		{
			goto IL_0147;
		}
	}
	{
		SectionGroupInfo_t1406 * L_30 = V_0;
		NullCheck(L_30);
		ConfigInfoCollection_t1464 * L_31 = (L_30->___sections_6);
		if (!L_31)
		{
			goto IL_0147;
		}
	}
	{
		SectionGroupInfo_t1406 * L_32 = V_0;
		NullCheck(L_32);
		ConfigInfoCollection_t1464 * L_33 = (L_32->___sections_6);
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_33);
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_0147;
		}
	}
	{
		SectionGroupInfo_t1406 * L_35 = V_0;
		NullCheck(L_35);
		ConfigInfoCollection_t1464 * L_36 = (L_35->___groups_7);
		NullCheck(L_36);
		Object_t * L_37 = ConfigInfoCollection_get_AllKeys_m6852(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Object_t * L_38 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t662_il2cpp_TypeInfo_var, L_37);
		V_5 = L_38;
	}

IL_00da:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0120;
		}

IL_00df:
		{
			Object_t * L_39 = V_5;
			NullCheck(L_39);
			Object_t * L_40 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_39);
			V_4 = ((String_t*)Castclass(L_40, String_t_il2cpp_TypeInfo_var));
			ConfigInfoCollection_t1464 * L_41 = (__this->___groups_7);
			String_t* L_42 = V_4;
			NullCheck(L_41);
			ConfigInfo_t1402 * L_43 = ConfigInfoCollection_get_Item_m6853(L_41, L_42, /*hidden argument*/NULL);
			V_1 = L_43;
			ConfigInfo_t1402 * L_44 = V_1;
			if (!L_44)
			{
				goto IL_0106;
			}
		}

IL_0101:
		{
			goto IL_0120;
		}

IL_0106:
		{
			ConfigInfoCollection_t1464 * L_45 = (__this->___groups_7);
			String_t* L_46 = V_4;
			SectionGroupInfo_t1406 * L_47 = V_0;
			NullCheck(L_47);
			ConfigInfoCollection_t1464 * L_48 = (L_47->___groups_7);
			String_t* L_49 = V_4;
			NullCheck(L_48);
			ConfigInfo_t1402 * L_50 = ConfigInfoCollection_get_Item_m6853(L_48, L_49, /*hidden argument*/NULL);
			NullCheck(L_45);
			ConfigInfoCollection_Add_m6855(L_45, L_46, L_50, /*hidden argument*/NULL);
		}

IL_0120:
		{
			Object_t * L_51 = V_5;
			NullCheck(L_51);
			bool L_52 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_51);
			if (L_52)
			{
				goto IL_00df;
			}
		}

IL_012c:
		{
			IL2CPP_LEAVE(0x147, FINALLY_0131);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0131;
	}

FINALLY_0131:
	{ // begin finally (depth: 1)
		{
			Object_t * L_53 = V_5;
			V_7 = ((Object_t *)IsInst(L_53, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_54 = V_7;
			if (L_54)
			{
				goto IL_013f;
			}
		}

IL_013e:
		{
			IL2CPP_END_FINALLY(305)
		}

IL_013f:
		{
			Object_t * L_55 = V_7;
			NullCheck(L_55);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_55);
			IL2CPP_END_FINALLY(305)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(305)
	{
		IL2CPP_JUMP_TBL(0x147, IL_0147)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0147:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ConfigInfoCollection::.ctor()
extern TypeInfo* StringComparer_t678_il2cpp_TypeInfo_var;
extern "C" void ConfigInfoCollection__ctor_m6851 (ConfigInfoCollection_t1464 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringComparer_t678_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(918);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t678_il2cpp_TypeInfo_var);
		StringComparer_t678 * L_0 = StringComparer_get_Ordinal_m6912(NULL /*static, unused*/, /*hidden argument*/NULL);
		NameObjectCollectionBase__ctor_m6913(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.ICollection System.Configuration.ConfigInfoCollection::get_AllKeys()
extern "C" Object_t * ConfigInfoCollection_get_AllKeys_m6852 (ConfigInfoCollection_t1464 * __this, const MethodInfo* method)
{
	{
		KeysCollection_t1468 * L_0 = (KeysCollection_t1468 *)VirtFuncInvoker0< KeysCollection_t1468 * >::Invoke(10 /* System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys() */, __this);
		return L_0;
	}
}
// System.Configuration.ConfigInfo System.Configuration.ConfigInfoCollection::get_Item(System.String)
extern TypeInfo* ConfigInfo_t1402_il2cpp_TypeInfo_var;
extern "C" ConfigInfo_t1402 * ConfigInfoCollection_get_Item_m6853 (ConfigInfoCollection_t1464 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigInfo_t1402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3003);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		Object_t * L_1 = NameObjectCollectionBase_BaseGet_m6914(__this, L_0, /*hidden argument*/NULL);
		return ((ConfigInfo_t1402 *)Castclass(L_1, ConfigInfo_t1402_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Configuration.ConfigInfoCollection::set_Item(System.String,System.Configuration.ConfigInfo)
extern "C" void ConfigInfoCollection_set_Item_m6854 (ConfigInfoCollection_t1464 * __this, String_t* ___name, ConfigInfo_t1402 * ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		ConfigInfo_t1402 * L_1 = ___value;
		NameObjectCollectionBase_BaseSet_m6915(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigInfoCollection::Add(System.String,System.Configuration.ConfigInfo)
extern "C" void ConfigInfoCollection_Add_m6855 (ConfigInfoCollection_t1464 * __this, String_t* ___name, ConfigInfo_t1402 * ___config, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		ConfigInfo_t1402 * L_1 = ___config;
		NameObjectCollectionBase_BaseAdd_m6920(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigInfoCollection::Clear()
extern "C" void ConfigInfoCollection_Clear_m6856 (ConfigInfoCollection_t1464 * __this, const MethodInfo* method)
{
	{
		NameObjectCollectionBase_BaseClear_m6922(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigInfoCollection::Remove(System.String)
extern "C" void ConfigInfoCollection_Remove_m6857 (ConfigInfoCollection_t1464 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		NameObjectCollectionBase_BaseRemove_m6923(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.SectionInformation::.ctor()
extern "C" void SectionInformation__ctor_m6858 (SectionInformation_t1434 * __this, const MethodInfo* method)
{
	{
		__this->___allow_definition_1 = ((int32_t)300);
		__this->___allow_exe_definition_2 = ((int32_t)100);
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		__this->___allow_definition_1 = ((int32_t)300);
		__this->___allow_location_3 = 1;
		__this->___allow_override_4 = 1;
		__this->___inherit_on_child_apps_5 = 1;
		__this->___restart_on_external_changes_6 = 1;
		return;
	}
}
// System.String System.Configuration.SectionInformation::get_ConfigFilePath()
extern "C" String_t* SectionInformation_get_ConfigFilePath_m6859 (SectionInformation_t1434 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CConfigFilePathU3Ek__BackingField_12);
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::set_ConfigFilePath(System.String)
extern "C" void SectionInformation_set_ConfigFilePath_m6860 (SectionInformation_t1434 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CConfigFilePathU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionInformation::set_AllowDefinition(System.Configuration.ConfigurationAllowDefinition)
extern "C" void SectionInformation_set_AllowDefinition_m6861 (SectionInformation_t1434 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___allow_definition_1 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionInformation::set_AllowExeDefinition(System.Configuration.ConfigurationAllowExeDefinition)
extern "C" void SectionInformation_set_AllowExeDefinition_m6862 (SectionInformation_t1434 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___allow_exe_definition_2 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionInformation::set_AllowLocation(System.Boolean)
extern "C" void SectionInformation_set_AllowLocation_m6863 (SectionInformation_t1434 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___allow_location_3 = L_0;
		return;
	}
}
// System.String System.Configuration.SectionInformation::get_ConfigSource()
extern "C" String_t* SectionInformation_get_ConfigSource_m6864 (SectionInformation_t1434 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___config_source_8);
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::set_ConfigSource(System.String)
extern "C" void SectionInformation_set_ConfigSource_m6865 (SectionInformation_t1434 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___config_source_8 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionInformation::set_RequirePermission(System.Boolean)
extern "C" void SectionInformation_set_RequirePermission_m6866 (SectionInformation_t1434 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___require_permission_7 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionInformation::set_RestartOnExternalChanges(System.Boolean)
extern "C" void SectionInformation_set_RestartOnExternalChanges_m6867 (SectionInformation_t1434 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___restart_on_external_changes_6 = L_0;
		return;
	}
}
// System.Configuration.ConfigurationSection System.Configuration.SectionInformation::GetParentSection()
extern "C" ConfigurationSection_t1436 * SectionInformation_GetParentSection_m6868 (SectionInformation_t1434 * __this, const MethodInfo* method)
{
	{
		ConfigurationSection_t1436 * L_0 = (__this->___parent_0);
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::SetParentSection(System.Configuration.ConfigurationSection)
extern "C" void SectionInformation_SetParentSection_m6869 (SectionInformation_t1434 * __this, ConfigurationSection_t1436 * ___parent, const MethodInfo* method)
{
	{
		ConfigurationSection_t1436 * L_0 = ___parent;
		__this->___parent_0 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionInformation::ProtectSection(System.String)
extern "C" void SectionInformation_ProtectSection_m6870 (SectionInformation_t1434 * __this, String_t* ___provider, const MethodInfo* method)
{
	{
		String_t* L_0 = ___provider;
		ProtectedConfigurationProvider_t1458 * L_1 = ProtectedConfiguration_GetProvider_m6808(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		__this->___protection_provider_11 = L_1;
		return;
	}
}
// System.Void System.Configuration.SectionInformation::SetRawXml(System.String)
extern "C" void SectionInformation_SetRawXml_m6871 (SectionInformation_t1434 * __this, String_t* ___xml, const MethodInfo* method)
{
	{
		String_t* L_0 = ___xml;
		__this->___raw_xml_10 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionInformation::SetName(System.String)
extern "C" void SectionInformation_SetName_m6872 (SectionInformation_t1434 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___name_9 = L_0;
		return;
	}
}
// System.MonoTODOAttribute
#include "System_Configuration_System_MonoTODOAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.MonoTODOAttribute
#include "System_Configuration_System_MonoTODOAttributeMethodDeclarations.h"



// System.Void System.MonoTODOAttribute::.ctor()
extern "C" void MonoTODOAttribute__ctor_m6873 (MonoTODOAttribute_t1465 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MonoTODOAttribute::.ctor(System.String)
extern "C" void MonoTODOAttribute__ctor_m6874 (MonoTODOAttribute_t1465 * __this, String_t* ___comment, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___comment;
		__this->___comment_0 = L_0;
		return;
	}
}
// System.MonoInternalNoteAttribute
#include "System_Configuration_System_MonoInternalNoteAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.MonoInternalNoteAttribute
#include "System_Configuration_System_MonoInternalNoteAttributeMethodDeclarations.h"



// System.Void System.MonoInternalNoteAttribute::.ctor(System.String)
extern "C" void MonoInternalNoteAttribute__ctor_m6875 (MonoInternalNoteAttribute_t1466 * __this, String_t* ___comment, const MethodInfo* method)
{
	{
		String_t* L_0 = ___comment;
		MonoTODOAttribute__ctor_m6874(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
