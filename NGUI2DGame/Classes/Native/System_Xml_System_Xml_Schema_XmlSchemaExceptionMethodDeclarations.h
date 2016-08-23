#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t1703;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1146;
// System.Exception
struct Exception_t306;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Xml.Schema.XmlSchemaException::.ctor()
extern "C" void XmlSchemaException__ctor_m9228 (XmlSchemaException_t1703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void XmlSchemaException__ctor_m9229 (XmlSchemaException_t1703 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Int32,System.Int32,System.Xml.Schema.XmlSchemaObject,System.String,System.Exception)
extern "C" void XmlSchemaException__ctor_m9230 (XmlSchemaException_t1703 * __this, String_t* ___message, int32_t ___lineNumber, int32_t ___linePosition, XmlSchemaObject_t1146 * ___sourceObject, String_t* ___sourceUri, Exception_t306 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Object,System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C" void XmlSchemaException__ctor_m9231 (XmlSchemaException_t1703 * __this, String_t* ___message, Object_t * ___sender, String_t* ___sourceUri, XmlSchemaObject_t1146 * ___sourceObject, Exception_t306 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C" void XmlSchemaException__ctor_m9232 (XmlSchemaException_t1703 * __this, String_t* ___message, XmlSchemaObject_t1146 * ___sourceObject, Exception_t306 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Exception)
extern "C" void XmlSchemaException__ctor_m9233 (XmlSchemaException_t1703 * __this, String_t* ___message, Exception_t306 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::GetMessage(System.String,System.String,System.Object,System.Xml.Schema.XmlSchemaObject)
extern "C" String_t* XmlSchemaException_GetMessage_m9234 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___sourceUri, Object_t * ___sender, XmlSchemaObject_t1146 * ___sourceObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::GetMessage(System.String,System.String,System.Int32,System.Int32,System.Xml.Schema.XmlSchemaObject)
extern "C" String_t* XmlSchemaException_GetMessage_m9235 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___sourceUri, int32_t ___lineNumber, int32_t ___linePosition, XmlSchemaObject_t1146 * ___sourceObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::get_Message()
extern "C" String_t* XmlSchemaException_get_Message_m9236 (XmlSchemaException_t1703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void XmlSchemaException_GetObjectData_m9237 (XmlSchemaException_t1703 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
