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

// System.EnterpriseServices.ApplicationIDAttribute
struct ApplicationIDAttribute_t3606647885;
// System.String
struct String_t;
// System.EnterpriseServices.ApplicationNameAttribute
struct ApplicationNameAttribute_t3499772351;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "System_EnterpriseServices_U3CModuleU3E3783534214.h"
#include "System_EnterpriseServices_U3CModuleU3E3783534214MethodDeclarations.h"
#include "System_EnterpriseServices_System_EnterpriseService3606647885.h"
#include "System_EnterpriseServices_System_EnterpriseService3606647885MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Attribute542643598MethodDeclarations.h"
#include "mscorlib_System_Guid2533601593.h"
#include "mscorlib_System_Guid2533601593MethodDeclarations.h"
#include "System_EnterpriseServices_System_EnterpriseService3499772351.h"
#include "System_EnterpriseServices_System_EnterpriseService3499772351MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.EnterpriseServices.ApplicationIDAttribute::.ctor(System.String)
extern "C"  void ApplicationIDAttribute__ctor_m2524567988 (ApplicationIDAttribute_t3606647885 * __this, String_t* ___guid0, const MethodInfo* method)
{
	{
		Attribute__ctor_m1730479323(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___guid0;
		Guid_t2533601593  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Guid__ctor_m2599802704(&L_1, L_0, /*hidden argument*/NULL);
		__this->set_guid_0(L_1);
		return;
	}
}
// System.Void System.EnterpriseServices.ApplicationNameAttribute::.ctor(System.String)
extern "C"  void ApplicationNameAttribute__ctor_m3402247142 (ApplicationNameAttribute_t3499772351 * __this, String_t* ___name0, const MethodInfo* method)
{
	{
		Attribute__ctor_m1730479323(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_name_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
