﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t2795;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2744;
// System.IO.BinaryWriter
struct BinaryWriter_t2548;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t2962;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t2790;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t1120;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTy.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C" void ObjectWriter__ctor_m17527 (ObjectWriter_t2795 * __this, Object_t * ___surrogateSelector, StreamingContext_t670  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::.cctor()
extern "C" void ObjectWriter__cctor_m17528 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectGraph(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[])
extern "C" void ObjectWriter_WriteObjectGraph_m17529 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, Object_t * ___obj, HeaderU5BU5D_t2962* ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::QueueObject(System.Object)
extern "C" void ObjectWriter_QueueObject_m17530 (ObjectWriter_t2795 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteQueuedObjects(System.IO.BinaryWriter)
extern "C" void ObjectWriter_WriteQueuedObjects_m17531 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectInstance(System.IO.BinaryWriter,System.Object,System.Boolean)
extern "C" void ObjectWriter_WriteObjectInstance_m17532 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, Object_t * ___obj, bool ___isValueObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteSerializationEnd(System.IO.BinaryWriter)
extern "C" void ObjectWriter_WriteSerializationEnd_m17533 (Object_t * __this /* static, unused */, BinaryWriter_t2548 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObject(System.IO.BinaryWriter,System.Int64,System.Object)
extern "C" void ObjectWriter_WriteObject_m17534 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, int64_t ___id, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetObjectData(System.Object,System.Runtime.Serialization.Formatters.Binary.TypeMetadata&,System.Object&)
extern "C" void ObjectWriter_GetObjectData_m17535 (ObjectWriter_t2795 * __this, Object_t * ___obj, TypeMetadata_t2790 ** ___metadata, Object_t ** ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CreateMemberTypeMetadata(System.Type)
extern "C" TypeMetadata_t2790 * ObjectWriter_CreateMemberTypeMetadata_m17536 (ObjectWriter_t2795 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WriteArray_m17537 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteGenericArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WriteGenericArray_m17538 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WriteObjectArray_m17539 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteStringArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WriteStringArray_m17540 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WritePrimitiveTypeArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WritePrimitiveTypeArray_m17541 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::BlockWrite(System.IO.BinaryWriter,System.Array,System.Int32)
extern "C" void ObjectWriter_BlockWrite_m17542 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, Array_t * ___array, int32_t ___dataSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteSingleDimensionArrayElements(System.IO.BinaryWriter,System.Array,System.Type)
extern "C" void ObjectWriter_WriteSingleDimensionArrayElements_m17543 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, Array_t * ___array, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteNullFiller(System.IO.BinaryWriter,System.Int32)
extern "C" void ObjectWriter_WriteNullFiller_m17544 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, int32_t ___numNulls, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectReference(System.IO.BinaryWriter,System.Int64)
extern "C" void ObjectWriter_WriteObjectReference_m17545 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, int64_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteValue(System.IO.BinaryWriter,System.Type,System.Object)
extern "C" void ObjectWriter_WriteValue_m17546 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, Type_t * ___valueType, Object_t * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteString(System.IO.BinaryWriter,System.Int64,System.String)
extern "C" void ObjectWriter_WriteString_m17547 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, int64_t ___id, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteAssembly(System.IO.BinaryWriter,System.Reflection.Assembly)
extern "C" int32_t ObjectWriter_WriteAssembly_m17548 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, Assembly_t1120 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteAssemblyName(System.IO.BinaryWriter,System.String)
extern "C" int32_t ObjectWriter_WriteAssemblyName_m17549 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, String_t* ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetAssemblyId(System.Reflection.Assembly)
extern "C" int32_t ObjectWriter_GetAssemblyId_m17550 (ObjectWriter_t2795 * __this, Assembly_t1120 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetAssemblyNameId(System.String)
extern "C" int32_t ObjectWriter_GetAssemblyNameId_m17551 (ObjectWriter_t2795 * __this, String_t* ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::RegisterAssembly(System.String,System.Boolean&)
extern "C" int32_t ObjectWriter_RegisterAssembly_m17552 (ObjectWriter_t2795 * __this, String_t* ___assembly, bool* ___firstTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WritePrimitiveValue(System.IO.BinaryWriter,System.Object)
extern "C" void ObjectWriter_WritePrimitiveValue_m17553 (Object_t * __this /* static, unused */, BinaryWriter_t2548 * ___writer, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteTypeCode(System.IO.BinaryWriter,System.Type)
extern "C" void ObjectWriter_WriteTypeCode_m17554 (Object_t * __this /* static, unused */, BinaryWriter_t2548 * ___writer, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.TypeTag System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetTypeTag(System.Type)
extern "C" uint8_t ObjectWriter_GetTypeTag_m17555 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteTypeSpec(System.IO.BinaryWriter,System.Type)
extern "C" void ObjectWriter_WriteTypeSpec_m17556 (ObjectWriter_t2795 * __this, BinaryWriter_t2548 * ___writer, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
