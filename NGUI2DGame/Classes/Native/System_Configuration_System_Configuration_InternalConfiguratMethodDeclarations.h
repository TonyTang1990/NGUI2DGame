#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.InternalConfigurationFactory
struct InternalConfigurationFactory_t1425;
// System.Configuration.Configuration
struct Configuration_t1398;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t300;

// System.Void System.Configuration.InternalConfigurationFactory::.ctor()
extern "C" void InternalConfigurationFactory__ctor_m6763 (InternalConfigurationFactory_t1425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.InternalConfigurationFactory::Create(System.Type,System.Object[])
extern "C" Configuration_t1398 * InternalConfigurationFactory_Create_m6764 (InternalConfigurationFactory_t1425 * __this, Type_t * ___typeConfigHost, ObjectU5BU5D_t300* ___hostInitConfigurationParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
