#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t1097;
// System.Object
struct Object_t;
// System.ComponentModel.CollectionChangeAction
#include "System_System_ComponentModel_CollectionChangeAction.h"

// System.Void System.ComponentModel.CollectionChangeEventArgs::.ctor(System.ComponentModel.CollectionChangeAction,System.Object)
extern "C" void CollectionChangeEventArgs__ctor_m4974 (CollectionChangeEventArgs_t1097 * __this, int32_t ___action, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::get_Action()
extern "C" int32_t CollectionChangeEventArgs_get_Action_m10452 (CollectionChangeEventArgs_t1097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CollectionChangeEventArgs::get_Element()
extern "C" Object_t * CollectionChangeEventArgs_get_Element_m10453 (CollectionChangeEventArgs_t1097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
