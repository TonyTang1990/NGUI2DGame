#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator
struct KeyContainerPermissionAccessEntryEnumerator_t2873;
// System.Object
struct Object_t;
// System.Security.Permissions.KeyContainerPermissionAccessEntry
struct KeyContainerPermissionAccessEntry_t2872;
// System.Collections.ArrayList
struct ArrayList_t913;

// System.Void System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator::.ctor(System.Collections.ArrayList)
extern "C" void KeyContainerPermissionAccessEntryEnumerator__ctor_m18154 (KeyContainerPermissionAccessEntryEnumerator_t2873 * __this, ArrayList_t913 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * KeyContainerPermissionAccessEntryEnumerator_System_Collections_IEnumerator_get_Current_m18155 (KeyContainerPermissionAccessEntryEnumerator_t2873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.KeyContainerPermissionAccessEntry System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator::get_Current()
extern "C" KeyContainerPermissionAccessEntry_t2872 * KeyContainerPermissionAccessEntryEnumerator_get_Current_m18156 (KeyContainerPermissionAccessEntryEnumerator_t2873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator::MoveNext()
extern "C" bool KeyContainerPermissionAccessEntryEnumerator_MoveNext_m18157 (KeyContainerPermissionAccessEntryEnumerator_t2873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
