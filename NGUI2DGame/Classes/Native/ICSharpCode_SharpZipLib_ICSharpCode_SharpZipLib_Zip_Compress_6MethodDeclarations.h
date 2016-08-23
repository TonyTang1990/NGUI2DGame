#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct InflaterHuffmanTree_t1833;
// System.Byte[]
struct ByteU5BU5D_t159;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t1830;

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::.cctor()
extern "C" void InflaterHuffmanTree__cctor_m10158 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::.ctor(System.Byte[])
extern "C" void InflaterHuffmanTree__ctor_m10159 (InflaterHuffmanTree_t1833 * __this, ByteU5BU5D_t159* ___codeLengths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::BuildTree(System.Byte[])
extern "C" void InflaterHuffmanTree_BuildTree_m10160 (InflaterHuffmanTree_t1833 * __this, ByteU5BU5D_t159* ___codeLengths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::GetSymbol(ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator)
extern "C" int32_t InflaterHuffmanTree_GetSymbol_m10161 (InflaterHuffmanTree_t1833 * __this, StreamManipulator_t1830 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
