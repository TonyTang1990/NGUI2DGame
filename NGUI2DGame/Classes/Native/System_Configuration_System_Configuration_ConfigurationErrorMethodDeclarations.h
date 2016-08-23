#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationErrorsException
struct ConfigurationErrorsException_t1139;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Exception
struct Exception_t306;
// System.Xml.XmlNode
struct XmlNode_t1124;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Configuration.ConfigurationErrorsException::.ctor()
extern "C" void ConfigurationErrorsException__ctor_m6620 (ConfigurationErrorsException_t1139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String)
extern "C" void ConfigurationErrorsException__ctor_m5115 (ConfigurationErrorsException_t1139 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationErrorsException__ctor_m6621 (ConfigurationErrorsException_t1139 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception)
extern "C" void ConfigurationErrorsException__ctor_m6622 (ConfigurationErrorsException_t1139 * __this, String_t* ___message, Exception_t306 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlNode)
extern "C" void ConfigurationErrorsException__ctor_m6623 (ConfigurationErrorsException_t1139 * __this, String_t* ___message, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlReader)
extern "C" void ConfigurationErrorsException__ctor_m6624 (ConfigurationErrorsException_t1139 * __this, String_t* ___message, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception,System.String,System.Int32)
extern "C" void ConfigurationErrorsException__ctor_m6625 (ConfigurationErrorsException_t1139 * __this, String_t* ___message, Exception_t306 * ___inner, String_t* ___filename, int32_t ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_BareMessage()
extern "C" String_t* ConfigurationErrorsException_get_BareMessage_m6626 (ConfigurationErrorsException_t1139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_Message()
extern "C" String_t* ConfigurationErrorsException_get_Message_m6627 (ConfigurationErrorsException_t1139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlReader)
extern "C" String_t* ConfigurationErrorsException_GetFilename_m6628 (Object_t * __this /* static, unused */, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlReader)
extern "C" int32_t ConfigurationErrorsException_GetLineNumber_m6629 (Object_t * __this /* static, unused */, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlNode)
extern "C" String_t* ConfigurationErrorsException_GetFilename_m6630 (Object_t * __this /* static, unused */, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlNode)
extern "C" int32_t ConfigurationErrorsException_GetLineNumber_m6631 (Object_t * __this /* static, unused */, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationErrorsException_GetObjectData_m6632 (ConfigurationErrorsException_t1139 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
