#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ConfigXmlTextReader
struct ConfigXmlTextReader_t1443;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t844;
// System.IO.TextReader
struct TextReader_t1101;

// System.Void ConfigXmlTextReader::.ctor(System.IO.Stream,System.String)
extern "C" void ConfigXmlTextReader__ctor_m6730 (ConfigXmlTextReader_t1443 * __this, Stream_t844 * ___s, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigXmlTextReader::.ctor(System.IO.TextReader,System.String)
extern "C" void ConfigXmlTextReader__ctor_m6731 (ConfigXmlTextReader_t1443 * __this, TextReader_t1101 * ___input, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ConfigXmlTextReader::get_Filename()
extern "C" String_t* ConfigXmlTextReader_get_Filename_m6732 (ConfigXmlTextReader_t1443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
