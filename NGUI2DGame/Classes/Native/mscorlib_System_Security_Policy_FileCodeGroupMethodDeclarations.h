#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.FileCodeGroup
struct FileCodeGroup_t2901;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t2896;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2802;
// System.Security.Policy.CodeGroup
struct CodeGroup_t2897;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t2893;
// System.Security.Policy.Evidence
struct Evidence_t2406;
// System.Object
struct Object_t;
// System.Security.Permissions.FileIOPermissionAccess
#include "mscorlib_System_Security_Permissions_FileIOPermissionAccess.h"

// System.Void System.Security.Policy.FileCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Permissions.FileIOPermissionAccess)
extern "C" void FileCodeGroup__ctor_m18363 (FileCodeGroup_t2901 * __this, Object_t * ___membershipCondition, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void FileCodeGroup__ctor_m18364 (FileCodeGroup_t2901 * __this, SecurityElement_t2401 * ___e, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.FileCodeGroup::Copy()
extern "C" CodeGroup_t2897 * FileCodeGroup_Copy_m18365 (FileCodeGroup_t2901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.FileCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C" PolicyStatement_t2893 * FileCodeGroup_Resolve_m18366 (FileCodeGroup_t2901 * __this, Evidence_t2406 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.FileCodeGroup::Equals(System.Object)
extern "C" bool FileCodeGroup_Equals_m18367 (FileCodeGroup_t2901 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.FileCodeGroup::GetHashCode()
extern "C" int32_t FileCodeGroup_GetHashCode_m18368 (FileCodeGroup_t2901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void FileCodeGroup_ParseXml_m18369 (FileCodeGroup_t2901 * __this, SecurityElement_t2401 * ___e, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void FileCodeGroup_CreateXml_m18370 (FileCodeGroup_t2901 * __this, SecurityElement_t2401 * ___element, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
