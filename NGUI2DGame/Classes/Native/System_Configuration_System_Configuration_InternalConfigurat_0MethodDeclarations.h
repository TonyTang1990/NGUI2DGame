#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.InternalConfigurationSystem
struct InternalConfigurationSystem_t1451;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t1403;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t300;
// System.String
struct String_t;

// System.Void System.Configuration.InternalConfigurationSystem::.ctor()
extern "C" void InternalConfigurationSystem__ctor_m6765 (InternalConfigurationSystem_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationSystem::Init(System.Type,System.Object[])
extern "C" void InternalConfigurationSystem_Init_m6766 (InternalConfigurationSystem_t1451 * __this, Type_t * ___typeConfigHost, ObjectU5BU5D_t300* ___hostInitParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationSystem::InitForConfiguration(System.String&,System.String&,System.String&)
extern "C" void InternalConfigurationSystem_InitForConfiguration_m6767 (InternalConfigurationSystem_t1451 * __this, String_t** ___locationConfigPath, String_t** ___parentConfigPath, String_t** ___parentLocationConfigPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigHost System.Configuration.InternalConfigurationSystem::get_Host()
extern "C" Object_t * InternalConfigurationSystem_get_Host_m6768 (InternalConfigurationSystem_t1451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
