#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ClientConfigurationSystem
struct ClientConfigurationSystem_t1399;
// System.Configuration.Configuration
struct Configuration_t1398;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void System.Configuration.ClientConfigurationSystem::.ctor()
extern "C" void ClientConfigurationSystem__ctor_m6489 (ClientConfigurationSystem_t1399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ClientConfigurationSystem::System.Configuration.Internal.IInternalConfigSystem.GetSection(System.String)
extern "C" Object_t * ClientConfigurationSystem_System_Configuration_Internal_IInternalConfigSystem_GetSection_m6490 (ClientConfigurationSystem_t1399 * __this, String_t* ___configKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ClientConfigurationSystem::get_Configuration()
extern "C" Configuration_t1398 * ClientConfigurationSystem_get_Configuration_m6491 (ClientConfigurationSystem_t1399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
