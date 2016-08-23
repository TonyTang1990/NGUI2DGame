#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.NamedPermissionSet
struct NamedPermissionSet_t2800;
// System.String
struct String_t;
// System.Security.PermissionSet
struct PermissionSet_t2407;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Object
struct Object_t;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.NamedPermissionSet::.ctor()
extern "C" void NamedPermissionSet__ctor_m17579 (NamedPermissionSet_t2800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::.ctor(System.String,System.Security.Permissions.PermissionState)
extern "C" void NamedPermissionSet__ctor_m17580 (NamedPermissionSet_t2800 * __this, String_t* ___name, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::.ctor(System.Security.NamedPermissionSet)
extern "C" void NamedPermissionSet__ctor_m17581 (NamedPermissionSet_t2800 * __this, NamedPermissionSet_t2800 * ___permSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.NamedPermissionSet::get_Name()
extern "C" String_t* NamedPermissionSet_get_Name_m17582 (NamedPermissionSet_t2800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::set_Name(System.String)
extern "C" void NamedPermissionSet_set_Name_m17583 (NamedPermissionSet_t2800 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.NamedPermissionSet::Copy()
extern "C" PermissionSet_t2407 * NamedPermissionSet_Copy_m17584 (NamedPermissionSet_t2800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::FromXml(System.Security.SecurityElement)
extern "C" void NamedPermissionSet_FromXml_m17585 (NamedPermissionSet_t2800 * __this, SecurityElement_t2401 * ___et, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.NamedPermissionSet::ToXml()
extern "C" SecurityElement_t2401 * NamedPermissionSet_ToXml_m17586 (NamedPermissionSet_t2800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.NamedPermissionSet::Equals(System.Object)
extern "C" bool NamedPermissionSet_Equals_m17587 (NamedPermissionSet_t2800 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.NamedPermissionSet::GetHashCode()
extern "C" int32_t NamedPermissionSet_GetHashCode_m17588 (NamedPermissionSet_t2800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
