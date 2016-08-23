#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.StringEnumerator
struct StringEnumerator_t1795;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t1524;

// System.Void System.Collections.Specialized.StringEnumerator::.ctor(System.Collections.Specialized.StringCollection)
extern "C" void StringEnumerator__ctor_m10404 (StringEnumerator_t1795 * __this, StringCollection_t1524 * ___coll, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.StringEnumerator::get_Current()
extern "C" String_t* StringEnumerator_get_Current_m9918 (StringEnumerator_t1795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringEnumerator::MoveNext()
extern "C" bool StringEnumerator_MoveNext_m9919 (StringEnumerator_t1795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
