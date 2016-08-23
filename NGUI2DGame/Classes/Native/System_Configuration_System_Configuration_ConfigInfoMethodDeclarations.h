#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigInfo
struct ConfigInfo_t1402;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Configuration.Configuration
struct Configuration_t1398;

// System.Void System.Configuration.ConfigInfo::.ctor()
extern "C" void ConfigInfo__ctor_m6497 (ConfigInfo_t1402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigInfo::CreateInstance()
extern "C" Object_t * ConfigInfo_CreateInstance_m6498 (ConfigInfo_t1402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfo::set_StreamName(System.String)
extern "C" void ConfigInfo_set_StreamName_m6499 (ConfigInfo_t1402 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfo::ThrowException(System.String,System.Xml.XmlReader)
extern "C" void ConfigInfo_ThrowException_m6500 (ConfigInfo_t1402 * __this, String_t* ___text, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
// System.Void System.Configuration.ConfigInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
// System.Void System.Configuration.ConfigInfo::Merge(System.Configuration.ConfigInfo)
