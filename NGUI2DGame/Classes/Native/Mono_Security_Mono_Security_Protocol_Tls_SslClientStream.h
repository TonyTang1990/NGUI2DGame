﻿#pragma once
#include <stdint.h>
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t1312;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t1297;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t1298;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1313;
// Mono.Security.Protocol.Tls.SslStreamBase
#include "Mono_Security_Mono_Security_Protocol_Tls_SslStreamBase.h"
// Mono.Security.Protocol.Tls.SslClientStream
struct  SslClientStream_t1282  : public SslStreamBase_t1314
{
	// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::ServerCertValidation
	CertificateValidationCallback_t1312 * ___ServerCertValidation_17;
	// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::ClientCertSelection
	CertificateSelectionCallback_t1297 * ___ClientCertSelection_18;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::PrivateKeySelection
	PrivateKeySelectionCallback_t1298 * ___PrivateKeySelection_19;
	// Mono.Security.Protocol.Tls.CertificateValidationCallback2 Mono.Security.Protocol.Tls.SslClientStream::ServerCertValidation2
	CertificateValidationCallback2_t1313 * ___ServerCertValidation2_20;
};
