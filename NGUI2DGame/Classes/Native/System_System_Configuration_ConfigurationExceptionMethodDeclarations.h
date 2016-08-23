#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationException
struct ConfigurationException_t1420;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Exception
struct Exception_t306;
// System.Xml.XmlNode
struct XmlNode_t1124;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Configuration.ConfigurationException::.ctor()
extern "C" void ConfigurationException__ctor_m6891 (ConfigurationException_t1420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String)
extern "C" void ConfigurationException__ctor_m6886 (ConfigurationException_t1420 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationException__ctor_m6892 (ConfigurationException_t1420 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Exception)
extern "C" void ConfigurationException__ctor_m6893 (ConfigurationException_t1420 * __this, String_t* ___message, Exception_t306 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Xml.XmlNode)
extern "C" void ConfigurationException__ctor_m10762 (ConfigurationException_t1420 * __this, String_t* ___message, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Exception,System.Xml.XmlNode)
extern "C" void ConfigurationException__ctor_m10763 (ConfigurationException_t1420 * __this, String_t* ___message, Exception_t306 * ___inner, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.String,System.Int32)
extern "C" void ConfigurationException__ctor_m6883 (ConfigurationException_t1420 * __this, String_t* ___message, String_t* ___filename, int32_t ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationException::get_BareMessage()
extern "C" String_t* ConfigurationException_get_BareMessage_m6894 (ConfigurationException_t1420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationException::get_Message()
extern "C" String_t* ConfigurationException_get_Message_m10764 (ConfigurationException_t1420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationException::GetXmlNodeFilename(System.Xml.XmlNode)
extern "C" String_t* ConfigurationException_GetXmlNodeFilename_m10765 (Object_t * __this /* static, unused */, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationException::GetXmlNodeLineNumber(System.Xml.XmlNode)
extern "C" int32_t ConfigurationException_GetXmlNodeLineNumber_m10766 (Object_t * __this /* static, unused */, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationException_GetObjectData_m6895 (ConfigurationException_t1420 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
