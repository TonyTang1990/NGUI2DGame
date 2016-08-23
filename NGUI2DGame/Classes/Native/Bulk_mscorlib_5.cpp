#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
#include "mscorlib_System_Runtime_InteropServices_UnmanagedFunctionPoi.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
#include "mscorlib_System_Runtime_InteropServices_UnmanagedFunctionPoiMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConvention.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::.ctor(System.Runtime.InteropServices.CallingConvention)
extern "C" void UnmanagedFunctionPointerAttribute__ctor_m12967 (UnmanagedFunctionPointerAttribute_t2254 * __this, int32_t ___callingConvention, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___callingConvention;
		__this->___call_conv_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedTypeMethodDeclarations.h"



// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntry.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntryMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntryMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::get_ApplicationUrl()
extern "C" String_t* ActivatedClientTypeEntry_get_ApplicationUrl_m17012 (ActivatedClientTypeEntry_t2681 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___applicationUrl_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Contexts.IContextAttribute[] System.Runtime.Remoting.ActivatedClientTypeEntry::get_ContextAttributes()
extern "C" IContextAttributeU5BU5D_t2997* ActivatedClientTypeEntry_get_ContextAttributes_m17013 (ActivatedClientTypeEntry_t2681 * __this, const MethodInfo* method)
{
	{
		return (IContextAttributeU5BU5D_t2997*)NULL;
	}
}
// System.Type System.Runtime.Remoting.ActivatedClientTypeEntry::get_ObjectType()
extern "C" Type_t * ActivatedClientTypeEntry_get_ObjectType_m17014 (ActivatedClientTypeEntry_t2681 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___obj_type_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ActivatedClientTypeEntry_ToString_m17015 (ActivatedClientTypeEntry_t2681 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = TypeEntry_get_TypeName_m17096(__this, /*hidden argument*/NULL);
		String_t* L_1 = TypeEntry_get_AssemblyName_m17095(__this, /*hidden argument*/NULL);
		String_t* L_2 = ActivatedClientTypeEntry_get_ApplicationUrl_m17012(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1271(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Runtime.Remoting.EnvoyInfo
#include "mscorlib_System_Runtime_Remoting_EnvoyInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.EnvoyInfo
#include "mscorlib_System_Runtime_Remoting_EnvoyInfoMethodDeclarations.h"

// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void System.Runtime.Remoting.EnvoyInfo::.ctor(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" void EnvoyInfo__ctor_m17016 (EnvoyInfo_t2683 * __this, Object_t * ___sinks, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___sinks;
		__this->___envoySinks_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.EnvoyInfo::get_EnvoySinks()
extern "C" Object_t * EnvoyInfo_get_EnvoySinks_m17017 (EnvoyInfo_t2683 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___envoySinks_0);
		return L_0;
	}
}
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_Identity.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_IdentityMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRef.h"


// System.Void System.Runtime.Remoting.Identity::.ctor(System.String)
extern "C" void Identity__ctor_m17018 (Identity_t2685 * __this, String_t* ___objectUri, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___objectUri;
		__this->____objectUri_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::CreateObjRef(System.Type)
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::get_ChannelSink()
extern "C" Object_t * Identity_get_ChannelSink_m17019 (Identity_t2685 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____channelSink_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_ChannelSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" void Identity_set_ChannelSink_m17020 (Identity_t2685 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____channelSink_1 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.Identity::get_ObjectUri()
extern "C" String_t* Identity_get_ObjectUri_m17021 (Identity_t2685 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____objectUri_0);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_ObjectUri(System.String)
extern "C" void Identity_set_ObjectUri_m17022 (Identity_t2685 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____objectUri_0 = L_0;
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Identity::get_IsConnected()
extern "C" bool Identity_get_IsConnected_m17023 (Identity_t2685 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____objectUri_0);
		return ((((int32_t)((((Object_t*)(String_t*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Runtime.Remoting.Identity::get_Disposed()
extern "C" bool Identity_get_Disposed_m17024 (Identity_t2685 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____disposed_4);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_Disposed(System.Boolean)
extern "C" void Identity_set_Disposed_m17025 (Identity_t2685 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____disposed_4 = L_0;
		return;
	}
}
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentity.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentityMethodDeclarations.h"

// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.WeakReference
#include "mscorlib_System_WeakReference.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRefMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern TypeInfo* IEnvoyInfo_t2689_il2cpp_TypeInfo_var;
extern "C" void ClientIdentity__ctor_m17026 (ClientIdentity_t2686 * __this, String_t* ___objectUri, ObjRef_t2684 * ___objRef, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnvoyInfo_t2689_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5683);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ClientIdentity_t2686 * G_B2_0 = {0};
	ClientIdentity_t2686 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	ClientIdentity_t2686 * G_B3_1 = {0};
	{
		String_t* L_0 = ___objectUri;
		Identity__ctor_m17018(__this, L_0, /*hidden argument*/NULL);
		ObjRef_t2684 * L_1 = ___objRef;
		((Identity_t2685 *)__this)->____objRef_3 = L_1;
		ObjRef_t2684 * L_2 = (((Identity_t2685 *)__this)->____objRef_3);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo() */, L_2);
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_0030;
		}
	}
	{
		ObjRef_t2684 * L_4 = (((Identity_t2685 *)__this)->____objRef_3);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo() */, L_4);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.IEnvoyInfo::get_EnvoySinks() */, IEnvoyInfo_t2689_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
		Object_t * L_7 = V_0;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = ((Object_t *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		((Identity_t2685 *)G_B3_1)->____envoySink_2 = G_B3_0;
		return;
	}
}
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern TypeInfo* MarshalByRefObject_t882_il2cpp_TypeInfo_var;
extern "C" MarshalByRefObject_t882 * ClientIdentity_get_ClientProxy_m17027 (ClientIdentity_t2686 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t882_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2117);
		s_Il2CppMethodIntialized = true;
	}
	{
		WeakReference_t1933 * L_0 = (__this->____proxyReference_5);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_0);
		return ((MarshalByRefObject_t882 *)Castclass(L_1, MarshalByRefObject_t882_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern TypeInfo* WeakReference_t1933_il2cpp_TypeInfo_var;
extern "C" void ClientIdentity_set_ClientProxy_m17028 (ClientIdentity_t2686 * __this, MarshalByRefObject_t882 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WeakReference_t1933_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4474);
		s_Il2CppMethodIntialized = true;
	}
	{
		MarshalByRefObject_t882 * L_0 = ___value;
		WeakReference_t1933 * L_1 = (WeakReference_t1933 *)il2cpp_codegen_object_new (WeakReference_t1933_il2cpp_TypeInfo_var);
		WeakReference__ctor_m12849(L_1, L_0, /*hidden argument*/NULL);
		__this->____proxyReference_5 = L_1;
		return;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t2684 * ClientIdentity_CreateObjRef_m17029 (ClientIdentity_t2686 * __this, Type_t * ___requestedType, const MethodInfo* method)
{
	{
		ObjRef_t2684 * L_0 = (((Identity_t2685 *)__this)->____objRef_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m17030 (ClientIdentity_t2686 * __this, const MethodInfo* method)
{
	{
		ObjRef_t2684 * L_0 = (((Identity_t2685 *)__this)->____objRef_3);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnume.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfo.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnumeMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_genMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ObjRef::.ctor()
extern "C" void ObjRef__ctor_m17031 (ObjRef_t2684 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		ObjRef_UpdateChannelInfo_m17044(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ObjRef_t2684_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t60_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IRemotingTypeInfo_t2688_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelInfo_t2687_il2cpp_TypeInfo_var;
extern TypeInfo* IEnvoyInfo_t2689_il2cpp_TypeInfo_var;
extern TypeInfo* IConvertible_t373_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1353_MethodInfo_var;
extern "C" void ObjRef__ctor_m17032 (ObjRef_t2684 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t2684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5684);
		Dictionary_2_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IRemotingTypeInfo_t2688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5685);
		IChannelInfo_t2687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5686);
		IEnvoyInfo_t2689_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5683);
		IConvertible_t373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		Dictionary_2__ctor_m1353_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		s_Il2CppMethodIntialized = true;
	}
	SerializationInfoEnumerator_t1133 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	String_t* V_4 = {0};
	Dictionary_2_t60 * V_5 = {0};
	int32_t V_6 = 0;
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfoEnumerator_t1133 * L_1 = SerializationInfo_GetEnumerator_m5045(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 1;
		goto IL_0155;
	}

IL_0014:
	{
		SerializationInfoEnumerator_t1133 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfoEnumerator_get_Name_m17442(L_2, /*hidden argument*/NULL);
		V_4 = L_3;
		String_t* L_4 = V_4;
		if (!L_4)
		{
			goto IL_014f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t2684_il2cpp_TypeInfo_var);
		Dictionary_2_t60 * L_5 = ((ObjRef_t2684_StaticFields*)ObjRef_t2684_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_8;
		if (L_5)
		{
			goto IL_0087;
		}
	}
	{
		Dictionary_2_t60 * L_6 = (Dictionary_2_t60 *)il2cpp_codegen_object_new (Dictionary_2_t60_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1353(L_6, 6, /*hidden argument*/Dictionary_2__ctor_m1353_MethodInfo_var);
		V_5 = L_6;
		Dictionary_2_t60 * L_7 = V_5;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral1960, 0);
		Dictionary_2_t60 * L_8 = V_5;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral4986, 1);
		Dictionary_2_t60 * L_9 = V_5;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, (String_t*) &_stringLiteral4987, 2);
		Dictionary_2_t60 * L_10 = V_5;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, (String_t*) &_stringLiteral4988, 3);
		Dictionary_2_t60 * L_11 = V_5;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, (String_t*) &_stringLiteral4989, 4);
		Dictionary_2_t60 * L_12 = V_5;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_12, (String_t*) &_stringLiteral4990, 5);
		Dictionary_2_t60 * L_13 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t2684_il2cpp_TypeInfo_var);
		((ObjRef_t2684_StaticFields*)ObjRef_t2684_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_8 = L_13;
	}

IL_0087:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t2684_il2cpp_TypeInfo_var);
		Dictionary_2_t60 * L_14 = ((ObjRef_t2684_StaticFields*)ObjRef_t2684_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_8;
		String_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_14, L_15, (&V_6));
		if (!L_16)
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_17 = V_6;
		if (L_17 == 0)
		{
			goto IL_00be;
		}
		if (L_17 == 1)
		{
			goto IL_00d4;
		}
		if (L_17 == 2)
		{
			goto IL_00ea;
		}
		if (L_17 == 3)
		{
			goto IL_00fd;
		}
		if (L_17 == 4)
		{
			goto IL_0110;
		}
		if (L_17 == 5)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_014f;
	}

IL_00be:
	{
		SerializationInfoEnumerator_t1133 * L_18 = V_0;
		NullCheck(L_18);
		Object_t * L_19 = SerializationInfoEnumerator_get_Value_m5047(L_18, /*hidden argument*/NULL);
		__this->___uri_1 = ((String_t*)Castclass(L_19, String_t_il2cpp_TypeInfo_var));
		goto IL_0155;
	}

IL_00d4:
	{
		SerializationInfoEnumerator_t1133 * L_20 = V_0;
		NullCheck(L_20);
		Object_t * L_21 = SerializationInfoEnumerator_get_Value_m5047(L_20, /*hidden argument*/NULL);
		__this->___typeInfo_2 = ((Object_t *)Castclass(L_21, IRemotingTypeInfo_t2688_il2cpp_TypeInfo_var));
		goto IL_0155;
	}

IL_00ea:
	{
		SerializationInfoEnumerator_t1133 * L_22 = V_0;
		NullCheck(L_22);
		Object_t * L_23 = SerializationInfoEnumerator_get_Value_m5047(L_22, /*hidden argument*/NULL);
		__this->___channel_info_0 = ((Object_t *)Castclass(L_23, IChannelInfo_t2687_il2cpp_TypeInfo_var));
		goto IL_0155;
	}

IL_00fd:
	{
		SerializationInfoEnumerator_t1133 * L_24 = V_0;
		NullCheck(L_24);
		Object_t * L_25 = SerializationInfoEnumerator_get_Value_m5047(L_24, /*hidden argument*/NULL);
		__this->___envoyInfo_3 = ((Object_t *)Castclass(L_25, IEnvoyInfo_t2689_il2cpp_TypeInfo_var));
		goto IL_0155;
	}

IL_0110:
	{
		SerializationInfoEnumerator_t1133 * L_26 = V_0;
		NullCheck(L_26);
		Object_t * L_27 = SerializationInfoEnumerator_get_Value_m5047(L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		Object_t * L_28 = V_3;
		if (!((String_t*)IsInst(L_28, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_012e;
		}
	}
	{
		Object_t * L_29 = V_3;
		NullCheck(((Object_t *)Castclass(L_29, IConvertible_t373_il2cpp_TypeInfo_var)));
		int32_t L_30 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, IConvertible_t373_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_29, IConvertible_t373_il2cpp_TypeInfo_var)), (Object_t *)NULL);
		V_2 = L_30;
		goto IL_0135;
	}

IL_012e:
	{
		Object_t * L_31 = V_3;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_31, Int32_t297_il2cpp_TypeInfo_var))));
	}

IL_0135:
	{
		int32_t L_32 = V_2;
		if (L_32)
		{
			goto IL_013a;
		}
	}
	{
		V_1 = 0;
	}

IL_013a:
	{
		goto IL_0155;
	}

IL_013c:
	{
		SerializationInfoEnumerator_t1133 * L_33 = V_0;
		NullCheck(L_33);
		Object_t * L_34 = SerializationInfoEnumerator_get_Value_m5047(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int32_t L_35 = Convert_ToInt32_m3202(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		__this->___flags_4 = L_35;
		goto IL_0155;
	}

IL_014f:
	{
		NotSupportedException_t303 * L_36 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1312(L_36, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_0155:
	{
		SerializationInfoEnumerator_t1133 * L_37 = V_0;
		NullCheck(L_37);
		bool L_38 = (bool)VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext() */, L_37);
		if (L_38)
		{
			goto IL_0014;
		}
	}
	{
		bool L_39 = V_1;
		if (!L_39)
		{
			goto IL_0175;
		}
	}
	{
		int32_t L_40 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t2684_il2cpp_TypeInfo_var);
		int32_t L_41 = ((ObjRef_t2684_StaticFields*)ObjRef_t2684_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6;
		__this->___flags_4 = ((int32_t)((int32_t)L_40|(int32_t)L_41));
	}

IL_0175:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::.cctor()
extern TypeInfo* ObjRef_t2684_il2cpp_TypeInfo_var;
extern "C" void ObjRef__cctor_m17033 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t2684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5684);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ObjRef_t2684_StaticFields*)ObjRef_t2684_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6 = 1;
		((ObjRef_t2684_StaticFields*)ObjRef_t2684_il2cpp_TypeInfo_var->static_fields)->___WellKnowObjectRef_7 = 2;
		return;
	}
}
// System.Boolean System.Runtime.Remoting.ObjRef::get_IsReferenceToWellKnow()
extern TypeInfo* ObjRef_t2684_il2cpp_TypeInfo_var;
extern "C" bool ObjRef_get_IsReferenceToWellKnow_m17034 (ObjRef_t2684 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t2684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5684);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t2684_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ObjRef_t2684_StaticFields*)ObjRef_t2684_il2cpp_TypeInfo_var->static_fields)->___WellKnowObjectRef_7;
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) > ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo()
extern "C" Object_t * ObjRef_get_ChannelInfo_m17035 (ObjRef_t2684 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___channel_info_0);
		return L_0;
	}
}
// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo()
extern "C" Object_t * ObjRef_get_EnvoyInfo_m17036 (ObjRef_t2684 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___envoyInfo_3);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo)
extern "C" void ObjRef_set_EnvoyInfo_m17037 (ObjRef_t2684 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___envoyInfo_3 = L_0;
		return;
	}
}
// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo()
extern "C" Object_t * ObjRef_get_TypeInfo_m17038 (ObjRef_t2684 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___typeInfo_2);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo)
extern "C" void ObjRef_set_TypeInfo_m17039 (ObjRef_t2684 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___typeInfo_2 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.ObjRef::get_URI()
extern "C" String_t* ObjRef_get_URI_m17040 (ObjRef_t2684 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uri_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String)
extern "C" void ObjRef_set_URI_m17041 (ObjRef_t2684 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___uri_1 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* IRemotingTypeInfo_t2688_0_0_0_var;
extern const Il2CppType* IEnvoyInfo_t2689_0_0_0_var;
extern const Il2CppType* IChannelInfo_t2687_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void ObjRef_GetObjectData_m17042 (ObjRef_t2684 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IRemotingTypeInfo_t2688_0_0_0_var = il2cpp_codegen_type_from_index(5685);
		IEnvoyInfo_t2689_0_0_0_var = il2cpp_codegen_type_from_index(5683);
		IChannelInfo_t2687_0_0_0_var = il2cpp_codegen_type_from_index(5686);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t669 * L_0 = ___info;
		Type_t * L_1 = Object_GetType_m1416(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m17431(L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_2 = ___info;
		String_t* L_3 = (__this->___uri_1);
		NullCheck(L_2);
		SerializationInfo_AddValue_m5012(L_2, (String_t*) &_stringLiteral1960, L_3, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_4 = ___info;
		Object_t * L_5 = (__this->___typeInfo_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(IRemotingTypeInfo_t2688_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m4996(L_4, (String_t*) &_stringLiteral4986, L_5, L_6, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_7 = ___info;
		Object_t * L_8 = (__this->___envoyInfo_3);
		Type_t * L_9 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(IEnvoyInfo_t2689_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		SerializationInfo_AddValue_m4996(L_7, (String_t*) &_stringLiteral4988, L_8, L_9, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_10 = ___info;
		Object_t * L_11 = (__this->___channel_info_0);
		Type_t * L_12 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(IChannelInfo_t2687_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		SerializationInfo_AddValue_m4996(L_10, (String_t*) &_stringLiteral4987, L_11, L_12, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_13 = ___info;
		int32_t L_14 = (__this->___flags_4);
		NullCheck(L_13);
		SerializationInfo_AddValue_m5038(L_13, (String_t*) &_stringLiteral4990, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.ObjRef::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ObjRef_t2684_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjRef_GetRealObject_m17043 (ObjRef_t2684 * __this, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t2684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5684);
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t2684_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ObjRef_t2684_StaticFields*)ObjRef_t2684_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		Object_t * L_2 = RemotingServices_Unmarshal_m17057(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0016:
	{
		return __this;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::UpdateChannelInfo()
extern TypeInfo* ChannelInfo_t2708_il2cpp_TypeInfo_var;
extern "C" void ObjRef_UpdateChannelInfo_m17044 (ObjRef_t2684 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelInfo_t2708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5687);
		s_Il2CppMethodIntialized = true;
	}
	{
		ChannelInfo_t2708 * L_0 = (ChannelInfo_t2708 *)il2cpp_codegen_object_new (ChannelInfo_t2708_il2cpp_TypeInfo_var);
		ChannelInfo__ctor_m17112(L_0, /*hidden argument*/NULL);
		__this->___channel_info_0 = L_0;
		return;
	}
}
// System.Type System.Runtime.Remoting.ObjRef::get_ServerType()
extern TypeInfo* IRemotingTypeInfo_t2688_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * ObjRef_get_ServerType_m17045 (ObjRef_t2684 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IRemotingTypeInfo_t2688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5685);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->____serverType_5);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_1 = (__this->___typeInfo_2);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t2688_il2cpp_TypeInfo_var, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetType_m5093(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->____serverType_5 = L_3;
	}

IL_001e:
	{
		Type_t * L_4 = (__this->____serverType_5);
		return L_4;
	}
}
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfiguration.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"

// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"


// System.Void System.Runtime.Remoting.RemotingConfiguration::.cctor()
extern TypeInfo* RemotingConfiguration_t2690_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration__cctor_m17046 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t2690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5688);
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___applicationID_0 = (String_t*)NULL;
		((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___applicationName_1 = (String_t*)NULL;
		((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___processGuid_2 = (String_t*)NULL;
		((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___defaultConfigRead_3 = 0;
		((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4 = 0;
		Hashtable_t915 * L_0 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_0, /*hidden argument*/NULL);
		((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_5 = L_0;
		Hashtable_t915 * L_1 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_1, /*hidden argument*/NULL);
		((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_6 = L_1;
		Hashtable_t915 * L_2 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_2, /*hidden argument*/NULL);
		((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___wellKnownServiceEntries_7 = L_2;
		Hashtable_t915 * L_3 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_3, /*hidden argument*/NULL);
		((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___activatedServiceEntries_8 = L_3;
		Hashtable_t915 * L_4 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_4, /*hidden argument*/NULL);
		((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_9 = L_4;
		Hashtable_t915 * L_5 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_5, /*hidden argument*/NULL);
		((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___clientProviderTemplates_10 = L_5;
		Hashtable_t915 * L_6 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_6, /*hidden argument*/NULL);
		((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___serverProviderTemplates_11 = L_6;
		return;
	}
}
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ApplicationName()
extern TypeInfo* RemotingConfiguration_t2690_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingConfiguration_get_ApplicationName_m17047 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t2690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5688);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t2690_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___applicationName_1;
		return L_0;
	}
}
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ProcessId()
extern TypeInfo* RemotingConfiguration_t2690_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingConfiguration_get_ProcessId_m17048 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t2690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5688);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t2690_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___processGuid_2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = AppDomain_GetProcessGuid_m14497(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t2690_il2cpp_TypeInfo_var);
		((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___processGuid_2 = L_1;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t2690_il2cpp_TypeInfo_var);
		String_t* L_2 = ((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___processGuid_2;
		return L_2;
	}
}
// System.Runtime.Remoting.ActivatedClientTypeEntry System.Runtime.Remoting.RemotingConfiguration::IsRemotelyActivatedClientType(System.Type)
extern TypeInfo* RemotingConfiguration_t2690_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedClientTypeEntry_t2681_il2cpp_TypeInfo_var;
extern "C" ActivatedClientTypeEntry_t2681 * RemotingConfiguration_IsRemotelyActivatedClientType_m17049 (Object_t * __this /* static, unused */, Type_t * ___svrType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t2690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5688);
		ActivatedClientTypeEntry_t2681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5689);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t915 * V_0 = {0};
	ActivatedClientTypeEntry_t2681 * V_1 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t2690_il2cpp_TypeInfo_var);
		Hashtable_t915 * L_0 = ((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_9;
		V_0 = L_0;
		Hashtable_t915 * L_1 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t2690_il2cpp_TypeInfo_var);
			Hashtable_t915 * L_2 = ((RemotingConfiguration_t2690_StaticFields*)RemotingConfiguration_t2690_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_6;
			Type_t * L_3 = ___svrType;
			NullCheck(L_2);
			Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, L_3);
			V_1 = ((ActivatedClientTypeEntry_t2681 *)IsInst(L_4, ActivatedClientTypeEntry_t2681_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x28, FINALLY_0021);
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x28, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		Hashtable_t915 * L_5 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x28, IL_0028)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0028:
	{
		ActivatedClientTypeEntry_t2681 * L_6 = V_1;
		return L_6;
	}
}
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingException.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"

// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"


// System.Void System.Runtime.Remoting.RemotingException::.ctor()
extern "C" void RemotingException__ctor_m17050 (RemotingException_t2691 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m9846(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.String)
extern "C" void RemotingException__ctor_m17051 (RemotingException_t2691 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m4993(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RemotingException__ctor_m17052 (RemotingException_t2691 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___context;
		SystemException__ctor_m4994(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServices.h"
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContextStates
#include "mscorlib_System_Runtime_Serialization_StreamingContextStates.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina.h"
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Runtime.Remoting.ServerIdentity
#include "mscorlib_System_Runtime_Remoting_ServerIdentity.h"
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute.h"
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Runtime.Remoting.ClientActivatedIdentity
#include "mscorlib_System_Runtime_Remoting_ClientActivatedIdentity.h"
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxy.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.MonoType
#include "mscorlib_System_MonoType.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxy.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServices.h"
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSink.h"
// System.Runtime.Remoting.SingleCallIdentity
#include "mscorlib_System_Runtime_Remoting_SingleCallIdentity.h"
// System.Runtime.Remoting.SingletonIdentity
#include "mscorlib_System_Runtime_Remoting_SingletonIdentity.h"
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateMethodDeclarations.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContextMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.Runtime.Remoting.ServerIdentity
#include "mscorlib_System_Runtime_Remoting_ServerIdentityMethodDeclarations.h"
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServicesMethodDeclarations.h"
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttributeMethodDeclarations.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxyMethodDeclarations.h"
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObjectMethodDeclarations.h"
// System.Runtime.Remoting.ClientActivatedIdentity
#include "mscorlib_System_Runtime_Remoting_ClientActivatedIdentityMethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.MonoType
#include "mscorlib_System_MonoTypeMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// Replacements.RemotingServices
#include "replacements_Replacements_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxyMethodDeclarations.h"
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSinkMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextMethodDeclarations.h"
// System.Runtime.Remoting.SingleCallIdentity
#include "mscorlib_System_Runtime_Remoting_SingleCallIdentityMethodDeclarations.h"
// System.Runtime.Remoting.SingletonIdentity
#include "mscorlib_System_Runtime_Remoting_SingletonIdentityMethodDeclarations.h"
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChanMethodDeclarations.h"


// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
extern const Il2CppType* RemoteActivator_t2705_0_0_0_var;
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogateSelector_t2745_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryFormatter_t1132_il2cpp_TypeInfo_var;
extern TypeInfo* Guid_t713_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void RemotingServices__cctor_m17053 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemoteActivator_t2705_0_0_0_var = il2cpp_codegen_type_from_index(5690);
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		RemotingSurrogateSelector_t2745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5691);
		BinaryFormatter_t1132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1965);
		Guid_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1019);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	RemotingSurrogateSelector_t2745 * V_0 = {0};
	StreamingContext_t670  V_1 = {0};
	Guid_t713  V_2 = {0};
	{
		Hashtable_t915 * L_0 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_0, /*hidden argument*/NULL);
		((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0 = L_0;
		((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___next_id_4 = 1;
		((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5 = ((int32_t)52);
		RemotingSurrogateSelector_t2745 * L_1 = (RemotingSurrogateSelector_t2745 *)il2cpp_codegen_object_new (RemotingSurrogateSelector_t2745_il2cpp_TypeInfo_var);
		RemotingSurrogateSelector__ctor_m17297(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		StreamingContext__ctor_m17450((&V_1), ((int32_t)16), NULL, /*hidden argument*/NULL);
		RemotingSurrogateSelector_t2745 * L_2 = V_0;
		StreamingContext_t670  L_3 = V_1;
		BinaryFormatter_t1132 * L_4 = (BinaryFormatter_t1132 *)il2cpp_codegen_object_new (BinaryFormatter_t1132_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m17455(L_4, L_2, L_3, /*hidden argument*/NULL);
		((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->____serializationFormatter_1 = L_4;
		StreamingContext_t670  L_5 = V_1;
		BinaryFormatter_t1132 * L_6 = (BinaryFormatter_t1132 *)il2cpp_codegen_object_new (BinaryFormatter_t1132_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m17455(L_6, (Object_t *)NULL, L_5, /*hidden argument*/NULL);
		((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->____deserializationFormatter_2 = L_6;
		BinaryFormatter_t1132 * L_7 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->____serializationFormatter_1;
		NullCheck(L_7);
		BinaryFormatter_set_AssemblyFormat_m17457(L_7, 1, /*hidden argument*/NULL);
		BinaryFormatter_t1132 * L_8 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->____deserializationFormatter_2;
		NullCheck(L_8);
		BinaryFormatter_set_AssemblyFormat_m17457(L_8, 1, /*hidden argument*/NULL);
		RemotingServices_RegisterInternalChannels_m17079(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t713_il2cpp_TypeInfo_var);
		Guid_t713  L_9 = Guid_NewGuid_m3569(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_9;
		String_t* L_10 = Guid_ToString_m5158((&V_2), /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m3278(L_10, ((int32_t)45), ((int32_t)95), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m1269(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral73, /*hidden argument*/NULL);
		((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___app_id_3 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(RemoteActivator_t2705_0_0_0_var), /*hidden argument*/NULL);
		RemotingServices_CreateWellKnownServerIdentity_m17075(NULL /*static, unused*/, L_13, (String_t*) &_stringLiteral4991, 1, /*hidden argument*/NULL);
		Type_t * L_14 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		MethodInfo_t * L_15 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(50 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_14, (String_t*) &_stringLiteral4992, ((int32_t)36));
		((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___FieldSetterMethod_6 = L_15;
		Type_t * L_16 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		MethodInfo_t * L_17 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(50 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_16, (String_t*) &_stringLiteral4993, ((int32_t)36));
		((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___FieldGetterMethod_7 = L_17;
		return;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
extern "C" MethodBase_t728 * RemotingServices_GetVirtualMethod_m17054 (Object_t * __this /* static, unused */, Type_t * ___type, MethodBase_t728 * ___method, const MethodInfo* method)
{
	typedef MethodBase_t728 * (*RemotingServices_GetVirtualMethod_m17054_ftn) (Type_t *, MethodBase_t728 *);
	static RemotingServices_GetVirtualMethod_m17054_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemotingServices_GetVirtualMethod_m17054_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)");
	return _il2cpp_icall_func(___type, ___method);
}
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
extern "C" bool RemotingServices_IsTransparentProxy_m17055 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method)
{
	typedef bool (*RemotingServices_IsTransparentProxy_m17055_ftn) (Object_t *);
	static RemotingServices_IsTransparentProxy_m17055_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemotingServices_IsTransparentProxy_m17055_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)");
	return _il2cpp_icall_func(___proxy);
}
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern TypeInfo* ServerIdentity_t2318_il2cpp_TypeInfo_var;
extern "C" Type_t * RemotingServices_GetServerTypeForUri_m17056 (Object_t * __this /* static, unused */, String_t* ___URI, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		ServerIdentity_t2318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5692);
		s_Il2CppMethodIntialized = true;
	}
	ServerIdentity_t2318 * V_0 = {0};
	{
		String_t* L_0 = ___URI;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		Identity_t2685 * L_1 = RemotingServices_GetIdentityForUri_m17071(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((ServerIdentity_t2318 *)IsInst(L_1, ServerIdentity_t2318_il2cpp_TypeInfo_var));
		ServerIdentity_t2318 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (Type_t *)NULL;
	}

IL_0011:
	{
		ServerIdentity_t2318 * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = ServerIdentity_get_ObjectType_m17083(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_Unmarshal_m17057 (Object_t * __this /* static, unused */, ObjRef_t2684 * ___objectRef, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjRef_t2684 * L_0 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		Object_t * L_1 = RemotingServices_Unmarshal_m17058(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
extern const Il2CppType* MarshalByRefObject_t882_0_0_0_var;
extern const Il2CppType* ProxyAttribute_t2750_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern TypeInfo* TrackingServices_t2751_il2cpp_TypeInfo_var;
extern TypeInfo* ProxyAttribute_t2750_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_Unmarshal_m17058 (Object_t * __this /* static, unused */, ObjRef_t2684 * ___objectRef, bool ___fRefine, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t882_0_0_0_var = il2cpp_codegen_type_from_index(2117);
		ProxyAttribute_t2750_0_0_0_var = il2cpp_codegen_type_from_index(5693);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		TrackingServices_t2751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5694);
		ProxyAttribute_t2750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5693);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	ProxyAttribute_t2750 * V_3 = {0};
	Type_t * G_B3_0 = {0};
	{
		bool L_0 = ___fRefine;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjRef_t2684 * L_1 = ___objectRef;
		NullCheck(L_1);
		Type_t * L_2 = ObjRef_get_ServerType_m17045(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0015;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t882_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		Type_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t882_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0024:
	{
		ObjRef_t2684 * L_6 = ___objectRef;
		NullCheck(L_6);
		bool L_7 = ObjRef_get_IsReferenceToWellKnow_m17034(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		ObjRef_t2684 * L_8 = ___objectRef;
		Type_t * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		Object_t * L_10 = RemotingServices_GetRemoteObject_m17078(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Object_t * L_11 = V_1;
		ObjRef_t2684 * L_12 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t2751_il2cpp_TypeInfo_var);
		TrackingServices_NotifyUnmarshaledObject_m17346(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		Object_t * L_13 = V_1;
		return L_13;
	}

IL_003d:
	{
		Type_t * L_14 = V_0;
		NullCheck(L_14);
		bool L_15 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_14);
		if (!L_15)
		{
			goto IL_0078;
		}
	}
	{
		Type_t * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ProxyAttribute_t2750_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t478 * L_18 = Attribute_GetCustomAttribute_m13088(NULL /*static, unused*/, L_16, L_17, 1, /*hidden argument*/NULL);
		V_3 = ((ProxyAttribute_t2750 *)Castclass(L_18, ProxyAttribute_t2750_il2cpp_TypeInfo_var));
		ProxyAttribute_t2750 * L_19 = V_3;
		if (!L_19)
		{
			goto IL_0078;
		}
	}
	{
		ProxyAttribute_t2750 * L_20 = V_3;
		ObjRef_t2684 * L_21 = ___objectRef;
		Type_t * L_22 = V_0;
		NullCheck(L_20);
		RealProxy_t2747 * L_23 = (RealProxy_t2747 *)VirtFuncInvoker4< RealProxy_t2747 *, ObjRef_t2684 *, Type_t *, Object_t *, Context_t2693 * >::Invoke(9 /* System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context) */, L_20, L_21, L_22, NULL, (Context_t2693 *)NULL);
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_23);
		V_2 = L_24;
		Object_t * L_25 = V_2;
		ObjRef_t2684 * L_26 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t2751_il2cpp_TypeInfo_var);
		TrackingServices_NotifyUnmarshaledObject_m17346(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		Object_t * L_27 = V_2;
		return L_27;
	}

IL_0078:
	{
		ObjRef_t2684 * L_28 = ___objectRef;
		Type_t * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		Object_t * L_30 = RemotingServices_GetProxyForRemoteObject_m17077(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		V_2 = L_30;
		Object_t * L_31 = V_2;
		ObjRef_t2684 * L_32 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t2751_il2cpp_TypeInfo_var);
		TrackingServices_NotifyUnmarshaledObject_m17346(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		Object_t * L_33 = V_2;
		return L_33;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.RemotingServices::Marshal(System.MarshalByRefObject)
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern "C" ObjRef_t2684 * RemotingServices_Marshal_m17059 (Object_t * __this /* static, unused */, MarshalByRefObject_t882 * ___Obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		s_Il2CppMethodIntialized = true;
	}
	{
		MarshalByRefObject_t882 * L_0 = ___Obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		ObjRef_t2684 * L_1 = RemotingServices_Marshal_m17060(NULL /*static, unused*/, L_0, (String_t*)NULL, (Type_t *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.RemotingServices::Marshal(System.MarshalByRefObject,System.String,System.Type)
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern TypeInfo* ClientActivatedIdentity_t2695_il2cpp_TypeInfo_var;
extern TypeInfo* ILease_t2716_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t2691_il2cpp_TypeInfo_var;
extern TypeInfo* TrackingServices_t2751_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" ObjRef_t2684 * RemotingServices_Marshal_m17060 (Object_t * __this /* static, unused */, MarshalByRefObject_t882 * ___Obj, String_t* ___ObjURI, Type_t * ___RequestedType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		ClientActivatedIdentity_t2695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5695);
		ILease_t2716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5696);
		RemotingException_t2691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5447);
		TrackingServices_t2751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5694);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	RealProxy_t2747 * V_0 = {0};
	Identity_t2685 * V_1 = {0};
	ClientActivatedIdentity_t2695 * V_2 = {0};
	ObjRef_t2684 * V_3 = {0};
	ClientActivatedIdentity_t2695 * V_4 = {0};
	ObjRef_t2684 * V_5 = {0};
	{
		MarshalByRefObject_t882 * L_0 = ___Obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		bool L_1 = RemotingServices_IsTransparentProxy_m17055(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_008e;
		}
	}
	{
		MarshalByRefObject_t882 * L_2 = ___Obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		RealProxy_t2747 * L_3 = RemotingServices_GetRealProxy_m17062(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RealProxy_t2747 * L_4 = V_0;
		NullCheck(L_4);
		Identity_t2685 * L_5 = RealProxy_get_ObjectIdentity_m17330(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Identity_t2685 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_008e;
		}
	}
	{
		RealProxy_t2747 * L_7 = V_0;
		NullCheck(L_7);
		Type_t * L_8 = RealProxy_GetProxiedType_m17328(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_8);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		Identity_t2685 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = Identity_get_IsConnected_m17023(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_006a;
		}
	}
	{
		Identity_t2685 * L_12 = V_1;
		V_2 = ((ClientActivatedIdentity_t2695 *)Castclass(L_12, ClientActivatedIdentity_t2695_il2cpp_TypeInfo_var));
		String_t* L_13 = ___ObjURI;
		if (L_13)
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		String_t* L_14 = RemotingServices_NewUri_m17061(NULL /*static, unused*/, /*hidden argument*/NULL);
		___ObjURI = L_14;
	}

IL_0044:
	{
		ClientActivatedIdentity_t2695 * L_15 = V_2;
		String_t* L_16 = ___ObjURI;
		NullCheck(L_15);
		Identity_set_ObjectUri_m17022(L_15, L_16, /*hidden argument*/NULL);
		ClientActivatedIdentity_t2695 * L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		RemotingServices_RegisterServerIdentity_m17076(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		ClientActivatedIdentity_t2695 * L_18 = V_2;
		MarshalByRefObject_t882 * L_19 = ___Obj;
		NullCheck(L_19);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.MarshalByRefObject::InitializeLifetimeService() */, L_19);
		NullCheck(L_18);
		ServerIdentity_StartTrackingLifetime_m17084(L_18, ((Object_t *)Castclass(L_20, ILease_t2716_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		ClientActivatedIdentity_t2695 * L_21 = V_2;
		Type_t * L_22 = ___RequestedType;
		NullCheck(L_21);
		ObjRef_t2684 * L_23 = (ObjRef_t2684 *)VirtFuncInvoker1< ObjRef_t2684 *, Type_t * >::Invoke(4 /* System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type) */, L_21, L_22);
		return L_23;
	}

IL_006a:
	{
		String_t* L_24 = ___ObjURI;
		if (!L_24)
		{
			goto IL_0078;
		}
	}
	{
		RemotingException_t2691 * L_25 = (RemotingException_t2691 *)il2cpp_codegen_object_new (RemotingException_t2691_il2cpp_TypeInfo_var);
		RemotingException__ctor_m17051(L_25, (String_t*) &_stringLiteral4994, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_0078:
	{
		RealProxy_t2747 * L_26 = V_0;
		NullCheck(L_26);
		Identity_t2685 * L_27 = RealProxy_get_ObjectIdentity_m17330(L_26, /*hidden argument*/NULL);
		Type_t * L_28 = ___RequestedType;
		NullCheck(L_27);
		ObjRef_t2684 * L_29 = (ObjRef_t2684 *)VirtFuncInvoker1< ObjRef_t2684 *, Type_t * >::Invoke(4 /* System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::CreateObjRef(System.Type) */, L_27, L_28);
		V_3 = L_29;
		MarshalByRefObject_t882 * L_30 = ___Obj;
		ObjRef_t2684 * L_31 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t2751_il2cpp_TypeInfo_var);
		TrackingServices_NotifyMarshaledObject_m17345(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		ObjRef_t2684 * L_32 = V_3;
		return L_32;
	}

IL_008e:
	{
		Type_t * L_33 = ___RequestedType;
		if (L_33)
		{
			goto IL_009b;
		}
	}
	{
		MarshalByRefObject_t882 * L_34 = ___Obj;
		NullCheck(L_34);
		Type_t * L_35 = Object_GetType_m1416(L_34, /*hidden argument*/NULL);
		___RequestedType = L_35;
	}

IL_009b:
	{
		String_t* L_36 = ___ObjURI;
		if (L_36)
		{
			goto IL_00ba;
		}
	}
	{
		MarshalByRefObject_t882 * L_37 = ___Obj;
		NullCheck(L_37);
		ServerIdentity_t2318 * L_38 = MarshalByRefObject_get_ObjectIdentity_m13825(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_00b8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		String_t* L_39 = RemotingServices_NewUri_m17061(NULL /*static, unused*/, /*hidden argument*/NULL);
		___ObjURI = L_39;
		MarshalByRefObject_t882 * L_40 = ___Obj;
		Type_t * L_41 = ___RequestedType;
		String_t* L_42 = ___ObjURI;
		RemotingServices_CreateClientActivatedServerIdentity_m17074(NULL /*static, unused*/, L_40, L_41, L_42, /*hidden argument*/NULL);
	}

IL_00b8:
	{
		goto IL_00e8;
	}

IL_00ba:
	{
		String_t* L_43 = ___ObjURI;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m1269(NULL /*static, unused*/, (String_t*) &_stringLiteral73, L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		Identity_t2685 * L_45 = RemotingServices_GetIdentityForUri_m17071(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		V_4 = ((ClientActivatedIdentity_t2695 *)IsInst(L_45, ClientActivatedIdentity_t2695_il2cpp_TypeInfo_var));
		ClientActivatedIdentity_t2695 * L_46 = V_4;
		if (!L_46)
		{
			goto IL_00df;
		}
	}
	{
		MarshalByRefObject_t882 * L_47 = ___Obj;
		ClientActivatedIdentity_t2695 * L_48 = V_4;
		NullCheck(L_48);
		MarshalByRefObject_t882 * L_49 = ClientActivatedIdentity_GetServerObject_m17091(L_48, /*hidden argument*/NULL);
		if ((((Object_t*)(MarshalByRefObject_t882 *)L_47) == ((Object_t*)(MarshalByRefObject_t882 *)L_49)))
		{
			goto IL_00e8;
		}
	}

IL_00df:
	{
		MarshalByRefObject_t882 * L_50 = ___Obj;
		Type_t * L_51 = ___RequestedType;
		String_t* L_52 = ___ObjURI;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		RemotingServices_CreateClientActivatedServerIdentity_m17074(NULL /*static, unused*/, L_50, L_51, L_52, /*hidden argument*/NULL);
	}

IL_00e8:
	{
		MarshalByRefObject_t882 * L_53 = ___Obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		bool L_54 = RemotingServices_IsTransparentProxy_m17055(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_0105;
		}
	}
	{
		MarshalByRefObject_t882 * L_55 = ___Obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		RealProxy_t2747 * L_56 = RemotingServices_GetRealProxy_m17062(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		Identity_t2685 * L_57 = RealProxy_get_ObjectIdentity_m17330(L_56, /*hidden argument*/NULL);
		Type_t * L_58 = ___RequestedType;
		NullCheck(L_57);
		ObjRef_t2684 * L_59 = (ObjRef_t2684 *)VirtFuncInvoker1< ObjRef_t2684 *, Type_t * >::Invoke(4 /* System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::CreateObjRef(System.Type) */, L_57, L_58);
		V_5 = L_59;
		goto IL_010e;
	}

IL_0105:
	{
		MarshalByRefObject_t882 * L_60 = ___Obj;
		Type_t * L_61 = ___RequestedType;
		NullCheck(L_60);
		ObjRef_t2684 * L_62 = (ObjRef_t2684 *)VirtFuncInvoker1< ObjRef_t2684 *, Type_t * >::Invoke(4 /* System.Runtime.Remoting.ObjRef System.MarshalByRefObject::CreateObjRef(System.Type) */, L_60, L_61);
		V_5 = L_62;
	}

IL_010e:
	{
		MarshalByRefObject_t882 * L_63 = ___Obj;
		ObjRef_t2684 * L_64 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t2751_il2cpp_TypeInfo_var);
		TrackingServices_NotifyMarshaledObject_m17345(NULL /*static, unused*/, L_63, L_64, /*hidden argument*/NULL);
		ObjRef_t2684 * L_65 = V_5;
		return L_65;
	}
}
// System.String System.Runtime.Remoting.RemotingServices::NewUri()
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingServices_NewUri_m17061 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		int32_t L_0 = Interlocked_Increment_m18763(NULL /*static, unused*/, (&((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___next_id_4), /*hidden argument*/NULL);
		V_0 = L_0;
		ObjectU5BU5D_t300* L_1 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 5));
		String_t* L_2 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___app_id_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
		ObjectU5BU5D_t300* L_3 = L_1;
		int32_t L_4 = Environment_get_TickCount_m3210(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = Int32_ToString_m1539((&V_1), (String_t*) &_stringLiteral4995, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t300* L_6 = L_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral907);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)(String_t*) &_stringLiteral907;
		ObjectU5BU5D_t300* L_7 = L_6;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)L_10;
		ObjectU5BU5D_t300* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 4);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral4996);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 4)) = (Object_t *)(String_t*) &_stringLiteral4996;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m1267(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t2691_il2cpp_TypeInfo_var;
extern TypeInfo* TransparentProxy_t2748_il2cpp_TypeInfo_var;
extern "C" RealProxy_t2747 * RemotingServices_GetRealProxy_m17062 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		RemotingException_t2691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5447);
		TransparentProxy_t2748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5697);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___proxy;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		bool L_1 = RemotingServices_IsTransparentProxy_m17055(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		RemotingException_t2691 * L_2 = (RemotingException_t2691 *)il2cpp_codegen_object_new (RemotingException_t2691_il2cpp_TypeInfo_var);
		RemotingException__ctor_m17051(L_2, (String_t*) &_stringLiteral4997, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t * L_3 = ___proxy;
		NullCheck(((TransparentProxy_t2748 *)Castclass(L_3, TransparentProxy_t2748_il2cpp_TypeInfo_var)));
		RealProxy_t2747 * L_4 = (((TransparentProxy_t2748 *)Castclass(L_3, TransparentProxy_t2748_il2cpp_TypeInfo_var))->____rp_0);
		return L_4;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
extern TypeInfo* IMethodMessage_t2738_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t2691_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern "C" MethodBase_t728 * RemotingServices_GetMethodBaseFromMethodMessage_m17063 (Object_t * __this /* static, unused */, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t2738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5698);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		RemotingException_t2691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5447);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	{
		Object_t * L_0 = ___msg;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName() */, IMethodMessage_t2738_il2cpp_TypeInfo_var, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetType_m5093(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		Object_t * L_4 = ___msg;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName() */, IMethodMessage_t2738_il2cpp_TypeInfo_var, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral1532, L_5, (String_t*) &_stringLiteral1502, /*hidden argument*/NULL);
		RemotingException_t2691 * L_7 = (RemotingException_t2691 *)il2cpp_codegen_object_new (RemotingException_t2691_il2cpp_TypeInfo_var);
		RemotingException__ctor_m17051(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002a:
	{
		Type_t * L_8 = V_0;
		Object_t * L_9 = ___msg;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodName() */, IMethodMessage_t2738_il2cpp_TypeInfo_var, L_9);
		Object_t * L_11 = ___msg;
		NullCheck(L_11);
		Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodSignature() */, IMethodMessage_t2738_il2cpp_TypeInfo_var, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		MethodBase_t728 * L_13 = RemotingServices_GetMethodBaseFromName_m17064(NULL /*static, unused*/, L_8, L_10, ((TypeU5BU5D_t570*)Castclass(L_12, TypeU5BU5D_t570_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodBase_t728 * RemotingServices_GetMethodBaseFromName_m17064 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t570* ___signature, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t728 * V_0 = {0};
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Type_t * L_2 = ___type;
		String_t* L_3 = ___methodName;
		TypeU5BU5D_t570* L_4 = ___signature;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		MethodBase_t728 * L_5 = RemotingServices_FindInterfaceMethod_m17065(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0011:
	{
		V_0 = (MethodBase_t728 *)NULL;
		TypeU5BU5D_t570* L_6 = ___signature;
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_7 = ___type;
		String_t* L_8 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		int32_t L_9 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		NullCheck(L_7);
		MethodInfo_t * L_10 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(50 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_7, L_8, L_9);
		V_0 = L_10;
		goto IL_0035;
	}

IL_0025:
	{
		Type_t * L_11 = ___type;
		String_t* L_12 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		int32_t L_13 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		TypeU5BU5D_t570* L_14 = ___signature;
		NullCheck(L_11);
		MethodInfo_t * L_15 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t725 *, TypeU5BU5D_t570*, ParameterModifierU5BU5D_t726* >::Invoke(52 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_11, L_12, L_13, (Binder_t725 *)NULL, L_14, (ParameterModifierU5BU5D_t726*)(ParameterModifierU5BU5D_t726*)NULL);
		V_0 = L_15;
	}

IL_0035:
	{
		MethodBase_t728 * L_16 = V_0;
		if (!L_16)
		{
			goto IL_003a;
		}
	}
	{
		MethodBase_t728 * L_17 = V_0;
		return L_17;
	}

IL_003a:
	{
		String_t* L_18 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m1295(NULL /*static, unused*/, L_18, (String_t*) &_stringLiteral4992, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		MethodInfo_t * L_20 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___FieldSetterMethod_6;
		return L_20;
	}

IL_004d:
	{
		String_t* L_21 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_op_Equality_m1295(NULL /*static, unused*/, L_21, (String_t*) &_stringLiteral4993, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		MethodInfo_t * L_23 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___FieldGetterMethod_7;
		return L_23;
	}

IL_0060:
	{
		TypeU5BU5D_t570* L_24 = ___signature;
		if (L_24)
		{
			goto IL_0076;
		}
	}
	{
		Type_t * L_25 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		int32_t L_26 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t570* L_27 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		NullCheck(L_25);
		ConstructorInfo_t574 * L_28 = (ConstructorInfo_t574 *)VirtFuncInvoker4< ConstructorInfo_t574 *, int32_t, Binder_t725 *, TypeU5BU5D_t570*, ParameterModifierU5BU5D_t726* >::Invoke(74 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_25, L_26, (Binder_t725 *)NULL, L_27, (ParameterModifierU5BU5D_t726*)(ParameterModifierU5BU5D_t726*)NULL);
		return L_28;
	}

IL_0076:
	{
		Type_t * L_29 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		int32_t L_30 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		TypeU5BU5D_t570* L_31 = ___signature;
		NullCheck(L_29);
		ConstructorInfo_t574 * L_32 = (ConstructorInfo_t574 *)VirtFuncInvoker4< ConstructorInfo_t574 *, int32_t, Binder_t725 *, TypeU5BU5D_t570*, ParameterModifierU5BU5D_t726* >::Invoke(74 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_29, L_30, (Binder_t725 *)NULL, L_31, (ParameterModifierU5BU5D_t726*)(ParameterModifierU5BU5D_t726*)NULL);
		return L_32;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern "C" MethodBase_t728 * RemotingServices_FindInterfaceMethod_m17065 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t570* ___signature, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t728 * V_0 = {0};
	Type_t * V_1 = {0};
	TypeU5BU5D_t570* V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = (MethodBase_t728 *)NULL;
		TypeU5BU5D_t570* L_0 = ___signature;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Type_t * L_1 = ___type;
		String_t* L_2 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		int32_t L_3 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		NullCheck(L_1);
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(50 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_1, L_2, L_3);
		V_0 = L_4;
		goto IL_0024;
	}

IL_0014:
	{
		Type_t * L_5 = ___type;
		String_t* L_6 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		int32_t L_7 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		TypeU5BU5D_t570* L_8 = ___signature;
		NullCheck(L_5);
		MethodInfo_t * L_9 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t725 *, TypeU5BU5D_t570*, ParameterModifierU5BU5D_t726* >::Invoke(52 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_5, L_6, L_7, (Binder_t725 *)NULL, L_8, (ParameterModifierU5BU5D_t726*)(ParameterModifierU5BU5D_t726*)NULL);
		V_0 = L_9;
	}

IL_0024:
	{
		MethodBase_t728 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_0029;
		}
	}
	{
		MethodBase_t728 * L_11 = V_0;
		return L_11;
	}

IL_0029:
	{
		Type_t * L_12 = ___type;
		NullCheck(L_12);
		TypeU5BU5D_t570* L_13 = (TypeU5BU5D_t570*)VirtFuncInvoker0< TypeU5BU5D_t570* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_12);
		V_2 = L_13;
		V_3 = 0;
		goto IL_004a;
	}

IL_0034:
	{
		TypeU5BU5D_t570* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		V_1 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_14, L_16));
		Type_t * L_17 = V_1;
		String_t* L_18 = ___methodName;
		TypeU5BU5D_t570* L_19 = ___signature;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		MethodBase_t728 * L_20 = RemotingServices_FindInterfaceMethod_m17065(NULL /*static, unused*/, L_17, L_18, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		MethodBase_t728 * L_21 = V_0;
		if (!L_21)
		{
			goto IL_0046;
		}
	}
	{
		MethodBase_t728 * L_22 = V_0;
		return L_22;
	}

IL_0046:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_004a:
	{
		int32_t L_24 = V_3;
		TypeU5BU5D_t570* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		return (MethodBase_t728 *)NULL;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* MarshalByRefObject_t882_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern "C" void RemotingServices_GetObjectData_m17066 (Object_t * __this /* static, unused */, Object_t * ___obj, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		MarshalByRefObject_t882_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2117);
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		s_Il2CppMethodIntialized = true;
	}
	ObjRef_t2684 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral4190, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		ObjRef_t2684 * L_3 = RemotingServices_Marshal_m17059(NULL /*static, unused*/, ((MarshalByRefObject_t882 *)Castclass(L_2, MarshalByRefObject_t882_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_3;
		ObjRef_t2684 * L_4 = V_0;
		SerializationInfo_t669 * L_5 = ___info;
		StreamingContext_t670  L_6 = ___context;
		NullCheck(L_4);
		VirtActionInvoker2< SerializationInfo_t669 *, StreamingContext_t670  >::Invoke(13 /* System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext) */, L_4, L_5, L_6);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.RemotingServices::IsMethodOverloaded(System.Runtime.Remoting.Messaging.IMethodMessage)
extern TypeInfo* IMethodMessage_t2738_il2cpp_TypeInfo_var;
extern TypeInfo* MonoType_t_il2cpp_TypeInfo_var;
extern "C" bool RemotingServices_IsMethodOverloaded_m17067 (Object_t * __this /* static, unused */, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t2738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5698);
		MonoType_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5438);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	MonoType_t * V_1 = {0};
	{
		Object_t * L_0 = ___msg;
		NullCheck(L_0);
		MethodBase_t728 * L_1 = (MethodBase_t728 *)InterfaceFuncInvoker0< MethodBase_t728 * >::Invoke(3 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodBase() */, IMethodMessage_t2738_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_1);
		V_1 = ((MonoType_t *)Castclass(L_2, MonoType_t_il2cpp_TypeInfo_var));
		MonoType_t * L_3 = V_1;
		Object_t * L_4 = ___msg;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodName() */, IMethodMessage_t2738_il2cpp_TypeInfo_var, L_4);
		MonoType_t * L_6 = V_1;
		NullCheck(L_3);
		MethodInfoU5BU5D_t2598* L_7 = MonoType_GetMethodsByName_m15014(L_3, L_5, ((int32_t)52), 0, L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		return ((((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) > ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean System.Runtime.Remoting.RemotingServices::IsOneWay(System.Reflection.MethodBase)
extern const Il2CppType* OneWayAttribute_t2741_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool RemotingServices_IsOneWay_m17068 (Object_t * __this /* static, unused */, MethodBase_t728 * ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneWayAttribute_t2741_0_0_0_var = il2cpp_codegen_type_from_index(5699);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodBase_t728 * L_0 = ___method;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(OneWayAttribute_t2741_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(11 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_1, 0);
		return L_2;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_CreateClientProxy_m17069 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t2681 * ___entry, ObjectU5BU5D_t300* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t913 * V_0 = {0};
	{
		ActivatedClientTypeEntry_t2681 * L_0 = ___entry;
		NullCheck(L_0);
		IContextAttributeU5BU5D_t2997* L_1 = ActivatedClientTypeEntry_get_ContextAttributes_m17013(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t300* L_2 = ___activationAttributes;
		if (!L_2)
		{
			goto IL_0047;
		}
	}

IL_000b:
	{
		ArrayList_t913 * L_3 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		ActivatedClientTypeEntry_t2681 * L_4 = ___entry;
		NullCheck(L_4);
		IContextAttributeU5BU5D_t2997* L_5 = ActivatedClientTypeEntry_get_ContextAttributes_m17013(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		ArrayList_t913 * L_6 = V_0;
		ActivatedClientTypeEntry_t2681 * L_7 = ___entry;
		NullCheck(L_7);
		IContextAttributeU5BU5D_t2997* L_8 = ActivatedClientTypeEntry_get_ContextAttributes_m17013(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< Object_t * >::Invoke(40 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_6, (Object_t *)(Object_t *)L_8);
	}

IL_0025:
	{
		ObjectU5BU5D_t300* L_9 = ___activationAttributes;
		if (!L_9)
		{
			goto IL_002f;
		}
	}
	{
		ArrayList_t913 * L_10 = V_0;
		ObjectU5BU5D_t300* L_11 = ___activationAttributes;
		NullCheck(L_10);
		VirtActionInvoker1< Object_t * >::Invoke(40 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_10, (Object_t *)(Object_t *)L_11);
	}

IL_002f:
	{
		ActivatedClientTypeEntry_t2681 * L_12 = ___entry;
		NullCheck(L_12);
		Type_t * L_13 = ActivatedClientTypeEntry_get_ObjectType_m17014(L_12, /*hidden argument*/NULL);
		ActivatedClientTypeEntry_t2681 * L_14 = ___entry;
		NullCheck(L_14);
		String_t* L_15 = ActivatedClientTypeEntry_get_ApplicationUrl_m17012(L_14, /*hidden argument*/NULL);
		ArrayList_t913 * L_16 = V_0;
		NullCheck(L_16);
		ObjectU5BU5D_t300* L_17 = (ObjectU5BU5D_t300*)VirtFuncInvoker0< ObjectU5BU5D_t300* >::Invoke(43 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_16);
		Object_t * L_18 = RemotingServices_CreateClientProxy_m10057(NULL /*static, unused*/, L_13, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0047:
	{
		ActivatedClientTypeEntry_t2681 * L_19 = ___entry;
		NullCheck(L_19);
		Type_t * L_20 = ActivatedClientTypeEntry_get_ObjectType_m17014(L_19, /*hidden argument*/NULL);
		ActivatedClientTypeEntry_t2681 * L_21 = ___entry;
		NullCheck(L_21);
		String_t* L_22 = ActivatedClientTypeEntry_get_ApplicationUrl_m17012(L_21, /*hidden argument*/NULL);
		Object_t * L_23 = RemotingServices_CreateClientProxy_m10057(NULL /*static, unused*/, L_20, L_22, (ObjectU5BU5D_t300*)(ObjectU5BU5D_t300*)NULL, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
extern const Il2CppType* ProxyAttribute_t2750_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ProxyAttribute_t2750_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t2710_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t2749_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_CreateClientProxyForContextBound_m17070 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t300* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProxyAttribute_t2750_0_0_0_var = il2cpp_codegen_type_from_index(5693);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		ProxyAttribute_t2750_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5693);
		ChannelServices_t2710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5700);
		RemotingProxy_t2749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5701);
		s_Il2CppMethodIntialized = true;
	}
	ProxyAttribute_t2750 * V_0 = {0};
	RemotingProxy_t2749 * V_1 = {0};
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_0);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		Type_t * L_2 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ProxyAttribute_t2750_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t478 * L_4 = Attribute_GetCustomAttribute_m13088(NULL /*static, unused*/, L_2, L_3, 1, /*hidden argument*/NULL);
		V_0 = ((ProxyAttribute_t2750 *)Castclass(L_4, ProxyAttribute_t2750_il2cpp_TypeInfo_var));
		ProxyAttribute_t2750 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		ProxyAttribute_t2750 * L_6 = V_0;
		Type_t * L_7 = ___type;
		NullCheck(L_6);
		MarshalByRefObject_t882 * L_8 = (MarshalByRefObject_t882 *)VirtFuncInvoker1< MarshalByRefObject_t882 *, Type_t * >::Invoke(8 /* System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type) */, L_6, L_7);
		return L_8;
	}

IL_002a:
	{
		Type_t * L_9 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t2710_il2cpp_TypeInfo_var);
		String_t* L_10 = ((ChannelServices_t2710_StaticFields*)ChannelServices_t2710_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		ObjectU5BU5D_t300* L_11 = ___activationAttributes;
		RemotingProxy_t2749 * L_12 = (RemotingProxy_t2749 *)il2cpp_codegen_object_new (RemotingProxy_t2749_il2cpp_TypeInfo_var);
		RemotingProxy__ctor_m17336(L_12, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		RemotingProxy_t2749 * L_13 = V_1;
		NullCheck(L_13);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_13);
		return L_14;
	}
}
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern TypeInfo* Identity_t2685_il2cpp_TypeInfo_var;
extern "C" Identity_t2685 * RemotingServices_GetIdentityForUri_m17071 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		Identity_t2685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5702);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Hashtable_t915 * V_1 = {0};
	Identity_t2685 * V_2 = {0};
	Identity_t2685 * V_3 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___uri;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		String_t* L_1 = RemotingServices_GetNormalizedUri_m17081(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Hashtable_t915 * L_2 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_1 = L_2;
		Hashtable_t915 * L_3 = V_1;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
			Hashtable_t915 * L_4 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_5 = V_0;
			NullCheck(L_4);
			Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
			V_2 = ((Identity_t2685 *)Castclass(L_6, Identity_t2685_il2cpp_TypeInfo_var));
			Identity_t2685 * L_7 = V_2;
			if (L_7)
			{
				goto IL_0042;
			}
		}

IL_0027:
		{
			String_t* L_8 = ___uri;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
			String_t* L_9 = RemotingServices_RemoveAppNameFromUri_m17072(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_0 = L_9;
			String_t* L_10 = V_0;
			if (!L_10)
			{
				goto IL_0042;
			}
		}

IL_0031:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
			Hashtable_t915 * L_11 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_12 = V_0;
			NullCheck(L_11);
			Object_t * L_13 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_11, L_12);
			V_2 = ((Identity_t2685 *)Castclass(L_13, Identity_t2685_il2cpp_TypeInfo_var));
		}

IL_0042:
		{
			Identity_t2685 * L_14 = V_2;
			V_3 = L_14;
			IL2CPP_LEAVE(0x4F, FINALLY_0048);
		}

IL_0046:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		Hashtable_t915 * L_15 = V_1;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_004f:
	{
		Identity_t2685 * L_16 = V_3;
		return L_16;
	}
}
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
extern TypeInfo* RemotingConfiguration_t2690_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingServices_RemoveAppNameFromUri_m17072 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t2690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5688);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t2690_il2cpp_TypeInfo_var);
		String_t* L_0 = RemotingConfiguration_get_ApplicationName_m17047(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000b:
	{
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral73, L_2, (String_t*) &_stringLiteral73, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = ___uri;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = String_StartsWith_m1347(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_7 = ___uri;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m1368(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_10 = String_Substring_m3180(L_7, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0032:
	{
		return (String_t*)NULL;
	}
}
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
extern TypeInfo* IChannelInfo_t2687_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern TypeInfo* ClientIdentity_t2686_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t2749_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainSink_t2713_il2cpp_TypeInfo_var;
extern TypeInfo* MarshalByRefObject_t882_il2cpp_TypeInfo_var;
extern "C" ClientIdentity_t2686 * RemotingServices_GetOrCreateClientIdentity_m17073 (Object_t * __this /* static, unused */, ObjRef_t2684 * ___objRef, Type_t * ___proxyType, Object_t ** ___clientProxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChannelInfo_t2687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5686);
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		ClientIdentity_t2686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5703);
		RemotingProxy_t2749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5701);
		CrossAppDomainSink_t2713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5704);
		MarshalByRefObject_t882_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2117);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	String_t* V_1 = {0};
	Object_t * V_2 = {0};
	Hashtable_t915 * V_3 = {0};
	String_t* V_4 = {0};
	ClientIdentity_t2686 * V_5 = {0};
	RemotingProxy_t2749 * V_6 = {0};
	CrossAppDomainSink_t2713 * V_7 = {0};
	ClientIdentity_t2686 * V_8 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	ObjectU5BU5D_t300* G_B3_0 = {0};
	{
		ObjRef_t2684 * L_0 = ___objRef;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo() */, L_0);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ObjRef_t2684 * L_2 = ___objRef;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo() */, L_2);
		NullCheck(L_3);
		ObjectU5BU5D_t300* L_4 = (ObjectU5BU5D_t300*)InterfaceFuncInvoker0< ObjectU5BU5D_t300* >::Invoke(0 /* System.Object[] System.Runtime.Remoting.IChannelInfo::get_ChannelData() */, IChannelInfo_t2687_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = ((ObjectU5BU5D_t300*)(NULL));
	}

IL_0016:
	{
		V_0 = (Object_t *)G_B3_0;
		ObjRef_t2684 * L_5 = ___objRef;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_5);
		Object_t * L_7 = V_0;
		Object_t * L_8 = RemotingServices_GetClientChannelSinkChain_m10056(NULL /*static, unused*/, L_6, L_7, (&V_1), /*hidden argument*/NULL);
		V_2 = L_8;
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_0030;
		}
	}
	{
		ObjRef_t2684 * L_10 = ___objRef;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_10);
		V_1 = L_11;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		Hashtable_t915 * L_12 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_3 = L_12;
		Hashtable_t915 * L_13 = V_3;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			Object_t ** L_14 = ___clientProxy;
			*((Object_t **)(L_14)) = (Object_t *)NULL;
			ObjRef_t2684 * L_15 = ___objRef;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_15);
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
			String_t* L_17 = RemotingServices_GetNormalizedUri_m17081(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
			V_4 = L_17;
			Hashtable_t915 * L_18 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_19 = V_4;
			NullCheck(L_18);
			Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_18, L_19);
			V_5 = ((ClientIdentity_t2686 *)IsInst(L_20, ClientIdentity_t2686_il2cpp_TypeInfo_var));
			ClientIdentity_t2686 * L_21 = V_5;
			if (!L_21)
			{
				goto IL_007d;
			}
		}

IL_0063:
		{
			Object_t ** L_22 = ___clientProxy;
			ClientIdentity_t2686 * L_23 = V_5;
			NullCheck(L_23);
			MarshalByRefObject_t882 * L_24 = ClientIdentity_get_ClientProxy_m17027(L_23, /*hidden argument*/NULL);
			*((Object_t **)(L_22)) = (Object_t *)L_24;
			Object_t ** L_25 = ___clientProxy;
			if (!(*((Object_t **)L_25)))
			{
				goto IL_0076;
			}
		}

IL_0070:
		{
			ClientIdentity_t2686 * L_26 = V_5;
			V_8 = L_26;
			IL2CPP_LEAVE(0xE9, FINALLY_00e2);
		}

IL_0076:
		{
			ClientIdentity_t2686 * L_27 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
			RemotingServices_DisposeIdentity_m17080(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		}

IL_007d:
		{
			String_t* L_28 = V_1;
			ObjRef_t2684 * L_29 = ___objRef;
			ClientIdentity_t2686 * L_30 = (ClientIdentity_t2686 *)il2cpp_codegen_object_new (ClientIdentity_t2686_il2cpp_TypeInfo_var);
			ClientIdentity__ctor_m17026(L_30, L_28, L_29, /*hidden argument*/NULL);
			V_5 = L_30;
			ClientIdentity_t2686 * L_31 = V_5;
			Object_t * L_32 = V_2;
			NullCheck(L_31);
			Identity_set_ChannelSink_m17020(L_31, L_32, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
			Hashtable_t915 * L_33 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_34 = V_4;
			ClientIdentity_t2686 * L_35 = V_5;
			NullCheck(L_33);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_33, L_34, L_35);
			Type_t * L_36 = ___proxyType;
			if (!L_36)
			{
				goto IL_00da;
			}
		}

IL_009f:
		{
			Type_t * L_37 = ___proxyType;
			ClientIdentity_t2686 * L_38 = V_5;
			RemotingProxy_t2749 * L_39 = (RemotingProxy_t2749 *)il2cpp_codegen_object_new (RemotingProxy_t2749_il2cpp_TypeInfo_var);
			RemotingProxy__ctor_m17335(L_39, L_37, L_38, /*hidden argument*/NULL);
			V_6 = L_39;
			Object_t * L_40 = V_2;
			V_7 = ((CrossAppDomainSink_t2713 *)IsInst(L_40, CrossAppDomainSink_t2713_il2cpp_TypeInfo_var));
			CrossAppDomainSink_t2713 * L_41 = V_7;
			if (!L_41)
			{
				goto IL_00c3;
			}
		}

IL_00b5:
		{
			RemotingProxy_t2749 * L_42 = V_6;
			CrossAppDomainSink_t2713 * L_43 = V_7;
			NullCheck(L_43);
			int32_t L_44 = CrossAppDomainSink_get_TargetDomainId_m17127(L_43, /*hidden argument*/NULL);
			NullCheck(L_42);
			RealProxy_SetTargetDomain_m17334(L_42, L_44, /*hidden argument*/NULL);
		}

IL_00c3:
		{
			Object_t ** L_45 = ___clientProxy;
			RemotingProxy_t2749 * L_46 = V_6;
			NullCheck(L_46);
			Object_t * L_47 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_46);
			*((Object_t **)(L_45)) = (Object_t *)L_47;
			ClientIdentity_t2686 * L_48 = V_5;
			Object_t ** L_49 = ___clientProxy;
			NullCheck(L_48);
			ClientIdentity_set_ClientProxy_m17028(L_48, ((MarshalByRefObject_t882 *)Castclass((*((Object_t **)L_49)), MarshalByRefObject_t882_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_00da:
		{
			ClientIdentity_t2686 * L_50 = V_5;
			V_8 = L_50;
			IL2CPP_LEAVE(0xE9, FINALLY_00e2);
		}

IL_00e0:
		{
			IL2CPP_LEAVE(0xE9, FINALLY_00e2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_00e2;
	}

FINALLY_00e2:
	{ // begin finally (depth: 1)
		Hashtable_t915 * L_51 = V_3;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(226)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(226)
	{
		IL2CPP_JUMP_TBL(0xE9, IL_00e9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_00e9:
	{
		ClientIdentity_t2686 * L_52 = V_8;
		return L_52;
	}
}
// System.Runtime.Remoting.ClientActivatedIdentity System.Runtime.Remoting.RemotingServices::CreateClientActivatedServerIdentity(System.MarshalByRefObject,System.Type,System.String)
extern TypeInfo* ClientActivatedIdentity_t2695_il2cpp_TypeInfo_var;
extern TypeInfo* Context_t2693_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern TypeInfo* ILease_t2716_il2cpp_TypeInfo_var;
extern "C" ClientActivatedIdentity_t2695 * RemotingServices_CreateClientActivatedServerIdentity_m17074 (Object_t * __this /* static, unused */, MarshalByRefObject_t882 * ___realObject, Type_t * ___objectType, String_t* ___objectUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientActivatedIdentity_t2695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5695);
		Context_t2693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5705);
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		ILease_t2716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5696);
		s_Il2CppMethodIntialized = true;
	}
	ClientActivatedIdentity_t2695 * V_0 = {0};
	{
		String_t* L_0 = ___objectUri;
		Type_t * L_1 = ___objectType;
		ClientActivatedIdentity_t2695 * L_2 = (ClientActivatedIdentity_t2695 *)il2cpp_codegen_object_new (ClientActivatedIdentity_t2695_il2cpp_TypeInfo_var);
		ClientActivatedIdentity__ctor_m17090(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ClientActivatedIdentity_t2695 * L_3 = V_0;
		MarshalByRefObject_t882 * L_4 = ___realObject;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t2693_il2cpp_TypeInfo_var);
		Context_t2693 * L_5 = Context_get_DefaultContext_m17130(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		ServerIdentity_AttachServerObject_m17087(L_3, L_4, L_5, /*hidden argument*/NULL);
		ClientActivatedIdentity_t2695 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		RemotingServices_RegisterServerIdentity_m17076(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		ClientActivatedIdentity_t2695 * L_7 = V_0;
		MarshalByRefObject_t882 * L_8 = ___realObject;
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.MarshalByRefObject::InitializeLifetimeService() */, L_8);
		NullCheck(L_7);
		ServerIdentity_StartTrackingLifetime_m17084(L_7, ((Object_t *)Castclass(L_9, ILease_t2716_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		ClientActivatedIdentity_t2695 * L_10 = V_0;
		return L_10;
	}
}
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
extern TypeInfo* Context_t2693_il2cpp_TypeInfo_var;
extern TypeInfo* SingleCallIdentity_t2697_il2cpp_TypeInfo_var;
extern TypeInfo* SingletonIdentity_t2696_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern "C" ServerIdentity_t2318 * RemotingServices_CreateWellKnownServerIdentity_m17075 (Object_t * __this /* static, unused */, Type_t * ___objectType, String_t* ___objectUri, int32_t ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t2693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5705);
		SingleCallIdentity_t2697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5706);
		SingletonIdentity_t2696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5707);
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		s_Il2CppMethodIntialized = true;
	}
	ServerIdentity_t2318 * V_0 = {0};
	{
		int32_t L_0 = ___mode;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_1 = ___objectUri;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t2693_il2cpp_TypeInfo_var);
		Context_t2693 * L_2 = Context_get_DefaultContext_m17130(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_3 = ___objectType;
		SingleCallIdentity_t2697 * L_4 = (SingleCallIdentity_t2697 *)il2cpp_codegen_object_new (SingleCallIdentity_t2697_il2cpp_TypeInfo_var);
		SingleCallIdentity__ctor_m17094(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0020;
	}

IL_0013:
	{
		String_t* L_5 = ___objectUri;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t2693_il2cpp_TypeInfo_var);
		Context_t2693 * L_6 = Context_get_DefaultContext_m17130(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_7 = ___objectType;
		SingletonIdentity_t2696 * L_8 = (SingletonIdentity_t2696 *)il2cpp_codegen_object_new (SingletonIdentity_t2696_il2cpp_TypeInfo_var);
		SingletonIdentity__ctor_m17093(L_8, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0020:
	{
		ServerIdentity_t2318 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		RemotingServices_RegisterServerIdentity_m17076(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		ServerIdentity_t2318 * L_10 = V_0;
		return L_10;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t2691_il2cpp_TypeInfo_var;
extern "C" void RemotingServices_RegisterServerIdentity_m17076 (Object_t * __this /* static, unused */, ServerIdentity_t2318 * ___identity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		RemotingException_t2691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5447);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t915 * V_0 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		Hashtable_t915 * L_0 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_0 = L_0;
		Hashtable_t915 * L_1 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
			Hashtable_t915 * L_2 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			ServerIdentity_t2318 * L_3 = ___identity;
			NullCheck(L_3);
			String_t* L_4 = Identity_get_ObjectUri_m17021(L_3, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_2, L_4);
			if (!L_5)
			{
				goto IL_0039;
			}
		}

IL_001e:
		{
			ServerIdentity_t2318 * L_6 = ___identity;
			NullCheck(L_6);
			String_t* L_7 = Identity_get_ObjectUri_m17021(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_8 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral4998, L_7, (String_t*) &_stringLiteral53, /*hidden argument*/NULL);
			RemotingException_t2691 * L_9 = (RemotingException_t2691 *)il2cpp_codegen_object_new (RemotingException_t2691_il2cpp_TypeInfo_var);
			RemotingException__ctor_m17051(L_9, L_8, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_9);
		}

IL_0039:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
			Hashtable_t915 * L_10 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			ServerIdentity_t2318 * L_11 = ___identity;
			NullCheck(L_11);
			String_t* L_12 = Identity_get_ObjectUri_m17021(L_11, /*hidden argument*/NULL);
			ServerIdentity_t2318 * L_13 = ___identity;
			NullCheck(L_10);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_10, L_12, L_13);
			IL2CPP_LEAVE(0x53, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		Hashtable_t915 * L_14 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0053:
	{
		return;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern TypeInfo* ClientActivatedIdentity_t2695_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_GetProxyForRemoteObject_m17077 (Object_t * __this /* static, unused */, ObjRef_t2684 * ___objref, Type_t * ___classToProxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		ClientActivatedIdentity_t2695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5695);
		s_Il2CppMethodIntialized = true;
	}
	ClientActivatedIdentity_t2695 * V_0 = {0};
	{
		ObjRef_t2684 * L_0 = ___objref;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		Identity_t2685 * L_2 = RemotingServices_GetIdentityForUri_m17071(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = ((ClientActivatedIdentity_t2695 *)IsInst(L_2, ClientActivatedIdentity_t2695_il2cpp_TypeInfo_var));
		ClientActivatedIdentity_t2695 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		ClientActivatedIdentity_t2695 * L_4 = V_0;
		NullCheck(L_4);
		MarshalByRefObject_t882 * L_5 = ClientActivatedIdentity_GetServerObject_m17091(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001b:
	{
		ObjRef_t2684 * L_6 = ___objref;
		Type_t * L_7 = ___classToProxy;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		Object_t * L_8 = RemotingServices_GetRemoteObject_m17078(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_GetRemoteObject_m17078 (Object_t * __this /* static, unused */, ObjRef_t2684 * ___objRef, Type_t * ___proxyType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		ObjRef_t2684 * L_0 = ___objRef;
		Type_t * L_1 = ___proxyType;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		RemotingServices_GetOrCreateClientIdentity_m17073(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		Object_t * L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
extern TypeInfo* CrossAppDomainChannel_t2712_il2cpp_TypeInfo_var;
extern "C" void RemotingServices_RegisterInternalChannels_m17079 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainChannel_t2712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5708);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainChannel_t2712_il2cpp_TypeInfo_var);
		CrossAppDomainChannel_RegisterCrossAppDomainChannel_m17121(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern TypeInfo* ClientIdentity_t2686_il2cpp_TypeInfo_var;
extern "C" void RemotingServices_DisposeIdentity_m17080 (Object_t * __this /* static, unused */, Identity_t2685 * ___ident, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		ClientIdentity_t2686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5703);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t915 * V_0 = {0};
	ClientIdentity_t2686 * V_1 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		Hashtable_t915 * L_0 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_0 = L_0;
		Hashtable_t915 * L_1 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			Identity_t2685 * L_2 = ___ident;
			NullCheck(L_2);
			bool L_3 = Identity_get_Disposed_m17024(L_2, /*hidden argument*/NULL);
			if (L_3)
			{
				goto IL_004c;
			}
		}

IL_0014:
		{
			Identity_t2685 * L_4 = ___ident;
			V_1 = ((ClientIdentity_t2686 *)IsInst(L_4, ClientIdentity_t2686_il2cpp_TypeInfo_var));
			ClientIdentity_t2686 * L_5 = V_1;
			if (!L_5)
			{
				goto IL_0035;
			}
		}

IL_001e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
			Hashtable_t915 * L_6 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			ClientIdentity_t2686 * L_7 = V_1;
			NullCheck(L_7);
			String_t* L_8 = ClientIdentity_get_TargetUri_m17030(L_7, /*hidden argument*/NULL);
			String_t* L_9 = RemotingServices_GetNormalizedUri_m17081(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			NullCheck(L_6);
			VirtActionInvoker1< Object_t * >::Invoke(31 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_6, L_9);
			goto IL_0045;
		}

IL_0035:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
			Hashtable_t915 * L_10 = ((RemotingServices_t2692_StaticFields*)RemotingServices_t2692_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			Identity_t2685 * L_11 = ___ident;
			NullCheck(L_11);
			String_t* L_12 = Identity_get_ObjectUri_m17021(L_11, /*hidden argument*/NULL);
			NullCheck(L_10);
			VirtActionInvoker1< Object_t * >::Invoke(31 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_10, L_12);
		}

IL_0045:
		{
			Identity_t2685 * L_13 = ___ident;
			NullCheck(L_13);
			Identity_set_Disposed_m17025(L_13, 1, /*hidden argument*/NULL);
		}

IL_004c:
		{
			IL2CPP_LEAVE(0x55, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		Hashtable_t915 * L_14 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(78)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0055:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.RemotingServices::GetNormalizedUri(System.String)
extern "C" String_t* RemotingServices_GetNormalizedUri_m17081 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method)
{
	{
		String_t* L_0 = ___uri;
		NullCheck(L_0);
		bool L_1 = String_StartsWith_m1347(L_0, (String_t*) &_stringLiteral73, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_2 = ___uri;
		NullCheck(L_2);
		String_t* L_3 = String_Substring_m3180(L_2, 1, /*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		String_t* L_4 = ___uri;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Lifetime.Lease
#include "mscorlib_System_Runtime_Remoting_Lifetime_Lease.h"
// System.Runtime.Remoting.Lifetime.LeaseState
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseState.h"
// System.Runtime.Remoting.TypeInfo
#include "mscorlib_System_Runtime_Remoting_TypeInfo.h"
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSi.h"
// System.Runtime.Remoting.Lifetime.Lease
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseMethodDeclarations.h"
// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServicesMethodDeclarations.h"
// System.Runtime.Remoting.TypeInfo
#include "mscorlib_System_Runtime_Remoting_TypeInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void ServerIdentity__ctor_m17082 (ServerIdentity_t2318 * __this, String_t* ___objectUri, Context_t2693 * ___context, Type_t * ___objectType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Identity__ctor_m17018(__this, L_0, /*hidden argument*/NULL);
		Type_t * L_1 = ___objectType;
		__this->____objectType_5 = L_1;
		Context_t2693 * L_2 = ___context;
		__this->____context_8 = L_2;
		return;
	}
}
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
extern "C" Type_t * ServerIdentity_get_ObjectType_m17083 (ServerIdentity_t2318 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____objectType_5);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ServerIdentity::StartTrackingLifetime(System.Runtime.Remoting.Lifetime.ILease)
extern TypeInfo* ILease_t2716_il2cpp_TypeInfo_var;
extern TypeInfo* Lease_t2694_il2cpp_TypeInfo_var;
extern TypeInfo* LifetimeServices_t2721_il2cpp_TypeInfo_var;
extern "C" void ServerIdentity_StartTrackingLifetime_m17084 (ServerIdentity_t2318 * __this, Object_t * ___lease, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILease_t2716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5696);
		Lease_t2694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5448);
		LifetimeServices_t2721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5709);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___lease;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Object_t * L_1 = ___lease;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.ILease::get_CurrentState() */, ILease_t2716_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		___lease = (Object_t *)NULL;
	}

IL_0010:
	{
		Object_t * L_3 = ___lease;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		Object_t * L_4 = ___lease;
		if (((Lease_t2694 *)IsInst(L_4, Lease_t2694_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		Lease_t2694 * L_5 = (Lease_t2694 *)il2cpp_codegen_object_new (Lease_t2694_il2cpp_TypeInfo_var);
		Lease__ctor_m17154(L_5, /*hidden argument*/NULL);
		___lease = L_5;
	}

IL_0024:
	{
		Object_t * L_6 = ___lease;
		__this->____lease_9 = ((Lease_t2694 *)Castclass(L_6, Lease_t2694_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t2721_il2cpp_TypeInfo_var);
		LifetimeServices_TrackLifetime_m17176(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ServerIdentity::OnLifetimeExpired()
extern "C" void ServerIdentity_OnLifetimeExpired_m17085 (ServerIdentity_t2318 * __this, const MethodInfo* method)
{
	{
		ServerIdentity_DisposeServerObject_m17089(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
extern TypeInfo* ObjRef_t2684_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInfo_t2698_il2cpp_TypeInfo_var;
extern TypeInfo* EnvoyTerminatorSink_t2732_il2cpp_TypeInfo_var;
extern TypeInfo* EnvoyInfo_t2683_il2cpp_TypeInfo_var;
extern "C" ObjRef_t2684 * ServerIdentity_CreateObjRef_m17086 (ServerIdentity_t2318 * __this, Type_t * ___requestedType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t2684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5684);
		TypeInfo_t2698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5710);
		EnvoyTerminatorSink_t2732_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5711);
		EnvoyInfo_t2683_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5712);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjRef_t2684 * L_0 = (((Identity_t2685 *)__this)->____objRef_3);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		ObjRef_t2684 * L_1 = (((Identity_t2685 *)__this)->____objRef_3);
		NullCheck(L_1);
		ObjRef_UpdateChannelInfo_m17044(L_1, /*hidden argument*/NULL);
		ObjRef_t2684 * L_2 = (((Identity_t2685 *)__this)->____objRef_3);
		return L_2;
	}

IL_001a:
	{
		Type_t * L_3 = ___requestedType;
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_4 = (__this->____objectType_5);
		___requestedType = L_4;
	}

IL_0027:
	{
		ObjRef_t2684 * L_5 = (ObjRef_t2684 *)il2cpp_codegen_object_new (ObjRef_t2684_il2cpp_TypeInfo_var);
		ObjRef__ctor_m17031(L_5, /*hidden argument*/NULL);
		((Identity_t2685 *)__this)->____objRef_3 = L_5;
		ObjRef_t2684 * L_6 = (((Identity_t2685 *)__this)->____objRef_3);
		Type_t * L_7 = ___requestedType;
		TypeInfo_t2698 * L_8 = (TypeInfo_t2698 *)il2cpp_codegen_object_new (TypeInfo_t2698_il2cpp_TypeInfo_var);
		TypeInfo__ctor_m17097(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo) */, L_6, L_8);
		ObjRef_t2684 * L_9 = (((Identity_t2685 *)__this)->____objRef_3);
		String_t* L_10 = (((Identity_t2685 *)__this)->____objectUri_0);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String) */, L_9, L_10);
		Object_t * L_11 = (((Identity_t2685 *)__this)->____envoySink_2);
		if (!L_11)
		{
			goto IL_007f;
		}
	}
	{
		Object_t * L_12 = (((Identity_t2685 *)__this)->____envoySink_2);
		if (((EnvoyTerminatorSink_t2732 *)IsInst(L_12, EnvoyTerminatorSink_t2732_il2cpp_TypeInfo_var)))
		{
			goto IL_007f;
		}
	}
	{
		ObjRef_t2684 * L_13 = (((Identity_t2685 *)__this)->____objRef_3);
		Object_t * L_14 = (((Identity_t2685 *)__this)->____envoySink_2);
		EnvoyInfo_t2683 * L_15 = (EnvoyInfo_t2683 *)il2cpp_codegen_object_new (EnvoyInfo_t2683_il2cpp_TypeInfo_var);
		EnvoyInfo__ctor_m17016(L_15, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< Object_t * >::Invoke(8 /* System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo) */, L_13, L_15);
	}

IL_007f:
	{
		ObjRef_t2684 * L_16 = (((Identity_t2685 *)__this)->____objRef_3);
		return L_16;
	}
}
// System.Void System.Runtime.Remoting.ServerIdentity::AttachServerObject(System.MarshalByRefObject,System.Runtime.Remoting.Contexts.Context)
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern "C" void ServerIdentity_AttachServerObject_m17087 (ServerIdentity_t2318 * __this, MarshalByRefObject_t882 * ___serverObject, Context_t2693 * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		s_Il2CppMethodIntialized = true;
	}
	RealProxy_t2747 * V_0 = {0};
	{
		ServerIdentity_DisposeServerObject_m17089(__this, /*hidden argument*/NULL);
		Context_t2693 * L_0 = ___context;
		__this->____context_8 = L_0;
		MarshalByRefObject_t882 * L_1 = ___serverObject;
		__this->____serverObject_6 = L_1;
		MarshalByRefObject_t882 * L_2 = ___serverObject;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		bool L_3 = RemotingServices_IsTransparentProxy_m17055(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		MarshalByRefObject_t882 * L_4 = ___serverObject;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		RealProxy_t2747 * L_5 = RemotingServices_GetRealProxy_m17062(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		RealProxy_t2747 * L_6 = V_0;
		NullCheck(L_6);
		Identity_t2685 * L_7 = RealProxy_get_ObjectIdentity_m17330(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		RealProxy_t2747 * L_8 = V_0;
		NullCheck(L_8);
		RealProxy_set_ObjectIdentity_m17331(L_8, __this, /*hidden argument*/NULL);
	}

IL_0032:
	{
		goto IL_005a;
	}

IL_0034:
	{
		Type_t * L_9 = (__this->____objectType_5);
		NullCheck(L_9);
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_9);
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		Context_t2693 * L_11 = ___context;
		MarshalByRefObject_t882 * L_12 = ___serverObject;
		NullCheck(L_11);
		Object_t * L_13 = Context_CreateEnvoySink_m17134(L_11, L_12, /*hidden argument*/NULL);
		((Identity_t2685 *)__this)->____envoySink_2 = L_13;
	}

IL_004e:
	{
		MarshalByRefObject_t882 * L_14 = (__this->____serverObject_6);
		NullCheck(L_14);
		MarshalByRefObject_set_ObjectIdentity_m13826(L_14, __this, /*hidden argument*/NULL);
	}

IL_005a:
	{
		return;
	}
}
// System.Runtime.Remoting.Lifetime.Lease System.Runtime.Remoting.ServerIdentity::get_Lease()
extern "C" Lease_t2694 * ServerIdentity_get_Lease_m17088 (ServerIdentity_t2318 * __this, const MethodInfo* method)
{
	{
		Lease_t2694 * L_0 = (__this->____lease_9);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ServerIdentity::DisposeServerObject()
extern TypeInfo* TrackingServices_t2751_il2cpp_TypeInfo_var;
extern "C" void ServerIdentity_DisposeServerObject_m17089 (ServerIdentity_t2318 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TrackingServices_t2751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5694);
		s_Il2CppMethodIntialized = true;
	}
	MarshalByRefObject_t882 * V_0 = {0};
	{
		MarshalByRefObject_t882 * L_0 = (__this->____serverObject_6);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		MarshalByRefObject_t882 * L_1 = (__this->____serverObject_6);
		V_0 = L_1;
		MarshalByRefObject_t882 * L_2 = (__this->____serverObject_6);
		NullCheck(L_2);
		MarshalByRefObject_set_ObjectIdentity_m13826(L_2, (ServerIdentity_t2318 *)NULL, /*hidden argument*/NULL);
		__this->____serverObject_6 = (MarshalByRefObject_t882 *)NULL;
		__this->____serverSink_7 = (Object_t *)NULL;
		MarshalByRefObject_t882 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t2751_il2cpp_TypeInfo_var);
		TrackingServices_NotifyDisconnectedObject_m17347(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.ClientActivatedIdentity::.ctor(System.String,System.Type)
extern "C" void ClientActivatedIdentity__ctor_m17090 (ClientActivatedIdentity_t2695 * __this, String_t* ___objectUri, Type_t * ___objectType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Type_t * L_1 = ___objectType;
		ServerIdentity__ctor_m17082(__this, L_0, (Context_t2693 *)NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.MarshalByRefObject System.Runtime.Remoting.ClientActivatedIdentity::GetServerObject()
extern "C" MarshalByRefObject_t882 * ClientActivatedIdentity_GetServerObject_m17091 (ClientActivatedIdentity_t2695 * __this, const MethodInfo* method)
{
	{
		MarshalByRefObject_t882 * L_0 = (((ServerIdentity_t2318 *)__this)->____serverObject_6);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ClientActivatedIdentity::OnLifetimeExpired()
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern "C" void ClientActivatedIdentity_OnLifetimeExpired_m17092 (ClientActivatedIdentity_t2695 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		s_Il2CppMethodIntialized = true;
	}
	{
		ServerIdentity_OnLifetimeExpired_m17085(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		RemotingServices_DisposeIdentity_m17080(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.SingletonIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void SingletonIdentity__ctor_m17093 (SingletonIdentity_t2696 * __this, String_t* ___objectUri, Context_t2693 * ___context, Type_t * ___objectType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Context_t2693 * L_1 = ___context;
		Type_t * L_2 = ___objectType;
		ServerIdentity__ctor_m17082(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.SingleCallIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void SingleCallIdentity__ctor_m17094 (SingleCallIdentity_t2697 * __this, String_t* ___objectUri, Context_t2693 * ___context, Type_t * ___objectType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Context_t2693 * L_1 = ___context;
		Type_t * L_2 = ___objectType;
		ServerIdentity__ctor_m17082(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntry.h"
#ifndef _MSC_VER
#else
#endif



// System.String System.Runtime.Remoting.TypeEntry::get_AssemblyName()
extern "C" String_t* TypeEntry_get_AssemblyName_m17095 (TypeEntry_t2682 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___assembly_name_0);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.TypeEntry::get_TypeName()
extern "C" String_t* TypeEntry_get_TypeName_m17096 (TypeEntry_t2682 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___type_name_1);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.TypeInfo::.ctor(System.Type)
extern const Il2CppType* MarshalByRefObject_t882_0_0_0_var;
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t258_il2cpp_TypeInfo_var;
extern "C" void TypeInfo__ctor_m17097 (TypeInfo_t2698 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t882_0_0_0_var = il2cpp_codegen_type_from_index(2117);
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		StringU5BU5D_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = {0};
	int32_t V_2 = 0;
	TypeU5BU5D_t570* V_3 = {0};
	int32_t V_4 = 0;
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_0);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t882_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___serverType_0 = L_3;
		__this->___serverHierarchy_1 = ((StringU5BU5D_t258*)SZArrayNew(StringU5BU5D_t258_il2cpp_TypeInfo_var, 0));
		StringU5BU5D_t258* L_4 = ((StringU5BU5D_t258*)SZArrayNew(StringU5BU5D_t258_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = ___type;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_6);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 0)) = (String_t*)L_6;
		__this->___interfacesImplemented_2 = L_4;
		goto IL_00f2;
	}

IL_0049:
	{
		Type_t * L_7 = ___type;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_7);
		__this->___serverType_0 = L_8;
		V_0 = 0;
		Type_t * L_9 = ___type;
		NullCheck(L_9);
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_9);
		V_1 = L_10;
		goto IL_006b;
	}

IL_0060:
	{
		Type_t * L_11 = V_1;
		NullCheck(L_11);
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_11);
		V_1 = L_12;
		int32_t L_13 = V_0;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_006b:
	{
		Type_t * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t882_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_14) == ((Object_t*)(Type_t *)L_15)))
		{
			goto IL_0085;
		}
	}
	{
		Type_t * L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)L_17))))
		{
			goto IL_0060;
		}
	}

IL_0085:
	{
		int32_t L_18 = V_0;
		__this->___serverHierarchy_1 = ((StringU5BU5D_t258*)SZArrayNew(StringU5BU5D_t258_il2cpp_TypeInfo_var, L_18));
		Type_t * L_19 = ___type;
		NullCheck(L_19);
		Type_t * L_20 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_19);
		V_1 = L_20;
		V_2 = 0;
		goto IL_00b5;
	}

IL_009c:
	{
		StringU5BU5D_t258* L_21 = (__this->___serverHierarchy_1);
		int32_t L_22 = V_2;
		Type_t * L_23 = V_1;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		ArrayElementTypeCheck (L_21, L_24);
		*((String_t**)(String_t**)SZArrayLdElema(L_21, L_22)) = (String_t*)L_24;
		Type_t * L_25 = V_1;
		NullCheck(L_25);
		Type_t * L_26 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_25);
		V_1 = L_26;
		int32_t L_27 = V_2;
		V_2 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_00b5:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_009c;
		}
	}
	{
		Type_t * L_30 = ___type;
		NullCheck(L_30);
		TypeU5BU5D_t570* L_31 = (TypeU5BU5D_t570*)VirtFuncInvoker0< TypeU5BU5D_t570* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_30);
		V_3 = L_31;
		TypeU5BU5D_t570* L_32 = V_3;
		NullCheck(L_32);
		__this->___interfacesImplemented_2 = ((StringU5BU5D_t258*)SZArrayNew(StringU5BU5D_t258_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_32)->max_length)))));
		V_4 = 0;
		goto IL_00eb;
	}

IL_00d3:
	{
		StringU5BU5D_t258* L_33 = (__this->___interfacesImplemented_2);
		int32_t L_34 = V_4;
		TypeU5BU5D_t570* L_35 = V_3;
		int32_t L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		int32_t L_37 = L_36;
		NullCheck((*(Type_t **)(Type_t **)SZArrayLdElema(L_35, L_37)));
		String_t* L_38 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, (*(Type_t **)(Type_t **)SZArrayLdElema(L_35, L_37)));
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		ArrayElementTypeCheck (L_33, L_38);
		*((String_t**)(String_t**)SZArrayLdElema(L_33, L_34)) = (String_t*)L_38;
		int32_t L_39 = V_4;
		V_4 = ((int32_t)((int32_t)L_39+(int32_t)1));
	}

IL_00eb:
	{
		int32_t L_40 = V_4;
		TypeU5BU5D_t570* L_41 = V_3;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)(((Array_t *)L_41)->max_length))))))
		{
			goto IL_00d3;
		}
	}

IL_00f2:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.TypeInfo::get_TypeName()
extern "C" String_t* TypeInfo_get_TypeName_m17098 (TypeInfo_t2698 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___serverType_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectModeMethodDeclarations.h"



// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServic.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServicMethodDeclarations.h"

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeve.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttribute.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCall.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAc.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActi.h"
// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeveMethodDeclarations.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttributeMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallMethodDeclarations.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAcMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActiMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"


// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::get_ConstructionActivator()
extern TypeInfo* ActivationServices_t2701_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructionLevelActivator_t2703_il2cpp_TypeInfo_var;
extern "C" Object_t * ActivationServices_get_ConstructionActivator_m17099 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ActivationServices_t2701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5713);
		ConstructionLevelActivator_t2703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5714);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ((ActivationServices_t2701_StaticFields*)ActivationServices_t2701_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ConstructionLevelActivator_t2703 * L_1 = (ConstructionLevelActivator_t2703 *)il2cpp_codegen_object_new (ConstructionLevelActivator_t2703_il2cpp_TypeInfo_var);
		ConstructionLevelActivator__ctor_m17104(L_1, /*hidden argument*/NULL);
		((ActivationServices_t2701_StaticFields*)ActivationServices_t2701_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0 = L_1;
	}

IL_0011:
	{
		Object_t * L_2 = ((ActivationServices_t2701_StaticFields*)ActivationServices_t2701_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0;
		return L_2;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::CreateProxyFromAttributes(System.Type,System.Object[])
extern TypeInfo* IContextAttribute_t3010_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t2691_il2cpp_TypeInfo_var;
extern TypeInfo* UrlAttribute_t2706_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t2690_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern "C" Object_t * ActivationServices_CreateProxyFromAttributes_m17100 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t300* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IContextAttribute_t3010_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5715);
		RemotingException_t2691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5447);
		UrlAttribute_t2706_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5716);
		RemotingConfiguration_t2690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5688);
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	ObjectU5BU5D_t300* V_2 = {0};
	int32_t V_3 = 0;
	ActivatedClientTypeEntry_t2681 * V_4 = {0};
	{
		V_0 = (String_t*)NULL;
		ObjectU5BU5D_t300* L_0 = ___activationAttributes;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0037;
	}

IL_0008:
	{
		ObjectU5BU5D_t300* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_1, L_3));
		Object_t * L_4 = V_1;
		if (((Object_t *)IsInst(L_4, IContextAttribute_t3010_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		RemotingException_t2691 * L_5 = (RemotingException_t2691 *)il2cpp_codegen_object_new (RemotingException_t2691_il2cpp_TypeInfo_var);
		RemotingException__ctor_m17051(L_5, (String_t*) &_stringLiteral4999, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001f:
	{
		Object_t * L_6 = V_1;
		if (!((UrlAttribute_t2706 *)IsInst(L_6, UrlAttribute_t2706_il2cpp_TypeInfo_var)))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_7 = V_1;
		NullCheck(((UrlAttribute_t2706 *)Castclass(L_7, UrlAttribute_t2706_il2cpp_TypeInfo_var)));
		String_t* L_8 = UrlAttribute_get_UrlValue_m17107(((UrlAttribute_t2706 *)Castclass(L_7, UrlAttribute_t2706_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0033:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_10 = V_3;
		ObjectU5BU5D_t300* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_0008;
		}
	}
	{
		String_t* L_12 = V_0;
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		Type_t * L_13 = ___type;
		String_t* L_14 = V_0;
		ObjectU5BU5D_t300* L_15 = ___activationAttributes;
		Object_t * L_16 = RemotingServices_CreateClientProxy_m10057(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0049:
	{
		Type_t * L_17 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t2690_il2cpp_TypeInfo_var);
		ActivatedClientTypeEntry_t2681 * L_18 = RemotingConfiguration_IsRemotelyActivatedClientType_m17049(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		ActivatedClientTypeEntry_t2681 * L_19 = V_4;
		if (!L_19)
		{
			goto IL_005e;
		}
	}
	{
		ActivatedClientTypeEntry_t2681 * L_20 = V_4;
		ObjectU5BU5D_t300* L_21 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		Object_t * L_22 = RemotingServices_CreateClientProxy_m17069(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}

IL_005e:
	{
		Type_t * L_23 = ___type;
		NullCheck(L_23);
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_23);
		if (!L_24)
		{
			goto IL_006e;
		}
	}
	{
		Type_t * L_25 = ___type;
		ObjectU5BU5D_t300* L_26 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		Object_t * L_27 = RemotingServices_CreateClientProxyForContextBound_m17070(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_006e:
	{
		return NULL;
	}
}
// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Activation.ActivationServices::CreateConstructionCall(System.Type,System.String,System.Object[])
extern TypeInfo* ConstructionCall_t2728_il2cpp_TypeInfo_var;
extern TypeInfo* AppDomainLevelActivator_t2702_il2cpp_TypeInfo_var;
extern TypeInfo* ContextLevelActivator_t2704_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t2710_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* IContextAttribute_t3010_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" ConstructionCall_t2728 * ActivationServices_CreateConstructionCall_m17101 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t300* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCall_t2728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5717);
		AppDomainLevelActivator_t2702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5718);
		ContextLevelActivator_t2704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5719);
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		ChannelServices_t2710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5700);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		IContextAttribute_t3010_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5715);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	ConstructionCall_t2728 * V_0 = {0};
	Object_t * V_1 = {0};
	ArrayList_t913 * V_2 = {0};
	bool V_3 = false;
	Context_t2693 * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	ObjectU5BU5D_t300* V_7 = {0};
	Object_t * V_8 = {0};
	ObjectU5BU5D_t300* V_9 = {0};
	int32_t V_10 = 0;
	Object_t * V_11 = {0};
	Object_t * V_12 = {0};
	Object_t * V_13 = {0};
	Object_t * V_14 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B19_0 = 0;
	{
		Type_t * L_0 = ___type;
		ConstructionCall_t2728 * L_1 = (ConstructionCall_t2728 *)il2cpp_codegen_object_new (ConstructionCall_t2728_il2cpp_TypeInfo_var);
		ConstructionCall__ctor_m17197(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_2);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ConstructionCall_t2728 * L_4 = V_0;
		String_t* L_5 = ___activationUrl;
		Object_t * L_6 = ActivationServices_get_ConstructionActivator_m17099(NULL /*static, unused*/, /*hidden argument*/NULL);
		AppDomainLevelActivator_t2702 * L_7 = (AppDomainLevelActivator_t2702 *)il2cpp_codegen_object_new (AppDomainLevelActivator_t2702_il2cpp_TypeInfo_var);
		AppDomainLevelActivator__ctor_m17103(L_7, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< Object_t * >::Invoke(25 /* System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, L_4, L_7);
		ConstructionCall_t2728 * L_8 = V_0;
		NullCheck(L_8);
		ConstructionCall_set_IsContextOk_m17200(L_8, 0, /*hidden argument*/NULL);
		ConstructionCall_t2728 * L_9 = V_0;
		return L_9;
	}

IL_0029:
	{
		Object_t * L_10 = ActivationServices_get_ConstructionActivator_m17099(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_10;
		Object_t * L_11 = V_1;
		ContextLevelActivator_t2704 * L_12 = (ContextLevelActivator_t2704 *)il2cpp_codegen_object_new (ContextLevelActivator_t2704_il2cpp_TypeInfo_var);
		ContextLevelActivator__ctor_m17105(L_12, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		ArrayList_t913 * L_13 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_13, /*hidden argument*/NULL);
		V_2 = L_13;
		ObjectU5BU5D_t300* L_14 = ___activationAttributes;
		if (!L_14)
		{
			goto IL_0046;
		}
	}
	{
		ArrayList_t913 * L_15 = V_2;
		ObjectU5BU5D_t300* L_16 = ___activationAttributes;
		NullCheck(L_15);
		VirtActionInvoker1< Object_t * >::Invoke(40 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_15, (Object_t *)(Object_t *)L_16);
	}

IL_0046:
	{
		String_t* L_17 = ___activationUrl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t2710_il2cpp_TypeInfo_var);
		String_t* L_18 = ((ChannelServices_t2710_StaticFields*)ChannelServices_t2710_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m1295(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		Context_t2693 * L_20 = Thread_get_CurrentContext_m18784(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		ArrayList_t913 * L_22 = V_2;
		NullCheck(L_22);
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_22);
		V_6 = L_23;
	}

IL_0064:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0084;
		}

IL_0066:
		{
			Object_t * L_24 = V_6;
			NullCheck(L_24);
			Object_t * L_25 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_24);
			V_5 = ((Object_t *)Castclass(L_25, IContextAttribute_t3010_il2cpp_TypeInfo_var));
			Object_t * L_26 = V_5;
			Context_t2693 * L_27 = V_4;
			ConstructionCall_t2728 * L_28 = V_0;
			NullCheck(L_26);
			bool L_29 = (bool)InterfaceFuncInvoker2< bool, Context_t2693 *, Object_t * >::Invoke(1 /* System.Boolean System.Runtime.Remoting.Contexts.IContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t3010_il2cpp_TypeInfo_var, L_26, L_27, L_28);
			if (L_29)
			{
				goto IL_0084;
			}
		}

IL_0080:
		{
			V_3 = 0;
			goto IL_008d;
		}

IL_0084:
		{
			Object_t * L_30 = V_6;
			NullCheck(L_30);
			bool L_31 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_30);
			if (L_31)
			{
				goto IL_0066;
			}
		}

IL_008d:
		{
			IL2CPP_LEAVE(0xA5, FINALLY_008f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_008f;
	}

FINALLY_008f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_32 = V_6;
			V_13 = ((Object_t *)IsInst(L_32, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_33 = V_13;
			if (L_33)
			{
				goto IL_009d;
			}
		}

IL_009c:
		{
			IL2CPP_END_FINALLY(143)
		}

IL_009d:
		{
			Object_t * L_34 = V_13;
			NullCheck(L_34);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_34);
			IL2CPP_END_FINALLY(143)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(143)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_00a5:
	{
		Type_t * L_35 = ___type;
		NullCheck(L_35);
		ObjectU5BU5D_t300* L_36 = (ObjectU5BU5D_t300*)VirtFuncInvoker1< ObjectU5BU5D_t300*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_35, 1);
		V_7 = L_36;
		ObjectU5BU5D_t300* L_37 = V_7;
		V_9 = L_37;
		V_10 = 0;
		goto IL_00ec;
	}

IL_00b7:
	{
		ObjectU5BU5D_t300* L_38 = V_9;
		int32_t L_39 = V_10;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = L_39;
		V_8 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_38, L_40));
		Object_t * L_41 = V_8;
		if (!((Object_t *)IsInst(L_41, IContextAttribute_t3010_il2cpp_TypeInfo_var)))
		{
			goto IL_00e6;
		}
	}
	{
		bool L_42 = V_3;
		if (!L_42)
		{
			goto IL_00db;
		}
	}
	{
		Object_t * L_43 = V_8;
		Context_t2693 * L_44 = V_4;
		ConstructionCall_t2728 * L_45 = V_0;
		NullCheck(((Object_t *)Castclass(L_43, IContextAttribute_t3010_il2cpp_TypeInfo_var)));
		bool L_46 = (bool)InterfaceFuncInvoker2< bool, Context_t2693 *, Object_t * >::Invoke(1 /* System.Boolean System.Runtime.Remoting.Contexts.IContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t3010_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_43, IContextAttribute_t3010_il2cpp_TypeInfo_var)), L_44, L_45);
		G_B19_0 = ((int32_t)(L_46));
		goto IL_00dc;
	}

IL_00db:
	{
		G_B19_0 = 0;
	}

IL_00dc:
	{
		V_3 = G_B19_0;
		ArrayList_t913 * L_47 = V_2;
		Object_t * L_48 = V_8;
		NullCheck(L_47);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_47, L_48);
	}

IL_00e6:
	{
		int32_t L_49 = V_10;
		V_10 = ((int32_t)((int32_t)L_49+(int32_t)1));
	}

IL_00ec:
	{
		int32_t L_50 = V_10;
		ObjectU5BU5D_t300* L_51 = V_9;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)(((Array_t *)L_51)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		bool L_52 = V_3;
		if (L_52)
		{
			goto IL_0144;
		}
	}
	{
		ConstructionCall_t2728 * L_53 = V_0;
		ArrayList_t913 * L_54 = V_2;
		NullCheck(L_54);
		ObjectU5BU5D_t300* L_55 = (ObjectU5BU5D_t300*)VirtFuncInvoker0< ObjectU5BU5D_t300* >::Invoke(43 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_54);
		NullCheck(L_53);
		ConstructionCall_SetActivationAttributes_m17206(L_53, L_55, /*hidden argument*/NULL);
		ArrayList_t913 * L_56 = V_2;
		NullCheck(L_56);
		Object_t * L_57 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_56);
		V_12 = L_57;
	}

IL_010b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0123;
		}

IL_010d:
		{
			Object_t * L_58 = V_12;
			NullCheck(L_58);
			Object_t * L_59 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_58);
			V_11 = ((Object_t *)Castclass(L_59, IContextAttribute_t3010_il2cpp_TypeInfo_var));
			Object_t * L_60 = V_11;
			ConstructionCall_t2728 * L_61 = V_0;
			NullCheck(L_60);
			InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Remoting.Contexts.IContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t3010_il2cpp_TypeInfo_var, L_60, L_61);
		}

IL_0123:
		{
			Object_t * L_62 = V_12;
			NullCheck(L_62);
			bool L_63 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_62);
			if (L_63)
			{
				goto IL_010d;
			}
		}

IL_012c:
		{
			IL2CPP_LEAVE(0x144, FINALLY_012e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_012e;
	}

FINALLY_012e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_64 = V_12;
			V_14 = ((Object_t *)IsInst(L_64, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_65 = V_14;
			if (L_65)
			{
				goto IL_013c;
			}
		}

IL_013b:
		{
			IL2CPP_END_FINALLY(302)
		}

IL_013c:
		{
			Object_t * L_66 = V_14;
			NullCheck(L_66);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_66);
			IL2CPP_END_FINALLY(302)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(302)
	{
		IL2CPP_JUMP_TBL(0x144, IL_0144)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0144:
	{
		String_t* L_67 = ___activationUrl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t2710_il2cpp_TypeInfo_var);
		String_t* L_68 = ((ChannelServices_t2710_StaticFields*)ChannelServices_t2710_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_69 = String_op_Inequality_m1484(NULL /*static, unused*/, L_67, L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_0159;
		}
	}
	{
		String_t* L_70 = ___activationUrl;
		Object_t * L_71 = V_1;
		AppDomainLevelActivator_t2702 * L_72 = (AppDomainLevelActivator_t2702 *)il2cpp_codegen_object_new (AppDomainLevelActivator_t2702_il2cpp_TypeInfo_var);
		AppDomainLevelActivator__ctor_m17103(L_72, L_70, L_71, /*hidden argument*/NULL);
		V_1 = L_72;
	}

IL_0159:
	{
		ConstructionCall_t2728 * L_73 = V_0;
		Object_t * L_74 = V_1;
		NullCheck(L_73);
		VirtActionInvoker1< Object_t * >::Invoke(25 /* System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, L_73, L_74);
		ConstructionCall_t2728 * L_75 = V_0;
		bool L_76 = V_3;
		NullCheck(L_75);
		ConstructionCall_set_IsContextOk_m17200(L_75, L_76, /*hidden argument*/NULL);
		ConstructionCall_t2728 * L_77 = V_0;
		return L_77;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)
extern "C" Object_t * ActivationServices_AllocateUninitializedClassInstance_m17102 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	typedef Object_t * (*ActivationServices_AllocateUninitializedClassInstance_m17102_ftn) (Type_t *);
	static ActivationServices_AllocateUninitializedClassInstance_m17102_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ActivationServices_AllocateUninitializedClassInstance_m17102_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)");
	return _il2cpp_icall_func(___type);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.AppDomainLevelActivator::.ctor(System.String,System.Runtime.Remoting.Activation.IActivator)
extern "C" void AppDomainLevelActivator__ctor_m17103 (AppDomainLevelActivator_t2702 * __this, String_t* ___activationUrl, Object_t * ___next, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___activationUrl;
		__this->____activationUrl_0 = L_0;
		Object_t * L_1 = ___next;
		__this->____next_1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.ConstructionLevelActivator::.ctor()
extern "C" void ConstructionLevelActivator__ctor_m17104 (ConstructionLevelActivator_t2703 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.ContextLevelActivator::.ctor(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ContextLevelActivator__ctor_m17105 (ContextLevelActivator_t2704 * __this, Object_t * ___next, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___next;
		__this->___m_NextActivator_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivator.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivatorMethodDeclarations.h"

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"


// System.Object System.Runtime.Remoting.Activation.RemoteActivator::InitializeLifetimeService()
extern TypeInfo* ILease_t2716_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t1129_il2cpp_TypeInfo_var;
extern "C" Object_t * RemoteActivator_InitializeLifetimeService_m17106 (RemoteActivator_t2705 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILease_t2716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5696);
		TimeSpan_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1959);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = MarshalByRefObject_InitializeLifetimeService_m5366(__this, /*hidden argument*/NULL);
		V_0 = ((Object_t *)Castclass(L_0, ILease_t2716_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.ILease::get_CurrentState() */, ILease_t2716_il2cpp_TypeInfo_var, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0051;
		}
	}
	{
		Object_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1129_il2cpp_TypeInfo_var);
		TimeSpan_t1129  L_4 = TimeSpan_FromMinutes_m15268(NULL /*static, unused*/, (30.0), /*hidden argument*/NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< TimeSpan_t1129  >::Invoke(1 /* System.Void System.Runtime.Remoting.Lifetime.ILease::set_InitialLeaseTime(System.TimeSpan) */, ILease_t2716_il2cpp_TypeInfo_var, L_3, L_4);
		Object_t * L_5 = V_0;
		TimeSpan_t1129  L_6 = TimeSpan_FromMinutes_m15268(NULL /*static, unused*/, (1.0), /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< TimeSpan_t1129  >::Invoke(3 /* System.Void System.Runtime.Remoting.Lifetime.ILease::set_SponsorshipTimeout(System.TimeSpan) */, ILease_t2716_il2cpp_TypeInfo_var, L_5, L_6);
		Object_t * L_7 = V_0;
		TimeSpan_t1129  L_8 = TimeSpan_FromMinutes_m15268(NULL /*static, unused*/, (10.0), /*hidden argument*/NULL);
		NullCheck(L_7);
		InterfaceActionInvoker1< TimeSpan_t1129  >::Invoke(2 /* System.Void System.Runtime.Remoting.Lifetime.ILease::set_RenewOnCallTime(System.TimeSpan) */, ILease_t2716_il2cpp_TypeInfo_var, L_7, L_8);
	}

IL_0051:
	{
		Object_t * L_9 = V_0;
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.String System.Runtime.Remoting.Activation.UrlAttribute::get_UrlValue()
extern "C" String_t* UrlAttribute_get_UrlValue_m17107 (UrlAttribute_t2706 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::Equals(System.Object)
extern TypeInfo* UrlAttribute_t2706_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool UrlAttribute_Equals_m17108 (UrlAttribute_t2706 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UrlAttribute_t2706_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5716);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		if (((UrlAttribute_t2706 *)IsInst(L_0, UrlAttribute_t2706_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		Object_t * L_1 = ___o;
		NullCheck(((UrlAttribute_t2706 *)Castclass(L_1, UrlAttribute_t2706_il2cpp_TypeInfo_var)));
		String_t* L_2 = UrlAttribute_get_UrlValue_m17107(((UrlAttribute_t2706 *)Castclass(L_1, UrlAttribute_t2706_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_3 = (__this->___url_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1295(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.Runtime.Remoting.Activation.UrlAttribute::GetHashCode()
extern "C" int32_t UrlAttribute_GetHashCode_m17109 (UrlAttribute_t2706 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Activation.UrlAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void UrlAttribute_GetPropertiesForNewContext_m17110 (UrlAttribute_t2706 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool UrlAttribute_IsContextOK_m17111 (UrlAttribute_t2706 * __this, Context_t2693 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.ChannelInfo::.ctor()
extern TypeInfo* ChannelServices_t2710_il2cpp_TypeInfo_var;
extern "C" void ChannelInfo__ctor_m17112 (ChannelInfo_t2708 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t2710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5700);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t2710_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t300* L_0 = ChannelServices_GetCurrentChannelInfo_m17117(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___channelData_0 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.ChannelInfo::get_ChannelData()
extern "C" ObjectU5BU5D_t300* ChannelInfo_get_ChannelData_m17113 (ChannelInfo_t2708 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t300* L_0 = (__this->___channelData_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanne.h"
// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanneMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t2710_il2cpp_TypeInfo_var;
extern TypeInfo* CrossContextChannel_t2709_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t258_il2cpp_TypeInfo_var;
extern "C" void ChannelServices__cctor_m17114 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		ChannelServices_t2710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5700);
		CrossContextChannel_t2709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5720);
		StringU5BU5D_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t913 * L_0 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_0, /*hidden argument*/NULL);
		((ChannelServices_t2710_StaticFields*)ChannelServices_t2710_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0 = L_0;
		ArrayList_t913 * L_1 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_1, /*hidden argument*/NULL);
		((ChannelServices_t2710_StaticFields*)ChannelServices_t2710_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1 = L_1;
		CrossContextChannel_t2709 * L_2 = (CrossContextChannel_t2709 *)il2cpp_codegen_object_new (CrossContextChannel_t2709_il2cpp_TypeInfo_var);
		CrossContextChannel__ctor_m17141(L_2, /*hidden argument*/NULL);
		((ChannelServices_t2710_StaticFields*)ChannelServices_t2710_il2cpp_TypeInfo_var->static_fields)->____crossContextSink_2 = L_2;
		((ChannelServices_t2710_StaticFields*)ChannelServices_t2710_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3 = (String_t*) &_stringLiteral5000;
		StringU5BU5D_t258* L_3 = ((StringU5BU5D_t258*)SZArrayNew(StringU5BU5D_t258_il2cpp_TypeInfo_var, 2));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral5001);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 0)) = (String_t*)(String_t*) &_stringLiteral5001;
		StringU5BU5D_t258* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral5002);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 1)) = (String_t*)(String_t*) &_stringLiteral5002;
		((ChannelServices_t2710_StaticFields*)ChannelServices_t2710_il2cpp_TypeInfo_var->static_fields)->___oldStartModeTypes_4 = (Object_t *)L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
extern TypeInfo* ChannelServices_t2710_il2cpp_TypeInfo_var;
extern "C" void ChannelServices_RegisterChannel_m17115 (Object_t * __this /* static, unused */, Object_t * ___chnl, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t2710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5700);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___chnl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t2710_il2cpp_TypeInfo_var);
		ChannelServices_RegisterChannel_m17116(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ISecurableChannel_t3011_il2cpp_TypeInfo_var;
extern TypeInfo* IChannel_t2999_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t2691_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t2710_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t3012_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t794_il2cpp_TypeInfo_var;
extern "C" void ChannelServices_RegisterChannel_m17116 (Object_t * __this /* static, unused */, Object_t * ___chnl, bool ___ensureSecurity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ISecurableChannel_t3011_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5721);
		IChannel_t2999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5722);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		RemotingException_t2691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5447);
		ChannelServices_t2710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5700);
		IChannelReceiver_t3012_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5723);
		IList_t794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1549);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___chnl;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5003, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		bool L_2 = ___ensureSecurity;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		Object_t * L_3 = ___chnl;
		V_1 = ((Object_t *)IsInst(L_3, ISecurableChannel_t3011_il2cpp_TypeInfo_var));
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		Object_t * L_5 = ___chnl;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t2999_il2cpp_TypeInfo_var, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral5004, L_6, /*hidden argument*/NULL);
		RemotingException_t2691 * L_8 = (RemotingException_t2691 *)il2cpp_codegen_object_new (RemotingException_t2691_il2cpp_TypeInfo_var);
		RemotingException__ctor_m17051(L_8, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0031:
	{
		Object_t * L_9 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void System.Runtime.Remoting.Channels.ISecurableChannel::set_IsSecured(System.Boolean) */, ISecurableChannel_t3011_il2cpp_TypeInfo_var, L_9, 1);
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t2710_il2cpp_TypeInfo_var);
		ArrayList_t913 * L_10 = ((ChannelServices_t2710_StaticFields*)ChannelServices_t2710_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(25 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_10);
		V_0 = L_11;
		Object_t * L_12 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			V_2 = (-1);
			V_3 = 0;
			goto IL_00bc;
		}

IL_004f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t2710_il2cpp_TypeInfo_var);
			ArrayList_t913 * L_13 = ((ChannelServices_t2710_StaticFields*)ChannelServices_t2710_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			int32_t L_14 = V_3;
			NullCheck(L_13);
			Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_13, L_14);
			V_4 = ((Object_t *)Castclass(L_15, IChannel_t2999_il2cpp_TypeInfo_var));
			Object_t * L_16 = V_4;
			NullCheck(L_16);
			String_t* L_17 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t2999_il2cpp_TypeInfo_var, L_16);
			Object_t * L_18 = ___chnl;
			NullCheck(L_18);
			String_t* L_19 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t2999_il2cpp_TypeInfo_var, L_18);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_20 = String_op_Equality_m1295(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_00a3;
			}
		}

IL_0075:
		{
			Object_t * L_21 = ___chnl;
			NullCheck(L_21);
			String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t2999_il2cpp_TypeInfo_var, L_21);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
			bool L_24 = String_op_Inequality_m1484(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00a3;
			}
		}

IL_0087:
		{
			Object_t * L_25 = V_4;
			NullCheck(L_25);
			String_t* L_26 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t2999_il2cpp_TypeInfo_var, L_25);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_27 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral5005, L_26, (String_t*) &_stringLiteral5006, /*hidden argument*/NULL);
			RemotingException_t2691 * L_28 = (RemotingException_t2691 *)il2cpp_codegen_object_new (RemotingException_t2691_il2cpp_TypeInfo_var);
			RemotingException__ctor_m17051(L_28, L_27, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_28);
		}

IL_00a3:
		{
			Object_t * L_29 = V_4;
			NullCheck(L_29);
			int32_t L_30 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Runtime.Remoting.Channels.IChannel::get_ChannelPriority() */, IChannel_t2999_il2cpp_TypeInfo_var, L_29);
			Object_t * L_31 = ___chnl;
			NullCheck(L_31);
			int32_t L_32 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Runtime.Remoting.Channels.IChannel::get_ChannelPriority() */, IChannel_t2999_il2cpp_TypeInfo_var, L_31);
			if ((((int32_t)L_30) >= ((int32_t)L_32)))
			{
				goto IL_00b8;
			}
		}

IL_00b2:
		{
			int32_t L_33 = V_2;
			if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
			{
				goto IL_00b8;
			}
		}

IL_00b6:
		{
			int32_t L_34 = V_3;
			V_2 = L_34;
		}

IL_00b8:
		{
			int32_t L_35 = V_3;
			V_3 = ((int32_t)((int32_t)L_35+(int32_t)1));
		}

IL_00bc:
		{
			int32_t L_36 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t2710_il2cpp_TypeInfo_var);
			ArrayList_t913 * L_37 = ((ChannelServices_t2710_StaticFields*)ChannelServices_t2710_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_37);
			int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_37);
			if ((((int32_t)L_36) < ((int32_t)L_38)))
			{
				goto IL_004f;
			}
		}

IL_00c9:
		{
			int32_t L_39 = V_2;
			if ((((int32_t)L_39) == ((int32_t)(-1))))
			{
				goto IL_00db;
			}
		}

IL_00cd:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t2710_il2cpp_TypeInfo_var);
			ArrayList_t913 * L_40 = ((ChannelServices_t2710_StaticFields*)ChannelServices_t2710_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			int32_t L_41 = V_2;
			Object_t * L_42 = ___chnl;
			NullCheck(L_40);
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(32 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_40, L_41, L_42);
			goto IL_00e7;
		}

IL_00db:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t2710_il2cpp_TypeInfo_var);
			ArrayList_t913 * L_43 = ((ChannelServices_t2710_StaticFields*)ChannelServices_t2710_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			Object_t * L_44 = ___chnl;
			NullCheck(L_43);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_43, L_44);
		}

IL_00e7:
		{
			Object_t * L_45 = ___chnl;
			V_5 = ((Object_t *)IsInst(L_45, IChannelReceiver_t3012_il2cpp_TypeInfo_var));
			Object_t * L_46 = V_5;
			if (!L_46)
			{
				goto IL_0112;
			}
		}

IL_00f3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t2710_il2cpp_TypeInfo_var);
			Object_t * L_47 = ((ChannelServices_t2710_StaticFields*)ChannelServices_t2710_il2cpp_TypeInfo_var->static_fields)->___oldStartModeTypes_4;
			Object_t * L_48 = ___chnl;
			NullCheck(L_48);
			Type_t * L_49 = Object_GetType_m1416(L_48, /*hidden argument*/NULL);
			NullCheck(L_49);
			String_t* L_50 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_49);
			NullCheck(L_47);
			bool L_51 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(4 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_t794_il2cpp_TypeInfo_var, L_47, L_50);
			if (!L_51)
			{
				goto IL_0112;
			}
		}

IL_010a:
		{
			Object_t * L_52 = V_5;
			NullCheck(L_52);
			InterfaceActionInvoker1< Object_t * >::Invoke(1 /* System.Void System.Runtime.Remoting.Channels.IChannelReceiver::StartListening(System.Object) */, IChannelReceiver_t3012_il2cpp_TypeInfo_var, L_52, NULL);
		}

IL_0112:
		{
			IL2CPP_LEAVE(0x11B, FINALLY_0114);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0114;
	}

FINALLY_0114:
	{ // begin finally (depth: 1)
		Object_t * L_53 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(276)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(276)
	{
		IL2CPP_JUMP_TBL(0x11B, IL_011b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_011b:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Channels.ChannelServices::GetCurrentChannelInfo()
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t2710_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t3012_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t300* ChannelServices_GetCurrentChannelInfo_m17117 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		ChannelServices_t2710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5700);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		IChannelReceiver_t3012_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5723);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t913 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t913 * L_0 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t2710_il2cpp_TypeInfo_var);
		ArrayList_t913 * L_1 = ((ChannelServices_t2710_StaticFields*)ChannelServices_t2710_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(25 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_1);
		V_1 = L_2;
		Object_t * L_3 = V_1;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t2710_il2cpp_TypeInfo_var);
			ArrayList_t913 * L_4 = ((ChannelServices_t2710_StaticFields*)ChannelServices_t2710_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_4);
			V_3 = L_5;
		}

IL_0022:
		try
		{ // begin try (depth: 2)
			{
				goto IL_004d;
			}

IL_0024:
			{
				Object_t * L_6 = V_3;
				NullCheck(L_6);
				Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				Object_t * L_8 = V_2;
				V_4 = ((Object_t *)IsInst(L_8, IChannelReceiver_t3012_il2cpp_TypeInfo_var));
				Object_t * L_9 = V_4;
				if (!L_9)
				{
					goto IL_004d;
				}
			}

IL_0037:
			{
				Object_t * L_10 = V_4;
				NullCheck(L_10);
				Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Runtime.Remoting.Channels.IChannelReceiver::get_ChannelData() */, IChannelReceiver_t3012_il2cpp_TypeInfo_var, L_10);
				V_5 = L_11;
				Object_t * L_12 = V_5;
				if (!L_12)
				{
					goto IL_004d;
				}
			}

IL_0044:
			{
				ArrayList_t913 * L_13 = V_0;
				Object_t * L_14 = V_5;
				NullCheck(L_13);
				VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_13, L_14);
			}

IL_004d:
			{
				Object_t * L_15 = V_3;
				NullCheck(L_15);
				bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0024;
				}
			}

IL_0055:
			{
				IL2CPP_LEAVE(0x6C, FINALLY_0057);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t306 *)e.ex;
			goto FINALLY_0057;
		}

FINALLY_0057:
		{ // begin finally (depth: 2)
			{
				Object_t * L_17 = V_3;
				V_6 = ((Object_t *)IsInst(L_17, IDisposable_t307_il2cpp_TypeInfo_var));
				Object_t * L_18 = V_6;
				if (L_18)
				{
					goto IL_0064;
				}
			}

IL_0063:
			{
				IL2CPP_END_FINALLY(87)
			}

IL_0064:
			{
				Object_t * L_19 = V_6;
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_19);
				IL2CPP_END_FINALLY(87)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(87)
		{
			IL2CPP_JUMP_TBL(0x6C, IL_006c)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x75, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		Object_t * L_20 = V_1;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(110)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_JUMP_TBL(0x75, IL_0075)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0075:
	{
		ArrayList_t913 * L_21 = V_0;
		NullCheck(L_21);
		ObjectU5BU5D_t300* L_22 = (ObjectU5BU5D_t300*)VirtFuncInvoker0< ObjectU5BU5D_t300* >::Invoke(43 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_21);
		return L_22;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainData.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainDataMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Channels.CrossAppDomainData::.ctor(System.Int32)
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t2690_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainData__ctor_m17118 (CrossAppDomainData_t2711 * __this, int32_t ___domainId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		RemotingConfiguration_t2690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5688);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		int32_t L_0 = 0;
		Object_t * L_1 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_0);
		__this->____ContextID_0 = L_1;
		int32_t L_2 = ___domainId;
		__this->____DomainID_1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t2690_il2cpp_TypeInfo_var);
		String_t* L_3 = RemotingConfiguration_get_ProcessId_m17048(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____processGuid_2 = L_3;
		return;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChan.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.ctor()
extern "C" void CrossAppDomainChannel__ctor_m17119 (CrossAppDomainChannel_t2712 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.cctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainChannel_t2712_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainChannel__cctor_m17120 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		CrossAppDomainChannel_t2712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5708);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1291(L_0, /*hidden argument*/NULL);
		((CrossAppDomainChannel_t2712_StaticFields*)CrossAppDomainChannel_t2712_il2cpp_TypeInfo_var->static_fields)->___s_lock_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::RegisterCrossAppDomainChannel()
extern TypeInfo* CrossAppDomainChannel_t2712_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t2710_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainChannel_RegisterCrossAppDomainChannel_m17121 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainChannel_t2712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5708);
		ChannelServices_t2710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5700);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	CrossAppDomainChannel_t2712 * V_1 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainChannel_t2712_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((CrossAppDomainChannel_t2712_StaticFields*)CrossAppDomainChannel_t2712_il2cpp_TypeInfo_var->static_fields)->___s_lock_0;
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		CrossAppDomainChannel_t2712 * L_2 = (CrossAppDomainChannel_t2712 *)il2cpp_codegen_object_new (CrossAppDomainChannel_t2712_il2cpp_TypeInfo_var);
		CrossAppDomainChannel__ctor_m17119(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		CrossAppDomainChannel_t2712 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t2710_il2cpp_TypeInfo_var);
		ChannelServices_RegisterChannel_m17115(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x21, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(26)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x21, IL_0021)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0021:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelName()
extern "C" String_t* CrossAppDomainChannel_get_ChannelName_m17122 (CrossAppDomainChannel_t2712 * __this, const MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral5007;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelPriority()
extern "C" int32_t CrossAppDomainChannel_get_ChannelPriority_m17123 (CrossAppDomainChannel_t2712 * __this, const MethodInfo* method)
{
	{
		return ((int32_t)100);
	}
}
// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelData()
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainData_t2711_il2cpp_TypeInfo_var;
extern "C" Object_t * CrossAppDomainChannel_get_ChannelData_m17124 (CrossAppDomainChannel_t2712 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		CrossAppDomainData_t2711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5724);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		int32_t L_0 = Thread_GetDomainID_m18787(NULL /*static, unused*/, /*hidden argument*/NULL);
		CrossAppDomainData_t2711 * L_1 = (CrossAppDomainData_t2711 *)il2cpp_codegen_object_new (CrossAppDomainData_t2711_il2cpp_TypeInfo_var);
		CrossAppDomainData__ctor_m17118(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::StartListening(System.Object)
extern "C" void CrossAppDomainChannel_StartListening_m17125 (CrossAppDomainChannel_t2712 * __this, Object_t * ___data, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Channels.CrossAppDomainSink::.cctor()
extern const Il2CppType* CrossAppDomainSink_t2713_0_0_0_var;
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainSink_t2713_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainSink__cctor_m17126 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainSink_t2713_0_0_0_var = il2cpp_codegen_type_from_index(5704);
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		CrossAppDomainSink_t2713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5704);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t915 * L_0 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_0, /*hidden argument*/NULL);
		((CrossAppDomainSink_t2713_StaticFields*)CrossAppDomainSink_t2713_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(CrossAppDomainSink_t2713_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		MethodInfo_t * L_2 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(50 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_1, (String_t*) &_stringLiteral5008, ((int32_t)40));
		((CrossAppDomainSink_t2713_StaticFields*)CrossAppDomainSink_t2713_il2cpp_TypeInfo_var->static_fields)->___processMessageMethod_1 = L_2;
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::get_TargetDomainId()
extern "C" int32_t CrossAppDomainSink_get_TargetDomainId_m17127 (CrossAppDomainSink_t2713 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____domainID_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSiMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Contexts.Context::.cctor()
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* Context_t2693_il2cpp_TypeInfo_var;
extern "C" void Context__cctor_m17128 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		Context_t2693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5705);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t915 * L_0 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_0, /*hidden argument*/NULL);
		((Context_t2693_StaticFields*)Context_t2693_il2cpp_TypeInfo_var->static_fields)->___namedSlots_2 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::Finalize()
extern "C" void Context_Finalize_m17129 (Context_t2693 * __this, const MethodInfo* method)
{
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x9, FINALLY_0002);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0002;
	}

FINALLY_0002:
	{ // begin finally (depth: 1)
		Object_Finalize_m1886(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(2)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(2)
	{
		IL2CPP_JUMP_TBL(0x9, IL_0009)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0009:
	{
		return;
	}
}
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::get_DefaultContext()
extern "C" Context_t2693 * Context_get_DefaultContext_m17130 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Context_t2693 * L_0 = AppDomain_InternalGetDefaultContext_m14495(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_IsDefaultContext()
extern "C" bool Context_get_IsDefaultContext_m17131 (Context_t2693 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___context_id_0);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String)
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t3000_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_GetProperty_m17132 (Context_t2693 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		IContextProperty_t3000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5725);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t913 * L_0 = (__this->___context_properties_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (Object_t *)NULL;
	}

IL_000a:
	{
		ArrayList_t913 * L_1 = (__this->___context_properties_1);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
		V_1 = L_2;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0018:
		{
			Object_t * L_3 = V_1;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_3);
			V_0 = ((Object_t *)Castclass(L_4, IContextProperty_t3000_il2cpp_TypeInfo_var));
			Object_t * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Contexts.IContextProperty::get_Name() */, IContextProperty_t3000_il2cpp_TypeInfo_var, L_5);
			String_t* L_7 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_8 = String_op_Equality_m1295(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0036;
			}
		}

IL_0032:
		{
			Object_t * L_9 = V_0;
			V_2 = L_9;
			IL2CPP_LEAVE(0x54, FINALLY_0040);
		}

IL_0036:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0018;
			}
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_1;
			V_3 = ((Object_t *)IsInst(L_12, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_3;
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_004a:
		{
			IL2CPP_END_FINALLY(64)
		}

IL_004b:
		{
			Object_t * L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0052:
	{
		return (Object_t *)NULL;
	}

IL_0054:
	{
		Object_t * L_15 = V_2;
		return L_15;
	}
}
// System.String System.Runtime.Remoting.Contexts.Context::ToString()
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Context_ToString_m17133 (Context_t2693 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___context_id_0);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1248(NULL /*static, unused*/, (String_t*) &_stringLiteral5009, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::CreateEnvoySink(System.MarshalByRefObject)
extern TypeInfo* EnvoyTerminatorSink_t2732_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t3000_il2cpp_TypeInfo_var;
extern TypeInfo* IContributeEnvoySink_t3013_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_CreateEnvoySink_m17134 (Context_t2693 * __this, MarshalByRefObject_t882 * ___serverObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnvoyTerminatorSink_t2732_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5711);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		IContextProperty_t3000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5725);
		IContributeEnvoySink_t3013_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5726);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(EnvoyTerminatorSink_t2732_il2cpp_TypeInfo_var);
		EnvoyTerminatorSink_t2732 * L_0 = ((EnvoyTerminatorSink_t2732_StaticFields*)EnvoyTerminatorSink_t2732_il2cpp_TypeInfo_var->static_fields)->___Instance_0;
		V_0 = L_0;
		ArrayList_t913 * L_1 = (__this->___context_properties_1);
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		ArrayList_t913 * L_2 = (__this->___context_properties_1);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_2);
		V_2 = L_3;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_001c:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_4);
			V_1 = ((Object_t *)Castclass(L_5, IContextProperty_t3000_il2cpp_TypeInfo_var));
			Object_t * L_6 = V_1;
			V_3 = ((Object_t *)IsInst(L_6, IContributeEnvoySink_t3013_il2cpp_TypeInfo_var));
			Object_t * L_7 = V_3;
			if (!L_7)
			{
				goto IL_003b;
			}
		}

IL_0032:
		{
			Object_t * L_8 = V_3;
			MarshalByRefObject_t882 * L_9 = ___serverObject;
			Object_t * L_10 = V_0;
			NullCheck(L_8);
			Object_t * L_11 = (Object_t *)InterfaceFuncInvoker2< Object_t *, MarshalByRefObject_t882 *, Object_t * >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.IContributeEnvoySink::GetEnvoySink(System.MarshalByRefObject,System.Runtime.Remoting.Messaging.IMessageSink) */, IContributeEnvoySink_t3013_il2cpp_TypeInfo_var, L_8, L_9, L_10);
			V_0 = L_11;
		}

IL_003b:
		{
			Object_t * L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_001c;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_2;
			V_4 = ((Object_t *)IsInst(L_14, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_4;
			if (L_15)
			{
				goto IL_0052;
			}
		}

IL_0051:
		{
			IL2CPP_END_FINALLY(69)
		}

IL_0052:
		{
			Object_t * L_16 = V_4;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_005a:
	{
		Object_t * L_17 = V_0;
		return L_17;
	}
}
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttributeMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::.ctor(System.String)
extern "C" void ContextAttribute__ctor_m17135 (ContextAttribute_t2707 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___AttributeName_0 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.Contexts.ContextAttribute::get_Name()
extern "C" String_t* ContextAttribute_get_Name_m17136 (ContextAttribute_t2707 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::Equals(System.Object)
extern TypeInfo* ContextAttribute_t2707_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool ContextAttribute_Equals_m17137 (ContextAttribute_t2707 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ContextAttribute_t2707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5727);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	ContextAttribute_t2707 * V_0 = {0};
	{
		Object_t * L_0 = ___o;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		Object_t * L_1 = ___o;
		if (((ContextAttribute_t2707 *)IsInst(L_1, ContextAttribute_t2707_il2cpp_TypeInfo_var)))
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = ___o;
		V_0 = ((ContextAttribute_t2707 *)Castclass(L_2, ContextAttribute_t2707_il2cpp_TypeInfo_var));
		ContextAttribute_t2707 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = (L_3->___AttributeName_0);
		String_t* L_5 = (__this->___AttributeName_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Inequality_m1484(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		return 1;
	}
}
// System.Int32 System.Runtime.Remoting.Contexts.ContextAttribute::GetHashCode()
extern "C" int32_t ContextAttribute_GetHashCode_m17138 (ContextAttribute_t2707 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		String_t* L_1 = (__this->___AttributeName_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t2998_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t794_il2cpp_TypeInfo_var;
extern "C" void ContextAttribute_GetPropertiesForNewContext_m17139 (ContextAttribute_t2707 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		IConstructionCallMessage_t2998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5728);
		IList_t794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1549);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___ctorMsg;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5010, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___ctorMsg;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t794_il2cpp_TypeInfo_var, L_4, __this);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t2998_il2cpp_TypeInfo_var;
extern "C" bool ContextAttribute_IsContextOK_m17140 (ContextAttribute_t2707 * __this, Context_t2693 * ___ctx, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		IConstructionCallMessage_t2998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5728);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___ctorMsg;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5010, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Context_t2693 * L_2 = ___ctx;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t692 * L_3 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_3, (String_t*) &_stringLiteral5011, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		Object_t * L_4 = ___ctorMsg;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* System.Type System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationType() */, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_5);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		Context_t2693 * L_7 = ___ctx;
		String_t* L_8 = (__this->___AttributeName_0);
		NullCheck(L_7);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_7, L_8);
		V_0 = L_9;
		Object_t * L_10 = V_0;
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		return 0;
	}

IL_003d:
	{
		Object_t * L_11 = V_0;
		if ((((Object_t*)(ContextAttribute_t2707 *)__this) == ((Object_t*)(Object_t *)L_11)))
		{
			goto IL_0043;
		}
	}
	{
		return 0;
	}

IL_0043:
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Contexts.CrossContextChannel::.ctor()
extern "C" void CrossContextChannel__ctor_m17141 (CrossContextChannel_t2709 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAtt.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttMethodDeclarations.h"

// System.Threading.Mutex
#include "mscorlib_System_Threading_Mutex.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandle.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_Thread.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandleMethodDeclarations.h"
// System.Threading.Mutex
#include "mscorlib_System_Threading_MutexMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
extern "C" void SynchronizationAttribute__ctor_m17142 (SynchronizationAttribute_t2715 * __this, const MethodInfo* method)
{
	{
		SynchronizationAttribute__ctor_m17143(__this, 8, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
extern TypeInfo* Mutex_t2714_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute__ctor_m17143 (SynchronizationAttribute_t2715 * __this, int32_t ___flag, bool ___reEntrant, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mutex_t2714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5729);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	{
		Mutex_t2714 * L_0 = (Mutex_t2714 *)il2cpp_codegen_object_new (Mutex_t2714_il2cpp_TypeInfo_var);
		Mutex__ctor_m18769(L_0, 0, /*hidden argument*/NULL);
		__this->____mutex_4 = L_0;
		ContextAttribute__ctor_m17135(__this, (String_t*) &_stringLiteral5012, /*hidden argument*/NULL);
		int32_t L_1 = ___flag;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = ___flag;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_3 = ___flag;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_4 = ___flag;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_t356 * L_5 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_5, (String_t*) &_stringLiteral3472, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0032:
	{
		bool L_6 = ___reEntrant;
		__this->____bReEntrant_1 = L_6;
		int32_t L_7 = ___flag;
		__this->____flavor_2 = L_7;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_set_Locked_m17144 (SynchronizationAttribute_t2715 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t2715 * V_0 = {0};
	SynchronizationAttribute_t2715 * V_1 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ___value;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		Mutex_t2714 * L_1 = (__this->____mutex_4);
		NullCheck(L_1);
		VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_1);
		V_0 = __this;
		SynchronizationAttribute_t2715 * L_2 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
			int32_t L_4 = (__this->____lockCount_3);
			if ((((int32_t)L_4) <= ((int32_t)1)))
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			SynchronizationAttribute_ReleaseLock_m17145(__this, /*hidden argument*/NULL);
		}

IL_0034:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
			Thread_t1122 * L_5 = Thread_get_CurrentThread_m5000(NULL /*static, unused*/, /*hidden argument*/NULL);
			__this->____ownerThread_5 = L_5;
			IL2CPP_LEAVE(0x48, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t2715 * L_6 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0048:
	{
		goto IL_0093;
	}

IL_004a:
	{
		V_1 = __this;
		SynchronizationAttribute_t2715 * L_7 = V_1;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0074;
		}

IL_0054:
		{
			int32_t L_8 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_8-(int32_t)1));
			Mutex_t2714 * L_9 = (__this->____mutex_4);
			NullCheck(L_9);
			Mutex_ReleaseMutex_m18772(L_9, /*hidden argument*/NULL);
			__this->____ownerThread_5 = (Thread_t1122 *)NULL;
		}

IL_0074:
		{
			int32_t L_10 = (__this->____lockCount_3);
			if ((((int32_t)L_10) <= ((int32_t)0)))
			{
				goto IL_008a;
			}
		}

IL_007d:
		{
			Thread_t1122 * L_11 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
			Thread_t1122 * L_12 = Thread_get_CurrentThread_m5000(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(Thread_t1122 *)L_11) == ((Object_t*)(Thread_t1122 *)L_12)))
			{
				goto IL_0054;
			}
		}

IL_008a:
		{
			IL2CPP_LEAVE(0x93, FINALLY_008c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_008c;
	}

FINALLY_008c:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t2715 * L_13 = V_1;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(140)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_JUMP_TBL(0x93, IL_0093)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0093:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_ReleaseLock_m17145 (SynchronizationAttribute_t2715 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t2715 * V_0 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizationAttribute_t2715 * L_0 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = (__this->____lockCount_3);
			if ((((int32_t)L_1) <= ((int32_t)0)))
			{
				goto IL_003e;
			}
		}

IL_0011:
		{
			Thread_t1122 * L_2 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
			Thread_t1122 * L_3 = Thread_get_CurrentThread_m5000(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((!(((Object_t*)(Thread_t1122 *)L_2) == ((Object_t*)(Thread_t1122 *)L_3))))
			{
				goto IL_003e;
			}
		}

IL_001e:
		{
			int32_t L_4 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_4-(int32_t)1));
			Mutex_t2714 * L_5 = (__this->____mutex_4);
			NullCheck(L_5);
			Mutex_ReleaseMutex_m18772(L_5, /*hidden argument*/NULL);
			__this->____ownerThread_5 = (Thread_t1122 *)NULL;
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x47, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t2715 * L_6 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0047:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* IConstructionCallMessage_t2998_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t794_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_GetPropertiesForNewContext_m17146 (SynchronizationAttribute_t2715 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConstructionCallMessage_t2998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5728);
		IList_t794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1549);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____flavor_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		Object_t * L_1 = ___ctorMsg;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t794_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* SynchronizationAttribute_t2715_il2cpp_TypeInfo_var;
extern "C" bool SynchronizationAttribute_IsContextOK_m17147 (SynchronizationAttribute_t2715 * __this, Context_t2693 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SynchronizationAttribute_t2715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5730);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t2715 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Context_t2693 * L_0 = ___ctx;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_0, (String_t*) &_stringLiteral5012);
		V_0 = ((SynchronizationAttribute_t2715 *)IsInst(L_1, SynchronizationAttribute_t2715_il2cpp_TypeInfo_var));
		int32_t L_2 = (__this->____flavor_2);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_0042;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_0051;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 2)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 3)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 4)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 5)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 6)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 7)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0053;
	}

IL_0042:
	{
		SynchronizationAttribute_t2715 * L_4 = V_0;
		return ((((Object_t*)(SynchronizationAttribute_t2715 *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0047:
	{
		SynchronizationAttribute_t2715 * L_5 = V_0;
		return ((((int32_t)((((Object_t*)(SynchronizationAttribute_t2715 *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_004f:
	{
		return 0;
	}

IL_0051:
	{
		return 1;
	}

IL_0053:
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationAttribute_t2715_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_ExitContext_m17148 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		SynchronizationAttribute_t2715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5730);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t2715 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		Context_t2693 * L_0 = Thread_get_CurrentContext_m18784(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m17131(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		Context_t2693 * L_2 = Thread_get_CurrentContext_m18784(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_2, (String_t*) &_stringLiteral5012);
		V_0 = ((SynchronizationAttribute_t2715 *)IsInst(L_3, SynchronizationAttribute_t2715_il2cpp_TypeInfo_var));
		SynchronizationAttribute_t2715 * L_4 = V_0;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		SynchronizationAttribute_t2715 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(12 /* System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean) */, L_5, 0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationAttribute_t2715_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_EnterContext_m17149 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		SynchronizationAttribute_t2715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5730);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t2715 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		Context_t2693 * L_0 = Thread_get_CurrentContext_m18784(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m17131(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		Context_t2693 * L_2 = Thread_get_CurrentContext_m18784(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_2, (String_t*) &_stringLiteral5012);
		V_0 = ((SynchronizationAttribute_t2715 *)IsInst(L_3, SynchronizationAttribute_t2715_il2cpp_TypeInfo_var));
		SynchronizationAttribute_t2715 * L_4 = V_0;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		SynchronizationAttribute_t2715 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(12 /* System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean) */, L_5, 1);
		return;
	}
}
// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
#include "mscorlib_System_Runtime_Remoting_Lifetime_Lease_RenewalDeleg.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
#include "mscorlib_System_Runtime_Remoting_Lifetime_Lease_RenewalDelegMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void RenewalDelegate__ctor_m17150 (RenewalDelegate_t2717 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::Invoke(System.Runtime.Remoting.Lifetime.ILease)
extern "C" TimeSpan_t1129  RenewalDelegate_Invoke_m17151 (RenewalDelegate_t2717 * __this, Object_t * ___lease, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		RenewalDelegate_Invoke_m17151((RenewalDelegate_t2717 *)__this->___prev_9,___lease, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef TimeSpan_t1129  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___lease, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___lease,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef TimeSpan_t1129  (*FunctionPointerType) (Object_t * __this, Object_t * ___lease, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___lease,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef TimeSpan_t1129  (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___lease,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" TimeSpan_t1129  pinvoke_delegate_wrapper_RenewalDelegate_t2717(Il2CppObject* delegate, Object_t * ___lease)
{
	// Marshaling of parameter '___lease' to native representation
	Object_t * ____lease_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Remoting.Lifetime.ILease'."));
}
// System.IAsyncResult System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::BeginInvoke(System.Runtime.Remoting.Lifetime.ILease,System.AsyncCallback,System.Object)
extern "C" Object_t * RenewalDelegate_BeginInvoke_m17152 (RenewalDelegate_t2717 * __this, Object_t * ___lease, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___lease;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::EndInvoke(System.IAsyncResult)
extern "C" TimeSpan_t1129  RenewalDelegate_EndInvoke_m17153 (RenewalDelegate_t2717 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(TimeSpan_t1129 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Queue
#include "mscorlib_System_Collections_Queue.h"
// System.Threading.WaitOrTimerCallback
#include "mscorlib_System_Threading_WaitOrTimerCallback.h"
// System.Threading.RegisteredWaitHandle
#include "mscorlib_System_Threading_RegisteredWaitHandle.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.Collections.Queue
#include "mscorlib_System_Collections_QueueMethodDeclarations.h"
// System.Threading.WaitOrTimerCallback
#include "mscorlib_System_Threading_WaitOrTimerCallbackMethodDeclarations.h"
// System.Threading.ThreadPool
#include "mscorlib_System_Threading_ThreadPoolMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Lifetime.Lease::.ctor()
extern TypeInfo* LifetimeServices_t2721_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t445_il2cpp_TypeInfo_var;
extern "C" void Lease__ctor_m17154 (Lease_t2694 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t2721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5709);
		DateTime_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		s_Il2CppMethodIntialized = true;
	}
	{
		MarshalByRefObject__ctor_m5095(__this, /*hidden argument*/NULL);
		__this->____currentState_2 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t2721_il2cpp_TypeInfo_var);
		TimeSpan_t1129  L_0 = LifetimeServices_get_LeaseTime_m17173(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____initialLeaseTime_3 = L_0;
		TimeSpan_t1129  L_1 = LifetimeServices_get_RenewOnCallTime_m17174(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____renewOnCallTime_4 = L_1;
		TimeSpan_t1129  L_2 = LifetimeServices_get_SponsorshipTimeout_m17175(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____sponsorshipTimeout_5 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
		DateTime_t445  L_3 = DateTime_get_Now_m3160(NULL /*static, unused*/, /*hidden argument*/NULL);
		TimeSpan_t1129  L_4 = (__this->____initialLeaseTime_3);
		DateTime_t445  L_5 = DateTime_op_Addition_m10292(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		__this->____leaseExpireTime_1 = L_5;
		return;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::get_CurrentLeaseTime()
extern TypeInfo* DateTime_t445_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t1129  Lease_get_CurrentLeaseTime_m17155 (Lease_t2694 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		s_Il2CppMethodIntialized = true;
	}
	{
		DateTime_t445  L_0 = (__this->____leaseExpireTime_1);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
		DateTime_t445  L_1 = DateTime_get_Now_m3160(NULL /*static, unused*/, /*hidden argument*/NULL);
		TimeSpan_t1129  L_2 = DateTime_op_Subtraction_m14822(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::get_CurrentState()
extern "C" int32_t Lease_get_CurrentState_m17156 (Lease_t2694 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____currentState_2);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::Activate()
extern "C" void Lease_Activate_m17157 (Lease_t2694 * __this, const MethodInfo* method)
{
	{
		__this->____currentState_2 = 2;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_InitialLeaseTime(System.TimeSpan)
extern TypeInfo* LeaseState_t2720_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t2691_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t445_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t1129_il2cpp_TypeInfo_var;
extern "C" void Lease_set_InitialLeaseTime_m17158 (Lease_t2694 * __this, TimeSpan_t1129  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LeaseState_t2720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5731);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		RemotingException_t2691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5447);
		DateTime_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		TimeSpan_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1959);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____currentState_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->____currentState_2);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(LeaseState_t2720_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1268(NULL /*static, unused*/, (String_t*) &_stringLiteral5013, L_3, (String_t*) &_stringLiteral53, /*hidden argument*/NULL);
		RemotingException_t2691 * L_5 = (RemotingException_t2691 *)il2cpp_codegen_object_new (RemotingException_t2691_il2cpp_TypeInfo_var);
		RemotingException__ctor_m17051(L_5, L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		TimeSpan_t1129  L_6 = ___value;
		__this->____initialLeaseTime_3 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
		DateTime_t445  L_7 = DateTime_get_Now_m3160(NULL /*static, unused*/, /*hidden argument*/NULL);
		TimeSpan_t1129  L_8 = (__this->____initialLeaseTime_3);
		DateTime_t445  L_9 = DateTime_op_Addition_m10292(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		__this->____leaseExpireTime_1 = L_9;
		TimeSpan_t1129  L_10 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1129_il2cpp_TypeInfo_var);
		TimeSpan_t1129  L_11 = ((TimeSpan_t1129_StaticFields*)TimeSpan_t1129_il2cpp_TypeInfo_var->static_fields)->___Zero_2;
		bool L_12 = TimeSpan_op_Equality_m9864(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		__this->____currentState_2 = 0;
	}

IL_005a:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_RenewOnCallTime(System.TimeSpan)
extern TypeInfo* LeaseState_t2720_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t2691_il2cpp_TypeInfo_var;
extern "C" void Lease_set_RenewOnCallTime_m17159 (Lease_t2694 * __this, TimeSpan_t1129  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LeaseState_t2720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5731);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		RemotingException_t2691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5447);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____currentState_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->____currentState_2);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(LeaseState_t2720_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1268(NULL /*static, unused*/, (String_t*) &_stringLiteral5014, L_3, (String_t*) &_stringLiteral53, /*hidden argument*/NULL);
		RemotingException_t2691 * L_5 = (RemotingException_t2691 *)il2cpp_codegen_object_new (RemotingException_t2691_il2cpp_TypeInfo_var);
		RemotingException__ctor_m17051(L_5, L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		TimeSpan_t1129  L_6 = ___value;
		__this->____renewOnCallTime_4 = L_6;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_SponsorshipTimeout(System.TimeSpan)
extern TypeInfo* LeaseState_t2720_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t2691_il2cpp_TypeInfo_var;
extern "C" void Lease_set_SponsorshipTimeout_m17160 (Lease_t2694 * __this, TimeSpan_t1129  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LeaseState_t2720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5731);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		RemotingException_t2691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5447);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____currentState_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->____currentState_2);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(LeaseState_t2720_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1268(NULL /*static, unused*/, (String_t*) &_stringLiteral5015, L_3, (String_t*) &_stringLiteral53, /*hidden argument*/NULL);
		RemotingException_t2691 * L_5 = (RemotingException_t2691 *)il2cpp_codegen_object_new (RemotingException_t2691_il2cpp_TypeInfo_var);
		RemotingException__ctor_m17051(L_5, L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		TimeSpan_t1129  L_6 = ___value;
		__this->____sponsorshipTimeout_5 = L_6;
		return;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::Renew(System.TimeSpan)
extern TypeInfo* DateTime_t445_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t1129  Lease_Renew_m17161 (Lease_t2694 * __this, TimeSpan_t1129  ___renewalTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t445  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
		DateTime_t445  L_0 = DateTime_get_Now_m3160(NULL /*static, unused*/, /*hidden argument*/NULL);
		TimeSpan_t1129  L_1 = ___renewalTime;
		DateTime_t445  L_2 = DateTime_op_Addition_m10292(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		DateTime_t445  L_3 = V_0;
		DateTime_t445  L_4 = (__this->____leaseExpireTime_1);
		bool L_5 = DateTime_op_GreaterThan_m6373(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		DateTime_t445  L_6 = V_0;
		__this->____leaseExpireTime_1 = L_6;
	}

IL_0021:
	{
		TimeSpan_t1129  L_7 = (TimeSpan_t1129 )VirtFuncInvoker0< TimeSpan_t1129  >::Invoke(10 /* System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::get_CurrentLeaseTime() */, __this);
		return L_7;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::Unregister(System.Runtime.Remoting.Lifetime.ISponsor)
extern "C" void Lease_Unregister_m17162 (Lease_t2694 * __this, Object_t * ___obj, const MethodInfo* method)
{
	Lease_t2694 * V_0 = {0};
	int32_t V_1 = 0;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		Lease_t2694 * L_0 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			ArrayList_t913 * L_1 = (__this->____sponsors_6);
			if (L_1)
			{
				goto IL_0012;
			}
		}

IL_0010:
		{
			IL2CPP_LEAVE(0x53, FINALLY_004c);
		}

IL_0012:
		{
			V_1 = 0;
			goto IL_003c;
		}

IL_0016:
		{
			ArrayList_t913 * L_2 = (__this->____sponsors_6);
			int32_t L_3 = V_1;
			NullCheck(L_2);
			Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
			Object_t * L_5 = ___obj;
			bool L_6 = Object_ReferenceEquals_m3172(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0038;
			}
		}

IL_002a:
		{
			ArrayList_t913 * L_7 = (__this->____sponsors_6);
			int32_t L_8 = V_1;
			NullCheck(L_7);
			VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_7, L_8);
			goto IL_004a;
		}

IL_0038:
		{
			int32_t L_9 = V_1;
			V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
		}

IL_003c:
		{
			int32_t L_10 = V_1;
			ArrayList_t913 * L_11 = (__this->____sponsors_6);
			NullCheck(L_11);
			int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_11);
			if ((((int32_t)L_10) < ((int32_t)L_12)))
			{
				goto IL_0016;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x53, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		Lease_t2694 * L_13 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0053:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::UpdateState()
extern TypeInfo* TimeSpan_t1129_il2cpp_TypeInfo_var;
extern TypeInfo* Queue_t2076_il2cpp_TypeInfo_var;
extern "C" void Lease_UpdateState_m17163 (Lease_t2694 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeSpan_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1959);
		Queue_t2076_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	Lease_t2694 * V_0 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->____currentState_2);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		TimeSpan_t1129  L_1 = (TimeSpan_t1129 )VirtFuncInvoker0< TimeSpan_t1129  >::Invoke(10 /* System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::get_CurrentLeaseTime() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1129_il2cpp_TypeInfo_var);
		TimeSpan_t1129  L_2 = ((TimeSpan_t1129_StaticFields*)TimeSpan_t1129_il2cpp_TypeInfo_var->static_fields)->___Zero_2;
		bool L_3 = TimeSpan_op_GreaterThan_m15274(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		ArrayList_t913 * L_4 = (__this->____sponsors_6);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		__this->____currentState_2 = 3;
		V_0 = __this;
		Lease_t2694 * L_5 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		ArrayList_t913 * L_6 = (__this->____sponsors_6);
		Queue_t2076 * L_7 = (Queue_t2076 *)il2cpp_codegen_object_new (Queue_t2076_il2cpp_TypeInfo_var);
		Queue__ctor_m15552(L_7, L_6, /*hidden argument*/NULL);
		__this->____renewingSponsors_7 = L_7;
		IL2CPP_LEAVE(0x4E, FINALLY_0047);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		Lease_t2694 * L_8 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_004e:
	{
		Lease_CheckNextSponsor_m17164(__this, /*hidden argument*/NULL);
		goto IL_005d;
	}

IL_0056:
	{
		__this->____currentState_2 = 4;
	}

IL_005d:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::CheckNextSponsor()
extern TypeInfo* ISponsor_t3001_il2cpp_TypeInfo_var;
extern TypeInfo* RenewalDelegate_t2717_il2cpp_TypeInfo_var;
extern TypeInfo* IAsyncResult_t71_il2cpp_TypeInfo_var;
extern TypeInfo* WaitOrTimerCallback_t2949_il2cpp_TypeInfo_var;
extern const MethodInfo* Lease_ProcessSponsorResponse_m17165_MethodInfo_var;
extern "C" void Lease_CheckNextSponsor_m17164 (Lease_t2694 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISponsor_t3001_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5732);
		RenewalDelegate_t2717_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5733);
		IAsyncResult_t71_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		WaitOrTimerCallback_t2949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5734);
		Lease_ProcessSponsorResponse_m17165_MethodInfo_var = il2cpp_codegen_method_info_from_index(391);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		Queue_t2076 * L_0 = (__this->____renewingSponsors_7);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Queue::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		__this->____currentState_2 = 4;
		__this->____renewingSponsors_7 = (Queue_t2076 *)NULL;
		return;
	}

IL_001c:
	{
		Queue_t2076 * L_2 = (__this->____renewingSponsors_7);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Object System.Collections.Queue::Peek() */, L_2);
		V_0 = ((Object_t *)Castclass(L_3, ISponsor_t3001_il2cpp_TypeInfo_var));
		Object_t * L_4 = V_0;
		Object_t * L_5 = L_4;
		IntPtr_t L_6 = { (void*)GetInterfaceMethodInfo(L_5, 0, ISponsor_t3001_il2cpp_TypeInfo_var) };
		RenewalDelegate_t2717 * L_7 = (RenewalDelegate_t2717 *)il2cpp_codegen_object_new (RenewalDelegate_t2717_il2cpp_TypeInfo_var);
		RenewalDelegate__ctor_m17150(L_7, L_5, L_6, /*hidden argument*/NULL);
		__this->____renewalDelegate_8 = L_7;
		RenewalDelegate_t2717 * L_8 = (__this->____renewalDelegate_8);
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, AsyncCallback_t72 *, Object_t * >::Invoke(12 /* System.IAsyncResult System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::BeginInvoke(System.Runtime.Remoting.Lifetime.ILease,System.AsyncCallback,System.Object) */, L_8, __this, (AsyncCallback_t72 *)NULL, NULL);
		V_1 = L_9;
		Object_t * L_10 = V_1;
		NullCheck(L_10);
		WaitHandle_t1351 * L_11 = (WaitHandle_t1351 *)InterfaceFuncInvoker0< WaitHandle_t1351 * >::Invoke(1 /* System.Threading.WaitHandle System.IAsyncResult::get_AsyncWaitHandle() */, IAsyncResult_t71_il2cpp_TypeInfo_var, L_10);
		IntPtr_t L_12 = { (void*)Lease_ProcessSponsorResponse_m17165_MethodInfo_var };
		WaitOrTimerCallback_t2949 * L_13 = (WaitOrTimerCallback_t2949 *)il2cpp_codegen_object_new (WaitOrTimerCallback_t2949_il2cpp_TypeInfo_var);
		WaitOrTimerCallback__ctor_m18901(L_13, __this, L_12, /*hidden argument*/NULL);
		Object_t * L_14 = V_1;
		TimeSpan_t1129  L_15 = (__this->____sponsorshipTimeout_5);
		ThreadPool_RegisterWaitForSingleObject_m18817(NULL /*static, unused*/, L_11, L_13, L_14, L_15, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::ProcessSponsorResponse(System.Object,System.Boolean)
extern TypeInfo* IAsyncResult_t71_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t1129_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* ISponsor_t3001_il2cpp_TypeInfo_var;
extern "C" void Lease_ProcessSponsorResponse_m17165 (Lease_t2694 * __this, Object_t * ___state, bool ___timedOut, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IAsyncResult_t71_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		TimeSpan_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1959);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		ISponsor_t3001_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5732);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	TimeSpan_t1129  V_1 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ___timedOut;
		if (L_0)
		{
			goto IL_0041;
		}
	}

IL_0003:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_1 = ___state;
			V_0 = ((Object_t *)Castclass(L_1, IAsyncResult_t71_il2cpp_TypeInfo_var));
			RenewalDelegate_t2717 * L_2 = (__this->____renewalDelegate_8);
			Object_t * L_3 = V_0;
			NullCheck(L_2);
			TimeSpan_t1129  L_4 = (TimeSpan_t1129 )VirtFuncInvoker1< TimeSpan_t1129 , Object_t * >::Invoke(13 /* System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::EndInvoke(System.IAsyncResult) */, L_2, L_3);
			V_1 = L_4;
			TimeSpan_t1129  L_5 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1129_il2cpp_TypeInfo_var);
			TimeSpan_t1129  L_6 = ((TimeSpan_t1129_StaticFields*)TimeSpan_t1129_il2cpp_TypeInfo_var->static_fields)->___Zero_2;
			bool L_7 = TimeSpan_op_Inequality_m15276(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_003c;
			}
		}

IL_0024:
		{
			TimeSpan_t1129  L_8 = V_1;
			VirtFuncInvoker1< TimeSpan_t1129 , TimeSpan_t1129  >::Invoke(11 /* System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::Renew(System.TimeSpan) */, __this, L_8);
			__this->____currentState_2 = 2;
			__this->____renewingSponsors_7 = (Queue_t2076 *)NULL;
			goto IL_005d;
		}

IL_003c:
		{
			goto IL_0041;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_003e;
		throw e;
	}

CATCH_003e:
	{ // begin catch(System.Object)
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		Queue_t2076 * L_9 = (__this->____renewingSponsors_7);
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Object System.Collections.Queue::Dequeue() */, L_9);
		VirtActionInvoker1< Object_t * >::Invoke(12 /* System.Void System.Runtime.Remoting.Lifetime.Lease::Unregister(System.Runtime.Remoting.Lifetime.ISponsor) */, __this, ((Object_t *)Castclass(L_10, ISponsor_t3001_il2cpp_TypeInfo_var)));
		Lease_CheckNextSponsor_m17164(__this, /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManager.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManagerMethodDeclarations.h"

// System.Threading.Timer
#include "mscorlib_System_Threading_Timer.h"
// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallback.h"
// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallbackMethodDeclarations.h"
// System.Threading.Timer
#include "mscorlib_System_Threading_TimerMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::.ctor()
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" void LeaseManager__ctor_m17166 (LeaseManager_t2719 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t913 * L_0 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_0, /*hidden argument*/NULL);
		__this->____objects_0 = L_0;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern "C" void LeaseManager_TrackLifetime_m17167 (LeaseManager_t2719 * __this, ServerIdentity_t2318 * ___identity, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t913 * L_0 = (__this->____objects_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(25 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			ServerIdentity_t2318 * L_3 = ___identity;
			NullCheck(L_3);
			Lease_t2694 * L_4 = ServerIdentity_get_Lease_m17088(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			Lease_Activate_m17157(L_4, /*hidden argument*/NULL);
			ArrayList_t913 * L_5 = (__this->____objects_0);
			ServerIdentity_t2318 * L_6 = ___identity;
			NullCheck(L_5);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_5, L_6);
			Timer_t2718 * L_7 = (__this->____timer_1);
			if (L_7)
			{
				goto IL_0038;
			}
		}

IL_0032:
		{
			LeaseManager_StartManager_m17168(__this, /*hidden argument*/NULL);
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x41, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0041:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StartManager()
extern TypeInfo* TimerCallback_t2958_il2cpp_TypeInfo_var;
extern TypeInfo* LifetimeServices_t2721_il2cpp_TypeInfo_var;
extern TypeInfo* Timer_t2718_il2cpp_TypeInfo_var;
extern const MethodInfo* LeaseManager_ManageLeases_m17170_MethodInfo_var;
extern "C" void LeaseManager_StartManager_m17168 (LeaseManager_t2719 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimerCallback_t2958_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5735);
		LifetimeServices_t2721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5709);
		Timer_t2718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5736);
		LeaseManager_ManageLeases_m17170_MethodInfo_var = il2cpp_codegen_method_info_from_index(392);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)LeaseManager_ManageLeases_m17170_MethodInfo_var };
		TimerCallback_t2958 * L_1 = (TimerCallback_t2958 *)il2cpp_codegen_object_new (TimerCallback_t2958_il2cpp_TypeInfo_var);
		TimerCallback__ctor_m18894(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t2721_il2cpp_TypeInfo_var);
		TimeSpan_t1129  L_2 = LifetimeServices_get_LeaseManagerPollTime_m17172(NULL /*static, unused*/, /*hidden argument*/NULL);
		TimeSpan_t1129  L_3 = LifetimeServices_get_LeaseManagerPollTime_m17172(NULL /*static, unused*/, /*hidden argument*/NULL);
		Timer_t2718 * L_4 = (Timer_t2718 *)il2cpp_codegen_object_new (Timer_t2718_il2cpp_TypeInfo_var);
		Timer__ctor_m18831(L_4, L_1, NULL, L_2, L_3, /*hidden argument*/NULL);
		__this->____timer_1 = L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StopManager()
extern "C" void LeaseManager_StopManager_m17169 (LeaseManager_t2719 * __this, const MethodInfo* method)
{
	Timer_t2718 * V_0 = {0};
	{
		Timer_t2718 * L_0 = (__this->____timer_1);
		V_0 = L_0;
		__this->____timer_1 = (Timer_t2718 *)NULL;
		Timer_t2718 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Threading.Timer::Dispose() */, L_1);
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::ManageLeases(System.Object)
extern TypeInfo* ServerIdentity_t2318_il2cpp_TypeInfo_var;
extern "C" void LeaseManager_ManageLeases_m17170 (LeaseManager_t2719 * __this, Object_t * ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ServerIdentity_t2318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5692);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	ServerIdentity_t2318 * V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t913 * L_0 = (__this->____objects_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(25 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0059;
		}

IL_0016:
		{
			ArrayList_t913 * L_3 = (__this->____objects_0);
			int32_t L_4 = V_1;
			NullCheck(L_3);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
			V_2 = ((ServerIdentity_t2318 *)Castclass(L_5, ServerIdentity_t2318_il2cpp_TypeInfo_var));
			ServerIdentity_t2318 * L_6 = V_2;
			NullCheck(L_6);
			Lease_t2694 * L_7 = ServerIdentity_get_Lease_m17088(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			Lease_UpdateState_m17163(L_7, /*hidden argument*/NULL);
			ServerIdentity_t2318 * L_8 = V_2;
			NullCheck(L_8);
			Lease_t2694 * L_9 = ServerIdentity_get_Lease_m17088(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::get_CurrentState() */, L_9);
			if ((!(((uint32_t)L_10) == ((uint32_t)4))))
			{
				goto IL_0055;
			}
		}

IL_0041:
		{
			ArrayList_t913 * L_11 = (__this->____objects_0);
			int32_t L_12 = V_1;
			NullCheck(L_11);
			VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_11, L_12);
			ServerIdentity_t2318 * L_13 = V_2;
			NullCheck(L_13);
			VirtActionInvoker0::Invoke(5 /* System.Void System.Runtime.Remoting.ServerIdentity::OnLifetimeExpired() */, L_13);
			goto IL_0059;
		}

IL_0055:
		{
			int32_t L_14 = V_1;
			V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
		}

IL_0059:
		{
			int32_t L_15 = V_1;
			ArrayList_t913 * L_16 = (__this->____objects_0);
			NullCheck(L_16);
			int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_16);
			if ((((int32_t)L_15) < ((int32_t)L_17)))
			{
				goto IL_0016;
			}
		}

IL_0067:
		{
			ArrayList_t913 * L_18 = (__this->____objects_0);
			NullCheck(L_18);
			int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_18);
			if (L_19)
			{
				goto IL_007a;
			}
		}

IL_0074:
		{
			LeaseManager_StopManager_m17169(__this, /*hidden argument*/NULL);
		}

IL_007a:
		{
			IL2CPP_LEAVE(0x83, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		Object_t * L_20 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(124)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x83, IL_0083)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0083:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Lifetime.LeaseState
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseStateMethodDeclarations.h"



// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::.cctor()
extern TypeInfo* LeaseManager_t2719_il2cpp_TypeInfo_var;
extern TypeInfo* LifetimeServices_t2721_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t1129_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices__cctor_m17171 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LeaseManager_t2719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5737);
		LifetimeServices_t2721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5709);
		TimeSpan_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1959);
		s_Il2CppMethodIntialized = true;
	}
	{
		LeaseManager_t2719 * L_0 = (LeaseManager_t2719 *)il2cpp_codegen_object_new (LeaseManager_t2719_il2cpp_TypeInfo_var);
		LeaseManager__ctor_m17166(L_0, /*hidden argument*/NULL);
		((LifetimeServices_t2721_StaticFields*)LifetimeServices_t2721_il2cpp_TypeInfo_var->static_fields)->____leaseManager_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1129_il2cpp_TypeInfo_var);
		TimeSpan_t1129  L_1 = TimeSpan_FromSeconds_m15269(NULL /*static, unused*/, (10.0), /*hidden argument*/NULL);
		((LifetimeServices_t2721_StaticFields*)LifetimeServices_t2721_il2cpp_TypeInfo_var->static_fields)->____leaseManagerPollTime_0 = L_1;
		TimeSpan_t1129  L_2 = TimeSpan_FromMinutes_m15268(NULL /*static, unused*/, (5.0), /*hidden argument*/NULL);
		((LifetimeServices_t2721_StaticFields*)LifetimeServices_t2721_il2cpp_TypeInfo_var->static_fields)->____leaseTime_1 = L_2;
		TimeSpan_t1129  L_3 = TimeSpan_FromMinutes_m15268(NULL /*static, unused*/, (2.0), /*hidden argument*/NULL);
		((LifetimeServices_t2721_StaticFields*)LifetimeServices_t2721_il2cpp_TypeInfo_var->static_fields)->____renewOnCallTime_2 = L_3;
		TimeSpan_t1129  L_4 = TimeSpan_FromMinutes_m15268(NULL /*static, unused*/, (2.0), /*hidden argument*/NULL);
		((LifetimeServices_t2721_StaticFields*)LifetimeServices_t2721_il2cpp_TypeInfo_var->static_fields)->____sponsorshipTimeout_3 = L_4;
		return;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_LeaseManagerPollTime()
extern TypeInfo* LifetimeServices_t2721_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t1129  LifetimeServices_get_LeaseManagerPollTime_m17172 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t2721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5709);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t2721_il2cpp_TypeInfo_var);
		TimeSpan_t1129  L_0 = ((LifetimeServices_t2721_StaticFields*)LifetimeServices_t2721_il2cpp_TypeInfo_var->static_fields)->____leaseManagerPollTime_0;
		return L_0;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_LeaseTime()
extern TypeInfo* LifetimeServices_t2721_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t1129  LifetimeServices_get_LeaseTime_m17173 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t2721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5709);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t2721_il2cpp_TypeInfo_var);
		TimeSpan_t1129  L_0 = ((LifetimeServices_t2721_StaticFields*)LifetimeServices_t2721_il2cpp_TypeInfo_var->static_fields)->____leaseTime_1;
		return L_0;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_RenewOnCallTime()
extern TypeInfo* LifetimeServices_t2721_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t1129  LifetimeServices_get_RenewOnCallTime_m17174 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t2721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5709);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t2721_il2cpp_TypeInfo_var);
		TimeSpan_t1129  L_0 = ((LifetimeServices_t2721_StaticFields*)LifetimeServices_t2721_il2cpp_TypeInfo_var->static_fields)->____renewOnCallTime_2;
		return L_0;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_SponsorshipTimeout()
extern TypeInfo* LifetimeServices_t2721_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t1129  LifetimeServices_get_SponsorshipTimeout_m17175 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t2721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5709);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t2721_il2cpp_TypeInfo_var);
		TimeSpan_t1129  L_0 = ((LifetimeServices_t2721_StaticFields*)LifetimeServices_t2721_il2cpp_TypeInfo_var->static_fields)->____sponsorshipTimeout_3;
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern TypeInfo* LifetimeServices_t2721_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_TrackLifetime_m17176 (Object_t * __this /* static, unused */, ServerIdentity_t2318 * ___identity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t2721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5709);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t2721_il2cpp_TypeInfo_var);
		LeaseManager_t2719 * L_0 = ((LifetimeServices_t2721_StaticFields*)LifetimeServices_t2721_il2cpp_TypeInfo_var->static_fields)->____leaseManager_4;
		ServerIdentity_t2318 * L_1 = ___identity;
		NullCheck(L_0);
		LeaseManager_TrackLifetime_m17167(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoTypeMethodDeclarations.h"



// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoMethodDeclarations.h"

// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern TypeInfo* Int32U5BU5D_t1_il2cpp_TypeInfo_var;
extern "C" void ArgInfo__ctor_m17177 (ArgInfo_t2723 * __this, MethodBase_t728 * ___method, uint8_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t718* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		MethodBase_t728 * L_0 = ___method;
		__this->____method_2 = L_0;
		MethodBase_t728 * L_1 = (__this->____method_2);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t718* L_2 = (ParameterInfoU5BU5D_t718*)VirtFuncInvoker0< ParameterInfoU5BU5D_t718* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t718* L_3 = V_0;
		NullCheck(L_3);
		__this->____paramMap_0 = ((Int32U5BU5D_t1*)SZArrayNew(Int32U5BU5D_t1_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		__this->____inoutArgCount_1 = 0;
		uint8_t L_4 = ___type;
		if (L_4)
		{
			goto IL_0069;
		}
	}
	{
		V_1 = 0;
		goto IL_0061;
	}

IL_0035:
	{
		ParameterInfoU5BU5D_t718* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((*(ParameterInfo_t719 **)(ParameterInfo_t719 **)SZArrayLdElema(L_5, L_7)));
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t719 **)(ParameterInfo_t719 **)SZArrayLdElema(L_5, L_7)));
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_8);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		Int32U5BU5D_t1* L_10 = (__this->____paramMap_0);
		int32_t L_11 = (__this->____inoutArgCount_1);
		int32_t L_12 = L_11;
		V_3 = L_12;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_3;
		int32_t L_14 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_13);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_10, L_13)) = (int32_t)L_14;
	}

IL_005d:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0061:
	{
		int32_t L_16 = V_1;
		ParameterInfoU5BU5D_t718* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00a9;
	}

IL_0069:
	{
		V_2 = 0;
		goto IL_00a3;
	}

IL_006d:
	{
		ParameterInfoU5BU5D_t718* L_18 = V_0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		NullCheck((*(ParameterInfo_t719 **)(ParameterInfo_t719 **)SZArrayLdElema(L_18, L_20)));
		Type_t * L_21 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t719 **)(ParameterInfo_t719 **)SZArrayLdElema(L_18, L_20)));
		NullCheck(L_21);
		bool L_22 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_21);
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		ParameterInfoU5BU5D_t718* L_23 = V_0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(ParameterInfo_t719 **)(ParameterInfo_t719 **)SZArrayLdElema(L_23, L_25)));
		bool L_26 = ParameterInfo_get_IsOut_m16501((*(ParameterInfo_t719 **)(ParameterInfo_t719 **)SZArrayLdElema(L_23, L_25)), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_009f;
		}
	}

IL_0086:
	{
		Int32U5BU5D_t1* L_27 = (__this->____paramMap_0);
		int32_t L_28 = (__this->____inoutArgCount_1);
		int32_t L_29 = L_28;
		V_3 = L_29;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_29+(int32_t)1));
		int32_t L_30 = V_3;
		int32_t L_31 = V_2;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_27, L_30)) = (int32_t)L_31;
	}

IL_009f:
	{
		int32_t L_32 = V_2;
		V_2 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00a3:
	{
		int32_t L_33 = V_2;
		ParameterInfoU5BU5D_t718* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
		{
			goto IL_006d;
		}
	}

IL_00a9:
	{
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgCount()
extern "C" int32_t ArgInfo_GetInOutArgCount_m17178 (ArgInfo_t2723 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____inoutArgCount_1);
		return L_0;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t300* ArgInfo_GetInOutArgs_m17179 (ArgInfo_t2723 * __this, ObjectU5BU5D_t300* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t300* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->____inoutArgCount_1);
		V_0 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, L_0));
		V_1 = 0;
		goto IL_0021;
	}

IL_0010:
	{
		ObjectU5BU5D_t300* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t300* L_3 = ___args;
		Int32U5BU5D_t1* L_4 = (__this->____paramMap_0);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6)));
		int32_t L_7 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, L_2)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (__this->____inoutArgCount_1);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0010;
		}
	}
	{
		ObjectU5BU5D_t300* L_11 = V_0;
		return L_11;
	}
}
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResult.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResultMethodDeclarations.h"

// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEvent.h"
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessage.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallbackMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
extern "C" void AsyncResult__ctor_m17180 (AsyncResult_t2235 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
extern "C" Object_t * AsyncResult_get_AsyncState_m17181 (AsyncResult_t2235 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_state_0);
		return L_0;
	}
}
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
extern TypeInfo* ManualResetEvent_t1300_il2cpp_TypeInfo_var;
extern "C" WaitHandle_t1351 * AsyncResult_get_AsyncWaitHandle_m17182 (AsyncResult_t2235 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t1300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2638);
		s_Il2CppMethodIntialized = true;
	}
	AsyncResult_t2235 * V_0 = {0};
	WaitHandle_t1351 * V_1 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t2235 * L_0 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			WaitHandle_t1351 * L_1 = (__this->___handle_1);
			if (L_1)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_2 = (__this->___completed_6);
			ManualResetEvent_t1300 * L_3 = (ManualResetEvent_t1300 *)il2cpp_codegen_object_new (ManualResetEvent_t1300_il2cpp_TypeInfo_var);
			ManualResetEvent__ctor_m6405(L_3, L_2, /*hidden argument*/NULL);
			__this->___handle_1 = L_3;
		}

IL_0021:
		{
			WaitHandle_t1351 * L_4 = (__this->___handle_1);
			V_1 = L_4;
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		AsyncResult_t2235 * L_5 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0033:
	{
		WaitHandle_t1351 * L_6 = V_1;
		return L_6;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
extern "C" bool AsyncResult_get_CompletedSynchronously_m17183 (AsyncResult_t2235 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___sync_completed_5);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
extern "C" bool AsyncResult_get_IsCompleted_m17184 (AsyncResult_t2235 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___completed_6);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
extern "C" bool AsyncResult_get_EndInvokeCalled_m17185 (AsyncResult_t2235 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___endinvoke_called_7);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
extern "C" void AsyncResult_set_EndInvokeCalled_m17186 (AsyncResult_t2235 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___endinvoke_called_7 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
extern "C" Object_t * AsyncResult_get_AsyncDelegate_m17187 (AsyncResult_t2235 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_delegate_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
extern "C" Object_t * AsyncResult_get_NextSink_m17188 (AsyncResult_t2235 * __this, const MethodInfo* method)
{
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" Object_t * AsyncResult_AsyncProcessMessage_m17189 (AsyncResult_t2235 * __this, Object_t * ___msg, Object_t * ___replySink, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1312(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
extern "C" Object_t * AsyncResult_GetReplyMessage_m17190 (AsyncResult_t2235 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___reply_message_14);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
extern "C" void AsyncResult_SetMessageCtrl_m17191 (AsyncResult_t2235 * __this, Object_t * ___mc, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___mc;
		__this->___message_ctrl_13 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
extern "C" void AsyncResult_SetCompletedSynchronously_m17192 (AsyncResult_t2235 * __this, bool ___completed, const MethodInfo* method)
{
	{
		bool L_0 = ___completed;
		__this->___sync_completed_5 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
extern "C" Object_t * AsyncResult_EndInvoke_m17193 (AsyncResult_t2235 * __this, const MethodInfo* method)
{
	AsyncResult_t2235 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t2235 * L_0 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			bool L_1 = (__this->___completed_6);
			if (!L_1)
			{
				goto IL_0019;
			}
		}

IL_0010:
		{
			Object_t * L_2 = (__this->___reply_message_14);
			V_1 = L_2;
			IL2CPP_LEAVE(0x35, FINALLY_001b);
		}

IL_0019:
		{
			IL2CPP_LEAVE(0x22, FINALLY_001b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		AsyncResult_t2235 * L_3 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0022:
	{
		WaitHandle_t1351 * L_4 = (WaitHandle_t1351 *)VirtFuncInvoker0< WaitHandle_t1351 * >::Invoke(8 /* System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle() */, __this);
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_4);
		Object_t * L_5 = (__this->___reply_message_14);
		return L_5;
	}

IL_0035:
	{
		Object_t * L_6 = V_1;
		return L_6;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
extern TypeInfo* ManualResetEvent_t1300_il2cpp_TypeInfo_var;
extern TypeInfo* AsyncCallback_t72_il2cpp_TypeInfo_var;
extern "C" Object_t * AsyncResult_SyncProcessMessage_m17194 (AsyncResult_t2235 * __this, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t1300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2638);
		AsyncCallback_t72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(350);
		s_Il2CppMethodIntialized = true;
	}
	AsyncResult_t2235 * V_0 = {0};
	AsyncCallback_t72 * V_1 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___msg;
		__this->___reply_message_14 = L_0;
		V_0 = __this;
		AsyncResult_t2235 * L_1 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			__this->___completed_6 = 1;
			WaitHandle_t1351 * L_2 = (__this->___handle_1);
			if (!L_2)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			WaitHandle_t1351 * L_3 = (WaitHandle_t1351 *)VirtFuncInvoker0< WaitHandle_t1351 * >::Invoke(8 /* System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle() */, __this);
			NullCheck(((ManualResetEvent_t1300 *)Castclass(L_3, ManualResetEvent_t1300_il2cpp_TypeInfo_var)));
			EventWaitHandle_Set_m6406(((ManualResetEvent_t1300 *)Castclass(L_3, ManualResetEvent_t1300_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x38, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		AsyncResult_t2235 * L_4 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x38, IL_0038)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0038:
	{
		Object_t * L_5 = (__this->___async_callback_8);
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		Object_t * L_6 = (__this->___async_callback_8);
		V_1 = ((AsyncCallback_t72 *)Castclass(L_6, AsyncCallback_t72_il2cpp_TypeInfo_var));
		AsyncCallback_t72 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.AsyncCallback::Invoke(System.IAsyncResult) */, L_7, __this);
	}

IL_0053:
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
extern "C" MonoMethodMessage_t2725 * AsyncResult_get_CallMessage_m17195 (AsyncResult_t2235 * __this, const MethodInfo* method)
{
	{
		MonoMethodMessage_t2725 * L_0 = (__this->___call_message_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
extern "C" void AsyncResult_set_CallMessage_m17196 (AsyncResult_t2235 * __this, MonoMethodMessage_t2725 * ___value, const MethodInfo* method)
{
	{
		MonoMethodMessage_t2725 * L_0 = ___value;
		__this->___call_message_12 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCall.h"
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallD.h"
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallDMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
extern "C" void ConstructionCall__ctor_m17197 (ConstructionCall_t2728 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		MethodCall__ctor_m17230(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type;
		__this->____activationType_14 = L_0;
		Type_t * L_1 = ___type;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_1);
		__this->____activationTypeName_15 = L_2;
		__this->____isContextOk_16 = 1;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConstructionCall__ctor_m17198 (ConstructionCall_t2728 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___context;
		MethodCall__ctor_m17229(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
extern TypeInfo* ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var;
extern "C" void ConstructionCall_InitDictionary_m17199 (ConstructionCall_t2728 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5738);
		s_Il2CppMethodIntialized = true;
	}
	ConstructionCallDictionary_t2730 * V_0 = {0};
	{
		ConstructionCallDictionary_t2730 * L_0 = (ConstructionCallDictionary_t2730 *)il2cpp_codegen_object_new (ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var);
		ConstructionCallDictionary__ctor_m17211(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		ConstructionCallDictionary_t2730 * L_1 = V_0;
		((MethodCall_t2729 *)__this)->___ExternalProperties_8 = L_1;
		ConstructionCallDictionary_t2730 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m17263(L_2, /*hidden argument*/NULL);
		((MethodCall_t2729 *)__this)->___InternalProperties_9 = L_3;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
extern "C" void ConstructionCall_set_IsContextOk_m17200 (ConstructionCall_t2728 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____isContextOk_16 = L_0;
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * ConstructionCall_get_ActivationType_m17201 (ConstructionCall_t2728 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->____activationType_14);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = (__this->____activationTypeName_15);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetType_m5093(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->____activationType_14 = L_2;
	}

IL_0019:
	{
		Type_t * L_3 = (__this->____activationType_14);
		return L_3;
	}
}
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
extern "C" String_t* ConstructionCall_get_ActivationTypeName_m17202 (ConstructionCall_t2728 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____activationTypeName_15);
		return L_0;
	}
}
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
extern "C" Object_t * ConstructionCall_get_Activator_m17203 (ConstructionCall_t2728 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____activator_11);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ConstructionCall_set_Activator_m17204 (ConstructionCall_t2728 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____activator_11 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
extern "C" ObjectU5BU5D_t300* ConstructionCall_get_CallSiteActivationAttributes_m17205 (ConstructionCall_t2728 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t300* L_0 = (__this->____activationAttributes_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
extern "C" void ConstructionCall_SetActivationAttributes_m17206 (ConstructionCall_t2728 * __this, ObjectU5BU5D_t300* ___attributes, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t300* L_0 = ___attributes;
		__this->____activationAttributes_12 = L_0;
		return;
	}
}
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" Object_t * ConstructionCall_get_ContextProperties_m17207 (ConstructionCall_t2728 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____contextProperties_13);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArrayList_t913 * L_1 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_1, /*hidden argument*/NULL);
		__this->____contextProperties_13 = L_1;
	}

IL_0013:
	{
		Object_t * L_2 = (__this->____contextProperties_13);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
extern TypeInfo* ConstructionCall_t2728_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t60_il2cpp_TypeInfo_var;
extern TypeInfo* IActivator_t2700_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t794_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1353_MethodInfo_var;
extern "C" void ConstructionCall_InitMethodProperty_m17208 (ConstructionCall_t2728 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCall_t2728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5717);
		Dictionary_2_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		IActivator_t2700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5739);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IList_t794_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1549);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Dictionary_2__ctor_m1353_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t60 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c4;
		}
	}
	{
		Dictionary_2_t60 * L_2 = ((ConstructionCall_t2728_StaticFields*)ConstructionCall_t2728_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map25_17;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t60 * L_3 = (Dictionary_2_t60 *)il2cpp_codegen_object_new (Dictionary_2_t60_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1353(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m1353_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t60 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral5016, 0);
		Dictionary_2_t60 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral5017, 1);
		Dictionary_2_t60 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral5018, 2);
		Dictionary_2_t60 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral5019, 3);
		Dictionary_2_t60 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral5020, 4);
		Dictionary_2_t60 * L_9 = V_1;
		((ConstructionCall_t2728_StaticFields*)ConstructionCall_t2728_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map25_17 = L_9;
	}

IL_0058:
	{
		Dictionary_2_t60 * L_10 = ((ConstructionCall_t2728_StaticFields*)ConstructionCall_t2728_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map25_17;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_0083;
		}
		if (L_13 == 1)
		{
			goto IL_0090;
		}
		if (L_13 == 2)
		{
			goto IL_009d;
		}
		if (L_13 == 3)
		{
			goto IL_00aa;
		}
		if (L_13 == 4)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00c4;
	}

IL_0083:
	{
		Object_t * L_14 = ___value;
		__this->____activator_11 = ((Object_t *)Castclass(L_14, IActivator_t2700_il2cpp_TypeInfo_var));
		return;
	}

IL_0090:
	{
		Object_t * L_15 = ___value;
		__this->____activationAttributes_12 = ((ObjectU5BU5D_t300*)Castclass(L_15, ObjectU5BU5D_t300_il2cpp_TypeInfo_var));
		return;
	}

IL_009d:
	{
		Object_t * L_16 = ___value;
		__this->____activationType_14 = ((Type_t *)Castclass(L_16, Type_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00aa:
	{
		Object_t * L_17 = ___value;
		__this->____contextProperties_13 = ((Object_t *)Castclass(L_17, IList_t794_il2cpp_TypeInfo_var));
		return;
	}

IL_00b7:
	{
		Object_t * L_18 = ___value;
		__this->____activationTypeName_15 = ((String_t*)Castclass(L_18, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00c4:
	{
		String_t* L_19 = ___key;
		Object_t * L_20 = ___value;
		MethodCall_InitMethodProperty_m17232(__this, L_19, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern "C" void ConstructionCall_GetObjectData_m17209 (ConstructionCall_t2728 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___context;
		MethodCall_GetObjectData_m17233(__this, L_0, L_1, /*hidden argument*/NULL);
		Object_t * L_2 = (__this->____contextProperties_13);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t793_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		V_0 = (Object_t *)NULL;
	}

IL_001c:
	{
		SerializationInfo_t669 * L_6 = ___info;
		Object_t * L_7 = (__this->____activator_11);
		NullCheck(L_6);
		SerializationInfo_AddValue_m5012(L_6, (String_t*) &_stringLiteral5016, L_7, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_8 = ___info;
		ObjectU5BU5D_t300* L_9 = (__this->____activationAttributes_12);
		NullCheck(L_8);
		SerializationInfo_AddValue_m5012(L_8, (String_t*) &_stringLiteral5017, (Object_t *)(Object_t *)L_9, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_10 = ___info;
		NullCheck(L_10);
		SerializationInfo_AddValue_m5012(L_10, (String_t*) &_stringLiteral5018, NULL, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_11 = ___info;
		Object_t * L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m5012(L_11, (String_t*) &_stringLiteral5019, L_12, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_13 = ___info;
		String_t* L_14 = (__this->____activationTypeName_15);
		NullCheck(L_13);
		SerializationInfo_AddValue_m5012(L_13, (String_t*) &_stringLiteral5020, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
extern "C" Object_t * ConstructionCall_get_Properties_m17210 (ConstructionCall_t2728 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = MethodCall_get_Properties_m17240(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary.h"


// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.ctor(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var;
extern "C" void ConstructionCallDictionary__ctor_m17211 (ConstructionCallDictionary_t2730 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5738);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m17259(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var);
		StringU5BU5D_t258* L_1 = ((ConstructionCallDictionary_t2730_StaticFields*)ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m17261(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t258_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var;
extern "C" void ConstructionCallDictionary__cctor_m17212 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5738);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t258* L_0 = ((StringU5BU5D_t258*)SZArrayNew(StringU5BU5D_t258_il2cpp_TypeInfo_var, ((int32_t)11)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral5021);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral5021;
		StringU5BU5D_t258* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral5022);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral5022;
		StringU5BU5D_t258* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral5023);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)(String_t*) &_stringLiteral5023;
		StringU5BU5D_t258* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral5024);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)(String_t*) &_stringLiteral5024;
		StringU5BU5D_t258* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral5025);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)(String_t*) &_stringLiteral5025;
		StringU5BU5D_t258* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral5026);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)(String_t*) &_stringLiteral5026;
		StringU5BU5D_t258* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral5017);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6)) = (String_t*)(String_t*) &_stringLiteral5017;
		StringU5BU5D_t258* L_7 = L_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 7);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral5018);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 7)) = (String_t*)(String_t*) &_stringLiteral5018;
		StringU5BU5D_t258* L_8 = L_7;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 8);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral5019);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 8)) = (String_t*)(String_t*) &_stringLiteral5019;
		StringU5BU5D_t258* L_9 = L_8;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)9));
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral5016);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, ((int32_t)9))) = (String_t*)(String_t*) &_stringLiteral5016;
		StringU5BU5D_t258* L_10 = L_9;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)10));
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral5020);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, ((int32_t)10))) = (String_t*)(String_t*) &_stringLiteral5020;
		((ConstructionCallDictionary_t2730_StaticFields*)ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6 = L_10;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ConstructionCallDictionary::GetMethodProperty(System.String)
extern TypeInfo* ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t60_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t2998_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1353_MethodInfo_var;
extern "C" Object_t * ConstructionCallDictionary_GetMethodProperty_m17213 (ConstructionCallDictionary_t2730 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5738);
		Dictionary_2_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		IConstructionCallMessage_t2998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5728);
		Dictionary_2__ctor_m1353_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t60 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var);
		Dictionary_2_t60 * L_2 = ((ConstructionCallDictionary_t2730_StaticFields*)ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_7;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t60 * L_3 = (Dictionary_2_t60 *)il2cpp_codegen_object_new (Dictionary_2_t60_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1353(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m1353_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t60 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral5016, 0);
		Dictionary_2_t60 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral5017, 1);
		Dictionary_2_t60 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral5018, 2);
		Dictionary_2_t60 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral5019, 3);
		Dictionary_2_t60 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral5020, 4);
		Dictionary_2_t60 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var);
		((ConstructionCallDictionary_t2730_StaticFields*)ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_7 = L_9;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var);
		Dictionary_2_t60 * L_10 = ((ConstructionCallDictionary_t2730_StaticFields*)ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_7;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_0083;
		}
		if (L_13 == 1)
		{
			goto IL_0094;
		}
		if (L_13 == 2)
		{
			goto IL_00a5;
		}
		if (L_13 == 3)
		{
			goto IL_00b6;
		}
		if (L_13 == 4)
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_00d8;
	}

IL_0083:
	{
		Object_t * L_14 = (((MethodDictionary_t2731 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_14, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var)));
		Object_t * L_15 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.IConstructionCallMessage::get_Activator() */, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_14, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var)));
		return L_15;
	}

IL_0094:
	{
		Object_t * L_16 = (((MethodDictionary_t2731 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_16, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t300* L_17 = (ObjectU5BU5D_t300*)InterfaceFuncInvoker0< ObjectU5BU5D_t300* >::Invoke(4 /* System.Object[] System.Runtime.Remoting.Activation.IConstructionCallMessage::get_CallSiteActivationAttributes() */, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_16, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var)));
		return (Object_t *)L_17;
	}

IL_00a5:
	{
		Object_t * L_18 = (((MethodDictionary_t2731 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_18, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var)));
		Type_t * L_19 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* System.Type System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationType() */, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_18, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var)));
		return L_19;
	}

IL_00b6:
	{
		Object_t * L_20 = (((MethodDictionary_t2731 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_20, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var)));
		Object_t * L_21 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_20, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var)));
		return L_21;
	}

IL_00c7:
	{
		Object_t * L_22 = (((MethodDictionary_t2731 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_22, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var)));
		String_t* L_23 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationTypeName() */, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_22, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var)));
		return L_23;
	}

IL_00d8:
	{
		String_t* L_24 = ___key;
		Object_t * L_25 = MethodDictionary_GetMethodProperty_m17267(__this, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::SetMethodProperty(System.String,System.Object)
extern TypeInfo* ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t60_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t2998_il2cpp_TypeInfo_var;
extern TypeInfo* IActivator_t2700_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1353_MethodInfo_var;
extern "C" void ConstructionCallDictionary_SetMethodProperty_m17214 (ConstructionCallDictionary_t2730 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5738);
		Dictionary_2_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		IConstructionCallMessage_t2998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5728);
		IActivator_t2700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5739);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		Dictionary_2__ctor_m1353_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t60 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0093;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var);
		Dictionary_2_t60 * L_2 = ((ConstructionCallDictionary_t2730_StaticFields*)ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map29_8;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t60 * L_3 = (Dictionary_2_t60 *)il2cpp_codegen_object_new (Dictionary_2_t60_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1353(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m1353_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t60 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral5016, 0);
		Dictionary_2_t60 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral5017, 1);
		Dictionary_2_t60 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral5018, 1);
		Dictionary_2_t60 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral5019, 1);
		Dictionary_2_t60 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral5020, 1);
		Dictionary_2_t60 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var);
		((ConstructionCallDictionary_t2730_StaticFields*)ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map29_8 = L_9;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var);
		Dictionary_2_t60 * L_10 = ((ConstructionCallDictionary_t2730_StaticFields*)ConstructionCallDictionary_t2730_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map29_8;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_0093;
	}

IL_0070:
	{
		Object_t * L_15 = (((MethodDictionary_t2731 *)__this)->____message_1);
		Object_t * L_16 = ___value;
		NullCheck(((Object_t *)Castclass(L_15, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< Object_t * >::Invoke(3 /* System.Void System.Runtime.Remoting.Activation.IConstructionCallMessage::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_15, IConstructionCallMessage_t2998_il2cpp_TypeInfo_var)), ((Object_t *)Castclass(L_16, IActivator_t2700_il2cpp_TypeInfo_var)));
		goto IL_009d;
	}

IL_0088:
	{
		ArgumentException_t356 * L_17 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_17, (String_t*) &_stringLiteral5027, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0093:
	{
		String_t* L_18 = ___key;
		Object_t * L_19 = ___value;
		MethodDictionary_SetMethodProperty_m17268(__this, L_18, L_19, /*hidden argument*/NULL);
		goto IL_009d;
	}

IL_009d:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.ctor()
extern "C" void EnvoyTerminatorSink__ctor_m17215 (EnvoyTerminatorSink_t2732 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.cctor()
extern TypeInfo* EnvoyTerminatorSink_t2732_il2cpp_TypeInfo_var;
extern "C" void EnvoyTerminatorSink__cctor_m17216 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnvoyTerminatorSink_t2732_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5711);
		s_Il2CppMethodIntialized = true;
	}
	{
		EnvoyTerminatorSink_t2732 * L_0 = (EnvoyTerminatorSink_t2732 *)il2cpp_codegen_object_new (EnvoyTerminatorSink_t2732_il2cpp_TypeInfo_var);
		EnvoyTerminatorSink__ctor_m17215(L_0, /*hidden argument*/NULL);
		((EnvoyTerminatorSink_t2732_StaticFields*)EnvoyTerminatorSink_t2732_il2cpp_TypeInfo_var->static_fields)->___Instance_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_Header.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object)
extern "C" void Header__ctor_m17217 (Header_t2733 * __this, String_t* ____Name, Object_t * ____Value, const MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		Header__ctor_m17218(__this, L_0, L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean)
extern "C" void Header__ctor_m17218 (Header_t2733 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, const MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		bool L_2 = ____MustUnderstand;
		Header__ctor_m17219(__this, L_0, L_1, L_2, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean,System.String)
extern "C" void Header__ctor_m17219 (Header_t2733 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, String_t* ____HeaderNamespace, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		String_t* L_0 = ____Name;
		__this->___Name_2 = L_0;
		Object_t * L_1 = ____Value;
		__this->___Value_3 = L_1;
		bool L_2 = ____MustUnderstand;
		__this->___MustUnderstand_1 = L_2;
		String_t* L_3 = ____HeaderNamespace;
		__this->___HeaderNamespace_0 = L_3;
		return;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContex.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContexMethodDeclarations.h"

// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemoti.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntry.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemotiMethodDeclarations.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntryMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor()
extern TypeInfo* CallContextRemotingData_t2734_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext__ctor_m17220 (LogicalCallContext_t2735 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallContextRemotingData_t2734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5740);
		s_Il2CppMethodIntialized = true;
	}
	{
		CallContextRemotingData_t2734 * L_0 = (CallContextRemotingData_t2734 *)il2cpp_codegen_object_new (CallContextRemotingData_t2734_il2cpp_TypeInfo_var);
		CallContextRemotingData__ctor_m17226(L_0, /*hidden argument*/NULL);
		__this->____remotingData_1 = L_0;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* CallContextRemotingData_t2734_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext__ctor_m17221 (LogicalCallContext_t2735 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallContextRemotingData_t2734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5740);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	SerializationEntry_t2772  V_0 = {0};
	SerializationInfoEnumerator_t1133 * V_1 = {0};
	{
		CallContextRemotingData_t2734 * L_0 = (CallContextRemotingData_t2734 *)il2cpp_codegen_object_new (CallContextRemotingData_t2734_il2cpp_TypeInfo_var);
		CallContextRemotingData__ctor_m17226(L_0, /*hidden argument*/NULL);
		__this->____remotingData_1 = L_0;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_1 = ___info;
		NullCheck(L_1);
		SerializationInfoEnumerator_t1133 * L_2 = SerializationInfo_GetEnumerator_m5045(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_005c;
	}

IL_001a:
	{
		SerializationInfoEnumerator_t1133 * L_3 = V_1;
		NullCheck(L_3);
		SerializationEntry_t2772  L_4 = SerializationInfoEnumerator_get_Current_m17441(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = SerializationEntry_get_Name_m17422((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m1295(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral5028, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		Object_t * L_7 = SerializationEntry_get_Value_m17424((&V_0), /*hidden argument*/NULL);
		__this->____remotingData_1 = ((CallContextRemotingData_t2734 *)Castclass(L_7, CallContextRemotingData_t2734_il2cpp_TypeInfo_var));
		goto IL_005c;
	}

IL_0048:
	{
		String_t* L_8 = SerializationEntry_get_Name_m17422((&V_0), /*hidden argument*/NULL);
		Object_t * L_9 = SerializationEntry_get_Value_m17424((&V_0), /*hidden argument*/NULL);
		LogicalCallContext_SetData_m17224(__this, L_8, L_9, /*hidden argument*/NULL);
	}

IL_005c:
	{
		SerializationInfoEnumerator_t1133 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext() */, L_10);
		if (L_11)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.LogicalCallContext::get_HasInfo()
extern "C" bool LogicalCallContext_get_HasInfo_m17222 (LogicalCallContext_t2735 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Hashtable_t915 * L_0 = (__this->____data_0);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Hashtable_t915 * L_1 = (__this->____data_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_1);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t1150_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext_GetObjectData_m17223 (LogicalCallContext_t2735 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		DictionaryEntry_t1150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2048);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t1150  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t669 * L_0 = ___info;
		CallContextRemotingData_t2734 * L_1 = (__this->____remotingData_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m5012(L_0, (String_t*) &_stringLiteral5028, L_1, /*hidden argument*/NULL);
		Hashtable_t915 * L_2 = (__this->____data_0);
		if (!L_2)
		{
			goto IL_0068;
		}
	}
	{
		Hashtable_t915 * L_3 = (__this->____data_0);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(30 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_3);
		V_1 = L_4;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004c;
		}

IL_0027:
		{
			Object_t * L_5 = V_1;
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_5);
			V_0 = ((*(DictionaryEntry_t1150 *)((DictionaryEntry_t1150 *)UnBox (L_6, DictionaryEntry_t1150_il2cpp_TypeInfo_var))));
			SerializationInfo_t669 * L_7 = ___info;
			Object_t * L_8 = DictionaryEntry_get_Key_m5206((&V_0), /*hidden argument*/NULL);
			Object_t * L_9 = DictionaryEntry_get_Value_m5203((&V_0), /*hidden argument*/NULL);
			NullCheck(L_7);
			SerializationInfo_AddValue_m5012(L_7, ((String_t*)Castclass(L_8, String_t_il2cpp_TypeInfo_var)), L_9, /*hidden argument*/NULL);
		}

IL_004c:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0027;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x68, FINALLY_0056);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_1;
			V_2 = ((Object_t *)IsInst(L_12, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_2;
			if (L_13)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(86)
		}

IL_0061:
		{
			Object_t * L_14 = V_2;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(86)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::SetData(System.String,System.Object)
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext_SetData_m17224 (LogicalCallContext_t2735 * __this, String_t* ___name, Object_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t915 * L_0 = (__this->____data_0);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Hashtable_t915 * L_1 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_1, /*hidden argument*/NULL);
		__this->____data_0 = L_1;
	}

IL_0013:
	{
		Hashtable_t915 * L_2 = (__this->____data_0);
		String_t* L_3 = ___name;
		Object_t * L_4 = ___data;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, L_3, L_4);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.LogicalCallContext::Clone()
extern TypeInfo* LogicalCallContext_t2735_il2cpp_TypeInfo_var;
extern TypeInfo* CallContextRemotingData_t2734_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t1150_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" Object_t * LogicalCallContext_Clone_m17225 (LogicalCallContext_t2735 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogicalCallContext_t2735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5741);
		CallContextRemotingData_t2734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5740);
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		DictionaryEntry_t1150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2048);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	LogicalCallContext_t2735 * V_0 = {0};
	DictionaryEntry_t1150  V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		LogicalCallContext_t2735 * L_0 = (LogicalCallContext_t2735 *)il2cpp_codegen_object_new (LogicalCallContext_t2735_il2cpp_TypeInfo_var);
		LogicalCallContext__ctor_m17220(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		LogicalCallContext_t2735 * L_1 = V_0;
		CallContextRemotingData_t2734 * L_2 = (__this->____remotingData_1);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Object System.Runtime.Remoting.Messaging.CallContextRemotingData::Clone() */, L_2);
		NullCheck(L_1);
		L_1->____remotingData_1 = ((CallContextRemotingData_t2734 *)Castclass(L_3, CallContextRemotingData_t2734_il2cpp_TypeInfo_var));
		Hashtable_t915 * L_4 = (__this->____data_0);
		if (!L_4)
		{
			goto IL_007e;
		}
	}
	{
		LogicalCallContext_t2735 * L_5 = V_0;
		Hashtable_t915 * L_6 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->____data_0 = L_6;
		Hashtable_t915 * L_7 = (__this->____data_0);
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(30 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_7);
		V_2 = L_8;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0062;
		}

IL_003d:
		{
			Object_t * L_9 = V_2;
			NullCheck(L_9);
			Object_t * L_10 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_9);
			V_1 = ((*(DictionaryEntry_t1150 *)((DictionaryEntry_t1150 *)UnBox (L_10, DictionaryEntry_t1150_il2cpp_TypeInfo_var))));
			LogicalCallContext_t2735 * L_11 = V_0;
			NullCheck(L_11);
			Hashtable_t915 * L_12 = (L_11->____data_0);
			Object_t * L_13 = DictionaryEntry_get_Key_m5206((&V_1), /*hidden argument*/NULL);
			Object_t * L_14 = DictionaryEntry_get_Value_m5203((&V_1), /*hidden argument*/NULL);
			NullCheck(L_12);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_12, L_13, L_14);
		}

IL_0062:
		{
			Object_t * L_15 = V_2;
			NullCheck(L_15);
			bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_003d;
			}
		}

IL_006a:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		{
			Object_t * L_17 = V_2;
			V_3 = ((Object_t *)IsInst(L_17, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_18 = V_3;
			if (L_18)
			{
				goto IL_0077;
			}
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(108)
		}

IL_0077:
		{
			Object_t * L_19 = V_3;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_19);
			IL2CPP_END_FINALLY(108)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_007e:
	{
		LogicalCallContext_t2735 * L_20 = V_0;
		return L_20;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.CallContextRemotingData::.ctor()
extern "C" void CallContextRemotingData__ctor_m17226 (CallContextRemotingData_t2734 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.CallContextRemotingData::Clone()
extern TypeInfo* CallContextRemotingData_t2734_il2cpp_TypeInfo_var;
extern "C" Object_t * CallContextRemotingData_Clone_m17227 (CallContextRemotingData_t2734 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallContextRemotingData_t2734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5740);
		s_Il2CppMethodIntialized = true;
	}
	CallContextRemotingData_t2734 * V_0 = {0};
	{
		CallContextRemotingData_t2734 * L_0 = (CallContextRemotingData_t2734 *)il2cpp_codegen_object_new (CallContextRemotingData_t2734_il2cpp_TypeInfo_var);
		CallContextRemotingData__ctor_m17226(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CallContextRemotingData_t2734 * L_1 = V_0;
		String_t* L_2 = (__this->____logicalCallID_0);
		NullCheck(L_1);
		L_1->____logicalCallID_0 = L_2;
		CallContextRemotingData_t2734 * L_3 = V_0;
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDiction.h"
// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDictionMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Remoting.Messaging.Header[])
extern "C" void MethodCall__ctor_m17228 (MethodCall_t2729 * __this, HeaderU5BU5D_t2962* ___h1, const MethodInfo* method)
{
	Header_t2733 * V_0 = {0};
	HeaderU5BU5D_t2962* V_1 = {0};
	int32_t V_2 = 0;
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(21 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::Init() */, __this);
		HeaderU5BU5D_t2962* L_0 = ___h1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		HeaderU5BU5D_t2962* L_1 = ___h1;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_0015;
		}
	}

IL_0014:
	{
		return;
	}

IL_0015:
	{
		HeaderU5BU5D_t2962* L_2 = ___h1;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0035;
	}

IL_001b:
	{
		HeaderU5BU5D_t2962* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(Header_t2733 **)(Header_t2733 **)SZArrayLdElema(L_3, L_5));
		Header_t2733 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (L_6->___Name_2);
		Header_t2733 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (L_8->___Value_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(16 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object) */, __this, L_7, L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		HeaderU5BU5D_t2962* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		MethodCall_ResolveMethod_m17247(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MethodCall__ctor_m17229 (MethodCall_t2729 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	SerializationEntry_t2772  V_0 = {0};
	SerializationInfoEnumerator_t1133 * V_1 = {0};
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(21 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::Init() */, __this);
		SerializationInfo_t669 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfoEnumerator_t1133 * L_1 = SerializationInfo_GetEnumerator_m5045(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0030;
	}

IL_0015:
	{
		SerializationInfoEnumerator_t1133 * L_2 = V_1;
		NullCheck(L_2);
		SerializationEntry_t2772  L_3 = SerializationInfoEnumerator_get_Current_m17441(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = SerializationEntry_get_Name_m17422((&V_0), /*hidden argument*/NULL);
		Object_t * L_5 = SerializationEntry_get_Value_m17424((&V_0), /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(16 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object) */, __this, L_4, L_5);
	}

IL_0030:
	{
		SerializationInfoEnumerator_t1133 * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext() */, L_6);
		if (L_7)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor()
extern "C" void MethodCall__ctor_m17230 (MethodCall_t2729 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C" void MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m17231 (MethodCall_t2729 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String) */, __this, L_0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
extern TypeInfo* MethodCall_t2729_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t60_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* LogicalCallContext_t2735_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1353_MethodInfo_var;
extern "C" void MethodCall_InitMethodProperty_m17232 (MethodCall_t2729 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCall_t2729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5742);
		Dictionary_2_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		LogicalCallContext_t2735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5741);
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		Dictionary_2__ctor_m1353_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t60 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0101;
		}
	}
	{
		Dictionary_2_t60 * L_2 = ((MethodCall_t2729_StaticFields*)MethodCall_t2729_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_10;
		if (L_2)
		{
			goto IL_0070;
		}
	}
	{
		Dictionary_2_t60 * L_3 = (Dictionary_2_t60 *)il2cpp_codegen_object_new (Dictionary_2_t60_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1353(L_3, 7, /*hidden argument*/Dictionary_2__ctor_m1353_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t60 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral5023, 0);
		Dictionary_2_t60 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral5022, 1);
		Dictionary_2_t60 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral5024, 2);
		Dictionary_2_t60 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral5025, 3);
		Dictionary_2_t60 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral5026, 4);
		Dictionary_2_t60 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, (String_t*) &_stringLiteral5021, 5);
		Dictionary_2_t60 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, (String_t*) &_stringLiteral5029, 6);
		Dictionary_2_t60 * L_11 = V_1;
		((MethodCall_t2729_StaticFields*)MethodCall_t2729_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_10 = L_11;
	}

IL_0070:
	{
		Dictionary_2_t60 * L_12 = ((MethodCall_t2729_StaticFields*)MethodCall_t2729_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_10;
		String_t* L_13 = V_0;
		NullCheck(L_12);
		bool L_14 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_12, L_13, (&V_2));
		if (!L_14)
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_15 = V_2;
		if (L_15 == 0)
		{
			goto IL_00a6;
		}
		if (L_15 == 1)
		{
			goto IL_00b3;
		}
		if (L_15 == 2)
		{
			goto IL_00c0;
		}
		if (L_15 == 3)
		{
			goto IL_00cd;
		}
		if (L_15 == 4)
		{
			goto IL_00da;
		}
		if (L_15 == 5)
		{
			goto IL_00e7;
		}
		if (L_15 == 6)
		{
			goto IL_00f4;
		}
	}
	{
		goto IL_0101;
	}

IL_00a6:
	{
		Object_t * L_16 = ___value;
		__this->____typeName_1 = ((String_t*)Castclass(L_16, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00b3:
	{
		Object_t * L_17 = ___value;
		__this->____methodName_2 = ((String_t*)Castclass(L_17, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00c0:
	{
		Object_t * L_18 = ___value;
		__this->____methodSignature_4 = ((TypeU5BU5D_t570*)Castclass(L_18, TypeU5BU5D_t570_il2cpp_TypeInfo_var));
		return;
	}

IL_00cd:
	{
		Object_t * L_19 = ___value;
		__this->____args_3 = ((ObjectU5BU5D_t300*)Castclass(L_19, ObjectU5BU5D_t300_il2cpp_TypeInfo_var));
		return;
	}

IL_00da:
	{
		Object_t * L_20 = ___value;
		__this->____callContext_6 = ((LogicalCallContext_t2735 *)Castclass(L_20, LogicalCallContext_t2735_il2cpp_TypeInfo_var));
		return;
	}

IL_00e7:
	{
		Object_t * L_21 = ___value;
		__this->____uri_0 = ((String_t*)Castclass(L_21, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00f4:
	{
		Object_t * L_22 = ___value;
		__this->____genericArguments_7 = ((TypeU5BU5D_t570*)Castclass(L_22, TypeU5BU5D_t570_il2cpp_TypeInfo_var));
		return;
	}

IL_0101:
	{
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(18 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties() */, __this);
		String_t* L_24 = ___key;
		Object_t * L_25 = ___value;
		NullCheck(L_23);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t1060_il2cpp_TypeInfo_var, L_23, L_24, L_25);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t1150_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void MethodCall_GetObjectData_m17233 (MethodCall_t2729 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		DictionaryEntry_t1150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2048);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t1150  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t669 * L_0 = ___info;
		String_t* L_1 = (__this->____typeName_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m5012(L_0, (String_t*) &_stringLiteral5023, L_1, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_2 = ___info;
		String_t* L_3 = (__this->____methodName_2);
		NullCheck(L_2);
		SerializationInfo_AddValue_m5012(L_2, (String_t*) &_stringLiteral5022, L_3, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_4 = ___info;
		TypeU5BU5D_t570* L_5 = (__this->____methodSignature_4);
		NullCheck(L_4);
		SerializationInfo_AddValue_m5012(L_4, (String_t*) &_stringLiteral5024, (Object_t *)(Object_t *)L_5, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_6 = ___info;
		ObjectU5BU5D_t300* L_7 = (__this->____args_3);
		NullCheck(L_6);
		SerializationInfo_AddValue_m5012(L_6, (String_t*) &_stringLiteral5025, (Object_t *)(Object_t *)L_7, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_8 = ___info;
		LogicalCallContext_t2735 * L_9 = (__this->____callContext_6);
		NullCheck(L_8);
		SerializationInfo_AddValue_m5012(L_8, (String_t*) &_stringLiteral5026, L_9, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_10 = ___info;
		String_t* L_11 = (__this->____uri_0);
		NullCheck(L_10);
		SerializationInfo_AddValue_m5012(L_10, (String_t*) &_stringLiteral5021, L_11, /*hidden argument*/NULL);
		SerializationInfo_t669 * L_12 = ___info;
		TypeU5BU5D_t570* L_13 = (__this->____genericArguments_7);
		NullCheck(L_12);
		SerializationInfo_AddValue_m5012(L_12, (String_t*) &_stringLiteral5029, (Object_t *)(Object_t *)L_13, /*hidden argument*/NULL);
		Object_t * L_14 = (__this->___InternalProperties_9);
		if (!L_14)
		{
			goto IL_00ce;
		}
	}
	{
		Object_t * L_15 = (__this->___InternalProperties_9);
		NullCheck(L_15);
		Object_t * L_16 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t1060_il2cpp_TypeInfo_var, L_15);
		V_1 = L_16;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b2;
		}

IL_008d:
		{
			Object_t * L_17 = V_1;
			NullCheck(L_17);
			Object_t * L_18 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_17);
			V_0 = ((*(DictionaryEntry_t1150 *)((DictionaryEntry_t1150 *)UnBox (L_18, DictionaryEntry_t1150_il2cpp_TypeInfo_var))));
			SerializationInfo_t669 * L_19 = ___info;
			Object_t * L_20 = DictionaryEntry_get_Key_m5206((&V_0), /*hidden argument*/NULL);
			Object_t * L_21 = DictionaryEntry_get_Value_m5203((&V_0), /*hidden argument*/NULL);
			NullCheck(L_19);
			SerializationInfo_AddValue_m5012(L_19, ((String_t*)Castclass(L_20, String_t_il2cpp_TypeInfo_var)), L_21, /*hidden argument*/NULL);
		}

IL_00b2:
		{
			Object_t * L_22 = V_1;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_008d;
			}
		}

IL_00ba:
		{
			IL2CPP_LEAVE(0xCE, FINALLY_00bc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_00bc;
	}

FINALLY_00bc:
	{ // begin finally (depth: 1)
		{
			Object_t * L_24 = V_1;
			V_2 = ((Object_t *)IsInst(L_24, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_25 = V_2;
			if (L_25)
			{
				goto IL_00c7;
			}
		}

IL_00c6:
		{
			IL2CPP_END_FINALLY(188)
		}

IL_00c7:
		{
			Object_t * L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_26);
			IL2CPP_END_FINALLY(188)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(188)
	{
		IL2CPP_JUMP_TBL(0xCE, IL_00ce)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_00ce:
	{
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MethodCall::get_ArgCount()
extern "C" int32_t MethodCall_get_ArgCount_m17234 (MethodCall_t2729 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t300* L_0 = (__this->____args_3);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
extern "C" ObjectU5BU5D_t300* MethodCall_get_Args_m17235 (MethodCall_t2729 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t300* L_0 = (__this->____args_3);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
extern TypeInfo* LogicalCallContext_t2735_il2cpp_TypeInfo_var;
extern "C" LogicalCallContext_t2735 * MethodCall_get_LogicalCallContext_m17236 (MethodCall_t2729 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogicalCallContext_t2735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5741);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogicalCallContext_t2735 * L_0 = (__this->____callContext_6);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		LogicalCallContext_t2735 * L_1 = (LogicalCallContext_t2735 *)il2cpp_codegen_object_new (LogicalCallContext_t2735_il2cpp_TypeInfo_var);
		LogicalCallContext__ctor_m17220(L_1, /*hidden argument*/NULL);
		__this->____callContext_6 = L_1;
	}

IL_0013:
	{
		LogicalCallContext_t2735 * L_2 = (__this->____callContext_6);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
extern "C" MethodBase_t728 * MethodCall_get_MethodBase_m17237 (MethodCall_t2729 * __this, const MethodInfo* method)
{
	{
		MethodBase_t728 * L_0 = (__this->____methodBase_5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		MethodCall_ResolveMethod_m17247(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		MethodBase_t728 * L_1 = (__this->____methodBase_5);
		return L_1;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
extern "C" String_t* MethodCall_get_MethodName_m17238 (MethodCall_t2729 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____methodName_2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		MethodBase_t728 * L_1 = (__this->____methodBase_5);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		__this->____methodName_2 = L_2;
	}

IL_0019:
	{
		String_t* L_3 = (__this->____methodName_2);
		return L_3;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodCall::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodCall_get_MethodSignature_m17239 (MethodCall_t2729 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t718* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t570* L_0 = (__this->____methodSignature_4);
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		MethodBase_t728 * L_1 = (__this->____methodBase_5);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		MethodBase_t728 * L_2 = (__this->____methodBase_5);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t718* L_3 = (ParameterInfoU5BU5D_t718*)VirtFuncInvoker0< ParameterInfoU5BU5D_t718* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t718* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_4 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		TypeU5BU5D_t570* L_5 = (__this->____methodSignature_4);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t718* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t719 **)(ParameterInfo_t719 **)SZArrayLdElema(L_7, L_9)));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t719 **)(ParameterInfo_t719 **)SZArrayLdElema(L_7, L_9)));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, L_6)) = (Type_t *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		ParameterInfoU5BU5D_t718* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0048:
	{
		TypeU5BU5D_t570* L_14 = (__this->____methodSignature_4);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
extern "C" Object_t * MethodCall_get_Properties_m17240 (MethodCall_t2729 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___ExternalProperties_8);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker0::Invoke(19 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary() */, __this);
	}

IL_000e:
	{
		Object_t * L_1 = (__this->___ExternalProperties_8);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
extern TypeInfo* MethodCallDictionary_t2736_il2cpp_TypeInfo_var;
extern "C" void MethodCall_InitDictionary_m17241 (MethodCall_t2729 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCallDictionary_t2736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5743);
		s_Il2CppMethodIntialized = true;
	}
	MethodCallDictionary_t2736 * V_0 = {0};
	{
		MethodCallDictionary_t2736 * L_0 = (MethodCallDictionary_t2736 *)il2cpp_codegen_object_new (MethodCallDictionary_t2736_il2cpp_TypeInfo_var);
		MethodCallDictionary__ctor_m17251(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		MethodCallDictionary_t2736 * L_1 = V_0;
		__this->___ExternalProperties_8 = L_1;
		MethodCallDictionary_t2736 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m17263(L_2, /*hidden argument*/NULL);
		__this->___InternalProperties_9 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
extern "C" String_t* MethodCall_get_TypeName_m17242 (MethodCall_t2729 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____typeName_1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		MethodBase_t728 * L_1 = (__this->____methodBase_5);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->____typeName_1 = L_3;
	}

IL_001e:
	{
		String_t* L_4 = (__this->____typeName_1);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_Uri()
extern "C" String_t* MethodCall_get_Uri_m17243 (MethodCall_t2729 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_0);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
extern "C" void MethodCall_set_Uri_m17244 (MethodCall_t2729 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_0 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodCall::GetArg(System.Int32)
extern "C" Object_t * MethodCall_GetArg_m17245 (MethodCall_t2729 * __this, int32_t ___argNum, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t300* L_0 = (__this->____args_3);
		int32_t L_1 = ___argNum;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_0, L_2));
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
extern "C" void MethodCall_Init_m17246 (MethodCall_t2729 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t2691_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t258_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* MethodInfo_t_il2cpp_TypeInfo_var;
extern "C" void MethodCall_ResolveMethod_m17247 (MethodCall_t2729 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		RemotingException_t2691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5447);
		StringU5BU5D_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		MethodInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1606);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	String_t* V_1 = {0};
	Type_t * V_2 = {0};
	String_t* G_B5_0 = {0};
	{
		String_t* L_0 = (__this->____uri_0);
		if (!L_0)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_1 = (__this->____uri_0);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		Type_t * L_2 = RemotingServices_GetServerTypeForUri_m17056(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_4 = (__this->____typeName_1);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_5 = (__this->____typeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral1509, L_5, (String_t*) &_stringLiteral409, /*hidden argument*/NULL);
		G_B5_0 = L_6;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B5_0 = L_7;
	}

IL_003e:
	{
		V_1 = G_B5_0;
		String_t* L_8 = V_1;
		String_t* L_9 = (__this->____uri_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3275(NULL /*static, unused*/, (String_t*) &_stringLiteral5030, L_8, (String_t*) &_stringLiteral5031, L_9, /*hidden argument*/NULL);
		RemotingException_t2691 * L_11 = (RemotingException_t2691 *)il2cpp_codegen_object_new (RemotingException_t2691_il2cpp_TypeInfo_var);
		RemotingException__ctor_m17051(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_005b:
	{
		String_t* L_12 = (__this->____typeName_1);
		Type_t * L_13 = V_0;
		Type_t * L_14 = MethodCall_CastTo_m17248(__this, L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		Type_t * L_15 = V_2;
		if (L_15)
		{
			goto IL_00a7;
		}
	}
	{
		StringU5BU5D_t258* L_16 = ((StringU5BU5D_t258*)SZArrayNew(StringU5BU5D_t258_il2cpp_TypeInfo_var, 5));
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 0);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral5032);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 0)) = (String_t*)(String_t*) &_stringLiteral5032;
		StringU5BU5D_t258* L_17 = L_16;
		String_t* L_18 = (__this->____typeName_1);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, 1)) = (String_t*)L_18;
		StringU5BU5D_t258* L_19 = L_17;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, (String_t*) &_stringLiteral5033);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, 2)) = (String_t*)(String_t*) &_stringLiteral5033;
		StringU5BU5D_t258* L_20 = L_19;
		Type_t * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_21);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_22);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, 3)) = (String_t*)L_22;
		StringU5BU5D_t258* L_23 = L_20;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 4);
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral54);
		*((String_t**)(String_t**)SZArrayLdElema(L_23, 4)) = (String_t*)(String_t*) &_stringLiteral54;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m1266(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		RemotingException_t2691 * L_25 = (RemotingException_t2691 *)il2cpp_codegen_object_new (RemotingException_t2691_il2cpp_TypeInfo_var);
		RemotingException__ctor_m17051(L_25, L_24, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_00a7:
	{
		Type_t * L_26 = V_2;
		String_t* L_27 = (__this->____methodName_2);
		TypeU5BU5D_t570* L_28 = (__this->____methodSignature_4);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		MethodBase_t728 * L_29 = RemotingServices_GetMethodBaseFromName_m17064(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_29;
		MethodBase_t728 * L_30 = (__this->____methodBase_5);
		if (L_30)
		{
			goto IL_00f5;
		}
	}
	{
		ObjectU5BU5D_t300* L_31 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 4));
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, (String_t*) &_stringLiteral5034);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0)) = (Object_t *)(String_t*) &_stringLiteral5034;
		ObjectU5BU5D_t300* L_32 = L_31;
		String_t* L_33 = (__this->____methodName_2);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 1);
		ArrayElementTypeCheck (L_32, L_33);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 1)) = (Object_t *)L_33;
		ObjectU5BU5D_t300* L_34 = L_32;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 2);
		ArrayElementTypeCheck (L_34, (String_t*) &_stringLiteral5035);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, 2)) = (Object_t *)(String_t*) &_stringLiteral5035;
		ObjectU5BU5D_t300* L_35 = L_34;
		Type_t * L_36 = V_2;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 3);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 3)) = (Object_t *)L_36;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Concat_m1267(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		RemotingException_t2691 * L_38 = (RemotingException_t2691 *)il2cpp_codegen_object_new (RemotingException_t2691_il2cpp_TypeInfo_var);
		RemotingException__ctor_m17051(L_38, L_37, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_38);
	}

IL_00f5:
	{
		Type_t * L_39 = V_2;
		Type_t * L_40 = V_0;
		if ((((Object_t*)(Type_t *)L_39) == ((Object_t*)(Type_t *)L_40)))
		{
			goto IL_0151;
		}
	}
	{
		Type_t * L_41 = V_2;
		NullCheck(L_41);
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_41);
		if (!L_42)
		{
			goto IL_0151;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck(L_43);
		bool L_44 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_43);
		if (L_44)
		{
			goto IL_0151;
		}
	}
	{
		Type_t * L_45 = V_0;
		MethodBase_t728 * L_46 = (__this->____methodBase_5);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		MethodBase_t728 * L_47 = RemotingServices_GetVirtualMethod_m17054(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_47;
		MethodBase_t728 * L_48 = (__this->____methodBase_5);
		if (L_48)
		{
			goto IL_0151;
		}
	}
	{
		ObjectU5BU5D_t300* L_49 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 4));
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 0);
		ArrayElementTypeCheck (L_49, (String_t*) &_stringLiteral5034);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, 0)) = (Object_t *)(String_t*) &_stringLiteral5034;
		ObjectU5BU5D_t300* L_50 = L_49;
		String_t* L_51 = (__this->____methodName_2);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 1);
		ArrayElementTypeCheck (L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 1)) = (Object_t *)L_51;
		ObjectU5BU5D_t300* L_52 = L_50;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 2);
		ArrayElementTypeCheck (L_52, (String_t*) &_stringLiteral5035);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 2)) = (Object_t *)(String_t*) &_stringLiteral5035;
		ObjectU5BU5D_t300* L_53 = L_52;
		Type_t * L_54 = V_0;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 3);
		ArrayElementTypeCheck (L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 3)) = (Object_t *)L_54;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = String_Concat_m1267(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		RemotingException_t2691 * L_56 = (RemotingException_t2691 *)il2cpp_codegen_object_new (RemotingException_t2691_il2cpp_TypeInfo_var);
		RemotingException__ctor_m17051(L_56, L_55, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_56);
	}

IL_0151:
	{
		goto IL_0188;
	}

IL_0153:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		MethodBase_t728 * L_57 = RemotingServices_GetMethodBaseFromMethodMessage_m17063(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_57;
		MethodBase_t728 * L_58 = (__this->____methodBase_5);
		if (L_58)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_59 = (__this->____methodName_2);
		String_t* L_60 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = String_Concat_m3275(NULL /*static, unused*/, (String_t*) &_stringLiteral5034, L_59, (String_t*) &_stringLiteral5035, L_60, /*hidden argument*/NULL);
		RemotingException_t2691 * L_62 = (RemotingException_t2691 *)il2cpp_codegen_object_new (RemotingException_t2691_il2cpp_TypeInfo_var);
		RemotingException__ctor_m17051(L_62, L_61, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_62);
	}

IL_0188:
	{
		MethodBase_t728 * L_63 = (__this->____methodBase_5);
		NullCheck(L_63);
		bool L_64 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_63);
		if (!L_64)
		{
			goto IL_01d1;
		}
	}
	{
		MethodBase_t728 * L_65 = (__this->____methodBase_5);
		NullCheck(L_65);
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters() */, L_65);
		if (!L_66)
		{
			goto IL_01d1;
		}
	}
	{
		TypeU5BU5D_t570* L_67 = MethodCall_get_GenericArguments_m17250(__this, /*hidden argument*/NULL);
		if (L_67)
		{
			goto IL_01b5;
		}
	}
	{
		RemotingException_t2691 * L_68 = (RemotingException_t2691 *)il2cpp_codegen_object_new (RemotingException_t2691_il2cpp_TypeInfo_var);
		RemotingException__ctor_m17051(L_68, (String_t*) &_stringLiteral5036, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_68);
	}

IL_01b5:
	{
		MethodBase_t728 * L_69 = (__this->____methodBase_5);
		TypeU5BU5D_t570* L_70 = MethodCall_get_GenericArguments_m17250(__this, /*hidden argument*/NULL);
		NullCheck(((MethodInfo_t *)Castclass(L_69, MethodInfo_t_il2cpp_TypeInfo_var)));
		MethodInfo_t * L_71 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t570* >::Invoke(32 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, ((MethodInfo_t *)Castclass(L_69, MethodInfo_t_il2cpp_TypeInfo_var)), L_70);
		__this->____methodBase_5 = L_71;
	}

IL_01d1:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Type_t * MethodCall_CastTo_m17248 (MethodCall_t2729 * __this, String_t* ___clientType, Type_t * ___serverType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	TypeU5BU5D_t570* V_1 = {0};
	Type_t * V_2 = {0};
	TypeU5BU5D_t570* V_3 = {0};
	int32_t V_4 = 0;
	{
		String_t* L_0 = ___clientType;
		String_t* L_1 = MethodCall_GetTypeNameFromAssemblyQualifiedName_m17249(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___clientType = L_1;
		String_t* L_2 = ___clientType;
		Type_t * L_3 = ___serverType;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1295(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_6 = ___serverType;
		return L_6;
	}

IL_001a:
	{
		Type_t * L_7 = ___serverType;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_7);
		V_0 = L_8;
		goto IL_003a;
	}

IL_0023:
	{
		String_t* L_9 = ___clientType;
		Type_t * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m1295(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_13 = V_0;
		return L_13;
	}

IL_0033:
	{
		Type_t * L_14 = V_0;
		NullCheck(L_14);
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_14);
		V_0 = L_15;
	}

IL_003a:
	{
		Type_t * L_16 = V_0;
		if (L_16)
		{
			goto IL_0023;
		}
	}
	{
		Type_t * L_17 = ___serverType;
		NullCheck(L_17);
		TypeU5BU5D_t570* L_18 = (TypeU5BU5D_t570*)VirtFuncInvoker0< TypeU5BU5D_t570* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_17);
		V_1 = L_18;
		TypeU5BU5D_t570* L_19 = V_1;
		V_3 = L_19;
		V_4 = 0;
		goto IL_0066;
	}

IL_004b:
	{
		TypeU5BU5D_t570* L_20 = V_3;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_2 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_20, L_22));
		String_t* L_23 = ___clientType;
		Type_t * L_24 = V_2;
		NullCheck(L_24);
		String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_op_Equality_m1295(NULL /*static, unused*/, L_23, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0060;
		}
	}
	{
		Type_t * L_27 = V_2;
		return L_27;
	}

IL_0060:
	{
		int32_t L_28 = V_4;
		V_4 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_0066:
	{
		int32_t L_29 = V_4;
		TypeU5BU5D_t570* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)(((Array_t *)L_30)->max_length))))))
		{
			goto IL_004b;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::GetTypeNameFromAssemblyQualifiedName(System.String)
extern "C" String_t* MethodCall_GetTypeNameFromAssemblyQualifiedName_m17249 (Object_t * __this /* static, unused */, String_t* ___aqname, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	String_t* G_B2_1 = {0};
	int32_t G_B1_0 = 0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = ___aqname;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m3190(L_0, (String_t*) &_stringLiteral5037, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___aqname;
		int32_t L_3 = V_0;
		G_B1_0 = ((int32_t)44);
		G_B1_1 = L_2;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			G_B2_0 = ((int32_t)44);
			G_B2_1 = L_2;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0019;
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		G_B3_0 = ((int32_t)((int32_t)L_4+(int32_t)2));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0019:
	{
		NullCheck(G_B3_2);
		int32_t L_5 = String_IndexOf_m3179(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_7 = ___aqname;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		String_t* L_9 = String_Substring_m1371(L_7, 0, L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = String_Trim_m1528(L_9, /*hidden argument*/NULL);
		___aqname = L_10;
	}

IL_0034:
	{
		String_t* L_11 = ___aqname;
		return L_11;
	}
}
// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::get_GenericArguments()
extern "C" TypeU5BU5D_t570* MethodCall_get_GenericArguments_m17250 (MethodCall_t2729 * __this, const MethodInfo* method)
{
	TypeU5BU5D_t570* V_0 = {0};
	{
		TypeU5BU5D_t570* L_0 = (__this->____genericArguments_7);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		TypeU5BU5D_t570* L_1 = (__this->____genericArguments_7);
		return L_1;
	}

IL_000f:
	{
		MethodBase_t728 * L_2 = (MethodBase_t728 *)VirtFuncInvoker0< MethodBase_t728 * >::Invoke(10 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase() */, __this);
		NullCheck(L_2);
		TypeU5BU5D_t570* L_3 = (TypeU5BU5D_t570*)VirtFuncInvoker0< TypeU5BU5D_t570* >::Invoke(26 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_2);
		TypeU5BU5D_t570* L_4 = L_3;
		V_0 = L_4;
		__this->____genericArguments_7 = L_4;
		TypeU5BU5D_t570* L_5 = V_0;
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern TypeInfo* MethodCallDictionary_t2736_il2cpp_TypeInfo_var;
extern "C" void MethodCallDictionary__ctor_m17251 (MethodCallDictionary_t2736 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCallDictionary_t2736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5743);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m17259(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MethodCallDictionary_t2736_il2cpp_TypeInfo_var);
		StringU5BU5D_t258* L_1 = ((MethodCallDictionary_t2736_StaticFields*)MethodCallDictionary_t2736_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m17261(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t258_il2cpp_TypeInfo_var;
extern TypeInfo* MethodCallDictionary_t2736_il2cpp_TypeInfo_var;
extern "C" void MethodCallDictionary__cctor_m17252 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		MethodCallDictionary_t2736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5743);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t258* L_0 = ((StringU5BU5D_t258*)SZArrayNew(StringU5BU5D_t258_il2cpp_TypeInfo_var, 6));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral5021);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral5021;
		StringU5BU5D_t258* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral5022);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral5022;
		StringU5BU5D_t258* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral5023);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)(String_t*) &_stringLiteral5023;
		StringU5BU5D_t258* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral5024);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)(String_t*) &_stringLiteral5024;
		StringU5BU5D_t258* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral5025);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)(String_t*) &_stringLiteral5025;
		StringU5BU5D_t258* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral5026);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)(String_t*) &_stringLiteral5026;
		((MethodCallDictionary_t2736_StaticFields*)MethodCallDictionary_t2736_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6 = L_5;
		return;
	}
}
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::.ctor(System.Runtime.Remoting.Messaging.MethodDictionary)
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern "C" void DictionaryEnumerator__ctor_m17253 (DictionaryEnumerator_t2737 * __this, MethodDictionary_t2731 * ___methodDictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	DictionaryEnumerator_t2737 * G_B2_0 = {0};
	DictionaryEnumerator_t2737 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	DictionaryEnumerator_t2737 * G_B3_1 = {0};
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		MethodDictionary_t2731 * L_0 = ___methodDictionary;
		__this->____methodDictionary_0 = L_0;
		MethodDictionary_t2731 * L_1 = (__this->____methodDictionary_0);
		NullCheck(L_1);
		Object_t * L_2 = (L_1->____internalProperties_0);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		MethodDictionary_t2731 * L_3 = (__this->____methodDictionary_0);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->____internalProperties_0);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t1060_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		Object_t * L_6 = V_0;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = ((Object_t *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0030:
	{
		NullCheck(G_B3_1);
		G_B3_1->____hashtableEnum_1 = G_B3_0;
		__this->____posMethod_2 = (-1);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Current()
extern "C" Object_t * DictionaryEnumerator_get_Current_m17254 (DictionaryEnumerator_t2737 * __this, const MethodInfo* method)
{
	DictionaryEntry_t1150  V_0 = {0};
	{
		DictionaryEntry_t1150  L_0 = (DictionaryEntry_t1150 )VirtFuncInvoker0< DictionaryEntry_t1150  >::Invoke(6 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m5203((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::MoveNext()
extern TypeInfo* IDictionaryEnumerator_t1360_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern "C" bool DictionaryEnumerator_MoveNext_m17255 (DictionaryEnumerator_t2737 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2578);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____posMethod_2);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)-2))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = (__this->____posMethod_2);
		__this->____posMethod_2 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = (__this->____posMethod_2);
		MethodDictionary_t2731 * L_3 = (__this->____methodDictionary_0);
		NullCheck(L_3);
		StringU5BU5D_t258* L_4 = (L_3->____methodKeys_2);
		NullCheck(L_4);
		if ((((int32_t)L_2) >= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return 1;
	}

IL_002f:
	{
		__this->____posMethod_2 = ((int32_t)-2);
	}

IL_0037:
	{
		Object_t * L_5 = (__this->____hashtableEnum_1);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		goto IL_0062;
	}

IL_0043:
	{
		MethodDictionary_t2731 * L_6 = (__this->____methodDictionary_0);
		Object_t * L_7 = (__this->____hashtableEnum_1);
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(1 /* System.Object System.Collections.IDictionaryEnumerator::get_Key() */, IDictionaryEnumerator_t1360_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_6);
		bool L_9 = MethodDictionary_IsOverridenKey_m17264(L_6, ((String_t*)Castclass(L_8, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0062;
		}
	}
	{
		return 1;
	}

IL_0062:
	{
		Object_t * L_10 = (__this->____hashtableEnum_1);
		NullCheck(L_10);
		bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_10);
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return 0;
	}
}
// System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry()
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionaryEnumerator_t1360_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t1150  DictionaryEnumerator_get_Entry_m17256 (DictionaryEnumerator_t2737 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		IDictionaryEnumerator_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2578);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____posMethod_2);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		MethodDictionary_t2731 * L_1 = (__this->____methodDictionary_0);
		NullCheck(L_1);
		StringU5BU5D_t258* L_2 = (L_1->____methodKeys_2);
		int32_t L_3 = (__this->____posMethod_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		MethodDictionary_t2731 * L_5 = (__this->____methodDictionary_0);
		MethodDictionary_t2731 * L_6 = (__this->____methodDictionary_0);
		NullCheck(L_6);
		StringU5BU5D_t258* L_7 = (L_6->____methodKeys_2);
		int32_t L_8 = (__this->____posMethod_2);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck(L_5);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(18 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, L_5, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9)));
		DictionaryEntry_t1150  L_11 = {0};
		DictionaryEntry__ctor_m12744(&L_11, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4)), L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_003e:
	{
		int32_t L_12 = (__this->____posMethod_2);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_004f;
		}
	}
	{
		Object_t * L_13 = (__this->____hashtableEnum_1);
		if (L_13)
		{
			goto IL_005a;
		}
	}

IL_004f:
	{
		InvalidOperationException_t1116 * L_14 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_14, (String_t*) &_stringLiteral5040, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		Object_t * L_15 = (__this->____hashtableEnum_1);
		NullCheck(L_15);
		DictionaryEntry_t1150  L_16 = (DictionaryEntry_t1150 )InterfaceFuncInvoker0< DictionaryEntry_t1150  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1360_il2cpp_TypeInfo_var, L_15);
		return L_16;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Key()
extern "C" Object_t * DictionaryEnumerator_get_Key_m17257 (DictionaryEnumerator_t2737 * __this, const MethodInfo* method)
{
	DictionaryEntry_t1150  V_0 = {0};
	{
		DictionaryEntry_t1150  L_0 = (DictionaryEntry_t1150 )VirtFuncInvoker0< DictionaryEntry_t1150  >::Invoke(6 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Key_m5206((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Value()
extern "C" Object_t * DictionaryEnumerator_get_Value_m17258 (DictionaryEnumerator_t2737 * __this, const MethodInfo* method)
{
	DictionaryEntry_t1150  V_0 = {0};
	{
		DictionaryEntry_t1150  L_0 = (DictionaryEntry_t1150 )VirtFuncInvoker0< DictionaryEntry_t1150  >::Invoke(6 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m5203((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" void MethodDictionary__ctor_m17259 (MethodDictionary_t2731 * __this, Object_t * ___message, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___message;
		__this->____message_1 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* DictionaryEnumerator_t2737_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m17260 (MethodDictionary_t2731 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEnumerator_t2737_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5744);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryEnumerator_t2737 * L_0 = (DictionaryEnumerator_t2737 *)il2cpp_codegen_object_new (DictionaryEnumerator_t2737_il2cpp_TypeInfo_var);
		DictionaryEnumerator__ctor_m17253(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
extern "C" void MethodDictionary_set_MethodKeys_m17261 (MethodDictionary_t2731 * __this, StringU5BU5D_t258* ___value, const MethodInfo* method)
{
	{
		StringU5BU5D_t258* L_0 = ___value;
		__this->____methodKeys_2 = L_0;
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_AllocInternalProperties_m17262 (MethodDictionary_t2731 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____ownProperties_3 = 1;
		Hashtable_t915 * L_0 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
extern "C" Object_t * MethodDictionary_GetInternalProperties_m17263 (MethodDictionary_t2731 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties() */, __this);
		__this->____internalProperties_0 = L_1;
	}

IL_0014:
	{
		Object_t * L_2 = (__this->____internalProperties_0);
		return L_2;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool MethodDictionary_IsOverridenKey_m17264 (MethodDictionary_t2731 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t258* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (__this->____ownProperties_3);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		StringU5BU5D_t258* L_1 = (__this->____methodKeys_2);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0028;
	}

IL_0015:
	{
		StringU5BU5D_t258* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4));
		String_t* L_5 = ___key;
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1295(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_9 = V_2;
		StringU5BU5D_t258* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_get_Item_m17265 (MethodDictionary_t2731 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		StringU5BU5D_t258* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1295(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_6 = V_0;
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(18 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, __this, L_6);
		return L_7;
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t258* L_10 = (__this->____methodKeys_2);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		Object_t * L_12 = (__this->____internalProperties_0);
		Object_t * L_13 = ___key;
		NullCheck(L_12);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1060_il2cpp_TypeInfo_var, L_12, L_13);
		return L_14;
	}

IL_0047:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
extern "C" void MethodDictionary_set_Item_m17266 (MethodDictionary_t2731 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(12 /* System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object) */, __this, L_0, L_1);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
extern TypeInfo* MethodDictionary_t2731_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t60_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodMessage_t2738_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodReturnMessage_t3002_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1353_MethodInfo_var;
extern "C" Object_t * MethodDictionary_GetMethodProperty_m17267 (MethodDictionary_t2731 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodDictionary_t2731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5745);
		Dictionary_2_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		IMethodMessage_t2738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5698);
		IMethodReturnMessage_t3002_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5746);
		Dictionary_2__ctor_m1353_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t60 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0120;
		}
	}
	{
		Dictionary_2_t60 * L_2 = ((MethodDictionary_t2731_StaticFields*)MethodDictionary_t2731_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_4;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		Dictionary_2_t60 * L_3 = (Dictionary_2_t60 *)il2cpp_codegen_object_new (Dictionary_2_t60_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1353(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m1353_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t60 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral5021, 0);
		Dictionary_2_t60 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral5022, 1);
		Dictionary_2_t60 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral5023, 2);
		Dictionary_2_t60 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral5024, 3);
		Dictionary_2_t60 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral5026, 4);
		Dictionary_2_t60 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, (String_t*) &_stringLiteral5025, 5);
		Dictionary_2_t60 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, (String_t*) &_stringLiteral5038, 6);
		Dictionary_2_t60 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, (String_t*) &_stringLiteral5039, 7);
		Dictionary_2_t60 * L_12 = V_1;
		((MethodDictionary_t2731_StaticFields*)MethodDictionary_t2731_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_4 = L_12;
	}

IL_007c:
	{
		Dictionary_2_t60 * L_13 = ((MethodDictionary_t2731_StaticFields*)MethodDictionary_t2731_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_4;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_00b6;
		}
		if (L_16 == 1)
		{
			goto IL_00c2;
		}
		if (L_16 == 2)
		{
			goto IL_00ce;
		}
		if (L_16 == 3)
		{
			goto IL_00da;
		}
		if (L_16 == 4)
		{
			goto IL_00e6;
		}
		if (L_16 == 5)
		{
			goto IL_00f2;
		}
		if (L_16 == 6)
		{
			goto IL_00fe;
		}
		if (L_16 == 7)
		{
			goto IL_010f;
		}
	}
	{
		goto IL_0120;
	}

IL_00b6:
	{
		Object_t * L_17 = (__this->____message_1);
		NullCheck(L_17);
		String_t* L_18 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_Uri() */, IMethodMessage_t2738_il2cpp_TypeInfo_var, L_17);
		return L_18;
	}

IL_00c2:
	{
		Object_t * L_19 = (__this->____message_1);
		NullCheck(L_19);
		String_t* L_20 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodName() */, IMethodMessage_t2738_il2cpp_TypeInfo_var, L_19);
		return L_20;
	}

IL_00ce:
	{
		Object_t * L_21 = (__this->____message_1);
		NullCheck(L_21);
		String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName() */, IMethodMessage_t2738_il2cpp_TypeInfo_var, L_21);
		return L_22;
	}

IL_00da:
	{
		Object_t * L_23 = (__this->____message_1);
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodSignature() */, IMethodMessage_t2738_il2cpp_TypeInfo_var, L_23);
		return L_24;
	}

IL_00e6:
	{
		Object_t * L_25 = (__this->____message_1);
		NullCheck(L_25);
		LogicalCallContext_t2735 * L_26 = (LogicalCallContext_t2735 *)InterfaceFuncInvoker0< LogicalCallContext_t2735 * >::Invoke(2 /* System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.IMethodMessage::get_LogicalCallContext() */, IMethodMessage_t2738_il2cpp_TypeInfo_var, L_25);
		return L_26;
	}

IL_00f2:
	{
		Object_t * L_27 = (__this->____message_1);
		NullCheck(L_27);
		ObjectU5BU5D_t300* L_28 = (ObjectU5BU5D_t300*)InterfaceFuncInvoker0< ObjectU5BU5D_t300* >::Invoke(1 /* System.Object[] System.Runtime.Remoting.Messaging.IMethodMessage::get_Args() */, IMethodMessage_t2738_il2cpp_TypeInfo_var, L_27);
		return (Object_t *)L_28;
	}

IL_00fe:
	{
		Object_t * L_29 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_29, IMethodReturnMessage_t3002_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t300* L_30 = (ObjectU5BU5D_t300*)InterfaceFuncInvoker0< ObjectU5BU5D_t300* >::Invoke(2 /* System.Object[] System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_OutArgs() */, IMethodReturnMessage_t3002_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_29, IMethodReturnMessage_t3002_il2cpp_TypeInfo_var)));
		return (Object_t *)L_30;
	}

IL_010f:
	{
		Object_t * L_31 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_31, IMethodReturnMessage_t3002_il2cpp_TypeInfo_var)));
		Object_t * L_32 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(3 /* System.Object System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_ReturnValue() */, IMethodReturnMessage_t3002_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_31, IMethodReturnMessage_t3002_il2cpp_TypeInfo_var)));
		return L_32;
	}

IL_0120:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
extern TypeInfo* MethodDictionary_t2731_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t60_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalMessage_t3014_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1353_MethodInfo_var;
extern "C" void MethodDictionary_SetMethodProperty_m17268 (MethodDictionary_t2731 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodDictionary_t2731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5745);
		Dictionary_2_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		IInternalMessage_t3014_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5747);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Dictionary_2__ctor_m1353_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t60 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c2;
		}
	}
	{
		Dictionary_2_t60 * L_2 = ((MethodDictionary_t2731_StaticFields*)MethodDictionary_t2731_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_5;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		Dictionary_2_t60 * L_3 = (Dictionary_2_t60 *)il2cpp_codegen_object_new (Dictionary_2_t60_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1353(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m1353_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t60 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral5026, 0);
		Dictionary_2_t60 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral5038, 0);
		Dictionary_2_t60 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral5039, 0);
		Dictionary_2_t60 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral5022, 1);
		Dictionary_2_t60 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral5023, 1);
		Dictionary_2_t60 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, (String_t*) &_stringLiteral5024, 1);
		Dictionary_2_t60 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, (String_t*) &_stringLiteral5025, 1);
		Dictionary_2_t60 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, (String_t*) &_stringLiteral5021, 2);
		Dictionary_2_t60 * L_12 = V_1;
		((MethodDictionary_t2731_StaticFields*)MethodDictionary_t2731_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_5 = L_12;
	}

IL_007c:
	{
		Dictionary_2_t60 * L_13 = ((MethodDictionary_t2731_StaticFields*)MethodDictionary_t2731_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_5;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_009f;
		}
		if (L_16 == 1)
		{
			goto IL_00a0;
		}
		if (L_16 == 2)
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00c2;
	}

IL_009f:
	{
		return;
	}

IL_00a0:
	{
		ArgumentException_t356 * L_17 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_17, (String_t*) &_stringLiteral5027, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00ab:
	{
		Object_t * L_18 = (__this->____message_1);
		Object_t * L_19 = ___value;
		NullCheck(((Object_t *)Castclass(L_18, IInternalMessage_t3014_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void System.Runtime.Remoting.Messaging.IInternalMessage::set_Uri(System.String) */, IInternalMessage_t3014_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_18, IInternalMessage_t3014_il2cpp_TypeInfo_var)), ((String_t*)Castclass(L_19, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_00c2:
	{
		return;
	}
}
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Keys()
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t662_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_get_Keys_m17269 (MethodDictionary_t2731 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		IEnumerable_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(988);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t913 * V_0 = {0};
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t913 * L_0 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000a:
	{
		ArrayList_t913 * L_1 = V_0;
		StringU5BU5D_t258* L_2 = (__this->____methodKeys_2);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck(L_1);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_1, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_001d:
	{
		int32_t L_6 = V_1;
		StringU5BU5D_t258* L_7 = (__this->____methodKeys_2);
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		Object_t * L_8 = (__this->____internalProperties_0);
		if (!L_8)
		{
			goto IL_007f;
		}
	}
	{
		Object_t * L_9 = (__this->____internalProperties_0);
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t1060_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t662_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0060;
		}

IL_0043:
		{
			Object_t * L_12 = V_3;
			NullCheck(L_12);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_12);
			V_2 = ((String_t*)Castclass(L_13, String_t_il2cpp_TypeInfo_var));
			String_t* L_14 = V_2;
			bool L_15 = MethodDictionary_IsOverridenKey_m17264(__this, L_14, /*hidden argument*/NULL);
			if (L_15)
			{
				goto IL_0060;
			}
		}

IL_0058:
		{
			ArrayList_t913 * L_16 = V_0;
			String_t* L_17 = V_2;
			NullCheck(L_16);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_17);
		}

IL_0060:
		{
			Object_t * L_18 = V_3;
			NullCheck(L_18);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0043;
			}
		}

IL_0068:
		{
			IL2CPP_LEAVE(0x7F, FINALLY_006a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		{
			Object_t * L_20 = V_3;
			V_4 = ((Object_t *)IsInst(L_20, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_21 = V_4;
			if (L_21)
			{
				goto IL_0077;
			}
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(106)
		}

IL_0077:
		{
			Object_t * L_22 = V_4;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(106)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_007f:
	{
		ArrayList_t913 * L_23 = V_0;
		return L_23;
	}
}
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t1150_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_get_Values_m17270 (MethodDictionary_t2731 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		DictionaryEntry_t1150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2048);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t913 * V_0 = {0};
	int32_t V_1 = 0;
	DictionaryEntry_t1150  V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t913 * L_0 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000a:
	{
		ArrayList_t913 * L_1 = V_0;
		StringU5BU5D_t258* L_2 = (__this->____methodKeys_2);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(18 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, __this, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4)));
		NullCheck(L_1);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_1, L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_7 = V_1;
		StringU5BU5D_t258* L_8 = (__this->____methodKeys_2);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		Object_t * L_9 = (__this->____internalProperties_0);
		if (!L_9)
		{
			goto IL_0091;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t1060_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}

IL_0042:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_0044:
		{
			Object_t * L_12 = V_3;
			NullCheck(L_12);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_12);
			V_2 = ((*(DictionaryEntry_t1150 *)((DictionaryEntry_t1150 *)UnBox (L_13, DictionaryEntry_t1150_il2cpp_TypeInfo_var))));
			Object_t * L_14 = DictionaryEntry_get_Key_m5206((&V_2), /*hidden argument*/NULL);
			bool L_15 = MethodDictionary_IsOverridenKey_m17264(__this, ((String_t*)Castclass(L_14, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			if (L_15)
			{
				goto IL_0072;
			}
		}

IL_0064:
		{
			ArrayList_t913 * L_16 = V_0;
			Object_t * L_17 = DictionaryEntry_get_Value_m5203((&V_2), /*hidden argument*/NULL);
			NullCheck(L_16);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_17);
		}

IL_0072:
		{
			Object_t * L_18 = V_3;
			NullCheck(L_18);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0044;
			}
		}

IL_007a:
		{
			IL2CPP_LEAVE(0x91, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		{
			Object_t * L_20 = V_3;
			V_4 = ((Object_t *)IsInst(L_20, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_21 = V_4;
			if (L_21)
			{
				goto IL_0089;
			}
		}

IL_0088:
		{
			IL2CPP_END_FINALLY(124)
		}

IL_0089:
		{
			Object_t * L_22 = V_4;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(124)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0091:
	{
		ArrayList_t913 * L_23 = V_0;
		return L_23;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_Add_m17271 (MethodDictionary_t2731 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0028;
	}

IL_000b:
	{
		StringU5BU5D_t258* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1295(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_6 = V_0;
		Object_t * L_7 = ___value;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(19 /* System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object) */, __this, L_6, L_7);
		return;
	}

IL_0024:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t258* L_10 = (__this->____methodKeys_2);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		if (L_11)
		{
			goto IL_0047;
		}
	}
	{
		Object_t * L_12 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties() */, __this);
		__this->____internalProperties_0 = L_12;
	}

IL_0047:
	{
		Object_t * L_13 = (__this->____internalProperties_0);
		Object_t * L_14 = ___key;
		Object_t * L_15 = ___value;
		NullCheck(L_13);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t1060_il2cpp_TypeInfo_var, L_13, L_14, L_15);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Clear()
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_Clear_m17272 (MethodDictionary_t2731 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Object_t * L_1 = (__this->____internalProperties_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(5 /* System.Void System.Collections.IDictionary::Clear() */, IDictionary_t1060_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::Contains(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern "C" bool MethodDictionary_Contains_m17273 (MethodDictionary_t2731 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0021;
	}

IL_000b:
	{
		StringU5BU5D_t258* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1295(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		return 1;
	}

IL_001d:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_1;
		StringU5BU5D_t258* L_8 = (__this->____methodKeys_2);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_9 = (__this->____internalProperties_0);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		Object_t * L_11 = ___key;
		NullCheck(L_10);
		bool L_12 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(6 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t1060_il2cpp_TypeInfo_var, L_10, L_11);
		return L_12;
	}

IL_0041:
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1060_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_Remove_m17274 (MethodDictionary_t2731 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		IDictionary_t1060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2069);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_002a;
	}

IL_000b:
	{
		StringU5BU5D_t258* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1295(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_t356 * L_6 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_6, (String_t*) &_stringLiteral5027, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0026:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002a:
	{
		int32_t L_8 = V_1;
		StringU5BU5D_t258* L_9 = (__this->____methodKeys_2);
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		Object_t * L_12 = ___key;
		NullCheck(L_11);
		InterfaceActionInvoker1< Object_t * >::Invoke(8 /* System.Void System.Collections.IDictionary::Remove(System.Object) */, IDictionary_t1060_il2cpp_TypeInfo_var, L_11, L_12);
	}

IL_0049:
	{
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern "C" int32_t MethodDictionary_get_Count_m17275 (MethodDictionary_t2731 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Object_t * L_1 = (__this->____internalProperties_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t793_il2cpp_TypeInfo_var, L_1);
		StringU5BU5D_t258* L_3 = (__this->____methodKeys_2);
		NullCheck(L_3);
		return ((int32_t)((int32_t)L_2+(int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))));
	}

IL_001d:
	{
		StringU5BU5D_t258* L_4 = (__this->____methodKeys_2);
		NullCheck(L_4);
		return (((int32_t)(((Array_t *)L_4)->max_length)));
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
extern "C" Object_t * MethodDictionary_get_SyncRoot_m17276 (MethodDictionary_t2731 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_CopyTo_m17277 (MethodDictionary_t2731 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values() */, __this);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t793_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
extern TypeInfo* DictionaryEnumerator_t2737_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_GetEnumerator_m17278 (MethodDictionary_t2731 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEnumerator_t2737_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5744);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryEnumerator_t2737 * L_0 = (DictionaryEnumerator_t2737 *)il2cpp_codegen_object_new (DictionaryEnumerator_t2737_il2cpp_TypeInfo_var);
		DictionaryEnumerator__ctor_m17253(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDicti.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDictiMethodDeclarations.h"

// System.Exception
#include "mscorlib_System_Exception.h"


// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodReturnMessage)
extern TypeInfo* IMethodReturnMessage_t3002_il2cpp_TypeInfo_var;
extern TypeInfo* MethodReturnDictionary_t2739_il2cpp_TypeInfo_var;
extern "C" void MethodReturnDictionary__ctor_m17279 (MethodReturnDictionary_t2739 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodReturnMessage_t3002_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5746);
		MethodReturnDictionary_t2739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5748);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m17259(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		Exception_t306 * L_2 = (Exception_t306 *)InterfaceFuncInvoker0< Exception_t306 * >::Invoke(0 /* System.Exception System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_Exception() */, IMethodReturnMessage_t3002_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MethodReturnDictionary_t2739_il2cpp_TypeInfo_var);
		StringU5BU5D_t258* L_3 = ((MethodReturnDictionary_t2739_StaticFields*)MethodReturnDictionary_t2739_il2cpp_TypeInfo_var->static_fields)->___InternalReturnKeys_6;
		MethodDictionary_set_MethodKeys_m17261(__this, L_3, /*hidden argument*/NULL);
		goto IL_0027;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MethodReturnDictionary_t2739_il2cpp_TypeInfo_var);
		StringU5BU5D_t258* L_4 = ((MethodReturnDictionary_t2739_StaticFields*)MethodReturnDictionary_t2739_il2cpp_TypeInfo_var->static_fields)->___InternalExceptionKeys_7;
		MethodDictionary_set_MethodKeys_m17261(__this, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t258_il2cpp_TypeInfo_var;
extern TypeInfo* MethodReturnDictionary_t2739_il2cpp_TypeInfo_var;
extern "C" void MethodReturnDictionary__cctor_m17280 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		MethodReturnDictionary_t2739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5748);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t258* L_0 = ((StringU5BU5D_t258*)SZArrayNew(StringU5BU5D_t258_il2cpp_TypeInfo_var, 7));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral5021);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral5021;
		StringU5BU5D_t258* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral5022);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral5022;
		StringU5BU5D_t258* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral5023);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)(String_t*) &_stringLiteral5023;
		StringU5BU5D_t258* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral5024);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)(String_t*) &_stringLiteral5024;
		StringU5BU5D_t258* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral5038);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)(String_t*) &_stringLiteral5038;
		StringU5BU5D_t258* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral5039);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)(String_t*) &_stringLiteral5039;
		StringU5BU5D_t258* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral5026);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6)) = (String_t*)(String_t*) &_stringLiteral5026;
		((MethodReturnDictionary_t2739_StaticFields*)MethodReturnDictionary_t2739_il2cpp_TypeInfo_var->static_fields)->___InternalReturnKeys_6 = L_6;
		StringU5BU5D_t258* L_7 = ((StringU5BU5D_t258*)SZArrayNew(StringU5BU5D_t258_il2cpp_TypeInfo_var, 1));
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral5026);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 0)) = (String_t*)(String_t*) &_stringLiteral5026;
		((MethodReturnDictionary_t2739_StaticFields*)MethodReturnDictionary_t2739_il2cpp_TypeInfo_var->static_fields)->___InternalExceptionKeys_7 = L_7;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessageMethodDeclarations.h"

// System.Runtime.Remoting.Messaging.CallType
#include "mscorlib_System_Runtime_Remoting_Messaging_CallType.h"
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethod.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethodMethodDeclarations.h"


// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Properties()
extern TypeInfo* MethodCallDictionary_t2736_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoMethodMessage_get_Properties_m17281 (MonoMethodMessage_t2725 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCallDictionary_t2736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5743);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodCallDictionary_t2736 * L_0 = (__this->___properties_8);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MethodCallDictionary_t2736 * L_1 = (MethodCallDictionary_t2736 *)il2cpp_codegen_object_new (MethodCallDictionary_t2736_il2cpp_TypeInfo_var);
		MethodCallDictionary__ctor_m17251(L_1, __this, /*hidden argument*/NULL);
		__this->___properties_8 = L_1;
	}

IL_0014:
	{
		MethodCallDictionary_t2736 * L_2 = (__this->___properties_8);
		return L_2;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ArgCount()
extern "C" int32_t MonoMethodMessage_get_ArgCount_m17282 (MonoMethodMessage_t2725 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = MonoMethodMessage_get_CallType_m17296(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		ObjectU5BU5D_t300* L_1 = (__this->___args_1);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}

IL_0015:
	{
		ObjectU5BU5D_t300* L_2 = (__this->___args_1);
		NullCheck(L_2);
		return (((int32_t)(((Array_t *)L_2)->max_length)));
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern "C" ObjectU5BU5D_t300* MonoMethodMessage_get_Args_m17283 (MonoMethodMessage_t2725 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t300* L_0 = (__this->___args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t2735 * MonoMethodMessage_get_LogicalCallContext_m17284 (MonoMethodMessage_t2725 * __this, const MethodInfo* method)
{
	{
		LogicalCallContext_t2735 * L_0 = (__this->___ctx_3);
		return L_0;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern "C" MethodBase_t728 * MonoMethodMessage_get_MethodBase_m17285 (MonoMethodMessage_t2725 * __this, const MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoMethodMessage_get_MethodName_m17286 (MonoMethodMessage_t2725 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000e:
	{
		MonoMethod_t * L_2 = (__this->___method_0);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoMethod::get_Name() */, L_2);
		return L_3;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoMethodMessage_get_MethodSignature_m17287 (MonoMethodMessage_t2725 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t718* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t570* L_0 = (__this->___methodSignature_9);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		MonoMethod_t * L_1 = (__this->___method_0);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t718* L_2 = (ParameterInfoU5BU5D_t718*)VirtFuncInvoker0< ParameterInfoU5BU5D_t718* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters() */, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t718* L_3 = V_0;
		NullCheck(L_3);
		__this->___methodSignature_9 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		V_1 = 0;
		goto IL_003a;
	}

IL_0026:
	{
		TypeU5BU5D_t570* L_4 = (__this->___methodSignature_9);
		int32_t L_5 = V_1;
		ParameterInfoU5BU5D_t718* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(ParameterInfo_t719 **)(ParameterInfo_t719 **)SZArrayLdElema(L_6, L_8)));
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t719 **)(ParameterInfo_t719 **)SZArrayLdElema(L_6, L_8)));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_9);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, L_5)) = (Type_t *)L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003a:
	{
		int32_t L_11 = V_1;
		ParameterInfoU5BU5D_t718* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0026;
		}
	}

IL_0040:
	{
		TypeU5BU5D_t570* L_13 = (__this->___methodSignature_9);
		return (Object_t *)L_13;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoMethodMessage_get_TypeName_m17288 (MonoMethodMessage_t2725 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000e:
	{
		MonoMethod_t * L_2 = (__this->___method_0);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoMethod::get_DeclaringType() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_3);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
extern "C" String_t* MonoMethodMessage_get_Uri_m17289 (MonoMethodMessage_t2725 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uri_7);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
extern "C" void MonoMethodMessage_set_Uri_m17290 (MonoMethodMessage_t2725 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___uri_7 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::GetArg(System.Int32)
extern "C" Object_t * MonoMethodMessage_GetArg_m17291 (MonoMethodMessage_t2725 * __this, int32_t ___arg_num, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t300* L_0 = (__this->___args_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return NULL;
	}

IL_000a:
	{
		ObjectU5BU5D_t300* L_1 = (__this->___args_1);
		int32_t L_2 = ___arg_num;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_1, L_3));
	}
}
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern "C" Exception_t306 * MonoMethodMessage_get_Exception_m17292 (MonoMethodMessage_t2725 * __this, const MethodInfo* method)
{
	{
		Exception_t306 * L_0 = (__this->___exc_5);
		return L_0;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern "C" int32_t MonoMethodMessage_get_OutArgCount_m17293 (MonoMethodMessage_t2725 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_t159* V_2 = {0};
	int32_t V_3 = 0;
	{
		ObjectU5BU5D_t300* L_0 = (__this->___args_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		ByteU5BU5D_t159* L_1 = (__this->___arg_types_2);
		V_2 = L_1;
		V_3 = 0;
		goto IL_0028;
	}

IL_0017:
	{
		ByteU5BU5D_t159* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4));
		uint8_t L_5 = V_1;
		if (!((int32_t)((int32_t)L_5&(int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		ByteU5BU5D_t159* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t300* MonoMethodMessage_get_OutArgs_m17294 (MonoMethodMessage_t2725 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ObjectU5BU5D_t300* V_3 = {0};
	uint8_t V_4 = 0x0;
	ByteU5BU5D_t159* V_5 = {0};
	int32_t V_6 = 0;
	{
		ObjectU5BU5D_t300* L_0 = (__this->___args_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ObjectU5BU5D_t300*)NULL;
	}

IL_000a:
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount() */, __this);
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_3 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = 0;
		V_1 = L_3;
		V_0 = L_3;
		ByteU5BU5D_t159* L_4 = (__this->___arg_types_2);
		V_5 = L_4;
		V_6 = 0;
		goto IL_004f;
	}

IL_0029:
	{
		ByteU5BU5D_t159* L_5 = V_5;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		uint8_t L_8 = V_4;
		if (!((int32_t)((int32_t)L_8&(int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		ObjectU5BU5D_t300* L_9 = V_3;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
		ObjectU5BU5D_t300* L_12 = (__this->___args_1);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_11);
		ArrayElementTypeCheck (L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14));
	}

IL_0045:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15+(int32_t)1));
		int32_t L_16 = V_6;
		V_6 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_004f:
	{
		int32_t L_17 = V_6;
		ByteU5BU5D_t159* L_18 = V_5;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t300* L_19 = V_3;
		return L_19;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern "C" Object_t * MonoMethodMessage_get_ReturnValue_m17295 (MonoMethodMessage_t2725 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___rval_4);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.CallType System.Runtime.Remoting.Messaging.MonoMethodMessage::get_CallType()
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern "C" int32_t MonoMethodMessage_get_CallType_m17296 (MonoMethodMessage_t2725 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___call_type_6);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		MonoMethod_t * L_1 = (__this->___method_0);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		bool L_2 = RemotingServices_IsOneWay_m17068(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		__this->___call_type_6 = 3;
	}

IL_001c:
	{
		int32_t L_3 = (__this->___call_type_6);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.CallType
#include "mscorlib_System_Runtime_Remoting_Messaging_CallTypeMethodDeclarations.h"



// System.Runtime.Remoting.Messaging.OneWayAttribute
#include "mscorlib_System_Runtime_Remoting_Messaging_OneWayAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.OneWayAttribute
#include "mscorlib_System_Runtime_Remoting_Messaging_OneWayAttributeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogate.h"
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0.h"
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogateMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0MethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
extern "C" void RemotingSurrogateSelector__ctor_m17297 (RemotingSurrogateSelector_t2745 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
extern const Il2CppType* ObjRef_t2684_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogateSelector_t2745_il2cpp_TypeInfo_var;
extern TypeInfo* ObjRefSurrogate_t2742_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogate_t2743_il2cpp_TypeInfo_var;
extern "C" void RemotingSurrogateSelector__cctor_m17298 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t2684_0_0_0_var = il2cpp_codegen_type_from_index(5684);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		RemotingSurrogateSelector_t2745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5691);
		ObjRefSurrogate_t2742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5749);
		RemotingSurrogate_t2743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5750);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ObjRef_t2684_0_0_0_var), /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t2745_StaticFields*)RemotingSurrogateSelector_t2745_il2cpp_TypeInfo_var->static_fields)->___s_cachedTypeObjRef_0 = L_0;
		ObjRefSurrogate_t2742 * L_1 = (ObjRefSurrogate_t2742 *)il2cpp_codegen_object_new (ObjRefSurrogate_t2742_il2cpp_TypeInfo_var);
		ObjRefSurrogate__ctor_m17303(L_1, /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t2745_StaticFields*)RemotingSurrogateSelector_t2745_il2cpp_TypeInfo_var->static_fields)->____objRefSurrogate_1 = L_1;
		RemotingSurrogate_t2743 * L_2 = (RemotingSurrogate_t2743 *)il2cpp_codegen_object_new (RemotingSurrogate_t2743_il2cpp_TypeInfo_var);
		RemotingSurrogate__ctor_m17300(L_2, /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t2745_StaticFields*)RemotingSurrogateSelector_t2745_il2cpp_TypeInfo_var->static_fields)->____objRemotingSurrogate_2 = L_2;
		return;
	}
}
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
extern TypeInfo* RemotingSurrogateSelector_t2745_il2cpp_TypeInfo_var;
extern TypeInfo* ISurrogateSelector_t2744_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingSurrogateSelector_GetSurrogate_m17299 (RemotingSurrogateSelector_t2745 * __this, Type_t * ___type, StreamingContext_t670  ___context, Object_t ** ___ssout, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingSurrogateSelector_t2745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5691);
		ISurrogateSelector_t2744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5751);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Type::get_IsMarshalByRef() */, L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Object_t ** L_2 = ___ssout;
		*((Object_t **)(L_2)) = (Object_t *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t2745_il2cpp_TypeInfo_var);
		RemotingSurrogate_t2743 * L_3 = ((RemotingSurrogateSelector_t2745_StaticFields*)RemotingSurrogateSelector_t2745_il2cpp_TypeInfo_var->static_fields)->____objRemotingSurrogate_2;
		return L_3;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t2745_il2cpp_TypeInfo_var);
		Type_t * L_4 = ((RemotingSurrogateSelector_t2745_StaticFields*)RemotingSurrogateSelector_t2745_il2cpp_TypeInfo_var->static_fields)->___s_cachedTypeObjRef_0;
		Type_t * L_5 = ___type;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		Object_t ** L_7 = ___ssout;
		*((Object_t **)(L_7)) = (Object_t *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t2745_il2cpp_TypeInfo_var);
		ObjRefSurrogate_t2742 * L_8 = ((RemotingSurrogateSelector_t2745_StaticFields*)RemotingSurrogateSelector_t2745_il2cpp_TypeInfo_var->static_fields)->____objRefSurrogate_1;
		return L_8;
	}

IL_0027:
	{
		Object_t * L_9 = (__this->____next_3);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		Object_t * L_10 = (__this->____next_3);
		Type_t * L_11 = ___type;
		StreamingContext_t670  L_12 = ___context;
		Object_t ** L_13 = ___ssout;
		NullCheck(L_10);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Type_t *, StreamingContext_t670 , Object_t ** >::Invoke(0 /* System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&) */, ISurrogateSelector_t2744_il2cpp_TypeInfo_var, L_10, L_11, L_12, L_13);
		return L_14;
	}

IL_003e:
	{
		Object_t ** L_15 = ___ssout;
		*((Object_t **)(L_15)) = (Object_t *)NULL;
		return (Object_t *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::.ctor()
extern "C" void RemotingSurrogate__ctor_m17300 (RemotingSurrogate_t2743 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern "C" void RemotingSurrogate_GetObjectData_m17301 (RemotingSurrogate_t2743 * __this, Object_t * ___obj, SerializationInfo_t669 * ___si, StreamingContext_t670  ___sc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		s_Il2CppMethodIntialized = true;
	}
	RealProxy_t2747 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		SerializationInfo_t669 * L_1 = ___si;
		if (L_1)
		{
			goto IL_000c;
		}
	}

IL_0006:
	{
		ArgumentNullException_t692 * L_2 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3549(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000c:
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		bool L_4 = RemotingServices_IsTransparentProxy_m17055(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		Object_t * L_5 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		RealProxy_t2747 * L_6 = RemotingServices_GetRealProxy_m17062(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		RealProxy_t2747 * L_7 = V_0;
		SerializationInfo_t669 * L_8 = ___si;
		StreamingContext_t670  L_9 = ___sc;
		NullCheck(L_7);
		VirtActionInvoker2< SerializationInfo_t669 *, StreamingContext_t670  >::Invoke(4 /* System.Void System.Runtime.Remoting.Proxies.RealProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext) */, L_7, L_8, L_9);
		goto IL_002d;
	}

IL_0025:
	{
		Object_t * L_10 = ___obj;
		SerializationInfo_t669 * L_11 = ___si;
		StreamingContext_t670  L_12 = ___sc;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		RemotingServices_GetObjectData_m17066(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingSurrogate_SetObjectData_m17302 (RemotingSurrogate_t2743 * __this, Object_t * ___obj, SerializationInfo_t669 * ___si, StreamingContext_t670  ___sc, Object_t * ___selector, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1312(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::.ctor()
extern "C" void ObjRefSurrogate__ctor_m17303 (ObjRefSurrogate_t2742 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ObjRef_t2684_il2cpp_TypeInfo_var;
extern "C" void ObjRefSurrogate_GetObjectData_m17304 (ObjRefSurrogate_t2742 * __this, Object_t * ___obj, SerializationInfo_t669 * ___si, StreamingContext_t670  ___sc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ObjRef_t2684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5684);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		SerializationInfo_t669 * L_1 = ___si;
		if (L_1)
		{
			goto IL_000c;
		}
	}

IL_0006:
	{
		ArgumentNullException_t692 * L_2 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3549(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000c:
	{
		Object_t * L_3 = ___obj;
		SerializationInfo_t669 * L_4 = ___si;
		StreamingContext_t670  L_5 = ___sc;
		NullCheck(((ObjRef_t2684 *)Castclass(L_3, ObjRef_t2684_il2cpp_TypeInfo_var)));
		VirtActionInvoker2< SerializationInfo_t669 *, StreamingContext_t670  >::Invoke(13 /* System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext) */, ((ObjRef_t2684 *)Castclass(L_3, ObjRef_t2684_il2cpp_TypeInfo_var)), L_4, L_5);
		SerializationInfo_t669 * L_6 = ___si;
		NullCheck(L_6);
		SerializationInfo_AddValue_m5038(L_6, (String_t*) &_stringLiteral4989, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ObjRefSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjRefSurrogate_SetObjectData_m17305 (ObjRefSurrogate_t2742 * __this, Object_t * ___obj, SerializationInfo_t669 * ___si, StreamingContext_t670  ___sc, Object_t * ___selector, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_0, (String_t*) &_stringLiteral5041, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessage.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessageMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern TypeInfo* IMethodMessage_t2738_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m17306 (ReturnMessage_t2746 * __this, Object_t * ___ret, ObjectU5BU5D_t300* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t2735 * ___callCtx, Object_t * ___mcm, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t2738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5698);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___ret;
		__this->____returnValue_4 = L_0;
		ObjectU5BU5D_t300* L_1 = ___outArgs;
		__this->____args_1 = L_1;
		int32_t L_2 = ___outArgsCount;
		__this->____outArgsCount_2 = L_2;
		LogicalCallContext_t2735 * L_3 = ___callCtx;
		__this->____callCtx_3 = L_3;
		Object_t * L_4 = ___mcm;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		Object_t * L_5 = ___mcm;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_Uri() */, IMethodMessage_t2738_il2cpp_TypeInfo_var, L_5);
		__this->____uri_5 = L_6;
		Object_t * L_7 = ___mcm;
		NullCheck(L_7);
		MethodBase_t728 * L_8 = (MethodBase_t728 *)InterfaceFuncInvoker0< MethodBase_t728 * >::Invoke(3 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodBase() */, IMethodMessage_t2738_il2cpp_TypeInfo_var, L_7);
		__this->____methodBase_7 = L_8;
	}

IL_0041:
	{
		ObjectU5BU5D_t300* L_9 = (__this->____args_1);
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_10 = ___outArgsCount;
		__this->____args_1 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, L_10));
	}

IL_0055:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern TypeInfo* IMethodMessage_t2738_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m17307 (ReturnMessage_t2746 * __this, Exception_t306 * ___e, Object_t * ___mcm, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t2738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5698);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Exception_t306 * L_0 = ___e;
		__this->____exception_6 = L_0;
		Object_t * L_1 = ___mcm;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Object_t * L_2 = ___mcm;
		NullCheck(L_2);
		MethodBase_t728 * L_3 = (MethodBase_t728 *)InterfaceFuncInvoker0< MethodBase_t728 * >::Invoke(3 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodBase() */, IMethodMessage_t2738_il2cpp_TypeInfo_var, L_2);
		__this->____methodBase_7 = L_3;
		Object_t * L_4 = ___mcm;
		NullCheck(L_4);
		LogicalCallContext_t2735 * L_5 = (LogicalCallContext_t2735 *)InterfaceFuncInvoker0< LogicalCallContext_t2735 * >::Invoke(2 /* System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.IMethodMessage::get_LogicalCallContext() */, IMethodMessage_t2738_il2cpp_TypeInfo_var, L_4);
		__this->____callCtx_3 = L_5;
	}

IL_0028:
	{
		__this->____args_1 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C" void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m17308 (ReturnMessage_t2746 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String) */, __this, L_0);
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::get_ArgCount()
extern "C" int32_t ReturnMessage_get_ArgCount_m17309 (ReturnMessage_t2746 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t300* L_0 = (__this->____args_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern "C" ObjectU5BU5D_t300* ReturnMessage_get_Args_m17310 (ReturnMessage_t2746 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t300* L_0 = (__this->____args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
extern TypeInfo* LogicalCallContext_t2735_il2cpp_TypeInfo_var;
extern "C" LogicalCallContext_t2735 * ReturnMessage_get_LogicalCallContext_m17311 (ReturnMessage_t2746 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogicalCallContext_t2735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5741);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogicalCallContext_t2735 * L_0 = (__this->____callCtx_3);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		LogicalCallContext_t2735 * L_1 = (LogicalCallContext_t2735 *)il2cpp_codegen_object_new (LogicalCallContext_t2735_il2cpp_TypeInfo_var);
		LogicalCallContext__ctor_m17220(L_1, /*hidden argument*/NULL);
		__this->____callCtx_3 = L_1;
	}

IL_0013:
	{
		LogicalCallContext_t2735 * L_2 = (__this->____callCtx_3);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern "C" MethodBase_t728 * ReturnMessage_get_MethodBase_m17312 (ReturnMessage_t2746 * __this, const MethodInfo* method)
{
	{
		MethodBase_t728 * L_0 = (__this->____methodBase_7);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern "C" String_t* ReturnMessage_get_MethodName_m17313 (ReturnMessage_t2746 * __this, const MethodInfo* method)
{
	{
		MethodBase_t728 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_1 = (__this->____methodName_8);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		MethodBase_t728 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		__this->____methodName_8 = L_3;
	}

IL_0021:
	{
		String_t* L_4 = (__this->____methodName_8);
		return L_4;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern "C" Object_t * ReturnMessage_get_MethodSignature_m17314 (ReturnMessage_t2746 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t718* V_0 = {0};
	int32_t V_1 = 0;
	{
		MethodBase_t728 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		TypeU5BU5D_t570* L_1 = (__this->____methodSignature_9);
		if (L_1)
		{
			goto IL_0048;
		}
	}
	{
		MethodBase_t728 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t718* L_3 = (ParameterInfoU5BU5D_t718*)VirtFuncInvoker0< ParameterInfoU5BU5D_t718* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t718* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_9 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		TypeU5BU5D_t570* L_5 = (__this->____methodSignature_9);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t718* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t719 **)(ParameterInfo_t719 **)SZArrayLdElema(L_7, L_9)));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t719 **)(ParameterInfo_t719 **)SZArrayLdElema(L_7, L_9)));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, L_6)) = (Type_t *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		ParameterInfoU5BU5D_t718* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0048:
	{
		TypeU5BU5D_t570* L_14 = (__this->____methodSignature_9);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
extern TypeInfo* MethodReturnDictionary_t2739_il2cpp_TypeInfo_var;
extern "C" Object_t * ReturnMessage_get_Properties_m17315 (ReturnMessage_t2746 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodReturnDictionary_t2739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5748);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodReturnDictionary_t2739 * L_0 = (__this->____properties_11);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MethodReturnDictionary_t2739 * L_1 = (MethodReturnDictionary_t2739 *)il2cpp_codegen_object_new (MethodReturnDictionary_t2739_il2cpp_TypeInfo_var);
		MethodReturnDictionary__ctor_m17279(L_1, __this, /*hidden argument*/NULL);
		__this->____properties_11 = L_1;
	}

IL_0014:
	{
		MethodReturnDictionary_t2739 * L_2 = (__this->____properties_11);
		return L_2;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern "C" String_t* ReturnMessage_get_TypeName_m17316 (ReturnMessage_t2746 * __this, const MethodInfo* method)
{
	{
		MethodBase_t728 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_1 = (__this->____typeName_10);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		MethodBase_t728 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_3);
		__this->____typeName_10 = L_4;
	}

IL_0026:
	{
		String_t* L_5 = (__this->____typeName_10);
		return L_5;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
extern "C" String_t* ReturnMessage_get_Uri_m17317 (ReturnMessage_t2746 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_5);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern "C" void ReturnMessage_set_Uri_m17318 (ReturnMessage_t2746 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_5 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::GetArg(System.Int32)
extern "C" Object_t * ReturnMessage_GetArg_m17319 (ReturnMessage_t2746 * __this, int32_t ___argNum, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t300* L_0 = (__this->____args_1);
		int32_t L_1 = ___argNum;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_0, L_2));
	}
}
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern "C" Exception_t306 * ReturnMessage_get_Exception_m17320 (ReturnMessage_t2746 * __this, const MethodInfo* method)
{
	{
		Exception_t306 * L_0 = (__this->____exception_6);
		return L_0;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgCount()
extern TypeInfo* ArgInfo_t2723_il2cpp_TypeInfo_var;
extern "C" int32_t ReturnMessage_get_OutArgCount_m17321 (ReturnMessage_t2746 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgInfo_t2723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5752);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t300* L_0 = (__this->____args_1);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectU5BU5D_t300* L_1 = (__this->____args_1);
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		return 0;
	}

IL_0014:
	{
		ArgInfo_t2723 * L_2 = (__this->____inArgInfo_12);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		MethodBase_t728 * L_3 = (MethodBase_t728 *)VirtFuncInvoker0< MethodBase_t728 * >::Invoke(9 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase() */, __this);
		ArgInfo_t2723 * L_4 = (ArgInfo_t2723 *)il2cpp_codegen_object_new (ArgInfo_t2723_il2cpp_TypeInfo_var);
		ArgInfo__ctor_m17177(L_4, L_3, 1, /*hidden argument*/NULL);
		__this->____inArgInfo_12 = L_4;
	}

IL_002e:
	{
		ArgInfo_t2723 * L_5 = (__this->____inArgInfo_12);
		NullCheck(L_5);
		int32_t L_6 = ArgInfo_GetInOutArgCount_m17178(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
extern TypeInfo* ArgInfo_t2723_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t300* ReturnMessage_get_OutArgs_m17322 (ReturnMessage_t2746 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgInfo_t2723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5752);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t300* L_0 = (__this->____outArgs_0);
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		ObjectU5BU5D_t300* L_1 = (__this->____args_1);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		ArgInfo_t2723 * L_2 = (__this->____inArgInfo_12);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		MethodBase_t728 * L_3 = (MethodBase_t728 *)VirtFuncInvoker0< MethodBase_t728 * >::Invoke(9 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase() */, __this);
		ArgInfo_t2723 * L_4 = (ArgInfo_t2723 *)il2cpp_codegen_object_new (ArgInfo_t2723_il2cpp_TypeInfo_var);
		ArgInfo__ctor_m17177(L_4, L_3, 1, /*hidden argument*/NULL);
		__this->____inArgInfo_12 = L_4;
	}

IL_002a:
	{
		ArgInfo_t2723 * L_5 = (__this->____inArgInfo_12);
		ObjectU5BU5D_t300* L_6 = (__this->____args_1);
		NullCheck(L_5);
		ObjectU5BU5D_t300* L_7 = ArgInfo_GetInOutArgs_m17179(L_5, L_6, /*hidden argument*/NULL);
		__this->____outArgs_0 = L_7;
	}

IL_0041:
	{
		ObjectU5BU5D_t300* L_8 = (__this->____outArgs_0);
		return L_8;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern "C" Object_t * ReturnMessage_get_ReturnValue_m17323 (ReturnMessage_t2746 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____returnValue_4);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxyMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void RealProxy__ctor_m17324 (RealProxy_t2747 * __this, Type_t * ___classToProxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___classToProxy;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		RealProxy__ctor_m17326(__this, L_0, L_1, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void RealProxy__ctor_m17325 (RealProxy_t2747 * __this, Type_t * ___classToProxy, ClientIdentity_t2686 * ___identity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___classToProxy;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		RealProxy__ctor_m17326(__this, L_0, L_1, NULL, /*hidden argument*/NULL);
		ClientIdentity_t2686 * L_2 = ___identity;
		__this->____objectIdentity_3 = L_2;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void RealProxy__ctor_m17326 (RealProxy_t2747 * __this, Type_t * ___classToProxy, IntPtr_t ___stub, Object_t * ___stubData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____targetDomainId_1 = (-1);
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___classToProxy;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Type::get_IsMarshalByRef() */, L_0);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		Type_t * L_2 = ___classToProxy;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_2);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_t356 * L_4 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_4, (String_t*) &_stringLiteral5042, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0028:
	{
		Type_t * L_5 = ___classToProxy;
		__this->___class_to_proxy_0 = L_5;
		IntPtr_t L_6 = ___stub;
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Inequality_m3195(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		NotSupportedException_t303 * L_9 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_9, (String_t*) &_stringLiteral5043, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0047:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
extern "C" Type_t * RealProxy_InternalGetProxyType_m17327 (Object_t * __this /* static, unused */, Object_t * ___transparentProxy, const MethodInfo* method)
{
	typedef Type_t * (*RealProxy_InternalGetProxyType_m17327_ftn) (Object_t *);
	static RealProxy_InternalGetProxyType_m17327_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RealProxy_InternalGetProxyType_m17327_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)");
	return _il2cpp_icall_func(___transparentProxy);
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
extern const Il2CppType* MarshalByRefObject_t882_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * RealProxy_GetProxiedType_m17328 (RealProxy_t2747 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t882_0_0_0_var = il2cpp_codegen_type_from_index(2117);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____objTP_4);
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_1 = (__this->___class_to_proxy_0);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_1);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t882_0_0_0_var), /*hidden argument*/NULL);
		return L_3;
	}

IL_0020:
	{
		Type_t * L_4 = (__this->___class_to_proxy_0);
		return L_4;
	}

IL_0027:
	{
		Object_t * L_5 = (__this->____objTP_4);
		Type_t * L_6 = RealProxy_InternalGetProxyType_m17327(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern "C" void RealProxy_GetObjectData_m17329 (RealProxy_t2747 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, __this);
		V_0 = L_0;
		Object_t * L_1 = V_0;
		SerializationInfo_t669 * L_2 = ___info;
		StreamingContext_t670  L_3 = ___context;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		RemotingServices_GetObjectData_m17066(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::get_ObjectIdentity()
extern "C" Identity_t2685 * RealProxy_get_ObjectIdentity_m17330 (RealProxy_t2747 * __this, const MethodInfo* method)
{
	{
		Identity_t2685 * L_0 = (__this->____objectIdentity_3);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::set_ObjectIdentity(System.Runtime.Remoting.Identity)
extern "C" void RealProxy_set_ObjectIdentity_m17331 (RealProxy_t2747 * __this, Identity_t2685 * ___value, const MethodInfo* method)
{
	{
		Identity_t2685 * L_0 = ___value;
		__this->____objectIdentity_3 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
extern "C" Object_t * RealProxy_InternalGetTransparentProxy_m17332 (RealProxy_t2747 * __this, String_t* ___className, const MethodInfo* method)
{
	typedef Object_t * (*RealProxy_InternalGetTransparentProxy_m17332_ftn) (RealProxy_t2747 *, String_t*);
	static RealProxy_InternalGetTransparentProxy_m17332_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RealProxy_InternalGetTransparentProxy_m17332_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)");
	return _il2cpp_icall_func(__this, ___className);
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
extern const Il2CppType* MarshalByRefObject_t882_0_0_0_var;
extern TypeInfo* IRemotingTypeInfo_t2688_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * RealProxy_GetTransparentProxy_m17333 (RealProxy_t2747 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t882_0_0_0_var = il2cpp_codegen_type_from_index(2117);
		IRemotingTypeInfo_t2688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5685);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object_t * L_0 = (__this->____objTP_4);
		if (L_0)
		{
			goto IL_005a;
		}
	}
	{
		V_1 = ((Object_t *)IsInst(__this, IRemotingTypeInfo_t2688_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t2688_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t882_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m1295(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003f;
		}
	}

IL_0033:
	{
		Type_t * L_9 = (__this->___class_to_proxy_0);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_9);
		V_0 = L_10;
	}

IL_003f:
	{
		goto IL_004d;
	}

IL_0041:
	{
		Type_t * L_11 = (__this->___class_to_proxy_0);
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_11);
		V_0 = L_12;
	}

IL_004d:
	{
		String_t* L_13 = V_0;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String) */, __this, L_13);
		__this->____objTP_4 = L_14;
	}

IL_005a:
	{
		Object_t * L_15 = (__this->____objTP_4);
		return L_15;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
extern "C" void RealProxy_SetTargetDomain_m17334 (RealProxy_t2747 * __this, int32_t ___domainId, const MethodInfo* method)
{
	{
		int32_t L_0 = ___domainId;
		__this->____targetDomainId_1 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern "C" void RemotingProxy__ctor_m17335 (RemotingProxy_t2749 * __this, Type_t * ___type, ClientIdentity_t2686 * ___identity, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		ClientIdentity_t2686 * L_1 = ___identity;
		RealProxy__ctor_m17325(__this, L_0, L_1, /*hidden argument*/NULL);
		ClientIdentity_t2686 * L_2 = ___identity;
		NullCheck(L_2);
		Object_t * L_3 = Identity_get_ChannelSink_m17019(L_2, /*hidden argument*/NULL);
		__this->____sink_7 = L_3;
		__this->____hasEnvoySink_8 = 0;
		ClientIdentity_t2686 * L_4 = ___identity;
		NullCheck(L_4);
		String_t* L_5 = ClientIdentity_get_TargetUri_m17030(L_4, /*hidden argument*/NULL);
		((RealProxy_t2747 *)__this)->____targetUri_2 = L_5;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.String,System.Object[])
extern "C" void RemotingProxy__ctor_m17336 (RemotingProxy_t2749 * __this, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t300* ___activationAttributes, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		RealProxy__ctor_m17324(__this, L_0, /*hidden argument*/NULL);
		__this->____hasEnvoySink_8 = 0;
		Type_t * L_1 = ___type;
		String_t* L_2 = ___activationUrl;
		ObjectU5BU5D_t300* L_3 = ___activationAttributes;
		ConstructionCall_t2728 * L_4 = ActivationServices_CreateConstructionCall_m17101(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->____ctorCall_9 = L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.cctor()
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t2749_il2cpp_TypeInfo_var;
extern "C" void RemotingProxy__cctor_m17337 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		RemotingProxy_t2749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5701);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(49 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_0, (String_t*) &_stringLiteral5044);
		((RemotingProxy_t2749_StaticFields*)RemotingProxy_t2749_il2cpp_TypeInfo_var->static_fields)->____cache_GetTypeMethod_5 = L_1;
		Type_t * L_2 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		MethodInfo_t * L_3 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(49 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_2, (String_t*) &_stringLiteral5045);
		((RemotingProxy_t2749_StaticFields*)RemotingProxy_t2749_il2cpp_TypeInfo_var->static_fields)->____cache_GetHashCodeMethod_6 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Proxies.RemotingProxy::get_TypeName()
extern TypeInfo* ClientIdentity_t2686_il2cpp_TypeInfo_var;
extern TypeInfo* IRemotingTypeInfo_t2688_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingProxy_get_TypeName_m17338 (RemotingProxy_t2749 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientIdentity_t2686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5703);
		IRemotingTypeInfo_t2688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5685);
		s_Il2CppMethodIntialized = true;
	}
	ObjRef_t2684 * V_0 = {0};
	{
		Identity_t2685 * L_0 = (((RealProxy_t2747 *)__this)->____objectIdentity_3);
		if (!((ClientIdentity_t2686 *)IsInst(L_0, ClientIdentity_t2686_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		Identity_t2685 * L_1 = (((RealProxy_t2747 *)__this)->____objectIdentity_3);
		NullCheck(L_1);
		ObjRef_t2684 * L_2 = (ObjRef_t2684 *)VirtFuncInvoker1< ObjRef_t2684 *, Type_t * >::Invoke(4 /* System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::CreateObjRef(System.Type) */, L_1, (Type_t *)NULL);
		V_0 = L_2;
		ObjRef_t2684 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(9 /* System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo() */, L_3);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		ObjRef_t2684 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(9 /* System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t2688_il2cpp_TypeInfo_var, L_6);
		return L_7;
	}

IL_002e:
	{
		Type_t * L_8 = RealProxy_GetProxiedType_m17328(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_8);
		return L_9;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::Finalize()
extern TypeInfo* ClientActivatedIdentity_t2695_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern "C" void RemotingProxy_Finalize_m17339 (RemotingProxy_t2749 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientActivatedIdentity_t2695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5695);
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Identity_t2685 * L_0 = (((RealProxy_t2747 *)__this)->____objectIdentity_3);
			if (!L_0)
			{
				goto IL_0020;
			}
		}

IL_0008:
		{
			Identity_t2685 * L_1 = (((RealProxy_t2747 *)__this)->____objectIdentity_3);
			if (((ClientActivatedIdentity_t2695 *)IsInst(L_1, ClientActivatedIdentity_t2695_il2cpp_TypeInfo_var)))
			{
				goto IL_0020;
			}
		}

IL_0015:
		{
			Identity_t2685 * L_2 = (((RealProxy_t2747 *)__this)->____objectIdentity_3);
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
			RemotingServices_DisposeIdentity_m17080(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		}

IL_0020:
		{
			IL2CPP_LEAVE(0x29, FINALLY_0022);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		Object_Finalize_m1886(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(34)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_JUMP_TBL(0x29, IL_0029)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0029:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern TypeInfo* ChannelServices_t2710_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t2749_il2cpp_TypeInfo_var;
extern TypeInfo* MarshalByRefObject_t882_il2cpp_TypeInfo_var;
extern "C" MarshalByRefObject_t882 * ProxyAttribute_CreateInstance_m17340 (ProxyAttribute_t2750 * __this, Type_t * ___serverType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t2710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5700);
		RemotingProxy_t2749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5701);
		MarshalByRefObject_t882_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2117);
		s_Il2CppMethodIntialized = true;
	}
	RemotingProxy_t2749 * V_0 = {0};
	{
		Type_t * L_0 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t2710_il2cpp_TypeInfo_var);
		String_t* L_1 = ((ChannelServices_t2710_StaticFields*)ChannelServices_t2710_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		RemotingProxy_t2749 * L_2 = (RemotingProxy_t2749 *)il2cpp_codegen_object_new (RemotingProxy_t2749_il2cpp_TypeInfo_var);
		RemotingProxy__ctor_m17336(L_2, L_0, L_1, (ObjectU5BU5D_t300*)(ObjectU5BU5D_t300*)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		RemotingProxy_t2749 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_3);
		return ((MarshalByRefObject_t882 *)Castclass(L_4, MarshalByRefObject_t882_il2cpp_TypeInfo_var));
	}
}
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern TypeInfo* RemotingServices_t2692_il2cpp_TypeInfo_var;
extern "C" RealProxy_t2747 * ProxyAttribute_CreateProxy_m17341 (ProxyAttribute_t2750 * __this, ObjRef_t2684 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t2693 * ___serverContext, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t2692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5539);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjRef_t2684 * L_0 = ___objRef;
		Type_t * L_1 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t2692_il2cpp_TypeInfo_var);
		Object_t * L_2 = RemotingServices_GetProxyForRemoteObject_m17077(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		RealProxy_t2747 * L_3 = RemotingServices_GetRealProxy_m17062(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ProxyAttribute_GetPropertiesForNewContext_m17342 (ProxyAttribute_t2750 * __this, Object_t * ___msg, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool ProxyAttribute_IsContextOK_m17343 (ProxyAttribute_t2750 * __this, Context_t2693 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServices.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Services.TrackingServices::.cctor()
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* TrackingServices_t2751_il2cpp_TypeInfo_var;
extern "C" void TrackingServices__cctor_m17344 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		TrackingServices_t2751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5694);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t913 * L_0 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_0, /*hidden argument*/NULL);
		((TrackingServices_t2751_StaticFields*)TrackingServices_t2751_il2cpp_TypeInfo_var->static_fields)->____handlers_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyMarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern const Il2CppType* ITrackingHandler_t3016_0_0_0_var;
extern TypeInfo* TrackingServices_t2751_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandlerU5BU5D_t3015_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandler_t3016_il2cpp_TypeInfo_var;
extern "C" void TrackingServices_NotifyMarshaledObject_m17345 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t2684 * ___or, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITrackingHandler_t3016_0_0_0_var = il2cpp_codegen_type_from_index(5753);
		TrackingServices_t2751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5694);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		ITrackingHandlerU5BU5D_t3015_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5754);
		ITrackingHandler_t3016_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5753);
		s_Il2CppMethodIntialized = true;
	}
	ITrackingHandlerU5BU5D_t3015* V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t2751_il2cpp_TypeInfo_var);
		ArrayList_t913 * L_0 = ((TrackingServices_t2751_StaticFields*)TrackingServices_t2751_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(25 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_1 = L_1;
		Object_t * L_2 = V_1;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t2751_il2cpp_TypeInfo_var);
			ArrayList_t913 * L_3 = ((TrackingServices_t2751_StaticFields*)TrackingServices_t2751_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			NullCheck(L_3);
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_3);
			if (L_4)
			{
				goto IL_001f;
			}
		}

IL_001d:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_003b);
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t2751_il2cpp_TypeInfo_var);
			ArrayList_t913 * L_5 = ((TrackingServices_t2751_StaticFields*)TrackingServices_t2751_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_6 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ITrackingHandler_t3016_0_0_0_var), /*hidden argument*/NULL);
			NullCheck(L_5);
			Array_t * L_7 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(44 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_5, L_6);
			V_0 = ((ITrackingHandlerU5BU5D_t3015*)Castclass(L_7, ITrackingHandlerU5BU5D_t3015_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_1;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0042:
	{
		V_2 = 0;
		goto IL_0054;
	}

IL_0046:
	{
		ITrackingHandlerU5BU5D_t3015* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Object_t * L_12 = ___obj;
		ObjRef_t2684 * L_13 = ___or;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)));
		InterfaceActionInvoker2< Object_t *, ObjRef_t2684 * >::Invoke(1 /* System.Void System.Runtime.Remoting.Services.ITrackingHandler::MarshaledObject(System.Object,System.Runtime.Remoting.ObjRef) */, ITrackingHandler_t3016_il2cpp_TypeInfo_var, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_2;
		ITrackingHandlerU5BU5D_t3015* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_005a:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyUnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern const Il2CppType* ITrackingHandler_t3016_0_0_0_var;
extern TypeInfo* TrackingServices_t2751_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandlerU5BU5D_t3015_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandler_t3016_il2cpp_TypeInfo_var;
extern "C" void TrackingServices_NotifyUnmarshaledObject_m17346 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t2684 * ___or, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITrackingHandler_t3016_0_0_0_var = il2cpp_codegen_type_from_index(5753);
		TrackingServices_t2751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5694);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		ITrackingHandlerU5BU5D_t3015_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5754);
		ITrackingHandler_t3016_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5753);
		s_Il2CppMethodIntialized = true;
	}
	ITrackingHandlerU5BU5D_t3015* V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t2751_il2cpp_TypeInfo_var);
		ArrayList_t913 * L_0 = ((TrackingServices_t2751_StaticFields*)TrackingServices_t2751_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(25 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_1 = L_1;
		Object_t * L_2 = V_1;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t2751_il2cpp_TypeInfo_var);
			ArrayList_t913 * L_3 = ((TrackingServices_t2751_StaticFields*)TrackingServices_t2751_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			NullCheck(L_3);
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_3);
			if (L_4)
			{
				goto IL_001f;
			}
		}

IL_001d:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_003b);
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t2751_il2cpp_TypeInfo_var);
			ArrayList_t913 * L_5 = ((TrackingServices_t2751_StaticFields*)TrackingServices_t2751_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_6 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ITrackingHandler_t3016_0_0_0_var), /*hidden argument*/NULL);
			NullCheck(L_5);
			Array_t * L_7 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(44 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_5, L_6);
			V_0 = ((ITrackingHandlerU5BU5D_t3015*)Castclass(L_7, ITrackingHandlerU5BU5D_t3015_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_1;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0042:
	{
		V_2 = 0;
		goto IL_0054;
	}

IL_0046:
	{
		ITrackingHandlerU5BU5D_t3015* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Object_t * L_12 = ___obj;
		ObjRef_t2684 * L_13 = ___or;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)));
		InterfaceActionInvoker2< Object_t *, ObjRef_t2684 * >::Invoke(2 /* System.Void System.Runtime.Remoting.Services.ITrackingHandler::UnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef) */, ITrackingHandler_t3016_il2cpp_TypeInfo_var, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_2;
		ITrackingHandlerU5BU5D_t3015* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_005a:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyDisconnectedObject(System.Object)
extern const Il2CppType* ITrackingHandler_t3016_0_0_0_var;
extern TypeInfo* TrackingServices_t2751_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandlerU5BU5D_t3015_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandler_t3016_il2cpp_TypeInfo_var;
extern "C" void TrackingServices_NotifyDisconnectedObject_m17347 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITrackingHandler_t3016_0_0_0_var = il2cpp_codegen_type_from_index(5753);
		TrackingServices_t2751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5694);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		ITrackingHandlerU5BU5D_t3015_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5754);
		ITrackingHandler_t3016_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5753);
		s_Il2CppMethodIntialized = true;
	}
	ITrackingHandlerU5BU5D_t3015* V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t2751_il2cpp_TypeInfo_var);
		ArrayList_t913 * L_0 = ((TrackingServices_t2751_StaticFields*)TrackingServices_t2751_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(25 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_1 = L_1;
		Object_t * L_2 = V_1;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t2751_il2cpp_TypeInfo_var);
			ArrayList_t913 * L_3 = ((TrackingServices_t2751_StaticFields*)TrackingServices_t2751_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			NullCheck(L_3);
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_3);
			if (L_4)
			{
				goto IL_001f;
			}
		}

IL_001d:
		{
			IL2CPP_LEAVE(0x59, FINALLY_003b);
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t2751_il2cpp_TypeInfo_var);
			ArrayList_t913 * L_5 = ((TrackingServices_t2751_StaticFields*)TrackingServices_t2751_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_6 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ITrackingHandler_t3016_0_0_0_var), /*hidden argument*/NULL);
			NullCheck(L_5);
			Array_t * L_7 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(44 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_5, L_6);
			V_0 = ((ITrackingHandlerU5BU5D_t3015*)Castclass(L_7, ITrackingHandlerU5BU5D_t3015_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_1;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0042:
	{
		V_2 = 0;
		goto IL_0053;
	}

IL_0046:
	{
		ITrackingHandlerU5BU5D_t3015* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Object_t * L_12 = ___obj;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)));
		InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Remoting.Services.ITrackingHandler::DisconnectedObject(System.Object) */, ITrackingHandler_t3016_il2cpp_TypeInfo_var, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), L_12);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_14 = V_2;
		ITrackingHandlerU5BU5D_t3015* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_0059:
	{
		return;
	}
}
// System.Runtime.Serialization.FormatterConverter
#include "mscorlib_System_Runtime_Serialization_FormatterConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.FormatterConverter
#include "mscorlib_System_Runtime_Serialization_FormatterConverterMethodDeclarations.h"

// System.Int16
#include "mscorlib_System_Int16.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"


// System.Void System.Runtime.Serialization.FormatterConverter::.ctor()
extern "C" void FormatterConverter__ctor_m17348 (FormatterConverter_t2752 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Serialization.FormatterConverter::Convert(System.Object,System.Type)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" Object_t * FormatterConverter_Convert_m17349 (FormatterConverter_t2752 * __this, Object_t * ___value, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		Object_t * L_2 = Convert_ChangeType_m4984(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Runtime.Serialization.FormatterConverter::ToBoolean(System.Object)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" bool FormatterConverter_ToBoolean_m17350 (FormatterConverter_t2752 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5046, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		bool L_3 = Convert_ToBoolean_m3205(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int16 System.Runtime.Serialization.FormatterConverter::ToInt16(System.Object)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" int16_t FormatterConverter_ToInt16_m17351 (FormatterConverter_t2752 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5046, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int16_t L_3 = Convert_ToInt16_m5098(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 System.Runtime.Serialization.FormatterConverter::ToInt32(System.Object)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" int32_t FormatterConverter_ToInt32_m17352 (FormatterConverter_t2752 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5046, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int32_t L_3 = Convert_ToInt32_m3202(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int64 System.Runtime.Serialization.FormatterConverter::ToInt64(System.Object)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" int64_t FormatterConverter_ToInt64_m17353 (FormatterConverter_t2752 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5046, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int64_t L_3 = Convert_ToInt64_m4978(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String System.Runtime.Serialization.FormatterConverter::ToString(System.Object)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" String_t* FormatterConverter_ToString_m17354 (FormatterConverter_t2752 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5046, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		String_t* L_3 = Convert_ToString_m5099(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UInt32 System.Runtime.Serialization.FormatterConverter::ToUInt32(System.Object)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" uint32_t FormatterConverter_ToUInt32_m17355 (FormatterConverter_t2752 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5046, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		uint32_t L_3 = Convert_ToUInt32_m3170(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Runtime.Serialization.FormatterServices
#include "mscorlib_System_Runtime_Serialization_FormatterServices.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.FormatterServices
#include "mscorlib_System_Runtime_Serialization_FormatterServicesMethodDeclarations.h"

// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationException.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.Reflection.MonoField
#include "mscorlib_System_Reflection_MonoField.h"
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationExceptionMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// System.Reflection.MonoField
#include "mscorlib_System_Reflection_MonoFieldMethodDeclarations.h"


// System.Object[] System.Runtime.Serialization.FormatterServices::GetObjectData(System.Object,System.Reflection.MemberInfo[])
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t1134_il2cpp_TypeInfo_var;
extern TypeInfo* FieldInfo_t_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t300* FormatterServices_GetObjectData_m17356 (Object_t * __this /* static, unused */, Object_t * ___obj, MemberInfoU5BU5D_t2786* ___members, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		SerializationException_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1981);
		FieldInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1015);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t300* V_1 = {0};
	int32_t V_2 = 0;
	MemberInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral4190, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		MemberInfoU5BU5D_t2786* L_2 = ___members;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t692 * L_3 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_3, (String_t*) &_stringLiteral5047, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		MemberInfoU5BU5D_t2786* L_4 = ___members;
		NullCheck(L_4);
		V_0 = (((int32_t)(((Array_t *)L_4)->max_length)));
		int32_t L_5 = V_0;
		V_1 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, L_5));
		V_2 = 0;
		goto IL_007e;
	}

IL_002b:
	{
		MemberInfoU5BU5D_t2786* L_6 = ___members;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_3 = (*(MemberInfo_t **)(MemberInfo_t **)SZArrayLdElema(L_6, L_8));
		MemberInfo_t * L_9 = V_3;
		if (L_9)
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral5048, L_12, /*hidden argument*/NULL);
		ArgumentNullException_t692 * L_14 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_14, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0048:
	{
		MemberInfo_t * L_15 = V_3;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_15);
		if ((((int32_t)L_16) == ((int32_t)4)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_17 = V_2;
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_18);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral5049, L_19, /*hidden argument*/NULL);
		SerializationException_t1134 * L_21 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_21, L_20, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_0067:
	{
		MemberInfo_t * L_22 = V_3;
		V_4 = ((FieldInfo_t *)IsInst(L_22, FieldInfo_t_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t300* L_23 = V_1;
		int32_t L_24 = V_2;
		FieldInfo_t * L_25 = V_4;
		Object_t * L_26 = ___obj;
		NullCheck(L_25);
		Object_t * L_27 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_25, L_26);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		ArrayElementTypeCheck (L_23, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, L_24)) = (Object_t *)L_27;
		int32_t L_28 = V_2;
		V_2 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_007e:
	{
		int32_t L_29 = V_2;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_002b;
		}
	}
	{
		ObjectU5BU5D_t300* L_31 = V_1;
		return L_31;
	}
}
// System.Reflection.MemberInfo[] System.Runtime.Serialization.FormatterServices::GetSerializableMembers(System.Type,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t1134_il2cpp_TypeInfo_var;
extern TypeInfo* MemberInfoU5BU5D_t2786_il2cpp_TypeInfo_var;
extern "C" MemberInfoU5BU5D_t2786* FormatterServices_GetSerializableMembers_m17357 (Object_t * __this /* static, unused */, Type_t * ___type, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		SerializationException_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1981);
		MemberInfoU5BU5D_t2786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5755);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t913 * V_0 = {0};
	Type_t * V_1 = {0};
	String_t* V_2 = {0};
	MemberInfoU5BU5D_t2786* V_3 = {0};
	{
		Type_t * L_0 = ___type;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral1091, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ArrayList_t913 * L_2 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = ___type;
		V_1 = L_3;
		goto IL_004d;
	}

IL_0018:
	{
		Type_t * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsSerializable() */, L_4);
		if (L_5)
		{
			goto IL_003e;
		}
	}
	{
		Type_t * L_6 = V_1;
		Type_t * L_7 = V_1;
		NullCheck(L_7);
		Assembly_t1120 * L_8 = (Assembly_t1120 *)VirtFuncInvoker0< Assembly_t1120 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Format_m3539(NULL /*static, unused*/, (String_t*) &_stringLiteral5050, L_6, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		String_t* L_11 = V_2;
		SerializationException_t1134 * L_12 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_12, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_003e:
	{
		Type_t * L_13 = ___type;
		Type_t * L_14 = V_1;
		ArrayList_t913 * L_15 = V_0;
		FormatterServices_GetFields_m17358(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		Type_t * L_16 = V_1;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_16);
		V_1 = L_17;
	}

IL_004d:
	{
		Type_t * L_18 = V_1;
		if (L_18)
		{
			goto IL_0018;
		}
	}
	{
		ArrayList_t913 * L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_19);
		V_3 = ((MemberInfoU5BU5D_t2786*)SZArrayNew(MemberInfoU5BU5D_t2786_il2cpp_TypeInfo_var, L_20));
		ArrayList_t913 * L_21 = V_0;
		MemberInfoU5BU5D_t2786* L_22 = V_3;
		NullCheck(L_21);
		VirtActionInvoker1< Array_t * >::Invoke(36 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_21, (Array_t *)(Array_t *)L_22);
		MemberInfoU5BU5D_t2786* L_23 = V_3;
		return L_23;
	}
}
// System.Void System.Runtime.Serialization.FormatterServices::GetFields(System.Type,System.Type,System.Collections.ArrayList)
extern TypeInfo* MonoField_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FormatterServices_GetFields_m17358 (Object_t * __this /* static, unused */, Type_t * ___reflectedType, Type_t * ___type, ArrayList_t913 * ___fields, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoField_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5445);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	FieldInfoU5BU5D_t722* V_0 = {0};
	FieldInfo_t * V_1 = {0};
	FieldInfoU5BU5D_t722* V_2 = {0};
	int32_t V_3 = 0;
	MonoField_t * V_4 = {0};
	String_t* V_5 = {0};
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		FieldInfoU5BU5D_t722* L_1 = (FieldInfoU5BU5D_t722*)VirtFuncInvoker1< FieldInfoU5BU5D_t722*, int32_t >::Invoke(48 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, ((int32_t)54));
		V_0 = L_1;
		FieldInfoU5BU5D_t722* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_006b;
	}

IL_000f:
	{
		FieldInfoU5BU5D_t722* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_1 = (*(FieldInfo_t **)(FieldInfo_t **)SZArrayLdElema(L_3, L_5));
		FieldInfo_t * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized() */, L_6);
		if (L_7)
		{
			goto IL_0067;
		}
	}
	{
		FieldInfo_t * L_8 = V_1;
		V_4 = ((MonoField_t *)IsInst(L_8, MonoField_t_il2cpp_TypeInfo_var));
		MonoField_t * L_9 = V_4;
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_10 = ___reflectedType;
		Type_t * L_11 = ___type;
		if ((((Object_t*)(Type_t *)L_10) == ((Object_t*)(Type_t *)L_11)))
		{
			goto IL_005f;
		}
	}
	{
		MonoField_t * L_12 = V_4;
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.FieldInfo::get_IsPublic() */, L_12);
		if (L_13)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_14 = ___type;
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_14);
		MonoField_t * L_16 = V_4;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoField::get_Name() */, L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m1271(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral181, L_17, /*hidden argument*/NULL);
		V_5 = L_18;
		ArrayList_t913 * L_19 = ___fields;
		MonoField_t * L_20 = V_4;
		String_t* L_21 = V_5;
		NullCheck(L_20);
		MonoField_t * L_22 = MonoField_Clone_m16404(L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_19, L_22);
		goto IL_0067;
	}

IL_005f:
	{
		ArrayList_t913 * L_23 = ___fields;
		FieldInfo_t * L_24 = V_1;
		NullCheck(L_23);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_23, L_24);
	}

IL_0067:
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_006b:
	{
		int32_t L_26 = V_3;
		FieldInfoU5BU5D_t722* L_27 = V_2;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)(((Array_t *)L_27)->max_length))))))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
// System.Object System.Runtime.Serialization.FormatterServices::GetUninitializedObject(System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" Object_t * FormatterServices_GetUninitializedObject_m17359 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral1091, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Type_t * L_2 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_t356 * L_4 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_4, (String_t*) &_stringLiteral5051, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0026:
	{
		Type_t * L_5 = ___type;
		Object_t * L_6 = ActivationServices_AllocateUninitializedClassInstance_m17102(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Runtime.Serialization.FormatterServices::GetSafeUninitializedObject(System.Type)
extern "C" Object_t * FormatterServices_GetSafeUninitializedObject_m17360 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		Object_t * L_1 = FormatterServices_GetUninitializedObject_m17359(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
#include "mscorlib_System_Runtime_Serialization_ObjectIDGenerator_Inst.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
#include "mscorlib_System_Runtime_Serialization_ObjectIDGenerator_InstMethodDeclarations.h"



// System.Void System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer::.ctor()
extern "C" void InstanceComparer__ctor_m17361 (InstanceComparer_t2754 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" int32_t InstanceComparer_System_Collections_IComparer_Compare_m17362 (InstanceComparer_t2754 * __this, Object_t * ___o1, Object_t * ___o2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		Object_t * L_0 = ___o1;
		if (!((String_t*)IsInst(L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		Object_t * L_1 = ___o1;
		Object_t * L_2 = ___o2;
		NullCheck(L_1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_1, L_2);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B4_0 = 1;
	}

IL_0015:
	{
		return G_B4_0;
	}

IL_0016:
	{
		Object_t * L_4 = ___o1;
		Object_t * L_5 = ___o2;
		if ((!(((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)L_5))))
		{
			goto IL_001d;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_001e;
	}

IL_001d:
	{
		G_B8_0 = 1;
	}

IL_001e:
	{
		return G_B8_0;
	}
}
// System.Int32 System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer::System.Collections.IHashCodeProvider.GetHashCode(System.Object)
extern "C" int32_t InstanceComparer_System_Collections_IHashCodeProvider_GetHashCode_m17363 (InstanceComparer_t2754 * __this, Object_t * ___o, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		int32_t L_1 = Object_InternalGetHashCode_m13082(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.Serialization.ObjectIDGenerator
#include "mscorlib_System_Runtime_Serialization_ObjectIDGenerator.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.ObjectIDGenerator
#include "mscorlib_System_Runtime_Serialization_ObjectIDGeneratorMethodDeclarations.h"



// System.Void System.Runtime.Serialization.ObjectIDGenerator::.ctor()
extern TypeInfo* ObjectIDGenerator_t2755_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern "C" void ObjectIDGenerator__ctor_m17364 (ObjectIDGenerator_t2755 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectIDGenerator_t2755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5756);
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ObjectIDGenerator_t2755_il2cpp_TypeInfo_var);
		InstanceComparer_t2754 * L_0 = ((ObjectIDGenerator_t2755_StaticFields*)ObjectIDGenerator_t2755_il2cpp_TypeInfo_var->static_fields)->___comparer_2;
		InstanceComparer_t2754 * L_1 = ((ObjectIDGenerator_t2755_StaticFields*)ObjectIDGenerator_t2755_il2cpp_TypeInfo_var->static_fields)->___comparer_2;
		Hashtable_t915 * L_2 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m12792(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->___table_0 = L_2;
		__this->___current_1 = (((int64_t)1));
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectIDGenerator::.cctor()
extern TypeInfo* InstanceComparer_t2754_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectIDGenerator_t2755_il2cpp_TypeInfo_var;
extern "C" void ObjectIDGenerator__cctor_m17365 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InstanceComparer_t2754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5757);
		ObjectIDGenerator_t2755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5756);
		s_Il2CppMethodIntialized = true;
	}
	{
		InstanceComparer_t2754 * L_0 = (InstanceComparer_t2754 *)il2cpp_codegen_object_new (InstanceComparer_t2754_il2cpp_TypeInfo_var);
		InstanceComparer__ctor_m17361(L_0, /*hidden argument*/NULL);
		((ObjectIDGenerator_t2755_StaticFields*)ObjectIDGenerator_t2755_il2cpp_TypeInfo_var->static_fields)->___comparer_2 = L_0;
		return;
	}
}
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::GetId(System.Object,System.Boolean&)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t696_il2cpp_TypeInfo_var;
extern "C" int64_t ObjectIDGenerator_GetId_m17366 (ObjectIDGenerator_t2755 * __this, Object_t * ___obj, bool* ___firstTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Int64_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(986);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int64_t V_1 = 0;
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral4190, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Hashtable_t915 * L_2 = (__this->___table_0);
		Object_t * L_3 = ___obj;
		NullCheck(L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, L_3);
		V_0 = L_4;
		Object_t * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		bool* L_6 = ___firstTime;
		*((int8_t*)(L_6)) = (int8_t)0;
		Object_t * L_7 = V_0;
		return ((*(int64_t*)((int64_t*)UnBox (L_7, Int64_t696_il2cpp_TypeInfo_var))));
	}

IL_0028:
	{
		bool* L_8 = ___firstTime;
		*((int8_t*)(L_8)) = (int8_t)1;
		Hashtable_t915 * L_9 = (__this->___table_0);
		Object_t * L_10 = ___obj;
		int64_t L_11 = (__this->___current_1);
		int64_t L_12 = L_11;
		Object_t * L_13 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_9, L_10, L_13);
		int64_t L_14 = (__this->___current_1);
		int64_t L_15 = L_14;
		V_1 = L_15;
		__this->___current_1 = ((int64_t)((int64_t)L_15+(int64_t)(((int64_t)1))));
		int64_t L_16 = V_1;
		return L_16;
	}
}
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::get_NextId()
extern "C" int64_t ObjectIDGenerator_get_NextId_m17367 (ObjectIDGenerator_t2755 * __this, const MethodInfo* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = (__this->___current_1);
		int64_t L_1 = L_0;
		V_0 = L_1;
		__this->___current_1 = ((int64_t)((int64_t)L_1+(int64_t)(((int64_t)1))));
		int64_t L_2 = V_0;
		return L_2;
	}
}
// System.Runtime.Serialization.ObjectManager
#include "mscorlib_System_Runtime_Serialization_ObjectManager.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.ObjectManager
#include "mscorlib_System_Runtime_Serialization_ObjectManagerMethodDeclarations.h"

// System.Runtime.Serialization.ObjectRecord
#include "mscorlib_System_Runtime_Serialization_ObjectRecord.h"
// System.Runtime.Serialization.SerializationCallbacks
#include "mscorlib_System_Runtime_Serialization_SerializationCallbacks_0.h"
// System.Runtime.Serialization.ObjectRecordStatus
#include "mscorlib_System_Runtime_Serialization_ObjectRecordStatus.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Runtime.Serialization.BaseFixupRecord
#include "mscorlib_System_Runtime_Serialization_BaseFixupRecord.h"
// System.Runtime.Serialization.ArrayFixupRecord
#include "mscorlib_System_Runtime_Serialization_ArrayFixupRecord.h"
// System.Runtime.Serialization.MultiArrayFixupRecord
#include "mscorlib_System_Runtime_Serialization_MultiArrayFixupRecord.h"
// System.Runtime.Serialization.DelayedFixupRecord
#include "mscorlib_System_Runtime_Serialization_DelayedFixupRecord.h"
// System.Runtime.Serialization.FixupRecord
#include "mscorlib_System_Runtime_Serialization_FixupRecord.h"
// System.Runtime.Serialization.ObjectRecord
#include "mscorlib_System_Runtime_Serialization_ObjectRecordMethodDeclarations.h"
// System.Runtime.Serialization.SerializationCallbacks
#include "mscorlib_System_Runtime_Serialization_SerializationCallbacks_0MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Runtime.Serialization.ArrayFixupRecord
#include "mscorlib_System_Runtime_Serialization_ArrayFixupRecordMethodDeclarations.h"
// System.Runtime.Serialization.MultiArrayFixupRecord
#include "mscorlib_System_Runtime_Serialization_MultiArrayFixupRecordMethodDeclarations.h"
// System.Runtime.Serialization.DelayedFixupRecord
#include "mscorlib_System_Runtime_Serialization_DelayedFixupRecordMethodDeclarations.h"
// System.Runtime.Serialization.FixupRecord
#include "mscorlib_System_Runtime_Serialization_FixupRecordMethodDeclarations.h"


// System.Void System.Runtime.Serialization.ObjectManager::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern "C" void ObjectManager__ctor_m17368 (ObjectManager_t2757 * __this, Object_t * ___selector, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t913 * L_0 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_0, /*hidden argument*/NULL);
		__this->____deserializedRecords_2 = L_0;
		ArrayList_t913 * L_1 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_1, /*hidden argument*/NULL);
		__this->____onDeserializedCallbackRecords_3 = L_1;
		Hashtable_t915 * L_2 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_2, /*hidden argument*/NULL);
		__this->____objectRecords_4 = L_2;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Object_t * L_3 = ___selector;
		__this->____selector_6 = L_3;
		StreamingContext_t670  L_4 = ___context;
		__this->____context_7 = L_4;
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::DoFixups()
extern TypeInfo* SerializationException_t1134_il2cpp_TypeInfo_var;
extern TypeInfo* IDeserializationCallback_t1205_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationCallbacks_t2771_il2cpp_TypeInfo_var;
extern TypeInfo* IObjectReference_t3017_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t696_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_DoFixups_m17369 (ObjectManager_t2757 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationException_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1981);
		IDeserializationCallback_t1205_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2284);
		SerializationCallbacks_t2771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5758);
		IObjectReference_t3017_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5759);
		Int64_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(986);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	ObjectRecord_t2756 * V_0 = {0};
	bool V_1 = false;
	ObjectRecord_t2756 * V_2 = {0};
	bool V_3 = false;
	ObjectRecord_t2756 * V_4 = {0};
	SerializationCallbacks_t2771 * V_5 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B7_0 = 0;
	{
		__this->____finalFixup_5 = 1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (__this->____registeredObjectsCount_8);
			Hashtable_t915 * L_1 = (__this->____objectRecords_4);
			NullCheck(L_1);
			int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_1);
			if ((((int32_t)L_0) >= ((int32_t)L_2)))
			{
				goto IL_0025;
			}
		}

IL_001a:
		{
			SerializationException_t1134 * L_3 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
			SerializationException__ctor_m12746(L_3, (String_t*) &_stringLiteral5052, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_3);
		}

IL_0025:
		{
			ObjectRecord_t2756 * L_4 = (__this->____lastObjectRecord_1);
			V_0 = L_4;
			V_1 = 1;
			ObjectRecord_t2756 * L_5 = (__this->____objectRecordChain_0);
			V_2 = L_5;
			goto IL_0136;
		}

IL_003a:
		{
			ObjectRecord_t2756 * L_6 = V_2;
			NullCheck(L_6);
			bool L_7 = ObjectRecord_get_IsUnsolvedObjectReference_m17397(L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0045;
			}
		}

IL_0042:
		{
			bool L_8 = V_1;
			G_B7_0 = ((int32_t)(L_8));
			goto IL_0046;
		}

IL_0045:
		{
			G_B7_0 = 0;
		}

IL_0046:
		{
			V_3 = ((((int32_t)G_B7_0) == ((int32_t)0))? 1 : 0);
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_0057;
			}
		}

IL_004d:
		{
			ObjectRecord_t2756 * L_10 = V_2;
			NullCheck(L_10);
			bool L_11 = ObjectRecord_DoFixups_m17399(L_10, 1, __this, 1, /*hidden argument*/NULL);
			V_3 = L_11;
		}

IL_0057:
		{
			bool L_12 = V_3;
			if (!L_12)
			{
				goto IL_006e;
			}
		}

IL_005a:
		{
			ObjectRecord_t2756 * L_13 = V_2;
			Object_t * L_14 = (__this->____selector_6);
			StreamingContext_t670  L_15 = (__this->____context_7);
			NullCheck(L_13);
			bool L_16 = ObjectRecord_LoadData_m17403(L_13, __this, L_14, L_15, /*hidden argument*/NULL);
			V_3 = L_16;
		}

IL_006e:
		{
			bool L_17 = V_3;
			if (!L_17)
			{
				goto IL_00bd;
			}
		}

IL_0071:
		{
			ObjectRecord_t2756 * L_18 = V_2;
			NullCheck(L_18);
			Object_t * L_19 = (L_18->___OriginalObject_1);
			if (!((Object_t *)IsInst(L_19, IDeserializationCallback_t1205_il2cpp_TypeInfo_var)))
			{
				goto IL_008b;
			}
		}

IL_007e:
		{
			ArrayList_t913 * L_20 = (__this->____deserializedRecords_2);
			ObjectRecord_t2756 * L_21 = V_2;
			NullCheck(L_20);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_20, L_21);
		}

IL_008b:
		{
			ObjectRecord_t2756 * L_22 = V_2;
			NullCheck(L_22);
			Object_t * L_23 = (L_22->___OriginalObject_1);
			NullCheck(L_23);
			Type_t * L_24 = Object_GetType_m1416(L_23, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t2771_il2cpp_TypeInfo_var);
			SerializationCallbacks_t2771 * L_25 = SerializationCallbacks_GetSerializationCallbacks_m17420(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			V_5 = L_25;
			SerializationCallbacks_t2771 * L_26 = V_5;
			NullCheck(L_26);
			bool L_27 = SerializationCallbacks_get_HasDeserializedCallbacks_m17413(L_26, /*hidden argument*/NULL);
			if (!L_27)
			{
				goto IL_00b3;
			}
		}

IL_00a6:
		{
			ArrayList_t913 * L_28 = (__this->____onDeserializedCallbackRecords_3);
			ObjectRecord_t2756 * L_29 = V_2;
			NullCheck(L_28);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_28, L_29);
		}

IL_00b3:
		{
			ObjectRecord_t2756 * L_30 = V_2;
			NullCheck(L_30);
			ObjectRecord_t2756 * L_31 = (L_30->___Next_12);
			V_4 = L_31;
			goto IL_012d;
		}

IL_00bd:
		{
			ObjectRecord_t2756 * L_32 = V_2;
			NullCheck(L_32);
			Object_t * L_33 = (L_32->___ObjectInstance_2);
			if (!((Object_t *)IsInst(L_33, IObjectReference_t3017_il2cpp_TypeInfo_var)))
			{
				goto IL_00fd;
			}
		}

IL_00ca:
		{
			bool L_34 = V_1;
			if (L_34)
			{
				goto IL_00fd;
			}
		}

IL_00cd:
		{
			ObjectRecord_t2756 * L_35 = V_2;
			NullCheck(L_35);
			uint8_t L_36 = (L_35->___Status_0);
			if ((!(((uint32_t)L_36) == ((uint32_t)2))))
			{
				goto IL_00f6;
			}
		}

IL_00d6:
		{
			ObjectRecord_t2756 * L_37 = V_2;
			NullCheck(L_37);
			int64_t L_38 = (L_37->___ObjectID_3);
			int64_t L_39 = L_38;
			Object_t * L_40 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_39);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_41 = String_Concat_m1268(NULL /*static, unused*/, (String_t*) &_stringLiteral5053, L_40, (String_t*) &_stringLiteral5054, /*hidden argument*/NULL);
			SerializationException_t1134 * L_42 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
			SerializationException__ctor_m12746(L_42, L_41, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_42);
		}

IL_00f6:
		{
			ObjectRecord_t2756 * L_43 = V_2;
			NullCheck(L_43);
			L_43->___Status_0 = 2;
		}

IL_00fd:
		{
			ObjectRecord_t2756 * L_44 = V_2;
			ObjectRecord_t2756 * L_45 = (__this->____lastObjectRecord_1);
			if ((((Object_t*)(ObjectRecord_t2756 *)L_44) == ((Object_t*)(ObjectRecord_t2756 *)L_45)))
			{
				goto IL_012a;
			}
		}

IL_0106:
		{
			ObjectRecord_t2756 * L_46 = V_2;
			NullCheck(L_46);
			ObjectRecord_t2756 * L_47 = (L_46->___Next_12);
			V_4 = L_47;
			ObjectRecord_t2756 * L_48 = V_2;
			NullCheck(L_48);
			L_48->___Next_12 = (ObjectRecord_t2756 *)NULL;
			ObjectRecord_t2756 * L_49 = (__this->____lastObjectRecord_1);
			ObjectRecord_t2756 * L_50 = V_2;
			NullCheck(L_49);
			L_49->___Next_12 = L_50;
			ObjectRecord_t2756 * L_51 = V_2;
			__this->____lastObjectRecord_1 = L_51;
			goto IL_012d;
		}

IL_012a:
		{
			ObjectRecord_t2756 * L_52 = V_2;
			V_4 = L_52;
		}

IL_012d:
		{
			ObjectRecord_t2756 * L_53 = V_2;
			ObjectRecord_t2756 * L_54 = V_0;
			if ((!(((Object_t*)(ObjectRecord_t2756 *)L_53) == ((Object_t*)(ObjectRecord_t2756 *)L_54))))
			{
				goto IL_0133;
			}
		}

IL_0131:
		{
			V_1 = 0;
		}

IL_0133:
		{
			ObjectRecord_t2756 * L_55 = V_4;
			V_2 = L_55;
		}

IL_0136:
		{
			ObjectRecord_t2756 * L_56 = V_2;
			if (L_56)
			{
				goto IL_003a;
			}
		}

IL_013c:
		{
			IL2CPP_LEAVE(0x146, FINALLY_013e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_013e;
	}

FINALLY_013e:
	{ // begin finally (depth: 1)
		__this->____finalFixup_5 = 0;
		IL2CPP_END_FINALLY(318)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(318)
	{
		IL2CPP_JUMP_TBL(0x146, IL_0146)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0146:
	{
		return;
	}
}
// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::GetObjectRecord(System.Int64)
extern TypeInfo* Int64_t696_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectRecord_t2756_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t1134_il2cpp_TypeInfo_var;
extern "C" ObjectRecord_t2756 * ObjectManager_GetObjectRecord_m17370 (ObjectManager_t2757 * __this, int64_t ___objectID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(986);
		ObjectRecord_t2756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5760);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		SerializationException_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1981);
		s_Il2CppMethodIntialized = true;
	}
	ObjectRecord_t2756 * V_0 = {0};
	{
		Hashtable_t915 * L_0 = (__this->____objectRecords_4);
		int64_t L_1 = ___objectID;
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_3);
		V_0 = ((ObjectRecord_t2756 *)Castclass(L_4, ObjectRecord_t2756_il2cpp_TypeInfo_var));
		ObjectRecord_t2756 * L_5 = V_0;
		if (L_5)
		{
			goto IL_005c;
		}
	}
	{
		bool L_6 = (__this->____finalFixup_5);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		int64_t L_7 = ___objectID;
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1268(NULL /*static, unused*/, (String_t*) &_stringLiteral5055, L_9, (String_t*) &_stringLiteral5056, /*hidden argument*/NULL);
		SerializationException_t1134 * L_11 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_003d:
	{
		ObjectRecord_t2756 * L_12 = (ObjectRecord_t2756 *)il2cpp_codegen_object_new (ObjectRecord_t2756_il2cpp_TypeInfo_var);
		ObjectRecord__ctor_m17392(L_12, /*hidden argument*/NULL);
		V_0 = L_12;
		ObjectRecord_t2756 * L_13 = V_0;
		int64_t L_14 = ___objectID;
		NullCheck(L_13);
		L_13->___ObjectID_3 = L_14;
		Hashtable_t915 * L_15 = (__this->____objectRecords_4);
		int64_t L_16 = ___objectID;
		int64_t L_17 = L_16;
		Object_t * L_18 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_17);
		ObjectRecord_t2756 * L_19 = V_0;
		NullCheck(L_15);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_15, L_18, L_19);
	}

IL_005c:
	{
		ObjectRecord_t2756 * L_20 = V_0;
		NullCheck(L_20);
		bool L_21 = ObjectRecord_get_IsRegistered_m17398(L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0087;
		}
	}
	{
		bool L_22 = (__this->____finalFixup_5);
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		int64_t L_23 = ___objectID;
		int64_t L_24 = L_23;
		Object_t * L_25 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_24);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m1268(NULL /*static, unused*/, (String_t*) &_stringLiteral5055, L_25, (String_t*) &_stringLiteral5056, /*hidden argument*/NULL);
		SerializationException_t1134 * L_27 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_27, L_26, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}

IL_0087:
	{
		ObjectRecord_t2756 * L_28 = V_0;
		return L_28;
	}
}
// System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t696_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectRecord_t2756_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjectManager_GetObject_m17371 (ObjectManager_t2757 * __this, int64_t ___objectID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		Int64_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(986);
		ObjectRecord_t2756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5760);
		s_Il2CppMethodIntialized = true;
	}
	ObjectRecord_t2756 * V_0 = {0};
	{
		int64_t L_0 = ___objectID;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_1 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_1, (String_t*) &_stringLiteral5057, (String_t*) &_stringLiteral5058, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		Hashtable_t915 * L_2 = (__this->____objectRecords_4);
		int64_t L_3 = ___objectID;
		int64_t L_4 = L_3;
		Object_t * L_5 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, L_5);
		V_0 = ((ObjectRecord_t2756 *)Castclass(L_6, ObjectRecord_t2756_il2cpp_TypeInfo_var));
		ObjectRecord_t2756 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		ObjectRecord_t2756 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = ObjectRecord_get_IsRegistered_m17398(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0039;
		}
	}

IL_0037:
	{
		return NULL;
	}

IL_0039:
	{
		ObjectRecord_t2756 * L_10 = V_0;
		NullCheck(L_10);
		Object_t * L_11 = (L_10->___ObjectInstance_2);
		return L_11;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent()
extern TypeInfo* ObjectRecord_t2756_il2cpp_TypeInfo_var;
extern TypeInfo* IDeserializationCallback_t1205_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RaiseDeserializationEvent_m17372 (ObjectManager_t2757 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectRecord_t2756_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5760);
		IDeserializationCallback_t1205_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2284);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ObjectRecord_t2756 * V_1 = {0};
	int32_t V_2 = 0;
	ObjectRecord_t2756 * V_3 = {0};
	Object_t * V_4 = {0};
	{
		ArrayList_t913 * L_0 = (__this->____onDeserializedCallbackRecords_3);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
		goto IL_0032;
	}

IL_0010:
	{
		ArrayList_t913 * L_2 = (__this->____onDeserializedCallbackRecords_3);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		V_1 = ((ObjectRecord_t2756 *)Castclass(L_4, ObjectRecord_t2756_il2cpp_TypeInfo_var));
		ObjectRecord_t2756 * L_5 = V_1;
		NullCheck(L_5);
		Object_t * L_6 = (L_5->___OriginalObject_1);
		ObjectManager_RaiseOnDeserializedEvent_m17374(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7-(int32_t)1));
	}

IL_0032:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		ArrayList_t913 * L_9 = (__this->____deserializedRecords_2);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_9);
		V_2 = ((int32_t)((int32_t)L_10-(int32_t)1));
		goto IL_0075;
	}

IL_0046:
	{
		ArrayList_t913 * L_11 = (__this->____deserializedRecords_2);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		Object_t * L_13 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_11, L_12);
		V_3 = ((ObjectRecord_t2756 *)Castclass(L_13, ObjectRecord_t2756_il2cpp_TypeInfo_var));
		ObjectRecord_t2756 * L_14 = V_3;
		NullCheck(L_14);
		Object_t * L_15 = (L_14->___OriginalObject_1);
		V_4 = ((Object_t *)IsInst(L_15, IDeserializationCallback_t1205_il2cpp_TypeInfo_var));
		Object_t * L_16 = V_4;
		if (!L_16)
		{
			goto IL_0071;
		}
	}
	{
		Object_t * L_17 = V_4;
		NullCheck(L_17);
		InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Serialization.IDeserializationCallback::OnDeserialization(System.Object) */, IDeserializationCallback_t1205_il2cpp_TypeInfo_var, L_17, __this);
	}

IL_0071:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)((int32_t)L_18-(int32_t)1));
	}

IL_0075:
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializingEvent(System.Object)
extern TypeInfo* SerializationCallbacks_t2771_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RaiseOnDeserializingEvent_m17373 (ObjectManager_t2757 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationCallbacks_t2771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5758);
		s_Il2CppMethodIntialized = true;
	}
	SerializationCallbacks_t2771 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m1416(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t2771_il2cpp_TypeInfo_var);
		SerializationCallbacks_t2771 * L_2 = SerializationCallbacks_GetSerializationCallbacks_m17420(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		SerializationCallbacks_t2771 * L_3 = V_0;
		Object_t * L_4 = ___obj;
		StreamingContext_t670  L_5 = (__this->____context_7);
		NullCheck(L_3);
		SerializationCallbacks_RaiseOnDeserializing_m17418(L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializedEvent(System.Object)
extern TypeInfo* SerializationCallbacks_t2771_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RaiseOnDeserializedEvent_m17374 (ObjectManager_t2757 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationCallbacks_t2771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5758);
		s_Il2CppMethodIntialized = true;
	}
	SerializationCallbacks_t2771 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m1416(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t2771_il2cpp_TypeInfo_var);
		SerializationCallbacks_t2771 * L_2 = SerializationCallbacks_GetSerializationCallbacks_m17420(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		SerializationCallbacks_t2771 * L_3 = V_0;
		Object_t * L_4 = ___obj;
		StreamingContext_t670  L_5 = (__this->____context_7);
		NullCheck(L_3);
		SerializationCallbacks_RaiseOnDeserialized_m17419(L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::AddFixup(System.Runtime.Serialization.BaseFixupRecord)
extern "C" void ObjectManager_AddFixup_m17375 (ObjectManager_t2757 * __this, BaseFixupRecord_t2758 * ___record, const MethodInfo* method)
{
	{
		BaseFixupRecord_t2758 * L_0 = ___record;
		NullCheck(L_0);
		ObjectRecord_t2756 * L_1 = (L_0->___ObjectToBeFixed_0);
		BaseFixupRecord_t2758 * L_2 = ___record;
		NullCheck(L_1);
		ObjectRecord_ChainFixup_m17402(L_1, L_2, 1, /*hidden argument*/NULL);
		BaseFixupRecord_t2758 * L_3 = ___record;
		NullCheck(L_3);
		ObjectRecord_t2756 * L_4 = (L_3->___ObjectRequired_1);
		BaseFixupRecord_t2758 * L_5 = ___record;
		NullCheck(L_4);
		ObjectRecord_ChainFixup_m17402(L_4, L_5, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32,System.Int64)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayFixupRecord_t2759_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RecordArrayElementFixup_m17376 (ObjectManager_t2757 * __this, int64_t ___arrayToBeFixed, int32_t ___index, int64_t ___objectRequired, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		ArrayFixupRecord_t2759_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5761);
		s_Il2CppMethodIntialized = true;
	}
	ArrayFixupRecord_t2759 * V_0 = {0};
	{
		int64_t L_0 = ___arrayToBeFixed;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_1 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_1, (String_t*) &_stringLiteral5059, (String_t*) &_stringLiteral5060, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int64_t L_2 = ___objectRequired;
		if ((((int64_t)L_2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_3 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_3, (String_t*) &_stringLiteral5061, (String_t*) &_stringLiteral5062, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002a:
	{
		int64_t L_4 = ___arrayToBeFixed;
		ObjectRecord_t2756 * L_5 = ObjectManager_GetObjectRecord_m17370(__this, L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___index;
		int64_t L_7 = ___objectRequired;
		ObjectRecord_t2756 * L_8 = ObjectManager_GetObjectRecord_m17370(__this, L_7, /*hidden argument*/NULL);
		ArrayFixupRecord_t2759 * L_9 = (ArrayFixupRecord_t2759 *)il2cpp_codegen_object_new (ArrayFixupRecord_t2759_il2cpp_TypeInfo_var);
		ArrayFixupRecord__ctor_m17384(L_9, L_5, L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		ArrayFixupRecord_t2759 * L_10 = V_0;
		ObjectManager_AddFixup_m17375(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32[],System.Int64)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* MultiArrayFixupRecord_t2760_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RecordArrayElementFixup_m17377 (ObjectManager_t2757 * __this, int64_t ___arrayToBeFixed, Int32U5BU5D_t1* ___indices, int64_t ___objectRequired, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		MultiArrayFixupRecord_t2760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5762);
		s_Il2CppMethodIntialized = true;
	}
	MultiArrayFixupRecord_t2760 * V_0 = {0};
	{
		int64_t L_0 = ___arrayToBeFixed;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_1 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_1, (String_t*) &_stringLiteral5059, (String_t*) &_stringLiteral5060, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int64_t L_2 = ___objectRequired;
		if ((((int64_t)L_2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_3 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_3, (String_t*) &_stringLiteral5061, (String_t*) &_stringLiteral5062, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002a:
	{
		Int32U5BU5D_t1* L_4 = ___indices;
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentNullException_t692 * L_5 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_5, (String_t*) &_stringLiteral3823, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0038:
	{
		int64_t L_6 = ___arrayToBeFixed;
		ObjectRecord_t2756 * L_7 = ObjectManager_GetObjectRecord_m17370(__this, L_6, /*hidden argument*/NULL);
		Int32U5BU5D_t1* L_8 = ___indices;
		int64_t L_9 = ___objectRequired;
		ObjectRecord_t2756 * L_10 = ObjectManager_GetObjectRecord_m17370(__this, L_9, /*hidden argument*/NULL);
		MultiArrayFixupRecord_t2760 * L_11 = (MultiArrayFixupRecord_t2760 *)il2cpp_codegen_object_new (MultiArrayFixupRecord_t2760_il2cpp_TypeInfo_var);
		MultiArrayFixupRecord__ctor_m17386(L_11, L_7, L_8, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		MultiArrayFixupRecord_t2760 * L_12 = V_0;
		ObjectManager_AddFixup_m17375(__this, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RecordDelayedFixup(System.Int64,System.String,System.Int64)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* DelayedFixupRecord_t2762_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RecordDelayedFixup_m17378 (ObjectManager_t2757 * __this, int64_t ___objectToBeFixed, String_t* ___memberName, int64_t ___objectRequired, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		DelayedFixupRecord_t2762_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5763);
		s_Il2CppMethodIntialized = true;
	}
	DelayedFixupRecord_t2762 * V_0 = {0};
	{
		int64_t L_0 = ___objectToBeFixed;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_1 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_1, (String_t*) &_stringLiteral5063, (String_t*) &_stringLiteral5064, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int64_t L_2 = ___objectRequired;
		if ((((int64_t)L_2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_3 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_3, (String_t*) &_stringLiteral5061, (String_t*) &_stringLiteral5062, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002a:
	{
		String_t* L_4 = ___memberName;
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentNullException_t692 * L_5 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_5, (String_t*) &_stringLiteral5065, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0038:
	{
		int64_t L_6 = ___objectToBeFixed;
		ObjectRecord_t2756 * L_7 = ObjectManager_GetObjectRecord_m17370(__this, L_6, /*hidden argument*/NULL);
		String_t* L_8 = ___memberName;
		int64_t L_9 = ___objectRequired;
		ObjectRecord_t2756 * L_10 = ObjectManager_GetObjectRecord_m17370(__this, L_9, /*hidden argument*/NULL);
		DelayedFixupRecord_t2762 * L_11 = (DelayedFixupRecord_t2762 *)il2cpp_codegen_object_new (DelayedFixupRecord_t2762_il2cpp_TypeInfo_var);
		DelayedFixupRecord__ctor_m17390(L_11, L_7, L_8, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		DelayedFixupRecord_t2762 * L_12 = V_0;
		ObjectManager_AddFixup_m17375(__this, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* FixupRecord_t2761_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RecordFixup_m17379 (ObjectManager_t2757 * __this, int64_t ___objectToBeFixed, MemberInfo_t * ___member, int64_t ___objectRequired, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		FixupRecord_t2761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5764);
		s_Il2CppMethodIntialized = true;
	}
	FixupRecord_t2761 * V_0 = {0};
	{
		int64_t L_0 = ___objectToBeFixed;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_1 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_1, (String_t*) &_stringLiteral5063, (String_t*) &_stringLiteral5064, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int64_t L_2 = ___objectRequired;
		if ((((int64_t)L_2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_3 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_3, (String_t*) &_stringLiteral5061, (String_t*) &_stringLiteral5062, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002a:
	{
		MemberInfo_t * L_4 = ___member;
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentNullException_t692 * L_5 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_5, (String_t*) &_stringLiteral2917, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0038:
	{
		int64_t L_6 = ___objectToBeFixed;
		ObjectRecord_t2756 * L_7 = ObjectManager_GetObjectRecord_m17370(__this, L_6, /*hidden argument*/NULL);
		MemberInfo_t * L_8 = ___member;
		int64_t L_9 = ___objectRequired;
		ObjectRecord_t2756 * L_10 = ObjectManager_GetObjectRecord_m17370(__this, L_9, /*hidden argument*/NULL);
		FixupRecord_t2761 * L_11 = (FixupRecord_t2761 *)il2cpp_codegen_object_new (FixupRecord_t2761_il2cpp_TypeInfo_var);
		FixupRecord__ctor_m17388(L_11, L_7, L_8, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		FixupRecord_t2761 * L_12 = V_0;
		ObjectManager_AddFixup_m17375(__this, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObjectInternal(System.Object,System.Runtime.Serialization.ObjectRecord)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t696_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t1134_il2cpp_TypeInfo_var;
extern TypeInfo* IObjectReference_t3017_il2cpp_TypeInfo_var;
extern TypeInfo* ISurrogateSelector_t2744_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RegisterObjectInternal_m17380 (ObjectManager_t2757 * __this, Object_t * ___obj, ObjectRecord_t2756 * ___record, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Int64_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(986);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		SerializationException_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1981);
		IObjectReference_t3017_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5759);
		ISurrogateSelector_t2744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5751);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral4190, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectRecord_t2756 * L_2 = ___record;
		NullCheck(L_2);
		bool L_3 = ObjectRecord_get_IsRegistered_m17398(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		ObjectRecord_t2756 * L_4 = ___record;
		NullCheck(L_4);
		Object_t * L_5 = (L_4->___OriginalObject_1);
		Object_t * L_6 = ___obj;
		if ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)L_6)))
		{
			goto IL_003f;
		}
	}
	{
		ObjectRecord_t2756 * L_7 = ___record;
		NullCheck(L_7);
		int64_t L_8 = (L_7->___ObjectID_3);
		int64_t L_9 = L_8;
		Object_t * L_10 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m1268(NULL /*static, unused*/, (String_t*) &_stringLiteral5066, L_10, (String_t*) &_stringLiteral5067, /*hidden argument*/NULL);
		SerializationException_t1134 * L_12 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_12, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		ObjectRecord_t2756 * L_13 = ___record;
		Object_t * L_14 = ___obj;
		NullCheck(L_13);
		L_13->___ObjectInstance_2 = L_14;
		ObjectRecord_t2756 * L_15 = ___record;
		Object_t * L_16 = ___obj;
		NullCheck(L_15);
		L_15->___OriginalObject_1 = L_16;
		Object_t * L_17 = ___obj;
		if (!((Object_t *)IsInst(L_17, IObjectReference_t3017_il2cpp_TypeInfo_var)))
		{
			goto IL_005f;
		}
	}
	{
		ObjectRecord_t2756 * L_18 = ___record;
		NullCheck(L_18);
		L_18->___Status_0 = 1;
		goto IL_0066;
	}

IL_005f:
	{
		ObjectRecord_t2756 * L_19 = ___record;
		NullCheck(L_19);
		L_19->___Status_0 = 3;
	}

IL_0066:
	{
		Object_t * L_20 = (__this->____selector_6);
		if (!L_20)
		{
			goto IL_00a0;
		}
	}
	{
		ObjectRecord_t2756 * L_21 = ___record;
		Object_t * L_22 = (__this->____selector_6);
		Object_t * L_23 = ___obj;
		NullCheck(L_23);
		Type_t * L_24 = Object_GetType_m1416(L_23, /*hidden argument*/NULL);
		StreamingContext_t670  L_25 = (__this->____context_7);
		ObjectRecord_t2756 * L_26 = ___record;
		NullCheck(L_26);
		Object_t ** L_27 = &(L_26->___SurrogateSelector_7);
		NullCheck(L_22);
		Object_t * L_28 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Type_t *, StreamingContext_t670 , Object_t ** >::Invoke(0 /* System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&) */, ISurrogateSelector_t2744_il2cpp_TypeInfo_var, L_22, L_24, L_25, L_27);
		NullCheck(L_21);
		L_21->___Surrogate_6 = L_28;
		ObjectRecord_t2756 * L_29 = ___record;
		NullCheck(L_29);
		Object_t * L_30 = (L_29->___Surrogate_6);
		if (!L_30)
		{
			goto IL_00a0;
		}
	}
	{
		ObjectRecord_t2756 * L_31 = ___record;
		NullCheck(L_31);
		L_31->___Status_0 = 1;
	}

IL_00a0:
	{
		ObjectRecord_t2756 * L_32 = ___record;
		NullCheck(L_32);
		ObjectRecord_DoFixups_m17399(L_32, 1, __this, 0, /*hidden argument*/NULL);
		ObjectRecord_t2756 * L_33 = ___record;
		NullCheck(L_33);
		ObjectRecord_DoFixups_m17399(L_33, 0, __this, 0, /*hidden argument*/NULL);
		int32_t L_34 = (__this->____registeredObjectsCount_8);
		__this->____registeredObjectsCount_8 = ((int32_t)((int32_t)L_34+(int32_t)1));
		ObjectRecord_t2756 * L_35 = (__this->____objectRecordChain_0);
		if (L_35)
		{
			goto IL_00da;
		}
	}
	{
		ObjectRecord_t2756 * L_36 = ___record;
		__this->____objectRecordChain_0 = L_36;
		ObjectRecord_t2756 * L_37 = ___record;
		__this->____lastObjectRecord_1 = L_37;
		goto IL_00ed;
	}

IL_00da:
	{
		ObjectRecord_t2756 * L_38 = (__this->____lastObjectRecord_1);
		ObjectRecord_t2756 * L_39 = ___record;
		NullCheck(L_38);
		L_38->___Next_12 = L_39;
		ObjectRecord_t2756 * L_40 = ___record;
		__this->____lastObjectRecord_1 = L_40;
	}

IL_00ed:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RegisterObject_m17381 (ObjectManager_t2757 * __this, Object_t * ___obj, int64_t ___objectID, SerializationInfo_t669 * ___info, int64_t ___idOfContainingObj, MemberInfo_t * ___member, Int32U5BU5D_t1* ___arrayIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	ObjectRecord_t2756 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4991(L_1, (String_t*) &_stringLiteral4190, (String_t*) &_stringLiteral5068, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		int64_t L_2 = ___objectID;
		if ((((int64_t)L_2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_3 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_3, (String_t*) &_stringLiteral5057, (String_t*) &_stringLiteral5058, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		int64_t L_4 = ___objectID;
		ObjectRecord_t2756 * L_5 = ObjectManager_GetObjectRecord_m17370(__this, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		ObjectRecord_t2756 * L_6 = V_0;
		SerializationInfo_t669 * L_7 = ___info;
		NullCheck(L_6);
		L_6->___Info_4 = L_7;
		ObjectRecord_t2756 * L_8 = V_0;
		int64_t L_9 = ___idOfContainingObj;
		NullCheck(L_8);
		L_8->___IdOfContainingObj_5 = L_9;
		ObjectRecord_t2756 * L_10 = V_0;
		MemberInfo_t * L_11 = ___member;
		NullCheck(L_10);
		L_10->___Member_8 = L_11;
		ObjectRecord_t2756 * L_12 = V_0;
		Int32U5BU5D_t1* L_13 = ___arrayIndex;
		NullCheck(L_12);
		L_12->___ArrayIndex_9 = L_13;
		Object_t * L_14 = ___obj;
		ObjectRecord_t2756 * L_15 = V_0;
		ObjectManager_RegisterObjectInternal_m17380(__this, L_14, L_15, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.BaseFixupRecord
#include "mscorlib_System_Runtime_Serialization_BaseFixupRecordMethodDeclarations.h"



// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
extern "C" void BaseFixupRecord__ctor_m17382 (BaseFixupRecord_t2758 * __this, ObjectRecord_t2756 * ___objectToBeFixed, ObjectRecord_t2756 * ___objectRequired, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		ObjectRecord_t2756 * L_0 = ___objectToBeFixed;
		__this->___ObjectToBeFixed_0 = L_0;
		ObjectRecord_t2756 * L_1 = ___objectRequired;
		__this->___ObjectRequired_1 = L_1;
		return;
	}
}
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
extern TypeInfo* Int64_t696_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t1134_il2cpp_TypeInfo_var;
extern "C" bool BaseFixupRecord_DoFixup_m17383 (BaseFixupRecord_t2758 * __this, ObjectManager_t2757 * ___manager, bool ___strict, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(986);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		SerializationException_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1981);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectRecord_t2756 * L_0 = (__this->___ObjectToBeFixed_0);
		NullCheck(L_0);
		bool L_1 = ObjectRecord_get_IsRegistered_m17398(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		ObjectRecord_t2756 * L_2 = (__this->___ObjectRequired_1);
		NullCheck(L_2);
		bool L_3 = ObjectRecord_get_IsInstanceReady_m17396(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		ObjectManager_t2757 * L_4 = ___manager;
		VirtActionInvoker1< ObjectManager_t2757 * >::Invoke(4 /* System.Void System.Runtime.Serialization.BaseFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager) */, __this, L_4);
		return 1;
	}

IL_0023:
	{
		bool L_5 = ___strict;
		if (!L_5)
		{
			goto IL_008c;
		}
	}
	{
		ObjectRecord_t2756 * L_6 = (__this->___ObjectToBeFixed_0);
		NullCheck(L_6);
		bool L_7 = ObjectRecord_get_IsRegistered_m17398(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0058;
		}
	}
	{
		ObjectRecord_t2756 * L_8 = (__this->___ObjectToBeFixed_0);
		NullCheck(L_8);
		int64_t L_9 = (L_8->___ObjectID_3);
		int64_t L_10 = L_9;
		Object_t * L_11 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m1268(NULL /*static, unused*/, (String_t*) &_stringLiteral5069, L_11, (String_t*) &_stringLiteral5070, /*hidden argument*/NULL);
		SerializationException_t1134 * L_13 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_13, L_12, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0058:
	{
		ObjectRecord_t2756 * L_14 = (__this->___ObjectRequired_1);
		NullCheck(L_14);
		bool L_15 = ObjectRecord_get_IsRegistered_m17398(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_008a;
		}
	}
	{
		ObjectRecord_t2756 * L_16 = (__this->___ObjectRequired_1);
		NullCheck(L_16);
		int64_t L_17 = (L_16->___ObjectID_3);
		int64_t L_18 = L_17;
		Object_t * L_19 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_18);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m1268(NULL /*static, unused*/, (String_t*) &_stringLiteral5069, L_19, (String_t*) &_stringLiteral5070, /*hidden argument*/NULL);
		SerializationException_t1134 * L_21 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_21, L_20, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_008a:
	{
		return 0;
	}

IL_008c:
	{
		return 0;
	}
}
// System.Void System.Runtime.Serialization.BaseFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
#ifndef _MSC_VER
#else
#endif

// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"


// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern "C" void ArrayFixupRecord__ctor_m17384 (ArrayFixupRecord_t2759 * __this, ObjectRecord_t2756 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t2756 * ___objectRequired, const MethodInfo* method)
{
	{
		ObjectRecord_t2756 * L_0 = ___objectToBeFixed;
		ObjectRecord_t2756 * L_1 = ___objectRequired;
		BaseFixupRecord__ctor_m17382(__this, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___index;
		__this->____index_4 = L_2;
		return;
	}
}
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern TypeInfo* Array_t_il2cpp_TypeInfo_var;
extern "C" void ArrayFixupRecord_FixupImpl_m17385 (ArrayFixupRecord_t2759 * __this, ObjectManager_t2757 * ___manager, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Array_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1360);
		s_Il2CppMethodIntialized = true;
	}
	Array_t * V_0 = {0};
	{
		ObjectRecord_t2756 * L_0 = (((BaseFixupRecord_t2758 *)__this)->___ObjectToBeFixed_0);
		NullCheck(L_0);
		Object_t * L_1 = (L_0->___ObjectInstance_2);
		V_0 = ((Array_t *)Castclass(L_1, Array_t_il2cpp_TypeInfo_var));
		Array_t * L_2 = V_0;
		ObjectRecord_t2756 * L_3 = (((BaseFixupRecord_t2758 *)__this)->___ObjectRequired_1);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->___ObjectInstance_2);
		int32_t L_5 = (__this->____index_4);
		NullCheck(L_2);
		Array_SetValue_m5061(L_2, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m17386 (MultiArrayFixupRecord_t2760 * __this, ObjectRecord_t2756 * ___objectToBeFixed, Int32U5BU5D_t1* ___indices, ObjectRecord_t2756 * ___objectRequired, const MethodInfo* method)
{
	{
		ObjectRecord_t2756 * L_0 = ___objectToBeFixed;
		ObjectRecord_t2756 * L_1 = ___objectRequired;
		BaseFixupRecord__ctor_m17382(__this, L_0, L_1, /*hidden argument*/NULL);
		Int32U5BU5D_t1* L_2 = ___indices;
		__this->____indices_4 = L_2;
		return;
	}
}
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m17387 (MultiArrayFixupRecord_t2760 * __this, ObjectManager_t2757 * ___manager, const MethodInfo* method)
{
	{
		ObjectRecord_t2756 * L_0 = (((BaseFixupRecord_t2758 *)__this)->___ObjectToBeFixed_0);
		ObjectManager_t2757 * L_1 = ___manager;
		ObjectRecord_t2756 * L_2 = (((BaseFixupRecord_t2758 *)__this)->___ObjectRequired_1);
		NullCheck(L_2);
		Object_t * L_3 = (L_2->___ObjectInstance_2);
		Int32U5BU5D_t1* L_4 = (__this->____indices_4);
		NullCheck(L_0);
		ObjectRecord_SetArrayValue_m17394(L_0, L_1, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C" void FixupRecord__ctor_m17388 (FixupRecord_t2761 * __this, ObjectRecord_t2756 * ___objectToBeFixed, MemberInfo_t * ___member, ObjectRecord_t2756 * ___objectRequired, const MethodInfo* method)
{
	{
		ObjectRecord_t2756 * L_0 = ___objectToBeFixed;
		ObjectRecord_t2756 * L_1 = ___objectRequired;
		BaseFixupRecord__ctor_m17382(__this, L_0, L_1, /*hidden argument*/NULL);
		MemberInfo_t * L_2 = ___member;
		__this->____member_4 = L_2;
		return;
	}
}
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void FixupRecord_FixupImpl_m17389 (FixupRecord_t2761 * __this, ObjectManager_t2757 * ___manager, const MethodInfo* method)
{
	{
		ObjectRecord_t2756 * L_0 = (((BaseFixupRecord_t2758 *)__this)->___ObjectToBeFixed_0);
		ObjectManager_t2757 * L_1 = ___manager;
		MemberInfo_t * L_2 = (__this->____member_4);
		ObjectRecord_t2756 * L_3 = (((BaseFixupRecord_t2758 *)__this)->___ObjectRequired_1);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->___ObjectInstance_2);
		NullCheck(L_0);
		ObjectRecord_SetMemberValue_m17393(L_0, L_1, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
extern "C" void DelayedFixupRecord__ctor_m17390 (DelayedFixupRecord_t2762 * __this, ObjectRecord_t2756 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t2756 * ___objectRequired, const MethodInfo* method)
{
	{
		ObjectRecord_t2756 * L_0 = ___objectToBeFixed;
		ObjectRecord_t2756 * L_1 = ___objectRequired;
		BaseFixupRecord__ctor_m17382(__this, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___memberName;
		__this->____memberName_4 = L_2;
		return;
	}
}
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void DelayedFixupRecord_FixupImpl_m17391 (DelayedFixupRecord_t2762 * __this, ObjectManager_t2757 * ___manager, const MethodInfo* method)
{
	{
		ObjectRecord_t2756 * L_0 = (((BaseFixupRecord_t2758 *)__this)->___ObjectToBeFixed_0);
		ObjectManager_t2757 * L_1 = ___manager;
		String_t* L_2 = (__this->____memberName_4);
		ObjectRecord_t2756 * L_3 = (((BaseFixupRecord_t2758 *)__this)->___ObjectRequired_1);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->___ObjectInstance_2);
		NullCheck(L_0);
		ObjectRecord_SetMemberValue_m17395(L_0, L_1, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.ObjectRecordStatus
#include "mscorlib_System_Runtime_Serialization_ObjectRecordStatusMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"


// System.Void System.Runtime.Serialization.ObjectRecord::.ctor()
extern "C" void ObjectRecord__ctor_m17392 (ObjectRecord_t2756 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.Reflection.MemberInfo,System.Object)
extern TypeInfo* FieldInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t1134_il2cpp_TypeInfo_var;
extern "C" void ObjectRecord_SetMemberValue_m17393 (ObjectRecord_t2756 * __this, ObjectManager_t2757 * ___manager, MemberInfo_t * ___member, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FieldInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1015);
		PropertyInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(585);
		SerializationException_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1981);
		s_Il2CppMethodIntialized = true;
	}
	ObjectRecord_t2756 * V_0 = {0};
	ObjectRecord_t2756 * V_1 = {0};
	{
		MemberInfo_t * L_0 = ___member;
		if (!((FieldInfo_t *)IsInst(L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		MemberInfo_t * L_1 = ___member;
		Object_t * L_2 = (__this->___ObjectInstance_2);
		Object_t * L_3 = ___value;
		NullCheck(((FieldInfo_t *)Castclass(L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object) */, ((FieldInfo_t *)Castclass(L_1, FieldInfo_t_il2cpp_TypeInfo_var)), L_2, L_3);
		goto IL_0044;
	}

IL_001c:
	{
		MemberInfo_t * L_4 = ___member;
		if (!((PropertyInfo_t *)IsInst(L_4, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0039;
		}
	}
	{
		MemberInfo_t * L_5 = ___member;
		Object_t * L_6 = (__this->___ObjectInstance_2);
		Object_t * L_7 = ___value;
		NullCheck(((PropertyInfo_t *)Castclass(L_5, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< Object_t *, Object_t *, ObjectU5BU5D_t300* >::Invoke(25 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, ((PropertyInfo_t *)Castclass(L_5, PropertyInfo_t_il2cpp_TypeInfo_var)), L_6, L_7, (ObjectU5BU5D_t300*)(ObjectU5BU5D_t300*)NULL);
		goto IL_0044;
	}

IL_0039:
	{
		SerializationException_t1134 * L_8 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_8, (String_t*) &_stringLiteral5071, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0044:
	{
		MemberInfo_t * L_9 = (__this->___Member_8);
		if (!L_9)
		{
			goto IL_0076;
		}
	}
	{
		ObjectManager_t2757 * L_10 = ___manager;
		int64_t L_11 = (__this->___IdOfContainingObj_5);
		NullCheck(L_10);
		ObjectRecord_t2756 * L_12 = ObjectManager_GetObjectRecord_m17370(L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		ObjectRecord_t2756 * L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = ObjectRecord_get_IsRegistered_m17398(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0074;
		}
	}
	{
		ObjectRecord_t2756 * L_15 = V_0;
		ObjectManager_t2757 * L_16 = ___manager;
		MemberInfo_t * L_17 = (__this->___Member_8);
		Object_t * L_18 = (__this->___ObjectInstance_2);
		NullCheck(L_15);
		ObjectRecord_SetMemberValue_m17393(L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
	}

IL_0074:
	{
		goto IL_00a6;
	}

IL_0076:
	{
		Int32U5BU5D_t1* L_19 = (__this->___ArrayIndex_9);
		if (!L_19)
		{
			goto IL_00a6;
		}
	}
	{
		ObjectManager_t2757 * L_20 = ___manager;
		int64_t L_21 = (__this->___IdOfContainingObj_5);
		NullCheck(L_20);
		ObjectRecord_t2756 * L_22 = ObjectManager_GetObjectRecord_m17370(L_20, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		ObjectRecord_t2756 * L_23 = V_1;
		NullCheck(L_23);
		bool L_24 = ObjectRecord_get_IsRegistered_m17398(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00a6;
		}
	}
	{
		ObjectRecord_t2756 * L_25 = V_1;
		ObjectManager_t2757 * L_26 = ___manager;
		Object_t * L_27 = (__this->___ObjectInstance_2);
		Int32U5BU5D_t1* L_28 = (__this->___ArrayIndex_9);
		NullCheck(L_25);
		ObjectRecord_SetArrayValue_m17394(L_25, L_26, L_27, L_28, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::SetArrayValue(System.Runtime.Serialization.ObjectManager,System.Object,System.Int32[])
extern TypeInfo* Array_t_il2cpp_TypeInfo_var;
extern "C" void ObjectRecord_SetArrayValue_m17394 (ObjectRecord_t2756 * __this, ObjectManager_t2757 * ___manager, Object_t * ___value, Int32U5BU5D_t1* ___indices, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Array_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1360);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___ObjectInstance_2);
		Object_t * L_1 = ___value;
		Int32U5BU5D_t1* L_2 = ___indices;
		NullCheck(((Array_t *)Castclass(L_0, Array_t_il2cpp_TypeInfo_var)));
		Array_SetValue_m13651(((Array_t *)Castclass(L_0, Array_t_il2cpp_TypeInfo_var)), L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.String,System.Object)
extern TypeInfo* SerializationException_t1134_il2cpp_TypeInfo_var;
extern "C" void ObjectRecord_SetMemberValue_m17395 (ObjectRecord_t2756 * __this, ObjectManager_t2757 * ___manager, String_t* ___memberName, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationException_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1981);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t669 * L_0 = (__this->___Info_4);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		SerializationException_t1134 * L_1 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_1, (String_t*) &_stringLiteral5071, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		SerializationInfo_t669 * L_2 = (__this->___Info_4);
		String_t* L_3 = ___memberName;
		Object_t * L_4 = ___value;
		Object_t * L_5 = ___value;
		NullCheck(L_5);
		Type_t * L_6 = Object_GetType_m1416(L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		SerializationInfo_AddValue_m4996(L_2, L_3, L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsInstanceReady()
extern "C" bool ObjectRecord_get_IsInstanceReady_m17396 (ObjectRecord_t2756 * __this, const MethodInfo* method)
{
	{
		bool L_0 = ObjectRecord_get_IsRegistered_m17398(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		bool L_1 = ObjectRecord_get_IsUnsolvedObjectReference_m17397(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		Object_t * L_2 = (__this->___ObjectInstance_2);
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m1416(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, L_3);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		bool L_5 = ObjectRecord_get_HasPendingFixups_m17404(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		SerializationInfo_t669 * L_6 = (__this->___Info_4);
		if (!L_6)
		{
			goto IL_0038;
		}
	}

IL_0036:
	{
		return 0;
	}

IL_0038:
	{
		return 1;
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsUnsolvedObjectReference()
extern "C" bool ObjectRecord_get_IsUnsolvedObjectReference_m17397 (ObjectRecord_t2756 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___Status_0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsRegistered()
extern "C" bool ObjectRecord_get_IsRegistered_m17398 (ObjectRecord_t2756 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___Status_0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::DoFixups(System.Boolean,System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C" bool ObjectRecord_DoFixups_m17399 (ObjectRecord_t2756 * __this, bool ___asContainer, ObjectManager_t2757 * ___manager, bool ___strict, const MethodInfo* method)
{
	BaseFixupRecord_t2758 * V_0 = {0};
	BaseFixupRecord_t2758 * V_1 = {0};
	bool V_2 = false;
	BaseFixupRecord_t2758 * G_B3_0 = {0};
	BaseFixupRecord_t2758 * G_B13_0 = {0};
	{
		V_0 = (BaseFixupRecord_t2758 *)NULL;
		bool L_0 = ___asContainer;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		BaseFixupRecord_t2758 * L_1 = (__this->___FixupChainAsContainer_10);
		G_B3_0 = L_1;
		goto IL_0013;
	}

IL_000d:
	{
		BaseFixupRecord_t2758 * L_2 = (__this->___FixupChainAsRequired_11);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_1 = G_B3_0;
		V_2 = 1;
		goto IL_0062;
	}

IL_0018:
	{
		BaseFixupRecord_t2758 * L_3 = V_1;
		ObjectManager_t2757 * L_4 = ___manager;
		bool L_5 = ___strict;
		NullCheck(L_3);
		bool L_6 = BaseFixupRecord_DoFixup_m17383(L_3, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		BaseFixupRecord_t2758 * L_7 = V_1;
		BaseFixupRecord_t2758 * L_8 = V_0;
		bool L_9 = ___asContainer;
		ObjectRecord_UnchainFixup_m17401(__this, L_7, L_8, L_9, /*hidden argument*/NULL);
		bool L_10 = ___asContainer;
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		BaseFixupRecord_t2758 * L_11 = V_1;
		NullCheck(L_11);
		ObjectRecord_t2756 * L_12 = (L_11->___ObjectRequired_1);
		BaseFixupRecord_t2758 * L_13 = V_1;
		NullCheck(L_12);
		ObjectRecord_RemoveFixup_m17400(L_12, L_13, 0, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_003d:
	{
		BaseFixupRecord_t2758 * L_14 = V_1;
		NullCheck(L_14);
		ObjectRecord_t2756 * L_15 = (L_14->___ObjectToBeFixed_0);
		BaseFixupRecord_t2758 * L_16 = V_1;
		NullCheck(L_15);
		ObjectRecord_RemoveFixup_m17400(L_15, L_16, 1, /*hidden argument*/NULL);
	}

IL_004a:
	{
		goto IL_0050;
	}

IL_004c:
	{
		BaseFixupRecord_t2758 * L_17 = V_1;
		V_0 = L_17;
		V_2 = 0;
	}

IL_0050:
	{
		bool L_18 = ___asContainer;
		if (!L_18)
		{
			goto IL_005b;
		}
	}
	{
		BaseFixupRecord_t2758 * L_19 = V_1;
		NullCheck(L_19);
		BaseFixupRecord_t2758 * L_20 = (L_19->___NextSameContainer_2);
		G_B13_0 = L_20;
		goto IL_0061;
	}

IL_005b:
	{
		BaseFixupRecord_t2758 * L_21 = V_1;
		NullCheck(L_21);
		BaseFixupRecord_t2758 * L_22 = (L_21->___NextSameRequired_3);
		G_B13_0 = L_22;
	}

IL_0061:
	{
		V_1 = G_B13_0;
	}

IL_0062:
	{
		BaseFixupRecord_t2758 * L_23 = V_1;
		if (L_23)
		{
			goto IL_0018;
		}
	}
	{
		bool L_24 = V_2;
		return L_24;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::RemoveFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_RemoveFixup_m17400 (ObjectRecord_t2756 * __this, BaseFixupRecord_t2758 * ___fixupToRemove, bool ___asContainer, const MethodInfo* method)
{
	BaseFixupRecord_t2758 * V_0 = {0};
	BaseFixupRecord_t2758 * V_1 = {0};
	BaseFixupRecord_t2758 * G_B3_0 = {0};
	BaseFixupRecord_t2758 * G_B9_0 = {0};
	{
		V_0 = (BaseFixupRecord_t2758 *)NULL;
		bool L_0 = ___asContainer;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		BaseFixupRecord_t2758 * L_1 = (__this->___FixupChainAsContainer_10);
		G_B3_0 = L_1;
		goto IL_0013;
	}

IL_000d:
	{
		BaseFixupRecord_t2758 * L_2 = (__this->___FixupChainAsRequired_11);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_1 = G_B3_0;
		goto IL_0038;
	}

IL_0016:
	{
		BaseFixupRecord_t2758 * L_3 = V_1;
		BaseFixupRecord_t2758 * L_4 = ___fixupToRemove;
		if ((!(((Object_t*)(BaseFixupRecord_t2758 *)L_3) == ((Object_t*)(BaseFixupRecord_t2758 *)L_4))))
		{
			goto IL_0024;
		}
	}
	{
		BaseFixupRecord_t2758 * L_5 = V_1;
		BaseFixupRecord_t2758 * L_6 = V_0;
		bool L_7 = ___asContainer;
		ObjectRecord_UnchainFixup_m17401(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
		return;
	}

IL_0024:
	{
		BaseFixupRecord_t2758 * L_8 = V_1;
		V_0 = L_8;
		bool L_9 = ___asContainer;
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		BaseFixupRecord_t2758 * L_10 = V_1;
		NullCheck(L_10);
		BaseFixupRecord_t2758 * L_11 = (L_10->___NextSameContainer_2);
		G_B9_0 = L_11;
		goto IL_0037;
	}

IL_0031:
	{
		BaseFixupRecord_t2758 * L_12 = V_1;
		NullCheck(L_12);
		BaseFixupRecord_t2758 * L_13 = (L_12->___NextSameRequired_3);
		G_B9_0 = L_13;
	}

IL_0037:
	{
		V_1 = G_B9_0;
	}

IL_0038:
	{
		BaseFixupRecord_t2758 * L_14 = V_1;
		if (L_14)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::UnchainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_UnchainFixup_m17401 (ObjectRecord_t2756 * __this, BaseFixupRecord_t2758 * ___fixup, BaseFixupRecord_t2758 * ___prevFixup, bool ___asContainer, const MethodInfo* method)
{
	{
		BaseFixupRecord_t2758 * L_0 = ___prevFixup;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = ___asContainer;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		BaseFixupRecord_t2758 * L_2 = ___fixup;
		NullCheck(L_2);
		BaseFixupRecord_t2758 * L_3 = (L_2->___NextSameContainer_2);
		__this->___FixupChainAsContainer_10 = L_3;
		goto IL_0020;
	}

IL_0014:
	{
		BaseFixupRecord_t2758 * L_4 = ___fixup;
		NullCheck(L_4);
		BaseFixupRecord_t2758 * L_5 = (L_4->___NextSameRequired_3);
		__this->___FixupChainAsRequired_11 = L_5;
	}

IL_0020:
	{
		goto IL_003f;
	}

IL_0022:
	{
		bool L_6 = ___asContainer;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		BaseFixupRecord_t2758 * L_7 = ___prevFixup;
		BaseFixupRecord_t2758 * L_8 = ___fixup;
		NullCheck(L_8);
		BaseFixupRecord_t2758 * L_9 = (L_8->___NextSameContainer_2);
		NullCheck(L_7);
		L_7->___NextSameContainer_2 = L_9;
		goto IL_003f;
	}

IL_0033:
	{
		BaseFixupRecord_t2758 * L_10 = ___prevFixup;
		BaseFixupRecord_t2758 * L_11 = ___fixup;
		NullCheck(L_11);
		BaseFixupRecord_t2758 * L_12 = (L_11->___NextSameRequired_3);
		NullCheck(L_10);
		L_10->___NextSameRequired_3 = L_12;
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::ChainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_ChainFixup_m17402 (ObjectRecord_t2756 * __this, BaseFixupRecord_t2758 * ___fixup, bool ___asContainer, const MethodInfo* method)
{
	{
		bool L_0 = ___asContainer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		BaseFixupRecord_t2758 * L_1 = ___fixup;
		BaseFixupRecord_t2758 * L_2 = (__this->___FixupChainAsContainer_10);
		NullCheck(L_1);
		L_1->___NextSameContainer_2 = L_2;
		BaseFixupRecord_t2758 * L_3 = ___fixup;
		__this->___FixupChainAsContainer_10 = L_3;
		goto IL_002b;
	}

IL_0018:
	{
		BaseFixupRecord_t2758 * L_4 = ___fixup;
		BaseFixupRecord_t2758 * L_5 = (__this->___FixupChainAsRequired_11);
		NullCheck(L_4);
		L_4->___NextSameRequired_3 = L_5;
		BaseFixupRecord_t2758 * L_6 = ___fixup;
		__this->___FixupChainAsRequired_11 = L_6;
	}

IL_002b:
	{
		return;
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::LoadData(System.Runtime.Serialization.ObjectManager,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* SerializationInfo_t669_0_0_0_var;
extern const Il2CppType* StreamingContext_t670_0_0_0_var;
extern TypeInfo* ISerializationSurrogate_t2764_il2cpp_TypeInfo_var;
extern TypeInfo* ISerializable_t377_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* StreamingContext_t670_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t1134_il2cpp_TypeInfo_var;
extern TypeInfo* IObjectReference_t3017_il2cpp_TypeInfo_var;
extern TypeInfo* NullReferenceException_t671_il2cpp_TypeInfo_var;
extern "C" bool ObjectRecord_LoadData_m17403 (ObjectRecord_t2756 * __this, ObjectManager_t2757 * ___manager, Object_t * ___selector, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationInfo_t669_0_0_0_var = il2cpp_codegen_type_from_index(1690);
		StreamingContext_t670_0_0_0_var = il2cpp_codegen_type_from_index(1691);
		ISerializationSurrogate_t2764_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5765);
		ISerializable_t377_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(353);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		StreamingContext_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1691);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		SerializationException_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1981);
		IObjectReference_t3017_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5759);
		NullReferenceException_t671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(881);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ObjectU5BU5D_t300* V_1 = {0};
	ConstructorInfo_t574 * V_2 = {0};
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	ObjectRecord_t2756 * V_5 = {0};
	ObjectRecord_t2756 * V_6 = {0};
	bool V_7 = false;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t669 * L_0 = (__this->___Info_4);
		if (!L_0)
		{
			goto IL_0105;
		}
	}
	{
		Object_t * L_1 = (__this->___Surrogate_6);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		Object_t * L_2 = (__this->___Surrogate_6);
		Object_t * L_3 = (__this->___ObjectInstance_2);
		SerializationInfo_t669 * L_4 = (__this->___Info_4);
		StreamingContext_t670  L_5 = ___context;
		Object_t * L_6 = (__this->___SurrogateSelector_7);
		NullCheck(L_2);
		Object_t * L_7 = (Object_t *)InterfaceFuncInvoker4< Object_t *, Object_t *, SerializationInfo_t669 *, StreamingContext_t670 , Object_t * >::Invoke(1 /* System.Object System.Runtime.Serialization.ISerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector) */, ISerializationSurrogate_t2764_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5, L_6);
		V_0 = L_7;
		Object_t * L_8 = V_0;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		Object_t * L_9 = V_0;
		__this->___ObjectInstance_2 = L_9;
	}

IL_003c:
	{
		__this->___Status_0 = 3;
		goto IL_00fe;
	}

IL_0048:
	{
		Object_t * L_10 = (__this->___ObjectInstance_2);
		if (!((Object_t *)IsInst(L_10, ISerializable_t377_il2cpp_TypeInfo_var)))
		{
			goto IL_00de;
		}
	}
	{
		ObjectU5BU5D_t300* L_11 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 2));
		SerializationInfo_t669 * L_12 = (__this->___Info_4);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 0)) = (Object_t *)L_12;
		ObjectU5BU5D_t300* L_13 = L_11;
		StreamingContext_t670  L_14 = ___context;
		StreamingContext_t670  L_15 = L_14;
		Object_t * L_16 = Box(StreamingContext_t670_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 1)) = (Object_t *)L_16;
		V_1 = L_13;
		Object_t * L_17 = (__this->___ObjectInstance_2);
		NullCheck(L_17);
		Type_t * L_18 = Object_GetType_m1416(L_17, /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_19 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(SerializationInfo_t669_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 0)) = (Type_t *)L_20;
		TypeU5BU5D_t570* L_21 = L_19;
		Type_t * L_22 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(StreamingContext_t670_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 1);
		ArrayElementTypeCheck (L_21, L_22);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_21, 1)) = (Type_t *)L_22;
		NullCheck(L_18);
		ConstructorInfo_t574 * L_23 = (ConstructorInfo_t574 *)VirtFuncInvoker4< ConstructorInfo_t574 *, int32_t, Binder_t725 *, TypeU5BU5D_t570*, ParameterModifierU5BU5D_t726* >::Invoke(74 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_18, ((int32_t)52), (Binder_t725 *)NULL, L_21, (ParameterModifierU5BU5D_t726*)(ParameterModifierU5BU5D_t726*)NULL);
		V_2 = L_23;
		ConstructorInfo_t574 * L_24 = V_2;
		if (L_24)
		{
			goto IL_00ce;
		}
	}
	{
		Object_t * L_25 = (__this->___ObjectInstance_2);
		NullCheck(L_25);
		Type_t * L_26 = Object_GetType_m1416(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral5072, L_27, (String_t*) &_stringLiteral1633, /*hidden argument*/NULL);
		SerializationException_t1134 * L_29 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_29, L_28, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_29);
	}

IL_00ce:
	{
		ConstructorInfo_t574 * L_30 = V_2;
		Object_t * L_31 = (__this->___ObjectInstance_2);
		ObjectU5BU5D_t300* L_32 = V_1;
		NullCheck(L_30);
		VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t300* >::Invoke(17 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_30, L_31, L_32);
		goto IL_00fe;
	}

IL_00de:
	{
		Object_t * L_33 = (__this->___ObjectInstance_2);
		NullCheck(L_33);
		Type_t * L_34 = Object_GetType_m1416(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_34);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m1269(NULL /*static, unused*/, (String_t*) &_stringLiteral5073, L_35, /*hidden argument*/NULL);
		SerializationException_t1134 * L_37 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_37, L_36, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_37);
	}

IL_00fe:
	{
		__this->___Info_4 = (SerializationInfo_t669 *)NULL;
	}

IL_0105:
	{
		Object_t * L_38 = (__this->___ObjectInstance_2);
		if (!((Object_t *)IsInst(L_38, IObjectReference_t3017_il2cpp_TypeInfo_var)))
		{
			goto IL_0198;
		}
	}
	{
		uint8_t L_39 = (__this->___Status_0);
		if ((((int32_t)L_39) == ((int32_t)3)))
		{
			goto IL_0198;
		}
	}

IL_0121:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_40 = (__this->___ObjectInstance_2);
			StreamingContext_t670  L_41 = ___context;
			NullCheck(((Object_t *)Castclass(L_40, IObjectReference_t3017_il2cpp_TypeInfo_var)));
			Object_t * L_42 = (Object_t *)InterfaceFuncInvoker1< Object_t *, StreamingContext_t670  >::Invoke(0 /* System.Object System.Runtime.Serialization.IObjectReference::GetRealObject(System.Runtime.Serialization.StreamingContext) */, IObjectReference_t3017_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_40, IObjectReference_t3017_il2cpp_TypeInfo_var)), L_41);
			__this->___ObjectInstance_2 = L_42;
			V_3 = ((int32_t)100);
			goto IL_0168;
		}

IL_013d:
		{
			Object_t * L_43 = (__this->___ObjectInstance_2);
			StreamingContext_t670  L_44 = ___context;
			NullCheck(((Object_t *)Castclass(L_43, IObjectReference_t3017_il2cpp_TypeInfo_var)));
			Object_t * L_45 = (Object_t *)InterfaceFuncInvoker1< Object_t *, StreamingContext_t670  >::Invoke(0 /* System.Object System.Runtime.Serialization.IObjectReference::GetRealObject(System.Runtime.Serialization.StreamingContext) */, IObjectReference_t3017_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_43, IObjectReference_t3017_il2cpp_TypeInfo_var)), L_44);
			V_4 = L_45;
			Object_t * L_46 = V_4;
			Object_t * L_47 = (__this->___ObjectInstance_2);
			if ((!(((Object_t*)(Object_t *)L_46) == ((Object_t*)(Object_t *)L_47))))
			{
				goto IL_015c;
			}
		}

IL_015a:
		{
			goto IL_0179;
		}

IL_015c:
		{
			Object_t * L_48 = V_4;
			__this->___ObjectInstance_2 = L_48;
			int32_t L_49 = V_3;
			V_3 = ((int32_t)((int32_t)L_49-(int32_t)1));
		}

IL_0168:
		{
			Object_t * L_50 = (__this->___ObjectInstance_2);
			if (!((Object_t *)IsInst(L_50, IObjectReference_t3017_il2cpp_TypeInfo_var)))
			{
				goto IL_0179;
			}
		}

IL_0175:
		{
			int32_t L_51 = V_3;
			if ((((int32_t)L_51) > ((int32_t)0)))
			{
				goto IL_013d;
			}
		}

IL_0179:
		{
			int32_t L_52 = V_3;
			if (L_52)
			{
				goto IL_0187;
			}
		}

IL_017c:
		{
			SerializationException_t1134 * L_53 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
			SerializationException__ctor_m12746(L_53, (String_t*) &_stringLiteral5074, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_53);
		}

IL_0187:
		{
			__this->___Status_0 = 3;
			goto IL_0198;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t671_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0190;
		throw e;
	}

CATCH_0190:
	{ // begin catch(System.NullReferenceException)
		{
			V_7 = 0;
			goto IL_01f0;
		}

IL_0196:
		{
			goto IL_0198;
		}
	} // end catch (depth: 1)

IL_0198:
	{
		MemberInfo_t * L_54 = (__this->___Member_8);
		if (!L_54)
		{
			goto IL_01c4;
		}
	}
	{
		ObjectManager_t2757 * L_55 = ___manager;
		int64_t L_56 = (__this->___IdOfContainingObj_5);
		NullCheck(L_55);
		ObjectRecord_t2756 * L_57 = ObjectManager_GetObjectRecord_m17370(L_55, L_56, /*hidden argument*/NULL);
		V_5 = L_57;
		ObjectRecord_t2756 * L_58 = V_5;
		ObjectManager_t2757 * L_59 = ___manager;
		MemberInfo_t * L_60 = (__this->___Member_8);
		Object_t * L_61 = (__this->___ObjectInstance_2);
		NullCheck(L_58);
		ObjectRecord_SetMemberValue_m17393(L_58, L_59, L_60, L_61, /*hidden argument*/NULL);
		goto IL_01ee;
	}

IL_01c4:
	{
		Int32U5BU5D_t1* L_62 = (__this->___ArrayIndex_9);
		if (!L_62)
		{
			goto IL_01ee;
		}
	}
	{
		ObjectManager_t2757 * L_63 = ___manager;
		int64_t L_64 = (__this->___IdOfContainingObj_5);
		NullCheck(L_63);
		ObjectRecord_t2756 * L_65 = ObjectManager_GetObjectRecord_m17370(L_63, L_64, /*hidden argument*/NULL);
		V_6 = L_65;
		ObjectRecord_t2756 * L_66 = V_6;
		ObjectManager_t2757 * L_67 = ___manager;
		Object_t * L_68 = (__this->___ObjectInstance_2);
		Int32U5BU5D_t1* L_69 = (__this->___ArrayIndex_9);
		NullCheck(L_66);
		ObjectRecord_SetArrayValue_m17394(L_66, L_67, L_68, L_69, /*hidden argument*/NULL);
	}

IL_01ee:
	{
		return 1;
	}

IL_01f0:
	{
		bool L_70 = V_7;
		return L_70;
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_HasPendingFixups()
extern "C" bool ObjectRecord_get_HasPendingFixups_m17404 (ObjectRecord_t2756 * __this, const MethodInfo* method)
{
	{
		BaseFixupRecord_t2758 * L_0 = (__this->___FixupChainAsContainer_10);
		return ((((int32_t)((((Object_t*)(BaseFixupRecord_t2758 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Serialization.OnDeserializedAttribute
#include "mscorlib_System_Runtime_Serialization_OnDeserializedAttribut.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.OnDeserializedAttribute
#include "mscorlib_System_Runtime_Serialization_OnDeserializedAttributMethodDeclarations.h"



// System.Runtime.Serialization.OnDeserializingAttribute
#include "mscorlib_System_Runtime_Serialization_OnDeserializingAttribu.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.OnDeserializingAttribute
#include "mscorlib_System_Runtime_Serialization_OnDeserializingAttribuMethodDeclarations.h"



// System.Runtime.Serialization.OnSerializedAttribute
#include "mscorlib_System_Runtime_Serialization_OnSerializedAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.OnSerializedAttribute
#include "mscorlib_System_Runtime_Serialization_OnSerializedAttributeMethodDeclarations.h"



// System.Runtime.Serialization.OnSerializingAttribute
#include "mscorlib_System_Runtime_Serialization_OnSerializingAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.OnSerializingAttribute
#include "mscorlib_System_Runtime_Serialization_OnSerializingAttributeMethodDeclarations.h"



// System.Runtime.Serialization.SerializationBinder
#include "mscorlib_System_Runtime_Serialization_SerializationBinder.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.SerializationBinder
#include "mscorlib_System_Runtime_Serialization_SerializationBinderMethodDeclarations.h"



// System.Void System.Runtime.Serialization.SerializationBinder::.ctor()
extern "C" void SerializationBinder__ctor_m17405 (SerializationBinder_t2769 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Type System.Runtime.Serialization.SerializationBinder::BindToType(System.String,System.String)
// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
#include "mscorlib_System_Runtime_Serialization_SerializationCallbacks.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
#include "mscorlib_System_Runtime_Serialization_SerializationCallbacksMethodDeclarations.h"



// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::.ctor(System.Object,System.IntPtr)
extern "C" void CallbackHandler__ctor_m17406 (CallbackHandler_t2770 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::Invoke(System.Runtime.Serialization.StreamingContext)
extern "C" void CallbackHandler_Invoke_m17407 (CallbackHandler_t2770 * __this, StreamingContext_t670  ___context, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CallbackHandler_Invoke_m17407((CallbackHandler_t2770 *)__this->___prev_9,___context, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, StreamingContext_t670  ___context, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___context,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, StreamingContext_t670  ___context, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___context,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CallbackHandler_t2770(Il2CppObject* delegate, StreamingContext_t670  ___context)
{
	// Marshaling of parameter '___context' to native representation
	StreamingContext_t670  ____context_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Serialization.StreamingContext'."));
}
// System.IAsyncResult System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::BeginInvoke(System.Runtime.Serialization.StreamingContext,System.AsyncCallback,System.Object)
extern TypeInfo* StreamingContext_t670_il2cpp_TypeInfo_var;
extern "C" Object_t * CallbackHandler_BeginInvoke_m17408 (CallbackHandler_t2770 * __this, StreamingContext_t670  ___context, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StreamingContext_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1691);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(StreamingContext_t670_il2cpp_TypeInfo_var, &___context);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::EndInvoke(System.IAsyncResult)
extern "C" void CallbackHandler_EndInvoke_m17409 (CallbackHandler_t2770 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// System.TypeLoadException
#include "mscorlib_System_TypeLoadException.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.TypeLoadException
#include "mscorlib_System_TypeLoadExceptionMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"


// System.Void System.Runtime.Serialization.SerializationCallbacks::.ctor(System.Type)
extern const Il2CppType* OnSerializingAttribute_t2768_0_0_0_var;
extern const Il2CppType* OnSerializedAttribute_t2767_0_0_0_var;
extern const Il2CppType* OnDeserializingAttribute_t2766_0_0_0_var;
extern const Il2CppType* OnDeserializedAttribute_t2765_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationCallbacks_t2771_il2cpp_TypeInfo_var;
extern "C" void SerializationCallbacks__ctor_m17410 (SerializationCallbacks_t2771 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OnSerializingAttribute_t2768_0_0_0_var = il2cpp_codegen_type_from_index(5766);
		OnSerializedAttribute_t2767_0_0_0_var = il2cpp_codegen_type_from_index(5767);
		OnDeserializingAttribute_t2766_0_0_0_var = il2cpp_codegen_type_from_index(5768);
		OnDeserializedAttribute_t2765_0_0_0_var = il2cpp_codegen_type_from_index(5769);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		SerializationCallbacks_t2771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5758);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(OnSerializingAttribute_t2768_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t2771_il2cpp_TypeInfo_var);
		ArrayList_t913 * L_2 = SerializationCallbacks_GetMethodsByAttribute_m17414(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___onSerializingList_0 = L_2;
		Type_t * L_3 = ___type;
		Type_t * L_4 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(OnSerializedAttribute_t2767_0_0_0_var), /*hidden argument*/NULL);
		ArrayList_t913 * L_5 = SerializationCallbacks_GetMethodsByAttribute_m17414(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		__this->___onSerializedList_1 = L_5;
		Type_t * L_6 = ___type;
		Type_t * L_7 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(OnDeserializingAttribute_t2766_0_0_0_var), /*hidden argument*/NULL);
		ArrayList_t913 * L_8 = SerializationCallbacks_GetMethodsByAttribute_m17414(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		__this->___onDeserializingList_2 = L_8;
		Type_t * L_9 = ___type;
		Type_t * L_10 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(OnDeserializedAttribute_t2765_0_0_0_var), /*hidden argument*/NULL);
		ArrayList_t913 * L_11 = SerializationCallbacks_GetMethodsByAttribute_m17414(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		__this->___onDeserializedList_3 = L_11;
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationCallbacks::.cctor()
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationCallbacks_t2771_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" void SerializationCallbacks__cctor_m17411 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		SerializationCallbacks_t2771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5758);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t915 * L_0 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_0, /*hidden argument*/NULL);
		((SerializationCallbacks_t2771_StaticFields*)SerializationCallbacks_t2771_il2cpp_TypeInfo_var->static_fields)->___cache_4 = L_0;
		Object_t * L_1 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1291(L_1, /*hidden argument*/NULL);
		((SerializationCallbacks_t2771_StaticFields*)SerializationCallbacks_t2771_il2cpp_TypeInfo_var->static_fields)->___cache_lock_5 = L_1;
		return;
	}
}
// System.Boolean System.Runtime.Serialization.SerializationCallbacks::get_HasSerializedCallbacks()
extern "C" bool SerializationCallbacks_get_HasSerializedCallbacks_m17412 (SerializationCallbacks_t2771 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___onSerializedList_1);
		return ((((int32_t)((((Object_t*)(ArrayList_t913 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Runtime.Serialization.SerializationCallbacks::get_HasDeserializedCallbacks()
extern "C" bool SerializationCallbacks_get_HasDeserializedCallbacks_m17413 (SerializationCallbacks_t2771 * __this, const MethodInfo* method)
{
	{
		ArrayList_t913 * L_0 = (__this->___onDeserializedList_3);
		return ((((int32_t)((((Object_t*)(ArrayList_t913 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::GetMethodsByAttribute(System.Type,System.Type)
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeLoadException_t1161_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" ArrayList_t913 * SerializationCallbacks_GetMethodsByAttribute_m17414 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___attr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		TypeLoadException_t1161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2077);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t913 * V_0 = {0};
	Type_t * V_1 = {0};
	int32_t V_2 = 0;
	MethodInfo_t * V_3 = {0};
	MethodInfoU5BU5D_t2598* V_4 = {0};
	int32_t V_5 = 0;
	ArrayList_t913 * G_B13_0 = {0};
	{
		ArrayList_t913 * L_0 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		V_1 = L_1;
		goto IL_006c;
	}

IL_000a:
	{
		V_2 = 0;
		Type_t * L_2 = V_1;
		NullCheck(L_2);
		MethodInfoU5BU5D_t2598* L_3 = (MethodInfoU5BU5D_t2598*)VirtFuncInvoker1< MethodInfoU5BU5D_t2598*, int32_t >::Invoke(55 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_2, ((int32_t)54));
		V_4 = L_3;
		V_5 = 0;
		goto IL_003d;
	}

IL_001b:
	{
		MethodInfoU5BU5D_t2598* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_3 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_4, L_6));
		MethodInfo_t * L_7 = V_3;
		Type_t * L_8 = ___attr;
		NullCheck(L_7);
		bool L_9 = (bool)VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(11 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_7, L_8, 0);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		ArrayList_t913 * L_10 = V_0;
		MethodInfo_t * L_11 = V_3;
		NullCheck(L_10);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_10, L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_13 = V_5;
		V_5 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_14 = V_5;
		MethodInfoU5BU5D_t2598* L_15 = V_4;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		Type_t * L_17 = ___type;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_17);
		Type_t * L_19 = ___attr;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_19);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Format_m3539(NULL /*static, unused*/, (String_t*) &_stringLiteral5075, L_18, L_20, /*hidden argument*/NULL);
		TypeLoadException_t1161 * L_22 = (TypeLoadException_t1161 *)il2cpp_codegen_object_new (TypeLoadException_t1161_il2cpp_TypeInfo_var);
		TypeLoadException__ctor_m15303(L_22, L_21, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_0065:
	{
		Type_t * L_23 = V_1;
		NullCheck(L_23);
		Type_t * L_24 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_23);
		V_1 = L_24;
	}

IL_006c:
	{
		Type_t * L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_25) == ((Object_t*)(Type_t *)L_26))))
		{
			goto IL_000a;
		}
	}
	{
		ArrayList_t913 * L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_27);
		if (L_28)
		{
			goto IL_0084;
		}
	}
	{
		G_B13_0 = ((ArrayList_t913 *)(NULL));
		goto IL_0085;
	}

IL_0084:
	{
		ArrayList_t913 * L_29 = V_0;
		G_B13_0 = L_29;
	}

IL_0085:
	{
		return G_B13_0;
	}
}
// System.Void System.Runtime.Serialization.SerializationCallbacks::Invoke(System.Collections.ArrayList,System.Object,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* CallbackHandler_t2770_0_0_0_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* MethodInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* CallbackHandler_t2770_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void SerializationCallbacks_Invoke_m17415 (Object_t * __this /* static, unused */, ArrayList_t913 * ___list, Object_t * ___target, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallbackHandler_t2770_0_0_0_var = il2cpp_codegen_type_from_index(5770);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		MethodInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1606);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		CallbackHandler_t2770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5770);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	CallbackHandler_t2770 * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t913 * L_0 = ___list;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		V_0 = (CallbackHandler_t2770 *)NULL;
		ArrayList_t913 * L_1 = ___list;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
		V_2 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_000f:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_3);
			V_1 = ((MethodInfo_t *)Castclass(L_4, MethodInfo_t_il2cpp_TypeInfo_var));
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_5 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(CallbackHandler_t2770_0_0_0_var), /*hidden argument*/NULL);
			Object_t * L_6 = ___target;
			MethodInfo_t * L_7 = V_1;
			Delegate_t314 * L_8 = Delegate_CreateDelegate_m13586(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/NULL);
			CallbackHandler_t2770 * L_9 = V_0;
			Delegate_t314 * L_10 = Delegate_Combine_m1425(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
			V_0 = ((CallbackHandler_t2770 *)Castclass(L_10, CallbackHandler_t2770_il2cpp_TypeInfo_var));
		}

IL_0038:
		{
			Object_t * L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_000f;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		{
			Object_t * L_13 = V_2;
			V_3 = ((Object_t *)IsInst(L_13, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_14 = V_3;
			if (L_14)
			{
				goto IL_004d;
			}
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(66)
		}

IL_004d:
		{
			Object_t * L_15 = V_3;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(66)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0054:
	{
		CallbackHandler_t2770 * L_16 = V_0;
		StreamingContext_t670  L_17 = ___context;
		NullCheck(L_16);
		VirtActionInvoker1< StreamingContext_t670  >::Invoke(11 /* System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::Invoke(System.Runtime.Serialization.StreamingContext) */, L_16, L_17);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnSerializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* SerializationCallbacks_t2771_il2cpp_TypeInfo_var;
extern "C" void SerializationCallbacks_RaiseOnSerializing_m17416 (SerializationCallbacks_t2771 * __this, Object_t * ___target, StreamingContext_t670  ___contex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationCallbacks_t2771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5758);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t913 * L_0 = (__this->___onSerializingList_0);
		Object_t * L_1 = ___target;
		StreamingContext_t670  L_2 = ___contex;
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t2771_il2cpp_TypeInfo_var);
		SerializationCallbacks_Invoke_m17415(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnSerialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* SerializationCallbacks_t2771_il2cpp_TypeInfo_var;
extern "C" void SerializationCallbacks_RaiseOnSerialized_m17417 (SerializationCallbacks_t2771 * __this, Object_t * ___target, StreamingContext_t670  ___contex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationCallbacks_t2771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5758);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t913 * L_0 = (__this->___onSerializedList_1);
		Object_t * L_1 = ___target;
		StreamingContext_t670  L_2 = ___contex;
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t2771_il2cpp_TypeInfo_var);
		SerializationCallbacks_Invoke_m17415(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* SerializationCallbacks_t2771_il2cpp_TypeInfo_var;
extern "C" void SerializationCallbacks_RaiseOnDeserializing_m17418 (SerializationCallbacks_t2771 * __this, Object_t * ___target, StreamingContext_t670  ___contex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationCallbacks_t2771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5758);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t913 * L_0 = (__this->___onDeserializingList_2);
		Object_t * L_1 = ___target;
		StreamingContext_t670  L_2 = ___contex;
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t2771_il2cpp_TypeInfo_var);
		SerializationCallbacks_Invoke_m17415(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* SerializationCallbacks_t2771_il2cpp_TypeInfo_var;
extern "C" void SerializationCallbacks_RaiseOnDeserialized_m17419 (SerializationCallbacks_t2771 * __this, Object_t * ___target, StreamingContext_t670  ___contex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationCallbacks_t2771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5758);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t913 * L_0 = (__this->___onDeserializedList_3);
		Object_t * L_1 = ___target;
		StreamingContext_t670  L_2 = ___contex;
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t2771_il2cpp_TypeInfo_var);
		SerializationCallbacks_Invoke_m17415(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Serialization.SerializationCallbacks System.Runtime.Serialization.SerializationCallbacks::GetSerializationCallbacks(System.Type)
extern TypeInfo* SerializationCallbacks_t2771_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern "C" SerializationCallbacks_t2771 * SerializationCallbacks_GetSerializationCallbacks_m17420 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationCallbacks_t2771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5758);
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		s_Il2CppMethodIntialized = true;
	}
	SerializationCallbacks_t2771 * V_0 = {0};
	Object_t * V_1 = {0};
	Hashtable_t915 * V_2 = {0};
	SerializationCallbacks_t2771 * V_3 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t2771_il2cpp_TypeInfo_var);
		Hashtable_t915 * L_0 = ((SerializationCallbacks_t2771_StaticFields*)SerializationCallbacks_t2771_il2cpp_TypeInfo_var->static_fields)->___cache_4;
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_0 = ((SerializationCallbacks_t2771 *)Castclass(L_2, SerializationCallbacks_t2771_il2cpp_TypeInfo_var));
		SerializationCallbacks_t2771 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		SerializationCallbacks_t2771 * L_4 = V_0;
		return L_4;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t2771_il2cpp_TypeInfo_var);
		Object_t * L_5 = ((SerializationCallbacks_t2771_StaticFields*)SerializationCallbacks_t2771_il2cpp_TypeInfo_var->static_fields)->___cache_lock_5;
		V_1 = L_5;
		Object_t * L_6 = V_1;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t2771_il2cpp_TypeInfo_var);
			Hashtable_t915 * L_7 = ((SerializationCallbacks_t2771_StaticFields*)SerializationCallbacks_t2771_il2cpp_TypeInfo_var->static_fields)->___cache_4;
			Type_t * L_8 = ___t;
			NullCheck(L_7);
			Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_7, L_8);
			V_0 = ((SerializationCallbacks_t2771 *)Castclass(L_9, SerializationCallbacks_t2771_il2cpp_TypeInfo_var));
			SerializationCallbacks_t2771 * L_10 = V_0;
			if (L_10)
			{
				goto IL_005b;
			}
		}

IL_0036:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t2771_il2cpp_TypeInfo_var);
			Hashtable_t915 * L_11 = ((SerializationCallbacks_t2771_StaticFields*)SerializationCallbacks_t2771_il2cpp_TypeInfo_var->static_fields)->___cache_4;
			NullCheck(L_11);
			Object_t * L_12 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(33 /* System.Object System.Collections.Hashtable::Clone() */, L_11);
			V_2 = ((Hashtable_t915 *)Castclass(L_12, Hashtable_t915_il2cpp_TypeInfo_var));
			Type_t * L_13 = ___t;
			SerializationCallbacks_t2771 * L_14 = (SerializationCallbacks_t2771 *)il2cpp_codegen_object_new (SerializationCallbacks_t2771_il2cpp_TypeInfo_var);
			SerializationCallbacks__ctor_m17410(L_14, L_13, /*hidden argument*/NULL);
			V_0 = L_14;
			Hashtable_t915 * L_15 = V_2;
			Type_t * L_16 = ___t;
			SerializationCallbacks_t2771 * L_17 = V_0;
			NullCheck(L_15);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_15, L_16, L_17);
			Hashtable_t915 * L_18 = V_2;
			((SerializationCallbacks_t2771_StaticFields*)SerializationCallbacks_t2771_il2cpp_TypeInfo_var->static_fields)->___cache_4 = L_18;
		}

IL_005b:
		{
			SerializationCallbacks_t2771 * L_19 = V_0;
			V_3 = L_19;
			IL2CPP_LEAVE(0x68, FINALLY_0061);
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x68, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		Object_t * L_20 = V_1;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0068:
	{
		SerializationCallbacks_t2771 * L_21 = V_3;
		return L_21;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Serialization.SerializationEntry::.ctor(System.String,System.Type,System.Object)
extern "C" void SerializationEntry__ctor_m17421 (SerializationEntry_t2772 * __this, String_t* ___name, Type_t * ___type, Object_t * ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___name_0 = L_0;
		Type_t * L_1 = ___type;
		__this->___objectType_1 = L_1;
		Object_t * L_2 = ___value;
		__this->___value_2 = L_2;
		return;
	}
}
// System.String System.Runtime.Serialization.SerializationEntry::get_Name()
extern "C" String_t* SerializationEntry_get_Name_m17422 (SerializationEntry_t2772 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_0);
		return L_0;
	}
}
// System.Type System.Runtime.Serialization.SerializationEntry::get_ObjectType()
extern "C" Type_t * SerializationEntry_get_ObjectType_m17423 (SerializationEntry_t2772 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___objectType_1);
		return L_0;
	}
}
// System.Object System.Runtime.Serialization.SerializationEntry::get_Value()
extern "C" Object_t * SerializationEntry_get_Value_m17424 (SerializationEntry_t2772 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___value_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Serialization.SerializationException::.ctor()
extern "C" void SerializationException__ctor_m17425 (SerializationException_t1134 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m4993(__this, (String_t*) &_stringLiteral5076, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String)
extern "C" void SerializationException__ctor_m12746 (SerializationException_t1134 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m4993(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SerializationException__ctor_m17426 (SerializationException_t1134 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___context;
		SystemException__ctor_m4994(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Single
#include "mscorlib_System_Single.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"


// System.Void System.Runtime.Serialization.SerializationInfo::.ctor(System.Type,System.Runtime.Serialization.IFormatterConverter)
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo__ctor_m17427 (SerializationInfo_t669 * __this, Type_t * ___type, Object_t * ___converter, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t915 * L_0 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_0, /*hidden argument*/NULL);
		__this->___serialized_0 = L_0;
		ArrayList_t913 * L_1 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4965(L_1, /*hidden argument*/NULL);
		__this->___values_1 = L_1;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Type_t * L_2 = ___type;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		ArgumentNullException_t692 * L_3 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4991(L_3, (String_t*) &_stringLiteral1091, (String_t*) &_stringLiteral5077, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002f:
	{
		Object_t * L_4 = ___converter;
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		ArgumentNullException_t692 * L_5 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4991(L_5, (String_t*) &_stringLiteral3845, (String_t*) &_stringLiteral5077, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0042:
	{
		Object_t * L_6 = ___converter;
		__this->___converter_4 = L_6;
		Type_t * L_7 = ___type;
		NullCheck(L_7);
		Assembly_t1120 * L_8 = (Assembly_t1120 *)VirtFuncInvoker0< Assembly_t1120 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_8);
		__this->___assemblyName_2 = L_9;
		Type_t * L_10 = ___type;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_10);
		__this->___fullTypeName_3 = L_11;
		return;
	}
}
// System.String System.Runtime.Serialization.SerializationInfo::get_AssemblyName()
extern "C" String_t* SerializationInfo_get_AssemblyName_m17428 (SerializationInfo_t669 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___assemblyName_2);
		return L_0;
	}
}
// System.String System.Runtime.Serialization.SerializationInfo::get_FullTypeName()
extern "C" String_t* SerializationInfo_get_FullTypeName_m17429 (SerializationInfo_t669 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___fullTypeName_3);
		return L_0;
	}
}
// System.Int32 System.Runtime.Serialization.SerializationInfo::get_MemberCount()
extern "C" int32_t SerializationInfo_get_MemberCount_m17430 (SerializationInfo_t669 * __this, const MethodInfo* method)
{
	{
		Hashtable_t915 * L_0 = (__this->___serialized_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_0);
		return L_1;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t1134_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationEntry_t2772_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m4996 (SerializationInfo_t669 * __this, String_t* ___name, Object_t * ___value, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		SerializationException_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1981);
		SerializationEntry_t2772_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5771);
		s_Il2CppMethodIntialized = true;
	}
	SerializationEntry_t2772  V_0 = {0};
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5078, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Type_t * L_2 = ___type;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t692 * L_3 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_3, (String_t*) &_stringLiteral5079, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		Hashtable_t915 * L_4 = (__this->___serialized_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		SerializationException_t1134 * L_7 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_7, (String_t*) &_stringLiteral5080, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0035:
	{
		String_t* L_8 = ___name;
		Type_t * L_9 = ___type;
		Object_t * L_10 = ___value;
		SerializationEntry__ctor_m17421((&V_0), L_8, L_9, L_10, /*hidden argument*/NULL);
		Hashtable_t915 * L_11 = (__this->___serialized_0);
		String_t* L_12 = ___name;
		SerializationEntry_t2772  L_13 = V_0;
		SerializationEntry_t2772  L_14 = L_13;
		Object_t * L_15 = Box(SerializationEntry_t2772_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_11, L_12, L_15);
		ArrayList_t913 * L_16 = (__this->___values_1);
		SerializationEntry_t2772  L_17 = V_0;
		SerializationEntry_t2772  L_18 = L_17;
		Object_t * L_19 = Box(SerializationEntry_t2772_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_19);
		return;
	}
}
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t1134_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationEntry_t2772_il2cpp_TypeInfo_var;
extern TypeInfo* IFormatterConverter_t2773_il2cpp_TypeInfo_var;
extern "C" Object_t * SerializationInfo_GetValue_m4998 (SerializationInfo_t669 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		SerializationException_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1981);
		SerializationEntry_t2772_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5771);
		IFormatterConverter_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5772);
		s_Il2CppMethodIntialized = true;
	}
	SerializationEntry_t2772  V_0 = {0};
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5081, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Type_t * L_2 = ___type;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t692 * L_3 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_3, (String_t*) &_stringLiteral1091, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		Hashtable_t915 * L_4 = (__this->___serialized_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_4, L_5);
		if (L_6)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_7 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral5082, L_7, (String_t*) &_stringLiteral5083, /*hidden argument*/NULL);
		SerializationException_t1134 * L_9 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0040:
	{
		Hashtable_t915 * L_10 = (__this->___serialized_0);
		String_t* L_11 = ___name;
		NullCheck(L_10);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(24 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_10, L_11);
		V_0 = ((*(SerializationEntry_t2772 *)((SerializationEntry_t2772 *)UnBox (L_12, SerializationEntry_t2772_il2cpp_TypeInfo_var))));
		Object_t * L_13 = SerializationEntry_get_Value_m17424((&V_0), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_007e;
		}
	}
	{
		Type_t * L_14 = ___type;
		Object_t * L_15 = SerializationEntry_get_Value_m17424((&V_0), /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_16 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(42 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_14, L_15);
		if (L_16)
		{
			goto IL_007e;
		}
	}
	{
		Object_t * L_17 = (__this->___converter_4);
		Object_t * L_18 = SerializationEntry_get_Value_m17424((&V_0), /*hidden argument*/NULL);
		Type_t * L_19 = ___type;
		NullCheck(L_17);
		Object_t * L_20 = (Object_t *)InterfaceFuncInvoker2< Object_t *, Object_t *, Type_t * >::Invoke(0 /* System.Object System.Runtime.Serialization.IFormatterConverter::Convert(System.Object,System.Type) */, IFormatterConverter_t2773_il2cpp_TypeInfo_var, L_17, L_18, L_19);
		return L_20;
	}

IL_007e:
	{
		Object_t * L_21 = SerializationEntry_get_Value_m17424((&V_0), /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_SetType_m17431 (SerializationInfo_t669 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5084, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_2);
		__this->___fullTypeName_3 = L_3;
		Type_t * L_4 = ___type;
		NullCheck(L_4);
		Assembly_t1120 * L_5 = (Assembly_t1120 *)VirtFuncInvoker0< Assembly_t1120 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_4);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_5);
		__this->___assemblyName_2 = L_6;
		return;
	}
}
// System.Runtime.Serialization.SerializationInfoEnumerator System.Runtime.Serialization.SerializationInfo::GetEnumerator()
extern TypeInfo* SerializationInfoEnumerator_t1133_il2cpp_TypeInfo_var;
extern "C" SerializationInfoEnumerator_t1133 * SerializationInfo_GetEnumerator_m5045 (SerializationInfo_t669 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationInfoEnumerator_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5773);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t913 * L_0 = (__this->___values_1);
		SerializationInfoEnumerator_t1133 * L_1 = (SerializationInfoEnumerator_t1133 *)il2cpp_codegen_object_new (SerializationInfoEnumerator_t1133_il2cpp_TypeInfo_var);
		SerializationInfoEnumerator__ctor_m17439(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int16)
extern const Il2CppType* Int16_t378_0_0_0_var;
extern TypeInfo* Int16_t378_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m17432 (SerializationInfo_t669 * __this, String_t* ___name, int16_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int16_t378_0_0_0_var = il2cpp_codegen_type_from_index(993);
		Int16_t378_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(993);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		int16_t L_1 = ___value;
		int16_t L_2 = L_1;
		Object_t * L_3 = Box(Int16_t378_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int16_t378_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m4996(__this, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
extern const Il2CppType* Int32_t297_0_0_0_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m5038 (SerializationInfo_t669 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t297_0_0_0_var = il2cpp_codegen_type_from_index(5);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		int32_t L_1 = ___value;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int32_t297_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m4996(__this, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
extern const Il2CppType* Boolean_t311_0_0_0_var;
extern TypeInfo* Boolean_t311_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m5037 (SerializationInfo_t669 * __this, String_t* ___name, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t311_0_0_0_var = il2cpp_codegen_type_from_index(64);
		Boolean_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		bool L_1 = ___value;
		bool L_2 = L_1;
		Object_t * L_3 = Box(Boolean_t311_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Boolean_t311_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m4996(__this, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.DateTime)
extern const Il2CppType* DateTime_t445_0_0_0_var;
extern TypeInfo* DateTime_t445_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m17433 (SerializationInfo_t669 * __this, String_t* ___name, DateTime_t445  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t445_0_0_0_var = il2cpp_codegen_type_from_index(901);
		DateTime_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		DateTime_t445  L_1 = ___value;
		DateTime_t445  L_2 = L_1;
		Object_t * L_3 = Box(DateTime_t445_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(DateTime_t445_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m4996(__this, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Single)
extern const Il2CppType* Single_t308_0_0_0_var;
extern TypeInfo* Single_t308_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m17434 (SerializationInfo_t669 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t308_0_0_0_var = il2cpp_codegen_type_from_index(52);
		Single_t308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		float L_1 = ___value;
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t308_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Single_t308_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m4996(__this, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt32)
extern const Il2CppType* UInt32_t386_0_0_0_var;
extern TypeInfo* UInt32_t386_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m17435 (SerializationInfo_t669 * __this, String_t* ___name, uint32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt32_t386_0_0_0_var = il2cpp_codegen_type_from_index(570);
		UInt32_t386_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		uint32_t L_1 = ___value;
		uint32_t L_2 = L_1;
		Object_t * L_3 = Box(UInt32_t386_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt32_t386_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m4996(__this, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int64)
extern const Il2CppType* Int64_t696_0_0_0_var;
extern TypeInfo* Int64_t696_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m5056 (SerializationInfo_t669 * __this, String_t* ___name, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t696_0_0_0_var = il2cpp_codegen_type_from_index(986);
		Int64_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(986);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		int64_t L_1 = ___value;
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int64_t696_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m4996(__this, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
extern const Il2CppType* UInt64_t699_0_0_0_var;
extern TypeInfo* UInt64_t699_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m17436 (SerializationInfo_t669 * __this, String_t* ___name, uint64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt64_t699_0_0_0_var = il2cpp_codegen_type_from_index(990);
		UInt64_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(990);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		uint64_t L_1 = ___value;
		uint64_t L_2 = L_1;
		Object_t * L_3 = Box(UInt64_t699_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt64_t699_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m4996(__this, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m5012 (SerializationInfo_t669 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = ___name;
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m4996(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		goto IL_0025;
	}

IL_0017:
	{
		String_t* L_4 = ___name;
		Object_t * L_5 = ___value;
		Object_t * L_6 = ___value;
		NullCheck(L_6);
		Type_t * L_7 = Object_GetType_m1416(L_6, /*hidden argument*/NULL);
		SerializationInfo_AddValue_m4996(__this, L_4, L_5, L_7, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
extern const Il2CppType* Boolean_t311_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IFormatterConverter_t2773_il2cpp_TypeInfo_var;
extern "C" bool SerializationInfo_GetBoolean_m5040 (SerializationInfo_t669 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t311_0_0_0_var = il2cpp_codegen_type_from_index(64);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IFormatterConverter_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5772);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Boolean_t311_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_2 = SerializationInfo_GetValue_m4998(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Object_t * L_3 = (__this->___converter_4);
		Object_t * L_4 = V_0;
		NullCheck(L_3);
		bool L_5 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(1 /* System.Boolean System.Runtime.Serialization.IFormatterConverter::ToBoolean(System.Object) */, IFormatterConverter_t2773_il2cpp_TypeInfo_var, L_3, L_4);
		return L_5;
	}
}
// System.Int16 System.Runtime.Serialization.SerializationInfo::GetInt16(System.String)
extern const Il2CppType* Int16_t378_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IFormatterConverter_t2773_il2cpp_TypeInfo_var;
extern "C" int16_t SerializationInfo_GetInt16_m17437 (SerializationInfo_t669 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int16_t378_0_0_0_var = il2cpp_codegen_type_from_index(993);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IFormatterConverter_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5772);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int16_t378_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_2 = SerializationInfo_GetValue_m4998(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Object_t * L_3 = (__this->___converter_4);
		Object_t * L_4 = V_0;
		NullCheck(L_3);
		int16_t L_5 = (int16_t)InterfaceFuncInvoker1< int16_t, Object_t * >::Invoke(2 /* System.Int16 System.Runtime.Serialization.IFormatterConverter::ToInt16(System.Object) */, IFormatterConverter_t2773_il2cpp_TypeInfo_var, L_3, L_4);
		return L_5;
	}
}
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
extern const Il2CppType* Int32_t297_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IFormatterConverter_t2773_il2cpp_TypeInfo_var;
extern "C" int32_t SerializationInfo_GetInt32_m5041 (SerializationInfo_t669 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t297_0_0_0_var = il2cpp_codegen_type_from_index(5);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IFormatterConverter_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5772);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int32_t297_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_2 = SerializationInfo_GetValue_m4998(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Object_t * L_3 = (__this->___converter_4);
		Object_t * L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(3 /* System.Int32 System.Runtime.Serialization.IFormatterConverter::ToInt32(System.Object) */, IFormatterConverter_t2773_il2cpp_TypeInfo_var, L_3, L_4);
		return L_5;
	}
}
// System.Int64 System.Runtime.Serialization.SerializationInfo::GetInt64(System.String)
extern const Il2CppType* Int64_t696_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IFormatterConverter_t2773_il2cpp_TypeInfo_var;
extern "C" int64_t SerializationInfo_GetInt64_m5055 (SerializationInfo_t669 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t696_0_0_0_var = il2cpp_codegen_type_from_index(986);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IFormatterConverter_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5772);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int64_t696_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_2 = SerializationInfo_GetValue_m4998(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Object_t * L_3 = (__this->___converter_4);
		Object_t * L_4 = V_0;
		NullCheck(L_3);
		int64_t L_5 = (int64_t)InterfaceFuncInvoker1< int64_t, Object_t * >::Invoke(4 /* System.Int64 System.Runtime.Serialization.IFormatterConverter::ToInt64(System.Object) */, IFormatterConverter_t2773_il2cpp_TypeInfo_var, L_3, L_4);
		return L_5;
	}
}
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IFormatterConverter_t2773_il2cpp_TypeInfo_var;
extern "C" String_t* SerializationInfo_GetString_m5039 (SerializationInfo_t669 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IFormatterConverter_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5772);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_2 = SerializationInfo_GetValue_m4998(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0017:
	{
		Object_t * L_4 = (__this->___converter_4);
		Object_t * L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker1< String_t*, Object_t * >::Invoke(5 /* System.String System.Runtime.Serialization.IFormatterConverter::ToString(System.Object) */, IFormatterConverter_t2773_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.UInt32 System.Runtime.Serialization.SerializationInfo::GetUInt32(System.String)
extern const Il2CppType* UInt32_t386_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IFormatterConverter_t2773_il2cpp_TypeInfo_var;
extern "C" uint32_t SerializationInfo_GetUInt32_m17438 (SerializationInfo_t669 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt32_t386_0_0_0_var = il2cpp_codegen_type_from_index(570);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		IFormatterConverter_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5772);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt32_t386_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_2 = SerializationInfo_GetValue_m4998(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Object_t * L_3 = (__this->___converter_4);
		Object_t * L_4 = V_0;
		NullCheck(L_3);
		uint32_t L_5 = (uint32_t)InterfaceFuncInvoker1< uint32_t, Object_t * >::Invoke(6 /* System.UInt32 System.Runtime.Serialization.IFormatterConverter::ToUInt32(System.Object) */, IFormatterConverter_t2773_il2cpp_TypeInfo_var, L_3, L_4);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Serialization.SerializationInfoEnumerator::.ctor(System.Collections.ArrayList)
extern "C" void SerializationInfoEnumerator__ctor_m17439 (SerializationInfoEnumerator_t1133 * __this, ArrayList_t913 * ___list, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		ArrayList_t913 * L_0 = ___list;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(39 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		__this->___enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::System.Collections.IEnumerator.get_Current()
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern "C" Object_t * SerializationInfoEnumerator_System_Collections_IEnumerator_get_Current_m17440 (SerializationInfoEnumerator_t1133 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___enumerator_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Runtime.Serialization.SerializationEntry System.Runtime.Serialization.SerializationInfoEnumerator::get_Current()
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationEntry_t2772_il2cpp_TypeInfo_var;
extern "C" SerializationEntry_t2772  SerializationInfoEnumerator_get_Current_m17441 (SerializationInfoEnumerator_t1133 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		SerializationEntry_t2772_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5771);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___enumerator_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_0);
		return ((*(SerializationEntry_t2772 *)((SerializationEntry_t2772 *)UnBox (L_1, SerializationEntry_t2772_il2cpp_TypeInfo_var))));
	}
}
// System.String System.Runtime.Serialization.SerializationInfoEnumerator::get_Name()
extern "C" String_t* SerializationInfoEnumerator_get_Name_m17442 (SerializationInfoEnumerator_t1133 * __this, const MethodInfo* method)
{
	SerializationEntry_t2772  V_0 = {0};
	{
		SerializationEntry_t2772  L_0 = SerializationInfoEnumerator_get_Current_m17441(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = SerializationEntry_get_Name_m17422((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Type System.Runtime.Serialization.SerializationInfoEnumerator::get_ObjectType()
extern "C" Type_t * SerializationInfoEnumerator_get_ObjectType_m5046 (SerializationInfoEnumerator_t1133 * __this, const MethodInfo* method)
{
	SerializationEntry_t2772  V_0 = {0};
	{
		SerializationEntry_t2772  L_0 = SerializationInfoEnumerator_get_Current_m17441(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = SerializationEntry_get_ObjectType_m17423((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::get_Value()
extern "C" Object_t * SerializationInfoEnumerator_get_Value_m5047 (SerializationInfoEnumerator_t1133 * __this, const MethodInfo* method)
{
	SerializationEntry_t2772  V_0 = {0};
	{
		SerializationEntry_t2772  L_0 = SerializationInfoEnumerator_get_Current_m17441(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Object_t * L_1 = SerializationEntry_get_Value_m17424((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext()
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern "C" bool SerializationInfoEnumerator_MoveNext_m17443 (SerializationInfoEnumerator_t1133 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___enumerator_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey2
#include "mscorlib_System_Runtime_Serialization_SerializationObjectMan.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey2
#include "mscorlib_System_Runtime_Serialization_SerializationObjectManMethodDeclarations.h"



// System.Void System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey2::.ctor()
extern "C" void U3CRegisterObjectU3Ec__AnonStorey2__ctor_m17444 (U3CRegisterObjectU3Ec__AnonStorey2_t2774 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey2::<>m__1(System.Runtime.Serialization.StreamingContext)
extern "C" void U3CRegisterObjectU3Ec__AnonStorey2_U3CU3Em__1_m17445 (U3CRegisterObjectU3Ec__AnonStorey2_t2774 * __this, StreamingContext_t670  ___ctx, const MethodInfo* method)
{
	{
		SerializationCallbacks_t2771 * L_0 = (__this->___sc_0);
		Object_t * L_1 = (__this->___obj_1);
		StreamingContext_t670  L_2 = ___ctx;
		NullCheck(L_0);
		SerializationCallbacks_RaiseOnSerialized_m17417(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Serialization.SerializationObjectManager
#include "mscorlib_System_Runtime_Serialization_SerializationObjectMan_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.SerializationObjectManager
#include "mscorlib_System_Runtime_Serialization_SerializationObjectMan_0MethodDeclarations.h"



// System.Void System.Runtime.Serialization.SerializationObjectManager::.ctor(System.Runtime.Serialization.StreamingContext)
extern TypeInfo* Hashtable_t915_il2cpp_TypeInfo_var;
extern "C" void SerializationObjectManager__ctor_m17446 (SerializationObjectManager_t2775 * __this, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t915_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1933);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t915 * L_0 = (Hashtable_t915 *)il2cpp_codegen_object_new (Hashtable_t915_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4989(L_0, /*hidden argument*/NULL);
		__this->___seen_1 = L_0;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		StreamingContext_t670  L_1 = ___context;
		__this->___context_0 = L_1;
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationObjectManager::RegisterObject(System.Object)
extern TypeInfo* U3CRegisterObjectU3Ec__AnonStorey2_t2774_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationCallbacks_t2771_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* CallbackHandler_t2770_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CRegisterObjectU3Ec__AnonStorey2_U3CU3Em__1_m17445_MethodInfo_var;
extern "C" void SerializationObjectManager_RegisterObject_m17447 (SerializationObjectManager_t2775 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CRegisterObjectU3Ec__AnonStorey2_t2774_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5774);
		SerializationCallbacks_t2771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5758);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		CallbackHandler_t2770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5770);
		U3CRegisterObjectU3Ec__AnonStorey2_U3CU3Em__1_m17445_MethodInfo_var = il2cpp_codegen_method_info_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	U3CRegisterObjectU3Ec__AnonStorey2_t2774 * V_0 = {0};
	{
		U3CRegisterObjectU3Ec__AnonStorey2_t2774 * L_0 = (U3CRegisterObjectU3Ec__AnonStorey2_t2774 *)il2cpp_codegen_object_new (U3CRegisterObjectU3Ec__AnonStorey2_t2774_il2cpp_TypeInfo_var);
		U3CRegisterObjectU3Ec__AnonStorey2__ctor_m17444(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRegisterObjectU3Ec__AnonStorey2_t2774 * L_1 = V_0;
		Object_t * L_2 = ___obj;
		NullCheck(L_1);
		L_1->___obj_1 = L_2;
		Hashtable_t915 * L_3 = (__this->___seen_1);
		U3CRegisterObjectU3Ec__AnonStorey2_t2774 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (L_4->___obj_1);
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(29 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_3, L_5);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		return;
	}

IL_0021:
	{
		U3CRegisterObjectU3Ec__AnonStorey2_t2774 * L_7 = V_0;
		U3CRegisterObjectU3Ec__AnonStorey2_t2774 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (L_8->___obj_1);
		NullCheck(L_9);
		Type_t * L_10 = Object_GetType_m1416(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t2771_il2cpp_TypeInfo_var);
		SerializationCallbacks_t2771 * L_11 = SerializationCallbacks_GetSerializationCallbacks_m17420(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->___sc_0 = L_11;
		Hashtable_t915 * L_12 = (__this->___seen_1);
		U3CRegisterObjectU3Ec__AnonStorey2_t2774 * L_13 = V_0;
		NullCheck(L_13);
		Object_t * L_14 = (L_13->___obj_1);
		int32_t L_15 = 1;
		Object_t * L_16 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_12, L_14, L_16);
		U3CRegisterObjectU3Ec__AnonStorey2_t2774 * L_17 = V_0;
		NullCheck(L_17);
		SerializationCallbacks_t2771 * L_18 = (L_17->___sc_0);
		U3CRegisterObjectU3Ec__AnonStorey2_t2774 * L_19 = V_0;
		NullCheck(L_19);
		Object_t * L_20 = (L_19->___obj_1);
		StreamingContext_t670  L_21 = (__this->___context_0);
		NullCheck(L_18);
		SerializationCallbacks_RaiseOnSerializing_m17416(L_18, L_20, L_21, /*hidden argument*/NULL);
		U3CRegisterObjectU3Ec__AnonStorey2_t2774 * L_22 = V_0;
		NullCheck(L_22);
		SerializationCallbacks_t2771 * L_23 = (L_22->___sc_0);
		NullCheck(L_23);
		bool L_24 = SerializationCallbacks_get_HasSerializedCallbacks_m17412(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0094;
		}
	}
	{
		CallbackHandler_t2770 * L_25 = (__this->___callbacks_2);
		U3CRegisterObjectU3Ec__AnonStorey2_t2774 * L_26 = V_0;
		IntPtr_t L_27 = { (void*)U3CRegisterObjectU3Ec__AnonStorey2_U3CU3Em__1_m17445_MethodInfo_var };
		CallbackHandler_t2770 * L_28 = (CallbackHandler_t2770 *)il2cpp_codegen_object_new (CallbackHandler_t2770_il2cpp_TypeInfo_var);
		CallbackHandler__ctor_m17406(L_28, L_26, L_27, /*hidden argument*/NULL);
		Delegate_t314 * L_29 = Delegate_Combine_m1425(NULL /*static, unused*/, L_25, L_28, /*hidden argument*/NULL);
		__this->___callbacks_2 = ((CallbackHandler_t2770 *)Castclass(L_29, CallbackHandler_t2770_il2cpp_TypeInfo_var));
	}

IL_0094:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationObjectManager::RaiseOnSerializedEvent()
extern "C" void SerializationObjectManager_RaiseOnSerializedEvent_m17448 (SerializationObjectManager_t2775 * __this, const MethodInfo* method)
{
	{
		CallbackHandler_t2770 * L_0 = (__this->___callbacks_2);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		CallbackHandler_t2770 * L_1 = (__this->___callbacks_2);
		StreamingContext_t670  L_2 = (__this->___context_0);
		NullCheck(L_1);
		VirtActionInvoker1< StreamingContext_t670  >::Invoke(11 /* System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::Invoke(System.Runtime.Serialization.StreamingContext) */, L_1, L_2);
	}

IL_0019:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates)
extern "C" void StreamingContext__ctor_m17449 (StreamingContext_t670 * __this, int32_t ___state, const MethodInfo* method)
{
	{
		int32_t L_0 = ___state;
		__this->___state_0 = L_0;
		__this->___additional_1 = NULL;
		return;
	}
}
// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates,System.Object)
extern "C" void StreamingContext__ctor_m17450 (StreamingContext_t670 * __this, int32_t ___state, Object_t * ___additional, const MethodInfo* method)
{
	{
		int32_t L_0 = ___state;
		__this->___state_0 = L_0;
		Object_t * L_1 = ___additional;
		__this->___additional_1 = L_1;
		return;
	}
}
// System.Object System.Runtime.Serialization.StreamingContext::get_Context()
extern "C" Object_t * StreamingContext_get_Context_m17451 (StreamingContext_t670 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___additional_1);
		return L_0;
	}
}
// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::get_State()
extern "C" int32_t StreamingContext_get_State_m17452 (StreamingContext_t670 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___state_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Serialization.StreamingContext::Equals(System.Object)
extern TypeInfo* StreamingContext_t670_il2cpp_TypeInfo_var;
extern "C" bool StreamingContext_Equals_m17453 (StreamingContext_t670 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StreamingContext_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1691);
		s_Il2CppMethodIntialized = true;
	}
	StreamingContext_t670  V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___obj;
		if (((Object_t *)IsInst(L_0, StreamingContext_t670_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		Object_t * L_1 = ___obj;
		V_0 = ((*(StreamingContext_t670 *)((StreamingContext_t670 *)UnBox (L_1, StreamingContext_t670_il2cpp_TypeInfo_var))));
		int32_t L_2 = ((&V_0)->___state_0);
		int32_t L_3 = (__this->___state_0);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0031;
		}
	}
	{
		Object_t * L_4 = ((&V_0)->___additional_1);
		Object_t * L_5 = (__this->___additional_1);
		G_B5_0 = ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)L_5))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B5_0 = 0;
	}

IL_0032:
	{
		return G_B5_0;
	}
}
// System.Int32 System.Runtime.Serialization.StreamingContext::GetHashCode()
extern "C" int32_t StreamingContext_GetHashCode_m17454 (StreamingContext_t670 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___state_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.StreamingContextStates
#include "mscorlib_System_Runtime_Serialization_StreamingContextStatesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAsMethodDeclarations.h"



// System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTy.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTyMethodDeclarations.h"



// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterL.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterLMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandler.h"
// System.IO.BinaryReader
#include "mscorlib_System_IO_BinaryReader.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_1.h"
// System.Runtime.Serialization.Formatters.Binary.ObjectReader
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje_1.h"
// System.IO.BinaryWriter
#include "mscorlib_System_IO_BinaryWriter.h"
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje_3.h"
// System.IO.Stream
#include "mscorlib_System_IO_StreamMethodDeclarations.h"
// System.IO.BinaryReader
#include "mscorlib_System_IO_BinaryReaderMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_MessMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.ObjectReader
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje_1MethodDeclarations.h"
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandlerMethodDeclarations.h"
// System.IO.BinaryWriter
#include "mscorlib_System_IO_BinaryWriterMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje_3MethodDeclarations.h"


// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
extern "C" void BinaryFormatter__ctor_m5044 (BinaryFormatter_t1132 * __this, const MethodInfo* method)
{
	{
		__this->___type_format_4 = 1;
		__this->___filter_level_5 = 3;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Object_t * L_0 = BinaryFormatter_get_DefaultSurrogateSelector_m17456(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___surrogate_selector_3 = L_0;
		StreamingContext_t670  L_1 = {0};
		StreamingContext__ctor_m17449(&L_1, ((int32_t)255), /*hidden argument*/NULL);
		__this->___context_2 = L_1;
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C" void BinaryFormatter__ctor_m17455 (BinaryFormatter_t1132 * __this, Object_t * ___selector, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		__this->___type_format_4 = 1;
		__this->___filter_level_5 = 3;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___selector;
		__this->___surrogate_selector_3 = L_0;
		StreamingContext_t670  L_1 = ___context;
		__this->___context_2 = L_1;
		return;
	}
}
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_DefaultSurrogateSelector()
extern TypeInfo* BinaryFormatter_t1132_il2cpp_TypeInfo_var;
extern "C" Object_t * BinaryFormatter_get_DefaultSurrogateSelector_m17456 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BinaryFormatter_t1132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1965);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ((BinaryFormatter_t1132_StaticFields*)BinaryFormatter_t1132_il2cpp_TypeInfo_var->static_fields)->___U3CDefaultSurrogateSelectorU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C" void BinaryFormatter_set_AssemblyFormat_m17457 (BinaryFormatter_t1132 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___assembly_format_0 = L_0;
		return;
	}
}
// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder()
extern "C" SerializationBinder_t2769 * BinaryFormatter_get_Binder_m17458 (BinaryFormatter_t1132 * __this, const MethodInfo* method)
{
	{
		SerializationBinder_t2769 * L_0 = (__this->___binder_1);
		return L_0;
	}
}
// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context()
extern "C" StreamingContext_t670  BinaryFormatter_get_Context_m17459 (BinaryFormatter_t1132 * __this, const MethodInfo* method)
{
	{
		StreamingContext_t670  L_0 = (__this->___context_2);
		return L_0;
	}
}
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector()
extern "C" Object_t * BinaryFormatter_get_SurrogateSelector_m17460 (BinaryFormatter_t1132 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___surrogate_selector_3);
		return L_0;
	}
}
// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_FilterLevel()
extern "C" int32_t BinaryFormatter_get_FilterLevel_m17461 (BinaryFormatter_t1132 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___filter_level_5);
		return L_0;
	}
}
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
extern "C" Object_t * BinaryFormatter_Deserialize_m17462 (BinaryFormatter_t1132 * __this, Stream_t844 * ___serializationStream, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = ___serializationStream;
		Object_t * L_1 = BinaryFormatter_NoCheckDeserialize_m17463(__this, L_0, (HeaderHandler_t2963 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::NoCheckDeserialize(System.IO.Stream,System.Runtime.Remoting.Messaging.HeaderHandler)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t1134_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryReader_t2547_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectReader_t2789_il2cpp_TypeInfo_var;
extern "C" Object_t * BinaryFormatter_NoCheckDeserialize_m17463 (BinaryFormatter_t1132 * __this, Stream_t844 * ___serializationStream, HeaderHandler_t2963 * ___handler, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		SerializationException_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1981);
		BinaryReader_t2547_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5775);
		ObjectReader_t2789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5776);
		s_Il2CppMethodIntialized = true;
	}
	BinaryReader_t2547 * V_0 = {0};
	bool V_1 = false;
	uint8_t V_2 = {0};
	ObjectReader_t2789 * V_3 = {0};
	Object_t * V_4 = {0};
	HeaderU5BU5D_t2962* V_5 = {0};
	{
		Stream_t844 * L_0 = ___serializationStream;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5085, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Stream_t844 * L_2 = ___serializationStream;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_2);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		Stream_t844 * L_4 = ___serializationStream;
		NullCheck(L_4);
		int64_t L_5 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_4);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		SerializationException_t1134 * L_6 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_6, (String_t*) &_stringLiteral5086, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0029:
	{
		Stream_t844 * L_7 = ___serializationStream;
		BinaryReader_t2547 * L_8 = (BinaryReader_t2547 *)il2cpp_codegen_object_new (BinaryReader_t2547_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m15853(L_8, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		BinaryReader_t2547 * L_9 = V_0;
		BinaryFormatter_ReadBinaryHeader_m17467(__this, L_9, (&V_1), /*hidden argument*/NULL);
		BinaryReader_t2547 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.BinaryReader::Read() */, L_10);
		V_2 = (((uint8_t)L_11));
		uint8_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)21)))))
		{
			goto IL_0051;
		}
	}
	{
		uint8_t L_13 = V_2;
		BinaryReader_t2547 * L_14 = V_0;
		bool L_15 = V_1;
		HeaderHandler_t2963 * L_16 = ___handler;
		Object_t * L_17 = MessageFormatter_ReadMethodCall_m17559(NULL /*static, unused*/, L_13, L_14, L_15, L_16, __this, /*hidden argument*/NULL);
		return L_17;
	}

IL_0051:
	{
		uint8_t L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)22)))))
		{
			goto IL_0062;
		}
	}
	{
		uint8_t L_19 = V_2;
		BinaryReader_t2547 * L_20 = V_0;
		bool L_21 = V_1;
		HeaderHandler_t2963 * L_22 = ___handler;
		Object_t * L_23 = MessageFormatter_ReadMethodResponse_m17560(NULL /*static, unused*/, L_19, L_20, L_21, L_22, (Object_t *)NULL, __this, /*hidden argument*/NULL);
		return L_23;
	}

IL_0062:
	{
		ObjectReader_t2789 * L_24 = (ObjectReader_t2789 *)il2cpp_codegen_object_new (ObjectReader_t2789_il2cpp_TypeInfo_var);
		ObjectReader__ctor_m17485(L_24, __this, /*hidden argument*/NULL);
		V_3 = L_24;
		ObjectReader_t2789 * L_25 = V_3;
		uint8_t L_26 = V_2;
		BinaryReader_t2547 * L_27 = V_0;
		bool L_28 = V_1;
		NullCheck(L_25);
		ObjectReader_ReadObjectGraph_m17487(L_25, L_26, L_27, L_28, (&V_4), (&V_5), /*hidden argument*/NULL);
		HeaderHandler_t2963 * L_29 = ___handler;
		if (!L_29)
		{
			goto IL_0082;
		}
	}
	{
		HeaderHandler_t2963 * L_30 = ___handler;
		HeaderU5BU5D_t2962* L_31 = V_5;
		NullCheck(L_30);
		VirtFuncInvoker1< Object_t *, HeaderU5BU5D_t2962* >::Invoke(11 /* System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[]) */, L_30, L_31);
	}

IL_0082:
	{
		Object_t * L_32 = V_4;
		return L_32;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
extern "C" void BinaryFormatter_Serialize_m17464 (BinaryFormatter_t1132 * __this, Stream_t844 * ___serializationStream, Object_t * ___graph, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = ___serializationStream;
		Object_t * L_1 = ___graph;
		VirtActionInvoker3< Stream_t844 *, Object_t *, HeaderU5BU5D_t2962* >::Invoke(9 /* System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object,System.Runtime.Remoting.Messaging.Header[]) */, __this, L_0, L_1, (HeaderU5BU5D_t2962*)(HeaderU5BU5D_t2962*)NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object,System.Runtime.Remoting.Messaging.Header[])
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryWriter_t2548_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodCallMessage_t3003_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodReturnMessage_t3002_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectWriter_t2795_il2cpp_TypeInfo_var;
extern "C" void BinaryFormatter_Serialize_m17465 (BinaryFormatter_t1132 * __this, Stream_t844 * ___serializationStream, Object_t * ___graph, HeaderU5BU5D_t2962* ___headers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		BinaryWriter_t2548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5603);
		IMethodCallMessage_t3003_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5777);
		IMethodReturnMessage_t3002_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5746);
		ObjectWriter_t2795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5778);
		s_Il2CppMethodIntialized = true;
	}
	BinaryWriter_t2548 * V_0 = {0};
	ObjectWriter_t2795 * V_1 = {0};
	{
		Stream_t844 * L_0 = ___serializationStream;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5085, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Stream_t844 * L_2 = ___serializationStream;
		BinaryWriter_t2548 * L_3 = (BinaryWriter_t2548 *)il2cpp_codegen_object_new (BinaryWriter_t2548_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_m15879(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		BinaryWriter_t2548 * L_4 = V_0;
		HeaderU5BU5D_t2962* L_5 = ___headers;
		BinaryFormatter_WriteBinaryHeader_m17466(__this, L_4, ((((int32_t)((((Object_t*)(HeaderU5BU5D_t2962*)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		Object_t * L_6 = ___graph;
		if (!((Object_t *)IsInst(L_6, IMethodCallMessage_t3003_il2cpp_TypeInfo_var)))
		{
			goto IL_004d;
		}
	}
	{
		BinaryWriter_t2548 * L_7 = V_0;
		Object_t * L_8 = ___graph;
		HeaderU5BU5D_t2962* L_9 = ___headers;
		Object_t * L_10 = (__this->___surrogate_selector_3);
		StreamingContext_t670  L_11 = (__this->___context_2);
		int32_t L_12 = (__this->___assembly_format_0);
		int32_t L_13 = (__this->___type_format_4);
		MessageFormatter_WriteMethodCall_m17557(NULL /*static, unused*/, L_7, L_8, L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		goto IL_009e;
	}

IL_004d:
	{
		Object_t * L_14 = ___graph;
		if (!((Object_t *)IsInst(L_14, IMethodReturnMessage_t3002_il2cpp_TypeInfo_var)))
		{
			goto IL_0077;
		}
	}
	{
		BinaryWriter_t2548 * L_15 = V_0;
		Object_t * L_16 = ___graph;
		HeaderU5BU5D_t2962* L_17 = ___headers;
		Object_t * L_18 = (__this->___surrogate_selector_3);
		StreamingContext_t670  L_19 = (__this->___context_2);
		int32_t L_20 = (__this->___assembly_format_0);
		int32_t L_21 = (__this->___type_format_4);
		MessageFormatter_WriteMethodResponse_m17558(NULL /*static, unused*/, L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		goto IL_009e;
	}

IL_0077:
	{
		Object_t * L_22 = (__this->___surrogate_selector_3);
		StreamingContext_t670  L_23 = (__this->___context_2);
		int32_t L_24 = (__this->___assembly_format_0);
		int32_t L_25 = (__this->___type_format_4);
		ObjectWriter_t2795 * L_26 = (ObjectWriter_t2795 *)il2cpp_codegen_object_new (ObjectWriter_t2795_il2cpp_TypeInfo_var);
		ObjectWriter__ctor_m17527(L_26, L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		V_1 = L_26;
		ObjectWriter_t2795 * L_27 = V_1;
		BinaryWriter_t2548 * L_28 = V_0;
		Object_t * L_29 = ___graph;
		HeaderU5BU5D_t2962* L_30 = ___headers;
		NullCheck(L_27);
		ObjectWriter_WriteObjectGraph_m17529(L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
	}

IL_009e:
	{
		BinaryWriter_t2548 * L_31 = V_0;
		NullCheck(L_31);
		VirtActionInvoker0::Invoke(6 /* System.Void System.IO.BinaryWriter::Flush() */, L_31);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::WriteBinaryHeader(System.IO.BinaryWriter,System.Boolean)
extern "C" void BinaryFormatter_WriteBinaryHeader_m17466 (BinaryFormatter_t1132 * __this, BinaryWriter_t2548 * ___writer, bool ___hasHeaders, const MethodInfo* method)
{
	{
		BinaryWriter_t2548 * L_0 = ___writer;
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, 0);
		BinaryWriter_t2548 * L_1 = ___writer;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, 1);
		bool L_2 = ___hasHeaders;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		BinaryWriter_t2548 * L_3 = ___writer;
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_3, 2);
		goto IL_0021;
	}

IL_001a:
	{
		BinaryWriter_t2548 * L_4 = ___writer;
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_4, (-1));
	}

IL_0021:
	{
		BinaryWriter_t2548 * L_5 = ___writer;
		NullCheck(L_5);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_5, 1);
		BinaryWriter_t2548 * L_6 = ___writer;
		NullCheck(L_6);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_6, 0);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::ReadBinaryHeader(System.IO.BinaryReader,System.Boolean&)
extern "C" void BinaryFormatter_ReadBinaryHeader_m17467 (BinaryFormatter_t1132 * __this, BinaryReader_t2547 * ___reader, bool* ___hasHeaders, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		BinaryReader_t2547 * L_0 = ___reader;
		NullCheck(L_0);
		VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_0);
		BinaryReader_t2547 * L_1 = ___reader;
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_1);
		BinaryReader_t2547 * L_2 = ___reader;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_2);
		V_0 = L_3;
		bool* L_4 = ___hasHeaders;
		int32_t L_5 = V_0;
		*((int8_t*)(L_4)) = (int8_t)((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
		BinaryReader_t2547 * L_6 = ___reader;
		NullCheck(L_6);
		VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_6);
		BinaryReader_t2547 * L_7 = ___reader;
		NullCheck(L_7);
		VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_7);
		return;
	}
}
// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0MethodDeclarations.h"

// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"


// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::.cctor()
extern const Il2CppType* Boolean_t311_0_0_0_var;
extern const Il2CppType* Byte_t681_0_0_0_var;
extern const Il2CppType* Char_t323_0_0_0_var;
extern const Il2CppType* TimeSpan_t1129_0_0_0_var;
extern const Il2CppType* DateTime_t445_0_0_0_var;
extern const Il2CppType* Decimal_t698_0_0_0_var;
extern const Il2CppType* Double_t695_0_0_0_var;
extern const Il2CppType* Int16_t378_0_0_0_var;
extern const Il2CppType* Int32_t297_0_0_0_var;
extern const Il2CppType* Int64_t696_0_0_0_var;
extern const Il2CppType* SByte_t371_0_0_0_var;
extern const Il2CppType* Single_t308_0_0_0_var;
extern const Il2CppType* UInt16_t700_0_0_0_var;
extern const Il2CppType* UInt32_t386_0_0_0_var;
extern const Il2CppType* UInt64_t699_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryCommon_t2780_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t2989____U24U24fieldU2D37_27_FieldInfo_var;
extern "C" void BinaryCommon__cctor_m17468 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t311_0_0_0_var = il2cpp_codegen_type_from_index(64);
		Byte_t681_0_0_0_var = il2cpp_codegen_type_from_index(559);
		Char_t323_0_0_0_var = il2cpp_codegen_type_from_index(109);
		TimeSpan_t1129_0_0_0_var = il2cpp_codegen_type_from_index(1959);
		DateTime_t445_0_0_0_var = il2cpp_codegen_type_from_index(901);
		Decimal_t698_0_0_0_var = il2cpp_codegen_type_from_index(991);
		Double_t695_0_0_0_var = il2cpp_codegen_type_from_index(985);
		Int16_t378_0_0_0_var = il2cpp_codegen_type_from_index(993);
		Int32_t297_0_0_0_var = il2cpp_codegen_type_from_index(5);
		Int64_t696_0_0_0_var = il2cpp_codegen_type_from_index(986);
		SByte_t371_0_0_0_var = il2cpp_codegen_type_from_index(992);
		Single_t308_0_0_0_var = il2cpp_codegen_type_from_index(52);
		UInt16_t700_0_0_0_var = il2cpp_codegen_type_from_index(994);
		UInt32_t386_0_0_0_var = il2cpp_codegen_type_from_index(570);
		UInt64_t699_0_0_0_var = il2cpp_codegen_type_from_index(990);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		BinaryCommon_t2780_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5779);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		U3CPrivateImplementationDetailsU3E_t2989____U24U24fieldU2D37_27_FieldInfo_var = il2cpp_codegen_field_info_from_index(5418, 27);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		ByteU5BU5D_t159* L_0 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, ((int32_t)17)));
		RuntimeHelpers_InitializeArray_m1809(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t2989____U24U24fieldU2D37_27_FieldInfo_var), /*hidden argument*/NULL);
		((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->___BinaryHeader_0 = L_0;
		((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->___UseReflectionSerialization_3 = 0;
		((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, ((int32_t)19)));
		TypeU5BU5D_t570* L_1 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Boolean_t311_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_1, 1)) = (Type_t *)L_2;
		TypeU5BU5D_t570* L_3 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_4 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Byte_t681_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_3, 2)) = (Type_t *)L_4;
		TypeU5BU5D_t570* L_5 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_6 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Char_t323_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, L_6);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, 3)) = (Type_t *)L_6;
		TypeU5BU5D_t570* L_7 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_8 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(TimeSpan_t1129_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)12));
		ArrayElementTypeCheck (L_7, L_8);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_7, ((int32_t)12))) = (Type_t *)L_8;
		TypeU5BU5D_t570* L_9 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_10 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(DateTime_t445_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)13));
		ArrayElementTypeCheck (L_9, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_9, ((int32_t)13))) = (Type_t *)L_10;
		TypeU5BU5D_t570* L_11 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_12 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Decimal_t698_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 5)) = (Type_t *)L_12;
		TypeU5BU5D_t570* L_13 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_14 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Double_t695_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_14);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_13, 6)) = (Type_t *)L_14;
		TypeU5BU5D_t570* L_15 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_16 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int16_t378_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 7);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 7)) = (Type_t *)L_16;
		TypeU5BU5D_t570* L_17 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_18 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int32_t297_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 8)) = (Type_t *)L_18;
		TypeU5BU5D_t570* L_19 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_20 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int64_t696_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)9));
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, ((int32_t)9))) = (Type_t *)L_20;
		TypeU5BU5D_t570* L_21 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_22 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(SByte_t371_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)10));
		ArrayElementTypeCheck (L_21, L_22);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_21, ((int32_t)10))) = (Type_t *)L_22;
		TypeU5BU5D_t570* L_23 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_24 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Single_t308_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)11));
		ArrayElementTypeCheck (L_23, L_24);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_23, ((int32_t)11))) = (Type_t *)L_24;
		TypeU5BU5D_t570* L_25 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_26 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt16_t700_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, ((int32_t)14));
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, ((int32_t)14))) = (Type_t *)L_26;
		TypeU5BU5D_t570* L_27 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_28 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt32_t386_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)15));
		ArrayElementTypeCheck (L_27, L_28);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_27, ((int32_t)15))) = (Type_t *)L_28;
		TypeU5BU5D_t570* L_29 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_30 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt64_t699_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)16));
		ArrayElementTypeCheck (L_29, L_30);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_29, ((int32_t)16))) = (Type_t *)L_30;
		TypeU5BU5D_t570* L_31 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, ((int32_t)17));
		ArrayElementTypeCheck (L_31, NULL);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_31, ((int32_t)17))) = (Type_t *)NULL;
		TypeU5BU5D_t570* L_32 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_33 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, ((int32_t)18));
		ArrayElementTypeCheck (L_32, L_33);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_32, ((int32_t)18))) = (Type_t *)L_33;
		((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, ((int32_t)30)));
		ByteU5BU5D_t159* L_34 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_34, 3)) = (uint8_t)1;
		ByteU5BU5D_t159* L_35 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 6);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_35, 6)) = (uint8_t)2;
		ByteU5BU5D_t159* L_36 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 4);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_36, 4)) = (uint8_t)3;
		ByteU5BU5D_t159* L_37 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, ((int32_t)16));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_37, ((int32_t)16))) = (uint8_t)((int32_t)13);
		ByteU5BU5D_t159* L_38 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)15));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_38, ((int32_t)15))) = (uint8_t)5;
		ByteU5BU5D_t159* L_39 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)14));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_39, ((int32_t)14))) = (uint8_t)6;
		ByteU5BU5D_t159* L_40 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 7);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_40, 7)) = (uint8_t)7;
		ByteU5BU5D_t159* L_41 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, ((int32_t)9));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_41, ((int32_t)9))) = (uint8_t)8;
		ByteU5BU5D_t159* L_42 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)11));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_42, ((int32_t)11))) = (uint8_t)((int32_t)9);
		ByteU5BU5D_t159* L_43 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 5);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_43, 5)) = (uint8_t)((int32_t)10);
		ByteU5BU5D_t159* L_44 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)13));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_44, ((int32_t)13))) = (uint8_t)((int32_t)11);
		ByteU5BU5D_t159* L_45 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 8);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_45, 8)) = (uint8_t)((int32_t)14);
		ByteU5BU5D_t159* L_46 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, ((int32_t)10));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_46, ((int32_t)10))) = (uint8_t)((int32_t)15);
		ByteU5BU5D_t159* L_47 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, ((int32_t)12));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_47, ((int32_t)12))) = (uint8_t)((int32_t)16);
		ByteU5BU5D_t159* L_48 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)18));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_48, ((int32_t)18))) = (uint8_t)((int32_t)18);
		String_t* L_49 = Environment_GetEnvironmentVariable_m4964(NULL /*static, unused*/, (String_t*) &_stringLiteral5087, /*hidden argument*/NULL);
		V_0 = L_49;
		String_t* L_50 = V_0;
		if (L_50)
		{
			goto IL_01f4;
		}
	}
	{
		V_0 = (String_t*) &_stringLiteral1859;
	}

IL_01f4:
	{
		String_t* L_51 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_52 = String_op_Inequality_m1484(NULL /*static, unused*/, L_51, (String_t*) &_stringLiteral1859, /*hidden argument*/NULL);
		((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->___UseReflectionSerialization_3 = L_52;
		return;
	}
}
// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::IsPrimitive(System.Type)
extern const Il2CppType* IntPtr_t_0_0_0_var;
extern const Il2CppType* DateTime_t445_0_0_0_var;
extern const Il2CppType* TimeSpan_t1129_0_0_0_var;
extern const Il2CppType* Decimal_t698_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool BinaryCommon_IsPrimitive_m17469 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_0_0_0_var = il2cpp_codegen_type_from_index(349);
		DateTime_t445_0_0_0_var = il2cpp_codegen_type_from_index(901);
		TimeSpan_t1129_0_0_0_var = il2cpp_codegen_type_from_index(1959);
		Decimal_t698_0_0_0_var = il2cpp_codegen_type_from_index(991);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B6_0 = 0;
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_0);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_2 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(IntPtr_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_003e;
		}
	}

IL_0015:
	{
		Type_t * L_4 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(DateTime_t445_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_003e;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(TimeSpan_t1129_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7)))
		{
			goto IL_003e;
		}
	}
	{
		Type_t * L_8 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Decimal_t698_0_0_0_var), /*hidden argument*/NULL);
		G_B6_0 = ((((Object_t*)(Type_t *)L_8) == ((Object_t*)(Type_t *)L_9))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B6_0 = 1;
	}

IL_003f:
	{
		return G_B6_0;
	}
}
// System.Byte System.Runtime.Serialization.Formatters.Binary.BinaryCommon::GetTypeCode(System.Type)
extern const Il2CppType* TimeSpan_t1129_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryCommon_t2780_il2cpp_TypeInfo_var;
extern "C" uint8_t BinaryCommon_GetTypeCode_m17470 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeSpan_t1129_0_0_0_var = il2cpp_codegen_type_from_index(1959);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		BinaryCommon_t2780_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5779);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(TimeSpan_t1129_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0010;
		}
	}
	{
		return ((int32_t)12);
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BinaryCommon_t2780_il2cpp_TypeInfo_var);
		ByteU5BU5D_t159* L_2 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		Type_t * L_3 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_4 = Type_GetTypeCode_m4985(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_4);
		int32_t L_5 = L_4;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_5));
	}
}
// System.Type System.Runtime.Serialization.Formatters.Binary.BinaryCommon::GetTypeFromCode(System.Int32)
extern TypeInfo* BinaryCommon_t2780_il2cpp_TypeInfo_var;
extern "C" Type_t * BinaryCommon_GetTypeFromCode_m17471 (Object_t * __this /* static, unused */, int32_t ___code, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BinaryCommon_t2780_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5779);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BinaryCommon_t2780_il2cpp_TypeInfo_var);
		TypeU5BU5D_t570* L_0 = ((BinaryCommon_t2780_StaticFields*)BinaryCommon_t2780_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		int32_t L_1 = ___code;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Type_t **)(Type_t **)SZArrayLdElema(L_0, L_2));
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::CheckSerializable(System.Type,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ISurrogateSelector_t2744_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t1134_il2cpp_TypeInfo_var;
extern "C" void BinaryCommon_CheckSerializable_m17472 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___selector, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISurrogateSelector_t2744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5751);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		SerializationException_t1134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1981);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsSerializable() */, L_0);
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_2);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		Object_t * L_4 = ___selector;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		Object_t * L_5 = ___selector;
		Type_t * L_6 = ___type;
		StreamingContext_t670  L_7 = ___context;
		NullCheck(L_5);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Type_t *, StreamingContext_t670 , Object_t ** >::Invoke(0 /* System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&) */, ISurrogateSelector_t2744_il2cpp_TypeInfo_var, L_5, L_6, L_7, (&___selector));
		if (!L_8)
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		Type_t * L_9 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1268(NULL /*static, unused*/, (String_t*) &_stringLiteral5088, L_9, (String_t*) &_stringLiteral5089, /*hidden argument*/NULL);
		SerializationException_t1134 * L_11 = (SerializationException_t1134 *)il2cpp_codegen_object_new (SerializationException_t1134_il2cpp_TypeInfo_var);
		SerializationException__ctor_m12746(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0036:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::SwapBytes(System.Byte[],System.Int32,System.Int32)
extern "C" void BinaryCommon_SwapBytes_m17473 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___byteArray, int32_t ___size, int32_t ___dataSize, const MethodInfo* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___dataSize;
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0066;
		}
	}
	{
		V_1 = 0;
		goto IL_0060;
	}

IL_0008:
	{
		ByteU5BU5D_t159* L_1 = ___byteArray;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3));
		ByteU5BU5D_t159* L_4 = ___byteArray;
		int32_t L_5 = V_1;
		ByteU5BU5D_t159* L_6 = ___byteArray;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)L_7+(int32_t)7)));
		int32_t L_8 = ((int32_t)((int32_t)L_7+(int32_t)7));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8));
		ByteU5BU5D_t159* L_9 = ___byteArray;
		int32_t L_10 = V_1;
		uint8_t L_11 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)((int32_t)L_10+(int32_t)7)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, ((int32_t)((int32_t)L_10+(int32_t)7)))) = (uint8_t)L_11;
		ByteU5BU5D_t159* L_12 = ___byteArray;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, ((int32_t)((int32_t)L_13+(int32_t)1)));
		int32_t L_14 = ((int32_t)((int32_t)L_13+(int32_t)1));
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_14));
		ByteU5BU5D_t159* L_15 = ___byteArray;
		int32_t L_16 = V_1;
		ByteU5BU5D_t159* L_17 = ___byteArray;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)((int32_t)L_18+(int32_t)6)));
		int32_t L_19 = ((int32_t)((int32_t)L_18+(int32_t)6));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_17, L_19));
		ByteU5BU5D_t159* L_20 = ___byteArray;
		int32_t L_21 = V_1;
		uint8_t L_22 = V_0;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)((int32_t)L_21+(int32_t)6)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, ((int32_t)((int32_t)L_21+(int32_t)6)))) = (uint8_t)L_22;
		ByteU5BU5D_t159* L_23 = ___byteArray;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)((int32_t)L_24+(int32_t)2)));
		int32_t L_25 = ((int32_t)((int32_t)L_24+(int32_t)2));
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_23, L_25));
		ByteU5BU5D_t159* L_26 = ___byteArray;
		int32_t L_27 = V_1;
		ByteU5BU5D_t159* L_28 = ___byteArray;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)((int32_t)L_29+(int32_t)5)));
		int32_t L_30 = ((int32_t)((int32_t)L_29+(int32_t)5));
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, ((int32_t)((int32_t)L_27+(int32_t)2)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_26, ((int32_t)((int32_t)L_27+(int32_t)2)))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_28, L_30));
		ByteU5BU5D_t159* L_31 = ___byteArray;
		int32_t L_32 = V_1;
		uint8_t L_33 = V_0;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, ((int32_t)((int32_t)L_32+(int32_t)5)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_31, ((int32_t)((int32_t)L_32+(int32_t)5)))) = (uint8_t)L_33;
		ByteU5BU5D_t159* L_34 = ___byteArray;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)3)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)3));
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_34, L_36));
		ByteU5BU5D_t159* L_37 = ___byteArray;
		int32_t L_38 = V_1;
		ByteU5BU5D_t159* L_39 = ___byteArray;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)L_40+(int32_t)4)));
		int32_t L_41 = ((int32_t)((int32_t)L_40+(int32_t)4));
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, ((int32_t)((int32_t)L_38+(int32_t)3)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_37, ((int32_t)((int32_t)L_38+(int32_t)3)))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_39, L_41));
		ByteU5BU5D_t159* L_42 = ___byteArray;
		int32_t L_43 = V_1;
		uint8_t L_44 = V_0;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)((int32_t)L_43+(int32_t)4)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_42, ((int32_t)((int32_t)L_43+(int32_t)4)))) = (uint8_t)L_44;
		int32_t L_45 = V_1;
		V_1 = ((int32_t)((int32_t)L_45+(int32_t)8));
	}

IL_0060:
	{
		int32_t L_46 = V_1;
		int32_t L_47 = ___size;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0008;
		}
	}
	{
		goto IL_00c2;
	}

IL_0066:
	{
		int32_t L_48 = ___dataSize;
		if ((!(((uint32_t)L_48) == ((uint32_t)4))))
		{
			goto IL_00a0;
		}
	}
	{
		V_2 = 0;
		goto IL_009a;
	}

IL_006e:
	{
		ByteU5BU5D_t159* L_49 = ___byteArray;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = L_50;
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_49, L_51));
		ByteU5BU5D_t159* L_52 = ___byteArray;
		int32_t L_53 = V_2;
		ByteU5BU5D_t159* L_54 = ___byteArray;
		int32_t L_55 = V_2;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)L_55+(int32_t)3)));
		int32_t L_56 = ((int32_t)((int32_t)L_55+(int32_t)3));
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_52, L_53)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_54, L_56));
		ByteU5BU5D_t159* L_57 = ___byteArray;
		int32_t L_58 = V_2;
		uint8_t L_59 = V_0;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)((int32_t)L_58+(int32_t)3)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_57, ((int32_t)((int32_t)L_58+(int32_t)3)))) = (uint8_t)L_59;
		ByteU5BU5D_t159* L_60 = ___byteArray;
		int32_t L_61 = V_2;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)((int32_t)L_61+(int32_t)1)));
		int32_t L_62 = ((int32_t)((int32_t)L_61+(int32_t)1));
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_60, L_62));
		ByteU5BU5D_t159* L_63 = ___byteArray;
		int32_t L_64 = V_2;
		ByteU5BU5D_t159* L_65 = ___byteArray;
		int32_t L_66 = V_2;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, ((int32_t)((int32_t)L_66+(int32_t)2)));
		int32_t L_67 = ((int32_t)((int32_t)L_66+(int32_t)2));
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, ((int32_t)((int32_t)L_64+(int32_t)1)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_63, ((int32_t)((int32_t)L_64+(int32_t)1)))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_65, L_67));
		ByteU5BU5D_t159* L_68 = ___byteArray;
		int32_t L_69 = V_2;
		uint8_t L_70 = V_0;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, ((int32_t)((int32_t)L_69+(int32_t)2)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_68, ((int32_t)((int32_t)L_69+(int32_t)2)))) = (uint8_t)L_70;
		int32_t L_71 = V_2;
		V_2 = ((int32_t)((int32_t)L_71+(int32_t)4));
	}

IL_009a:
	{
		int32_t L_72 = V_2;
		int32_t L_73 = ___size;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_006e;
		}
	}
	{
		goto IL_00c2;
	}

IL_00a0:
	{
		int32_t L_74 = ___dataSize;
		if ((!(((uint32_t)L_74) == ((uint32_t)2))))
		{
			goto IL_00c2;
		}
	}
	{
		V_3 = 0;
		goto IL_00be;
	}

IL_00a8:
	{
		ByteU5BU5D_t159* L_75 = ___byteArray;
		int32_t L_76 = V_3;
		NullCheck(L_75);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_75, L_76);
		int32_t L_77 = L_76;
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_75, L_77));
		ByteU5BU5D_t159* L_78 = ___byteArray;
		int32_t L_79 = V_3;
		ByteU5BU5D_t159* L_80 = ___byteArray;
		int32_t L_81 = V_3;
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, ((int32_t)((int32_t)L_81+(int32_t)1)));
		int32_t L_82 = ((int32_t)((int32_t)L_81+(int32_t)1));
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, L_79);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_78, L_79)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_80, L_82));
		ByteU5BU5D_t159* L_83 = ___byteArray;
		int32_t L_84 = V_3;
		uint8_t L_85 = V_0;
		NullCheck(L_83);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_83, ((int32_t)((int32_t)L_84+(int32_t)1)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_83, ((int32_t)((int32_t)L_84+(int32_t)1)))) = (uint8_t)L_85;
		int32_t L_86 = V_3;
		V_3 = ((int32_t)((int32_t)L_86+(int32_t)2));
	}

IL_00be:
	{
		int32_t L_87 = V_3;
		int32_t L_88 = ___size;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_00a8;
		}
	}

IL_00c2:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_1MethodDeclarations.h"



// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_TypeMethodDeclarations.h"



// System.Runtime.Serialization.Formatters.Binary.MethodFlags
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Meth.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.Binary.MethodFlags
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_MethMethodDeclarations.h"



// System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Retu.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_RetuMethodDeclarations.h"



// System.Runtime.Serialization.Formatters.Binary.CodeGenerator
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Code.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.Binary.CodeGenerator
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_CodeMethodDeclarations.h"

// System.AppDomain
#include "mscorlib_System_AppDomain.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyName.h"
// System.Reflection.Emit.AssemblyBuilder
#include "mscorlib_System_Reflection_Emit_AssemblyBuilder.h"
// System.Reflection.Emit.AssemblyBuilderAccess
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAccess.h"
// System.Reflection.Emit.ModuleBuilder
#include "mscorlib_System_Reflection_Emit_ModuleBuilder.h"
// System.Reflection.Emit.TypeBuilder
#include "mscorlib_System_Reflection_Emit_TypeBuilder.h"
// System.Reflection.Emit.MethodBuilder
#include "mscorlib_System_Reflection_Emit_MethodBuilder.h"
// System.Reflection.Emit.ILGenerator
#include "mscorlib_System_Reflection_Emit_ILGenerator.h"
// System.Reflection.Emit.ConstructorBuilder
#include "mscorlib_System_Reflection_Emit_ConstructorBuilder.h"
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"
// System.Reflection.Emit.LocalBuilder
#include "mscorlib_System_Reflection_Emit_LocalBuilder.h"
// System.Reflection.Emit.OpCode
#include "mscorlib_System_Reflection_Emit_OpCode.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.Emit.OpCodes
#include "mscorlib_System_Reflection_Emit_OpCodes.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyNameMethodDeclarations.h"
// System.Reflection.Emit.AssemblyBuilder
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderMethodDeclarations.h"
// System.Reflection.Emit.ModuleBuilder
#include "mscorlib_System_Reflection_Emit_ModuleBuilderMethodDeclarations.h"
// System.Reflection.Emit.TypeBuilder
#include "mscorlib_System_Reflection_Emit_TypeBuilderMethodDeclarations.h"
// System.Reflection.Emit.ConstructorBuilder
#include "mscorlib_System_Reflection_Emit_ConstructorBuilderMethodDeclarations.h"
// System.Reflection.Emit.OpCodes
#include "mscorlib_System_Reflection_Emit_OpCodesMethodDeclarations.h"
// System.Reflection.Emit.ILGenerator
#include "mscorlib_System_Reflection_Emit_ILGeneratorMethodDeclarations.h"
// System.Reflection.Emit.MethodBuilder
#include "mscorlib_System_Reflection_Emit_MethodBuilderMethodDeclarations.h"
// Replacements.TypeBuilder
#include "replacements_Replacements_TypeBuilderMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"


// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::.cctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* CodeGenerator_t2785_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyName_t2580_il2cpp_TypeInfo_var;
extern "C" void CodeGenerator__cctor_m17474 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		CodeGenerator_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5780);
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		AssemblyName_t2580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5621);
		s_Il2CppMethodIntialized = true;
	}
	AppDomain_t1471 * V_0 = {0};
	AssemblyName_t2580 * V_1 = {0};
	AssemblyBuilder_t2622 * V_2 = {0};
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1291(L_0, /*hidden argument*/NULL);
		((CodeGenerator_t2785_StaticFields*)CodeGenerator_t2785_il2cpp_TypeInfo_var->static_fields)->___monitor_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		AppDomain_t1471 * L_1 = Thread_GetDomain_m18786(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		AssemblyName_t2580 * L_2 = (AssemblyName_t2580 *)il2cpp_codegen_object_new (AssemblyName_t2580_il2cpp_TypeInfo_var);
		AssemblyName__ctor_m16257(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		AssemblyName_t2580 * L_3 = V_1;
		NullCheck(L_3);
		AssemblyName_set_Name_m16260(L_3, (String_t*) &_stringLiteral5090, /*hidden argument*/NULL);
		AppDomain_t1471 * L_4 = V_0;
		AssemblyName_t2580 * L_5 = V_1;
		NullCheck(L_4);
		AssemblyBuilder_t2622 * L_6 = AppDomain_DefineInternalDynamicAssembly_m14489(L_4, L_5, 1, /*hidden argument*/NULL);
		V_2 = L_6;
		AssemblyBuilder_t2622 * L_7 = V_2;
		NullCheck(L_7);
		ModuleBuilder_t2621 * L_8 = AssemblyBuilder_DefineDynamicModule_m16570(L_7, (String_t*) &_stringLiteral5091, 0, /*hidden argument*/NULL);
		((CodeGenerator_t2785_StaticFields*)CodeGenerator_t2785_il2cpp_TypeInfo_var->static_fields)->____module_1 = L_8;
		return;
	}
}
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::GenerateMetadataType(System.Type,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* CodeGenerator_t2785_il2cpp_TypeInfo_var;
extern "C" Type_t * CodeGenerator_GenerateMetadataType_m17475 (Object_t * __this /* static, unused */, Type_t * ___type, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CodeGenerator_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5780);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Type_t * V_1 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((CodeGenerator_t2785_StaticFields*)CodeGenerator_t2785_il2cpp_TypeInfo_var->static_fields)->___monitor_0;
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_2 = ___type;
			StreamingContext_t670  L_3 = ___context;
			IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
			Type_t * L_4 = CodeGenerator_GenerateMetadataTypeInternal_m17476(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
			V_1 = L_4;
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_001f:
	{
		Type_t * L_6 = V_1;
		return L_6;
	}
}
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::GenerateMetadataTypeInternal(System.Type,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* ClrTypeMetadata_t2791_0_0_0_var;
extern const Il2CppType* Type_t_0_0_0_var;
extern const Il2CppType* ObjectWriter_t2795_0_0_0_var;
extern const Il2CppType* BinaryWriter_t2548_0_0_0_var;
extern const Il2CppType* Void_t370_0_0_0_var;
extern const Il2CppType* TypeMetadata_t2790_0_0_0_var;
extern const Il2CppType* Boolean_t311_0_0_0_var;
extern const Il2CppType* Int32_t297_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Byte_t681_0_0_0_var;
extern const Il2CppType* Object_t_0_0_0_var;
extern const Il2CppType* DateTime_t445_0_0_0_var;
extern const Il2CppType* TimeSpan_t1129_0_0_0_var;
extern const Il2CppType* Decimal_t698_0_0_0_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CodeGenerator_t2785_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern TypeInfo* OpCodes_t2242_il2cpp_TypeInfo_var;
extern TypeInfo* FieldInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectWriter_t2795_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryCommon_t2780_il2cpp_TypeInfo_var;
extern "C" Type_t * CodeGenerator_GenerateMetadataTypeInternal_m17476 (Object_t * __this /* static, unused */, Type_t * ___type, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClrTypeMetadata_t2791_0_0_0_var = il2cpp_codegen_type_from_index(5781);
		Type_t_0_0_0_var = il2cpp_codegen_type_from_index(58);
		ObjectWriter_t2795_0_0_0_var = il2cpp_codegen_type_from_index(5778);
		BinaryWriter_t2548_0_0_0_var = il2cpp_codegen_type_from_index(5603);
		Void_t370_0_0_0_var = il2cpp_codegen_type_from_index(217);
		TypeMetadata_t2790_0_0_0_var = il2cpp_codegen_type_from_index(5782);
		Boolean_t311_0_0_0_var = il2cpp_codegen_type_from_index(64);
		Int32_t297_0_0_0_var = il2cpp_codegen_type_from_index(5);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		Byte_t681_0_0_0_var = il2cpp_codegen_type_from_index(559);
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		DateTime_t445_0_0_0_var = il2cpp_codegen_type_from_index(901);
		TimeSpan_t1129_0_0_0_var = il2cpp_codegen_type_from_index(1959);
		Decimal_t698_0_0_0_var = il2cpp_codegen_type_from_index(991);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CodeGenerator_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5780);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		OpCodes_t2242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4521);
		FieldInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1015);
		ObjectWriter_t2795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5778);
		BinaryCommon_t2780_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5779);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	MemberInfoU5BU5D_t2786* V_3 = {0};
	TypeBuilder_t2624 * V_4 = {0};
	TypeU5BU5D_t570* V_5 = {0};
	MethodBuilder_t2634 * V_6 = {0};
	ILGenerator_t2219 * V_7 = {0};
	ConstructorBuilder_t2627 * V_8 = {0};
	ConstructorInfo_t574 * V_9 = {0};
	FieldInfo_t * V_10 = {0};
	MemberInfoU5BU5D_t2786* V_11 = {0};
	int32_t V_12 = 0;
	Type_t * V_13 = {0};
	FieldInfo_t * V_14 = {0};
	MemberInfoU5BU5D_t2786* V_15 = {0};
	int32_t V_16 = 0;
	Label_t2144  V_17 = {0};
	FieldInfo_t * V_18 = {0};
	MemberInfoU5BU5D_t2786* V_19 = {0};
	int32_t V_20 = 0;
	FieldInfo_t * V_21 = {0};
	MemberInfoU5BU5D_t2786* V_22 = {0};
	int32_t V_23 = 0;
	LocalBuilder_t2148 * V_24 = {0};
	OpCode_t2243  V_25 = {0};
	FieldInfo_t * V_26 = {0};
	MemberInfoU5BU5D_t2786* V_27 = {0};
	int32_t V_28 = 0;
	Type_t * V_29 = {0};
	int32_t V_30 = 0;
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m1269(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral5092, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002a;
	}

IL_001b:
	{
		int32_t L_4 = V_2;
		int32_t L_5 = ((int32_t)((int32_t)L_4+(int32_t)1));
		V_2 = L_5;
		V_30 = L_5;
		String_t* L_6 = Int32_ToString_m3192((&V_30), /*hidden argument*/NULL);
		V_1 = L_6;
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		ModuleBuilder_t2621 * L_7 = ((CodeGenerator_t2785_StaticFields*)CodeGenerator_t2785_il2cpp_TypeInfo_var->static_fields)->____module_1;
		String_t* L_8 = V_0;
		String_t* L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1269(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Type_t * L_11 = (Type_t *)VirtFuncInvoker1< Type_t *, String_t* >::Invoke(9 /* System.Type System.Reflection.Emit.ModuleBuilder::GetType(System.String) */, L_7, L_10);
		if (L_11)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_12 = V_0;
		String_t* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m1269(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		Type_t * L_15 = ___type;
		StreamingContext_t670  L_16 = ___context;
		MemberInfoU5BU5D_t2786* L_17 = FormatterServices_GetSerializableMembers_m17357(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		ModuleBuilder_t2621 * L_18 = ((CodeGenerator_t2785_StaticFields*)CodeGenerator_t2785_il2cpp_TypeInfo_var->static_fields)->____module_1;
		String_t* L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ClrTypeMetadata_t2791_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_18);
		TypeBuilder_t2624 * L_21 = ModuleBuilder_DefineType_m16848(L_18, L_19, 1, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		TypeU5BU5D_t570* L_22 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		V_5 = L_22;
		TypeBuilder_t2624 * L_23 = V_4;
		TypeU5BU5D_t570* L_24 = V_5;
		NullCheck(L_23);
		ConstructorBuilder_t2627 * L_25 = TypeBuilder_DefineConstructor_m16928(L_23, 6, 1, L_24, /*hidden argument*/NULL);
		V_8 = L_25;
		Type_t * L_26 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ClrTypeMetadata_t2791_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_27 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 1));
		Type_t * L_28 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Type_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		ArrayElementTypeCheck (L_27, L_28);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_27, 0)) = (Type_t *)L_28;
		NullCheck(L_26);
		ConstructorInfo_t574 * L_29 = (ConstructorInfo_t574 *)VirtFuncInvoker1< ConstructorInfo_t574 *, TypeU5BU5D_t570* >::Invoke(73 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_26, L_27);
		V_9 = L_29;
		ConstructorBuilder_t2627 * L_30 = V_8;
		NullCheck(L_30);
		ILGenerator_t2219 * L_31 = ConstructorBuilder_GetILGenerator_m16598(L_30, /*hidden argument*/NULL);
		V_7 = L_31;
		ILGenerator_t2219 * L_32 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_33 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldarg_0_2;
		NullCheck(L_32);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_32, L_33);
		ILGenerator_t2219 * L_34 = V_7;
		OpCode_t2243  L_35 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldtoken_174;
		Type_t * L_36 = ___type;
		NullCheck(L_34);
		VirtActionInvoker2< OpCode_t2243 , Type_t * >::Invoke(17 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type) */, L_34, L_35, L_36);
		ILGenerator_t2219 * L_37 = V_7;
		OpCode_t2243  L_38 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Call_39;
		Type_t * L_39 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Type_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_39);
		MethodInfo_t * L_40 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(49 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_39, (String_t*) &_stringLiteral5093);
		NullCheck(L_37);
		VirtActionInvoker3< OpCode_t2243 , MethodInfo_t *, TypeU5BU5D_t570* >::Invoke(18 /* System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[]) */, L_37, L_38, L_40, (TypeU5BU5D_t570*)(TypeU5BU5D_t570*)NULL);
		ILGenerator_t2219 * L_41 = V_7;
		OpCode_t2243  L_42 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Call_39;
		ConstructorInfo_t574 * L_43 = V_9;
		NullCheck(L_41);
		VirtActionInvoker2< OpCode_t2243 , ConstructorInfo_t574 * >::Invoke(9 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.ConstructorInfo) */, L_41, L_42, L_43);
		ILGenerator_t2219 * L_44 = V_7;
		OpCode_t2243  L_45 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ret_41;
		NullCheck(L_44);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_44, L_45);
		TypeU5BU5D_t570* L_46 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 2));
		Type_t * L_47 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ObjectWriter_t2795_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 0);
		ArrayElementTypeCheck (L_46, L_47);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_46, 0)) = (Type_t *)L_47;
		TypeU5BU5D_t570* L_48 = L_46;
		Type_t * L_49 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(BinaryWriter_t2548_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, 1);
		ArrayElementTypeCheck (L_48, L_49);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_48, 1)) = (Type_t *)L_49;
		V_5 = L_48;
		TypeBuilder_t2624 * L_50 = V_4;
		Type_t * L_51 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Void_t370_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_52 = V_5;
		NullCheck(L_50);
		MethodBuilder_t2634 * L_53 = TypeBuilder_DefineMethod_m16931(L_50, (String_t*) &_stringLiteral5094, ((int32_t)70), L_51, L_52, /*hidden argument*/NULL);
		V_6 = L_53;
		MethodBuilder_t2634 * L_54 = V_6;
		NullCheck(L_54);
		ILGenerator_t2219 * L_55 = MethodBuilder_GetILGenerator_m16825(L_54, /*hidden argument*/NULL);
		V_7 = L_55;
		MemberInfoU5BU5D_t2786* L_56 = V_3;
		V_11 = L_56;
		V_12 = 0;
		goto IL_01de;
	}

IL_014c:
	{
		MemberInfoU5BU5D_t2786* L_57 = V_11;
		int32_t L_58 = V_12;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		int32_t L_59 = L_58;
		V_10 = ((FieldInfo_t *)Castclass((*(MemberInfo_t **)(MemberInfo_t **)SZArrayLdElema(L_57, L_59)), FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t * L_60 = V_10;
		NullCheck(L_60);
		Type_t * L_61 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_60);
		V_13 = L_61;
		goto IL_016c;
	}

IL_0163:
	{
		Type_t * L_62 = V_13;
		NullCheck(L_62);
		Type_t * L_63 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, L_62);
		V_13 = L_63;
	}

IL_016c:
	{
		Type_t * L_64 = V_13;
		NullCheck(L_64);
		bool L_65 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Type::get_IsArray() */, L_64);
		if (L_65)
		{
			goto IL_0163;
		}
	}
	{
		Type_t * L_66 = V_13;
		NullCheck(L_66);
		Assembly_t1120 * L_67 = (Assembly_t1120 *)VirtFuncInvoker0< Assembly_t1120 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_66);
		IL2CPP_RUNTIME_CLASS_INIT(ObjectWriter_t2795_il2cpp_TypeInfo_var);
		Assembly_t1120 * L_68 = ((ObjectWriter_t2795_StaticFields*)ObjectWriter_t2795_il2cpp_TypeInfo_var->static_fields)->___CorlibAssembly_5;
		if ((((Object_t*)(Assembly_t1120 *)L_67) == ((Object_t*)(Assembly_t1120 *)L_68)))
		{
			goto IL_01d8;
		}
	}
	{
		ILGenerator_t2219 * L_69 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_70 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldarg_1_3;
		NullCheck(L_69);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_69, L_70);
		ILGenerator_t2219 * L_71 = V_7;
		OpCode_t2243  L_72 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldarg_2_4;
		NullCheck(L_71);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_71, L_72);
		ILGenerator_t2219 * L_73 = V_7;
		Type_t * L_74 = V_13;
		FieldInfo_t * L_75 = V_10;
		NullCheck(L_75);
		String_t* L_76 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_75);
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		CodeGenerator_EmitLoadTypeAssembly_m17479(NULL /*static, unused*/, L_73, L_74, L_76, /*hidden argument*/NULL);
		ILGenerator_t2219 * L_77 = V_7;
		OpCode_t2243  L_78 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Callvirt_110;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_79 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ObjectWriter_t2795_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_79);
		MethodInfo_t * L_80 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(49 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_79, (String_t*) &_stringLiteral5095);
		NullCheck(L_77);
		VirtActionInvoker3< OpCode_t2243 , MethodInfo_t *, TypeU5BU5D_t570* >::Invoke(18 /* System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[]) */, L_77, L_78, L_80, (TypeU5BU5D_t570*)(TypeU5BU5D_t570*)NULL);
		ILGenerator_t2219 * L_81 = V_7;
		OpCode_t2243  L_82 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Pop_37;
		NullCheck(L_81);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_81, L_82);
	}

IL_01d8:
	{
		int32_t L_83 = V_12;
		V_12 = ((int32_t)((int32_t)L_83+(int32_t)1));
	}

IL_01de:
	{
		int32_t L_84 = V_12;
		MemberInfoU5BU5D_t2786* L_85 = V_11;
		NullCheck(L_85);
		if ((((int32_t)L_84) < ((int32_t)(((int32_t)(((Array_t *)L_85)->max_length))))))
		{
			goto IL_014c;
		}
	}
	{
		ILGenerator_t2219 * L_86 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_87 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ret_41;
		NullCheck(L_86);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_86, L_87);
		TypeBuilder_t2624 * L_88 = V_4;
		MethodBuilder_t2634 * L_89 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_90 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(TypeMetadata_t2790_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_90);
		MethodInfo_t * L_91 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(49 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_90, (String_t*) &_stringLiteral5094);
		NullCheck(L_88);
		TypeBuilder_DefineMethodOverride_m16934(L_88, L_89, L_91, /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_92 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 3));
		Type_t * L_93 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ObjectWriter_t2795_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_92);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_92, 0);
		ArrayElementTypeCheck (L_92, L_93);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_92, 0)) = (Type_t *)L_93;
		TypeU5BU5D_t570* L_94 = L_92;
		Type_t * L_95 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(BinaryWriter_t2548_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_94);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_94, 1);
		ArrayElementTypeCheck (L_94, L_95);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_94, 1)) = (Type_t *)L_95;
		TypeU5BU5D_t570* L_96 = L_94;
		Type_t * L_97 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Boolean_t311_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_96);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_96, 2);
		ArrayElementTypeCheck (L_96, L_97);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_96, 2)) = (Type_t *)L_97;
		V_5 = L_96;
		TypeBuilder_t2624 * L_98 = V_4;
		Type_t * L_99 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Void_t370_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_100 = V_5;
		NullCheck(L_98);
		MethodBuilder_t2634 * L_101 = TypeBuilder_DefineMethod_m16931(L_98, (String_t*) &_stringLiteral5096, ((int32_t)70), L_99, L_100, /*hidden argument*/NULL);
		V_6 = L_101;
		MethodBuilder_t2634 * L_102 = V_6;
		NullCheck(L_102);
		ILGenerator_t2219 * L_103 = MethodBuilder_GetILGenerator_m16825(L_102, /*hidden argument*/NULL);
		V_7 = L_103;
		ILGenerator_t2219 * L_104 = V_7;
		OpCode_t2243  L_105 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldarg_2_4;
		NullCheck(L_104);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_104, L_105);
		ILGenerator_t2219 * L_106 = V_7;
		OpCode_t2243  L_107 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldc_I4_32;
		MemberInfoU5BU5D_t2786* L_108 = V_3;
		NullCheck(L_108);
		NullCheck(L_106);
		VirtActionInvoker2< OpCode_t2243 , int32_t >::Invoke(11 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Int32) */, L_106, L_107, (((int32_t)(((Array_t *)L_108)->max_length))));
		ILGenerator_t2219 * L_109 = V_7;
		Type_t * L_110 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int32_t297_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		CodeGenerator_EmitWrite_m17480(NULL /*static, unused*/, L_109, L_110, /*hidden argument*/NULL);
		MemberInfoU5BU5D_t2786* L_111 = V_3;
		V_15 = L_111;
		V_16 = 0;
		goto IL_02dc;
	}

IL_029a:
	{
		MemberInfoU5BU5D_t2786* L_112 = V_15;
		int32_t L_113 = V_16;
		NullCheck(L_112);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_112, L_113);
		int32_t L_114 = L_113;
		V_14 = ((FieldInfo_t *)Castclass((*(MemberInfo_t **)(MemberInfo_t **)SZArrayLdElema(L_112, L_114)), FieldInfo_t_il2cpp_TypeInfo_var));
		ILGenerator_t2219 * L_115 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_116 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldarg_2_4;
		NullCheck(L_115);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_115, L_116);
		ILGenerator_t2219 * L_117 = V_7;
		OpCode_t2243  L_118 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldstr_113;
		FieldInfo_t * L_119 = V_14;
		NullCheck(L_119);
		String_t* L_120 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_119);
		NullCheck(L_117);
		VirtActionInvoker2< OpCode_t2243 , String_t* >::Invoke(16 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.String) */, L_117, L_118, L_120);
		ILGenerator_t2219 * L_121 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_122 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		CodeGenerator_EmitWrite_m17480(NULL /*static, unused*/, L_121, L_122, /*hidden argument*/NULL);
		int32_t L_123 = V_16;
		V_16 = ((int32_t)((int32_t)L_123+(int32_t)1));
	}

IL_02dc:
	{
		int32_t L_124 = V_16;
		MemberInfoU5BU5D_t2786* L_125 = V_15;
		NullCheck(L_125);
		if ((((int32_t)L_124) < ((int32_t)(((int32_t)(((Array_t *)L_125)->max_length))))))
		{
			goto IL_029a;
		}
	}
	{
		ILGenerator_t2219 * L_126 = V_7;
		NullCheck(L_126);
		Label_t2144  L_127 = (Label_t2144 )VirtFuncInvoker0< Label_t2144  >::Invoke(6 /* System.Reflection.Emit.Label System.Reflection.Emit.ILGenerator::DefineLabel() */, L_126);
		V_17 = L_127;
		ILGenerator_t2219 * L_128 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_129 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldarg_3_5;
		NullCheck(L_128);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_128, L_129);
		ILGenerator_t2219 * L_130 = V_7;
		OpCode_t2243  L_131 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Brfalse_56;
		Label_t2144  L_132 = V_17;
		NullCheck(L_130);
		VirtActionInvoker2< OpCode_t2243 , Label_t2144  >::Invoke(13 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.Label) */, L_130, L_131, L_132);
		MemberInfoU5BU5D_t2786* L_133 = V_3;
		V_19 = L_133;
		V_20 = 0;
		goto IL_0356;
	}

IL_030f:
	{
		MemberInfoU5BU5D_t2786* L_134 = V_19;
		int32_t L_135 = V_20;
		NullCheck(L_134);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_134, L_135);
		int32_t L_136 = L_135;
		V_18 = ((FieldInfo_t *)Castclass((*(MemberInfo_t **)(MemberInfo_t **)SZArrayLdElema(L_134, L_136)), FieldInfo_t_il2cpp_TypeInfo_var));
		ILGenerator_t2219 * L_137 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_138 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldarg_2_4;
		NullCheck(L_137);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_137, L_138);
		ILGenerator_t2219 * L_139 = V_7;
		OpCode_t2243  L_140 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldc_I4_S_31;
		FieldInfo_t * L_141 = V_18;
		NullCheck(L_141);
		Type_t * L_142 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_141);
		IL2CPP_RUNTIME_CLASS_INIT(ObjectWriter_t2795_il2cpp_TypeInfo_var);
		uint8_t L_143 = ObjectWriter_GetTypeTag_m17555(NULL /*static, unused*/, L_142, /*hidden argument*/NULL);
		NullCheck(L_139);
		VirtActionInvoker2< OpCode_t2243 , uint8_t >::Invoke(8 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Byte) */, L_139, L_140, L_143);
		ILGenerator_t2219 * L_144 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_145 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Byte_t681_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		CodeGenerator_EmitWrite_m17480(NULL /*static, unused*/, L_144, L_145, /*hidden argument*/NULL);
		int32_t L_146 = V_20;
		V_20 = ((int32_t)((int32_t)L_146+(int32_t)1));
	}

IL_0356:
	{
		int32_t L_147 = V_20;
		MemberInfoU5BU5D_t2786* L_148 = V_19;
		NullCheck(L_148);
		if ((((int32_t)L_147) < ((int32_t)(((int32_t)(((Array_t *)L_148)->max_length))))))
		{
			goto IL_030f;
		}
	}
	{
		MemberInfoU5BU5D_t2786* L_149 = V_3;
		V_22 = L_149;
		V_23 = 0;
		goto IL_038d;
	}

IL_0366:
	{
		MemberInfoU5BU5D_t2786* L_150 = V_22;
		int32_t L_151 = V_23;
		NullCheck(L_150);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_150, L_151);
		int32_t L_152 = L_151;
		V_21 = ((FieldInfo_t *)Castclass((*(MemberInfo_t **)(MemberInfo_t **)SZArrayLdElema(L_150, L_152)), FieldInfo_t_il2cpp_TypeInfo_var));
		ILGenerator_t2219 * L_153 = V_7;
		FieldInfo_t * L_154 = V_21;
		NullCheck(L_154);
		Type_t * L_155 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_154);
		FieldInfo_t * L_156 = V_21;
		NullCheck(L_156);
		String_t* L_157 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_156);
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		CodeGenerator_EmitWriteTypeSpec_m17478(NULL /*static, unused*/, L_153, L_155, L_157, /*hidden argument*/NULL);
		int32_t L_158 = V_23;
		V_23 = ((int32_t)((int32_t)L_158+(int32_t)1));
	}

IL_038d:
	{
		int32_t L_159 = V_23;
		MemberInfoU5BU5D_t2786* L_160 = V_22;
		NullCheck(L_160);
		if ((((int32_t)L_159) < ((int32_t)(((int32_t)(((Array_t *)L_160)->max_length))))))
		{
			goto IL_0366;
		}
	}
	{
		ILGenerator_t2219 * L_161 = V_7;
		Label_t2144  L_162 = V_17;
		NullCheck(L_161);
		VirtActionInvoker1< Label_t2144  >::Invoke(19 /* System.Void System.Reflection.Emit.ILGenerator::MarkLabel(System.Reflection.Emit.Label) */, L_161, L_162);
		ILGenerator_t2219 * L_163 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_164 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ret_41;
		NullCheck(L_163);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_163, L_164);
		TypeBuilder_t2624 * L_165 = V_4;
		MethodBuilder_t2634 * L_166 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_167 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(TypeMetadata_t2790_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_167);
		MethodInfo_t * L_168 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(49 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_167, (String_t*) &_stringLiteral5096);
		NullCheck(L_165);
		TypeBuilder_DefineMethodOverride_m16934(L_165, L_166, L_168, /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_169 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 3));
		Type_t * L_170 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ObjectWriter_t2795_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_169);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_169, 0);
		ArrayElementTypeCheck (L_169, L_170);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_169, 0)) = (Type_t *)L_170;
		TypeU5BU5D_t570* L_171 = L_169;
		Type_t * L_172 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(BinaryWriter_t2548_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_171);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_171, 1);
		ArrayElementTypeCheck (L_171, L_172);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_171, 1)) = (Type_t *)L_172;
		TypeU5BU5D_t570* L_173 = L_171;
		Type_t * L_174 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_173);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_173, 2);
		ArrayElementTypeCheck (L_173, L_174);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_173, 2)) = (Type_t *)L_174;
		V_5 = L_173;
		TypeBuilder_t2624 * L_175 = V_4;
		Type_t * L_176 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Void_t370_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_177 = V_5;
		NullCheck(L_175);
		MethodBuilder_t2634 * L_178 = TypeBuilder_DefineMethod_m16931(L_175, (String_t*) &_stringLiteral5097, ((int32_t)70), L_176, L_177, /*hidden argument*/NULL);
		V_6 = L_178;
		MethodBuilder_t2634 * L_179 = V_6;
		NullCheck(L_179);
		ILGenerator_t2219 * L_180 = MethodBuilder_GetILGenerator_m16825(L_179, /*hidden argument*/NULL);
		V_7 = L_180;
		ILGenerator_t2219 * L_181 = V_7;
		Type_t * L_182 = ___type;
		NullCheck(L_181);
		LocalBuilder_t2148 * L_183 = (LocalBuilder_t2148 *)VirtFuncInvoker1< LocalBuilder_t2148 *, Type_t * >::Invoke(4 /* System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type) */, L_181, L_182);
		V_24 = L_183;
		OpCode_t2243  L_184 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldloc_210;
		V_25 = L_184;
		ILGenerator_t2219 * L_185 = V_7;
		OpCode_t2243  L_186 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldarg_3_5;
		NullCheck(L_185);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_185, L_186);
		Type_t * L_187 = ___type;
		NullCheck(L_187);
		bool L_188 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, L_187);
		if (!L_188)
		{
			goto IL_045e;
		}
	}
	{
		ILGenerator_t2219 * L_189 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_190 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Unbox_118;
		Type_t * L_191 = ___type;
		NullCheck(L_189);
		VirtActionInvoker2< OpCode_t2243 , Type_t * >::Invoke(17 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type) */, L_189, L_190, L_191);
		ILGenerator_t2219 * L_192 = V_7;
		Type_t * L_193 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		CodeGenerator_LoadFromPtr_m17477(NULL /*static, unused*/, L_192, L_193, /*hidden argument*/NULL);
		OpCode_t2243  L_194 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldloca_S_18;
		V_25 = L_194;
		goto IL_046b;
	}

IL_045e:
	{
		ILGenerator_t2219 * L_195 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_196 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Castclass_115;
		Type_t * L_197 = ___type;
		NullCheck(L_195);
		VirtActionInvoker2< OpCode_t2243 , Type_t * >::Invoke(17 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type) */, L_195, L_196, L_197);
	}

IL_046b:
	{
		ILGenerator_t2219 * L_198 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_199 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Stloc_212;
		LocalBuilder_t2148 * L_200 = V_24;
		NullCheck(L_198);
		VirtActionInvoker2< OpCode_t2243 , LocalBuilder_t2148 * >::Invoke(14 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.LocalBuilder) */, L_198, L_199, L_200);
		MemberInfoU5BU5D_t2786* L_201 = V_3;
		V_27 = L_201;
		V_28 = 0;
		goto IL_05ad;
	}

IL_0484:
	{
		MemberInfoU5BU5D_t2786* L_202 = V_27;
		int32_t L_203 = V_28;
		NullCheck(L_202);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_202, L_203);
		int32_t L_204 = L_203;
		V_26 = ((FieldInfo_t *)Castclass((*(MemberInfo_t **)(MemberInfo_t **)SZArrayLdElema(L_202, L_204)), FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t * L_205 = V_26;
		NullCheck(L_205);
		Type_t * L_206 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_205);
		V_29 = L_206;
		Type_t * L_207 = V_29;
		IL2CPP_RUNTIME_CLASS_INIT(BinaryCommon_t2780_il2cpp_TypeInfo_var);
		bool L_208 = BinaryCommon_IsPrimitive_m17469(NULL /*static, unused*/, L_207, /*hidden argument*/NULL);
		if (!L_208)
		{
			goto IL_050f;
		}
	}
	{
		ILGenerator_t2219 * L_209 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_210 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldarg_2_4;
		NullCheck(L_209);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_209, L_210);
		ILGenerator_t2219 * L_211 = V_7;
		OpCode_t2243  L_212 = V_25;
		LocalBuilder_t2148 * L_213 = V_24;
		NullCheck(L_211);
		VirtActionInvoker2< OpCode_t2243 , LocalBuilder_t2148 * >::Invoke(14 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.LocalBuilder) */, L_211, L_212, L_213);
		Type_t * L_214 = V_29;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_215 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(DateTime_t445_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_214) == ((Object_t*)(Type_t *)L_215)))
		{
			goto IL_04e3;
		}
	}
	{
		Type_t * L_216 = V_29;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_217 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(TimeSpan_t1129_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_216) == ((Object_t*)(Type_t *)L_217)))
		{
			goto IL_04e3;
		}
	}
	{
		Type_t * L_218 = V_29;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_219 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Decimal_t698_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_218) == ((Object_t*)(Type_t *)L_219))))
		{
			goto IL_04f3;
		}
	}

IL_04e3:
	{
		ILGenerator_t2219 * L_220 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_221 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldflda_121;
		FieldInfo_t * L_222 = V_26;
		NullCheck(L_220);
		VirtActionInvoker2< OpCode_t2243 , FieldInfo_t * >::Invoke(10 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.FieldInfo) */, L_220, L_221, L_222);
		goto IL_0501;
	}

IL_04f3:
	{
		ILGenerator_t2219 * L_223 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_224 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldfld_120;
		FieldInfo_t * L_225 = V_26;
		NullCheck(L_223);
		VirtActionInvoker2< OpCode_t2243 , FieldInfo_t * >::Invoke(10 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.FieldInfo) */, L_223, L_224, L_225);
	}

IL_0501:
	{
		ILGenerator_t2219 * L_226 = V_7;
		Type_t * L_227 = V_29;
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		CodeGenerator_EmitWritePrimitiveValue_m17481(NULL /*static, unused*/, L_226, L_227, /*hidden argument*/NULL);
		goto IL_05a7;
	}

IL_050f:
	{
		ILGenerator_t2219 * L_228 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_229 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldarg_1_3;
		NullCheck(L_228);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_228, L_229);
		ILGenerator_t2219 * L_230 = V_7;
		OpCode_t2243  L_231 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldarg_2_4;
		NullCheck(L_230);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_230, L_231);
		ILGenerator_t2219 * L_232 = V_7;
		OpCode_t2243  L_233 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldtoken_174;
		Type_t * L_234 = V_29;
		NullCheck(L_232);
		VirtActionInvoker2< OpCode_t2243 , Type_t * >::Invoke(17 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type) */, L_232, L_233, L_234);
		ILGenerator_t2219 * L_235 = V_7;
		OpCode_t2243  L_236 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Call_39;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_237 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Type_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_237);
		MethodInfo_t * L_238 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(49 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_237, (String_t*) &_stringLiteral5093);
		NullCheck(L_235);
		VirtActionInvoker3< OpCode_t2243 , MethodInfo_t *, TypeU5BU5D_t570* >::Invoke(18 /* System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[]) */, L_235, L_236, L_238, (TypeU5BU5D_t570*)(TypeU5BU5D_t570*)NULL);
		ILGenerator_t2219 * L_239 = V_7;
		OpCode_t2243  L_240 = V_25;
		LocalBuilder_t2148 * L_241 = V_24;
		NullCheck(L_239);
		VirtActionInvoker2< OpCode_t2243 , LocalBuilder_t2148 * >::Invoke(14 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.LocalBuilder) */, L_239, L_240, L_241);
		ILGenerator_t2219 * L_242 = V_7;
		OpCode_t2243  L_243 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldfld_120;
		FieldInfo_t * L_244 = V_26;
		NullCheck(L_242);
		VirtActionInvoker2< OpCode_t2243 , FieldInfo_t * >::Invoke(10 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.FieldInfo) */, L_242, L_243, L_244);
		Type_t * L_245 = V_29;
		NullCheck(L_245);
		bool L_246 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, L_245);
		if (!L_246)
		{
			goto IL_0586;
		}
	}
	{
		ILGenerator_t2219 * L_247 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_248 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Box_137;
		Type_t * L_249 = V_29;
		NullCheck(L_247);
		VirtActionInvoker2< OpCode_t2243 , Type_t * >::Invoke(17 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type) */, L_247, L_248, L_249);
	}

IL_0586:
	{
		ILGenerator_t2219 * L_250 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_251 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Call_39;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_252 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ObjectWriter_t2795_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_252);
		MethodInfo_t * L_253 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(49 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_252, (String_t*) &_stringLiteral5098);
		NullCheck(L_250);
		VirtActionInvoker3< OpCode_t2243 , MethodInfo_t *, TypeU5BU5D_t570* >::Invoke(18 /* System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[]) */, L_250, L_251, L_253, (TypeU5BU5D_t570*)(TypeU5BU5D_t570*)NULL);
	}

IL_05a7:
	{
		int32_t L_254 = V_28;
		V_28 = ((int32_t)((int32_t)L_254+(int32_t)1));
	}

IL_05ad:
	{
		int32_t L_255 = V_28;
		MemberInfoU5BU5D_t2786* L_256 = V_27;
		NullCheck(L_256);
		if ((((int32_t)L_255) < ((int32_t)(((int32_t)(((Array_t *)L_256)->max_length))))))
		{
			goto IL_0484;
		}
	}
	{
		ILGenerator_t2219 * L_257 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_258 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ret_41;
		NullCheck(L_257);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_257, L_258);
		TypeBuilder_t2624 * L_259 = V_4;
		MethodBuilder_t2634 * L_260 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_261 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(TypeMetadata_t2790_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_261);
		MethodInfo_t * L_262 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(49 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_261, (String_t*) &_stringLiteral5097);
		NullCheck(L_259);
		TypeBuilder_DefineMethodOverride_m16934(L_259, L_260, L_262, /*hidden argument*/NULL);
		TypeBuilder_t2624 * L_263 = V_4;
		Type_t * L_264 = TypeBuilder_CreateType_m10054(NULL /*static, unused*/, L_263, /*hidden argument*/NULL);
		return L_264;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::LoadFromPtr(System.Reflection.Emit.ILGenerator,System.Type)
extern const Il2CppType* Int32_t297_0_0_0_var;
extern const Il2CppType* UInt32_t386_0_0_0_var;
extern const Il2CppType* Int16_t378_0_0_0_var;
extern const Il2CppType* UInt16_t700_0_0_0_var;
extern const Il2CppType* Char_t323_0_0_0_var;
extern const Il2CppType* Byte_t681_0_0_0_var;
extern const Il2CppType* SByte_t371_0_0_0_var;
extern const Il2CppType* UInt64_t699_0_0_0_var;
extern const Il2CppType* Int64_t696_0_0_0_var;
extern const Il2CppType* Single_t308_0_0_0_var;
extern const Il2CppType* Double_t695_0_0_0_var;
extern const Il2CppType* Boolean_t311_0_0_0_var;
extern const Il2CppType* IntPtr_t_0_0_0_var;
extern const Il2CppType* Enum_t353_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* OpCodes_t2242_il2cpp_TypeInfo_var;
extern TypeInfo* CodeGenerator_t2785_il2cpp_TypeInfo_var;
extern "C" void CodeGenerator_LoadFromPtr_m17477 (Object_t * __this /* static, unused */, ILGenerator_t2219 * ___ig, Type_t * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t297_0_0_0_var = il2cpp_codegen_type_from_index(5);
		UInt32_t386_0_0_0_var = il2cpp_codegen_type_from_index(570);
		Int16_t378_0_0_0_var = il2cpp_codegen_type_from_index(993);
		UInt16_t700_0_0_0_var = il2cpp_codegen_type_from_index(994);
		Char_t323_0_0_0_var = il2cpp_codegen_type_from_index(109);
		Byte_t681_0_0_0_var = il2cpp_codegen_type_from_index(559);
		SByte_t371_0_0_0_var = il2cpp_codegen_type_from_index(992);
		UInt64_t699_0_0_0_var = il2cpp_codegen_type_from_index(990);
		Int64_t696_0_0_0_var = il2cpp_codegen_type_from_index(986);
		Single_t308_0_0_0_var = il2cpp_codegen_type_from_index(52);
		Double_t695_0_0_0_var = il2cpp_codegen_type_from_index(985);
		Boolean_t311_0_0_0_var = il2cpp_codegen_type_from_index(64);
		IntPtr_t_0_0_0_var = il2cpp_codegen_type_from_index(349);
		Enum_t353_0_0_0_var = il2cpp_codegen_type_from_index(192);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		OpCodes_t2242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4521);
		CodeGenerator_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5780);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int32_t297_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_001d;
		}
	}
	{
		ILGenerator_t2219 * L_2 = ___ig;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_3 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldind_I4_73;
		NullCheck(L_2);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_2, L_3);
		goto IL_01c7;
	}

IL_001d:
	{
		Type_t * L_4 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt32_t386_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5))))
		{
			goto IL_003a;
		}
	}
	{
		ILGenerator_t2219 * L_6 = ___ig;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_7 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldind_U4_74;
		NullCheck(L_6);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_6, L_7);
		goto IL_01c7;
	}

IL_003a:
	{
		Type_t * L_8 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int16_t378_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_8) == ((Object_t*)(Type_t *)L_9))))
		{
			goto IL_0057;
		}
	}
	{
		ILGenerator_t2219 * L_10 = ___ig;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_11 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldind_I2_71;
		NullCheck(L_10);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_10, L_11);
		goto IL_01c7;
	}

IL_0057:
	{
		Type_t * L_12 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt16_t700_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_12) == ((Object_t*)(Type_t *)L_13))))
		{
			goto IL_0074;
		}
	}
	{
		ILGenerator_t2219 * L_14 = ___ig;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_15 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldind_U2_72;
		NullCheck(L_14);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_14, L_15);
		goto IL_01c7;
	}

IL_0074:
	{
		Type_t * L_16 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Char_t323_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)L_17))))
		{
			goto IL_0091;
		}
	}
	{
		ILGenerator_t2219 * L_18 = ___ig;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_19 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldind_U2_72;
		NullCheck(L_18);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_18, L_19);
		goto IL_01c7;
	}

IL_0091:
	{
		Type_t * L_20 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Byte_t681_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_20) == ((Object_t*)(Type_t *)L_21))))
		{
			goto IL_00ae;
		}
	}
	{
		ILGenerator_t2219 * L_22 = ___ig;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_23 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldind_U1_70;
		NullCheck(L_22);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_22, L_23);
		goto IL_01c7;
	}

IL_00ae:
	{
		Type_t * L_24 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(SByte_t371_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_24) == ((Object_t*)(Type_t *)L_25))))
		{
			goto IL_00cb;
		}
	}
	{
		ILGenerator_t2219 * L_26 = ___ig;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_27 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldind_I1_69;
		NullCheck(L_26);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_26, L_27);
		goto IL_01c7;
	}

IL_00cb:
	{
		Type_t * L_28 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_29 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt64_t699_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_28) == ((Object_t*)(Type_t *)L_29))))
		{
			goto IL_00e8;
		}
	}
	{
		ILGenerator_t2219 * L_30 = ___ig;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_31 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldind_I8_75;
		NullCheck(L_30);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_30, L_31);
		goto IL_01c7;
	}

IL_00e8:
	{
		Type_t * L_32 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_33 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int64_t696_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_32) == ((Object_t*)(Type_t *)L_33))))
		{
			goto IL_0105;
		}
	}
	{
		ILGenerator_t2219 * L_34 = ___ig;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_35 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldind_I8_75;
		NullCheck(L_34);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_34, L_35);
		goto IL_01c7;
	}

IL_0105:
	{
		Type_t * L_36 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_37 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Single_t308_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_36) == ((Object_t*)(Type_t *)L_37))))
		{
			goto IL_0122;
		}
	}
	{
		ILGenerator_t2219 * L_38 = ___ig;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_39 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldind_R4_77;
		NullCheck(L_38);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_38, L_39);
		goto IL_01c7;
	}

IL_0122:
	{
		Type_t * L_40 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_41 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Double_t695_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_40) == ((Object_t*)(Type_t *)L_41))))
		{
			goto IL_013f;
		}
	}
	{
		ILGenerator_t2219 * L_42 = ___ig;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_43 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldind_R8_78;
		NullCheck(L_42);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_42, L_43);
		goto IL_01c7;
	}

IL_013f:
	{
		Type_t * L_44 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Boolean_t311_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_44) == ((Object_t*)(Type_t *)L_45))))
		{
			goto IL_015c;
		}
	}
	{
		ILGenerator_t2219 * L_46 = ___ig;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_47 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldind_I1_69;
		NullCheck(L_46);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_46, L_47);
		goto IL_01c7;
	}

IL_015c:
	{
		Type_t * L_48 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_49 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(IntPtr_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_48) == ((Object_t*)(Type_t *)L_49))))
		{
			goto IL_0176;
		}
	}
	{
		ILGenerator_t2219 * L_50 = ___ig;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_51 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldind_I_76;
		NullCheck(L_50);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_50, L_51);
		goto IL_01c7;
	}

IL_0176:
	{
		Type_t * L_52 = ___t;
		NullCheck(L_52);
		bool L_53 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, L_52);
		if (!L_53)
		{
			goto IL_01a6;
		}
	}
	{
		Type_t * L_54 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_55 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Enum_t353_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_54) == ((Object_t*)(Type_t *)L_55))))
		{
			goto IL_0198;
		}
	}
	{
		ILGenerator_t2219 * L_56 = ___ig;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_57 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldind_Ref_79;
		NullCheck(L_56);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_56, L_57);
		goto IL_01a4;
	}

IL_0198:
	{
		ILGenerator_t2219 * L_58 = ___ig;
		Type_t * L_59 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		Type_t * L_60 = CodeGenerator_EnumToUnderlying_m17482(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
		CodeGenerator_LoadFromPtr_m17477(NULL /*static, unused*/, L_58, L_60, /*hidden argument*/NULL);
	}

IL_01a4:
	{
		goto IL_01c7;
	}

IL_01a6:
	{
		Type_t * L_61 = ___t;
		NullCheck(L_61);
		bool L_62 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, L_61);
		if (!L_62)
		{
			goto IL_01bc;
		}
	}
	{
		ILGenerator_t2219 * L_63 = ___ig;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_64 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldobj_112;
		Type_t * L_65 = ___t;
		NullCheck(L_63);
		VirtActionInvoker2< OpCode_t2243 , Type_t * >::Invoke(17 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type) */, L_63, L_64, L_65);
		goto IL_01c7;
	}

IL_01bc:
	{
		ILGenerator_t2219 * L_66 = ___ig;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_67 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldind_Ref_79;
		NullCheck(L_66);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_66, L_67);
	}

IL_01c7:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWriteTypeSpec(System.Reflection.Emit.ILGenerator,System.Type,System.String)
extern const Il2CppType* Byte_t681_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* ObjectWriter_t2795_0_0_0_var;
extern const Il2CppType* Int32_t297_0_0_0_var;
extern TypeInfo* ObjectWriter_t2795_il2cpp_TypeInfo_var;
extern TypeInfo* OpCodes_t2242_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryCommon_t2780_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* CodeGenerator_t2785_il2cpp_TypeInfo_var;
extern "C" void CodeGenerator_EmitWriteTypeSpec_m17478 (Object_t * __this /* static, unused */, ILGenerator_t2219 * ___gen, Type_t * ___type, String_t* ___member, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t681_0_0_0_var = il2cpp_codegen_type_from_index(559);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		ObjectWriter_t2795_0_0_0_var = il2cpp_codegen_type_from_index(5778);
		Int32_t297_0_0_0_var = il2cpp_codegen_type_from_index(5);
		ObjectWriter_t2795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5778);
		OpCodes_t2242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4521);
		BinaryCommon_t2780_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5779);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		CodeGenerator_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5780);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = {0};
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectWriter_t2795_il2cpp_TypeInfo_var);
		uint8_t L_1 = ObjectWriter_GetTypeTag_m17555(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if (L_2 == 0)
		{
			goto IL_0032;
		}
		if (L_2 == 1)
		{
			goto IL_014e;
		}
		if (L_2 == 2)
		{
			goto IL_014e;
		}
		if (L_2 == 3)
		{
			goto IL_0063;
		}
		if (L_2 == 4)
		{
			goto IL_0094;
		}
		if (L_2 == 5)
		{
			goto IL_014e;
		}
		if (L_2 == 6)
		{
			goto IL_014e;
		}
		if (L_2 == 7)
		{
			goto IL_011b;
		}
	}
	{
		goto IL_014e;
	}

IL_0032:
	{
		ILGenerator_t2219 * L_3 = ___gen;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_4 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldarg_2_4;
		NullCheck(L_3);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_3, L_4);
		ILGenerator_t2219 * L_5 = ___gen;
		OpCode_t2243  L_6 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldc_I4_S_31;
		Type_t * L_7 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(BinaryCommon_t2780_il2cpp_TypeInfo_var);
		uint8_t L_8 = BinaryCommon_GetTypeCode_m17470(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker2< OpCode_t2243 , uint8_t >::Invoke(8 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Byte) */, L_5, L_6, L_8);
		ILGenerator_t2219 * L_9 = ___gen;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Byte_t681_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		CodeGenerator_EmitWrite_m17480(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_0150;
	}

IL_0063:
	{
		ILGenerator_t2219 * L_11 = ___gen;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_12 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldarg_2_4;
		NullCheck(L_11);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_11, L_12);
		ILGenerator_t2219 * L_13 = ___gen;
		OpCode_t2243  L_14 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldstr_113;
		Type_t * L_15 = ___type;
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_15);
		NullCheck(L_13);
		VirtActionInvoker2< OpCode_t2243 , String_t* >::Invoke(16 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.String) */, L_13, L_14, L_16);
		ILGenerator_t2219 * L_17 = ___gen;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		CodeGenerator_EmitWrite_m17480(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		goto IL_0150;
	}

IL_0094:
	{
		ILGenerator_t2219 * L_19 = ___gen;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_20 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldarg_2_4;
		NullCheck(L_19);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_19, L_20);
		ILGenerator_t2219 * L_21 = ___gen;
		OpCode_t2243  L_22 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldstr_113;
		Type_t * L_23 = ___type;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_23);
		NullCheck(L_21);
		VirtActionInvoker2< OpCode_t2243 , String_t* >::Invoke(16 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.String) */, L_21, L_22, L_24);
		ILGenerator_t2219 * L_25 = ___gen;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		CodeGenerator_EmitWrite_m17480(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		ILGenerator_t2219 * L_27 = ___gen;
		OpCode_t2243  L_28 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldarg_2_4;
		NullCheck(L_27);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_27, L_28);
		ILGenerator_t2219 * L_29 = ___gen;
		OpCode_t2243  L_30 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldarg_1_3;
		NullCheck(L_29);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_29, L_30);
		ILGenerator_t2219 * L_31 = ___gen;
		Type_t * L_32 = ___type;
		String_t* L_33 = ___member;
		CodeGenerator_EmitLoadTypeAssembly_m17479(NULL /*static, unused*/, L_31, L_32, L_33, /*hidden argument*/NULL);
		ILGenerator_t2219 * L_34 = ___gen;
		OpCode_t2243  L_35 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Callvirt_110;
		Type_t * L_36 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(ObjectWriter_t2795_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_36);
		MethodInfo_t * L_37 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(49 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_36, (String_t*) &_stringLiteral5099);
		NullCheck(L_34);
		VirtActionInvoker3< OpCode_t2243 , MethodInfo_t *, TypeU5BU5D_t570* >::Invoke(18 /* System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[]) */, L_34, L_35, L_37, (TypeU5BU5D_t570*)(TypeU5BU5D_t570*)NULL);
		ILGenerator_t2219 * L_38 = ___gen;
		OpCode_t2243  L_39 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Conv_I4_104;
		NullCheck(L_38);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_38, L_39);
		ILGenerator_t2219 * L_40 = ___gen;
		Type_t * L_41 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int32_t297_0_0_0_var), /*hidden argument*/NULL);
		CodeGenerator_EmitWrite_m17480(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
		goto IL_0150;
	}

IL_011b:
	{
		ILGenerator_t2219 * L_42 = ___gen;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_43 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldarg_2_4;
		NullCheck(L_42);
		VirtActionInvoker1< OpCode_t2243  >::Invoke(7 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode) */, L_42, L_43);
		ILGenerator_t2219 * L_44 = ___gen;
		OpCode_t2243  L_45 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldc_I4_S_31;
		Type_t * L_46 = ___type;
		NullCheck(L_46);
		Type_t * L_47 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, L_46);
		IL2CPP_RUNTIME_CLASS_INIT(BinaryCommon_t2780_il2cpp_TypeInfo_var);
		uint8_t L_48 = BinaryCommon_GetTypeCode_m17470(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		NullCheck(L_44);
		VirtActionInvoker2< OpCode_t2243 , uint8_t >::Invoke(8 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Byte) */, L_44, L_45, L_48);
		ILGenerator_t2219 * L_49 = ___gen;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Byte_t681_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		CodeGenerator_EmitWrite_m17480(NULL /*static, unused*/, L_49, L_50, /*hidden argument*/NULL);
		goto IL_0150;
	}

IL_014e:
	{
		goto IL_0150;
	}

IL_0150:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitLoadTypeAssembly(System.Reflection.Emit.ILGenerator,System.Type,System.String)
extern const Il2CppType* Type_t_0_0_0_var;
extern TypeInfo* OpCodes_t2242_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void CodeGenerator_EmitLoadTypeAssembly_m17479 (Object_t * __this /* static, unused */, ILGenerator_t2219 * ___gen, Type_t * ___type, String_t* ___member, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_0_0_0_var = il2cpp_codegen_type_from_index(58);
		OpCodes_t2242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4521);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		ILGenerator_t2219 * L_0 = ___gen;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_1 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Ldtoken_174;
		Type_t * L_2 = ___type;
		NullCheck(L_0);
		VirtActionInvoker2< OpCode_t2243 , Type_t * >::Invoke(17 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type) */, L_0, L_1, L_2);
		ILGenerator_t2219 * L_3 = ___gen;
		OpCode_t2243  L_4 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Call_39;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Type_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		MethodInfo_t * L_6 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(49 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_5, (String_t*) &_stringLiteral5093);
		NullCheck(L_3);
		VirtActionInvoker3< OpCode_t2243 , MethodInfo_t *, TypeU5BU5D_t570* >::Invoke(18 /* System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[]) */, L_3, L_4, L_6, (TypeU5BU5D_t570*)(TypeU5BU5D_t570*)NULL);
		ILGenerator_t2219 * L_7 = ___gen;
		OpCode_t2243  L_8 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Callvirt_110;
		Type_t * L_9 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Type_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		PropertyInfo_t * L_10 = (PropertyInfo_t *)VirtFuncInvoker1< PropertyInfo_t *, String_t* >::Invoke(57 /* System.Reflection.PropertyInfo System.Type::GetProperty(System.String) */, L_9, (String_t*) &_stringLiteral5100);
		NullCheck(L_10);
		MethodInfo_t * L_11 = (MethodInfo_t *)VirtFuncInvoker0< MethodInfo_t * >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod() */, L_10);
		NullCheck(L_7);
		VirtActionInvoker3< OpCode_t2243 , MethodInfo_t *, TypeU5BU5D_t570* >::Invoke(18 /* System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[]) */, L_7, L_8, L_11, (TypeU5BU5D_t570*)(TypeU5BU5D_t570*)NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWrite(System.Reflection.Emit.ILGenerator,System.Type)
extern const Il2CppType* BinaryWriter_t2548_0_0_0_var;
extern TypeInfo* OpCodes_t2242_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern "C" void CodeGenerator_EmitWrite_m17480 (Object_t * __this /* static, unused */, ILGenerator_t2219 * ___gen, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BinaryWriter_t2548_0_0_0_var = il2cpp_codegen_type_from_index(5603);
		OpCodes_t2242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4521);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		s_Il2CppMethodIntialized = true;
	}
	{
		ILGenerator_t2219 * L_0 = ___gen;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_1 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Callvirt_110;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(BinaryWriter_t2548_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_3 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 1));
		Type_t * L_4 = ___type;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, L_4);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_3, 0)) = (Type_t *)L_4;
		NullCheck(L_2);
		MethodInfo_t * L_5 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, TypeU5BU5D_t570* >::Invoke(51 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[]) */, L_2, (String_t*) &_stringLiteral5101, L_3);
		NullCheck(L_0);
		VirtActionInvoker3< OpCode_t2243 , MethodInfo_t *, TypeU5BU5D_t570* >::Invoke(18 /* System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[]) */, L_0, L_1, L_5, (TypeU5BU5D_t570*)(TypeU5BU5D_t570*)NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWritePrimitiveValue(System.Reflection.Emit.ILGenerator,System.Type)
extern const Il2CppType* CultureInfo_t693_0_0_0_var;
extern const Il2CppType* Decimal_t698_0_0_0_var;
extern const Il2CppType* IFormatProvider_t2573_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* DateTime_t445_0_0_0_var;
extern const Il2CppType* Int64_t696_0_0_0_var;
extern const Il2CppType* TimeSpan_t1129_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* CodeGenerator_t2785_il2cpp_TypeInfo_var;
extern TypeInfo* OpCodes_t2242_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t570_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void CodeGenerator_EmitWritePrimitiveValue_m17481 (Object_t * __this /* static, unused */, ILGenerator_t2219 * ___gen, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t693_0_0_0_var = il2cpp_codegen_type_from_index(983);
		Decimal_t698_0_0_0_var = il2cpp_codegen_type_from_index(991);
		IFormatProvider_t2573_0_0_0_var = il2cpp_codegen_type_from_index(5416);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(6);
		DateTime_t445_0_0_0_var = il2cpp_codegen_type_from_index(901);
		Int64_t696_0_0_0_var = il2cpp_codegen_type_from_index(986);
		TimeSpan_t1129_0_0_0_var = il2cpp_codegen_type_from_index(1959);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		CodeGenerator_t2785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5780);
		OpCodes_t2242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4521);
		TypeU5BU5D_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1009);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_1 = Type_GetTypeCode_m4985(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (((int32_t)((int32_t)L_2-(int32_t)3)) == 0)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)3)) == 1)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)3)) == 2)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)3)) == 3)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)3)) == 4)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)3)) == 5)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)3)) == 6)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)3)) == 7)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)3)) == 8)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)3)) == 9)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)3)) == 10)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)3)) == 11)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)3)) == 12)
		{
			goto IL_0060;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)3)) == 13)
		{
			goto IL_00cd;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)3)) == 14)
		{
			goto IL_0101;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)3)) == 15)
		{
			goto IL_0054;
		}
	}
	{
		goto IL_0101;
	}

IL_0054:
	{
		ILGenerator_t2219 * L_3 = ___gen;
		Type_t * L_4 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		CodeGenerator_EmitWrite_m17480(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		goto IL_015d;
	}

IL_0060:
	{
		ILGenerator_t2219 * L_5 = ___gen;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_6 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Call_39;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(CultureInfo_t693_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		PropertyInfo_t * L_8 = (PropertyInfo_t *)VirtFuncInvoker1< PropertyInfo_t *, String_t* >::Invoke(57 /* System.Reflection.PropertyInfo System.Type::GetProperty(System.String) */, L_7, (String_t*) &_stringLiteral5102);
		NullCheck(L_8);
		MethodInfo_t * L_9 = (MethodInfo_t *)VirtFuncInvoker0< MethodInfo_t * >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod() */, L_8);
		NullCheck(L_5);
		VirtActionInvoker3< OpCode_t2243 , MethodInfo_t *, TypeU5BU5D_t570* >::Invoke(18 /* System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[]) */, L_5, L_6, L_9, (TypeU5BU5D_t570*)(TypeU5BU5D_t570*)NULL);
		ILGenerator_t2219 * L_10 = ___gen;
		OpCode_t2243  L_11 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Call_39;
		Type_t * L_12 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Decimal_t698_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t570* L_13 = ((TypeU5BU5D_t570*)SZArrayNew(TypeU5BU5D_t570_il2cpp_TypeInfo_var, 1));
		Type_t * L_14 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(IFormatProvider_t2573_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		ArrayElementTypeCheck (L_13, L_14);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_13, 0)) = (Type_t *)L_14;
		NullCheck(L_12);
		MethodInfo_t * L_15 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, TypeU5BU5D_t570* >::Invoke(51 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[]) */, L_12, (String_t*) &_stringLiteral5103, L_13);
		NullCheck(L_10);
		VirtActionInvoker3< OpCode_t2243 , MethodInfo_t *, TypeU5BU5D_t570* >::Invoke(18 /* System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[]) */, L_10, L_11, L_15, (TypeU5BU5D_t570*)(TypeU5BU5D_t570*)NULL);
		ILGenerator_t2219 * L_16 = ___gen;
		Type_t * L_17 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		CodeGenerator_EmitWrite_m17480(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		goto IL_015d;
	}

IL_00cd:
	{
		ILGenerator_t2219 * L_18 = ___gen;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_19 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Call_39;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(DateTime_t445_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		MethodInfo_t * L_21 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(50 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_20, (String_t*) &_stringLiteral5104, ((int32_t)52));
		NullCheck(L_18);
		VirtActionInvoker3< OpCode_t2243 , MethodInfo_t *, TypeU5BU5D_t570* >::Invoke(18 /* System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[]) */, L_18, L_19, L_21, (TypeU5BU5D_t570*)(TypeU5BU5D_t570*)NULL);
		ILGenerator_t2219 * L_22 = ___gen;
		Type_t * L_23 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int64_t696_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		CodeGenerator_EmitWrite_m17480(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		goto IL_015d;
	}

IL_0101:
	{
		Type_t * L_24 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(TimeSpan_t1129_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_24) == ((Object_t*)(Type_t *)L_25))))
		{
			goto IL_0145;
		}
	}
	{
		ILGenerator_t2219 * L_26 = ___gen;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t2242_il2cpp_TypeInfo_var);
		OpCode_t2243  L_27 = ((OpCodes_t2242_StaticFields*)OpCodes_t2242_il2cpp_TypeInfo_var->static_fields)->___Call_39;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_28 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(TimeSpan_t1129_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_28);
		PropertyInfo_t * L_29 = (PropertyInfo_t *)VirtFuncInvoker1< PropertyInfo_t *, String_t* >::Invoke(57 /* System.Reflection.PropertyInfo System.Type::GetProperty(System.String) */, L_28, (String_t*) &_stringLiteral5105);
		NullCheck(L_29);
		MethodInfo_t * L_30 = (MethodInfo_t *)VirtFuncInvoker0< MethodInfo_t * >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod() */, L_29);
		NullCheck(L_26);
		VirtActionInvoker3< OpCode_t2243 , MethodInfo_t *, TypeU5BU5D_t570* >::Invoke(18 /* System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[]) */, L_26, L_27, L_30, (TypeU5BU5D_t570*)(TypeU5BU5D_t570*)NULL);
		ILGenerator_t2219 * L_31 = ___gen;
		Type_t * L_32 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int64_t696_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodeGenerator_t2785_il2cpp_TypeInfo_var);
		CodeGenerator_EmitWrite_m17480(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		goto IL_015b;
	}

IL_0145:
	{
		Type_t * L_33 = ___type;
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_33);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m1269(NULL /*static, unused*/, (String_t*) &_stringLiteral5106, L_34, /*hidden argument*/NULL);
		NotSupportedException_t303 * L_36 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_36, L_35, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_015b:
	{
		goto IL_015d;
	}

IL_015d:
	{
		return;
	}
}
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EnumToUnderlying(System.Type)
extern const Il2CppType* Boolean_t311_0_0_0_var;
extern const Il2CppType* Byte_t681_0_0_0_var;
extern const Il2CppType* SByte_t371_0_0_0_var;
extern const Il2CppType* Char_t323_0_0_0_var;
extern const Il2CppType* Int16_t378_0_0_0_var;
extern const Il2CppType* UInt16_t700_0_0_0_var;
extern const Il2CppType* Int32_t297_0_0_0_var;
extern const Il2CppType* UInt32_t386_0_0_0_var;
extern const Il2CppType* Int64_t696_0_0_0_var;
extern const Il2CppType* UInt64_t699_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* TypeCode_t1209_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t306_il2cpp_TypeInfo_var;
extern "C" Type_t * CodeGenerator_EnumToUnderlying_m17482 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t311_0_0_0_var = il2cpp_codegen_type_from_index(64);
		Byte_t681_0_0_0_var = il2cpp_codegen_type_from_index(559);
		SByte_t371_0_0_0_var = il2cpp_codegen_type_from_index(992);
		Char_t323_0_0_0_var = il2cpp_codegen_type_from_index(109);
		Int16_t378_0_0_0_var = il2cpp_codegen_type_from_index(993);
		UInt16_t700_0_0_0_var = il2cpp_codegen_type_from_index(994);
		Int32_t297_0_0_0_var = il2cpp_codegen_type_from_index(5);
		UInt32_t386_0_0_0_var = il2cpp_codegen_type_from_index(570);
		Int64_t696_0_0_0_var = il2cpp_codegen_type_from_index(986);
		UInt64_t699_0_0_0_var = il2cpp_codegen_type_from_index(990);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		TypeCode_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2479);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Exception_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		Type_t * L_0 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_1 = Type_GetTypeCode_m4985(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 0)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 1)
		{
			goto IL_005c;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 2)
		{
			goto IL_0051;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 3)
		{
			goto IL_0046;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 4)
		{
			goto IL_0067;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 5)
		{
			goto IL_0072;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 6)
		{
			goto IL_007d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 7)
		{
			goto IL_0088;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 8)
		{
			goto IL_0093;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 9)
		{
			goto IL_009e;
		}
	}
	{
		goto IL_00a9;
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Boolean_t311_0_0_0_var), /*hidden argument*/NULL);
		return L_4;
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Byte_t681_0_0_0_var), /*hidden argument*/NULL);
		return L_5;
	}

IL_0051:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(SByte_t371_0_0_0_var), /*hidden argument*/NULL);
		return L_6;
	}

IL_005c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Char_t323_0_0_0_var), /*hidden argument*/NULL);
		return L_7;
	}

IL_0067:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int16_t378_0_0_0_var), /*hidden argument*/NULL);
		return L_8;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt16_t700_0_0_0_var), /*hidden argument*/NULL);
		return L_9;
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int32_t297_0_0_0_var), /*hidden argument*/NULL);
		return L_10;
	}

IL_0088:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt32_t386_0_0_0_var), /*hidden argument*/NULL);
		return L_11;
	}

IL_0093:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Int64_t696_0_0_0_var), /*hidden argument*/NULL);
		return L_12;
	}

IL_009e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UInt64_t699_0_0_0_var), /*hidden argument*/NULL);
		return L_13;
	}

IL_00a9:
	{
		ObjectU5BU5D_t300* L_14 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 4));
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		ArrayElementTypeCheck (L_14, (String_t*) &_stringLiteral5107);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 0)) = (Object_t *)(String_t*) &_stringLiteral5107;
		ObjectU5BU5D_t300* L_15 = L_14;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(TypeCode_t1209_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 1);
		ArrayElementTypeCheck (L_15, L_18);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 1)) = (Object_t *)L_18;
		ObjectU5BU5D_t300* L_19 = L_15;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, (String_t*) &_stringLiteral5108);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 2)) = (Object_t *)(String_t*) &_stringLiteral5108;
		ObjectU5BU5D_t300* L_20 = L_19;
		Type_t * L_21 = ___t;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_21);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 3)) = (Object_t *)L_22;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m1267(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		Exception_t306 * L_24 = (Exception_t306 *)il2cpp_codegen_object_new (Exception_t306_il2cpp_TypeInfo_var);
		Exception__ctor_m3196(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
