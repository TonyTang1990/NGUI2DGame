#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Services.TrackingServices
struct TrackingServices_t2751;
// System.Object
struct Object_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2684;

// System.Void System.Runtime.Remoting.Services.TrackingServices::.cctor()
extern "C" void TrackingServices__cctor_m17344 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyMarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern "C" void TrackingServices_NotifyMarshaledObject_m17345 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t2684 * ___or, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyUnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern "C" void TrackingServices_NotifyUnmarshaledObject_m17346 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t2684 * ___or, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyDisconnectedObject(System.Object)
extern "C" void TrackingServices_NotifyDisconnectedObject_m17347 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
