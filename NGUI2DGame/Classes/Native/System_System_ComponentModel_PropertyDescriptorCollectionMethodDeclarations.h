#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t936;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t793;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t1880;
// System.String
struct String_t;
// System.ComponentModel.PropertyDescriptor[]
struct PropertyDescriptorU5BU5D_t2216;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1360;
// System.Array
struct Array_t;
// System.Attribute[]
struct AttributeU5BU5D_t1913;

// System.Void System.ComponentModel.PropertyDescriptorCollection::.ctor(System.ComponentModel.PropertyDescriptor[])
extern "C" void PropertyDescriptorCollection__ctor_m10612 (PropertyDescriptorCollection_t936 * __this, PropertyDescriptorU5BU5D_t2216* ___properties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::.ctor(System.ComponentModel.PropertyDescriptor[],System.Boolean)
extern "C" void PropertyDescriptorCollection__ctor_m10613 (PropertyDescriptorCollection_t936 * __this, PropertyDescriptorU5BU5D_t2216* ___properties, bool ___readOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::.cctor()
extern "C" void PropertyDescriptorCollection__cctor_m10614 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Add(System.Object)
extern "C" int32_t PropertyDescriptorCollection_System_Collections_IList_Add_m10615 (PropertyDescriptorCollection_t936 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void PropertyDescriptorCollection_System_Collections_IDictionary_Add_m10616 (PropertyDescriptorCollection_t936 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Clear()
extern "C" void PropertyDescriptorCollection_System_Collections_IList_Clear_m10617 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Clear()
extern "C" void PropertyDescriptorCollection_System_Collections_IDictionary_Clear_m10618 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Contains(System.Object)
extern "C" bool PropertyDescriptorCollection_System_Collections_IList_Contains_m10619 (PropertyDescriptorCollection_t936 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool PropertyDescriptorCollection_System_Collections_IDictionary_Contains_m10620 (PropertyDescriptorCollection_t936 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.PropertyDescriptorCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IEnumerable_GetEnumerator_m10621 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IDictionary_GetEnumerator_m10622 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t PropertyDescriptorCollection_System_Collections_IList_IndexOf_m10623 (PropertyDescriptorCollection_t936 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void PropertyDescriptorCollection_System_Collections_IList_Insert_m10624 (PropertyDescriptorCollection_t936 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Remove(System.Object)
extern "C" void PropertyDescriptorCollection_System_Collections_IDictionary_Remove_m10625 (PropertyDescriptorCollection_t936 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Remove(System.Object)
extern "C" void PropertyDescriptorCollection_System_Collections_IList_Remove_m10626 (PropertyDescriptorCollection_t936 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void PropertyDescriptorCollection_System_Collections_IList_RemoveAt_m10627 (PropertyDescriptorCollection_t936 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::System.Collections.ICollection.get_Count()
extern "C" int32_t PropertyDescriptorCollection_System_Collections_ICollection_get_Count_m10628 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.PropertyDescriptorCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_ICollection_get_SyncRoot_m10629 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IDictionary_get_Keys_m10630 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.get_Values()
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IDictionary_get_Values_m10631 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IDictionary_get_Item_m10632 (PropertyDescriptorCollection_t936 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void PropertyDescriptorCollection_System_Collections_IDictionary_set_Item_m10633 (PropertyDescriptorCollection_t936 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IList_get_Item_m10634 (PropertyDescriptorCollection_t936 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void PropertyDescriptorCollection_System_Collections_IList_set_Item_m10635 (PropertyDescriptorCollection_t936 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::Add(System.ComponentModel.PropertyDescriptor)
extern "C" int32_t PropertyDescriptorCollection_Add_m10636 (PropertyDescriptorCollection_t936 * __this, PropertyDescriptor_t1880 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::Clear()
extern "C" void PropertyDescriptorCollection_Clear_m10637 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptorCollection::Contains(System.ComponentModel.PropertyDescriptor)
extern "C" bool PropertyDescriptorCollection_Contains_m10638 (PropertyDescriptorCollection_t936 * __this, PropertyDescriptor_t1880 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::CopyTo(System.Array,System.Int32)
extern "C" void PropertyDescriptorCollection_CopyTo_m10639 (PropertyDescriptorCollection_t936 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.PropertyDescriptorCollection::Find(System.String,System.Boolean)
extern "C" PropertyDescriptor_t1880 * PropertyDescriptorCollection_Find_m10640 (PropertyDescriptorCollection_t936 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.PropertyDescriptorCollection::GetEnumerator()
extern "C" Object_t * PropertyDescriptorCollection_GetEnumerator_m10641 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::IndexOf(System.ComponentModel.PropertyDescriptor)
extern "C" int32_t PropertyDescriptorCollection_IndexOf_m10642 (PropertyDescriptorCollection_t936 * __this, PropertyDescriptor_t1880 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::Insert(System.Int32,System.ComponentModel.PropertyDescriptor)
extern "C" void PropertyDescriptorCollection_Insert_m10643 (PropertyDescriptorCollection_t936 * __this, int32_t ___index, PropertyDescriptor_t1880 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::Remove(System.ComponentModel.PropertyDescriptor)
extern "C" void PropertyDescriptorCollection_Remove_m10644 (PropertyDescriptorCollection_t936 * __this, PropertyDescriptor_t1880 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::RemoveAt(System.Int32)
extern "C" void PropertyDescriptorCollection_RemoveAt_m10645 (PropertyDescriptorCollection_t936 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Filter(System.Attribute[])
extern "C" PropertyDescriptorCollection_t936 * PropertyDescriptorCollection_Filter_m10646 (PropertyDescriptorCollection_t936 * __this, AttributeU5BU5D_t1913* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::get_Count()
extern "C" int32_t PropertyDescriptorCollection_get_Count_m10647 (PropertyDescriptorCollection_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.PropertyDescriptorCollection::get_Item(System.String)
extern "C" PropertyDescriptor_t1880 * PropertyDescriptorCollection_get_Item_m10648 (PropertyDescriptorCollection_t936 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
