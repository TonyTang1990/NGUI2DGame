#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3923;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t3924;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m24837_gshared (LinkedListNode_1_t3923 * __this, LinkedList_1_t3924 * ___list, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m24837(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t3923 *, LinkedList_1_t3924 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m24837_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m24838_gshared (LinkedListNode_1_t3923 * __this, LinkedList_1_t3924 * ___list, Object_t * ___value, LinkedListNode_1_t3923 * ___previousNode, LinkedListNode_1_t3923 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m24838(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t3923 *, LinkedList_1_t3924 *, Object_t *, LinkedListNode_1_t3923 *, LinkedListNode_1_t3923 *, const MethodInfo*))LinkedListNode_1__ctor_m24838_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m24839_gshared (LinkedListNode_1_t3923 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m24839(__this, method) (( void (*) (LinkedListNode_1_t3923 *, const MethodInfo*))LinkedListNode_1_Detach_m24839_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t3924 * LinkedListNode_1_get_List_m24840_gshared (LinkedListNode_1_t3923 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m24840(__this, method) (( LinkedList_1_t3924 * (*) (LinkedListNode_1_t3923 *, const MethodInfo*))LinkedListNode_1_get_List_m24840_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m24841_gshared (LinkedListNode_1_t3923 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m24841(__this, method) (( Object_t * (*) (LinkedListNode_1_t3923 *, const MethodInfo*))LinkedListNode_1_get_Value_m24841_gshared)(__this, method)
