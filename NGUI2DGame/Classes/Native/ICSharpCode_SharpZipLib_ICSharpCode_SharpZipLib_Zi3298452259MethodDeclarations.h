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

// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader
struct InflaterDynHeader_t3298452259;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t1922289728;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct InflaterHuffmanTree_t3246684106;

#include "codegen/il2cpp-codegen.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi1922289728.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::.ctor()
extern "C"  void InflaterDynHeader__ctor_m1417066751 (InflaterDynHeader_t3298452259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::Decode(ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator)
extern "C"  bool InflaterDynHeader_Decode_m2190858166 (InflaterDynHeader_t3298452259 * __this, StreamManipulator_t1922289728 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::BuildLitLenTree()
extern "C"  InflaterHuffmanTree_t3246684106 * InflaterDynHeader_BuildLitLenTree_m63482416 (InflaterDynHeader_t3298452259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::BuildDistTree()
extern "C"  InflaterHuffmanTree_t3246684106 * InflaterDynHeader_BuildDistTree_m554109756 (InflaterDynHeader_t3298452259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::.cctor()
extern "C"  void InflaterDynHeader__cctor_m1858886190 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
