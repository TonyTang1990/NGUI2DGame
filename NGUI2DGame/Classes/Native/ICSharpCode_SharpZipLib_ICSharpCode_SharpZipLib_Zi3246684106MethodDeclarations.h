#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct InflaterHuffmanTree_t3246684106;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t1922289728;

#include "codegen/il2cpp-codegen.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi1922289728.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::.cctor()
extern "C"  void InflaterHuffmanTree__cctor_m3202130013 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::.ctor(System.Byte[])
extern "C"  void InflaterHuffmanTree__ctor_m3710971905 (InflaterHuffmanTree_t3246684106 * __this, ByteU5BU5D_t3397334013* ___codeLengths0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::BuildTree(System.Byte[])
extern "C"  void InflaterHuffmanTree_BuildTree_m163291661 (InflaterHuffmanTree_t3246684106 * __this, ByteU5BU5D_t3397334013* ___codeLengths0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::GetSymbol(ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator)
extern "C"  int32_t InflaterHuffmanTree_GetSymbol_m189842273 (InflaterHuffmanTree_t3246684106 * __this, StreamManipulator_t1922289728 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
