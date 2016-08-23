#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t2761;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2756;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2757;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C" void FixupRecord__ctor_m17388 (FixupRecord_t2761 * __this, ObjectRecord_t2756 * ___objectToBeFixed, MemberInfo_t * ___member, ObjectRecord_t2756 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void FixupRecord_FixupImpl_m17389 (FixupRecord_t2761 * __this, ObjectManager_t2757 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
