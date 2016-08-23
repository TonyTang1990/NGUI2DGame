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
#include "System_EnterpriseServices_U3CModuleU3E.h"
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
#include "System_EnterpriseServices_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// System.EnterpriseServices.ApplicationIDAttribute
#include "System_EnterpriseServices_System_EnterpriseServices_Applicat.h"
#ifndef _MSC_VER
#else
#endif
// System.EnterpriseServices.ApplicationIDAttribute
#include "System_EnterpriseServices_System_EnterpriseServices_ApplicatMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.String
#include "mscorlib_System_String.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"


// System.Void System.EnterpriseServices.ApplicationIDAttribute::.ctor(System.String)
extern "C" void ApplicationIDAttribute__ctor_m7023 (ApplicationIDAttribute_t1480 * __this, String_t* ___guid, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___guid;
		Guid_t713  L_1 = {0};
		Guid__ctor_m7025(&L_1, L_0, /*hidden argument*/NULL);
		__this->___guid_0 = L_1;
		return;
	}
}
// System.EnterpriseServices.ApplicationNameAttribute
#include "System_EnterpriseServices_System_EnterpriseServices_Applicat_0.h"
#ifndef _MSC_VER
#else
#endif
// System.EnterpriseServices.ApplicationNameAttribute
#include "System_EnterpriseServices_System_EnterpriseServices_Applicat_0MethodDeclarations.h"



// System.Void System.EnterpriseServices.ApplicationNameAttribute::.ctor(System.String)
extern "C" void ApplicationNameAttribute__ctor_m7024 (ApplicationNameAttribute_t1481 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___name_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
