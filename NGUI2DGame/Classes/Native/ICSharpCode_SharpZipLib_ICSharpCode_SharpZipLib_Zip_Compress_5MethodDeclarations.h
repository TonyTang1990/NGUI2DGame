#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader
struct InflaterDynHeader_t1832;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t1830;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct InflaterHuffmanTree_t1833;

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::.ctor()
extern "C" void InflaterDynHeader__ctor_m10153 (InflaterDynHeader_t1832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::Decode(ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator)
extern "C" bool InflaterDynHeader_Decode_m10154 (InflaterDynHeader_t1832 * __this, StreamManipulator_t1830 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::BuildLitLenTree()
extern "C" InflaterHuffmanTree_t1833 * InflaterDynHeader_BuildLitLenTree_m10155 (InflaterDynHeader_t1832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::BuildDistTree()
extern "C" InflaterHuffmanTree_t1833 * InflaterDynHeader_BuildDistTree_m10156 (InflaterDynHeader_t1832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::.cctor()
extern "C" void InflaterDynHeader__cctor_m10157 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
