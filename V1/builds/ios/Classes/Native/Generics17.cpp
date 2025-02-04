﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>[]
struct EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_tDDB69E91697CCB64C7993B651487CEEC287DB7E8;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tCD201270E97BC8DEAAF8D991FC536293137B19A9;
// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Int32>>
struct Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>
struct Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.PostProcessing.ParameterOverride>
struct ReadOnlyCollection_1_t27F043E8DE5EED8464F76863AEE4EBD68561389B;
// System.Comparison`1<System.Object>
struct Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector3>
struct InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B;
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E;
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D;
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>
struct UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A;
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1/LessOrEqual<System.Object>
struct LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11;
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1/Node<System.Object>
struct Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F;
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1<System.Object>
struct Dict_1_tDDB66EA04836CDF711BC4636526383454A9A3A5C;
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.MeshUtils/Pooled`1<System.Object>
struct Pooled_1_tC14B4141323B0122AC685687DF0EF9B0D85B7E1B;
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1/HandleElem<System.Object>
struct HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F;
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1/HandleElem<System.Object>[]
struct HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78;
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1/LessOrEqual<System.Object>
struct LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC;
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1<System.Object>
struct PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E;
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1/StackItem<System.Object>
struct StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352;
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1/StackItem<System.Object>[]
struct StackItemU5BU5D_tBDE93FEC669DE06B82FECFF5D32B85B892EED893;
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1<System.Object>
struct PriorityQueue_1_t59DA18809275FC049FDC4BF4270CCA71DFA06D54;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t44607A9BE5154ED0C7924B81776A709724545E6C;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E;
// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812;
// UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>
struct IntegratedSubsystemDescriptor_1_t2426B50A97CC5BA8E2BFE696F2EA1DDFC2174909;
// UnityEngine.IntegratedSubsystem`1<System.Object>
struct IntegratedSubsystem_1_t2DE7C58DE8F60DCFD451AAFB0B75E6B1BF94C134;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Rendering.ObjectPool`1<System.Object>
struct ObjectPool_1_tD00BD96AEC2DCAA7B958359A0C2F9A1C5A1E1C4D;
// UnityEngine.Rendering.PostProcessing.BoolParameter
struct BoolParameter_tEBE5D980C8D9609041E3D8D90F2CF2D92F62B0AE;
// UnityEngine.Rendering.PostProcessing.ParameterOverride
struct ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>
struct ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>
struct ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>
struct ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>
struct ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>
struct ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>
struct ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>
struct ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>
struct ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>
struct ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer
struct PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>
struct PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
struct PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042;
// UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>d__79`1<System.Object>
struct U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3;
// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback
struct ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0;
// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback
struct FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>
struct U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>
struct U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54;
// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_t119BCA590009762C7223FDD3AF9706653AC84ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC;
IL2CPP_EXTERN_C String_t* _stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F;
IL2CPP_EXTERN_C String_t* _stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9;
IL2CPP_EXTERN_C String_t* _stringLiteralDFADDFA065E9D92CFE8B8F06444DD5652DFC1D58;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mD59C24D29FAE8D7519D23F47DFFD8EBEE0F3F675_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_1_Invoke_mD5F9F31E1591B0FE7DEF947F47BE69F196212F0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m4255117298948764AA48104A50476CB3B1792460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m0AE12FFA5BD870C099227186990EA21D30A519F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m1114B4B3A14520FABE413206AE14D21D88BEA3F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mF0A3AC2F450CF4B0839855F9AE17BD42FF745780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_IEnumerator_Reset_m1C2A1DCB706F27B08B11159413FA1E892C5349C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1_Invoke_mD5F9F31E1591B0FE7DEF947F47BE69F196212F0B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1__ctor_m39A8E9901725F286E72817D5AE907516EF0C7C06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_2__ctor_mE80CFA8D8605680746EBD7DC371B30DD42759D38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_3__ctor_mA26C0B9D52E628D915E0C705A735F226BBA9B3EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_4__ctor_mDF3741C3CF51E23313E2DF7062488C430F25EEF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectPool_1_Release_m3687E92ED4AA2C0AFBA48D63C46C667AFF1ED5B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectPool_1_Release_mC1D66E968E7A04252A79426F4F2D45ED0F292B86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PriorityHeap_1_Insert_mDCFADA59582FB3D67DBE88100953EE2F25BD64A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PriorityHeap_1__ctor_m43963611951B4A116BEB41C701378289658523B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PriorityQueue_1_Init_m72FA1C41069E6F59F06B1C19BD013242D2AB9642_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenRunner_1_StartTween_mA10B864FF4FF1D68D8B117B94B06FF35F5373FA7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenRunner_1_StartTween_mCD6A38F2A78EADA8BFD4D710333E6263D32DAEFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetAllSceneObjectsU3Ed__79_1_MoveNext_mD7DFF0365B734C2E877BC04AAD255067A4B0BD1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_IEnumerator_Reset_m1C2A1DCB706F27B08B11159413FA1E892C5349C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetAllSceneObjectsU3Ed__79_1_U3CU3Em__Finally1_mD32F8554130A68103A6C7B99B92FD89D9F0CF03B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_MoveNext_m0EE17EEE1FD4E844C9CDA2AA8815CBECBB0DBA9F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_MoveNext_m60167073DFDFFC72E0494F1178A8927098A64D12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_m383296E02ACDA4892A49F2B148201A5A37D9F57F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_m4B1EE21C25114A9D9BAFC50E3F2D67E5F665F5AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_m5DEFA82EDDF619690E524720C4128D58F303EBCB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_m7F1148D026F83668B1B0D707EA2F6C0BEA0836FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_mA94DECCCC2849BD22BDB5894C9DADE3DD2CBBA96_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_mC8A9A9332EEEA81428669FAD060934954B73DDCB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_mD23FCF592F740518854A0AC4BE239C582D00071E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_2_BeginInvoke_m5F2C976EFE2F0144C74BB2FE1E3E2247617C81E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_2_BeginInvoke_mC72F0DCBBB077E215EC9ADA58D300288CC39E069_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_m2B6143F06E866A0E7E58F7CA948F0C6635220D24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_m5DC384FDD452EC00E3EE247D2AE8FF8B941DED23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_m79E67DC6496C7600A01FFD9339CB8FF97C885FD1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_mC30379BAD6B7B83B04ACD4466AE94B6F2A26FC72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_mE864CF4CD0578B8D425C65CB10D95458D88678C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_m2B015F1AE7FEA9E2D9E2621E5179AB752B5469CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_m63FD78E7E0C3309F39EE25F47221B3139475E103_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_m782EE61B36B474C9B0F1EA57A00E80F23EE6D4D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_mB755E72B8F7D26CFA94C8B9B145F6019FB5932CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_mC08FDB684236B6B8DA73ACD1C5C1B6E857014EFD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_2_Invoke_mD905BCAB5C22629BF8F3B7CF869C02E3C31ED4F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
struct HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78;
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct  Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___entries_1)); }
	inline EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___keys_7)); }
	inline KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___values_8)); }
	inline ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Color32>
struct  List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____items_1)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get__items_1() const { return ____items_1; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5_StaticFields, ____emptyArray_5)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct  List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694_StaticFields, ____emptyArray_5)); }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct  List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____items_1)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get__items_1() const { return ____items_1; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554_StaticFields, ____emptyArray_5)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____items_1)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct  List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____items_1)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955_StaticFields, ____emptyArray_5)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct  Queue_1_tCD201270E97BC8DEAAF8D991FC536293137B19A9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tCD201270E97BC8DEAAF8D991FC536293137B19A9, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tCD201270E97BC8DEAAF8D991FC536293137B19A9, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tCD201270E97BC8DEAAF8D991FC536293137B19A9, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tCD201270E97BC8DEAAF8D991FC536293137B19A9, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tCD201270E97BC8DEAAF8D991FC536293137B19A9, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tCD201270E97BC8DEAAF8D991FC536293137B19A9, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct  Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663, ____array_0)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__array_0() const { return ____array_0; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.Collections.Generic.Stack`1<UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1_StackItem<System.Object>>
struct  Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	StackItemU5BU5D_tBDE93FEC669DE06B82FECFF5D32B85B892EED893* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212, ____array_0)); }
	inline StackItemU5BU5D_tBDE93FEC669DE06B82FECFF5D32B85B892EED893* get__array_0() const { return ____array_0; }
	inline StackItemU5BU5D_tBDE93FEC669DE06B82FECFF5D32B85B892EED893** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(StackItemU5BU5D_tBDE93FEC669DE06B82FECFF5D32B85B892EED893* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TypeName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};


// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node<System.Object>
struct  Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F  : public RuntimeObject
{
public:
	// TValue UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node::_key
	RuntimeObject * ____key_0;
	// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node<TValue> UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node::_prev
	Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * ____prev_1;
	// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node<TValue> UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node::_next
	Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * ____next_2;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__prev_1() { return static_cast<int32_t>(offsetof(Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F, ____prev_1)); }
	inline Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * get__prev_1() const { return ____prev_1; }
	inline Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F ** get_address_of__prev_1() { return &____prev_1; }
	inline void set__prev_1(Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * value)
	{
		____prev_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____prev_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F, ____next_2)); }
	inline Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * get__next_2() const { return ____next_2; }
	inline Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1<System.Object>
struct  Dict_1_tDDB66EA04836CDF711BC4636526383454A9A3A5C  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_LessOrEqual<TValue> UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1::_leq
	LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 * ____leq_0;
	// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node<TValue> UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1::_head
	Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * ____head_1;

public:
	inline static int32_t get_offset_of__leq_0() { return static_cast<int32_t>(offsetof(Dict_1_tDDB66EA04836CDF711BC4636526383454A9A3A5C, ____leq_0)); }
	inline LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 * get__leq_0() const { return ____leq_0; }
	inline LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 ** get_address_of__leq_0() { return &____leq_0; }
	inline void set__leq_0(LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 * value)
	{
		____leq_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____leq_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Dict_1_tDDB66EA04836CDF711BC4636526383454A9A3A5C, ____head_1)); }
	inline Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * get__head_1() const { return ____head_1; }
	inline Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F ** get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * value)
	{
		____head_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____head_1), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.MeshUtils_Pooled`1<System.Object>
struct  Pooled_1_tC14B4141323B0122AC685687DF0EF9B0D85B7E1B  : public RuntimeObject
{
public:

public:
};

struct Pooled_1_tC14B4141323B0122AC685687DF0EF9B0D85B7E1B_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.MeshUtils_Pooled`1::_stack
	Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * ____stack_0;

public:
	inline static int32_t get_offset_of__stack_0() { return static_cast<int32_t>(offsetof(Pooled_1_tC14B4141323B0122AC685687DF0EF9B0D85B7E1B_StaticFields, ____stack_0)); }
	inline Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * get__stack_0() const { return ____stack_0; }
	inline Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 ** get_address_of__stack_0() { return &____stack_0; }
	inline void set__stack_0(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * value)
	{
		____stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_0), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1_HandleElem<System.Object>
struct  HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F  : public RuntimeObject
{
public:
	// TValue UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1_HandleElem::_key
	RuntimeObject * ____key_0;
	// System.Int32 UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1_HandleElem::_node
	int32_t ____node_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__node_1() { return static_cast<int32_t>(offsetof(HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F, ____node_1)); }
	inline int32_t get__node_1() const { return ____node_1; }
	inline int32_t* get_address_of__node_1() { return &____node_1; }
	inline void set__node_1(int32_t value)
	{
		____node_1 = value;
	}
};


// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1<System.Object>
struct  PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1_LessOrEqual<TValue> UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1::_leq
	LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * ____leq_0;
	// System.Int32[] UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1::_nodes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____nodes_1;
	// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1_HandleElem<TValue>[] UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1::_handles
	HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* ____handles_2;
	// System.Int32 UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1::_size
	int32_t ____size_3;
	// System.Int32 UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1::_max
	int32_t ____max_4;
	// System.Int32 UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1::_freeList
	int32_t ____freeList_5;
	// System.Boolean UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1::_initialized
	bool ____initialized_6;

public:
	inline static int32_t get_offset_of__leq_0() { return static_cast<int32_t>(offsetof(PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E, ____leq_0)); }
	inline LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * get__leq_0() const { return ____leq_0; }
	inline LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC ** get_address_of__leq_0() { return &____leq_0; }
	inline void set__leq_0(LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * value)
	{
		____leq_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____leq_0), (void*)value);
	}

	inline static int32_t get_offset_of__nodes_1() { return static_cast<int32_t>(offsetof(PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E, ____nodes_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__nodes_1() const { return ____nodes_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__nodes_1() { return &____nodes_1; }
	inline void set__nodes_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____nodes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nodes_1), (void*)value);
	}

	inline static int32_t get_offset_of__handles_2() { return static_cast<int32_t>(offsetof(PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E, ____handles_2)); }
	inline HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* get__handles_2() const { return ____handles_2; }
	inline HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78** get_address_of__handles_2() { return &____handles_2; }
	inline void set__handles_2(HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* value)
	{
		____handles_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handles_2), (void*)value);
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__max_4() { return static_cast<int32_t>(offsetof(PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E, ____max_4)); }
	inline int32_t get__max_4() const { return ____max_4; }
	inline int32_t* get_address_of__max_4() { return &____max_4; }
	inline void set__max_4(int32_t value)
	{
		____max_4 = value;
	}

	inline static int32_t get_offset_of__freeList_5() { return static_cast<int32_t>(offsetof(PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E, ____freeList_5)); }
	inline int32_t get__freeList_5() const { return ____freeList_5; }
	inline int32_t* get_address_of__freeList_5() { return &____freeList_5; }
	inline void set__freeList_5(int32_t value)
	{
		____freeList_5 = value;
	}

	inline static int32_t get_offset_of__initialized_6() { return static_cast<int32_t>(offsetof(PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E, ____initialized_6)); }
	inline bool get__initialized_6() const { return ____initialized_6; }
	inline bool* get_address_of__initialized_6() { return &____initialized_6; }
	inline void set__initialized_6(bool value)
	{
		____initialized_6 = value;
	}
};


// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1_StackItem<System.Object>
struct  StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1_StackItem::p
	int32_t ___p_0;
	// System.Int32 UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1_StackItem::r
	int32_t ___r_1;

public:
	inline static int32_t get_offset_of_p_0() { return static_cast<int32_t>(offsetof(StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352, ___p_0)); }
	inline int32_t get_p_0() const { return ___p_0; }
	inline int32_t* get_address_of_p_0() { return &___p_0; }
	inline void set_p_0(int32_t value)
	{
		___p_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352, ___r_1)); }
	inline int32_t get_r_1() const { return ___r_1; }
	inline int32_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(int32_t value)
	{
		___r_1 = value;
	}
};


// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1<System.Object>
struct  PriorityQueue_1_t59DA18809275FC049FDC4BF4270CCA71DFA06D54  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1_LessOrEqual<TValue> UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1::_leq
	LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * ____leq_0;
	// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1<TValue> UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1::_heap
	PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * ____heap_1;
	// TValue[] UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1::_keys
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____keys_2;
	// System.Int32[] UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1::_order
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____order_3;
	// System.Int32 UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1::_size
	int32_t ____size_4;
	// System.Int32 UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1::_max
	int32_t ____max_5;
	// System.Boolean UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1::_initialized
	bool ____initialized_6;

public:
	inline static int32_t get_offset_of__leq_0() { return static_cast<int32_t>(offsetof(PriorityQueue_1_t59DA18809275FC049FDC4BF4270CCA71DFA06D54, ____leq_0)); }
	inline LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * get__leq_0() const { return ____leq_0; }
	inline LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC ** get_address_of__leq_0() { return &____leq_0; }
	inline void set__leq_0(LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * value)
	{
		____leq_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____leq_0), (void*)value);
	}

	inline static int32_t get_offset_of__heap_1() { return static_cast<int32_t>(offsetof(PriorityQueue_1_t59DA18809275FC049FDC4BF4270CCA71DFA06D54, ____heap_1)); }
	inline PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * get__heap_1() const { return ____heap_1; }
	inline PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E ** get_address_of__heap_1() { return &____heap_1; }
	inline void set__heap_1(PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * value)
	{
		____heap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____heap_1), (void*)value);
	}

	inline static int32_t get_offset_of__keys_2() { return static_cast<int32_t>(offsetof(PriorityQueue_1_t59DA18809275FC049FDC4BF4270CCA71DFA06D54, ____keys_2)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__keys_2() const { return ____keys_2; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__keys_2() { return &____keys_2; }
	inline void set__keys_2(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____keys_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keys_2), (void*)value);
	}

	inline static int32_t get_offset_of__order_3() { return static_cast<int32_t>(offsetof(PriorityQueue_1_t59DA18809275FC049FDC4BF4270CCA71DFA06D54, ____order_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__order_3() const { return ____order_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__order_3() { return &____order_3; }
	inline void set__order_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____order_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____order_3), (void*)value);
	}

	inline static int32_t get_offset_of__size_4() { return static_cast<int32_t>(offsetof(PriorityQueue_1_t59DA18809275FC049FDC4BF4270CCA71DFA06D54, ____size_4)); }
	inline int32_t get__size_4() const { return ____size_4; }
	inline int32_t* get_address_of__size_4() { return &____size_4; }
	inline void set__size_4(int32_t value)
	{
		____size_4 = value;
	}

	inline static int32_t get_offset_of__max_5() { return static_cast<int32_t>(offsetof(PriorityQueue_1_t59DA18809275FC049FDC4BF4270CCA71DFA06D54, ____max_5)); }
	inline int32_t get__max_5() const { return ____max_5; }
	inline int32_t* get_address_of__max_5() { return &____max_5; }
	inline void set__max_5(int32_t value)
	{
		____max_5 = value;
	}

	inline static int32_t get_offset_of__initialized_6() { return static_cast<int32_t>(offsetof(PriorityQueue_1_t59DA18809275FC049FDC4BF4270CCA71DFA06D54, ____initialized_6)); }
	inline bool get__initialized_6() const { return ____initialized_6; }
	inline bool* get_address_of__initialized_6() { return &____initialized_6; }
	inline void set__initialized_6(bool value)
	{
		____initialized_6 = value;
	}
};


// UnityEngine.Rendering.ObjectPool`1<System.Object>
struct  ObjectPool_1_tD00BD96AEC2DCAA7B958359A0C2F9A1C5A1E1C4D  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.Rendering.ObjectPool`1::m_Stack
	Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.Rendering.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.Rendering.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.Rendering.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tD00BD96AEC2DCAA7B958359A0C2F9A1C5A1E1C4D, ___m_Stack_0)); }
	inline Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tD00BD96AEC2DCAA7B958359A0C2F9A1C5A1E1C4D, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tD00BD96AEC2DCAA7B958359A0C2F9A1C5A1E1C4D, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tD00BD96AEC2DCAA7B958359A0C2F9A1C5A1E1C4D, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride
struct  ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.PostProcessing.ParameterOverride::overrideState
	bool ___overrideState_0;

public:
	inline static int32_t get_offset_of_overrideState_0() { return static_cast<int32_t>(offsetof(ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C, ___overrideState_0)); }
	inline bool get_overrideState_0() const { return ___overrideState_0; }
	inline bool* get_address_of_overrideState_0() { return &___overrideState_0; }
	inline void set_overrideState_0(bool value)
	{
		___overrideState_0 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer
struct  PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer::m_ResetHistory
	bool ___m_ResetHistory_0;

public:
	inline static int32_t get_offset_of_m_ResetHistory_0() { return static_cast<int32_t>(offsetof(PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F, ___m_ResetHistory_0)); }
	inline bool get_m_ResetHistory_0() const { return ___m_ResetHistory_0; }
	inline bool* get_address_of_m_ResetHistory_0() { return &___m_ResetHistory_0; }
	inline void set_m_ResetHistory_0(bool value)
	{
		___m_ResetHistory_0 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>
struct  U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// T UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.Queue`1<UnityEngine.Transform> UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1::<queue>5__2
	Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * ___U3CqueueU3E5__2_3;
	// UnityEngine.GameObject[] UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1::<>7__wrap2
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___U3CU3E7__wrap2_4;
	// System.Int32 UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1::<>7__wrap3
	int32_t ___U3CU3E7__wrap3_5;
	// System.Collections.IEnumerator UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1::<>7__wrap4
	RuntimeObject* ___U3CU3E7__wrap4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CqueueU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893, ___U3CqueueU3E5__2_3)); }
	inline Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * get_U3CqueueU3E5__2_3() const { return ___U3CqueueU3E5__2_3; }
	inline Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 ** get_address_of_U3CqueueU3E5__2_3() { return &___U3CqueueU3E5__2_3; }
	inline void set_U3CqueueU3E5__2_3(Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * value)
	{
		___U3CqueueU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CqueueU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_4() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893, ___U3CU3E7__wrap2_4)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_U3CU3E7__wrap2_4() const { return ___U3CU3E7__wrap2_4; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_U3CU3E7__wrap2_4() { return &___U3CU3E7__wrap2_4; }
	inline void set_U3CU3E7__wrap2_4(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___U3CU3E7__wrap2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_5() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893, ___U3CU3E7__wrap3_5)); }
	inline int32_t get_U3CU3E7__wrap3_5() const { return ___U3CU3E7__wrap3_5; }
	inline int32_t* get_address_of_U3CU3E7__wrap3_5() { return &___U3CU3E7__wrap3_5; }
	inline void set_U3CU3E7__wrap3_5(int32_t value)
	{
		___U3CU3E7__wrap3_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap4_6() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893, ___U3CU3E7__wrap4_6)); }
	inline RuntimeObject* get_U3CU3E7__wrap4_6() const { return ___U3CU3E7__wrap4_6; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap4_6() { return &___U3CU3E7__wrap4_6; }
	inline void set_U3CU3E7__wrap4_6(RuntimeObject* value)
	{
		___U3CU3E7__wrap4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap4_6), (void*)value);
	}
};


// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct  IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.UI.Collections.IndexedSet`1::m_List
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___m_List_0;
	// System.Collections.Generic.Dictionary`2<T,System.Int32> UnityEngine.UI.Collections.IndexedSet`1::m_Dictionary
	Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * ___m_Dictionary_1;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3, ___m_List_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_List_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Dictionary_1() { return static_cast<int32_t>(offsetof(IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3, ___m_Dictionary_1)); }
	inline Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * get_m_Dictionary_1() const { return ___m_Dictionary_1; }
	inline Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A ** get_address_of_m_Dictionary_1() { return &___m_Dictionary_1; }
	inline void set_m_Dictionary_1(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * value)
	{
		___m_Dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dictionary_1), (void*)value);
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct  TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineContainer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tween_1), (void*)value);
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct  TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineContainer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tween_1), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<System.Int32>
struct  ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<System.Object>
struct  ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Color32>
struct  ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>
struct  ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector2>
struct  ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector3>
struct  ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector4>
struct  ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct  ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A, ___m_Stack_0)); }
	inline Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct  ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E, ___m_Stack_0)); }
	inline Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99, ___m_Stack_0)); }
	inline Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99, ___m_ActionOnGet_1)); }
	inline UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1, ___m_Stack_0)); }
	inline Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1, ___m_Stack_0)); }
	inline Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49, ___m_Stack_0)); }
	inline Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54, ___m_Stack_0)); }
	inline Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Object>
struct  ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9, ___m_Stack_0)); }
	inline Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Events.InvokableCall
struct  InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC, ___Delegate_0)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct  InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB, ___Delegate_0)); }
	inline UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Int32>
struct  InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5, ___Delegate_0)); }
	inline UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Object>
struct  InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC, ___Delegate_0)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Single>
struct  InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26, ___Delegate_0)); }
	inline UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct  InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA, ___Delegate_0)); }
	inline UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct  InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E, ___Delegate_0)); }
	inline UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector3>
struct  InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B, ___Delegate_0)); }
	inline UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct  InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E, ___Delegate_0)); }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct  InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D, ___Delegate_0)); }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct  InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> UnityEngine.Events.InvokableCall`4::Delegate
	UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6, ___Delegate_0)); }
	inline UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct  UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Object>
struct  UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Single>
struct  UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct  UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct  UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct  UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct  UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct  UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`4::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PQHandle
struct  PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PQHandle::_handle
	int32_t ____handle_1;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59, ____handle_1)); }
	inline int32_t get__handle_1() const { return ____handle_1; }
	inline int32_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(int32_t value)
	{
		____handle_1 = value;
	}
};

struct PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59_StaticFields
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PQHandle::Invalid
	int32_t ___Invalid_0;

public:
	inline static int32_t get_offset_of_Invalid_0() { return static_cast<int32_t>(offsetof(PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59_StaticFields, ___Invalid_0)); }
	inline int32_t get_Invalid_0() const { return ___Invalid_0; }
	inline int32_t* get_address_of_Invalid_0() { return &___Invalid_0; }
	inline void set_Invalid_0(int32_t value)
	{
		___Invalid_0 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>
struct  ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>
struct  ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>
struct  ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>
struct  ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	float ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE, ___value_1)); }
	inline float get_value_1() const { return ___value_1; }
	inline float* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(float value)
	{
		___value_1 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>
struct  PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461  : public PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F
{
public:
	// T UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1::<settings>k__BackingField
	RuntimeObject * ___U3CsettingsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CsettingsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461, ___U3CsettingsU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CsettingsU3Ek__BackingField_1() const { return ___U3CsettingsU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CsettingsU3Ek__BackingField_1() { return &___U3CsettingsU3Ek__BackingField_1; }
	inline void set_U3CsettingsU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CsettingsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsettingsU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.UI.CoroutineTween.FloatTween
struct  FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A 
{
public:
	// UnityEngine.UI.CoroutineTween.FloatTween_FloatTweenCallback UnityEngine.UI.CoroutineTween.FloatTween::m_Target
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_Target_0)); }
	inline FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * get_m_Target_0() const { return ___m_Target_0; }
	inline FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartValue_1() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_StartValue_1)); }
	inline float get_m_StartValue_1() const { return ___m_StartValue_1; }
	inline float* get_address_of_m_StartValue_1() { return &___m_StartValue_1; }
	inline void set_m_StartValue_1(float value)
	{
		___m_StartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetValue_2() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_TargetValue_2)); }
	inline float get_m_TargetValue_2() const { return ___m_TargetValue_2; }
	inline float* get_address_of_m_TargetValue_2() { return &___m_TargetValue_2; }
	inline void set_m_TargetValue_2(float value)
	{
		___m_TargetValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Duration_3() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_Duration_3)); }
	inline float get_m_Duration_3() const { return ___m_Duration_3; }
	inline float* get_address_of_m_Duration_3() { return &___m_Duration_3; }
	inline void set_m_Duration_3(float value)
	{
		___m_Duration_3 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_IgnoreTimeScale_4)); }
	inline bool get_m_IgnoreTimeScale_4() const { return ___m_IgnoreTimeScale_4; }
	inline bool* get_address_of_m_IgnoreTimeScale_4() { return &___m_IgnoreTimeScale_4; }
	inline void set_m_IgnoreTimeScale_4(bool value)
	{
		___m_IgnoreTimeScale_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshaled_pinvoke
{
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshaled_com
{
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.IntegratedSubsystem
struct  IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};

// UnityEngine.IntegratedSubsystemDescriptor
struct  IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>
struct  ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E, ___value_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_value_1() const { return ___value_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___value_1 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>
struct  ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004, ___value_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_value_1() const { return ___value_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___value_1 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>
struct  ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0, ___value_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_value_1() const { return ___value_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___value_1 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>
struct  ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F, ___value_1)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_value_1() const { return ___value_1; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___value_1 = value;
	}
};


// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode
struct  ColorTweenMode_tDCE018D37330F576ACCD00D16CAF91AE55315F2F 
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorTweenMode_tDCE018D37330F576ACCD00D16CAF91AE55315F2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>
struct  U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::tweenInfo
	FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___tweenInfo_2)); }
	inline FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>
struct  IntegratedSubsystemDescriptor_1_t2426B50A97CC5BA8E2BFE696F2EA1DDFC2174909  : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystem`1<System.Object>
struct  IntegratedSubsystem_1_t2DE7C58DE8F60DCFD451AAFB0B75E6B1BF94C134  : public IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E
{
public:

public:
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>
struct  ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.UI.CoroutineTween.ColorTween
struct  ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 
{
public:
	// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenCallback UnityEngine.UI.CoroutineTween.ColorTween::m_Target
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_StartColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_TargetColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode UnityEngine.UI.CoroutineTween.ColorTween::m_TweenMode
	int32_t ___m_TweenMode_3;
	// System.Single UnityEngine.UI.CoroutineTween.ColorTween::m_Duration
	float ___m_Duration_4;
	// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_5;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_Target_0)); }
	inline ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * get_m_Target_0() const { return ___m_Target_0; }
	inline ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartColor_1() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_StartColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_StartColor_1() const { return ___m_StartColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_StartColor_1() { return &___m_StartColor_1; }
	inline void set_m_StartColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_StartColor_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetColor_2() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_TargetColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_TargetColor_2() const { return ___m_TargetColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_TargetColor_2() { return &___m_TargetColor_2; }
	inline void set_m_TargetColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_TargetColor_2 = value;
	}

	inline static int32_t get_offset_of_m_TweenMode_3() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_TweenMode_3)); }
	inline int32_t get_m_TweenMode_3() const { return ___m_TweenMode_3; }
	inline int32_t* get_address_of_m_TweenMode_3() { return &___m_TweenMode_3; }
	inline void set_m_TweenMode_3(int32_t value)
	{
		___m_TweenMode_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_5() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_IgnoreTimeScale_5)); }
	inline bool get_m_IgnoreTimeScale_5() const { return ___m_IgnoreTimeScale_5; }
	inline bool* get_address_of_m_IgnoreTimeScale_5() { return &___m_IgnoreTimeScale_5; }
	inline void set_m_IgnoreTimeScale_5(bool value)
	{
		___m_IgnoreTimeScale_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshaled_pinvoke
{
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshaled_com
{
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Comparison`1<System.Object>
struct  Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4  : public MulticastDelegate_t
{
public:

public:
};


// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Boolean>
struct  UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct  UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct  UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Int32>
struct  UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Single>
struct  UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct  UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct  UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct  UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>
struct  UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct  UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct  UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct  UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct  UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_LessOrEqual<System.Object>
struct  LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1_LessOrEqual<System.Object>
struct  LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
struct  PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings::active
	bool ___active_4;
	// UnityEngine.Rendering.PostProcessing.BoolParameter UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings::enabled
	BoolParameter_tEBE5D980C8D9609041E3D8D90F2CF2D92F62B0AE * ___enabled_5;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.PostProcessing.ParameterOverride> UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings::parameters
	ReadOnlyCollection_1_t27F043E8DE5EED8464F76863AEE4EBD68561389B * ___parameters_6;

public:
	inline static int32_t get_offset_of_active_4() { return static_cast<int32_t>(offsetof(PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042, ___active_4)); }
	inline bool get_active_4() const { return ___active_4; }
	inline bool* get_address_of_active_4() { return &___active_4; }
	inline void set_active_4(bool value)
	{
		___active_4 = value;
	}

	inline static int32_t get_offset_of_enabled_5() { return static_cast<int32_t>(offsetof(PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042, ___enabled_5)); }
	inline BoolParameter_tEBE5D980C8D9609041E3D8D90F2CF2D92F62B0AE * get_enabled_5() const { return ___enabled_5; }
	inline BoolParameter_tEBE5D980C8D9609041E3D8D90F2CF2D92F62B0AE ** get_address_of_enabled_5() { return &___enabled_5; }
	inline void set_enabled_5(BoolParameter_tEBE5D980C8D9609041E3D8D90F2CF2D92F62B0AE * value)
	{
		___enabled_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enabled_5), (void*)value);
	}

	inline static int32_t get_offset_of_parameters_6() { return static_cast<int32_t>(offsetof(PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042, ___parameters_6)); }
	inline ReadOnlyCollection_1_t27F043E8DE5EED8464F76863AEE4EBD68561389B * get_parameters_6() const { return ___parameters_6; }
	inline ReadOnlyCollection_1_t27F043E8DE5EED8464F76863AEE4EBD68561389B ** get_address_of_parameters_6() { return &___parameters_6; }
	inline void set_parameters_6(ReadOnlyCollection_1_t27F043E8DE5EED8464F76863AEE4EBD68561389B * value)
	{
		___parameters_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parameters_6), (void*)value);
	}
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>
struct  U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::tweenInfo
	ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___tweenInfo_2)); }
	inline ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1_HandleElem<System.Object>[]
struct HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * m_Items[1];

public:
	inline HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * m_Items[1];

