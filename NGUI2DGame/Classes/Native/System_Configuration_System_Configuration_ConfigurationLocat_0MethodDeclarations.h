#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t1405;
// System.Configuration.ConfigurationLocation
struct ConfigurationLocation_t1422;
// System.String
struct String_t;

// System.Void System.Configuration.ConfigurationLocationCollection::.ctor()
extern "C" void ConfigurationLocationCollection__ctor_m6643 (ConfigurationLocationCollection_t1405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLocationCollection::Add(System.Configuration.ConfigurationLocation)
extern "C" void ConfigurationLocationCollection_Add_m6644 (ConfigurationLocationCollection_t1405 * __this, ConfigurationLocation_t1422 * ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLocation System.Configuration.ConfigurationLocationCollection::Find(System.String)
extern "C" ConfigurationLocation_t1422 * ConfigurationLocationCollection_Find_m6645 (ConfigurationLocationCollection_t1405 * __this, String_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
