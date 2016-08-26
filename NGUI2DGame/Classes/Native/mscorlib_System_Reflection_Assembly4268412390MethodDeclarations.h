﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.String
struct String_t;
// System.Security.Policy.Evidence
struct Evidence_t1407710183;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Reflection.Module
struct Module_t4282841206;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.AssemblyName
struct AssemblyName_t894705941;
// System.Reflection.Module[]
struct ModuleU5BU5D_t3593287923;
// System.Security.PermissionSet
struct PermissionSet_t1941658161;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Reflection_Module4282841206.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"
#include "mscorlib_System_Reflection_AssemblyName894705941.h"
#include "mscorlib_System_Security_Policy_Evidence1407710183.h"

// System.Void System.Reflection.Assembly::.ctor()
extern "C"  void Assembly__ctor_m1050192922 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_code_base(System.Boolean)
extern "C"  String_t* Assembly_get_code_base_m3637877060 (Assembly_t4268412390 * __this, bool ___escaped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_fullname()
extern "C"  String_t* Assembly_get_fullname_m3149819070 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_location()
extern "C"  String_t* Assembly_get_location_m2976332497 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::GetCodeBase(System.Boolean)
extern "C"  String_t* Assembly_GetCodeBase_m2735209720 (Assembly_t4268412390 * __this, bool ___escaped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_EscapedCodeBase()
extern "C"  String_t* Assembly_get_EscapedCodeBase_m3889544901 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_FullName()
extern "C"  String_t* Assembly_get_FullName_m1064037566 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Evidence System.Reflection.Assembly::UnprotectedGetEvidence()
extern "C"  Evidence_t1407710183 * Assembly_UnprotectedGetEvidence_m3769776501 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::get_global_assembly_cache()
extern "C"  bool Assembly_get_global_assembly_cache_m1706922704 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::get_GlobalAssemblyCache()
extern "C"  bool Assembly_get_GlobalAssemblyCache_m3940139190 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_Location()
extern "C"  String_t* Assembly_get_Location_m3981013809 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Assembly_GetObjectData_m1845599246 (Assembly_t4268412390 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
extern "C"  bool Assembly_IsDefined_m2841897391 (Assembly_t4268412390 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3614634134* Assembly_GetCustomAttributes_m95309865 (Assembly_t4268412390 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
extern "C"  IntPtr_t Assembly_GetManifestResourceInternal_m2581727816 (Assembly_t4268412390 * __this, String_t* ___name0, int32_t* ___size1, Module_t4282841206 ** ___module2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes(System.Boolean)
extern "C"  TypeU5BU5D_t1664964607* Assembly_GetTypes_m1317253146 (Assembly_t4268412390 * __this, bool ___exportedOnly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes()
extern "C"  TypeU5BU5D_t1664964607* Assembly_GetTypes_m382057419 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
extern "C"  Type_t * Assembly_GetType_m2805031155 (Assembly_t4268412390 * __this, String_t* ___name0, bool ___throwOnError1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String)
extern "C"  Type_t * Assembly_GetType_m2378249586 (Assembly_t4268412390 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * Assembly_InternalGetType_m1990879055 (Assembly_t4268412390 * __this, Module_t4282841206 * ___module0, String_t* ___name1, bool ___throwOnError2, bool ___ignoreCase3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * Assembly_GetType_m2765594712 (Assembly_t4268412390 * __this, String_t* ___name0, bool ___throwOnError1, bool ___ignoreCase2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
extern "C"  void Assembly_FillName_m1934025015 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___ass0, AssemblyName_t894705941 * ___aname1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName(System.Boolean)
extern "C"  AssemblyName_t894705941 * Assembly_GetName_m3984565618 (Assembly_t4268412390 * __this, bool ___copiedName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName()
extern "C"  AssemblyName_t894705941 * Assembly_GetName_m790410837 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
extern "C"  AssemblyName_t894705941 * Assembly_UnprotectedGetName_m3014607408 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::ToString()
extern "C"  String_t* Assembly_ToString_m3970658759 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetEntryAssembly()
extern "C"  Assembly_t4268412390 * Assembly_GetEntryAssembly_m3358047247 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C"  Assembly_t4268412390 * Assembly_Load_m902205655 (Il2CppObject * __this /* static, unused */, String_t* ___assemblyString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String)
extern "C"  Assembly_t4268412390 * Assembly_LoadWithPartialName_m3069126665 (Il2CppObject * __this /* static, unused */, String_t* ___partialName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::load_with_partial_name(System.String,System.Security.Policy.Evidence)
extern "C"  Assembly_t4268412390 * Assembly_load_with_partial_name_m374080690 (Il2CppObject * __this /* static, unused */, String_t* ___name0, Evidence_t1407710183 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String,System.Security.Policy.Evidence)
extern "C"  Assembly_t4268412390 * Assembly_LoadWithPartialName_m1407914987 (Il2CppObject * __this /* static, unused */, String_t* ___partialName0, Evidence_t1407710183 * ___securityEvidence1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C"  Assembly_t4268412390 * Assembly_LoadWithPartialName_m700013884 (Il2CppObject * __this /* static, unused */, String_t* ___partialName0, Evidence_t1407710183 * ___securityEvidence1, bool ___oldBehavior2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern "C"  Module_t4282841206 * Assembly_GetModule_m2064378601 (Assembly_t4268412390 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
extern "C"  ModuleU5BU5D_t3593287923* Assembly_GetModulesInternal_m666827793 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
extern "C"  ModuleU5BU5D_t3593287923* Assembly_GetModules_m2242070953 (Assembly_t4268412390 * __this, bool ___getResourceModules0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
extern "C"  Assembly_t4268412390 * Assembly_GetExecutingAssembly_m776016337 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetManifestModule()
extern "C"  Module_t4282841206 * Assembly_GetManifestModule_m767264474 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetManifestModuleInternal()
extern "C"  Module_t4282841206 * Assembly_GetManifestModuleInternal_m2617649543 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::Resolve()
extern "C"  void Assembly_Resolve_m2614621802 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Reflection.Assembly::get_GrantedPermissionSet()
extern "C"  PermissionSet_t1941658161 * Assembly_get_GrantedPermissionSet_m1719046080 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Reflection.Assembly::get_DeniedPermissionSet()
extern "C"  PermissionSet_t1941658161 * Assembly_get_DeniedPermissionSet_m210913442 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::LoadPermissions(System.Reflection.Assembly,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&)
extern "C"  bool Assembly_LoadPermissions_m896192105 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___a0, IntPtr_t* ___minimum1, int32_t* ___minLength2, IntPtr_t* ___optional3, int32_t* ___optLength4, IntPtr_t* ___refused5, int32_t* ___refLength6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::LoadAssemblyPermissions()
extern "C"  void Assembly_LoadAssemblyPermissions_m928034946 (Assembly_t4268412390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