public:
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Int32>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mD59C24D29FAE8D7519D23F47DFFD8EBEE0F3F675_gshared (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mEA79F404756FC1CC6005BEBFB37694A46BCAF716_gshared (Queue_1_tCD201270E97BC8DEAAF8D991FC536293137B19A9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m4832460C5E768E11FD95838F81EF5F5D76E85F7D_gshared (Queue_1_tCD201270E97BC8DEAAF8D991FC536293137B19A9 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mFAB452A29D7E112B716488C549737D65D9190764_gshared (Queue_1_tCD201270E97BC8DEAAF8D991FC536293137B19A9 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m7A6FFDFB76BE86C7C26FFD4B11A826E1EBD00010_gshared_inline (Queue_1_tCD201270E97BC8DEAAF8D991FC536293137B19A9 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5 (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * __this, RuntimeObject * ___target0, MethodInfo_t * ___function1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346 (Type_t * ___type0, RuntimeObject * ___firstArgument1, MethodInfo_t * ___method2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58 (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091 (Delegate_t * ___delegate0, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline (Delegate_t * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048 (Delegate_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5 (RuntimeObject * ___obj0, String_t* ___functionName1, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___argumentTypes2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394 (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Int32>(!!0[]&,System.Int32)
inline void Array_Resize_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mD59C24D29FAE8D7519D23F47DFFD8EBEE0F3F675 (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mD59C24D29FAE8D7519D23F47DFFD8EBEE0F3F675_gshared)(___array0, ___newSize1, method);
}
// System.Void UnityEngine.IntegratedSubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystemDescriptor__ctor_mBA91F292CA7A9147075DC6D2B09D0843E282FC21 (IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.IntegratedSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem__ctor_mAA7E5AA42CAE2649706D44E0D990545F29B96310 (IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5 (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * __this, const RuntimeMethod* method);
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737 (bool* __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A (int32_t* __this, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0 (float* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Color::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Color_GetHashCode_m88317C719D2DAA18E293B3F5CD17B9FB80E26CF1 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_m6C42B4F413A489535D180E8A99BE0298AD078B0B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector4::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessEffectRenderer__ctor_m9D14BDBEBE8F6341D7A99527ADF6D2AF18FA831E (PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::.ctor()
inline void Queue_1__ctor_m1114B4B3A14520FABE413206AE14D21D88BEA3F8 (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *, const RuntimeMethod*))Queue_1__ctor_mEA79F404756FC1CC6005BEBFB37694A46BCAF716_gshared)(__this, method);
}
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51 (const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.SceneManagement.Scene::GetRootGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* Scene_GetRootGameObjects_mC87878438643AF527A7C017B2EC2D133E96A1FC1 (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::Enqueue(!0)
inline void Queue_1_Enqueue_m0AE12FFA5BD870C099227186990EA21D30A519F8 (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Queue_1_Enqueue_m4832460C5E768E11FD95838F81EF5F5D76E85F7D_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<UnityEngine.Transform>::Dequeue()
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Queue_1_Dequeue_m4255117298948764AA48104A50476CB3B1792460 (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *, const RuntimeMethod*))Queue_1_Dequeue_mFAB452A29D7E112B716488C549737D65D9190764_gshared)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Transform>::get_Count()
inline int32_t Queue_1_get_Count_mF0A3AC2F450CF4B0839855F9AE17BD42FF745780_inline (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *, const RuntimeMethod*))Queue_1_get_Count_m7A6FFDFB76BE86C7C26FFD4B11A826E1EBD00010_gshared_inline)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4 (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::ValidTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorTween_ValidTarget_mA5469658CB631C87CF97FC5AE2B9089A06678696 (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::get_ignoreTimeScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_mF935C53CA27D67D47AE0021A0DB8D92C392EF56B_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2 (const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.ColorTween::get_duration()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float ColorTween_get_duration_m7E952A00A8A606D7886422812EFB24A6D5BFB508_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorTween_TweenValue_m4EF3CDDDDC3986BA6D06D4DB785310B131958749 (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::ValidTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatTween_ValidTarget_m7DFE9AC7C8C0EBEF441D80472635CF4F38632E5E (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::get_ignoreTimeScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_m8281CB2B12F1697A512D2E2515F5DA058B429FD0_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.FloatTween::get_duration()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float FloatTween_get_duration_m17CD4518038CD642D714B3633236133D309EF13B_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.FloatTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_TweenValue_m78FEB902E18BE0882BC487BC29B6EA3905E4F05C (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector3>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m39A8E9901725F286E72817D5AE907516EF0C7C06_gshared (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m39A8E9901725F286E72817D5AE907516EF0C7C06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		NullCheck((InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *)__this);
		((  void (*) (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *, UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *)__this, (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)((UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector3>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m5B569F887BA12A79F909F234906977BFF4206325_gshared (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B * __this, UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * ___action0, const RuntimeMethod* method)
{
	{
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_0 = ___action0;
		NullCheck((InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *)__this);
		((  void (*) (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *, UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *)__this, (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector3>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_mADAE43C0148E47AC7DCF90C52532C661CAAB156A_gshared (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B * __this, UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * V_0 = NULL;
	UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * V_1 = NULL;
	{
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_0 = (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_1 = V_0;
		V_1 = (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_1;
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C ** L_2 = (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C **)__this->get_address_of_Delegate_0();
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_3 = V_1;
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1((Delegate_t *)L_3, (Delegate_t *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_6 = V_0;
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *>((UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C **)(UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C **)L_2, (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)((UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_6);
		V_0 = (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_7;
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_8 = V_0;
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_8) == ((RuntimeObject*)(UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector3>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m6A1DA61DADA0A2AE739B7462020275EA0B44F34E_gshared (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B * __this, UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * V_0 = NULL;
	UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * V_1 = NULL;
	{
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_0 = (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_1 = V_0;
		V_1 = (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_1;
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C ** L_2 = (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C **)__this->get_address_of_Delegate_0();
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_3 = V_1;
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D((Delegate_t *)L_3, (Delegate_t *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_6 = V_0;
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *>((UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C **)(UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C **)L_2, (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)((UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_6);
		V_0 = (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_7;
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_8 = V_0;
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_8) == ((RuntimeObject*)(UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector3>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_mD5F9F31E1591B0FE7DEF947F47BE69F196212F0B_gshared (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_mD5F9F31E1591B0FE7DEF947F47BE69F196212F0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_1_Invoke_mD5F9F31E1591B0FE7DEF947F47BE69F196212F0B_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_5 = (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_7 = (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck((UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_7);
		((  void (*) (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_7, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )((*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)UnBox(L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector3>::Invoke(T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_mF962E8C8D8DA32B646135F8665DBEEFB55410813_gshared (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_0 = (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_2 = (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)__this->get_Delegate_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___args00;
		NullCheck((UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_2);
		((  void (*) (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_2, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector3>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_mC618DB62BA8331A68A75058610998BF7C0BE4F16_gshared (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_0 = (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_3 = (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_2__ctor_mE80CFA8D8605680746EBD7DC371B30DD42759D38_gshared (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2__ctor_mE80CFA8D8605680746EBD7DC371B30DD42759D38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_gshared (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = ___args0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_8 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		bool L_9 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_10 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = ___args0;
		NullCheck(L_11);
		int32_t L_12 = 0;
		RuntimeObject * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = ___args0;
		NullCheck(L_14);
		int32_t L_15 = 1;
		RuntimeObject * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck((UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_10);
		((  void (*) (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_10, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_16, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0050:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_2_Invoke_mB3333ABBA2108D8B3AF65729F2A5EEFAD5B49678_gshared (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * __this, RuntimeObject * ___args00, RuntimeObject * ___args11, const RuntimeMethod* method)
{
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_0 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_2 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		RuntimeObject * L_3 = ___args00;
		RuntimeObject * L_4 = ___args11;
		NullCheck((UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_2);
		((  void (*) (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_2, (RuntimeObject *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_2_Find_m26B7D50B1D4203B1E9539D5BE727050009CDBEA5_gshared (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_0 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_3 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_3__ctor_mA26C0B9D52E628D915E0C705A735F226BBA9B3EE_gshared (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3__ctor_mA26C0B9D52E628D915E0C705A735F226BBA9B3EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_gshared (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = ___args0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_11 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		bool L_12 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0060;
		}
	}
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_13 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = ___args0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		RuntimeObject * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = ___args0;
		NullCheck(L_17);
		int32_t L_18 = 1;
		RuntimeObject * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = ___args0;
		NullCheck(L_20);
		int32_t L_21 = 2;
		RuntimeObject * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck((UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_13);
		((  void (*) (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_13, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_16, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_19, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0060:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_3_Find_mC8983BEEB7D91A851B167DA159F31647EF0FD7CE_gshared (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_0 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_3 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_4__ctor_mDF3741C3CF51E23313E2DF7062488C430F25EEF0_gshared (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4__ctor_mDF3741C3CF51E23313E2DF7062488C430F25EEF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_gshared (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)4)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = ___args0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = ___args0;
		NullCheck(L_11);
		int32_t L_12 = 3;
		RuntimeObject * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_14 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		bool L_15 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0070;
		}
	}
	{
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_16 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = ___args0;
		NullCheck(L_17);
		int32_t L_18 = 0;
		RuntimeObject * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = ___args0;
		NullCheck(L_20);
		int32_t L_21 = 1;
		RuntimeObject * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = ___args0;
		NullCheck(L_23);
		int32_t L_24 = 2;
		RuntimeObject * L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = ___args0;
		NullCheck(L_26);
		int32_t L_27 = 3;
		RuntimeObject * L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck((UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)L_16);
		((  void (*) (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)L_16, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_19, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_25, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_28, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0070:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_4_Find_m31A9DD32912CC3F597F67C5B123F65D8D83BCB55_gshared (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_0 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_3 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mBB2754F539A754A4BA916AF035A54BCEC7A00CA5_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m6BDDE2C02C9B1B969AF9C8E3283A99EDF725308E_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, bool ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m4B1EE21C25114A9D9BAFC50E3F2D67E5F665F5AC_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, bool ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m4B1EE21C25114A9D9BAFC50E3F2D67E5F665F5AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m03E7697F347F98D3FD8952EC0CE1A714D1FA20BB_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mFA3B154991DCD05A05EEF0F8A4ADD01D48BF5F74_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m57B06346DBA8E9878C2A3589AB5F4AACDF0BD1BD_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m383296E02ACDA4892A49F2B148201A5A37D9F57F_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, int32_t ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m383296E02ACDA4892A49F2B148201A5A37D9F57F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mC40753D8C3D37080677F4956B214A840380FF011_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF6AE3BA9395C61DE1466BE7BB863A77F3584EEC3_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_mDE6E5FC52C3D8BA5B9D9D6BC8187BE0C83B9B428_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m0E6F26B70A39427E3FF824D0C1A2B4A05DC93781_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m8A8457E16443B452AC53C84F32402BAC6B93E6FF_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDF0761DC432ADAE690B100D381AAEE87CD2C3DCB_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m23BC5C707027B6C49AE29FB21A4F9F9F0CA72648_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, float ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mC8A9A9332EEEA81428669FAD060934954B73DDCB_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, float ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_mC8A9A9332EEEA81428669FAD060934954B73DDCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m03AE0A9995BF8D246D2317542428D220C55160B9_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m68BB331F99FC554A0DE55ED37C1AA160AB0BBCE3_gshared (UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m8578C957C3D624151400EA7EA338CC2B264B1E07_gshared (UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mD23FCF592F740518854A0AC4BE239C582D00071E_gshared (UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_mD23FCF592F740518854A0AC4BE239C582D00071E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m56152EB9A4440C0633CCAC42341584619F58929A_gshared (UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m35B0A0067C115007E10FBD8E008AE5A04F766BC7_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m28278C6E83173B3BC3CBC240F14DD94D721E78C2_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m5DEFA82EDDF619690E524720C4128D58F303EBCB_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m5DEFA82EDDF619690E524720C4128D58F303EBCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m1B23318369E0A45239A06ACB2AEF27BB6AF8B3A2_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m57D4C676424F847E450FF74F67879EA2A8294F11_gshared (UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m7E6284AD632994DA3159A0DE8BB20399C14C30DA_gshared (UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mA94DECCCC2849BD22BDB5894C9DADE3DD2CBBA96_gshared (UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_mA94DECCCC2849BD22BDB5894C9DADE3DD2CBBA96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m9E7DF7CA924AE613433B72A1A8EBAC472B4AA42B_gshared (UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m113172E3CF6D3750C89AD1BCAB85E8FC7369E54D_gshared (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_mCA4728A04376609A7C4D8A5EDEA1CE4945E3F8C4_gshared (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m7F1148D026F83668B1B0D707EA2F6C0BEA0836FA_gshared (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m7F1148D026F83668B1B0D707EA2F6C0BEA0836FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mA977FC7A3ED90799CF39CA877B44895E3CFDD08B_gshared (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_mF4DB369856F884CA526A897CB6E86FE396844206_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m06DA8061B2E6984DD80B43D6080FC181B3231267_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mCF4D420D2E1AE5C6A9CBDA25C21702141DF45B40_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m4C1A8B33A480934E69D745B3A99F88E761BF16E2_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m09EBA3BBF14887A401E08C9C0360EF0BD037C918_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_mADF341B796508D58BEDF95CC8C087F2827F5105D_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m5F2C976EFE2F0144C74BB2FE1E3E2247617C81E0_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, int32_t ___arg11, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_m5F2C976EFE2F0144C74BB2FE1E3E2247617C81E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m4D471FEA8177D598ED108C5B2A9A35687D439D09_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_mDC07A3AA1306CA33C495D2954233DBB9B3BB6A04_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m4E5A5335E63C942B335D047296080EB8DA73FB99_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mC72F0DCBBB077E215EC9ADA58D300288CC39E069_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg11, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_mC72F0DCBBB077E215EC9ADA58D300288CC39E069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_mAF3A961DD4A745EB47F2C7056216F11449C74F82_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3__ctor_mD65DD6F2A7160759B11B9E9402E42889B0308B7C_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_m4CC353FB62BF2996DDB0BDE4B517D4CBAB1388B2_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_3_BeginInvoke_mF0A7FADCA696D28F879DBE8BB21E0107020310CB_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_EndInvoke_m40F664442966F777B243BE41660DF4D97FCF9A24_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4__ctor_mD03F869374C55A6F3391C0F2E80DF4DEE5EA1C8A_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m91D7864FF201914C04AEC6B34DD6E7C62C367FF8_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_4_BeginInvoke_mCED3B2E5714E6AB57D5B05030DBE0851E6970061_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	__d_args[3] = ___arg33;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_EndInvoke_mAA51C4DFA09F01F0AF79FD6A3419925FEE1015EB_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m7593B94EC6E602ABCEB515CC84613DDAD9ED828F_gshared (UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m5A6D7B15EFC39EFA12721981E727CBD81E3051AF_gshared (UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m67BDA7463242627D352129D86C8A2DD184D5469A_gshared (UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5DC384FDD452EC00E3EE247D2AE8FF8B941DED23_gshared (UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m5DC384FDD452EC00E3EE247D2AE8FF8B941DED23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m064D0243F2B19E418BE9C6A9284C3EB65C3DA2A7_gshared (UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * L_2 = (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_mE3DFC752D815713663BCE98363AD16EB9A7ED1FD_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = ___action0;
		InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * L_1 = (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mC08FDB684236B6B8DA73ACD1C5C1B6E857014EFD_gshared (UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 * __this, bool ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_mC08FDB684236B6B8DA73ACD1C5C1B6E857014EFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * L_5 = V_2;
		bool L_6 = ___arg00;
		NullCheck((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)L_5);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(T1) */, (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)L_5, (bool)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_9 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_9, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_14 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_14;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		bool L_18 = ___arg00;
		bool L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_21 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_25 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25);
		int32_t L_26 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m1EF01690E1F8F81E7C190F8D9610573D5E59490C_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m16C5BBB88B05379272D04EB85D66E67C83E8BDBF_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m0E8B5D5884056FA9248EB6AF8D3243F903735B92_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_2 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m8187D8D7A87F912D707BCB8913E01970F7D8F453_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___action0;
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_1 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_5 = V_2;
		int32_t L_6 = ___arg00;
		NullCheck((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)L_5);
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1) */, (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)L_5, (int32_t)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_9 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_9, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_14 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_14;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		int32_t L_18 = ___arg00;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_21 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_25 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25);
		int32_t L_26 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m9E1606EB0E08E6B0ECACA780B7AD424D113C8334_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_mD5524309E29952671D52EA873E3A0C63EF9C4455_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m959B9FFD3D5FEE00DC93EDA9BE5924BDA8217541_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_2 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m1EE511D98201F0DE08C472BFB04DAC8E846243BE_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___action0;
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_1 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_5 = V_2;
		RuntimeObject * L_6 = ___arg00;
		NullCheck((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)L_5);
		VirtActionInvoker1< RuntimeObject * >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1) */, (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)L_5, (RuntimeObject *)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_9 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_9, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_14 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_14;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_18 = ___arg00;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_19 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_19);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_19, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_20);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_21 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_22 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_23 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_23);
		int32_t L_24 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_23, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m90CD771D0B50926E7B8624F1E0697F1FF539098D_gshared (UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mCCF08CC8634A4987236EA3C100FFCA94A18C7CC8_gshared (UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m9F66B20C8389E4345F73AE4F2EB01BDE3A71B836_gshared (UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2B6143F06E866A0E7E58F7CA948F0C6635220D24_gshared (UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m2B6143F06E866A0E7E58F7CA948F0C6635220D24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_mFF7BFEA18BA68B1A88ED74144D0B18D3A4DB5D0C_gshared (UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * L_2 = (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m25BE7886179E8C0745C51A9C75E9489299CE0FEC_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = ___action0;
		InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * L_1 = (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m2B015F1AE7FEA9E2D9E2621E5179AB752B5469CD_gshared (UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA * __this, float ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m2B015F1AE7FEA9E2D9E2621E5179AB752B5469CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * L_5 = V_2;
		float L_6 = ___arg00;
		NullCheck((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)L_5);
		VirtActionInvoker1< float >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(T1) */, (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)L_5, (float)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_9 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_9, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_14 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_14;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		float L_18 = ___arg00;
		float L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_21 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_25 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25);
		int32_t L_26 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m488AA12DF55CA69BD2FEF7750B745B4C04452553_gshared (UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mF7F87D2B61E38F1FE1C8328F7125F4F129011AB1_gshared (UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8 * __this, UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m9B7A5936976A468607D8FC28308D558A51EA0C12_gshared (UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8 * __this, UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m79E67DC6496C7600A01FFD9339CB8FF97C885FD1_gshared (UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m79E67DC6496C7600A01FFD9339CB8FF97C885FD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m026F73DB3B1CF78CF91D2DEB483F8A0E22D5565E_gshared (UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA * L_2 = (InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m45E1EBE0AFAE7AC638AB8C10D8046A6A7BE0CE38_gshared (UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * L_0 = ___action0;
		InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA * L_1 = (InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA *, UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mB755E72B8F7D26CFA94C8B9B145F6019FB5932CC_gshared (UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_mB755E72B8F7D26CFA94C8B9B145F6019FB5932CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA *)((InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA * L_5 = V_2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6 = ___arg00;
		NullCheck((InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA *)L_5);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(T1) */, (InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA *)L_5, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_9 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_9, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_14 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_14;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_18 = ___arg00;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_21 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_25 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25);
		int32_t L_26 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mFEDF24F6A2BDDA808B0CDD2B8D362F0DF202BF52_gshared (UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mAD5E74EA93DE244D67186E19FDA2338CB1562247_gshared (UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0 * __this, UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m24B362875A9956F4B441B764DCB2F97865D2BFAE_gshared (UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0 * __this, UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_mE864CF4CD0578B8D425C65CB10D95458D88678C8_gshared (UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_mE864CF4CD0578B8D425C65CB10D95458D88678C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_mA4866EC2CC70252F64EA7E500740D7631CF12B03_gshared (UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E * L_2 = (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m768151D84C9E59E25748F26E31A72DD89BFE8C62_gshared (UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * L_0 = ___action0;
		InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E * L_1 = (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *, UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m63FD78E7E0C3309F39EE25F47221B3139475E103_gshared (UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m63FD78E7E0C3309F39EE25F47221B3139475E103_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *)((InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E * L_5 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___arg00;
		NullCheck((InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *)L_5);
		VirtActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(T1) */, (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *)L_5, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_9 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_9, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_14 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_14;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = ___arg00;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_21 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_25 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25);
		int32_t L_26 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m69D9E91808429FC9ADDE12F1F365CABB783028FF_gshared (UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mDA8C10F7A857D989D227555EA1B7D1F43A20204D_gshared (UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766 * __this, UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m7DE1B851CAFD0F356EB888D3766F4EF1703D915F_gshared (UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766 * __this, UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_mC30379BAD6B7B83B04ACD4466AE94B6F2A26FC72_gshared (UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_mC30379BAD6B7B83B04ACD4466AE94B6F2A26FC72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m96BE46D537F084ED0FE99FEFF3961CBC9AD02E2E_gshared (UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B * L_2 = (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m7A574441DA4113B837015185FAD6DE6FF05D37C0_gshared (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_0 = ___action0;
		InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B * L_1 = (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *, UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m782EE61B36B474C9B0F1EA57A00E80F23EE6D4D3_gshared (UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m782EE61B36B474C9B0F1EA57A00E80F23EE6D4D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *)((InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B * L_5 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___arg00;
		NullCheck((InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *)L_5);
		VirtActionInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector3>::Invoke(T1) */, (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *)L_5, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_9 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_9, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_14 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_14;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = ___arg00;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_21 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_25 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25);
		int32_t L_26 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_mD47EAB7355B86A1355D92383DD43BD7247A9DB74_gshared (UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_gshared (UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		MethodInfo_t * L_9 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_9;
		goto IL_002e;
	}

IL_002e:
	{
		MethodInfo_t * L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_2_GetDelegate_m4005C11561312B45709572CA1BB4D0EA630D0534_gshared (UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * L_2 = (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_mD905BCAB5C22629BF8F3B7CF869C02E3C31ED4F4_gshared (UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_Invoke_mD905BCAB5C22629BF8F3B7CF869C02E3C31ED4F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_00a0;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)((InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)));
		InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * L_5 = V_2;
		RuntimeObject * L_6 = ___arg00;
		RuntimeObject * L_7 = ___arg11;
		NullCheck((InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)L_5);
		((  void (*) (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		goto IL_009b;
	}

IL_0030:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_10 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_10, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_12 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_12);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_12, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_004f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_13);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_15 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_13, (int32_t)L_14, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_15;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_16)
		{
			goto IL_0070;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_InvokeArray_4(L_17);
	}

IL_0070:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_19 = ___arg00;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_19);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_21 = ___arg11;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_22 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_22);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_22, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_23);
	}

IL_009a:
	{
	}

IL_009b:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00a0:
	{
		int32_t L_25 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_26 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_26);
		int32_t L_27 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_26, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_mF7A53B951222BC66BE6F471036270FC66C36FAA2_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_003b;
	}

IL_003b:
	{
		MethodInfo_t * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_3_GetDelegate_mDD941B02CC78310DE703586880CD8C926CF5EC2C_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * L_2 = (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_4__ctor_m04FBFD537FBAF349F05C24B6EB9360FF08685819_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_12 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_14 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_14);
		MethodInfo_t * L_15 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_12, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_15;
		goto IL_0048;
	}

IL_0048:
	{
		MethodInfo_t * L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_4_GetDelegate_mAD2A7239ECF210269A5974AE66F1CFDB13977F54_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * L_2 = (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_LessOrEqual<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessOrEqual__ctor_m61BB4608CADDF58D77EB18A46A0F1A54980BAF7F_gshared (LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_LessOrEqual<System.Object>::Invoke(TValue,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LessOrEqual_Invoke_m4D7439BBCE79DBAFEC8523CDDF2339483B5D5DFE_gshared (LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 * __this, RuntimeObject * ___lhs0, RuntimeObject * ___rhs1, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef bool (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___lhs0, ___rhs1, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___lhs0, ___rhs1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, ___lhs0, ___rhs1);
					else
						result = GenericVirtFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, ___lhs0, ___rhs1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___lhs0, ___rhs1);
					else
						result = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___lhs0, ___rhs1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___lhs0, ___rhs1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___lhs0, ___rhs1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___lhs0, ___rhs1);
					else
						result = GenericVirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___lhs0, ___rhs1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___lhs0, ___rhs1);
					else
						result = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___lhs0, ___rhs1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___lhs0, ___rhs1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_LessOrEqual<System.Object>::BeginInvoke(TValue,TValue,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LessOrEqual_BeginInvoke_m5B893D1FD9323194B614A617A61B56F57018709B_gshared (LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 * __this, RuntimeObject * ___lhs0, RuntimeObject * ___rhs1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___lhs0;
	__d_args[1] = ___rhs1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Boolean UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_LessOrEqual<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LessOrEqual_EndInvoke_mE90D855DE82986124123FC4A5F8B83835EC2C0EF_gshared (LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TValue UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node<System.Object>::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Node_get_Key_m8CE2C9F7577ECAB6F0FA3F2D32BB5526CB0D95E8_gshared (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__key_0();
		return L_0;
	}
}
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node<TValue> UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node<System.Object>::get_Prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * Node_get_Prev_mD3E788FB07C9667B72173DD9C87CF56A37E8AE65_gshared (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * __this, const RuntimeMethod* method)
{
	{
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_0 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)__this->get__prev_1();
		return L_0;
	}
}
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node<TValue> UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node<System.Object>::get_Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * Node_get_Next_m39EC0A36327990184DA8CE7A951D2D45656B5F05_gshared (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * __this, const RuntimeMethod* method)
{
	{
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_0 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)__this->get__next_2();
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mE203B95F8F4B859CBD3CA8F2FCA8E9BB0FC6E76B_gshared (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1<System.Object>::.ctor(UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_LessOrEqual<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1__ctor_m804F66706F9C96196A661ECFA1550489545FA492_gshared (Dict_1_tDDB66EA04836CDF711BC4636526383454A9A3A5C * __this, LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 * ___leq0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 * L_0 = ___leq0;
		__this->set__leq_0(L_0);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_1 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_2 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)L_1;
		NullCheck(L_2);
		RuntimeObject ** L_3 = (RuntimeObject **)L_2->get_address_of__key_0();
		il2cpp_codegen_initobj(L_3, sizeof(RuntimeObject *));
		__this->set__head_1(L_2);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_4 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)__this->get__head_1();
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_5 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)__this->get__head_1();
		NullCheck(L_4);
		L_4->set__prev_1(L_5);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_6 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)__this->get__head_1();
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_7 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)__this->get__head_1();
		NullCheck(L_6);
		L_6->set__next_2(L_7);
		return;
	}
}
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node<TValue> UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1<System.Object>::Insert(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * Dict_1_Insert_m4CC965947B3B7E4E67F70BFDD7CB78493CCEB137_gshared (Dict_1_tDDB66EA04836CDF711BC4636526383454A9A3A5C * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_0 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)__this->get__head_1();
		RuntimeObject * L_1 = ___key0;
		NullCheck((Dict_1_tDDB66EA04836CDF711BC4636526383454A9A3A5C *)__this);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_2 = ((  Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * (*) (Dict_1_tDDB66EA04836CDF711BC4636526383454A9A3A5C *, Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dict_1_tDDB66EA04836CDF711BC4636526383454A9A3A5C *)__this, (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return L_2;
	}
}
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node<TValue> UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1<System.Object>::InsertBefore(UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node<TValue>,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * Dict_1_InsertBefore_m02D6895715E26F7CE3DA9E32C68D00AED166F5F4_gshared (Dict_1_tDDB66EA04836CDF711BC4636526383454A9A3A5C * __this, Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * ___node0, RuntimeObject * ___key1, const RuntimeMethod* method)
{
	Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * V_0 = NULL;

IL_0000:
	{
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_0 = ___node0;
		NullCheck(L_0);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_1 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)L_0->get__prev_1();
		___node0 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)L_1;
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_2 = ___node0;
		NullCheck(L_2);
		RuntimeObject * L_3 = (RuntimeObject *)L_2->get__key_0();
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 * L_4 = (LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 *)__this->get__leq_0();
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_5 = ___node0;
		NullCheck(L_5);
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get__key_0();
		RuntimeObject * L_7 = ___key1;
		NullCheck((LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 *)L_4);
		bool L_8 = ((  bool (*) (LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 *)L_4, (RuntimeObject *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0000;
		}
	}

IL_0029:
	{
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_9 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_10 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)L_9;
		RuntimeObject * L_11 = ___key1;
		NullCheck(L_10);
		L_10->set__key_0(L_11);
		V_0 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)L_10;
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_12 = V_0;
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_13 = ___node0;
		NullCheck(L_13);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_14 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)L_13->get__next_2();
		NullCheck(L_12);
		L_12->set__next_2(L_14);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_15 = ___node0;
		NullCheck(L_15);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_16 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)L_15->get__next_2();
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_17 = V_0;
		NullCheck(L_16);
		L_16->set__prev_1(L_17);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_18 = V_0;
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_19 = ___node0;
		NullCheck(L_18);
		L_18->set__prev_1(L_19);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_20 = ___node0;
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_21 = V_0;
		NullCheck(L_20);
		L_20->set__next_2(L_21);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node<TValue> UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1<System.Object>::Find(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * Dict_1_Find_mBA091B1F3B7CCDAFBB23DFB97957A89B3B0EAC66_gshared (Dict_1_tDDB66EA04836CDF711BC4636526383454A9A3A5C * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * V_0 = NULL;
	{
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_0 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)__this->get__head_1();
		V_0 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)L_0;
	}

IL_0007:
	{
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_1 = V_0;
		NullCheck(L_1);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_2 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)L_1->get__next_2();
		V_0 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)L_2;
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = (RuntimeObject *)L_3->get__key_0();
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 * L_5 = (LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 *)__this->get__leq_0();
		RuntimeObject * L_6 = ___key0;
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject * L_8 = (RuntimeObject *)L_7->get__key_0();
		NullCheck((LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 *)L_5);
		bool L_9 = ((  bool (*) (LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((LessOrEqual_t42A2EE886AB5773AC3E164528123275FAFB48E11 *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0007;
		}
	}

IL_002f:
	{
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node<TValue> UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1<System.Object>::Min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * Dict_1_Min_m6B5E4360DBBE55DE3EF37E0F11D10B7496C2AB50_gshared (Dict_1_tDDB66EA04836CDF711BC4636526383454A9A3A5C * __this, const RuntimeMethod* method)
{
	{
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_0 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)__this->get__head_1();
		NullCheck(L_0);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_1 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)L_0->get__next_2();
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1<System.Object>::Remove(UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.Dict`1_Node<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1_Remove_mC0EBC4CE12E5B8FC3E6045538D15BA049641ED0B_gshared (Dict_1_tDDB66EA04836CDF711BC4636526383454A9A3A5C * __this, Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * ___node0, const RuntimeMethod* method)
{
	{
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_0 = ___node0;
		NullCheck(L_0);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_1 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)L_0->get__next_2();
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_2 = ___node0;
		NullCheck(L_2);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_3 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)L_2->get__prev_1();
		NullCheck(L_1);
		L_1->set__prev_1(L_3);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_4 = ___node0;
		NullCheck(L_4);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_5 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)L_4->get__prev_1();
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_6 = ___node0;
		NullCheck(L_6);
		Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F * L_7 = (Node_tBFAD0819B3D6D7DA149CA6E5B05157CBC909709F *)L_6->get__next_2();
		NullCheck(L_5);
		L_5->set__next_2(L_7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.MeshUtils_Pooled`1<System.Object>::OnFree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pooled_1_OnFree_m4FACAFD9DA50B583B4663C7FC2010260F08191D3_gshared (Pooled_1_tC14B4141323B0122AC685687DF0EF9B0D85B7E1B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// T UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.MeshUtils_Pooled`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Pooled_1_Create_mC820CDF3E19D1E2D306095A3ADDE088BAE2ED5B4_gshared (const RuntimeMethod* method)
{
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = ((Pooled_1_tC14B4141323B0122AC685687DF0EF9B0D85B7E1B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get__stack_0();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_1 = ((Pooled_1_tC14B4141323B0122AC685687DF0EF9B0D85B7E1B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get__stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_1);
		int32_t L_2 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_3 = ((Pooled_1_tC14B4141323B0122AC685687DF0EF9B0D85B7E1B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get__stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_3);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_4;
	}

IL_001f:
	{
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}
}
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.MeshUtils_Pooled`1<System.Object>::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pooled_1_Free_m1371304D958C53DDFC58A3A960EF56B2250196BC_gshared (Pooled_1_tC14B4141323B0122AC685687DF0EF9B0D85B7E1B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Pooled_1_tC14B4141323B0122AC685687DF0EF9B0D85B7E1B *)__this);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.MeshUtils/Pooled`1<System.Object>::OnFree() */, (Pooled_1_tC14B4141323B0122AC685687DF0EF9B0D85B7E1B *)__this);
		NullCheck((Pooled_1_tC14B4141323B0122AC685687DF0EF9B0D85B7E1B *)__this);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.MeshUtils/Pooled`1<System.Object>::Reset() */, (Pooled_1_tC14B4141323B0122AC685687DF0EF9B0D85B7E1B *)__this);
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = ((Pooled_1_tC14B4141323B0122AC685687DF0EF9B0D85B7E1B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get__stack_0();
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_1 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6));
		((  void (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Pooled_1_tC14B4141323B0122AC685687DF0EF9B0D85B7E1B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->set__stack_0(L_1);
	}

IL_001d:
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_2 = ((Pooled_1_tC14B4141323B0122AC685687DF0EF9B0D85B7E1B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get__stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_2);
		((  void (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_2, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.MeshUtils_Pooled`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pooled_1__ctor_m8DB47BBCBE8803BA7D44D74B5FF6C37952392017_gshared (Pooled_1_tC14B4141323B0122AC685687DF0EF9B0D85B7E1B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1_HandleElem<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleElem__ctor_m802CB0BB411E2CC2C1363F562A371185EAE1C895_gshared (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1_LessOrEqual<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessOrEqual__ctor_m06DFA7B3CF65B8B309272A0C7E1BA6B3D51DD895_gshared (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1_LessOrEqual<System.Object>::Invoke(TValue,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LessOrEqual_Invoke_m58C8A6F76DD6849D739DA4E2B2D902F0434278E5_gshared (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * __this, RuntimeObject * ___lhs0, RuntimeObject * ___rhs1, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef bool (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___lhs0, ___rhs1, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___lhs0, ___rhs1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, ___lhs0, ___rhs1);
					else
						result = GenericVirtFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, ___lhs0, ___rhs1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___lhs0, ___rhs1);
					else
						result = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___lhs0, ___rhs1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___lhs0, ___rhs1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___lhs0, ___rhs1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___lhs0, ___rhs1);
					else
						result = GenericVirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___lhs0, ___rhs1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___lhs0, ___rhs1);
					else
						result = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___lhs0, ___rhs1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___lhs0, ___rhs1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1_LessOrEqual<System.Object>::BeginInvoke(TValue,TValue,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LessOrEqual_BeginInvoke_m1D8997BCF2407C9347C07CA50B6653ED239EE19B_gshared (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * __this, RuntimeObject * ___lhs0, RuntimeObject * ___rhs1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___lhs0;
	__d_args[1] = ___rhs1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Boolean UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1_LessOrEqual<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LessOrEqual_EndInvoke_m6B00B01410264DCDC6250E11CC860A78E6F3544A_gshared (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1<System.Object>::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PriorityHeap_1_get_Empty_mC128AF41F247CC0D0BA9FB6D4C26459AA48DAC91_gshared (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1<System.Object>::.ctor(System.Int32,UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1_LessOrEqual<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityHeap_1__ctor_m43963611951B4A116BEB41C701378289658523B4_gshared (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * __this, int32_t ___initialSize0, LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * ___leq1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PriorityHeap_1__ctor_m43963611951B4A116BEB41C701378289658523B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * L_0 = ___leq1;
		__this->set__leq_0(L_0);
		int32_t L_1 = ___initialSize0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		__this->set__nodes_1(L_2);
		int32_t L_3 = ___initialSize0;
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_4 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)(HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		__this->set__handles_2(L_4);
		__this->set__size_3(0);
		int32_t L_5 = ___initialSize0;
		__this->set__max_4(L_5);
		__this->set__freeList_5(0);
		__this->set__initialized_6((bool)0);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_6 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_7 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_8 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		((  void (*) (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_9 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)L_8;
		NullCheck(L_9);
		RuntimeObject ** L_10 = (RuntimeObject **)L_9->get_address_of__key_0();
		il2cpp_codegen_initobj(L_10, sizeof(RuntimeObject *));
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)L_9);
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1<System.Object>::FloatDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityHeap_1_FloatDown_mA3EBED2F4B6E48A1DD946CA8448E6AC93AE82C75_gshared (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * __this, int32_t ___curr0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		int32_t L_1 = ___curr0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = (int32_t)L_3;
	}

IL_0009:
	{
		int32_t L_4 = ___curr0;
		V_0 = (int32_t)((int32_t)((int32_t)L_4<<(int32_t)1));
		int32_t L_5 = V_0;
		int32_t L_6 = (int32_t)__this->get__size_3();
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0051;
		}
	}
	{
		LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * L_7 = (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)__this->get__leq_0();
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_8 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_9 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		int32_t L_13 = L_12;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_14 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		RuntimeObject * L_15 = (RuntimeObject *)L_14->get__key_0();
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_16 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_17 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		int32_t L_21 = L_20;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_22 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		RuntimeObject * L_23 = (RuntimeObject *)L_22->get__key_0();
		NullCheck((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_7);
		bool L_24 = ((  bool (*) (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_7, (RuntimeObject *)L_15, (RuntimeObject *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (!L_24)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_25 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0051:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_26 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_2 = (int32_t)L_29;
		int32_t L_30 = V_0;
		int32_t L_31 = (int32_t)__this->get__size_3();
		if ((((int32_t)L_30) > ((int32_t)L_31)))
		{
			goto IL_008a;
		}
	}
	{
		LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * L_32 = (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)__this->get__leq_0();
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_33 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_34 = V_1;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_36 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		RuntimeObject * L_37 = (RuntimeObject *)L_36->get__key_0();
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_38 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_39 = V_2;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_41 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		RuntimeObject * L_42 = (RuntimeObject *)L_41->get__key_0();
		NullCheck((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_32);
		bool L_43 = ((  bool (*) (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_32, (RuntimeObject *)L_37, (RuntimeObject *)L_42, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (!L_43)
		{
			goto IL_00a2;
		}
	}

IL_008a:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_44 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		int32_t L_45 = ___curr0;
		int32_t L_46 = V_1;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (int32_t)L_46);
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_47 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_48 = V_1;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_50 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		int32_t L_51 = ___curr0;
		NullCheck(L_50);
		L_50->set__node_1(L_51);
		return;
	}

IL_00a2:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_52 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		int32_t L_53 = ___curr0;
		int32_t L_54 = V_2;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (int32_t)L_54);
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_55 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_56 = V_2;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_58 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = ___curr0;
		NullCheck(L_58);
		L_58->set__node_1(L_59);
		int32_t L_60 = V_0;
		___curr0 = (int32_t)L_60;
		goto IL_0009;
	}
}
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1<System.Object>::FloatUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityHeap_1_FloatUp_mF5008D33ABD0A0E9BE335E1C05B9BA417B843A3B_gshared (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * __this, int32_t ___curr0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		int32_t L_1 = ___curr0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = (int32_t)L_3;
	}

IL_0009:
	{
		int32_t L_4 = ___curr0;
		V_0 = (int32_t)((int32_t)((int32_t)L_4>>(int32_t)1));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = (int32_t)L_8;
		int32_t L_9 = V_0;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * L_10 = (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)__this->get__leq_0();
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_11 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_14 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		RuntimeObject * L_15 = (RuntimeObject *)L_14->get__key_0();
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_16 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_19 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		RuntimeObject * L_20 = (RuntimeObject *)L_19->get__key_0();
		NullCheck((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_10);
		bool L_21 = ((  bool (*) (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_10, (RuntimeObject *)L_15, (RuntimeObject *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (!L_21)
		{
			goto IL_0058;
		}
	}

IL_0040:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_22 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		int32_t L_23 = ___curr0;
		int32_t L_24 = V_1;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)L_24);
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_25 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_28 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = ___curr0;
		NullCheck(L_28);
		L_28->set__node_1(L_29);
		return;
	}

IL_0058:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_30 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		int32_t L_31 = ___curr0;
		int32_t L_32 = V_2;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)L_32);
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_33 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_34 = V_2;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_36 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		int32_t L_37 = ___curr0;
		NullCheck(L_36);
		L_36->set__node_1(L_37);
		int32_t L_38 = V_0;
		___curr0 = (int32_t)L_38;
		goto IL_0009;
	}
}
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityHeap_1_Init_m2EE0E628506CB7C6A086A9E360805CEF038E5BFD_gshared (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		V_0 = (int32_t)L_0;
		goto IL_0014;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		NullCheck((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this);
		((  void (*) (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		int32_t L_2 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		__this->set__initialized_6((bool)1);
		return;
	}
}
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PQHandle UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1<System.Object>::Insert(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59  PriorityHeap_1_Insert_mDCFADA59582FB3D67DBE88100953EE2F25BD64A9_gshared (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PriorityHeap_1_Insert_mDCFADA59582FB3D67DBE88100953EE2F25BD64A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_2;
		__this->set__size_3(L_1);
		int32_t L_2 = V_2;
		V_0 = (int32_t)L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = (int32_t)__this->get__max_4();
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)2))) <= ((int32_t)L_4)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_5 = (int32_t)__this->get__max_4();
		__this->set__max_4(((int32_t)((int32_t)L_5<<(int32_t)1)));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** L_6 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83**)__this->get_address_of__nodes_1();
		int32_t L_7 = (int32_t)__this->get__max_4();
		Array_Resize_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mD59C24D29FAE8D7519D23F47DFFD8EBEE0F3F675((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83**)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83**)L_6, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), /*hidden argument*/Array_Resize_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mD59C24D29FAE8D7519D23F47DFFD8EBEE0F3F675_RuntimeMethod_var);
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78** L_8 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78**)__this->get_address_of__handles_2();
		int32_t L_9 = (int32_t)__this->get__max_4();
		((  void (*) (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78**)(HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78**)L_8, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
	}

IL_0051:
	{
		int32_t L_10 = (int32_t)__this->get__freeList_5();
		if (L_10)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_11 = V_0;
		V_1 = (int32_t)L_11;
		goto IL_0077;
	}

IL_005d:
	{
		int32_t L_12 = (int32_t)__this->get__freeList_5();
		V_1 = (int32_t)L_12;
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_13 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_16 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		int32_t L_17 = (int32_t)L_16->get__node_1();
		__this->set__freeList_5(L_17);
	}

IL_0077:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_18 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)L_20);
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_21 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_24 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if (L_24)
		{
			goto IL_00a7;
		}
	}
	{
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_25 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_26 = V_1;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_27 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		((  void (*) (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(L_27, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_28 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)L_27;
		RuntimeObject * L_29 = ___value0;
		NullCheck(L_28);
		L_28->set__key_0(L_29);
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_30 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)L_28;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		L_30->set__node_1(L_31);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_30);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)L_30);
		goto IL_00c3;
	}

IL_00a7:
	{
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_32 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_33 = V_1;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_35 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		int32_t L_36 = V_0;
		NullCheck(L_35);
		L_35->set__node_1(L_36);
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_37 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_40 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		RuntimeObject * L_41 = ___value0;
		NullCheck(L_40);
		L_40->set__key_0(L_41);
	}

IL_00c3:
	{
		bool L_42 = (bool)__this->get__initialized_6();
		if (!L_42)
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_43 = V_0;
		NullCheck((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this);
		((  void (*) (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this, (int32_t)L_43, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_00d2:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59 ));
		int32_t L_44 = V_1;
		(&V_3)->set__handle_1(L_44);
		PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59  L_45 = V_3;
		return L_45;
	}
}
// TValue UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1<System.Object>::ExtractMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PriorityHeap_1_ExtractMin_m1EF2D9EA3994DC1EFAC2F7D0C58A8E27EED25841_gshared (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject * G_B3_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	RuntimeObject * G_B2_0 = NULL;
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		NullCheck(L_0);
		int32_t L_1 = 1;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = (int32_t)L_2;
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_3 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_6 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		RuntimeObject * L_7 = (RuntimeObject *)L_6->get__key_0();
		int32_t L_8 = (int32_t)__this->get__size_3();
		G_B1_0 = L_7;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			G_B3_0 = L_7;
			goto IL_0091;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_9 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_10 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		int32_t L_11 = (int32_t)__this->get__size_3();
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_13);
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_14 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_15 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		NullCheck(L_15);
		int32_t L_16 = 1;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_14);
		int32_t L_18 = L_17;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_19 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		L_19->set__node_1(1);
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_20 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_23 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		RuntimeObject ** L_24 = (RuntimeObject **)L_23->get_address_of__key_0();
		il2cpp_codegen_initobj(L_24, sizeof(RuntimeObject *));
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_25 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_28 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = (int32_t)__this->get__freeList_5();
		NullCheck(L_28);
		L_28->set__node_1(L_29);
		int32_t L_30 = V_0;
		__this->set__freeList_5(L_30);
		int32_t L_31 = (int32_t)__this->get__size_3();
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
		int32_t L_32 = V_1;
		__this->set__size_3(L_32);
		int32_t L_33 = V_1;
		G_B2_0 = G_B1_0;
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			G_B3_0 = G_B1_0;
			goto IL_0091;
		}
	}
	{
		NullCheck((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this);
		((  void (*) (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		G_B3_0 = G_B2_0;
	}

IL_0091:
	{
		return G_B3_0;
	}
}
// TValue UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1<System.Object>::Minimum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PriorityHeap_1_Minimum_mC49AD33FE0566C032B0FFA6A99AEB222447FE9A7_gshared (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * __this, const RuntimeMethod* method)
{
	{
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_0 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		NullCheck(L_1);
		int32_t L_2 = 1;
		int32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		int32_t L_4 = L_3;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_5 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get__key_0();
		return L_6;
	}
}
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1<System.Object>::Remove(UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PQHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityHeap_1_Remove_m67451906B193A62E8F6022D11F67BA269F9354BD_gshared (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * __this, PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59  ___handle0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59  L_0 = ___handle0;
		int32_t L_1 = (int32_t)L_0.get__handle_1();
		V_0 = (int32_t)L_1;
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_2 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_5 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		int32_t L_6 = (int32_t)L_5->get__node_1();
		V_1 = (int32_t)L_6;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		int32_t L_8 = V_1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_9 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		int32_t L_10 = (int32_t)__this->get__size_3();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_12);
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_13 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_14 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		int32_t L_18 = L_17;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_19 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = V_1;
		NullCheck(L_19);
		L_19->set__node_1(L_20);
		int32_t L_21 = V_1;
		int32_t L_22 = (int32_t)__this->get__size_3();
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1));
		int32_t L_23 = V_2;
		__this->set__size_3(L_23);
		int32_t L_24 = V_2;
		if ((((int32_t)L_21) > ((int32_t)L_24)))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) <= ((int32_t)1)))
		{
			goto IL_008e;
		}
	}
	{
		LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * L_26 = (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)__this->get__leq_0();
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_27 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_28 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		int32_t L_29 = V_1;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)((int32_t)L_29>>(int32_t)1));
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_27);
		int32_t L_32 = L_31;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_33 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		RuntimeObject * L_34 = (RuntimeObject *)L_33->get__key_0();
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_35 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_36 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__nodes_1();
		int32_t L_37 = V_1;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_35);
		int32_t L_40 = L_39;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_41 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		RuntimeObject * L_42 = (RuntimeObject *)L_41->get__key_0();
		NullCheck((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_26);
		bool L_43 = ((  bool (*) (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_26, (RuntimeObject *)L_34, (RuntimeObject *)L_42, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (!L_43)
		{
			goto IL_0097;
		}
	}

IL_008e:
	{
		int32_t L_44 = V_1;
		NullCheck((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this);
		((  void (*) (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this, (int32_t)L_44, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		goto IL_009e;
	}

IL_0097:
	{
		int32_t L_45 = V_1;
		NullCheck((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this);
		((  void (*) (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this, (int32_t)L_45, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_009e:
	{
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_46 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_49 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		RuntimeObject ** L_50 = (RuntimeObject **)L_49->get_address_of__key_0();
		il2cpp_codegen_initobj(L_50, sizeof(RuntimeObject *));
		HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78* L_51 = (HandleElemU5BU5D_tC16EA6F0A28504A184ABA56FAB6C6E4928975D78*)__this->get__handles_2();
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F * L_54 = (HandleElem_t601BA6C7330D0A87BF9AB4054920CE64C0E2374F *)(L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		int32_t L_55 = (int32_t)__this->get__freeList_5();
		NullCheck(L_54);
		L_54->set__node_1(L_55);
		int32_t L_56 = V_0;
		__this->set__freeList_5(L_56);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1_StackItem<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackItem__ctor_mECEAAE00C0F90D666DB8C95A594DC6F20F3F5E98_gshared (StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1<System.Object>::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PriorityQueue_1_get_Empty_m14C729FB1951310F236CA0CEF0484EF3A8C1C2B7_gshared (PriorityQueue_1_t59DA18809275FC049FDC4BF4270CCA71DFA06D54 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_4();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * L_1 = (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this->get__heap_1();
		NullCheck((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_1);
		bool L_2 = ((  bool (*) (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1<System.Object>::.ctor(System.Int32,UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityHeap`1_LessOrEqual<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1__ctor_m8CDC926457A5CBBB23E288C68DC64323686BA3F3_gshared (PriorityQueue_1_t59DA18809275FC049FDC4BF4270CCA71DFA06D54 * __this, int32_t ___initialSize0, LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * ___leq1, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * L_0 = ___leq1;
		__this->set__leq_0(L_0);
		int32_t L_1 = ___initialSize0;
		LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * L_2 = ___leq1;
		PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * L_3 = (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		((  void (*) (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *, int32_t, LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(L_3, (int32_t)L_1, (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		__this->set__heap_1(L_3);
		int32_t L_4 = ___initialSize0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), (uint32_t)L_4);
		__this->set__keys_2(L_5);
		__this->set__size_4(0);
		int32_t L_6 = ___initialSize0;
		__this->set__max_5(L_6);
		__this->set__initialized_6((bool)0);
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1<System.Object>::Swap(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Swap_m94A397F6DA06A72988AC8BEC76AA0A6F93ED2F7C_gshared (int32_t* ___a0, int32_t* ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___a0;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t* L_2 = ___a0;
		int32_t* L_3 = ___b1;
		int32_t L_4 = *((int32_t*)L_3);
		*((int32_t*)L_2) = (int32_t)L_4;
		int32_t* L_5 = ___b1;
		int32_t L_6 = V_0;
		*((int32_t*)L_5) = (int32_t)L_6;
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Init_m72FA1C41069E6F59F06B1C19BD013242D2AB9642_gshared (PriorityQueue_1_t59DA18809275FC049FDC4BF4270CCA71DFA06D54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PriorityQueue_1_Init_m72FA1C41069E6F59F06B1C19BD013242D2AB9642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	{
		Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 * L_0 = (Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *)L_0;
		V_6 = (uint32_t)((int32_t)2016473283);
		V_1 = (int32_t)0;
		int32_t L_1 = (int32_t)__this->get__size_4();
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		int32_t L_2 = (int32_t)__this->get__size_4();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		__this->set__order_3(L_3);
		V_5 = (int32_t)0;
		int32_t L_4 = V_1;
		V_3 = (int32_t)L_4;
		goto IL_0046;
	}

IL_0032:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_6 = V_3;
		int32_t L_7 = V_5;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_7);
		int32_t L_8 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		int32_t L_9 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0046:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_0032;
		}
	}
	{
		Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 * L_12 = V_0;
		StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 * L_13 = (StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6));
		((  void (*) (StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 * L_14 = (StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *)L_13;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		L_14->set_p_0(L_15);
		StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 * L_16 = (StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *)L_14;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		L_16->set_r_1(L_17);
		NullCheck((Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *)L_12);
		((  void (*) (Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *, StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *)L_12, (StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		goto IL_023c;
	}

IL_0068:
	{
		Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 * L_18 = V_0;
		NullCheck((Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *)L_18);
		StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 * L_19 = ((  StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 * (*) (Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 * L_20 = (StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *)L_19;
		NullCheck(L_20);
		int32_t L_21 = (int32_t)L_20->get_p_0();
		V_1 = (int32_t)L_21;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)L_20->get_r_1();
		V_2 = (int32_t)L_22;
		goto IL_01bb;
	}

IL_0080:
	{
		uint32_t L_23 = V_6;
		V_6 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)((int32_t)1539415821))), (int32_t)1));
		int32_t L_24 = V_1;
		uint32_t L_25 = V_6;
		int32_t L_26 = V_2;
		int32_t L_27 = V_1;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)(((int32_t)((int32_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_25)))%(int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_27)), (int32_t)1))))))))))));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_28 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_5 = (int32_t)L_31;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_32 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_33 = V_3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_34 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_35 = V_1;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)L_37);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_38 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_39 = V_1;
		int32_t L_40 = V_5;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (int32_t)L_40);
		int32_t L_41 = V_1;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1));
		int32_t L_42 = V_2;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00c7:
	{
		int32_t L_43 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * L_44 = (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)__this->get__leq_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_45 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__keys_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_46 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_47 = V_3;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_45);
		int32_t L_50 = L_49;
		RuntimeObject * L_51 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_52 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__keys_2();
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		RuntimeObject * L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_44);
		bool L_56 = ((  bool (*) (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_44, (RuntimeObject *)L_51, (RuntimeObject *)L_55, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		if (!L_56)
		{
			goto IL_00c7;
		}
	}

IL_00f8:
	{
		int32_t L_57 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1));
		LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * L_58 = (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)__this->get__leq_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_59 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__keys_2();
		int32_t L_60 = V_5;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		RuntimeObject * L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_63 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__keys_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_64 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_65 = V_4;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_63);
		int32_t L_68 = L_67;
		RuntimeObject * L_69 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_58);
		bool L_70 = ((  bool (*) (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_58, (RuntimeObject *)L_62, (RuntimeObject *)L_69, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		if (!L_70)
		{
			goto IL_00f8;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_71 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_72 = V_3;
		NullCheck(L_71);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_73 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_74 = V_4;
		NullCheck(L_73);
		((  void (*) (int32_t*, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((int32_t*)(int32_t*)((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_72))), (int32_t*)(int32_t*)((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_77 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_78 = V_3;
		NullCheck(L_77);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_79 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_80 = V_4;
		NullCheck(L_79);
		((  void (*) (int32_t*, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((int32_t*)(int32_t*)((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_78))), (int32_t*)(int32_t*)((L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_80))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		int32_t L_81 = V_3;
		int32_t L_82 = V_1;
		int32_t L_83 = V_2;
		int32_t L_84 = V_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)L_82))) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)L_84)))))
		{
			goto IL_019b;
		}
	}
	{
		Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 * L_85 = V_0;
		StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 * L_86 = (StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6));
		((  void (*) (StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(L_86, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 * L_87 = (StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *)L_86;
		int32_t L_88 = V_4;
		NullCheck(L_87);
		L_87->set_p_0(((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1)));
		StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 * L_89 = (StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *)L_87;
		int32_t L_90 = V_2;
		NullCheck(L_89);
		L_89->set_r_1(L_90);
		NullCheck((Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *)L_85);
		((  void (*) (Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *, StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *)L_85, (StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *)L_89, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		int32_t L_91 = V_3;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_91, (int32_t)1));
		goto IL_01bb;
	}

IL_019b:
	{
		Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 * L_92 = V_0;
		StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 * L_93 = (StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6));
		((  void (*) (StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(L_93, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 * L_94 = (StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *)L_93;
		int32_t L_95 = V_1;
		NullCheck(L_94);
		L_94->set_p_0(L_95);
		StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 * L_96 = (StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *)L_94;
		int32_t L_97 = V_3;
		NullCheck(L_96);
		L_96->set_r_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_97, (int32_t)1)));
		NullCheck((Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *)L_92);
		((  void (*) (Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *, StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *)L_92, (StackItem_tFF23A0E09B68E9CBF43F270E373A75B6F5B4C352 *)L_96, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		int32_t L_98 = V_4;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
	}

IL_01bb:
	{
		int32_t L_99 = V_2;
		int32_t L_100 = V_1;
		if ((((int32_t)L_99) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)((int32_t)10))))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_101 = V_1;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1));
		goto IL_0238;
	}

IL_01cb:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_102 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_103 = V_3;
		NullCheck(L_102);
		int32_t L_104 = L_103;
		int32_t L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		V_5 = (int32_t)L_105;
		int32_t L_106 = V_3;
		V_4 = (int32_t)L_106;
		goto IL_01f4;
	}

IL_01da:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_107 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_108 = V_4;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_109 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_110 = V_4;
		NullCheck(L_109);
		int32_t L_111 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_110, (int32_t)1));
		int32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(L_108), (int32_t)L_112);
		int32_t L_113 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_113, (int32_t)1));
	}

IL_01f4:
	{
		int32_t L_114 = V_4;
		int32_t L_115 = V_1;
		if ((((int32_t)L_114) <= ((int32_t)L_115)))
		{
			goto IL_0229;
		}
	}
	{
		LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * L_116 = (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)__this->get__leq_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_117 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__keys_2();
		int32_t L_118 = V_5;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		RuntimeObject * L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_121 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__keys_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_122 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_123 = V_4;
		NullCheck(L_122);
		int32_t L_124 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_123, (int32_t)1));
		int32_t L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		NullCheck(L_121);
		int32_t L_126 = L_125;
		RuntimeObject * L_127 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		NullCheck((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_116);
		bool L_128 = ((  bool (*) (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_116, (RuntimeObject *)L_120, (RuntimeObject *)L_127, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		if (!L_128)
		{
			goto IL_01da;
		}
	}

IL_0229:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_129 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_130 = V_4;
		int32_t L_131 = V_5;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(L_130), (int32_t)L_131);
		int32_t L_132 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)1));
	}

IL_0238:
	{
		int32_t L_133 = V_3;
		int32_t L_134 = V_2;
		if ((((int32_t)L_133) <= ((int32_t)L_134)))
		{
			goto IL_01cb;
		}
	}

IL_023c:
	{
		Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 * L_135 = V_0;
		NullCheck((Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *)L_135);
		int32_t L_136 = ((  int32_t (*) (Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((Stack_1_t8DBABEA6B99E1AF746AFCD04264C581D3A08E212 *)L_135, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		if ((((int32_t)L_136) > ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_137 = (int32_t)__this->get__size_4();
		__this->set__max_5(L_137);
		__this->set__initialized_6((bool)1);
		PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * L_138 = (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this->get__heap_1();
		NullCheck((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_138);
		((  void (*) (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_138, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return;
	}
}
// UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PQHandle UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1<System.Object>::Insert(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59  PriorityQueue_1_Insert_m99CA4559D65FD8011638B02322D0AF56D4348970_gshared (PriorityQueue_1_t59DA18809275FC049FDC4BF4270CCA71DFA06D54 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		bool L_0 = (bool)__this->get__initialized_6();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * L_1 = (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this->get__heap_1();
		RuntimeObject * L_2 = ___value0;
		NullCheck((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_1);
		PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59  L_3 = ((  PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59  (*) (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return L_3;
	}

IL_0015:
	{
		int32_t L_4 = (int32_t)__this->get__size_4();
		V_0 = (int32_t)L_4;
		int32_t L_5 = (int32_t)__this->get__size_4();
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_6 = V_1;
		__this->set__size_4(L_6);
		int32_t L_7 = V_1;
		int32_t L_8 = (int32_t)__this->get__max_5();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_9 = (int32_t)__this->get__max_5();
		__this->set__max_5(((int32_t)((int32_t)L_9<<(int32_t)1)));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)__this->get_address_of__keys_2();
		int32_t L_11 = (int32_t)__this->get__max_5();
		((  void (*) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
	}

IL_0054:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__keys_2();
		int32_t L_13 = V_0;
		RuntimeObject * L_14 = ___value0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (RuntimeObject *)L_14);
		il2cpp_codegen_initobj((&V_2), sizeof(PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59 ));
		int32_t L_15 = V_0;
		(&V_2)->set__handle_1(((-((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)))));
		PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59  L_16 = V_2;
		return L_16;
	}
}
// TValue UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1<System.Object>::ExtractMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PriorityQueue_1_ExtractMin_m71F9E90CB83DC86C2848737977A7C1EECB6D58FD_gshared (PriorityQueue_1_t59DA18809275FC049FDC4BF4270CCA71DFA06D54 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get__size_4();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * L_1 = (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this->get__heap_1();
		NullCheck((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_1);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		return L_2;
	}

IL_0014:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__keys_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_5 = (int32_t)__this->get__size_4();
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = (RuntimeObject *)L_9;
		PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * L_10 = (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this->get__heap_1();
		NullCheck((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_10);
		bool L_11 = ((  bool (*) (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (L_11)
		{
			goto IL_0063;
		}
	}
	{
		PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * L_12 = (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this->get__heap_1();
		NullCheck((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_12);
		RuntimeObject * L_13 = ((  RuntimeObject * (*) (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		V_1 = (RuntimeObject *)L_13;
		LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * L_14 = (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)__this->get__leq_0();
		RuntimeObject * L_15 = V_1;
		RuntimeObject * L_16 = V_0;
		NullCheck((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_14);
		bool L_17 = ((  bool (*) (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		if (!L_17)
		{
			goto IL_0063;
		}
	}
	{
		PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * L_18 = (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this->get__heap_1();
		NullCheck((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_18);
		RuntimeObject * L_19 = ((  RuntimeObject * (*) (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		return L_19;
	}

IL_0063:
	{
		int32_t L_20 = (int32_t)__this->get__size_4();
		__this->set__size_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)));
		int32_t L_21 = (int32_t)__this->get__size_4();
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_009b;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__keys_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_23 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_24 = (int32_t)__this->get__size_4();
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_22);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if (!L_28)
		{
			goto IL_0063;
		}
	}

IL_009b:
	{
		RuntimeObject * L_29 = V_0;
		return L_29;
	}
}
// TValue UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1<System.Object>::Minimum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PriorityQueue_1_Minimum_mB5152CE46F4E9339E35B25B40961BC54DAF5688F_gshared (PriorityQueue_1_t59DA18809275FC049FDC4BF4270CCA71DFA06D54 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get__size_4();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * L_1 = (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this->get__heap_1();
		NullCheck((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_1);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		return L_2;
	}

IL_0014:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__keys_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_5 = (int32_t)__this->get__size_4();
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = (RuntimeObject *)L_9;
		PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * L_10 = (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this->get__heap_1();
		NullCheck((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_10);
		bool L_11 = ((  bool (*) (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (L_11)
		{
			goto IL_0059;
		}
	}
	{
		PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * L_12 = (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this->get__heap_1();
		NullCheck((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_12);
		RuntimeObject * L_13 = ((  RuntimeObject * (*) (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		V_1 = (RuntimeObject *)L_13;
		LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC * L_14 = (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)__this->get__leq_0();
		RuntimeObject * L_15 = V_1;
		RuntimeObject * L_16 = V_0;
		NullCheck((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_14);
		bool L_17 = ((  bool (*) (LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((LessOrEqual_t30158B4442BE9337A72D3933CD893DE8D3560DFC *)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		RuntimeObject * L_18 = V_1;
		return L_18;
	}

IL_0059:
	{
		RuntimeObject * L_19 = V_0;
		return L_19;
	}
}
// System.Void UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PriorityQueue`1<System.Object>::Remove(UnityEngine.Experimental.Rendering.LWRP.LibTessDotNet.PQHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Remove_m67C93B28E1C6735B63B9A38264E4D87E8439B08D_gshared (PriorityQueue_1_t59DA18809275FC049FDC4BF4270CCA71DFA06D54 * __this, PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59  ___handle0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59  L_0 = ___handle0;
		int32_t L_1 = (int32_t)L_0.get__handle_1();
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E * L_3 = (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)__this->get__heap_1();
		PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59  L_4 = ___handle0;
		NullCheck((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_3);
		((  void (*) (PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *, PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20)->methodPointer)((PriorityHeap_1_tE6A7617616F892070802BCFE02CAC92CE97BCB0E *)L_3, (PQHandle_tB88C361E52D36B9C6944B0156660D2C7641B5E59 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
		return;
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		V_0 = (int32_t)((-((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1))));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__keys_2();
		int32_t L_7 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_8 = V_1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject *)L_8);
		goto IL_0042;
	}

IL_0034:
	{
		int32_t L_9 = (int32_t)__this->get__size_4();
		__this->set__size_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)));
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get__size_4();
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__keys_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_12 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__order_3();
		int32_t L_13 = (int32_t)__this->get__size_4();
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if (!L_17)
		{
			goto IL_0034;
		}
	}

IL_006c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystemDescriptor_1__ctor_m75D74928A8F28189212EBEF7C8C2142D5D4B66B8_gshared (IntegratedSubsystemDescriptor_1_t2426B50A97CC5BA8E2BFE696F2EA1DDFC2174909 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812 *)__this);
		IntegratedSubsystemDescriptor__ctor_mBA91F292CA7A9147075DC6D2B09D0843E282FC21((IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812 *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.IntegratedSubsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_1__ctor_mC4C6EE53C266D629703900C2FBA31C7BC93732F5_gshared (IntegratedSubsystem_1_t2DE7C58DE8F60DCFD451AAFB0B75E6B1BF94C134 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E *)__this);
		IntegratedSubsystem__ctor_mAA7E5AA42CAE2649706D44E0D990545F29B96310((IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Rendering.ObjectPool`1<System.Object>::get_countAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countAll_mFAC4F9D1D8A698FF673427C2A6AF18AD64B9F12E_gshared (ObjectPool_1_tD00BD96AEC2DCAA7B958359A0C2F9A1C5A1E1C4D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CcountAllU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.ObjectPool`1<System.Object>::set_countAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_set_countAll_m7EC6A2001F4AE707968D023C43D1F856557201F9_gshared (ObjectPool_1_tD00BD96AEC2DCAA7B958359A0C2F9A1C5A1E1C4D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcountAllU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m61AF267F621F13579F49108724E913BC0F608807_gshared (ObjectPool_1_tD00BD96AEC2DCAA7B958359A0C2F9A1C5A1E1C4D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnGet0, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnRelease1, const RuntimeMethod* method)
{
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Stack_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = ___actionOnGet0;
		__this->set_m_ActionOnGet_1(L_1);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = ___actionOnRelease1;
		__this->set_m_ActionOnRelease_2(L_2);
		return;
	}
}
// T UnityEngine.Rendering.ObjectPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_m6F94FE1F5034B93552265803D4694D5954849319_gshared (ObjectPool_1_tD00BD96AEC2DCAA7B958359A0C2F9A1C5A1E1C4D * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (RuntimeObject *)L_2;
		NullCheck((ObjectPool_1_tD00BD96AEC2DCAA7B958359A0C2F9A1C5A1E1C4D *)__this);
		int32_t L_3 = ((  int32_t (*) (ObjectPool_1_tD00BD96AEC2DCAA7B958359A0C2F9A1C5A1E1C4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ObjectPool_1_tD00BD96AEC2DCAA7B958359A0C2F9A1C5A1E1C4D *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_1;
		NullCheck((ObjectPool_1_tD00BD96AEC2DCAA7B958359A0C2F9A1C5A1E1C4D *)__this);
		((  void (*) (ObjectPool_1_tD00BD96AEC2DCAA7B958359A0C2F9A1C5A1E1C4D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ObjectPool_1_tD00BD96AEC2DCAA7B958359A0C2F9A1C5A1E1C4D *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		goto IL_0031;
	}

IL_0025:
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_5 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_5);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		V_0 = (RuntimeObject *)L_6;
	}

IL_0031:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnGet_1();
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_8 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnGet_1();
		RuntimeObject * L_9 = V_0;
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
	}

IL_0045:
	{
		RuntimeObject * L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.Rendering.ObjectPool`1<System.Object>::Release(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m3687E92ED4AA2C0AFBA48D63C46C667AFF1ED5B6_gshared (ObjectPool_1_tD00BD96AEC2DCAA7B958359A0C2F9A1C5A1E1C4D * __this, RuntimeObject * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_m3687E92ED4AA2C0AFBA48D63C46C667AFF1ED5B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_2 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		RuntimeObject * L_4 = ___element0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_3) == ((RuntimeObject*)(RuntimeObject *)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC, /*hidden argument*/NULL);
	}

IL_0030:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_5 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnRelease_2();
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnRelease_2();
		RuntimeObject * L_7 = ___element0;
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
	}

IL_0044:
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_8 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		RuntimeObject * L_9 = ___element0;
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_8);
		((  void (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mAA346EC004EB953B23D401F904E1DCD1F8A95E1C_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		NullCheck((ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *)__this);
		((  void (*) (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *, bool, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *)__this, (bool)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mB0A7025F06D521DEB8121B1D4FD220045FD86BEA_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		NullCheck((ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *)__this);
		((  void (*) (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *, bool, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *)__this, (bool)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mE15DED1F238A0659C132DC0ACC73551693DEF1EE_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * __this, bool ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this);
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		bool L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m02C13B6B828EC708D614DE705E9F91F9405F5238_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		bool L_1 = ((  bool (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2);
		bool L_3 = ((  bool (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *)__this);
		VirtActionInvoker3< bool, bool, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::Interp(T,T,System.Single) */, (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *)__this, (bool)L_1, (bool)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m59B8F7EBE8A8DDD4A84614A2DAEE476123FC5C5A_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * __this, bool ___from0, bool ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * G_B2_0 = NULL;
	ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * G_B1_0 = NULL;
	bool G_B3_0 = false;
	ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *)(__this));
			goto IL_000c;
		}
	}
	{
		bool L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		bool L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m4C57ADC19DA020AD10665020EE6EF7B9240729D1_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * __this, bool ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		bool L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m96E4B4EB713B522F5DA852C117406975FCEC9D65_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		bool L_1 = ((  bool (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::GetHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_mD0FC7126DA202593B67D437DD0C7027CE94E0F67_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		bool* L_2 = (bool*)__this->get_address_of_value_1();
		int32_t L_3 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_3));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterOverride_1_op_Implicit_m1269D07F55F12D0915DD698417D9958DE10AFA21_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * L_0 = ___prop0;
		NullCheck(L_0);
		bool L_1 = (bool)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m8E047C5B80F13D2E54ACA4935DBB59B585ACC107_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		NullCheck((ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *)__this);
		((  void (*) (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m2CF1B0C43A06FE0CD2F7F69D8518EFA991CD2C93_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		NullCheck((ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *)__this);
		((  void (*) (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mB65A414F7B3CA9558B9BF10DED47DE3CA1A8DE49_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * __this, int32_t ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this);
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m81F4AE487590BA9AE699DA1034633F94F3257174_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2);
		int32_t L_3 = ((  int32_t (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *)__this);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::Interp(T,T,System.Single) */, (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *)__this, (int32_t)L_1, (int32_t)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m66534A9EA7E5D3CE81A4432B4236430668F6DCC9_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * __this, int32_t ___from0, int32_t ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * G_B2_0 = NULL;
	ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *)(__this));
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		int32_t L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m0A62741580F6CEE167988B0B252A928561A6B679_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		int32_t L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m676825DF9C6F48119C83EBC361B48C3316B39346_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::GetHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m2A973317E9D8DF4F153D436BBF1293236F1BBB29_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		int32_t* L_2 = (int32_t*)__this->get_address_of_value_1();
		int32_t L_3 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(int32_t*)L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_3));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_op_Implicit_m7E2967C6BB9316039A80BDDE7ED48436F5A7D2CA_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * L_0 = ___prop0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m16A64756F4E1854F9ED4CDC64030FC1090168227_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		NullCheck((ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *)__this);
		((  void (*) (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m4B3427E32572FB74B20CADE488A9BE187DF8C1C1_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		NullCheck((ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *)__this);
		((  void (*) (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m9FCE9F943178F50D3BA6AD6306093AC892D2AD6C_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * __this, int32_t ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this);
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m79F2C2119345B7A4BA49BAF57D4BACDB5CEA6F2E_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2);
		int32_t L_3 = ((  int32_t (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *)__this);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::Interp(T,T,System.Single) */, (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *)__this, (int32_t)L_1, (int32_t)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m83C31D5ABE907A59CF7B2CCBD75712B88508ECCA_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * __this, int32_t ___from0, int32_t ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * G_B2_0 = NULL;
	ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *)(__this));
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		int32_t L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m61C46CCB244EA41F308166A0A737A36C2B63293F_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		int32_t L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m324FEBBF43CC3D9536ABAFB69B5E7B0E23A4F7CE_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::GetHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_mA2CB37B92AC94BA586CD5B2C927E76D68190FDA4_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		int32_t* L_2 = (int32_t*)__this->get_address_of_value_1();
		Il2CppFakeBox<int32_t> L_3(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), L_2);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(&L_3));
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_4));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_op_Implicit_mD4EA59DC6E07A72F8237455B78B9E10BC0BDE6DD_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * L_0 = ___prop0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mAE41CCE5AD56DD153CD6736D273FF31CD5CEB91C_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_0 = V_0;
		NullCheck((ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *)__this);
		((  void (*) (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *)__this, (RuntimeObject *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mF41BA475111965CFD64598F3CC08841974EA45B5_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		NullCheck((ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *)__this);
		((  void (*) (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *)__this, (RuntimeObject *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mB783969AB2631B0ACA42E70FFEC983BF6D3C16A3_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * __this, RuntimeObject * ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this);
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m3552435CAB29115A327A8B38BD94B390943F2EE1_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *)__this);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::Interp(T,T,System.Single) */, (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *)__this, (RuntimeObject *)L_1, (RuntimeObject *)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_mD17579C3EC593D9C2FD25F552393347469476115_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * __this, RuntimeObject * ___from0, RuntimeObject * ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * G_B2_0 = NULL;
	ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * G_B1_0 = NULL;
	RuntimeObject * G_B3_0 = NULL;
	ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *)(__this));
			goto IL_000c;
		}
	}
	{
		RuntimeObject * L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		RuntimeObject * L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m13A07BF1A7E39EAD38DD9823CE7372A5FF5648B3_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * __this, RuntimeObject * ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		RuntimeObject * L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m6AFC66A7560BC2326FBDAF67233E33D67B022688_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::GetHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m845A37FC5E34DEB2F3195AAEDD6C489DF2DE8DB8_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		RuntimeObject ** L_2 = (RuntimeObject **)__this->get_address_of_value_1();
		NullCheck((RuntimeObject *)(*L_2));
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*L_2));
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_3));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ParameterOverride_1_op_Implicit_m9A02D2527CB4A9047399A7358633FB9478B48E04_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * L_0 = ___prop0;
		NullCheck(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m6C1FFA885D90B7708A867B296A7C39978AEEEBD5_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_0 = V_0;
		NullCheck((ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *)__this);
		((  void (*) (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *, float, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *)__this, (float)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m4F30F9846612DD6A9D5ECAB22C9FE045907B5E0C_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		NullCheck((ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *)__this);
		((  void (*) (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *, float, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *)__this, (float)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m0B958EA3CBB3175BFD89CC3F634E4E67DC81D5AF_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * __this, float ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this);
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		float L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m49EB00104BBE9395BB42026DB32853F1C6C0BA24_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		float L_1 = ((  float (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2);
		float L_3 = ((  float (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *)__this);
		VirtActionInvoker3< float, float, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::Interp(T,T,System.Single) */, (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *)__this, (float)L_1, (float)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_mE696D86FF50566CD687ECCC3ACF6BACC586C6A38_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * __this, float ___from0, float ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * G_B2_0 = NULL;
	ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *)(__this));
			goto IL_000c;
		}
	}
	{
		float L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		float L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m08BA419802CB4AB9C75A2C500F0CA8210A0A53D0_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * __this, float ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		float L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_mDDE042AD314273B20C25FC851968E407509E9140_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		float L_1 = ((  float (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::GetHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m3E00660AD72A0FB3ACEAB5846A103AB32195A952_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		float* L_2 = (float*)__this->get_address_of_value_1();
		int32_t L_3 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)(float*)L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_3));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ParameterOverride_1_op_Implicit_m67F993680878E3092D8F528CA054A4BB22BBE50C_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * L_0 = ___prop0;
		NullCheck(L_0);
		float L_1 = (float)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m19481E4591A0F4267054F5D631D87A5312E7DCAB_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * __this, const RuntimeMethod* method)
{
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 ));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = V_0;
		NullCheck((ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *)__this);
		((  void (*) (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *)__this, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mED6B2C6E9DD528F84C49E911EED5CC9C4CF6EB42_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method)
{
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = ___value0;
		NullCheck((ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *)__this);
		((  void (*) (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *)__this, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m5CCA25516545DBD38C239B15E922D96223904022_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this);
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m3962CCBE9FBC71F233BF90E7033A5D55094F6014_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = ((  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = ((  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *)__this);
		VirtActionInvoker3< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::Interp(T,T,System.Single) */, (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *)__this, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_1, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m7DD9A43E41490E8F501B0574B30FE5A9C5FA17E8_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___from0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * G_B2_0 = NULL;
	ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * G_B1_0 = NULL;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *)(__this));
			goto IL_000c;
		}
	}
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_mC4118013014EBA7EE55691B6C127C167C680AABA_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m9E776D4ED0CBCCD4404AF7A07B9983D58F347791_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = ((  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::GetHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m73D3D89078413E5D4F88D7DA9B6BD3D3AA544511_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * L_2 = (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)__this->get_address_of_value_1();
		int32_t L_3 = Color_GetHashCode_m88317C719D2DAA18E293B3F5CD17B9FB80E26CF1((Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_3));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ParameterOverride_1_op_Implicit_m6B1AFE960A15A5AF75CB1261D3FEDB434D9F7084_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * L_0 = ___prop0;
		NullCheck(L_0);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mB89ADF64EEDFC7EB62C2825CB76F7287CEE66A6C_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * __this, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D ));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = V_0;
		NullCheck((ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *)__this);
		((  void (*) (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m08170D6772D4B5CC02BB384D1077D137FDA53400_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		NullCheck((ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *)__this);
		((  void (*) (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mF158AFF8BFB6A550316F4EBC1B87D04DA0844400_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this);
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_mB0643E5CD3185445FB5FFBDA2F6FC04F964AB5C0_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *)__this);
		VirtActionInvoker3< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::Interp(T,T,System.Single) */, (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_1, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_mAE24FD4599ACFEC7401D39FD0A700DB811BD4917_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___from0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * G_B2_0 = NULL;
	ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * G_B1_0 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *)(__this));
			goto IL_000c;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m81AD71E57CAA9D9D50FC8638BB1E912B3CAA1528_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_mFFDCD899567244F8C163AF9DD40C698D68D8A2C7_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::GetHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_mE7CCDB17C769CD850BFAC1618EDC8DB437B42894_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_2 = (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)__this->get_address_of_value_1();
		int32_t L_3 = Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_3));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ParameterOverride_1_op_Implicit_m98B21094BBB9F286E6886204F14333CDA9E9FC30_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m21CC957C6A31818500B7779C682F6FAE34B22322_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		NullCheck((ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *)__this);
		((  void (*) (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *)__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m54AA95AE858C2CB17F9A3FF82B008655EACEC63A_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		NullCheck((ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *)__this);
		((  void (*) (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *)__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m3BB354E4F907C38174529F59CB85DBED66823F9E_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this);
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m5F331D329561D492C695658404865DE68A7CE4AC_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *)__this);
		VirtActionInvoker3< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::Interp(T,T,System.Single) */, (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *)__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_1, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m334BC661A344965880F27F6BF149BAE44EA90350_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___from0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * G_B2_0 = NULL;
	ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * G_B1_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *)(__this));
			goto IL_000c;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m49BAC5BA999B9D04ADD0540B7D8A7BAB2A17FAA0_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m113295C949A96F3207A718663C4022411E0E43FA_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::GetHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m01D9940D366941C8DE032C0B8391ED1BBEFD3D18_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_2 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)__this->get_address_of_value_1();
		int32_t L_3 = Vector3_GetHashCode_m6C42B4F413A489535D180E8A99BE0298AD078B0B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_3));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ParameterOverride_1_op_Implicit_m8D22AB569629A8D290498EB151AC70F461257FD0_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mBFE125F89E91DEAD9A85984002F97A2148AE9CC7_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * __this, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E ));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = V_0;
		NullCheck((ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *)__this);
		((  void (*) (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *)__this, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m4969141957C3FED60911C67677EB31F7AF22DDF3_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___value0, const RuntimeMethod* method)
{
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___value0;
		NullCheck((ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *)__this);
		((  void (*) (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *)__this, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mD70BEAB4E2242DE2E93D301E7A26D1AC78BA493B_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this);
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m6D9FAC01A3884DB1E4E2849F4375C560C1A181EF_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = ((  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_3 = ((  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *)__this);
		VirtActionInvoker3< Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::Interp(T,T,System.Single) */, (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *)__this, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_1, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m52D6439644BFEB0D5D2FCF62D3C335E295F185B8_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___from0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * G_B2_0 = NULL;
	ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * G_B1_0 = NULL;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *)(__this));
			goto IL_000c;
		}
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m5A37D0F8D4BDC6857A9F96BA5DC8B254894E9CE5_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m923196CB99E6C8B1462EC7B43468A231DFEF1977_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		NullCheck((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = ((  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::GetHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_mCB0AF2F2C557D514221D7B5CF18411EB155C2FB3_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_2 = (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)__this->get_address_of_value_1();
		int32_t L_3 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_3));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ParameterOverride_1_op_Implicit_mA88BE6123907CB7EE146907849CC80A1E2118F87_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * L_0 = ___prop0;
		NullCheck(L_0);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>::get_settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PostProcessEffectRenderer_1_get_settings_m729BC10053C01644300F4D04E7FF04AFFACAE8EA_gshared (PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CsettingsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>::set_settings(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessEffectRenderer_1_set_settings_m04D632CBF17639C4566443FCE03FB43A2E22192B_gshared (PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CsettingsU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>::SetSettings(UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessEffectRenderer_1_SetSettings_m40FC75E10A70B45B72290287DFCC2E3A21CD8823_gshared (PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461 * __this, PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042 * ___settings0, const RuntimeMethod* method)
{
	{
		PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042 * L_0 = ___settings0;
		NullCheck((PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461 *)__this);
		((  void (*) (PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461 *)__this, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessEffectRenderer_1__ctor_mDC05EE60688A226C857EEF907D1E86086A09D884_gshared (PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F *)__this);
		PostProcessEffectRenderer__ctor_m9D14BDBEBE8F6341D7A99527ADF6D2AF18FA831E((PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllSceneObjectsU3Ed__79_1__ctor_mE44B38CADE5DA35350972525EA9C6568D2FBEC43_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1 = Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllSceneObjectsU3Ed__79_1_System_IDisposable_Dispose_m1765A43C962651EF463FF39B5F1EBFEAC09C4AB0_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = (int32_t)__this->get_U3CU3E1__state_0();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		NullCheck((U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)__this);
		((  void (*) (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllSceneObjectsU3Ed__79_1_MoveNext_mD7DFF0365B734C2E877BC04AAD255067A4B0BD1F_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetAllSceneObjectsU3Ed__79_1_MoveNext_mD7DFF0365B734C2E877BC04AAD255067A4B0BD1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* V_2 = NULL;
	Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  V_3;
	memset((&V_3), 0, sizeof(V_3));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_6 = NULL;
	RuntimeObject * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (int32_t)__this->get_U3CU3E1__state_0();
			V_1 = (int32_t)L_0;
			int32_t L_1 = V_1;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0020;
				}
				case 1:
				{
					goto IL_009f;
				}
				case 2:
				{
					goto IL_013a;
				}
			}
		}

IL_0019:
		{
			V_0 = (bool)0;
			goto IL_0178;
		}

IL_0020:
		{
			__this->set_U3CU3E1__state_0((-1));
			Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * L_2 = (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)il2cpp_codegen_object_new(Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663_il2cpp_TypeInfo_var);
			Queue_1__ctor_m1114B4B3A14520FABE413206AE14D21D88BEA3F8(L_2, /*hidden argument*/Queue_1__ctor_m1114B4B3A14520FABE413206AE14D21D88BEA3F8_RuntimeMethod_var);
			__this->set_U3CqueueU3E5__2_3(L_2);
			Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  L_3 = SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51(/*hidden argument*/NULL);
			V_3 = (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 )L_3;
			GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_4 = Scene_GetRootGameObjects_mC87878438643AF527A7C017B2EC2D133E96A1FC1((Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 *)(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 *)(&V_3), /*hidden argument*/NULL);
			V_2 = (GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520*)L_4;
			GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_5 = V_2;
			__this->set_U3CU3E7__wrap2_4(L_5);
			__this->set_U3CU3E7__wrap3_5(0);
			goto IL_00b4;
		}

IL_0050:
		{
			GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_6 = (GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520*)__this->get_U3CU3E7__wrap2_4();
			int32_t L_7 = (int32_t)__this->get_U3CU3E7__wrap3_5();
			NullCheck(L_6);
			int32_t L_8 = L_7;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			V_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_9;
			Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * L_10 = (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)__this->get_U3CqueueU3E5__2_3();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = V_4;
			NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_11);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_11, /*hidden argument*/NULL);
			NullCheck((Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)L_10);
			Queue_1_Enqueue_m0AE12FFA5BD870C099227186990EA21D30A519F8((Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)L_10, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_12, /*hidden argument*/Queue_1_Enqueue_m0AE12FFA5BD870C099227186990EA21D30A519F8_RuntimeMethod_var);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = V_4;
			NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_13);
			RuntimeObject * L_14 = ((  RuntimeObject * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
			V_5 = (RuntimeObject *)L_14;
			RuntimeObject * L_15 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_16 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_15, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_00a6;
			}
		}

IL_0089:
		{
			RuntimeObject * L_17 = V_5;
			__this->set_U3CU3E2__current_1(L_17);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0178;
		}

IL_009f:
		{
			__this->set_U3CU3E1__state_0((-1));
		}

IL_00a6:
		{
			int32_t L_18 = (int32_t)__this->get_U3CU3E7__wrap3_5();
			__this->set_U3CU3E7__wrap3_5(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		}

IL_00b4:
		{
			int32_t L_19 = (int32_t)__this->get_U3CU3E7__wrap3_5();
			GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_20 = (GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520*)__this->get_U3CU3E7__wrap2_4();
			NullCheck(L_20);
			if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))))
			{
				goto IL_0050;
			}
		}

IL_00c4:
		{
			__this->set_U3CU3E7__wrap2_4((GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520*)NULL);
			goto IL_015c;
		}

IL_00d0:
		{
			Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * L_21 = (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)__this->get_U3CqueueU3E5__2_3();
			NullCheck((Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)L_21);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Queue_1_Dequeue_m4255117298948764AA48104A50476CB3B1792460((Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)L_21, /*hidden argument*/Queue_1_Dequeue_m4255117298948764AA48104A50476CB3B1792460_RuntimeMethod_var);
			NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_22);
			RuntimeObject* L_23 = Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_22, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap4_6(L_23);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0142;
		}

IL_00f0:
		{
			RuntimeObject* L_24 = (RuntimeObject*)__this->get_U3CU3E7__wrap4_6();
			NullCheck((RuntimeObject*)L_24);
			RuntimeObject * L_25 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_24);
			V_6 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)Castclass((RuntimeObject*)L_25, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var));
			Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * L_26 = (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)__this->get_U3CqueueU3E5__2_3();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = V_6;
			NullCheck((Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)L_26);
			Queue_1_Enqueue_m0AE12FFA5BD870C099227186990EA21D30A519F8((Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)L_26, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_27, /*hidden argument*/Queue_1_Enqueue_m0AE12FFA5BD870C099227186990EA21D30A519F8_RuntimeMethod_var);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = V_6;
			NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_28);
			RuntimeObject * L_29 = ((  RuntimeObject * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
			V_7 = (RuntimeObject *)L_29;
			RuntimeObject * L_30 = V_7;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_31 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_30, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_31)
			{
				goto IL_0142;
			}
		}

IL_0127:
		{
			RuntimeObject * L_32 = V_7;
			__this->set_U3CU3E2__current_1(L_32);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_0178;
		}

IL_013a:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0142:
		{
			RuntimeObject* L_33 = (RuntimeObject*)__this->get_U3CU3E7__wrap4_6();
			NullCheck((RuntimeObject*)L_33);
			bool L_34 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_33);
			if (L_34)
			{
				goto IL_00f0;
			}
		}

IL_014f:
		{
			NullCheck((U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)__this);
			((  void (*) (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
			__this->set_U3CU3E7__wrap4_6((RuntimeObject*)NULL);
		}

IL_015c:
		{
			Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * L_35 = (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)__this->get_U3CqueueU3E5__2_3();
			NullCheck((Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)L_35);
			int32_t L_36 = Queue_1_get_Count_mF0A3AC2F450CF4B0839855F9AE17BD42FF745780_inline((Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)L_35, /*hidden argument*/Queue_1_get_Count_mF0A3AC2F450CF4B0839855F9AE17BD42FF745780_RuntimeMethod_var);
			if ((((int32_t)L_36) > ((int32_t)0)))
			{
				goto IL_00d0;
			}
		}

IL_016d:
		{
			V_0 = (bool)0;
			goto IL_0178;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0171;
	}

FAULT_0171:
	{ // begin fault (depth: 1)
		NullCheck((U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)__this);
		((  void (*) (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		IL2CPP_END_FINALLY(369)
	} // end fault
	IL2CPP_CLEANUP(369)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0178:
	{
		bool L_37 = V_0;
		return L_37;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllSceneObjectsU3Ed__79_1_U3CU3Em__Finally1_mD32F8554130A68103A6C7B99B92FD89D9F0CF03B_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetAllSceneObjectsU3Ed__79_1_U3CU3Em__Finally1_mD32F8554130A68103A6C7B99B92FD89D9F0CF03B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_U3CU3E7__wrap4_6();
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001c:
	{
		return;
	}
}
// T UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_mF9602F247B976DA71C335A69996957FE3B7DD243_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_IEnumerator_Reset_m1C2A1DCB706F27B08B11159413FA1E892C5349C3_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_IEnumerator_Reset_m1C2A1DCB706F27B08B11159413FA1E892C5349C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_IEnumerator_Reset_m1C2A1DCB706F27B08B11159413FA1E892C5349C3_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_IEnumerator_get_Current_m193D3BC827E4C921D26998AA1833511923023D18_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mAB111CD4F2ED4EDE5D5F91113D12AB6C9341ADB1_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, const RuntimeMethod* method)
{
	U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->get_U3CU3El__initialThreadId_2();
		int32_t L_2 = Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)__this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * L_3 = (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		V_0 = (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)L_3;
	}

IL_0029:
	{
		U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_IEnumerable_GetEnumerator_mB6507A4C5D8F92BA5E4F39B295ACE433D49DF989_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Add_m0DBD135B8F3890966228AD853997DDA56594BBB5_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_2 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_3 = ___item0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		int32_t L_5 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_2);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_2, (RuntimeObject *)L_3, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::AddUnique(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_AddUnique_m90A07ACAD8A4E562C11674ED9598E5DE3AFE5F48_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		RuntimeObject * L_4 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_5 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = ___item0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_7 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_7);
		int32_t L_8 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5, (RuntimeObject *)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_Remove_m8C62E0808CB2D9452B58F1CB736C431F04CA1F4B_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		NullCheck((IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *)__this);
		((  void (*) (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return (bool)1;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_mCF3FE522F4B06100050E73BCDE298D8F8D7A3EE8_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_0;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Clear_m689CFB50CED51E5F519BEEF51B8D8C6FFBF41FB9_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_1 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_1);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_Contains_mCA290D982CEDEE20068188B38AC28A45CDDC9D13_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_CopyTo_m4254FBBA5B5B56B791828D193E5F4CA665CF7852_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedSet_1_get_Count_mA8B3EBDB71AD001C6D39FA35D79D7516C1C267E4_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_1;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_get_IsReadOnly_m01297860A8BC8B4B6C66DC72C406933ED9D9937D_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedSet_1_IndexOf_m6BB93EC59B8E7F835F15A3340E9884CAB29401AB_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0014:
	{
		return (-1);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_0, (String_t*)_stringLiteralDFADDFA065E9D92CFE8B8F06444DD5652DFC1D58, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAt_mBFCEF1CBBC140206B5DFCAE8205161429441E0EA_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject *)L_2;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_3 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3);
		((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		int32_t L_5 = ___index0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_6 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_6);
		int32_t L_7 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1))))))
		{
			goto IL_0037;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_9 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return;
	}

IL_0037:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10);
		int32_t L_11 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_12 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_13 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_12);
		RuntimeObject * L_14 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_12, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_2 = (RuntimeObject *)L_14;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_15 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_16 = ___index0;
		RuntimeObject * L_17 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15, (int32_t)L_16, (RuntimeObject *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_18 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_19 = V_2;
		int32_t L_20 = ___index0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_18);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_18, (RuntimeObject *)L_19, (int32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_21 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_22 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21, (int32_t)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return;
	}
}
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IndexedSet_1_get_Item_m982CBDB4CDA1A497EC25A60EC17AB8F7B2D51BC0_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_set_Item_m507562D8C316C7A1C0E521284172D4DB5D8A46BA_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject *)L_2;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_3 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3);
		((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_6 = ___index0;
		RuntimeObject * L_7 = ___value1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, (int32_t)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_8 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_9 = V_0;
		int32_t L_10 = ___index0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_8);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_8, (RuntimeObject *)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Sort_m0365BC9CE6449DBD358C479FB244D07FE72F36E7_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * ___sortLayoutFunction0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * L_1 = ___sortLayoutFunction0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_0 = (int32_t)0;
		goto IL_002e;
	}

IL_0010:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_3 = V_0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_1 = (RuntimeObject *)L_4;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_5 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5, (RuntimeObject *)L_6, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		int32_t L_8 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_9 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10);
		int32_t L_11 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1__ctor_mA9E3CAA05341D4863E3080C31170AB64AAED0573_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		__this->set_m_List_0(L_0);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_1 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18));
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		__this->set_m_Dictionary_1(L_1);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m6FC80299A2464A5F19E422273392ADBEE6805533_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_m3AFD56D8AAA6B170D4C5FEF021CC672C2F885C9A_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_m60167073DFDFFC72E0494F1178A8927098A64D12_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_MoveNext_m60167073DFDFFC72E0494F1178A8927098A64D12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float G_B8_0 = 0.0f;
	U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * G_B9_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U3CU3E1__state_0();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00a8;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_3 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		bool L_4 = ColorTween_ValidTarget_mA5469658CB631C87CF97FC5AE2B9089A06678696((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		return (bool)0;
	}

IL_002f:
	{
		__this->set_U3CelapsedTimeU3E5__2_3((0.0f));
		goto IL_00af;
	}

IL_003c:
	{
		float L_5 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_6 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		bool L_7 = ColorTween_get_ignoreTimeScale_mF935C53CA27D67D47AE0021A0DB8D92C392EF56B_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_6, /*hidden argument*/NULL);
		G_B7_0 = L_5;
		G_B7_1 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(__this));
		if (L_7)
		{
			G_B8_0 = L_5;
			G_B8_1 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(__this));
			goto IL_005d;
		}
	}
	{
		float L_8 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		G_B9_0 = L_8;
		G_B9_1 = G_B7_0;
		G_B9_2 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(G_B7_1));
		goto IL_0062;
	}

IL_005d:
	{
		float L_9 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_0;
		G_B9_2 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(G_B8_1));
	}

IL_0062:
	{
		NullCheck(G_B9_2);
		G_B9_2->set_U3CelapsedTimeU3E5__2_3(((float)il2cpp_codegen_add((float)G_B9_1, (float)G_B9_0)));
		float L_10 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_11 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		float L_12 = ColorTween_get_duration_m7E952A00A8A606D7886422812EFB24A6D5BFB508_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B((float)((float)((float)L_10/(float)L_12)), /*hidden argument*/NULL);
		V_1 = (float)L_13;
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_14 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		float L_15 = V_1;
		ColorTween_TweenValue_m4EF3CDDDDC3986BA6D06D4DB785310B131958749((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_14, (float)L_15, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00af:
	{
		float L_16 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_17 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		float L_18 = ColorTween_get_duration_m7E952A00A8A606D7886422812EFB24A6D5BFB508_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_003c;
		}
	}
	{
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_19 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		ColorTween_TweenValue_m4EF3CDDDDC3986BA6D06D4DB785310B131958749((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF79BB0AA7D52BC685ED74FE04086C3155BE46893_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_mC5F1F242C0EE5549C75A5721204FD9207EB716A6_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m2AE86242B5268C78D780861B343B1227E2479CE2_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_mBD909D28E90E3EB5172683C41EDB69A5CEC3B29A_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_m0EE17EEE1FD4E844C9CDA2AA8815CBECBB0DBA9F_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_MoveNext_m0EE17EEE1FD4E844C9CDA2AA8815CBECBB0DBA9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float G_B8_0 = 0.0f;
	U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * G_B9_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U3CU3E1__state_0();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00a8;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_3 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		bool L_4 = FloatTween_ValidTarget_m7DFE9AC7C8C0EBEF441D80472635CF4F38632E5E((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		return (bool)0;
	}

IL_002f:
	{
		__this->set_U3CelapsedTimeU3E5__2_3((0.0f));
		goto IL_00af;
	}

IL_003c:
	{
		float L_5 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_6 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		bool L_7 = FloatTween_get_ignoreTimeScale_m8281CB2B12F1697A512D2E2515F5DA058B429FD0_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_6, /*hidden argument*/NULL);
		G_B7_0 = L_5;
		G_B7_1 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(__this));
		if (L_7)
		{
			G_B8_0 = L_5;
			G_B8_1 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(__this));
			goto IL_005d;
		}
	}
	{
		float L_8 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		G_B9_0 = L_8;
		G_B9_1 = G_B7_0;
		G_B9_2 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(G_B7_1));
		goto IL_0062;
	}

IL_005d:
	{
		float L_9 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_0;
		G_B9_2 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(G_B8_1));
	}

IL_0062:
	{
		NullCheck(G_B9_2);
		G_B9_2->set_U3CelapsedTimeU3E5__2_3(((float)il2cpp_codegen_add((float)G_B9_1, (float)G_B9_0)));
		float L_10 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_11 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		float L_12 = FloatTween_get_duration_m17CD4518038CD642D714B3633236133D309EF13B_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B((float)((float)((float)L_10/(float)L_12)), /*hidden argument*/NULL);
		V_1 = (float)L_13;
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_14 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		float L_15 = V_1;
		FloatTween_TweenValue_m78FEB902E18BE0882BC487BC29B6EA3905E4F05C((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_14, (float)L_15, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00af:
	{
		float L_16 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_17 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		float L_18 = FloatTween_get_duration_m17CD4518038CD642D714B3633236133D309EF13B_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_003c;
		}
	}
	{
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_19 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		FloatTween_TweenValue_m78FEB902E18BE0882BC487BC29B6EA3905E4F05C((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD32BEE6827A03105EAE2BB0DD9D3D46620BD131C_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_mD96F6DCD598679604A87A46CC51E64FD2B23019A_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Start(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_mC2568158E444C4708AB2AE4A41715412B27675D4_gshared (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___tweenInfo0, const RuntimeMethod* method)
{
	{
		U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * L_0 = (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * L_1 = (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)L_0;
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_2(L_2);
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Init(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_mB9D1917305679C4620D9F3D8DEE2215DFCAB3057_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StartTween(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_mA10B864FF4FF1D68D8B117B94B06FF35F5373FA7_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_mA10B864FF4FF1D68D8B117B94B06FF35F5373FA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568((RuntimeObject *)_stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		NullCheck((TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *)__this);
		((  void (*) (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_2 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3);
		bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		ColorTween_TweenValue_m4EF3CDDDDC3986BA6D06D4DB785310B131958749((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		return;
	}

IL_0044:
	{
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_7 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StopTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m144D05B742FE3B45CAF9E39F351DFE015B8D72A9_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_1 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1);
		MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_mDFB148DCD4CD644010BDFD27F1D0DABA9BB528F7_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Start(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m138F7317CB8D005AE5859487FBD18C15E5171F76_gshared (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___tweenInfo0, const RuntimeMethod* method)
{
	{
		U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * L_0 = (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * L_1 = (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)L_0;
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_2(L_2);
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Init(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m36554C1037EC37B2D67A1BDE9B4D2407FE2C7657_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StartTween(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_mCD6A38F2A78EADA8BFD4D710333E6263D32DAEFE_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_mCD6A38F2A78EADA8BFD4D710333E6263D32DAEFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568((RuntimeObject *)_stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		NullCheck((TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *)__this);
		((  void (*) (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_2 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3);
		bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		FloatTween_TweenValue_m78FEB902E18BE0882BC487BC29B6EA3905E4F05C((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		return;
	}

IL_0044:
	{
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_7 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StopTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m7EA08229E2A074D42B52A1F63C74871F48B3A748_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_1 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1);
		MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_mBCECADAAC67B34851BF7AE7F23AAA7BEDD17CDAE_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_mDFC87A2C3A59C78CE3F2BFBF6394BAF88A791973_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = ___l0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Int32>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ListPool_1_Get_mE24C8BF45625DFCEC780B128AF4F5CACCDAD4E84_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * L_0 = ((ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)L_0);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = ((  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * (*) (ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m21C2836B76CF178B2B4EADBAB1F8E2CEFE1D7A3B_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * L_0 = ((ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)L_0);
		((  void (*) (ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)L_0, (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_mEDDF3833673FBF22292A8CE001267CE47A06D4E7_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * L_0 = (UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * L_1 = (ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *, UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *, UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *)NULL, (UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m4B97511A75755BD2A11A6213F00B2E36ADF3F0B8_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ___l0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ListPool_1_Get_mEE963F0CFA2D9BE7F593624F2825F9C8E326217D_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)L_0);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ((  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * (*) (ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_mA153831D5786A134340D88D3C5C14451A188C6B6_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)L_0);
		((  void (*) (ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)L_0, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m2378D0E35B8BFADD0DBC1896B035099042BF39E9_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * L_0 = (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * L_1 = (ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *, UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *, UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *)NULL, (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m7E0463074AFDE74F6941D20F82B563D9855CA51F_gshared (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_0 = ___l0;
		NullCheck((List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_0);
		((  void (*) (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ListPool_1_Get_mFA5B1FE71203BEA07EC99A8187CAFC9801601275_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * L_0 = ((ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)L_0);
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_1 = ((  List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * (*) (ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m13C60947514129CCE106341D6F821D7CC8CB7927_gshared (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * L_0 = ((ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)L_0);
		((  void (*) (ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *, List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)L_0, (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m6F6BB1DEAEBDCC1348DB47B9E0E10C0A1E36F68C_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * L_0 = (UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * L_1 = (ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *, UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *, UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *)NULL, (UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_mCA5F9E34875E7BE7BF5093AA41CB68AA14782B9A_gshared (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_0 = ___l0;
		NullCheck((List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_0);
		((  void (*) (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ListPool_1_Get_m269C301744C63E55CDD01465B1BDCD0FA9802244_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * L_0 = ((ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)L_0);
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_1 = ((  List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * (*) (ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m6653E07E399B9C444F12BEEE866B60F2F99F8D69_gshared (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * L_0 = ((ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)L_0);
		((  void (*) (ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *, List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)L_0, (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_mB9695B98AC5B1F1D1A9B8E899684DAECA74B5E8C_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * L_0 = (UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * L_1 = (ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *, UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *, UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *)NULL, (UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m3C051B0DE1D02A52725D7579945480EED3C9FE8E_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_0 = ___l0;
		NullCheck((List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_0);
		((  void (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ListPool_1_Get_m11B7B6B7B0A7397CE137967BD7B5DE5A89B50FD0_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * L_0 = ((ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)L_0);
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_1 = ((  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * (*) (ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_mE0437FA6DA0DDBF3E142087FD60E5C1546D00378_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * L_0 = ((ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)L_0);
		((  void (*) (ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *, List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)L_0, (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m72914A2BE483C25F9A1F466683250D88B2E3CE07_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * L_0 = (UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * L_1 = (ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *, UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *, UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *)NULL, (UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_mAB96DA37D0FB4B06F1603AA1070DD09866B3B220_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = ___l0;
		NullCheck((List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_0);
		((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ListPool_1_Get_m37FA5515EC4738DA642BD39C6776AAD939257066_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * L_0 = ((ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)L_0);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = ((  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * (*) (ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_mEEEA52258097A3C1D70BCA0C1E44F2FE2D7FA5F0_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * L_0 = ((ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)L_0);
		((  void (*) (ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)L_0, (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m9BC9B0BFB33F3DF6E196D870C49E7D8227EDA837_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * L_0 = (UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * L_1 = (ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *, UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *, UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *)NULL, (UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m548445516D0160B74B6DD63031666DFF0A8D0047_gshared (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_0 = ___l0;
		NullCheck((List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_0);
		((  void (*) (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ListPool_1_Get_mFF001445D71845169AA17846983938A308ABCBEB_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * L_0 = ((ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)L_0);
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_1 = ((  List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * (*) (ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m9C3BDAB2B2F59B29C028861D014CDFABA3B7F648_gshared (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * L_0 = ((ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)L_0);
		((  void (*) (ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *, List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)L_0, (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m672E25A57B4521532BFB0CC9717C346E57B88DFD_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * L_0 = (UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * L_1 = (ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *, UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *, UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *)NULL, (UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countAll_mC773F09A80F4F0FE9AF2A3831AF76CCBED566D3F_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CcountAllU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_set_countAll_mAF458EE2DD8B26D48576D0FFA139136AAA5180BF_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcountAllU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m5A29AD1D0B7DD5C4F207B1659FF168D4BF7C0D01_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnGet0, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnRelease1, const RuntimeMethod* method)
{
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Stack_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = ___actionOnGet0;
		__this->set_m_ActionOnGet_1(L_1);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = ___actionOnRelease1;
		__this->set_m_ActionOnRelease_2(L_2);
		return;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_m6478DC644CCD8FE64CF24AF5490B2E1054FB4F78_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (RuntimeObject *)L_2;
		NullCheck((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this);
		int32_t L_3 = ((  int32_t (*) (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_1;
		NullCheck((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this);
		((  void (*) (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		goto IL_0031;
	}

IL_0025:
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_5 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_5);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		V_0 = (RuntimeObject *)L_6;
	}

IL_0031:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnGet_1();
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_8 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnGet_1();
		RuntimeObject * L_9 = V_0;
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
	}

IL_0045:
	{
		RuntimeObject * L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_mC1D66E968E7A04252A79426F4F2D45ED0F292B86_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, RuntimeObject * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_mC1D66E968E7A04252A79426F4F2D45ED0F292B86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_2 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		RuntimeObject * L_4 = ___element0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_3) == ((RuntimeObject*)(RuntimeObject *)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC, /*hidden argument*/NULL);
	}

IL_0030:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_5 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnRelease_2();
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnRelease_2();
		RuntimeObject * L_7 = ___element0;
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
	}

IL_0044:
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_8 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		RuntimeObject * L_9 = ___element0;
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_8);
		((  void (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline (Delegate_t * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_m_target_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_mF935C53CA27D67D47AE0021A0DB8D92C392EF56B_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_IgnoreTimeScale_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float ColorTween_get_duration_m7E952A00A8A606D7886422812EFB24A6D5BFB508_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Duration_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_m8281CB2B12F1697A512D2E2515F5DA058B429FD0_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_IgnoreTimeScale_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float FloatTween_get_duration_m17CD4518038CD642D714B3633236133D309EF13B_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Duration_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m7A6FFDFB76BE86C7C26FFD4B11A826E1EBD00010_gshared_inline (Queue_1_tCD201270E97BC8DEAAF8D991FC536293137B19A9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return L_0;
	}
}
