#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1278;
// System.IO.Stream
struct Stream_t844;
// System.Object
#include "mscorlib_System_Object.h"
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
struct  InflaterInputBuffer_t1827  : public Object_t
{
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::rawLength
	int32_t ___rawLength_0;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::rawData
	ByteU5BU5D_t159* ___rawData_1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::clearTextLength
	int32_t ___clearTextLength_2;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::clearText
	ByteU5BU5D_t159* ___clearText_3;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::available
	int32_t ___available_4;
	// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::cryptoTransform
	Object_t * ___cryptoTransform_5;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::inputStream
	Stream_t844 * ___inputStream_6;
};
