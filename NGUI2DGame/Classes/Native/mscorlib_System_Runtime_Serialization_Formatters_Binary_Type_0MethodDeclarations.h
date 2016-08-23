#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t2790;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t2795;
// System.IO.BinaryWriter
struct BinaryWriter_t2548;
// System.Object
struct Object_t;

// System.Void System.Runtime.Serialization.Formatters.Binary.TypeMetadata::.ctor()
extern "C" void TypeMetadata__ctor_m17512 (TypeMetadata_t2790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.TypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
// System.Void System.Runtime.Serialization.Formatters.Binary.TypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
// System.Void System.Runtime.Serialization.Formatters.Binary.TypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
// System.Boolean System.Runtime.Serialization.Formatters.Binary.TypeMetadata::IsCompatible(System.Runtime.Serialization.Formatters.Binary.TypeMetadata)
extern "C" bool TypeMetadata_IsCompatible_m17513 (TypeMetadata_t2790 * __this, TypeMetadata_t2790 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.TypeMetadata::get_RequiresTypes()
