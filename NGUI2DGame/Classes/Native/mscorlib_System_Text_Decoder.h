#pragma once
#include <stdint.h>
// System.Text.DecoderFallback
struct DecoderFallback_t2921;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2922;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.Decoder
struct  Decoder_t1645  : public Object_t
{
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t2921 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t2922 * ___fallback_buffer_1;
};
