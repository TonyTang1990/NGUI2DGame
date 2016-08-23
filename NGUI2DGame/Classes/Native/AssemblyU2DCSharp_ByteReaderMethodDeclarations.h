#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ByteReader
struct ByteReader_t160;
// System.Byte[]
struct ByteU5BU5D_t159;
// UnityEngine.TextAsset
struct TextAsset_t289;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t163;

// System.Void ByteReader::.ctor(System.Byte[])
extern "C" void ByteReader__ctor_m485 (ByteReader_t160 * __this, ByteU5BU5D_t159* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ByteReader::.ctor(UnityEngine.TextAsset)
extern "C" void ByteReader__ctor_m486 (ByteReader_t160 * __this, TextAsset_t289 * ___asset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ByteReader::get_canRead()
extern "C" bool ByteReader_get_canRead_m487 (ByteReader_t160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ByteReader::ReadLine(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* ByteReader_ReadLine_m488 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___buffer, int32_t ___start, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ByteReader::ReadLine()
extern "C" String_t* ByteReader_ReadLine_m489 (ByteReader_t160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> ByteReader::ReadDictionary()
extern "C" Dictionary_2_t163 * ByteReader_ReadDictionary_m490 (ByteReader_t160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
