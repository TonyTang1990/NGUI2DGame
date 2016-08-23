#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1;
// System.Byte[]
struct ByteU5BU5D_t159;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct InflaterHuffmanTree_t1833;
// System.Object
#include "mscorlib_System_Object.h"
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader
struct  InflaterDynHeader_t1832  : public Object_t
{
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::blLens
	ByteU5BU5D_t159* ___blLens_3;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::litdistLens
	ByteU5BU5D_t159* ___litdistLens_4;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::blTree
	InflaterHuffmanTree_t1833 * ___blTree_5;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::mode
	int32_t ___mode_6;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::lnum
	int32_t ___lnum_7;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::dnum
	int32_t ___dnum_8;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::blnum
	int32_t ___blnum_9;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::num
	int32_t ___num_10;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::repSymbol
	int32_t ___repSymbol_11;
	// System.Byte ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::lastLen
	uint8_t ___lastLen_12;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::ptr
	int32_t ___ptr_13;
};
struct InflaterDynHeader_t1832_StaticFields{
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::repMin
	Int32U5BU5D_t1* ___repMin_0;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::repBits
	Int32U5BU5D_t1* ___repBits_1;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::BL_ORDER
	Int32U5BU5D_t1* ___BL_ORDER_2;
};
