#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.RelationStructureCollection
struct RelationStructureCollection_t979;
// System.Data.RelationStructure
struct RelationStructure_t1048;
// System.String
struct String_t;

// System.Void System.Data.RelationStructureCollection::.ctor()
extern "C" void RelationStructureCollection__ctor_m4743 (RelationStructureCollection_t979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.RelationStructureCollection::Add(System.Data.RelationStructure)
extern "C" void RelationStructureCollection_Add_m4744 (RelationStructureCollection_t979 * __this, RelationStructure_t1048 * ___rel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.RelationStructure System.Data.RelationStructureCollection::get_Item(System.String,System.String)
extern "C" RelationStructure_t1048 * RelationStructureCollection_get_Item_m4745 (RelationStructureCollection_t979 * __this, String_t* ___parent, String_t* ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
