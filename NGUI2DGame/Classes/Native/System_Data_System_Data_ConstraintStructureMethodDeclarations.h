#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.ConstraintStructure
struct ConstraintStructure_t1050;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t258;
// System.Boolean[]
struct BooleanU5BU5D_t1049;

// System.Void System.Data.ConstraintStructure::.ctor(System.String,System.String[],System.Boolean[],System.String,System.Boolean,System.String,System.Boolean,System.Boolean)
extern "C" void ConstraintStructure__ctor_m4749 (ConstraintStructure_t1050 * __this, String_t* ___tname, StringU5BU5D_t258* ___cols, BooleanU5BU5D_t1049* ___isAttr, String_t* ___cname, bool ___isPK, String_t* ___refName, bool ___isNested, bool ___isConstraintOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
