#pragma once
#include <stdint.h>
// System.Threading.ManualResetEvent
struct ManualResetEvent_t1300;
// System.IO.Stream
struct Stream_t844;
// System.IO.MemoryStream
struct MemoryStream_t686;
// Mono.Security.Protocol.Tls.Context
struct Context_t1277;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t1285;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// Mono.Security.Protocol.Tls.SslStreamBase
struct  SslStreamBase_t1314  : public Stream_t844
{
	// System.IO.Stream Mono.Security.Protocol.Tls.SslStreamBase::innerStream
	Stream_t844 * ___innerStream_4;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::inputBuffer
	MemoryStream_t686 * ___inputBuffer_5;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.SslStreamBase::context
	Context_t1277 * ___context_6;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.SslStreamBase::protocol
	RecordProtocol_t1285 * ___protocol_7;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::ownsStream
	bool ___ownsStream_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Mono.Security.Protocol.Tls.SslStreamBase::disposed
	bool ___disposed_9;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::checkCertRevocationStatus
	bool ___checkCertRevocationStatus_10;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::negotiate
	Object_t * ___negotiate_11;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::read
	Object_t * ___read_12;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::write
	Object_t * ___write_13;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::negotiationComplete
	ManualResetEvent_t1300 * ___negotiationComplete_14;
	// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase::recbuf
	ByteU5BU5D_t159* ___recbuf_15;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::recordStream
	MemoryStream_t686 * ___recordStream_16;
};
struct SslStreamBase_t1314_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::record_processing
	ManualResetEvent_t1300 * ___record_processing_3;
};
