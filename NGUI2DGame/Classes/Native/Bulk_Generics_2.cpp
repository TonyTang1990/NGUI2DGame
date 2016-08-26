#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Collections.Generic.GenericEqualityComparer`1<System.Int32>
struct GenericEqualityComparer_1_t1055759584;
// System.Collections.Generic.GenericEqualityComparer`1<System.Object>
struct GenericEqualityComparer_1_t1673331431;
// System.Object
struct Il2CppObject;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit1055759584.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit1055759584MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Collections_Generic_EqualityCompare645512719MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Int322071877448MethodDeclarations.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit1673331431.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit1673331431MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_EqualityCompar1263084566MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::.ctor()
extern "C"  void GenericEqualityComparer_1__ctor_m854452741_gshared (GenericEqualityComparer_1_t1055759584 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t645512719 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1));
		((  void (*) (EqualityComparer_1_t645512719 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->methodPointer)((EqualityComparer_1_t645512719 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::GetHashCode(T)
extern "C"  int32_t GenericEqualityComparer_1_GetHashCode_m3520912652_gshared (GenericEqualityComparer_1_t1055759584 * __this, int32_t ___obj0, const MethodInfo* method)
{
	{
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = Int32_GetHashCode_m1381647448((int32_t*)(&___obj0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::Equals(T,T)
extern "C"  bool GenericEqualityComparer_1_Equals_m4153713908_gshared (GenericEqualityComparer_1_t1055759584 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method)
{
	{
		goto IL_0015;
	}
	{
		int32_t L_1 = ___y1;
		int32_t L_2 = L_1;
		Il2CppObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), &L_2);
		return (bool)((((Il2CppObject*)(Il2CppObject *)L_3) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
	}

IL_0015:
	{
		int32_t L_4 = ___y1;
		bool L_5 = Int32_Equals_m321398519((int32_t*)(&___x0), (int32_t)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Object>::.ctor()
extern "C"  void GenericEqualityComparer_1__ctor_m2748998164_gshared (GenericEqualityComparer_1_t1673331431 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t1263084566 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1));
		((  void (*) (EqualityComparer_1_t1263084566 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->methodPointer)((EqualityComparer_1_t1263084566 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Object>::GetHashCode(T)
extern "C"  int32_t GenericEqualityComparer_1_GetHashCode_m3511004089_gshared (GenericEqualityComparer_1_t1673331431 * __this, Il2CppObject * ___obj0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___obj0;
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
		NullCheck((Il2CppObject *)(*(&___obj0)));
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Il2CppObject *)(*(&___obj0)));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Object>::Equals(T,T)
extern "C"  bool GenericEqualityComparer_1_Equals_m482771493_gshared (GenericEqualityComparer_1_t1673331431 * __this, Il2CppObject * ___x0, Il2CppObject * ___y1, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___x0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Il2CppObject * L_1 = ___y1;
		return (bool)((((Il2CppObject*)(Il2CppObject *)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Il2CppObject * L_2 = ___y1;
		NullCheck((Il2CppObject*)(*(&___x0)));
		bool L_3 = InterfaceFuncInvoker1< bool, Il2CppObject * >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3), (Il2CppObject*)(*(&___x0)), (Il2CppObject *)L_2);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
