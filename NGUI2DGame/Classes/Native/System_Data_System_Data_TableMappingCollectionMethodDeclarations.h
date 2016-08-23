#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.TableMappingCollection
struct TableMappingCollection_t975;
// System.Data.TableMapping
struct TableMapping_t977;
// System.String
struct String_t;

// System.Void System.Data.TableMappingCollection::.ctor()
extern "C" void TableMappingCollection__ctor_m4210 (TableMappingCollection_t975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.TableMappingCollection::Add(System.Data.TableMapping)
extern "C" void TableMappingCollection_Add_m4211 (TableMappingCollection_t975 * __this, TableMapping_t977 * ___map, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.TableMapping System.Data.TableMappingCollection::get_Item(System.String)
extern "C" TableMapping_t977 * TableMappingCollection_get_Item_m4212 (TableMappingCollection_t975 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
