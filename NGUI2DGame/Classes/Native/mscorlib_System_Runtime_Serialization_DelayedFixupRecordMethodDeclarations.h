#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t2762;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2756;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2757;

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
extern "C" void DelayedFixupRecord__ctor_m17390 (DelayedFixupRecord_t2762 * __this, ObjectRecord_t2756 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t2756 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void DelayedFixupRecord_FixupImpl_m17391 (DelayedFixupRecord_t2762 * __this, ObjectManager_t2757 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
