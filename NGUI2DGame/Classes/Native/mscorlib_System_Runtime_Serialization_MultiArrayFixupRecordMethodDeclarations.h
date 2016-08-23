#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t2760;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2756;
// System.Int32[]
struct Int32U5BU5D_t1;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2757;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m17386 (MultiArrayFixupRecord_t2760 * __this, ObjectRecord_t2756 * ___objectToBeFixed, Int32U5BU5D_t1* ___indices, ObjectRecord_t2756 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m17387 (MultiArrayFixupRecord_t2760 * __this, ObjectManager_t2757 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
