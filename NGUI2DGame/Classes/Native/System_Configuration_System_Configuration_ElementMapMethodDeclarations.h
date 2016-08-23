#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ElementMap
struct ElementMap_t1411;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1412;
// System.Type
struct Type_t;

// System.Void System.Configuration.ElementMap::.ctor(System.Type)
extern "C" void ElementMap__ctor_m6573 (ElementMap_t1411 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ElementMap::.cctor()
extern "C" void ElementMap__cctor_m6574 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ElementMap System.Configuration.ElementMap::GetMap(System.Type)
extern "C" ElementMap_t1411 * ElementMap_GetMap_m6575 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ElementMap::get_Properties()
extern "C" ConfigurationPropertyCollection_t1412 * ElementMap_get_Properties_m6576 (ElementMap_t1411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
