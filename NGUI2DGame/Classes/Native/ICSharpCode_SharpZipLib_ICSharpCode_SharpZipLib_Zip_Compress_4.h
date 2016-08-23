#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t1830;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow
struct OutputWindow_t1829;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader
struct InflaterDynHeader_t1832;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct InflaterHuffmanTree_t1833;
// ICSharpCode.SharpZipLib.Checksums.Adler32
struct Adler32_t1818;
// System.Object
#include "mscorlib_System_Object.h"
// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct  Inflater_t1826  : public Object_t
{
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::mode
	int32_t ___mode_4;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::readAdler
	int32_t ___readAdler_5;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::neededBits
	int32_t ___neededBits_6;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::repLength
	int32_t ___repLength_7;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::repDist
	int32_t ___repDist_8;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::uncomprLen
	int32_t ___uncomprLen_9;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::isLastBlock
	bool ___isLastBlock_10;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::totalOut
	int64_t ___totalOut_11;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::totalIn
	int64_t ___totalIn_12;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::noHeader
	bool ___noHeader_13;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator ICSharpCode.SharpZipLib.Zip.Compression.Inflater::input
	StreamManipulator_t1830 * ___input_14;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow ICSharpCode.SharpZipLib.Zip.Compression.Inflater::outputWindow
	OutputWindow_t1829 * ___outputWindow_15;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader ICSharpCode.SharpZipLib.Zip.Compression.Inflater::dynHeader
	InflaterDynHeader_t1832 * ___dynHeader_16;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.Inflater::litlenTree
	InflaterHuffmanTree_t1833 * ___litlenTree_17;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.Inflater::distTree
	InflaterHuffmanTree_t1833 * ___distTree_18;
	// ICSharpCode.SharpZipLib.Checksums.Adler32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::adler
	Adler32_t1818 * ___adler_19;
};
struct Inflater_t1826_StaticFields{
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPLENS
	Int32U5BU5D_t1* ___CPLENS_0;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPLEXT
	Int32U5BU5D_t1* ___CPLEXT_1;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPDIST
	Int32U5BU5D_t1* ___CPDIST_2;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPDEXT
	Int32U5BU5D_t1* ___CPDEXT_3;
};
