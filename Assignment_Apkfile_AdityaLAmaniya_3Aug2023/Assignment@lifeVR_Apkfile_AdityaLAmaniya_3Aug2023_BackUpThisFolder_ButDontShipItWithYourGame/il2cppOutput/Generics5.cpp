﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtualActionInvoker0Invoker
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, NULL);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1Invoker
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { &p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[3] = { p1, p2, &p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R>
struct InterfaceFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7<T1*, T2*, T3*, T4*, T5, T6, T7>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5, T6 p6, T7 p7)
	{
		void* params[7] = { p1, p2, p3, p4, &p5, &p6, &p7 };
		method->invoker_method(methodPtr, method, obj, params, params[6]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Collections.Generic.IEnumerable`1<System.Int32>>
struct Action_1_t68F947CFF3E836EB3A2C880E204C2D89F5AEB115;
// System.Action`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Action_1_tCB2600FFD386071D232B22D0FFBB8989B853DFD5;
// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.UIElements.ReusableCollectionItem>
struct Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct Dictionary_2_t6E21BD77BE545FD55B4784E10DBE055D6AF6D1B9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Type>>>
struct Dictionary_2_t8BD6308EB9E88486C040C0B44AAE81F0B6C637C9;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.VolumeComponent>
struct Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.GeometryChangedEvent>
struct EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30;
// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.PointerMoveEvent>
struct EventCallback_1_t7C6768AD962B0B50514570724A38E07DA18FB1FA;
// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.PointerUpEvent>
struct EventCallback_1_tE2BCC4FFB156A2716749F7BDD0036A743B039913;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630;
// System.Func`2<System.Int32,System.Int32>
struct Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<UnityEngine.Rendering.Volume,System.Boolean>
struct Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Int32>
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>
struct IEnumerable_1_tED602875C5D5C7BECAD2C641945DF5416536FA7B;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_tB708E9C2FA823B01C747E05E9A94F71093AAE6F1;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.ReusableCollectionItem>
struct IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Rendering.Volume>
struct IEnumerable_1_t4090E8CF3CA50BDD8A30A5ADC2C2A61569E8AAB1;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
// System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IObservable_1_tA29A83F0C2D67B7465AEA27D123F8F8B6514E475;
// System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IObserver_1_t094BE2515872266E98A772AEA02B413105F16A8B;
// System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
// System.Lazy`1<UnityEngine.Rendering.VolumeManager>
struct Lazy_1_t8BF68D560BD85EC85ECBE57F1B105CF767F8FBBC;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Type>>
struct List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.UIElements.ReusableCollectionItem>
struct List_1_t42A86FE68C8321F340DE626A644141DAF4A411E7;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>
struct List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897;
// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>
struct List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// UnityEngine.Pool.ObjectPool`1<System.Object>
struct ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259;
// System.Predicate`1<System.ValueTuple`2<System.String,System.Type>>
struct Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7;
// System.Predicate`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.VolumeParameter>
struct ReadOnlyCollection_1_tE414953665CCBE1BFF28E8E32C184621ADDA4B76;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.InheritedData>
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.LayoutData>
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.RareData>
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransformData>
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransitionData>
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.VisualData>
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// UnityEngine.UIElements.Experimental.ValueAnimation`1<UnityEngine.UIElements.Experimental.StyleValues>
struct ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC;
// UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>
struct VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345;
// UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct VisualElementScheduledItem_1_tC55C6DAB31FBA21565DAE09DE6BA236327F029E2;
// UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>
struct VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889;
// UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3;
// System.WeakReference`1<System.Object>
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE;
// UnityEngine.InputSystem.Utilities.WhereObservable`1/Where<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Where_t04DB031F94FE910A83839B12D2DC5BCACAA6F25C;
// System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B;
// System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0;
// UnityEngine.InputSystem.Utilities.WhereObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7;
// System.ValueTuple`2<System.String,System.Type>[]
struct ValueTuple_2U5BU5D_t76AF1876C6906F5A52DD507AC0D00139315E9453;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.UIElements.ComputedTransitionProperty[]
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Rendering.Volume[]
struct VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UnityEngine.Rendering.VolumeParameter[,]
struct VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// UnityEngine.UIElements.BaseVerticalCollectionView
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.UIElements.CollectionViewController
struct CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768;
// UnityEngine.UIElements.CollectionVirtualizationController
struct CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.UIElements.DefaultDragAndDropClient
struct DefaultDragAndDropClient_t22E34F0CC0902F8BB146736C13745F686C8E8BE3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UIElements.IBinding
struct IBinding_t02FD99E9C9F2072B28E110F16C157666F5B2DBC7;
// UnityEngine.UIElements.ICollectionDragAndDropController
struct ICollectionDragAndDropController_t30018C4F1C5ADA75B5E68B48A7BACE33E851168C;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// UnityEngine.UIElements.IStyle
struct IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7;
// UnityEngine.UIElements.IVisualElementScheduledItem
struct IVisualElementScheduledItem_t309F1A5445514122A9E3F64182D0D8A4DE34C48F;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
// UnityEngine.UIElements.KeyboardNavigationManipulator
struct KeyboardNavigationManipulator_t7E9BA3568ADC1660C4E09B924ECD457E33B835B3;
// UnityEngine.UIElements.ListViewDragger
struct ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD;
// UnityEngine.UIElements.ListViewDraggerAnimated
struct ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// UnityEngine.UIElements.ReusableCollectionItem
struct ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UIElements.ScrollView
struct ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9;
// UnityEngine.UIElements.Scroller
struct Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
// System.Type
struct Type_t;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualElementPanelActivator
struct VisualElementPanelActivator_t1CCD740B7D2995A4097A8FCF6ADCDD6B6A51B7DB;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Rendering.Volume
struct Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377;
// UnityEngine.Rendering.VolumeComponent
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1;
// UnityEngine.Rendering.VolumeManager
struct VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621;
// UnityEngine.Rendering.VolumeParameter
struct VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72;
// UnityEngine.Rendering.VolumeProfile
struct VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1;
// UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem
struct BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A;
// UnityEngine.UIElements.VisualElement/CustomStyleAccess
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2A9C63083A2E1F3154B162888A0D4FD37ED0C247_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0;
IL2CPP_EXTERN_C String_t* _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7;
IL2CPP_EXTERN_C String_t* _stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m4150F2AE8B4B55425B19967BA711A84415E259D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m07661B9A8A400FE659EAE193CEEED8F65CA80C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAA30FA516DBB4BD439745E07A77E90D6AF0A2D21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisFieldInfo_t_m99A6AB02C6FC4690AD5DCDFCB0C9DE2F5CD5B145_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mF1CBC672AB74D6AC77FB82DA8D177C30D1CDD7BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m83B576D3EAED3F16C09A9FBC62D8FE3E6357D055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindIndex_m6453765ACDCCF1261A26796F9EB601DDE15077F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDF487B1FB318EBF81C972FCCD0AECA6B9B6E9286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_GetObjectData_m6F2E12AF126FAE536995F52F9501498BDA5917A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1__ctor_m2289DC7F3597E1BA77555086A86F91807FDC96E2_RuntimeMethod_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIElements.VerticalVirtualizationController`1/<>c<System.Object>
struct U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E  : public RuntimeObject
{
};

struct U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields
{
	// UnityEngine.UIElements.VerticalVirtualizationController`1/<>c<T> UnityEngine.UIElements.VerticalVirtualizationController`1/<>c::<>9
	U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E* ___U3CU3E9_0;
	// System.Func`1<T> UnityEngine.UIElements.VerticalVirtualizationController`1/<>c::<>9__25_0
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___U3CU3E9__25_0_1;
	// System.Action`1<T> UnityEngine.UIElements.VerticalVirtualizationController`1/<>c::<>9__25_1
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__25_1_2;
};

// UnityEngine.Rendering.VolumeDebugSettings`1/<>c<System.Object>
struct U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3  : public RuntimeObject
{
};

struct U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields
{
	// UnityEngine.Rendering.VolumeDebugSettings`1/<>c<T> UnityEngine.Rendering.VolumeDebugSettings`1/<>c::<>9
	U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Rendering.Volume,System.Boolean> UnityEngine.Rendering.VolumeDebugSettings`1/<>c::<>9__38_0
	Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* ___U3CU3E9__38_0_1;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> UnityEngine.Rendering.VolumeDebugSettings`1/<>c::<>9__40_0
	Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* ___U3CU3E9__40_0_2;
};

// UnityEngine.Rendering.VolumeDebugSettings`1/<>c__DisplayClass20_0<System.Object>
struct U3CU3Ec__DisplayClass20_0_tAF5D9FD9DCDAA53C0BA8615AE1D4837BC4339C45  : public RuntimeObject
{
	// System.Type UnityEngine.Rendering.VolumeDebugSettings`1/<>c__DisplayClass20_0::value
	Type_t* ___value_0;
};

// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};

struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer_0;
};

// System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};

// System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Type>>
struct List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_t76AF1876C6906F5A52DD507AC0D00139315E9453* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValueTuple_2U5BU5D_t76AF1876C6906F5A52DD507AC0D00139315E9453* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// UnityEngine.Pool.ObjectPool`1<System.Object>
struct ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259  : public RuntimeObject
{
	// System.Collections.Generic.Stack`1<T> UnityEngine.Pool.ObjectPool`1::m_Stack
	Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* ___m_Stack_0;
	// System.Func`1<T> UnityEngine.Pool.ObjectPool`1::m_CreateFunc
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___m_CreateFunc_1;
	// System.Action`1<T> UnityEngine.Pool.ObjectPool`1::m_ActionOnGet
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnGet_2;
	// System.Action`1<T> UnityEngine.Pool.ObjectPool`1::m_ActionOnRelease
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnRelease_3;
	// System.Action`1<T> UnityEngine.Pool.ObjectPool`1::m_ActionOnDestroy
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnDestroy_4;
	// System.Int32 UnityEngine.Pool.ObjectPool`1::m_MaxSize
	int32_t ___m_MaxSize_5;
	// System.Boolean UnityEngine.Pool.ObjectPool`1::m_CollectionCheck
	bool ___m_CollectionCheck_6;
	// System.Int32 UnityEngine.Pool.ObjectPool`1::<CountAll>k__BackingField
	int32_t ___U3CCountAllU3Ek__BackingField_7;
};

// UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>
struct VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889  : public RuntimeObject
{
	// System.Int32 UnityEngine.Rendering.VolumeDebugSettings`1::<selectedComponent>k__BackingField
	int32_t ___U3CselectedComponentU3Ek__BackingField_0;
	// System.Int32 UnityEngine.Rendering.VolumeDebugSettings`1::m_SelectedCameraIndex
	int32_t ___m_SelectedCameraIndex_1;
	// System.Single[] UnityEngine.Rendering.VolumeDebugSettings`1::weights
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights_4;
	// UnityEngine.Rendering.Volume[] UnityEngine.Rendering.VolumeDebugSettings`1::volumes
	VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* ___volumes_5;
	// UnityEngine.Rendering.VolumeParameter[,] UnityEngine.Rendering.VolumeDebugSettings`1::savedStates
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* ___savedStates_6;
};

struct VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields
{
	// System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Type>> UnityEngine.Rendering.VolumeDebugSettings`1::s_ComponentTypes
	List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* ___s_ComponentTypes_2;
	// System.Collections.Generic.List`1<T> UnityEngine.Rendering.VolumeDebugSettings`1::<additionalCameraDatas>k__BackingField
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___U3CadditionalCameraDatasU3Ek__BackingField_3;
};

// UnityEngine.InputSystem.Utilities.WhereObservable`1/Where<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Where_t04DB031F94FE910A83839B12D2DC5BCACAA6F25C  : public RuntimeObject
{
	// UnityEngine.InputSystem.Utilities.WhereObservable`1<TValue> UnityEngine.InputSystem.Utilities.WhereObservable`1/Where::m_Observable
	WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816* ___m_Observable_0;
	// System.IObserver`1<TValue> UnityEngine.InputSystem.Utilities.WhereObservable`1/Where::m_Observer
	RuntimeObject* ___m_Observer_1;
};

// UnityEngine.InputSystem.Utilities.WhereObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816  : public RuntimeObject
{
	// System.IObservable`1<TValue> UnityEngine.InputSystem.Utilities.WhereObservable`1::m_Source
	RuntimeObject* ___m_Source_0;
	// System.Func`2<TValue,System.Boolean> UnityEngine.InputSystem.Utilities.WhereObservable`1::m_Predicate
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___m_Predicate_1;
};
struct Il2CppArrayBounds;

// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry_0;
};

// UnityEngine.UIElements.CollectionViewController
struct CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768  : public RuntimeObject
{
	// UnityEngine.UIElements.BaseVerticalCollectionView UnityEngine.UIElements.CollectionViewController::m_View
	BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___m_View_0;
	// System.Collections.IList UnityEngine.UIElements.CollectionViewController::m_ItemsSource
	RuntimeObject* ___m_ItemsSource_1;
	// System.Action UnityEngine.UIElements.CollectionViewController::itemsSourceChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___itemsSourceChanged_2;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.UIElements.CollectionViewController::itemIndexChanged
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___itemIndexChanged_3;
};

// UnityEngine.UIElements.CollectionVirtualizationController
struct CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801  : public RuntimeObject
{
	// UnityEngine.UIElements.ScrollView UnityEngine.UIElements.CollectionVirtualizationController::m_ScrollView
	ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* ___m_ScrollView_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.UIElements.ReusableCollectionItem
struct ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086  : public RuntimeObject
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::<bindableElement>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CbindableElementU3Ek__BackingField_0;
	// UnityEngine.UIElements.Experimental.ValueAnimation`1<UnityEngine.UIElements.Experimental.StyleValues> UnityEngine.UIElements.ReusableCollectionItem::<animator>k__BackingField
	ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* ___U3CanimatorU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.ReusableCollectionItem::<index>k__BackingField
	int32_t ___U3CindexU3Ek__BackingField_2;
	// System.Int32 UnityEngine.UIElements.ReusableCollectionItem::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_3;
	// System.Action`1<UnityEngine.UIElements.ReusableCollectionItem> UnityEngine.UIElements.ReusableCollectionItem::onGeometryChanged
	Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09* ___onGeometryChanged_4;
	// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.GeometryChangedEvent> UnityEngine.UIElements.ReusableCollectionItem::m_GeometryChangedEventCallback
	EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30* ___m_GeometryChangedEventCallback_5;
};

// UnityEngine.UIElements.ScheduledItem
struct ScheduledItem_t423152D61DCAD8E5EC98FB4DEFC04FB023EDADE0  : public RuntimeObject
{
	// System.Func`1<System.Boolean> UnityEngine.UIElements.ScheduledItem::timerUpdateStopCondition
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___timerUpdateStopCondition_0;
	// System.Int64 UnityEngine.UIElements.ScheduledItem::<startMs>k__BackingField
	int64_t ___U3CstartMsU3Ek__BackingField_3;
	// System.Int64 UnityEngine.UIElements.ScheduledItem::<delayMs>k__BackingField
	int64_t ___U3CdelayMsU3Ek__BackingField_4;
	// System.Int64 UnityEngine.UIElements.ScheduledItem::<intervalMs>k__BackingField
	int64_t ___U3CintervalMsU3Ek__BackingField_5;
	// System.Int64 UnityEngine.UIElements.ScheduledItem::<endTimeMs>k__BackingField
	int64_t ___U3CendTimeMsU3Ek__BackingField_6;
};

struct ScheduledItem_t423152D61DCAD8E5EC98FB4DEFC04FB023EDADE0_StaticFields
{
	// System.Func`1<System.Boolean> UnityEngine.UIElements.ScheduledItem::OnceCondition
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___OnceCondition_1;
	// System.Func`1<System.Boolean> UnityEngine.UIElements.ScheduledItem::ForeverCondition
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___ForeverCondition_2;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.Rendering.VolumeManager
struct VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621  : public RuntimeObject
{
	// UnityEngine.Rendering.VolumeStack UnityEngine.Rendering.VolumeManager::<stack>k__BackingField
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* ___U3CstackU3Ek__BackingField_1;
	// System.Type[] UnityEngine.Rendering.VolumeManager::<baseComponentTypeArray>k__BackingField
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CbaseComponentTypeArrayU3Ek__BackingField_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>> UnityEngine.Rendering.VolumeManager::m_SortedVolumes
	Dictionary_2_t6E21BD77BE545FD55B4784E10DBE055D6AF6D1B9* ___m_SortedVolumes_5;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume> UnityEngine.Rendering.VolumeManager::m_Volumes
	List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* ___m_Volumes_6;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> UnityEngine.Rendering.VolumeManager::m_SortNeeded
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___m_SortNeeded_7;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeManager::m_ComponentsDefaultState
	List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* ___m_ComponentsDefaultState_8;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.Rendering.VolumeManager::m_TempColliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_TempColliders_9;
	// UnityEngine.Rendering.VolumeStack UnityEngine.Rendering.VolumeManager::m_DefaultStack
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* ___m_DefaultStack_10;
};

struct VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_StaticFields
{
	// System.Lazy`1<UnityEngine.Rendering.VolumeManager> UnityEngine.Rendering.VolumeManager::s_Instance
	Lazy_1_t8BF68D560BD85EC85ECBE57F1B105CF767F8FBBC* ___s_Instance_0;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Type>>> UnityEngine.Rendering.VolumeManager::s_SupportedVolumeComponentsForRenderPipeline
	Dictionary_2_t8BD6308EB9E88486C040C0B44AAE81F0B6C637C9* ___s_SupportedVolumeComponentsForRenderPipeline_2;
};

// UnityEngine.Rendering.VolumeParameter
struct VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72  : public RuntimeObject
{
	// System.Boolean UnityEngine.Rendering.VolumeParameter::m_OverrideState
	bool ___m_OverrideState_1;
};

// UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeStack::components
	Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A* ___components_0;
};

// UnityEngine.UIElements.CustomStyleProperty`1<System.Int32>
struct CustomStyleProperty_1_t6871E5DBF19AB4DC7E1134B32A03B7A458D52E9F 
{
	// System.String UnityEngine.UIElements.CustomStyleProperty`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.CustomStyleProperty`1
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.UIElements.CustomStyleProperty`1
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>
struct StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 
{
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_1;
};

// System.ValueTuple`2<System.String,System.Type>
struct ValueTuple_2_tB97F43966F527B2125B7A49F02F05E9A07A60494 
{
	// T1 System.ValueTuple`2::Item1
	String_t* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	Type_t* ___Item2_1;
};

// UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>
struct VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345  : public CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801
{
	// UnityEngine.UIElements.BaseVerticalCollectionView UnityEngine.UIElements.VerticalVirtualizationController`1::m_CollectionView
	BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___m_CollectionView_1;
	// UnityEngine.Pool.ObjectPool`1<T> UnityEngine.UIElements.VerticalVirtualizationController`1::m_Pool
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___m_Pool_2;
	// System.Collections.Generic.List`1<T> UnityEngine.UIElements.VerticalVirtualizationController`1::m_ActiveItems
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_ActiveItems_3;
	// System.Int32 UnityEngine.UIElements.VerticalVirtualizationController`1::m_LastFocusedElementIndex
	int32_t ___m_LastFocusedElementIndex_4;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UIElements.VerticalVirtualizationController`1::m_LastFocusedElementTreeChildIndexes
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_LastFocusedElementTreeChildIndexes_5;
	// System.Int32 UnityEngine.UIElements.VerticalVirtualizationController`1::m_FirstVisibleIndex
	int32_t ___m_FirstVisibleIndex_6;
	// System.Func`2<T,System.Boolean> UnityEngine.UIElements.VerticalVirtualizationController`1::m_VisibleItemPredicateDelegate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___m_VisibleItemPredicateDelegate_7;
	// System.Collections.Generic.List`1<T> UnityEngine.UIElements.VerticalVirtualizationController`1::m_ScrollInsertionList
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_ScrollInsertionList_8;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VerticalVirtualizationController`1::k_EmptyRows
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___k_EmptyRows_9;
};

// UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3 : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72 {};

// System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6 : public RuntimeObject {};

// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};

// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174 : public RuntimeObject {};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C : public RuntimeObject {};

// UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Data
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Data_0;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Start
	int32_t ___m_Start_1;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
};

struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30_StaticFields
{
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.BMPAlloc::Invalid
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___Invalid_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_3;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_4;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_5;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_6;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_7;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.UIElements.Length
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	// System.Single UnityEngine.UIElements.Length::m_Value
	float ___m_Value_1;
	// UnityEngine.UIElements.Length/Unit UnityEngine.UIElements.Length::m_Unit
	int32_t ___m_Unit_2;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// UnityEngine.UIElements.StyleFloat
struct StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 
{
	// System.Single UnityEngine.UIElements.StyleFloat::m_Value
	float ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleFloat::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.UIElements.ListViewDragger/DragPosition
struct DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660 
{
	// System.Int32 UnityEngine.UIElements.ListViewDragger/DragPosition::insertAtIndex
	int32_t ___insertAtIndex_0;
	// UnityEngine.UIElements.ReusableCollectionItem UnityEngine.UIElements.ListViewDragger/DragPosition::recycledItem
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___recycledItem_1;
	// UnityEngine.UIElements.DragAndDropPosition UnityEngine.UIElements.ListViewDragger/DragPosition::dragAndDropPosition
	int32_t ___dragAndDropPosition_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ListViewDragger/DragPosition
struct DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshaled_pinvoke
{
	int32_t ___insertAtIndex_0;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___recycledItem_1;
	int32_t ___dragAndDropPosition_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ListViewDragger/DragPosition
struct DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshaled_com
{
	int32_t ___insertAtIndex_0;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___recycledItem_1;
	int32_t ___dragAndDropPosition_2;
};

// UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem
struct BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A  : public ScheduledItem_t423152D61DCAD8E5EC98FB4DEFC04FB023EDADE0
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::<element>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CelementU3Ek__BackingField_7;
	// System.Boolean UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::isScheduled
	bool ___isScheduled_8;
	// UnityEngine.UIElements.VisualElementPanelActivator UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::m_Activator
	VisualElementPanelActivator_t1CCD740B7D2995A4097A8FCF6ADCDD6B6A51B7DB* ___m_Activator_9;
};

// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};

// UnityEngine.Rendering.VolumeDebugSettings`1/<get_cameras>d__11<System.Object>
struct U3Cget_camerasU3Ed__11_tE58A39B31B78AE23133940A06A0733EA5F99B3C3  : public RuntimeObject
{
	// System.Int32 UnityEngine.Rendering.VolumeDebugSettings`1/<get_cameras>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Camera UnityEngine.Rendering.VolumeDebugSettings`1/<get_cameras>d__11::<>2__current
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.Rendering.VolumeDebugSettings`1/<get_cameras>d__11::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.List`1/Enumerator<T> UnityEngine.Rendering.VolumeDebugSettings`1/<get_cameras>d__11::<>7__wrap1
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___U3CU3E7__wrap1_3;
};

// UnityEngine.UIElements.StyleEnum`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
typedef Il2CppFullySharedGenericStruct StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5;

// UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct VisualElementScheduledItem_1_tC55C6DAB31FBA21565DAE09DE6BA236327F029E2 : public BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A {};

// System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0 : public RuntimeObject {};

// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData> UnityEngine.UIElements.ComputedStyle::inheritedData
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData> UnityEngine.UIElements.ComputedStyle::layoutData
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData> UnityEngine.UIElements.ComputedStyle::rareData
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData> UnityEngine.UIElements.ComputedStyle::transformData
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData> UnityEngine.UIElements.ComputedStyle::transitionData
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData> UnityEngine.UIElements.ComputedStyle::visualData
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.ComputedStyle::yogaNode
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.ComputedStyle::customProperties
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	// System.Int64 UnityEngine.UIElements.ComputedStyle::matchingRulesHash
	int64_t ___matchingRulesHash_8;
	// System.Single UnityEngine.UIElements.ComputedStyle::dpiScaling
	float ___dpiScaling_9;
	// UnityEngine.UIElements.ComputedTransitionProperty[] UnityEngine.UIElements.ComputedStyle::computedTransitions
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.UIElements.DragEventsProcessor
struct DragEventsProcessor_tC4594177C458D0DE91C0A4D1017CEF93DA69C9B6  : public RuntimeObject
{
	// System.Boolean UnityEngine.UIElements.DragEventsProcessor::m_IsRegistered
	bool ___m_IsRegistered_0;
	// UnityEngine.UIElements.DragEventsProcessor/DragState UnityEngine.UIElements.DragEventsProcessor::m_DragState
	int32_t ___m_DragState_1;
	// UnityEngine.Vector3 UnityEngine.UIElements.DragEventsProcessor::m_Start
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Start_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.DragEventsProcessor::m_Target
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Target_3;
	// UnityEngine.UIElements.DefaultDragAndDropClient UnityEngine.UIElements.DragEventsProcessor::dragAndDropClient
	DefaultDragAndDropClient_t22E34F0CC0902F8BB146736C13745F686C8E8BE3* ___dragAndDropClient_4;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localFlipsWinding
	bool ___localFlipsWinding_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::worldFlipsWinding
	bool ___worldFlipsWinding_16;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_17;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenStencilRef
	int32_t ___childrenStencilRef_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenMaskDepth
	int32_t ___childrenMaskDepth_19;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_20;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_21;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_22;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_23;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_24;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_25;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_26;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_27;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_28;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_29;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::colorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID_30;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderLeftColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderTopColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderRightColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderBottomColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::tintColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_37;
	// UnityEngine.Color UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_39;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_22;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_23;
	int32_t ___displacementUVStart_24;
	int32_t ___displacementUVEnd_25;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_39;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_22;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_23;
	int32_t ___displacementUVStart_24;
	int32_t ___displacementUVEnd_25;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_39;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.UIElements.StyleLength
struct StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 
{
	// UnityEngine.UIElements.Length UnityEngine.UIElements.StyleLength::m_Value
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleLength::m_Keyword
	int32_t ___m_Keyword_1;
};

// System.WeakReference`1<System.Object>
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE  : public RuntimeObject
{
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.UIElements.ListViewDragger
struct ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD  : public DragEventsProcessor_tC4594177C458D0DE91C0A4D1017CEF93DA69C9B6
{
	// UnityEngine.UIElements.ListViewDragger/DragPosition UnityEngine.UIElements.ListViewDragger::m_LastDragPosition
	DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660 ___m_LastDragPosition_5;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ListViewDragger::m_DragHoverBar
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_DragHoverBar_6;
	// UnityEngine.UIElements.ICollectionDragAndDropController UnityEngine.UIElements.ListViewDragger::<dragAndDropController>k__BackingField
	RuntimeObject* ___U3CdragAndDropControllerU3Ek__BackingField_7;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField_9;
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField_10;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_15;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList_16;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag_17;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_18;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_19;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_20;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPseudoPadding
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding_22;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData_23;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout_24;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox_25;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox_27;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache_29;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache_30;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip_31;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup_32;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_WorldClipIsInfinite
	bool ___m_WorldClipIsInfinite_33;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_35;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_36;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_37;
	// System.Int32 UnityEngine.UIElements.VisualElement::<containedPointerIds>k__BackingField
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField_38;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_39;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___U3CyogaNodeU3Ek__BackingField_40;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style_41;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext_42;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_43;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_44;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_45;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_46;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField_47;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElement::k_GenerateVisualContentMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker_48;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_49;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial_51;
	// System.UInt32 UnityEngine.UIElements.VisualElement::m_NextParentCachedVersion
	uint32_t ___m_NextParentCachedVersion_53;
	// System.UInt32 UnityEngine.UIElements.VisualElement::m_NextParentRequiredVersion
	uint32_t ___m_NextParentRequiredVersion_54;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_CachedNextParentWithEventCallback
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedNextParentWithEventCallback_55;
	// System.Int32 UnityEngine.UIElements.VisualElement::m_EventCallbackCategories
	int32_t ___m_EventCallbackCategories_56;
	// System.Int32 UnityEngine.UIElements.VisualElement::m_CachedEventCallbackParentCategories
	int32_t ___m_CachedEventCallbackParentCategories_57;
	// System.Int32 UnityEngine.UIElements.VisualElement::m_DefaultActionEventCategories
	int32_t ___m_DefaultActionEventCategories_58;
	// System.Int32 UnityEngine.UIElements.VisualElement::m_DefaultActionAtTargetEventCategories
	int32_t ___m_DefaultActionAtTargetEventCategories_59;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData_61;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField_63;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_64;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_65;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent_66;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent_67;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children_69;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField_70;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualElement::m_VisualTreeAssetSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource_71;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess_73;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList_74;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations_76;
};

struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey_8;
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_11;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList_12;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey_13;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_14;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect_34;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial_50;
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextParentVersion
	uint32_t ___s_NextParentVersion_52;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData_60;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList_68;
	// UnityEngine.UIElements.VisualElement/CustomStyleAccess UnityEngine.UIElements.VisualElement::s_CustomStyleAccess
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess_72;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath_75;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Rendering.Volume,System.Boolean>
struct Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Int32>
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9  : public MulticastDelegate_t
{
};

// System.Predicate`1<System.ValueTuple`2<System.String,System.Type>>
struct Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.UIElements.BindableElement
struct BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	// UnityEngine.UIElements.IBinding UnityEngine.UIElements.BindableElement::<binding>k__BackingField
	RuntimeObject* ___U3CbindingU3Ek__BackingField_77;
	// System.String UnityEngine.UIElements.BindableElement::<bindingPath>k__BackingField
	String_t* ___U3CbindingPathU3Ek__BackingField_78;
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.UIElements.ListViewDraggerAnimated
struct ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5  : public ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD
{
	// System.Int32 UnityEngine.UIElements.ListViewDraggerAnimated::m_DragStartIndex
	int32_t ___m_DragStartIndex_8;
	// System.Int32 UnityEngine.UIElements.ListViewDraggerAnimated::m_CurrentIndex
	int32_t ___m_CurrentIndex_9;
	// System.Single UnityEngine.UIElements.ListViewDraggerAnimated::m_SelectionHeight
	float ___m_SelectionHeight_10;
	// System.Single UnityEngine.UIElements.ListViewDraggerAnimated::m_LocalOffsetOnStart
	float ___m_LocalOffsetOnStart_11;
	// UnityEngine.Vector3 UnityEngine.UIElements.ListViewDraggerAnimated::m_CurrentPointerPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CurrentPointerPosition_12;
	// UnityEngine.UIElements.ReusableCollectionItem UnityEngine.UIElements.ListViewDraggerAnimated::m_Item
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___m_Item_13;
	// UnityEngine.UIElements.ReusableCollectionItem UnityEngine.UIElements.ListViewDraggerAnimated::m_OffsetItem
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___m_OffsetItem_14;
};

// UnityEngine.UIElements.ScrollView
struct ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	// UnityEngine.UIElements.ScrollerVisibility UnityEngine.UIElements.ScrollView::m_HorizontalScrollerVisibility
	int32_t ___m_HorizontalScrollerVisibility_77;
	// UnityEngine.UIElements.ScrollerVisibility UnityEngine.UIElements.ScrollView::m_VerticalScrollerVisibility
	int32_t ___m_VerticalScrollerVisibility_78;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ScrollView::m_AttachedRootVisualContainer
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_AttachedRootVisualContainer_79;
	// System.Single UnityEngine.UIElements.ScrollView::m_SingleLineHeight
	float ___m_SingleLineHeight_80;
	// System.Single UnityEngine.UIElements.ScrollView::m_HorizontalPageSize
	float ___m_HorizontalPageSize_81;
	// System.Single UnityEngine.UIElements.ScrollView::m_VerticalPageSize
	float ___m_VerticalPageSize_82;
	// System.Single UnityEngine.UIElements.ScrollView::m_ScrollDecelerationRate
	float ___m_ScrollDecelerationRate_84;
	// System.Single UnityEngine.UIElements.ScrollView::m_Elasticity
	float ___m_Elasticity_86;
	// UnityEngine.UIElements.ScrollView/TouchScrollBehavior UnityEngine.UIElements.ScrollView::m_TouchScrollBehavior
	int32_t ___m_TouchScrollBehavior_87;
	// UnityEngine.UIElements.ScrollView/NestedInteractionKind UnityEngine.UIElements.ScrollView::m_NestedInteractionKind
	int32_t ___m_NestedInteractionKind_88;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ScrollView::<contentViewport>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CcontentViewportU3Ek__BackingField_89;
	// UnityEngine.UIElements.Scroller UnityEngine.UIElements.ScrollView::<horizontalScroller>k__BackingField
	Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8* ___U3ChorizontalScrollerU3Ek__BackingField_90;
	// UnityEngine.UIElements.Scroller UnityEngine.UIElements.ScrollView::<verticalScroller>k__BackingField
	Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8* ___U3CverticalScrollerU3Ek__BackingField_91;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ScrollView::m_ContentContainer
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ContentContainer_92;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ScrollView::m_ContentAndVerticalScrollContainer
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ContentAndVerticalScrollContainer_93;
	// UnityEngine.UIElements.ScrollViewMode UnityEngine.UIElements.ScrollView::m_Mode
	int32_t ___m_Mode_110;
	// System.Int32 UnityEngine.UIElements.ScrollView::m_ScrollingPointerId
	int32_t ___m_ScrollingPointerId_111;
	// UnityEngine.Vector2 UnityEngine.UIElements.ScrollView::m_StartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_StartPosition_112;
	// UnityEngine.Vector2 UnityEngine.UIElements.ScrollView::m_PointerStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartPosition_113;
	// UnityEngine.Vector2 UnityEngine.UIElements.ScrollView::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_114;
	// UnityEngine.Vector2 UnityEngine.UIElements.ScrollView::m_SpringBackVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SpringBackVelocity_115;
	// UnityEngine.Vector2 UnityEngine.UIElements.ScrollView::m_LowBounds
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LowBounds_116;
	// UnityEngine.Vector2 UnityEngine.UIElements.ScrollView::m_HighBounds
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_HighBounds_117;
	// System.Single UnityEngine.UIElements.ScrollView::m_LastVelocityLerpTime
	float ___m_LastVelocityLerpTime_118;
	// System.Boolean UnityEngine.UIElements.ScrollView::m_StartedMoving
	bool ___m_StartedMoving_119;
	// System.Boolean UnityEngine.UIElements.ScrollView::m_TouchStoppedVelocity
	bool ___m_TouchStoppedVelocity_120;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ScrollView::m_CapturedTarget
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CapturedTarget_121;
	// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.PointerMoveEvent> UnityEngine.UIElements.ScrollView::m_CapturedTargetPointerMoveCallback
	EventCallback_1_t7C6768AD962B0B50514570724A38E07DA18FB1FA* ___m_CapturedTargetPointerMoveCallback_122;
	// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.PointerUpEvent> UnityEngine.UIElements.ScrollView::m_CapturedTargetPointerUpCallback
	EventCallback_1_tE2BCC4FFB156A2716749F7BDD0036A743B039913* ___m_CapturedTargetPointerUpCallback_123;
	// UnityEngine.UIElements.IVisualElementScheduledItem UnityEngine.UIElements.ScrollView::m_PostPointerUpAnimation
	RuntimeObject* ___m_PostPointerUpAnimation_124;
};

struct ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9_StaticFields
{
	// System.Single UnityEngine.UIElements.ScrollView::k_DefaultScrollDecelerationRate
	float ___k_DefaultScrollDecelerationRate_83;
	// System.Single UnityEngine.UIElements.ScrollView::k_DefaultElasticity
	float ___k_DefaultElasticity_85;
	// System.String UnityEngine.UIElements.ScrollView::ussClassName
	String_t* ___ussClassName_94;
	// System.String UnityEngine.UIElements.ScrollView::viewportUssClassName
	String_t* ___viewportUssClassName_95;
	// System.String UnityEngine.UIElements.ScrollView::horizontalVariantViewportUssClassName
	String_t* ___horizontalVariantViewportUssClassName_96;
	// System.String UnityEngine.UIElements.ScrollView::verticalVariantViewportUssClassName
	String_t* ___verticalVariantViewportUssClassName_97;
	// System.String UnityEngine.UIElements.ScrollView::verticalHorizontalVariantViewportUssClassName
	String_t* ___verticalHorizontalVariantViewportUssClassName_98;
	// System.String UnityEngine.UIElements.ScrollView::contentAndVerticalScrollUssClassName
	String_t* ___contentAndVerticalScrollUssClassName_99;
	// System.String UnityEngine.UIElements.ScrollView::contentUssClassName
	String_t* ___contentUssClassName_100;
	// System.String UnityEngine.UIElements.ScrollView::horizontalVariantContentUssClassName
	String_t* ___horizontalVariantContentUssClassName_101;
	// System.String UnityEngine.UIElements.ScrollView::verticalVariantContentUssClassName
	String_t* ___verticalVariantContentUssClassName_102;
	// System.String UnityEngine.UIElements.ScrollView::verticalHorizontalVariantContentUssClassName
	String_t* ___verticalHorizontalVariantContentUssClassName_103;
	// System.String UnityEngine.UIElements.ScrollView::hScrollerUssClassName
	String_t* ___hScrollerUssClassName_104;
	// System.String UnityEngine.UIElements.ScrollView::vScrollerUssClassName
	String_t* ___vScrollerUssClassName_105;
	// System.String UnityEngine.UIElements.ScrollView::horizontalVariantUssClassName
	String_t* ___horizontalVariantUssClassName_106;
	// System.String UnityEngine.UIElements.ScrollView::verticalVariantUssClassName
	String_t* ___verticalVariantUssClassName_107;
	// System.String UnityEngine.UIElements.ScrollView::verticalHorizontalVariantUssClassName
	String_t* ___verticalHorizontalVariantUssClassName_108;
	// System.String UnityEngine.UIElements.ScrollView::scrollVariantUssClassName
	String_t* ___scrollVariantUssClassName_109;
};

// UnityEngine.Rendering.VolumeComponent
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.Rendering.VolumeComponent::active
	bool ___active_4;
	// System.String UnityEngine.Rendering.VolumeComponent::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_5;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.VolumeParameter> UnityEngine.Rendering.VolumeComponent::<parameters>k__BackingField
	ReadOnlyCollection_1_tE414953665CCBE1BFF28E8E32C184621ADDA4B76* ___U3CparametersU3Ek__BackingField_6;
};

// UnityEngine.Rendering.VolumeProfile
struct VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeProfile::components
	List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* ___components_4;
	// System.Boolean UnityEngine.Rendering.VolumeProfile::isDirty
	bool ___isDirty_5;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.UIElements.BaseVerticalCollectionView
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE  : public BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C
{
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.Object>> UnityEngine.UIElements.BaseVerticalCollectionView::onItemsChosen
	Action_1_tCB2600FFD386071D232B22D0FFBB8989B853DFD5* ___onItemsChosen_79;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.Object>> UnityEngine.UIElements.BaseVerticalCollectionView::onSelectionChange
	Action_1_tCB2600FFD386071D232B22D0FFBB8989B853DFD5* ___onSelectionChange_80;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.Int32>> UnityEngine.UIElements.BaseVerticalCollectionView::onSelectedIndicesChange
	Action_1_t68F947CFF3E836EB3A2C880E204C2D89F5AEB115* ___onSelectedIndicesChange_81;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.UIElements.BaseVerticalCollectionView::itemIndexChanged
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___itemIndexChanged_82;
	// System.Action UnityEngine.UIElements.BaseVerticalCollectionView::itemsSourceChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___itemsSourceChanged_83;
	// System.Func`2<System.Int32,System.Int32> UnityEngine.UIElements.BaseVerticalCollectionView::m_GetItemId
	Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___m_GetItemId_84;
	// UnityEngine.UIElements.SelectionType UnityEngine.UIElements.BaseVerticalCollectionView::m_SelectionType
	int32_t ___m_SelectionType_85;
	// System.Boolean UnityEngine.UIElements.BaseVerticalCollectionView::m_HorizontalScrollingEnabled
	bool ___m_HorizontalScrollingEnabled_87;
	// UnityEngine.UIElements.AlternatingRowBackground UnityEngine.UIElements.BaseVerticalCollectionView::m_ShowAlternatingRowBackgrounds
	int32_t ___m_ShowAlternatingRowBackgrounds_88;
	// System.Single UnityEngine.UIElements.BaseVerticalCollectionView::m_FixedItemHeight
	float ___m_FixedItemHeight_90;
	// System.Boolean UnityEngine.UIElements.BaseVerticalCollectionView::m_ItemHeightIsInline
	bool ___m_ItemHeightIsInline_91;
	// UnityEngine.UIElements.CollectionVirtualizationMethod UnityEngine.UIElements.BaseVerticalCollectionView::m_VirtualizationMethod
	int32_t ___m_VirtualizationMethod_92;
	// UnityEngine.UIElements.ScrollView UnityEngine.UIElements.BaseVerticalCollectionView::m_ScrollView
	ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* ___m_ScrollView_93;
	// UnityEngine.UIElements.CollectionViewController UnityEngine.UIElements.BaseVerticalCollectionView::m_ViewController
	CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* ___m_ViewController_94;
	// UnityEngine.UIElements.CollectionVirtualizationController UnityEngine.UIElements.BaseVerticalCollectionView::m_VirtualizationController
	CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801* ___m_VirtualizationController_95;
	// UnityEngine.UIElements.KeyboardNavigationManipulator UnityEngine.UIElements.BaseVerticalCollectionView::m_NavigationManipulator
	KeyboardNavigationManipulator_t7E9BA3568ADC1660C4E09B924ECD457E33B835B3* ___m_NavigationManipulator_96;
	// UnityEngine.Vector2 UnityEngine.UIElements.BaseVerticalCollectionView::m_ScrollOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ScrollOffset_97;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UIElements.BaseVerticalCollectionView::m_SelectedIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_SelectedIds_98;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UIElements.BaseVerticalCollectionView::m_SelectedIndices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_SelectedIndices_99;
	// System.Collections.Generic.List`1<System.Object> UnityEngine.UIElements.BaseVerticalCollectionView::m_SelectedItems
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_SelectedItems_100;
	// System.Single UnityEngine.UIElements.BaseVerticalCollectionView::m_LastHeight
	float ___m_LastHeight_101;
	// System.Boolean UnityEngine.UIElements.BaseVerticalCollectionView::m_IsRangeSelectionDirectionUp
	bool ___m_IsRangeSelectionDirectionUp_102;
	// UnityEngine.UIElements.ListViewDragger UnityEngine.UIElements.BaseVerticalCollectionView::m_Dragger
	ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* ___m_Dragger_103;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.UIElements.BaseVerticalCollectionView::m_ItemIndexChangedCallback
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___m_ItemIndexChangedCallback_105;
	// System.Action UnityEngine.UIElements.BaseVerticalCollectionView::m_ItemsSourceChangedCallback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_ItemsSourceChangedCallback_106;
	// UnityEngine.Vector3 UnityEngine.UIElements.BaseVerticalCollectionView::m_TouchDownPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_TouchDownPosition_116;
};

struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.ReusableCollectionItem> UnityEngine.UIElements.BaseVerticalCollectionView::k_EmptyItems
	List_1_t42A86FE68C8321F340DE626A644141DAF4A411E7* ___k_EmptyItems_86;
	// System.Int32 UnityEngine.UIElements.BaseVerticalCollectionView::s_DefaultItemHeight
	int32_t ___s_DefaultItemHeight_89;
	// UnityEngine.UIElements.CustomStyleProperty`1<System.Int32> UnityEngine.UIElements.BaseVerticalCollectionView::s_ItemHeightProperty
	CustomStyleProperty_1_t6871E5DBF19AB4DC7E1134B32A03B7A458D52E9F ___s_ItemHeightProperty_104;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::ussClassName
	String_t* ___ussClassName_107;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::borderUssClassName
	String_t* ___borderUssClassName_108;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::itemUssClassName
	String_t* ___itemUssClassName_109;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::dragHoverBarUssClassName
	String_t* ___dragHoverBarUssClassName_110;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::itemDragHoverUssClassName
	String_t* ___itemDragHoverUssClassName_111;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::itemSelectedVariantUssClassName
	String_t* ___itemSelectedVariantUssClassName_112;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::itemAlternativeBackgroundUssClassName
	String_t* ___itemAlternativeBackgroundUssClassName_113;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::listScrollViewUssClassName
	String_t* ___listScrollViewUssClassName_114;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::backgroundFillUssClassName
	String_t* ___backgroundFillUssClassName_115;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Rendering.Volume
struct Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityEngine.Rendering.Volume::m_IsGlobal
	bool ___m_IsGlobal_4;
	// System.Single UnityEngine.Rendering.Volume::priority
	float ___priority_5;
	// System.Single UnityEngine.Rendering.Volume::blendDistance
	float ___blendDistance_6;
	// System.Single UnityEngine.Rendering.Volume::weight
	float ___weight_7;
	// UnityEngine.Rendering.VolumeProfile UnityEngine.Rendering.Volume::sharedProfile
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___sharedProfile_8;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.Rendering.Volume::m_Colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders_9;
	// System.Int32 UnityEngine.Rendering.Volume::m_PreviousLayer
	int32_t ___m_PreviousLayer_10;
	// System.Single UnityEngine.Rendering.Volume::m_PreviousPriority
	float ___m_PreviousPriority_11;
	// UnityEngine.Rendering.VolumeProfile UnityEngine.Rendering.Volume::m_InternalProfile
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___m_InternalProfile_12;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rendering.Volume[]
struct VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959  : public RuntimeArray
{
	ALIGN_FIELD (8) Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* m_Items[1];

	inline Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rendering.VolumeParameter[,]
struct VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D  : public RuntimeArray
{
	ALIGN_FIELD (8) VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* m_Items[1];

	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// UnityEngine.UIElements.StyleEnum`1<T> UnityEngine.UIElements.StyleEnum`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::op_Implicit(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1_op_Implicit_m7A7112971764E232021D2ACB3A66B7F785AF604A_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___v0, StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleEnum`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::op_Equality(UnityEngine.UIElements.StyleEnum`1<T>,UnityEngine.UIElements.StyleEnum`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_op_Equality_m79B8FC8FEE64AB2C6664261B584A6AA66FF66B7F_gshared (/*UnityEngine.UIElements.StyleEnum`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5 ___lhs0, /*UnityEngine.UIElements.StyleEnum`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_gshared (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::FindIndex(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mE810B96CFE4683761086D777FD5947FA66EA9255_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___match0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGet<System.Object>(System.Type,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_m94F2608D83F12FCFA1661C7D7EF19C26A0515933_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___type0, RuntimeObject** ___component1, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Component_GetComponents_TisIl2CppFullySharedGenericAny_mD0F0A24D99D5E839646E6037D7E2DE05A9E1B67D_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisIl2CppFullySharedGenericAny_m3F416675DC7A5572025B02ED373C41AD9ED8F6C4_gshared (RuntimeObject* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisIl2CppFullySharedGenericAny_mCC98E894875B57F5F4299D77112F26131A10649F_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_SequenceEqual_TisIl2CppFullySharedGenericAny_mBFDDFC7FE4B8D86F86B07E39D2B7EF7CEE06B123_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIl2CppFullySharedGenericAny_m7E4FCA28B813E61E3F552DAEB59FD0586B67077A_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare0, const RuntimeMethod* method) ;

// UnityEngine.UIElements.ListViewDragger UnityEngine.UIElements.BaseVerticalCollectionView::get_dragger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* BaseVerticalCollectionView_get_dragger_m561975581D087B9C51C90CDFC1D68EE6CECD9446_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.ListViewDraggerAnimated::get_isDragging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListViewDraggerAnimated_get_isDragging_mD3F1699680ED7437E060BABDBC817F537AA0EDF4 (ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UIElements.ReusableCollectionItem::get_index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.ReusableCollectionItem UnityEngine.UIElements.ListViewDraggerAnimated::get_draggedItem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ListViewDraggerAnimated_get_draggedItem_m883BB528AA8A39239BD882AC45FC24981C45E5EC_inline (ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.IStyle UnityEngine.UIElements.VisualElement::get_style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleEnum`1<T> UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>::op_Implicit(T)
inline StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030 (int32_t ___v0, const RuntimeMethod* method)
{
	StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 il2cppRetVal;
	((  void (*) (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5*, const RuntimeMethod*))StyleEnum_1_op_Implicit_m7A7112971764E232021D2ACB3A66B7F785AF604A_gshared)((Il2CppFullySharedGenericStruct)&___v0, (StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>::op_Equality(UnityEngine.UIElements.StyleEnum`1<T>,UnityEngine.UIElements.StyleEnum`1<T>)
inline bool StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD (StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 ___lhs0, StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 ___rhs1, const RuntimeMethod* method)
{
	return ((  bool (*) (/*UnityEngine.UIElements.StyleEnum`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5, /*UnityEngine.UIElements.StyleEnum`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5, const RuntimeMethod*))StyleEnum_1_op_Equality_m79B8FC8FEE64AB2C6664261B584A6AA66FF66B7F_gshared)((StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5)&___lhs0, (StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5)&___rhs1, method);
}
// System.Single UnityEngine.UIElements.BaseVerticalCollectionView::get_lastHeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaseVerticalCollectionView_get_lastHeight_mEDABF6845E379DCA0216106F56FAF84B952DA1F2_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// UnityEngine.UIElements.ScrollView UnityEngine.UIElements.BaseVerticalCollectionView::get_scrollView()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* BaseVerticalCollectionView_get_scrollView_mB4F44C6276CC57A0D8AD030F3C396650532E83CC_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.CollectionVirtualizationController::.ctor(UnityEngine.UIElements.ScrollView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionVirtualizationController__ctor_m15661787A5CF03B2A2EC3250592571C64A0174D2 (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801* __this, ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* ___scrollView0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::AddToClassList(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, String_t* ___className0, const RuntimeMethod* method) ;
// UnityEngine.UIElements.CollectionViewController UnityEngine.UIElements.BaseVerticalCollectionView::get_viewController()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
// System.Collections.IList UnityEngine.UIElements.BaseVerticalCollectionView::get_itemsSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496 (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.ReusableCollectionItem::set_index(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Clear_m201F95F3031691823F39BAEC5ED378C82F34AC7F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.AlternatingRowBackground UnityEngine.UIElements.BaseVerticalCollectionView::get_showAlternatingRowBackgrounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseVerticalCollectionView_get_showAlternatingRowBackgrounds_m47BFEE57E56D46D6C705C7F7DD6C8BA5DBB2B97A (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::EnableInClassList(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, String_t* ___className0, bool ___enable1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.ReusableCollectionItem::set_id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReusableCollectionItem_set_id_m681AB8AB77EE8E8E0B0105C0955B7BCF1FBDE1B7_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UIElements.VisualElement::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::BringToFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_BringToFront_m9E1C19327401C3AC5A62EC6432E0DAC4457BC59E (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::PlaceBehind(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_PlaceBehind_m248F49B17935C60E15E4BC5241D68A2713932CFF (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___sibling0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::SendToBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_SendToBack_m5452936AAAEF38D9932278786E0BCCD17BECE511 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Boolean UnityEngine.UIElements.VisualElement::FindElementInTree(UnityEngine.UIElements.VisualElement,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_FindElementInTree_mE71D464CD81A416B9A09C44392835A80D0895D59 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___outChildIndexes1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, method);
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::ElementAtTreePath(System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_ElementAtTreePath_m83234CBC5C58A6FEB70F3DCB6BF67C9D1D3D1DED (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___childIndexes0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.UIElements.VisualElement::get_layout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ScrollView::get_contentViewport()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::RemoveFromHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::Add(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___child0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleFloat UnityEngine.UIElements.StyleFloat::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 StyleFloat_op_Implicit_m534A028510332FD68BBBAF6C96028FAE936A2DDB (float ___v0, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::get_hierarchy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UIElements.VisualElement/Hierarchy::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hierarchy_get_childCount_mAD31B42C0FF9B64AAF6A8CF23F22024B3F9542D5 (Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Hierarchy_get_Item_mBA5811C28D9E7FA48D0F10603A95F8CF248C3467 (Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677* __this, int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleLength::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019 (float ___v0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::.ctor(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementScheduledItem__ctor_mB5C5818F39CDC5846487311B47B3A5BEEA840E68 (BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___handler0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Type>>::get_Item(System.Int32)
inline ValueTuple_2_tB97F43966F527B2125B7A49F02F05E9A07A60494 List_1_get_Item_mDF487B1FB318EBF81C972FCCD0AECA6B9B6E9286 (List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	ValueTuple_2_tB97F43966F527B2125B7A49F02F05E9A07A60494 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Predicate`1<System.ValueTuple`2<System.String,System.Type>>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m2A873182717A1B746A08E8A60B68D63ACFD144BF (Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_gshared)((Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Type>>::FindIndex(System.Predicate`1<T>)
inline int32_t List_1_FindIndex_m6453765ACDCCF1261A26796F9EB601DDE15077F4 (List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* __this, Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, const RuntimeMethod*))List_1_FindIndex_mE810B96CFE4683761086D777FD5947FA66EA9255_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)___match0, method);
}
// System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Type>> UnityEngine.Rendering.VolumeManager::GetSupportedVolumeComponents(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* VolumeManager_GetSupportedVolumeComponents_mFF7C0C4BEF181DF17C3675221920BE568302F657 (Type_t* ___currentPipelineType0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.VolumeComponent UnityEngine.Rendering.VolumeStack::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* VolumeStack_GetComponent_mC7A2CE27A8A6F6A6A4B4B6EF14E190085A343844 (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Volume::HasInstantiatedProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Volume_HasInstantiatedProfile_mA1547160C1B93EC28AB7FDBDD23ED967B9B7A8F4 (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.VolumeProfile UnityEngine.Rendering.Volume::get_profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* Volume_get_profile_mB157C4D67D52CE6D3E8211D6587B0EF71102E43D (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGet<UnityEngine.Rendering.VolumeComponent>(System.Type,T&)
inline bool VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9 (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___type0, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1** ___component1, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1*, Type_t*, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1**, const RuntimeMethod*))VolumeProfile_TryGet_TisRuntimeObject_m94F2608D83F12FCFA1661C7D7EF19C26A0515933_gshared)(__this, ___type0, ___component1, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Volume::get_isGlobal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Volume_get_isGlobal_m09C1E1FB39D06DD9EC78DF276DE9A1FBE3E42763_inline (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisIl2CppFullySharedGenericAny_mD0F0A24D99D5E839646E6037D7E2DE05A9E1B67D_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, method);
	return (ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*)il2cppRetVal;
}
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.VolumeManager UnityEngine.Rendering.VolumeManager::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* VolumeManager_get_instance_m3D5ADFC04553CE0658A86B642CC9690C537DFA5C (const RuntimeMethod* method) ;
// UnityEngine.Rendering.Volume[] UnityEngine.Rendering.VolumeManager::GetVolumes(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* VolumeManager_GetVolumes_mCD6F01BC37F4C6833FF56635904021D3E087BBDA (VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask0, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.Rendering.Volume,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE062569723CD2676B37650ADE8A6BBE243E2CA72 (Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<UnityEngine.Rendering.Volume>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m83B576D3EAED3F16C09A9FBC62D8FE3E6357D055 (RuntimeObject* ___source0, Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* ___predicate1, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))Enumerable_Where_TisIl2CppFullySharedGenericAny_m3F416675DC7A5572025B02ED373C41AD9ED8F6C4_gshared)((RuntimeObject*)___source0, (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)___predicate1, method);
	return (RuntimeObject*)il2cppRetVal;
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse<UnityEngine.Rendering.Volume>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Reverse_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m07661B9A8A400FE659EAE193CEEED8F65CA80C5B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisIl2CppFullySharedGenericAny_mCC98E894875B57F5F4299D77112F26131A10649F_gshared)((RuntimeObject*)___source0, method);
	return (RuntimeObject*)il2cppRetVal;
}
// TSource[] System.Linq.Enumerable::ToArray<UnityEngine.Rendering.Volume>(System.Collections.Generic.IEnumerable`1<TSource>)
inline VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* Enumerable_ToArray_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mF1CBC672AB74D6AC77FB82DA8D177C30D1CDD7BB (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared)((RuntimeObject*)___source0, method);
	return (VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)il2cppRetVal;
}
// System.Void System.Func`2<System.Reflection.FieldInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m720E8683356B22FA89D3983D974FC700BDE279A3 (Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Reflection.FieldInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90 (RuntimeObject* ___source0, Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* ___predicate1, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))Enumerable_Where_TisIl2CppFullySharedGenericAny_m3F416675DC7A5572025B02ED373C41AD9ED8F6C4_gshared)((RuntimeObject*)___source0, (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)___predicate1, method);
	return (RuntimeObject*)il2cppRetVal;
}
// TSource[] System.Linq.Enumerable::ToArray<System.Reflection.FieldInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* Enumerable_ToArray_TisFieldInfo_t_m99A6AB02C6FC4690AD5DCDFCB0C9DE2F5CD5B145 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared)((RuntimeObject*)___source0, method);
	return (FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*)il2cppRetVal;
}
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<UnityEngine.Rendering.Volume>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_SequenceEqual_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAA30FA516DBB4BD439745E07A77E90D6AF0A2D21 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisIl2CppFullySharedGenericAny_mBFDDFC7FE4B8D86F86B07E39D2B7EF7CEE06B123_gshared)((RuntimeObject*)___first0, (RuntimeObject*)___second1, method);
}
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<UnityEngine.Rendering.Volume>(T[],T)
inline int32_t Array_IndexOf_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m4150F2AE8B4B55425B19967BA711A84415E259D2 (VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* ___array0, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Array_IndexOf_TisIl2CppFullySharedGenericAny_m7E4FCA28B813E61E3F552DAEB59FD0586B67077A_gshared)((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)___array0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.VolumeParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter__ctor_m1A76B3C6C284C912F55F7C7E6EF21A18AF3930D2 (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) ;
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___value0, int32_t ___type1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::set_Target(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_set_Target_m1DB05E14910747D2A74ACEB4C48028C4AEBFCF3D (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32)
inline void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___src0, ___srcLen1, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32,System.Int32)
inline void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___src0, ___srcStart1, ___srcLen2, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
inline void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726 (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___index0, il2cppRetVal, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(System.Int32,T)
inline void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, int32_t, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_length()
inline int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, const RuntimeMethod*))WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_capacity()
inline int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, const RuntimeMethod*))WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Sort(System.Func`3<T,T,System.Int32>)
inline void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94 (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare0, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___compare0, method);
}
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.ReusableCollectionItem> UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::get_activeItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_get_activeItems_m5771BE91B7EE5DD1CD69E13A60D9DAD9F81E8535_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___m_ActiveItems_3;
		return (RuntimeObject*)L_0;
	}
}
// System.Boolean UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::VisibleItemPredicate(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VerticalVirtualizationController_1_VisibleItemPredicate_mF74E98CD97471A785AC772347CC1112EE868CBF0_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, RuntimeObject* ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		V_0 = (bool)0;
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_0);
		ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* L_1;
		L_1 = BaseVerticalCollectionView_get_dragger_m561975581D087B9C51C90CDFC1D68EE6CECD9446_inline(L_0, NULL);
		V_1 = ((ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5*)IsInstClass((RuntimeObject*)L_1, ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5_il2cpp_TypeInfo_var));
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_2 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = ListViewDraggerAnimated_get_isDragging_mD3F1699680ED7437E060BABDBC817F537AA0EDF4(L_4, NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject* L_6 = ___i0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_6);
		int32_t L_7;
		L_7 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_6, NULL);
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_8 = V_1;
		NullCheck(L_8);
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_9;
		L_9 = ListViewDraggerAnimated_get_draggedItem_m883BB528AA8A39239BD882AC45FC24981C45E5EC_inline(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline(L_9, NULL);
		G_B4_0 = ((((int32_t)L_7) == ((int32_t)L_10))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B4_0 = 0;
	}

IL_003f:
	{
		V_0 = (bool)G_B4_0;
	}

IL_0040:
	{
		RuntimeObject* L_11 = ___i0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_11);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12;
		L_12 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_12, NULL);
		NullCheck(L_13);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_14;
		L_14 = InterfaceFuncInvoker0< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(16 /* UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle> UnityEngine.UIElements.IStyle::get_display() */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_13);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_15;
		L_15 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		bool L_16;
		L_16 = StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD(L_14, L_15, StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_0068;
		}
	}
	{
		bool L_17 = V_0;
		G_B8_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_0069;
	}

IL_0068:
	{
		G_B8_0 = 0;
	}

IL_0069:
	{
		V_3 = (bool)G_B8_0;
		goto IL_006c;
	}

IL_006c:
	{
		bool L_18 = V_3;
		return L_18;
	}
}
// T UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::get_firstVisibleItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_get_firstVisibleItem_m82CAFF6CE0A7E6C2097640ECD92EE8971182E59C_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___m_ActiveItems_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___m_VisibleItemPredicateDelegate_7;
		RuntimeObject* L_2;
		L_2 = InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), NULL, (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// T UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::get_lastVisibleItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___m_ActiveItems_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___m_VisibleItemPredicateDelegate_7;
		RuntimeObject* L_2;
		L_2 = InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), NULL, (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// System.Int32 UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::get_visibleItemCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VerticalVirtualizationController_1_get_visibleItemCount_m6808CEB4E53AC329802DC87298F99C249C3CF112_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___m_ActiveItems_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___m_VisibleItemPredicateDelegate_7;
		int32_t L_2;
		L_2 = InvokerFuncInvoker2< int32_t, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), NULL, (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// System.Int32 UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::get_lastVisibleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VerticalVirtualizationController_1_get_lastVisibleIndex_m9F891EADB85C9DB78B0EA7CFEE559669D4CD0D02_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), __this);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = ((RuntimeObject*)(L_1));
		if (L_1)
		{
			G_B2_0 = ((RuntimeObject*)(L_1));
			goto IL_0012;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)G_B2_0);
		int32_t L_2;
		L_2 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)G_B2_0, NULL);
		G_B3_0 = L_2;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::get_lastHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VerticalVirtualizationController_1_get_lastHeight_m2B0E6420EAB9557359C528A459EE84BDC1926D29_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_0);
		float L_1;
		L_1 = BaseVerticalCollectionView_get_lastHeight_mEDABF6845E379DCA0216106F56FAF84B952DA1F2_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::.ctor(UnityEngine.UIElements.BaseVerticalCollectionView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1__ctor_mDD14CF7DF7586CFCB5E6EF69BC643CF090377096_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___collectionView0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B2_0 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B2_1 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B1_0 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B1_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B4_2 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B4_3 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B3_2 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B3_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_0 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9__25_0_1;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E* L_2 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_3 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_3);
		InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)));
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_4 = L_3;
		((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9__25_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9__25_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9__25_1_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = NULL;
		G_B3_2 = G_B2_0;
		G_B3_3 = G_B2_1;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = NULL;
			G_B4_2 = G_B2_0;
			G_B4_3 = G_B2_1;
			goto IL_0040;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E* L_7 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_8);
		InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), L_8, (RuntimeObject*)L_7, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 15)));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = L_8;
		((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9__25_1_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9__25_1_2), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0040:
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_10 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		NullCheck(L_10);
		InvokerActionInvoker7< Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, bool, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), L_10, G_B4_2, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)G_B4_1, G_B4_0, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000));
		NullCheck(G_B4_3);
		G_B4_3->___m_Pool_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_3->___m_Pool_2), (void*)L_10);
		__this->___m_LastFocusedElementIndex_4 = (-1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_11 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_11, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___m_LastFocusedElementTreeChildIndexes_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastFocusedElementTreeChildIndexes_5), (void*)L_11);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_12 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		NullCheck(L_12);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_12);
		__this->___m_ScrollInsertionList_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ScrollInsertionList_8), (void*)L_12);
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_13 = ___collectionView0;
		NullCheck(L_13);
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_14;
		L_14 = BaseVerticalCollectionView_get_scrollView_mB4F44C6276CC57A0D8AD030F3C396650532E83CC_inline(L_13, NULL);
		CollectionVirtualizationController__ctor_m15661787A5CF03B2A2EC3250592571C64A0174D2((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this, L_14, NULL);
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_15 = ___collectionView0;
		__this->___m_CollectionView_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CollectionView_1), (void*)L_15);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_16 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		NullCheck(L_16);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_16);
		__this->___m_ActiveItems_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ActiveItems_3), (void*)L_16);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_17 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_17);
		InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), L_17, (RuntimeObject*)__this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 17)));
		__this->___m_VisibleItemPredicateDelegate_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VisibleItemPredicateDelegate_7), (void*)L_17);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_18, NULL);
		__this->___k_EmptyRows_9 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_EmptyRows_9), (void*)L_18);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_19 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this->___k_EmptyRows_9;
		il2cpp_codegen_runtime_class_init_inline(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		String_t* L_20 = ((BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_StaticFields*)il2cpp_codegen_static_fields_for(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var))->___backgroundFillUssClassName_115;
		NullCheck(L_19);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(L_19, L_20, NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::Refresh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_Refresh_mA648D405FBCF47E4BE5AAA5B52116A5811BA2B31_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, bool ___rebuild0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B9_0 = 0;
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(105 /* System.Boolean UnityEngine.UIElements.BaseVerticalCollectionView::HasValidDataAndBindings() */, L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_013c;
	}

IL_0014:
	{
		int32_t L_2 = (int32_t)__this->___m_FirstVisibleIndex_6;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___m_ActiveItems_3;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InvokerFuncInvoker1< RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), L_4, L_5);
		V_3 = L_6;
		RuntimeObject* L_7 = V_3;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_7);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8;
		L_8 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_8, NULL);
		NullCheck(L_9);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_10;
		L_10 = InterfaceFuncInvoker0< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(16 /* UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle> UnityEngine.UIElements.IStyle::get_display() */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_9);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_11;
		L_11 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		bool L_12;
		L_12 = StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD(L_10, L_11, StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var);
		V_4 = L_12;
		bool L_13 = ___rebuild0;
		V_5 = L_13;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_15 = V_0;
		bool L_16 = V_4;
		V_6 = (bool)((int32_t)((int32_t)L_15&(int32_t)L_16));
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_18 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_18);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_19;
		L_19 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_18, NULL);
		RuntimeObject* L_20 = V_3;
		RuntimeObject* L_21 = V_3;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_21);
		int32_t L_22;
		L_22 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_21, NULL);
		NullCheck(L_19);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(15 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeUnbindItem(UnityEngine.UIElements.ReusableCollectionItem,System.Int32) */, L_19, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_20, L_22);
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_23 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_23);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_24;
		L_24 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_23, NULL);
		RuntimeObject* L_25 = V_3;
		NullCheck(L_24);
		VirtualActionInvoker1< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* >::Invoke(16 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeDestroyItem(UnityEngine.UIElements.ReusableCollectionItem) */, L_24, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_25);
	}

IL_009a:
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_26 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)__this->___m_Pool_2;
		RuntimeObject* L_27 = V_3;
		NullCheck(L_26);
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), L_26, L_27);
		goto IL_0138;
	}

IL_00ac:
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_28 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496(L_28, NULL);
		if (!L_29)
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_31 = V_2;
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_32 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496(L_32, NULL);
		NullCheck((RuntimeObject*)L_33);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_33);
		G_B9_0 = ((((int32_t)L_31) < ((int32_t)L_34))? 1 : 0);
		goto IL_00d3;
	}

IL_00d2:
	{
		G_B9_0 = 0;
	}

IL_00d3:
	{
		V_7 = (bool)G_B9_0;
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_0121;
		}
	}
	{
		bool L_36 = V_0;
		bool L_37 = V_4;
		V_8 = (bool)((int32_t)((int32_t)L_36&(int32_t)L_37));
		bool L_38 = V_8;
		if (!L_38)
		{
			goto IL_011e;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_39 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_39);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_40;
		L_40 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_39, NULL);
		RuntimeObject* L_41 = V_3;
		RuntimeObject* L_42 = V_3;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_42);
		int32_t L_43;
		L_43 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_42, NULL);
		NullCheck(L_40);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(15 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeUnbindItem(UnityEngine.UIElements.ReusableCollectionItem,System.Int32) */, L_40, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_41, L_43);
		RuntimeObject* L_44 = V_3;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_44);
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_44, (-1), NULL);
		RuntimeObject* L_45 = V_3;
		int32_t L_46 = V_2;
		InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), __this, L_45, L_46);
	}

IL_011e:
	{
		goto IL_0137;
	}

IL_0121:
	{
		bool L_47 = V_4;
		V_9 = L_47;
		bool L_48 = V_9;
		if (!L_48)
		{
			goto IL_0137;
		}
	}
	{
		int32_t L_49 = V_1;
		int32_t L_50 = L_49;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
		VirtualActionInvoker1Invoker< int32_t >::Invoke(19 /* System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::ReleaseItem(System.Int32) */, __this, L_50);
	}

IL_0137:
	{
	}

IL_0138:
	{
		int32_t L_51 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_013c:
	{
		int32_t L_52 = V_1;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_53 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___m_ActiveItems_3;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)), il2cpp_rgctx_method(method->klass->rgctx_data, 26), L_53);
		V_10 = (bool)((((int32_t)L_52) < ((int32_t)L_54))? 1 : 0);
		bool L_55 = V_10;
		if (L_55)
		{
			goto IL_0014;
		}
	}
	{
		bool L_56 = ___rebuild0;
		V_11 = L_56;
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_0180;
		}
	}
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_58 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)__this->___m_Pool_2;
		NullCheck(L_58);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), L_58);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_59 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___m_ActiveItems_3;
		NullCheck(L_59);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)), il2cpp_rgctx_method(method->klass->rgctx_data, 28), L_59);
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_60 = (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9*)((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_60);
		VisualElement_Clear_m201F95F3031691823F39BAEC5ED378C82F34AC7F((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_60, NULL);
	}

IL_0180:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::Setup(T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_Setup_mC5415B4D4C6B65EB15FC1EB2EC4C85661E092CEA_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, RuntimeObject* ___recycledItem0, int32_t ___newIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B21_0 = 0;
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_0);
		ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* L_1;
		L_1 = BaseVerticalCollectionView_get_dragger_m561975581D087B9C51C90CDFC1D68EE6CECD9446_inline(L_0, NULL);
		V_0 = ((ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5*)IsInstClass((RuntimeObject*)L_1, ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5_il2cpp_TypeInfo_var));
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_2 = V_0;
		V_5 = (bool)((!(((RuntimeObject*)(ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = ListViewDraggerAnimated_get_isDragging_mD3F1699680ED7437E060BABDBC817F537AA0EDF4(L_4, NULL);
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_6 = V_0;
		NullCheck(L_6);
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_7;
		L_7 = ListViewDraggerAnimated_get_draggedItem_m883BB528AA8A39239BD882AC45FC24981C45E5EC_inline(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline(L_7, NULL);
		int32_t L_9 = ___newIndex1;
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0042;
		}
	}
	{
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_10 = V_0;
		NullCheck(L_10);
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_11;
		L_11 = ListViewDraggerAnimated_get_draggedItem_m883BB528AA8A39239BD882AC45FC24981C45E5EC_inline(L_10, NULL);
		RuntimeObject* L_12 = ___recycledItem0;
		G_B5_0 = ((((RuntimeObject*)(ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_11) == ((RuntimeObject*)(RuntimeObject*)L_12))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B5_0 = 1;
	}

IL_0043:
	{
		G_B7_0 = G_B5_0;
		goto IL_0046;
	}

IL_0045:
	{
		G_B7_0 = 0;
	}

IL_0046:
	{
		V_6 = (bool)G_B7_0;
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0275;
	}

IL_0051:
	{
		int32_t L_14 = ___newIndex1;
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_15 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496(L_15, NULL);
		NullCheck((RuntimeObject*)L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		V_7 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_00f7;
		}
	}
	{
		RuntimeObject* L_19 = ___recycledItem0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_19);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20;
		L_20 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_19);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_20, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_22;
		L_22 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)1, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		NullCheck(L_21);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(17 /* System.Void UnityEngine.UIElements.IStyle::set_display(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_21, L_22);
		RuntimeObject* L_23 = ___recycledItem0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_23);
		int32_t L_24;
		L_24 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_23, NULL);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00ba;
		}
	}
	{
		RuntimeObject* L_25 = ___recycledItem0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_25);
		int32_t L_26;
		L_26 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_25, NULL);
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_27 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496(L_27, NULL);
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
		G_B13_0 = ((((int32_t)L_26) < ((int32_t)L_29))? 1 : 0);
		goto IL_00bb;
	}

IL_00ba:
	{
		G_B13_0 = 0;
	}

IL_00bb:
	{
		V_8 = (bool)G_B13_0;
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00f2;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_31 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_31);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_32;
		L_32 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_31, NULL);
		RuntimeObject* L_33 = ___recycledItem0;
		RuntimeObject* L_34 = ___recycledItem0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_34);
		int32_t L_35;
		L_35 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_34, NULL);
		NullCheck(L_32);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(15 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeUnbindItem(UnityEngine.UIElements.ReusableCollectionItem,System.Int32) */, L_32, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_33, L_35);
		RuntimeObject* L_36 = ___recycledItem0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_36);
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_36, (-1), NULL);
	}

IL_00f2:
	{
		goto IL_0275;
	}

IL_00f7:
	{
		RuntimeObject* L_37 = ___recycledItem0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_37);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_38;
		L_38 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_37);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_38, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_40;
		L_40 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		NullCheck(L_39);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(17 /* System.Void UnityEngine.UIElements.IStyle::set_display(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_39, L_40);
		RuntimeObject* L_41 = ___recycledItem0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_41);
		int32_t L_42;
		L_42 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_41, NULL);
		int32_t L_43 = ___newIndex1;
		V_9 = (bool)((((int32_t)L_42) == ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_012c;
		}
	}
	{
		goto IL_0275;
	}

IL_012c:
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_45 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = BaseVerticalCollectionView_get_showAlternatingRowBackgrounds_m47BFEE57E56D46D6C705C7F7DD6C8BA5DBB2B97A(L_45, NULL);
		if (!L_46)
		{
			goto IL_0141;
		}
	}
	{
		int32_t L_47 = ___newIndex1;
		G_B21_0 = ((((int32_t)((int32_t)(L_47%2))) == ((int32_t)1))? 1 : 0);
		goto IL_0142;
	}

IL_0141:
	{
		G_B21_0 = 0;
	}

IL_0142:
	{
		V_1 = (bool)G_B21_0;
		RuntimeObject* L_48 = ___recycledItem0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_48);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_49;
		L_49 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_48);
		il2cpp_codegen_runtime_class_init_inline(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		String_t* L_50 = ((BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_StaticFields*)il2cpp_codegen_static_fields_for(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var))->___itemAlternativeBackgroundUssClassName_113;
		bool L_51 = V_1;
		NullCheck(L_49);
		VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365(L_49, L_50, L_51, NULL);
		RuntimeObject* L_52 = ___recycledItem0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_52);
		int32_t L_53;
		L_53 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_52, NULL);
		V_2 = L_53;
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_54 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_54);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_55;
		L_55 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_54, NULL);
		int32_t L_56 = ___newIndex1;
		NullCheck(L_55);
		int32_t L_57;
		L_57 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(11 /* System.Int32 UnityEngine.UIElements.CollectionViewController::GetIdForIndex(System.Int32) */, L_55, L_56);
		V_3 = L_57;
		RuntimeObject* L_58 = ___recycledItem0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_58);
		int32_t L_59;
		L_59 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_58, NULL);
		V_10 = (bool)((((int32_t)((((int32_t)L_59) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_60 = V_10;
		if (!L_60)
		{
			goto IL_01b1;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_61 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_61);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_62;
		L_62 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_61, NULL);
		RuntimeObject* L_63 = ___recycledItem0;
		RuntimeObject* L_64 = ___recycledItem0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_64);
		int32_t L_65;
		L_65 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_64, NULL);
		NullCheck(L_62);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(15 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeUnbindItem(UnityEngine.UIElements.ReusableCollectionItem,System.Int32) */, L_62, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_63, L_65);
	}

IL_01b1:
	{
		RuntimeObject* L_66 = ___recycledItem0;
		int32_t L_67 = ___newIndex1;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_66);
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_66, L_67, NULL);
		RuntimeObject* L_68 = ___recycledItem0;
		int32_t L_69 = V_3;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_68);
		ReusableCollectionItem_set_id_m681AB8AB77EE8E8E0B0105C0955B7BCF1FBDE1B7_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_68, L_69, NULL);
		int32_t L_70 = ___newIndex1;
		int32_t L_71 = (int32_t)__this->___m_FirstVisibleIndex_6;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_70, L_71));
		int32_t L_72 = V_4;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_73 = (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9*)((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_73);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_74;
		L_74 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(94 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_contentContainer() */, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_73);
		NullCheck(L_74);
		int32_t L_75;
		L_75 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_74, NULL);
		V_11 = (bool)((((int32_t)((((int32_t)L_72) < ((int32_t)L_75))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_76 = V_11;
		if (!L_76)
		{
			goto IL_0207;
		}
	}
	{
		RuntimeObject* L_77 = ___recycledItem0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_77);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_78;
		L_78 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_77);
		NullCheck(L_78);
		VisualElement_BringToFront_m9E1C19327401C3AC5A62EC6432E0DAC4457BC59E(L_78, NULL);
		goto IL_024f;
	}

IL_0207:
	{
		int32_t L_79 = V_4;
		V_12 = (bool)((((int32_t)((((int32_t)L_79) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_80 = V_12;
		if (!L_80)
		{
			goto IL_023c;
		}
	}
	{
		RuntimeObject* L_81 = ___recycledItem0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_81);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_82;
		L_82 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_81);
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_83 = (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9*)((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_83);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_84;
		L_84 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(94 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_contentContainer() */, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_83);
		int32_t L_85 = V_4;
		NullCheck(L_84);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_86;
		L_86 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_84, L_85, NULL);
		NullCheck(L_82);
		VisualElement_PlaceBehind_m248F49B17935C60E15E4BC5241D68A2713932CFF(L_82, L_86, NULL);
		goto IL_024f;
	}

IL_023c:
	{
		RuntimeObject* L_87 = ___recycledItem0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_87);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_88;
		L_88 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_87);
		NullCheck(L_88);
		VisualElement_SendToBack_m5452936AAAEF38D9932278786E0BCCD17BECE511(L_88, NULL);
	}

IL_024f:
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_89 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_89);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_90;
		L_90 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_89, NULL);
		RuntimeObject* L_91 = ___recycledItem0;
		int32_t L_92 = ___newIndex1;
		NullCheck(L_90);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(14 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeBindItem(UnityEngine.UIElements.ReusableCollectionItem,System.Int32) */, L_90, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_91, L_92);
		RuntimeObject* L_93 = ___recycledItem0;
		int32_t L_94 = V_2;
		InvokerActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), __this, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_93, L_94);
	}

IL_0275:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::OnFocus(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_OnFocus_m6A0CFE10225E6DF432E1A83349FD0D3338E2E2C8_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___leafTarget0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2A9C63083A2E1F3154B162888A0D4FD37ED0C247_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* V_4 = NULL;
	bool V_5 = false;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___leafTarget0;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_1 = (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9*)((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_1);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2;
		L_2 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(94 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_contentContainer() */, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_1);
		V_0 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_0) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_00c4;
	}

IL_0018:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___m_LastFocusedElementTreeChildIndexes_5;
		NullCheck(L_4);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_4, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_5 = (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9*)((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_5);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6;
		L_6 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(94 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_contentContainer() */, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_5);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = ___leafTarget0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___m_LastFocusedElementTreeChildIndexes_5;
		NullCheck(L_6);
		bool L_9;
		L_9 = VisualElement_FindElementInTree_mE71D464CD81A416B9A09C44392835A80D0895D59(L_6, L_7, L_8, NULL);
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_00bb;
		}
	}
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_11 = (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9*)((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_11);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12;
		L_12 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(94 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_contentContainer() */, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_11);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___m_LastFocusedElementTreeChildIndexes_5;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_13, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_12);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15;
		L_15 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_12, L_14, NULL);
		V_2 = L_15;
		NullCheck((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(15 /* System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.ReusableCollectionItem> UnityEngine.UIElements.CollectionVirtualizationController::get_activeItems() */, (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.ReusableCollectionItem>::GetEnumerator() */, IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A_il2cpp_TypeInfo_var, L_16);
		V_3 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_18 = V_3;
					if (!L_18)
					{
						goto IL_00aa;
					}
				}
				{
					RuntimeObject* L_19 = V_3;
					NullCheck((RuntimeObject*)L_19);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				}

IL_00aa:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0096_1;
			}

IL_006c_1:
			{
				RuntimeObject* L_20 = V_3;
				NullCheck(L_20);
				ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_21;
				L_21 = InterfaceFuncInvoker0< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.ReusableCollectionItem>::get_Current() */, IEnumerator_1_t2A9C63083A2E1F3154B162888A0D4FD37ED0C247_il2cpp_TypeInfo_var, L_20);
				V_4 = L_21;
				ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_22 = V_4;
				NullCheck(L_22);
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23;
				L_23 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, L_22);
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24 = V_2;
				V_5 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_23) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_24))? 1 : 0);
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_0095_1;
				}
			}
			{
				ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_26 = V_4;
				NullCheck(L_26);
				int32_t L_27;
				L_27 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline(L_26, NULL);
				__this->___m_LastFocusedElementIndex_4 = L_27;
				goto IL_009e_1;
			}

IL_0095_1:
			{
			}

IL_0096_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck((RuntimeObject*)L_28);
				bool L_29;
				L_29 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				if (L_29)
				{
					goto IL_006c_1;
				}
			}

IL_009e_1:
			{
				goto IL_00ab;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ab:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_30 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___m_LastFocusedElementTreeChildIndexes_5;
		NullCheck(L_30);
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(L_30, 0, List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		goto IL_00c4;
	}

IL_00bb:
	{
		__this->___m_LastFocusedElementIndex_4 = (-1);
	}

IL_00c4:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::OnBlur(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_OnBlur_m4F2963E229865EF1B63E2D5BA5C26B4D417C049E_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___willFocus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___willFocus0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___willFocus0;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_2 = (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9*)((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_2);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3;
		L_3 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(94 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_contentContainer() */, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_2);
		G_B3_0 = ((((int32_t)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_1) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___m_LastFocusedElementTreeChildIndexes_5;
		NullCheck(L_5);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_5, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		__this->___m_LastFocusedElementIndex_4 = (-1);
	}

IL_0031:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::HandleFocus(UnityEngine.UIElements.ReusableCollectionItem,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_HandleFocus_m6F01FC44F3887D8D8040D558FB41B6CCDECFB0EC_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___recycledItem0, int32_t ___previousIndex1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B5_0 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B4_0 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B10_0 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B9_0 = NULL;
	{
		int32_t L_0 = (int32_t)__this->___m_LastFocusedElementIndex_4;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0081;
	}

IL_0010:
	{
		int32_t L_2 = (int32_t)__this->___m_LastFocusedElementIndex_4;
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_3 = ___recycledItem0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline(L_3, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_6 = ___recycledItem0;
		NullCheck(L_6);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7;
		L_7 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, L_6);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___m_LastFocusedElementTreeChildIndexes_5;
		NullCheck(L_7);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9;
		L_9 = VisualElement_ElementAtTreePath_m83234CBC5C58A6FEB70F3DCB6BF67C9D1D3D1DED(L_7, L_8, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_10 = L_9;
		G_B4_0 = L_10;
		if (L_10)
		{
			G_B5_0 = L_10;
			goto IL_0039;
		}
	}
	{
		goto IL_003f;
	}

IL_0039:
	{
		NullCheck((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)G_B5_0);
		VirtualActionInvoker0::Invoke(17 /* System.Void UnityEngine.UIElements.Focusable::Focus() */, (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)G_B5_0);
	}

IL_003f:
	{
		goto IL_0081;
	}

IL_0041:
	{
		int32_t L_11 = (int32_t)__this->___m_LastFocusedElementIndex_4;
		int32_t L_12 = ___previousIndex1;
		V_2 = (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_14 = ___recycledItem0;
		NullCheck(L_14);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15;
		L_15 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, L_14);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___m_LastFocusedElementTreeChildIndexes_5;
		NullCheck(L_15);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_17;
		L_17 = VisualElement_ElementAtTreePath_m83234CBC5C58A6FEB70F3DCB6BF67C9D1D3D1DED(L_15, L_16, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = L_17;
		G_B9_0 = L_18;
		if (L_18)
		{
			G_B10_0 = L_18;
			goto IL_0068;
		}
	}
	{
		goto IL_006e;
	}

IL_0068:
	{
		NullCheck((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)G_B10_0);
		VirtualActionInvoker0::Invoke(18 /* System.Void UnityEngine.UIElements.Focusable::Blur() */, (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)G_B10_0);
	}

IL_006e:
	{
		goto IL_0081;
	}

IL_0070:
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_19 = (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9*)((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_19);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20;
		L_20 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(94 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_contentContainer() */, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_19);
		NullCheck((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)L_20);
		VirtualActionInvoker0::Invoke(17 /* System.Void UnityEngine.UIElements.Focusable::Focus() */, (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)L_20);
	}

IL_0081:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::UpdateBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_UpdateBackground_mD418E786890EBB5E1CA8804BCACBD97448C22033_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_13 = NULL;
	bool V_14 = false;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_17 = NULL;
	bool V_18 = false;
	float G_B3_0 = 0.0f;
	int32_t G_B6_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this->___k_EmptyRows_9;
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(L_0, NULL);
		V_6 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_6), NULL);
		float L_3 = (float)L_2.___y_1;
		bool L_4;
		L_4 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this->___k_EmptyRows_9;
		NullCheck(L_5);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(L_5, NULL);
		V_6 = L_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_6), NULL);
		float L_8 = (float)L_7.___y_1;
		G_B3_0 = L_8;
		goto IL_0041;
	}

IL_003c:
	{
		G_B3_0 = (0.0f);
	}

IL_0041:
	{
		V_0 = G_B3_0;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_9 = (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9*)((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck(L_9);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_10;
		L_10 = ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline(L_9, NULL);
		NullCheck(L_10);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		L_11 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(L_10, NULL);
		V_6 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_6), NULL);
		float L_13 = (float)L_12.___y_1;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_14 = (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9*)((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_14);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15;
		L_15 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(94 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_contentContainer() */, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_14);
		NullCheck(L_15);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16;
		L_16 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(L_15, NULL);
		V_6 = L_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_6), NULL);
		float L_18 = (float)L_17.___y_1;
		float L_19 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_13, L_18)), L_19));
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_20 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = BaseVerticalCollectionView_get_showAlternatingRowBackgrounds_m47BFEE57E56D46D6C705C7F7DD6C8BA5DBB2B97A(L_20, NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)2))))
		{
			goto IL_009d;
		}
	}
	{
		float L_22 = V_1;
		G_B6_0 = ((((int32_t)((!(((float)L_22) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009e;
	}

IL_009d:
	{
		G_B6_0 = 1;
	}

IL_009e:
	{
		V_7 = (bool)G_B6_0;
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_00b6;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this->___k_EmptyRows_9;
		NullCheck(L_24);
		VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64(L_24, NULL);
		goto IL_01f3;
	}

IL_00b6:
	{
		RuntimeObject* L_25;
		L_25 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), __this);
		V_8 = (bool)((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cf:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_27 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this->___k_EmptyRows_9;
		NullCheck(L_27);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_28;
		L_28 = VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000(L_27, NULL);
		V_9 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_28) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_30 = (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9*)((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck(L_30);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_31;
		L_31 = ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline(L_30, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_32 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this->___k_EmptyRows_9;
		NullCheck(L_31);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_31, L_32, NULL);
	}

IL_00fa:
	{
		NullCheck((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		float L_33;
		L_33 = VirtualFuncInvoker1< float, int32_t >::Invoke(11 /* System.Single UnityEngine.UIElements.CollectionVirtualizationController::GetItemHeight(System.Int32) */, (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this, (-1));
		V_2 = L_33;
		float L_34 = V_1;
		float L_35 = V_2;
		int32_t L_36;
		L_36 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(L_34/L_35)), NULL);
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_3;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_38 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this->___k_EmptyRows_9;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_38, NULL);
		V_10 = (bool)((((int32_t)L_37) > ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_10;
		if (!L_40)
		{
			goto IL_0177;
		}
	}
	{
		int32_t L_41 = V_3;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_42 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this->___k_EmptyRows_9;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_42, NULL);
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_41, L_43));
		V_12 = 0;
		goto IL_016a;
	}

IL_0136:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_44 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_44, NULL);
		V_13 = L_44;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_45 = V_13;
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_45, NULL);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_47;
		L_47 = StyleFloat_op_Implicit_m534A028510332FD68BBBAF6C96028FAE936A2DDB((0.0f), NULL);
		NullCheck(L_46);
		InterfaceActionInvoker1< StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 >::Invoke(21 /* System.Void UnityEngine.UIElements.IStyle::set_flexShrink(UnityEngine.UIElements.StyleFloat) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_46, L_47);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_48 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this->___k_EmptyRows_9;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_49 = V_13;
		NullCheck(L_48);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_48, L_49, NULL);
		int32_t L_50 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_016a:
	{
		int32_t L_51 = V_12;
		int32_t L_52 = V_11;
		V_14 = (bool)((((int32_t)L_51) < ((int32_t)L_52))? 1 : 0);
		bool L_53 = V_14;
		if (L_53)
		{
			goto IL_0136;
		}
	}
	{
	}

IL_0177:
	{
		NullCheck((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		int32_t L_54;
		L_54 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.UIElements.CollectionVirtualizationController::get_lastVisibleIndex() */, (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		V_4 = L_54;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_55 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this->___k_EmptyRows_9;
		NullCheck(L_55);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_56;
		L_56 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_55, NULL);
		V_15 = L_56;
		int32_t L_57;
		L_57 = Hierarchy_get_childCount_mAD31B42C0FF9B64AAF6A8CF23F22024B3F9542D5((&V_15), NULL);
		V_5 = L_57;
		V_16 = 0;
		goto IL_01e7;
	}

IL_019a:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_58 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)__this->___k_EmptyRows_9;
		NullCheck(L_58);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_59;
		L_59 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_58, NULL);
		V_15 = L_59;
		int32_t L_60 = V_16;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_61;
		L_61 = Hierarchy_get_Item_mBA5811C28D9E7FA48D0F10603A95F8CF248C3467((&V_15), L_60, NULL);
		V_17 = L_61;
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_63 = V_17;
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_63, NULL);
		float L_65 = V_2;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_66;
		L_66 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(L_65, NULL);
		NullCheck(L_64);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(24 /* System.Void UnityEngine.UIElements.IStyle::set_height(UnityEngine.UIElements.StyleLength) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_64, L_66);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_67 = V_17;
		il2cpp_codegen_runtime_class_init_inline(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		String_t* L_68 = ((BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_StaticFields*)il2cpp_codegen_static_fields_for(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var))->___itemAlternativeBackgroundUssClassName_113;
		int32_t L_69 = V_4;
		NullCheck(L_67);
		VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365(L_67, L_68, (bool)((((int32_t)((int32_t)(L_69%2))) == ((int32_t)1))? 1 : 0), NULL);
		int32_t L_70 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_01e7:
	{
		int32_t L_71 = V_16;
		int32_t L_72 = V_5;
		V_18 = (bool)((((int32_t)L_71) < ((int32_t)L_72))? 1 : 0);
		bool L_73 = V_18;
		if (L_73)
		{
			goto IL_019a;
		}
	}

IL_01f3:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::ReplaceActiveItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_ReplaceActiveItem_m44C942D46B174CEA07F73CD146AC9A4DF808DF26_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	{
		V_0 = 0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___m_ActiveItems_3;
		NullCheck(L_0);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_1;
		L_1 = InvokerFuncInvoker0< Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), L_0);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ca:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00bc_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_2;
				L_2 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)), il2cpp_rgctx_method(method->klass->rgctx_data, 32), (&V_1));
				V_2 = L_2;
				RuntimeObject* L_3 = V_2;
				NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_3);
				int32_t L_4;
				L_4 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_3, NULL);
				int32_t L_5 = ___index0;
				V_3 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
				bool L_6 = V_3;
				if (!L_6)
				{
					goto IL_00b7_1;
				}
			}
			{
				RuntimeObject* L_7;
				L_7 = VirtualFuncInvoker0Invoker< RuntimeObject* >::Invoke(18 /* T UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::GetOrMakeItem() */, __this);
				V_4 = L_7;
				RuntimeObject* L_8 = V_2;
				NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_8);
				VirtualActionInvoker0::Invoke(7 /* System.Void UnityEngine.UIElements.ReusableCollectionItem::DetachElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_8);
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___m_ActiveItems_3;
				RuntimeObject* L_10 = V_2;
				NullCheck(L_9);
				bool L_11;
				L_11 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)), il2cpp_rgctx_method(method->klass->rgctx_data, 34), L_9, L_10);
				BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_12 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
				NullCheck(L_12);
				CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_13;
				L_13 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_12, NULL);
				RuntimeObject* L_14 = V_2;
				int32_t L_15 = ___index0;
				NullCheck(L_13);
				VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(15 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeUnbindItem(UnityEngine.UIElements.ReusableCollectionItem,System.Int32) */, L_13, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_14, L_15);
				BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_16 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
				NullCheck(L_16);
				CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_17;
				L_17 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_16, NULL);
				RuntimeObject* L_18 = V_2;
				NullCheck(L_17);
				VirtualActionInvoker1< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* >::Invoke(16 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeDestroyItem(UnityEngine.UIElements.ReusableCollectionItem) */, L_17, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_18);
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_19 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___m_ActiveItems_3;
				int32_t L_20 = V_0;
				RuntimeObject* L_21 = V_4;
				NullCheck(L_19);
				InvokerActionInvoker2< int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)), il2cpp_rgctx_method(method->klass->rgctx_data, 35), L_19, L_20, L_21);
				ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_22 = (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9*)((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
				RuntimeObject* L_23 = V_4;
				NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_23);
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24;
				L_24 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_23);
				NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_22);
				VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_22, L_24, NULL);
				RuntimeObject* L_25 = V_4;
				int32_t L_26 = ___index0;
				InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), __this, L_25, L_26);
				goto IL_00c8_1;
			}

IL_00b7_1:
			{
				int32_t L_27 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
			}

IL_00bc_1:
			{
				bool L_28;
				L_28 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)), il2cpp_rgctx_method(method->klass->rgctx_data, 36), (&V_1));
				if (L_28)
				{
					goto IL_0015_1;
				}
			}

IL_00c8_1:
			{
				goto IL_00d9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d9:
	{
		return;
	}
}
// T UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::GetOrMakeItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_GetOrMakeItem_mE287AE2238E8F1DD7D7F95071669C8A7588742E2_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)__this->___m_Pool_2;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)), il2cpp_rgctx_method(method->klass->rgctx_data, 38), L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_2);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3;
		L_3 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_2);
		V_1 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_5 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_5);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_6;
		L_6 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_5, NULL);
		RuntimeObject* L_7 = V_0;
		NullCheck(L_6);
		VirtualActionInvoker1< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* >::Invoke(13 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeMakeItem(UnityEngine.UIElements.ReusableCollectionItem) */, L_6, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_7);
	}

IL_0038:
	{
		RuntimeObject* L_8 = V_0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_8);
		VirtualActionInvoker0::Invoke(6 /* System.Void UnityEngine.UIElements.ReusableCollectionItem::PreAttachElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_8);
		RuntimeObject* L_9 = V_0;
		V_2 = L_9;
		goto IL_0048;
	}

IL_0048:
	{
		RuntimeObject* L_10 = V_2;
		return L_10;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::ReleaseItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_ReleaseItem_m1246B549EF5072DDD898308480867E71EEC27874_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, int32_t ___activeItemsIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___m_ActiveItems_3;
		int32_t L_1 = ___activeItemsIndex0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InvokerFuncInvoker1< RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), L_0, L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_3);
		int32_t L_4;
		L_4 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_3, NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_6 = V_1;
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_7 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496(L_7, NULL);
		NullCheck((RuntimeObject*)L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
		G_B3_0 = ((((int32_t)L_6) < ((int32_t)L_9))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 0;
	}

IL_0034:
	{
		V_2 = (bool)G_B3_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_11 = (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE*)__this->___m_CollectionView_1;
		NullCheck(L_11);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_12;
		L_12 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_11, NULL);
		RuntimeObject* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(15 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeUnbindItem(UnityEngine.UIElements.ReusableCollectionItem,System.Int32) */, L_12, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_13, L_14);
	}

IL_0052:
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_15 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)__this->___m_Pool_2;
		RuntimeObject* L_16 = V_0;
		NullCheck(L_15);
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), L_15, L_16);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_17 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___m_ActiveItems_3;
		int32_t L_18 = ___activeItemsIndex0;
		NullCheck(L_17);
		InvokerActionInvoker1< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)), il2cpp_rgctx_method(method->klass->rgctx_data, 39), L_17, L_18);
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
// System.Void UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(UnityEngine.UIElements.VisualElement,ActionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementScheduledItem_1__ctor_m2D2983F18BB4C00D47151DC5F5AAF5C6F55124AA_gshared (/*UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VisualElementScheduledItem_1_tC55C6DAB31FBA21565DAE09DE6BA236327F029E2* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___handler0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___upEvent1, const RuntimeMethod* method) 
{
	// sizeof(ActionType)
	const uint32_t SizeOf_ActionType_tEF1C91A72186B11FE7B43AAE1C149BA05063A289 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
	// ActionType
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_ActionType_tEF1C91A72186B11FE7B43AAE1C149BA05063A289);
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___handler0;
		BaseVisualElementScheduledItem__ctor_mB5C5818F39CDC5846487311B47B3A5BEEA840E68((BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A*)__this, L_0, NULL);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 0)) ? ___upEvent1 : &___upEvent1), SizeOf_ActionType_tEF1C91A72186B11FE7B43AAE1C149BA05063A289);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),0), L_1, SizeOf_ActionType_tEF1C91A72186B11FE7B43AAE1C149BA05063A289);
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
// System.Int32 UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::get_selectedComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeDebugSettings_1_get_selectedComponent_m0C8956BC3F8FD603E492C8E6895351C4B59D8909_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	{
		// public int selectedComponent { get; set; } = 0;
		int32_t L_0 = (int32_t)__this->___U3CselectedComponentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::set_selectedComponent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_set_selectedComponent_mB98032B7495A08D17A106619BBAD520939E84376_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int selectedComponent { get; set; } = 0;
		int32_t L_0 = ___value0;
		__this->___U3CselectedComponentU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::get_selectedCameraIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeDebugSettings_1_get_selectedCameraIndex_m83C93DE33689D5F632215A910F52A4907A8ED903_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	{
		// if (m_SelectedCameraIndex < 0 || m_SelectedCameraIndex > additionalCameraDatas.Count)
		int32_t L_0 = (int32_t)__this->___m_SelectedCameraIndex_1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->___m_SelectedCameraIndex_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2;
		L_2 = InvokerFuncInvoker0< List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_2);
		if ((((int32_t)L_1) <= ((int32_t)L_3)))
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		// return 0;
		return 0;
	}

IL_001d:
	{
		// return m_SelectedCameraIndex;
		int32_t L_4 = (int32_t)__this->___m_SelectedCameraIndex_1;
		return L_4;
	}
}
// System.Void UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::set_selectedCameraIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_set_selectedCameraIndex_m14F0D5CE530F72FF861DC417B2902AD2562327F1_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_SelectedCameraIndex = value; }
		int32_t L_0 = ___value0;
		__this->___m_SelectedCameraIndex_1 = L_0;
		// set { m_SelectedCameraIndex = value; }
		return;
	}
}
// UnityEngine.Camera UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::get_selectedCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* VolumeDebugSettings_1_get_selectedCamera_m5432206F52AB501696957007D6D92D731B247131_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_SelectedCameraIndex <= 0 || m_SelectedCameraIndex > additionalCameraDatas.Count)
		int32_t L_0 = (int32_t)__this->___m_SelectedCameraIndex_1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->___m_SelectedCameraIndex_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2;
		L_2 = InvokerFuncInvoker0< List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_2);
		if ((((int32_t)L_1) <= ((int32_t)L_3)))
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		// return null;
		return (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
	}

IL_001d:
	{
		// return additionalCameraDatas[m_SelectedCameraIndex - 1].GetComponent<Camera>();
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4;
		L_4 = InvokerFuncInvoker0< List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL);
		int32_t L_5 = (int32_t)__this->___m_SelectedCameraIndex_1;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InvokerFuncInvoker1< RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_4, ((int32_t)il2cpp_codegen_subtract(L_5, 1)));
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_6);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_6, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		return L_7;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Camera> UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::get_cameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeDebugSettings_1_get_cameras_m1BE509AA60A6291882346AA84175AEF00279E7FF_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	{
		U3Cget_camerasU3Ed__11_tE58A39B31B78AE23133940A06A0733EA5F99B3C3* L_0 = (U3Cget_camerasU3Ed__11_tE58A39B31B78AE23133940A06A0733EA5F99B3C3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_0);
		InvokerActionInvoker1< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_0, ((int32_t)-2));
		return (RuntimeObject*)L_0;
	}
}
// System.Type UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::get_selectedComponentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* VolumeDebugSettings_1_get_selectedComponentType_m2E4AEBF732995355C1820B03B3342CA4AF77F81F_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF487B1FB318EBF81C972FCCD0AECA6B9B6E9286_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return componentTypes[selectedComponent - 1].Item2; }
		List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* L_0;
		L_0 = InvokerFuncInvoker0< List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), __this);
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this);
		NullCheck(L_0);
		ValueTuple_2_tB97F43966F527B2125B7A49F02F05E9A07A60494 L_2;
		L_2 = List_1_get_Item_mDF487B1FB318EBF81C972FCCD0AECA6B9B6E9286(L_0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), List_1_get_Item_mDF487B1FB318EBF81C972FCCD0AECA6B9B6E9286_RuntimeMethod_var);
		Type_t* L_3 = (Type_t*)L_2.___Item2_1;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::set_selectedComponentType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_set_selectedComponentType_m711E0AD930A30258F4F625F6FA7BF99BD839A865_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_m6453765ACDCCF1261A26796F9EB601DDE15077F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass20_0_tAF5D9FD9DCDAA53C0BA8615AE1D4837BC4339C45* V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass20_0_tAF5D9FD9DCDAA53C0BA8615AE1D4837BC4339C45* L_0 = (U3CU3Ec__DisplayClass20_0_tAF5D9FD9DCDAA53C0BA8615AE1D4837BC4339C45*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_0);
		V_0 = L_0;
		U3CU3Ec__DisplayClass20_0_tAF5D9FD9DCDAA53C0BA8615AE1D4837BC4339C45* L_1 = V_0;
		Type_t* L_2 = ___value0;
		NullCheck(L_1);
		L_1->___value_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___value_0), (void*)L_2);
		// var index = componentTypes.FindIndex(t => t.Item2 == value);
		List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* L_3;
		L_3 = InvokerFuncInvoker0< List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), __this);
		U3CU3Ec__DisplayClass20_0_tAF5D9FD9DCDAA53C0BA8615AE1D4837BC4339C45* L_4 = V_0;
		Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7* L_5 = (Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7*)il2cpp_codegen_object_new(Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_m2A873182717A1B746A08E8A60B68D63ACFD144BF(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), NULL);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = List_1_FindIndex_m6453765ACDCCF1261A26796F9EB601DDE15077F4(L_3, L_5, List_1_FindIndex_m6453765ACDCCF1261A26796F9EB601DDE15077F4_RuntimeMethod_var);
		V_1 = L_6;
		// if (index != -1)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0032;
		}
	}
	{
		// selectedComponent = index + 1;
		int32_t L_8 = V_1;
		InvokerActionInvoker1< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, ((int32_t)il2cpp_codegen_add(L_8, 1)));
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Type>> UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::get_componentTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* VolumeDebugSettings_1_get_componentTypes_m9964876411B01E9F5E7D57BA222E6CFF4965C86D_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_ComponentTypes == null)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* L_0 = ((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_ComponentTypes_2;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		// s_ComponentTypes = VolumeManager.GetSupportedVolumeComponents(targetRenderPipeline);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0Invoker< Type_t* >::Invoke(24 /* System.Type UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::get_targetRenderPipeline() */, __this);
		il2cpp_codegen_runtime_class_init_inline(VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* L_2;
		L_2 = VolumeManager_GetSupportedVolumeComponents_mFF7C0C4BEF181DF17C3675221920BE568302F657(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_ComponentTypes_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_ComponentTypes_2), (void*)L_2);
	}

IL_0017:
	{
		// return s_ComponentTypes;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* L_3 = ((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_ComponentTypes_2;
		return L_3;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::get_additionalCameraDatas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* VolumeDebugSettings_1_get_additionalCameraDatas_m4A5F64767756A2F2D16F944642225DCDAFA9449C_gshared (const RuntimeMethod* method) 
{
	{
		// protected static List<T> additionalCameraDatas { get; private set; } = new List<T>();
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CadditionalCameraDatasU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::set_additionalCameraDatas(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_set_additionalCameraDatas_m5CA00BE824DDAC8D8B04DA9A9B02265E069ECD8E_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___value0, const RuntimeMethod* method) 
{
	{
		// protected static List<T> additionalCameraDatas { get; private set; } = new List<T>();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CadditionalCameraDatasU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CadditionalCameraDatasU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::RegisterCamera(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_RegisterCamera_m945720C6ECADDD66F21F5771B446510B88246874_gshared (RuntimeObject* ___additionalCamera0, const RuntimeMethod* method) 
{
	{
		// if (!additionalCameraDatas.Contains(additionalCamera))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0;
		L_0 = InvokerFuncInvoker0< List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL);
		RuntimeObject* L_1 = ___additionalCamera0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16), L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		// additionalCameraDatas.Add(additionalCamera);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3;
		L_3 = InvokerFuncInvoker0< List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL);
		RuntimeObject* L_4 = ___additionalCamera0;
		NullCheck(L_3);
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17), L_3, L_4);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::UnRegisterCamera(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_UnRegisterCamera_m84DFDB2FB62EB2DB79A30F3CA2F97651444189A3_gshared (RuntimeObject* ___additionalCamera0, const RuntimeMethod* method) 
{
	{
		// if (additionalCameraDatas.Contains(additionalCamera))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0;
		L_0 = InvokerFuncInvoker0< List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL);
		RuntimeObject* L_1 = ___additionalCamera0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16), L_0, L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// additionalCameraDatas.Remove(additionalCamera);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3;
		L_3 = InvokerFuncInvoker0< List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL);
		RuntimeObject* L_4 = ___additionalCamera0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), L_3, L_4);
	}

IL_0019:
	{
		// }
		return;
	}
}
// UnityEngine.Rendering.VolumeParameter UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::GetParameter(UnityEngine.Rendering.VolumeComponent,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* VolumeDebugSettings_1_GetParameter_m98B57E599E7EFBA133FBD5BE06692A7A1B14BC4A_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___component0, FieldInfo_t* ___field1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (VolumeParameter)field.GetValue(component);
		FieldInfo_t* L_0 = ___field1;
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_1 = ___component0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, (RuntimeObject*)L_1);
		return ((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)CastclassClass((RuntimeObject*)L_2, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.Rendering.VolumeParameter UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::GetParameter(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* VolumeDebugSettings_1_GetParameter_m79C8104EA0CBF5EBE6D44332BE1E872829389E71_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, FieldInfo_t* ___field0, const RuntimeMethod* method) 
{
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* V_0 = NULL;
	{
		// VolumeStack stack = selectedCameraVolumeStack;
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_0;
		L_0 = VirtualFuncInvoker0Invoker< VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* >::Invoke(21 /* UnityEngine.Rendering.VolumeStack UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::get_selectedCameraVolumeStack() */, __this);
		V_0 = L_0;
		// return stack == null ? null : GetParameter(stack.GetComponent(selectedComponentType), field);
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_2 = V_0;
		Type_t* L_3;
		L_3 = InvokerFuncInvoker0< Type_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this);
		NullCheck(L_2);
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_4;
		L_4 = VolumeStack_GetComponent_mC7A2CE27A8A6F6A6A4B4B6EF14E190085A343844(L_2, L_3, NULL);
		FieldInfo_t* L_5 = ___field0;
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_6;
		L_6 = InvokerFuncInvoker2< VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1*, FieldInfo_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, L_4, L_5);
		return L_6;
	}

IL_001e:
	{
		return (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)NULL;
	}
}
// UnityEngine.Rendering.VolumeParameter UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::GetParameter(UnityEngine.Rendering.Volume,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* VolumeDebugSettings_1_GetParameter_m585FA113A42B26FBDE02AB9755B45545C30394B9_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___volume0, FieldInfo_t* ___field1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_0 = NULL;
	VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* V_1 = NULL;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* G_B3_0 = NULL;
	{
		// var profile = volume.HasInstantiatedProfile() ? volume.profile : volume.sharedProfile;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_0 = ___volume0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Volume_HasInstantiatedProfile_mA1547160C1B93EC28AB7FDBDD23ED967B9B7A8F4(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_2 = ___volume0;
		NullCheck(L_2);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_3 = (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1*)L_2->___sharedProfile_8;
		G_B3_0 = L_3;
		goto IL_0016;
	}

IL_0010:
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_4 = ___volume0;
		NullCheck(L_4);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_5;
		L_5 = Volume_get_profile_mB157C4D67D52CE6D3E8211D6587B0EF71102E43D(L_4, NULL);
		G_B3_0 = L_5;
	}

IL_0016:
	{
		// if (!profile.TryGet(selectedComponentType, out VolumeComponent component))
		Type_t* L_6;
		L_6 = InvokerFuncInvoker0< Type_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this);
		NullCheck(G_B3_0);
		bool L_7;
		L_7 = VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9(G_B3_0, L_6, (&V_0), VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0027;
		}
	}
	{
		// return null;
		return (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)NULL;
	}

IL_0027:
	{
		// var param = GetParameter(component, field);
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_8 = V_0;
		FieldInfo_t* L_9 = ___field1;
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_10;
		L_10 = InvokerFuncInvoker2< VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1*, FieldInfo_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, L_8, L_9);
		V_1 = L_10;
		// if (!param.overrideState)
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_11 = V_1;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, L_11);
		if (L_12)
		{
			goto IL_003a;
		}
	}
	{
		// return null;
		return (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)NULL;
	}

IL_003a:
	{
		// return param;
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_13 = V_1;
		return L_13;
	}
}
// System.Single UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::ComputeWeight(UnityEngine.Rendering.Volume,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeDebugSettings_1_ComputeWeight_m2A2083BB02163D67BCCF7318FA0D20CD39B1211F_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___volume0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___triggerPos1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* V_0 = NULL;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_5 = NULL;
	int32_t V_6 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_7 = NULL;
	float V_8 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* G_B5_0 = NULL;
	{
		// if (volume == null) return 0;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_0 = ___volume0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (volume == null) return 0;
		return (0.0f);
	}

IL_000f:
	{
		// var profile = volume.HasInstantiatedProfile() ? volume.profile : volume.sharedProfile;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_2 = ___volume0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Volume_HasInstantiatedProfile_mA1547160C1B93EC28AB7FDBDD23ED967B9B7A8F4(L_2, NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_4 = ___volume0;
		NullCheck(L_4);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_5 = (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1*)L_4->___sharedProfile_8;
		G_B5_0 = L_5;
		goto IL_0025;
	}

IL_001f:
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_6 = ___volume0;
		NullCheck(L_6);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_7;
		L_7 = Volume_get_profile_mB157C4D67D52CE6D3E8211D6587B0EF71102E43D(L_6, NULL);
		G_B5_0 = L_7;
	}

IL_0025:
	{
		V_0 = G_B5_0;
		// if (!volume.gameObject.activeInHierarchy) return 0;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_8 = ___volume0;
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_8, NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_9, NULL);
		if (L_10)
		{
			goto IL_0039;
		}
	}
	{
		// if (!volume.gameObject.activeInHierarchy) return 0;
		return (0.0f);
	}

IL_0039:
	{
		// if (!volume.enabled || profile == null || volume.weight <= 0f) return 0;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_11 = ___volume0;
		NullCheck((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_11);
		bool L_12;
		L_12 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_11, NULL);
		if (!L_12)
		{
			goto IL_0057;
		}
	}
	{
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_14)
		{
			goto IL_0057;
		}
	}
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_15 = ___volume0;
		NullCheck(L_15);
		float L_16 = (float)L_15->___weight_7;
		if ((!(((float)L_16) <= ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}

IL_0057:
	{
		// if (!volume.enabled || profile == null || volume.weight <= 0f) return 0;
		return (0.0f);
	}

IL_005d:
	{
		// if (!profile.TryGet(selectedComponentType, out VolumeComponent component)) return 0;
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_17 = V_0;
		Type_t* L_18;
		L_18 = InvokerFuncInvoker0< Type_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this);
		NullCheck(L_17);
		bool L_19;
		L_19 = VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9(L_17, L_18, (&V_1), VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		if (L_19)
		{
			goto IL_0073;
		}
	}
	{
		// if (!profile.TryGet(selectedComponentType, out VolumeComponent component)) return 0;
		return (0.0f);
	}

IL_0073:
	{
		// if (!component.active) return 0;
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_20 = V_1;
		NullCheck(L_20);
		bool L_21 = (bool)L_20->___active_4;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		// if (!component.active) return 0;
		return (0.0f);
	}

IL_0081:
	{
		// float weight = Mathf.Clamp01(volume.weight);
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_22 = ___volume0;
		NullCheck(L_22);
		float L_23 = (float)L_22->___weight_7;
		float L_24;
		L_24 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_23, NULL);
		V_2 = L_24;
		// if (!volume.isGlobal)
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_25 = ___volume0;
		NullCheck(L_25);
		bool L_26;
		L_26 = Volume_get_isGlobal_m09C1E1FB39D06DD9EC78DF276DE9A1FBE3E42763_inline(L_25, NULL);
		if (L_26)
		{
			goto IL_011c;
		}
	}
	{
		// var colliders = volume.GetComponents<Collider>();
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_27 = ___volume0;
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_27);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_28;
		L_28 = Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_27, Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var);
		// float closestDistanceSqr = float.PositiveInfinity;
		V_3 = (std::numeric_limits<float>::infinity());
		// foreach (var collider in colliders)
		V_5 = L_28;
		V_6 = 0;
		goto IL_00e2;
	}

IL_00ab:
	{
		// foreach (var collider in colliders)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_29 = V_5;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_7 = L_32;
		// if (!collider.enabled)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_33 = V_7;
		NullCheck(L_33);
		bool L_34;
		L_34 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_33, NULL);
		if (!L_34)
		{
			goto IL_00dc;
		}
	}
	{
		// var closestPoint = collider.ClosestPoint(triggerPos);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_35 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ___triggerPos1;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB(L_35, L_36, NULL);
		// var d = (closestPoint - triggerPos).sqrMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = ___triggerPos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_37, L_38, NULL);
		V_9 = L_39;
		float L_40;
		L_40 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_9), NULL);
		V_8 = L_40;
		// if (d < closestDistanceSqr)
		float L_41 = V_8;
		float L_42 = V_3;
		if ((!(((float)L_41) < ((float)L_42))))
		{
			goto IL_00dc;
		}
	}
	{
		// closestDistanceSqr = d;
		float L_43 = V_8;
		V_3 = L_43;
	}

IL_00dc:
	{
		int32_t L_44 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00e2:
	{
		// foreach (var collider in colliders)
		int32_t L_45 = V_6;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_46 = V_5;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_00ab;
		}
	}
	{
		// float blendDistSqr = volume.blendDistance * volume.blendDistance;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_47 = ___volume0;
		NullCheck(L_47);
		float L_48 = (float)L_47->___blendDistance_6;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_49 = ___volume0;
		NullCheck(L_49);
		float L_50 = (float)L_49->___blendDistance_6;
		V_4 = ((float)il2cpp_codegen_multiply(L_48, L_50));
		// if (closestDistanceSqr > blendDistSqr)
		float L_51 = V_3;
		float L_52 = V_4;
		if ((!(((float)L_51) > ((float)L_52))))
		{
			goto IL_0106;
		}
	}
	{
		// weight = 0f;
		V_2 = (0.0f);
		goto IL_011c;
	}

IL_0106:
	{
		// else if (blendDistSqr > 0f)
		float L_53 = V_4;
		if ((!(((float)L_53) > ((float)(0.0f)))))
		{
			goto IL_011c;
		}
	}
	{
		// weight *= 1f - (closestDistanceSqr / blendDistSqr);
		float L_54 = V_2;
		float L_55 = V_3;
		float L_56 = V_4;
		V_2 = ((float)il2cpp_codegen_multiply(L_54, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_55/L_56))))));
	}

IL_011c:
	{
		// return weight;
		float L_57 = V_2;
		return L_57;
	}
}
// UnityEngine.Rendering.Volume[] UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::GetVolumes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* VolumeDebugSettings_1_GetVolumes_m0468B443B6155E956EF3128EAE2BAB30F67C1C60_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m07661B9A8A400FE659EAE193CEEED8F65CA80C5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mF1CBC672AB74D6AC77FB82DA8D177C30D1CDD7BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m83B576D3EAED3F16C09A9FBC62D8FE3E6357D055_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* G_B2_0 = NULL;
	VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* G_B2_1 = NULL;
	Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* G_B1_0 = NULL;
	VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* G_B1_1 = NULL;
	{
		// return VolumeManager.instance.GetVolumes(selectedCameraLayerMask)
		//     .Where(v => v.sharedProfile != null)
		//     .Reverse().ToArray();
		il2cpp_codegen_runtime_class_init_inline(VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* L_0;
		L_0 = VolumeManager_get_instance_m3D5ADFC04553CE0658A86B642CC9690C537DFA5C(NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1;
		L_1 = VirtualFuncInvoker0Invoker< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(22 /* UnityEngine.LayerMask UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::get_selectedCameraLayerMask() */, __this);
		NullCheck(L_0);
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_2;
		L_2 = VolumeManager_GetVolumes_mCD6F01BC37F4C6833FF56635904021D3E087BBDA(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* L_3 = ((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 24)))->___U3CU3E9__38_0_1;
		Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3* L_5 = ((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 24)))->___U3CU3E9_0;
		Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* L_6 = (Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E*)il2cpp_codegen_object_new(Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mE062569723CD2676B37650ADE8A6BBE243E2CA72(L_6, (RuntimeObject*)L_5, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 25)), NULL);
		Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* L_7 = L_6;
		((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 24)))->___U3CU3E9__38_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 24)))->___U3CU3E9__38_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002f:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Where_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m83B576D3EAED3F16C09A9FBC62D8FE3E6357D055((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m83B576D3EAED3F16C09A9FBC62D8FE3E6357D055_RuntimeMethod_var);
		RuntimeObject* L_9;
		L_9 = Enumerable_Reverse_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m07661B9A8A400FE659EAE193CEEED8F65CA80C5B(L_8, Enumerable_Reverse_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m07661B9A8A400FE659EAE193CEEED8F65CA80C5B_RuntimeMethod_var);
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_10;
		L_10 = Enumerable_ToArray_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mF1CBC672AB74D6AC77FB82DA8D177C30D1CDD7BB(L_9, Enumerable_ToArray_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mF1CBC672AB74D6AC77FB82DA8D177C30D1CDD7BB_RuntimeMethod_var);
		return L_10;
	}
}
// UnityEngine.Rendering.VolumeParameter[,] UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::GetStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* VolumeDebugSettings_1_GetStates_m0FE8DECDEDB5142DC87951D7604FE4252AB2604B_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisFieldInfo_t_m99A6AB02C6FC4690AD5DCDFCB0C9DE2F5CD5B145_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_0 = NULL;
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* V_1 = NULL;
	int32_t V_2 = 0;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_3 = NULL;
	int32_t V_4 = 0;
	VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* V_5 = NULL;
	Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* G_B2_0 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* G_B2_1 = NULL;
	Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* G_B1_0 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* G_B1_1 = NULL;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* G_B6_0 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* G_B10_2 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* G_B9_2 = NULL;
	VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* G_B11_3 = NULL;
	{
		// var fields = selectedComponentType
		//     .GetFields(System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance)
		//     .Where(t => t.FieldType.IsSubclassOf(typeof(VolumeParameter)))
		//     .ToArray();
		Type_t* L_0;
		L_0 = InvokerFuncInvoker0< Type_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this);
		NullCheck(L_0);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_1;
		L_1 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(83 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, (int32_t)((int32_t)52));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_2 = ((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 24)))->___U3CU3E9__40_0_2;
		Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3* L_4 = ((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 24)))->___U3CU3E9_0;
		Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_5 = (Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630*)il2cpp_codegen_object_new(Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m720E8683356B22FA89D3983D974FC700BDE279A3(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 26)), NULL);
		Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_6 = L_5;
		((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 24)))->___U3CU3E9__40_0_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 24)))->___U3CU3E9__40_0_2), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002c:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90_RuntimeMethod_var);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_8;
		L_8 = Enumerable_ToArray_TisFieldInfo_t_m99A6AB02C6FC4690AD5DCDFCB0C9DE2F5CD5B145(L_7, Enumerable_ToArray_TisFieldInfo_t_m99A6AB02C6FC4690AD5DCDFCB0C9DE2F5CD5B145_RuntimeMethod_var);
		V_0 = L_8;
		// VolumeParameter[,] states = new VolumeParameter[volumes.Length, fields.Length];
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_9 = (VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)__this->___volumes_5;
		NullCheck(L_9);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_10 = V_0;
		NullCheck(L_10);
		il2cpp_array_size_t L_12[] = { (il2cpp_array_size_t)((int32_t)(((RuntimeArray*)L_9)->max_length)), (il2cpp_array_size_t)((int32_t)(((RuntimeArray*)L_10)->max_length)) };
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_11 = (VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D*)GenArrayNew(VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D_il2cpp_TypeInfo_var, L_12);
		V_1 = L_11;
		// for (int i = 0; i < volumes.Length; i++)
		V_2 = 0;
		goto IL_00c0;
	}

IL_004c:
	{
		// var profile = volumes[i].HasInstantiatedProfile() ? volumes[i].profile : volumes[i].sharedProfile;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_13 = (VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)__this->___volumes_5;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		bool L_17;
		L_17 = Volume_HasInstantiatedProfile_mA1547160C1B93EC28AB7FDBDD23ED967B9B7A8F4(L_16, NULL);
		if (L_17)
		{
			goto IL_006a;
		}
	}
	{
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_18 = (VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)__this->___volumes_5;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_22 = (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1*)L_21->___sharedProfile_8;
		G_B6_0 = L_22;
		goto IL_0077;
	}

IL_006a:
	{
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_23 = (VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)__this->___volumes_5;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_27;
		L_27 = Volume_get_profile_mB157C4D67D52CE6D3E8211D6587B0EF71102E43D(L_26, NULL);
		G_B6_0 = L_27;
	}

IL_0077:
	{
		// if (!profile.TryGet(selectedComponentType, out VolumeComponent component))
		Type_t* L_28;
		L_28 = InvokerFuncInvoker0< Type_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this);
		NullCheck(G_B6_0);
		bool L_29;
		L_29 = VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9(G_B6_0, L_28, (&V_3), VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		if (!L_29)
		{
			goto IL_00bc;
		}
	}
	{
		// for (int j = 0; j < fields.Length; j++)
		V_4 = 0;
		goto IL_00b5;
	}

IL_008b:
	{
		// var param = GetParameter(component, fields[j]); ;
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_30 = V_3;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_31 = V_0;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		FieldInfo_t* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_35;
		L_35 = InvokerFuncInvoker2< VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1*, FieldInfo_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, L_30, L_34);
		V_5 = L_35;
		// states[i, j] = param.overrideState ? param : null;
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_36 = V_1;
		int32_t L_37 = V_2;
		int32_t L_38 = V_4;
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_39 = V_5;
		NullCheck(L_39);
		bool L_40;
		L_40 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, L_39);
		G_B9_0 = L_38;
		G_B9_1 = L_37;
		G_B9_2 = L_36;
		if (L_40)
		{
			G_B10_0 = L_38;
			G_B10_1 = L_37;
			G_B10_2 = L_36;
			goto IL_00a8;
		}
	}
	{
		G_B11_0 = ((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)(NULL));
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		goto IL_00aa;
	}

IL_00a8:
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_41 = V_5;
		G_B11_0 = L_41;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
	}

IL_00aa:
	{
		NullCheck(G_B11_3);
		(G_B11_3)->SetAt(G_B11_2, G_B11_1, G_B11_0);
		// for (int j = 0; j < fields.Length; j++)
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00b5:
	{
		// for (int j = 0; j < fields.Length; j++)
		int32_t L_43 = V_4;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_44 = V_0;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_008b;
		}
	}

IL_00bc:
	{
		// for (int i = 0; i < volumes.Length; i++)
		int32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c0:
	{
		// for (int i = 0; i < volumes.Length; i++)
		int32_t L_46 = V_2;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_47 = (VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)__this->___volumes_5;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
		{
			goto IL_004c;
		}
	}
	{
		// return states;
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_48 = V_1;
		return L_48;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::ChangedStates(UnityEngine.Rendering.VolumeParameter[,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeDebugSettings_1_ChangedStates_m5A7E3AE70CEAE4BE0C7A44DBEF813C5B39CD1C24_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* ___newStates0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (savedStates.GetLength(1) != newStates.GetLength(1))
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_0 = (VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D*)__this->___savedStates_6;
		NullCheck((RuntimeArray*)L_0);
		int32_t L_1;
		L_1 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_0, 1, NULL);
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_2 = ___newStates0;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_2, 1, NULL);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0017;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0017:
	{
		// for (int i = 0; i < savedStates.GetLength(0); i++)
		V_0 = 0;
		goto IL_0055;
	}

IL_001b:
	{
		// for (int j = 0; j < savedStates.GetLength(1); j++)
		V_1 = 0;
		goto IL_0042;
	}

IL_001f:
	{
		// if ((savedStates[i, j] == null) != (newStates[i, j] == null))
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_4 = (VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D*)__this->___savedStates_6;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_7;
		L_7 = (L_4)->GetAt(L_5, L_6);
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_8 = ___newStates0;
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_8);
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_11;
		L_11 = (L_8)->GetAt(L_9, L_10);
		if ((((int32_t)((((RuntimeObject*)(VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)((((RuntimeObject*)(VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0))))
		{
			goto IL_003e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_003e:
	{
		// for (int j = 0; j < savedStates.GetLength(1); j++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0042:
	{
		// for (int j = 0; j < savedStates.GetLength(1); j++)
		int32_t L_13 = V_1;
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_14 = (VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D*)__this->___savedStates_6;
		NullCheck((RuntimeArray*)L_14);
		int32_t L_15;
		L_15 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_14, 1, NULL);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_001f;
		}
	}
	{
		// for (int i = 0; i < savedStates.GetLength(0); i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0055:
	{
		// for (int i = 0; i < savedStates.GetLength(0); i++)
		int32_t L_17 = V_0;
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_18 = (VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D*)__this->___savedStates_6;
		NullCheck((RuntimeArray*)L_18);
		int32_t L_19;
		L_19 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_18, 0, NULL);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_001b;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::RefreshVolumes(UnityEngine.Rendering.Volume[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeDebugSettings_1_RefreshVolumes_m9DC3E0D0CB3BF7E242F0DEC0FC8BD45E630C7822_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* ___newVolumes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAA30FA516DBB4BD439745E07A77E90D6AF0A2D21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// bool ret = false;
		V_0 = (bool)0;
		// if (volumes == null || !newVolumes.SequenceEqual(volumes))
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_0 = (VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)__this->___volumes_5;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_1 = ___newVolumes0;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_2 = (VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)__this->___volumes_5;
		bool L_3;
		L_3 = Enumerable_SequenceEqual_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAA30FA516DBB4BD439745E07A77E90D6AF0A2D21((RuntimeObject*)L_1, (RuntimeObject*)L_2, Enumerable_SequenceEqual_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAA30FA516DBB4BD439745E07A77E90D6AF0A2D21_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0039;
		}
	}

IL_0018:
	{
		// volumes = (Volume[])newVolumes.Clone();
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_4 = ___newVolumes0;
		NullCheck((RuntimeArray*)L_4);
		RuntimeObject* L_5;
		L_5 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_4, NULL);
		__this->___volumes_5 = ((VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)Castclass((RuntimeObject*)L_5, VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___volumes_5), (void*)((VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)Castclass((RuntimeObject*)L_5, VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959_il2cpp_TypeInfo_var)));
		// savedStates = GetStates();
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_6;
		L_6 = InvokerFuncInvoker0< VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), __this);
		__this->___savedStates_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___savedStates_6), (void*)L_6);
		// ret = true;
		V_0 = (bool)1;
		goto IL_005a;
	}

IL_0039:
	{
		// var newStates = GetStates();
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_7;
		L_7 = InvokerFuncInvoker0< VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), __this);
		V_2 = L_7;
		// if (savedStates == null || ChangedStates(newStates))
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_8 = (VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D*)__this->___savedStates_6;
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_9 = V_2;
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)), il2cpp_rgctx_method(method->klass->rgctx_data, 28), __this, L_9);
		if (!L_10)
		{
			goto IL_005a;
		}
	}

IL_0051:
	{
		// savedStates = newStates;
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_11 = V_2;
		__this->___savedStates_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___savedStates_6), (void*)L_11);
		// ret = true;
		V_0 = (bool)1;
	}

IL_005a:
	{
		// var triggerPos = selectedCameraPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = VirtualFuncInvoker0Invoker< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(23 /* UnityEngine.Vector3 UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::get_selectedCameraPosition() */, __this);
		V_1 = L_12;
		// weights = new float[volumes.Length];
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_13 = (VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)__this->___volumes_5;
		NullCheck(L_13);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)));
		__this->___weights_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___weights_4), (void*)L_14);
		// for (int i = 0; i < volumes.Length; i++)
		V_3 = 0;
		goto IL_0093;
	}

IL_0078:
	{
		// weights[i] = ComputeWeight(volumes[i], triggerPos);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->___weights_4;
		int32_t L_16 = V_3;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_17 = (VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)__this->___volumes_5;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		float L_22;
		L_22 = InvokerFuncInvoker2< float, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_20, L_21);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (float)L_22);
		// for (int i = 0; i < volumes.Length; i++)
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0093:
	{
		// for (int i = 0; i < volumes.Length; i++)
		int32_t L_24 = V_3;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_25 = (VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)__this->___volumes_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		// return ret;
		bool L_26 = V_0;
		return L_26;
	}
}
// System.Single UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::GetVolumeWeight(UnityEngine.Rendering.Volume)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeDebugSettings_1_GetVolumeWeight_m3387DAC0C85557A2014BD3BCE058EB82BF9D5A77_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___volume0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// if (weights == null)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->___weights_4;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_000e:
	{
		// float total = 0f, weight = 0f;
		V_0 = (0.0f);
		// float total = 0f, weight = 0f;
		V_1 = (0.0f);
		// for (int i = 0; i < volumes.Length; i++)
		V_2 = 0;
		goto IL_004b;
	}

IL_001e:
	{
		// weight = weights[i];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->___weights_4;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// weight *= 1f - total;
		float L_5 = V_1;
		float L_6 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply(L_5, ((float)il2cpp_codegen_subtract((1.0f), L_6))));
		// total += weight;
		float L_7 = V_0;
		float L_8 = V_1;
		V_0 = ((float)il2cpp_codegen_add(L_7, L_8));
		// if (volumes[i] == volume)
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_9 = (VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)__this->___volumes_5;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_13 = ___volume0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, NULL);
		if (!L_14)
		{
			goto IL_0047;
		}
	}
	{
		// return weight;
		float L_15 = V_1;
		return L_15;
	}

IL_0047:
	{
		// for (int i = 0; i < volumes.Length; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_004b:
	{
		// for (int i = 0; i < volumes.Length; i++)
		int32_t L_17 = V_2;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_18 = (VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)__this->___volumes_5;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		// return 0f;
		return (0.0f);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::VolumeHasInfluence(UnityEngine.Rendering.Volume)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeDebugSettings_1_VolumeHasInfluence_m942AC540CBD53558C53F93061616B789E26EE055_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___volume0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m4150F2AE8B4B55425B19967BA711A84415E259D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (weights == null)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->___weights_4;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// int index = Array.IndexOf(volumes, volume);
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_1 = (VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)__this->___volumes_5;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_2 = ___volume0;
		int32_t L_3;
		L_3 = Array_IndexOf_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m4150F2AE8B4B55425B19967BA711A84415E259D2(L_1, L_2, Array_IndexOf_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m4150F2AE8B4B55425B19967BA711A84415E259D2_RuntimeMethod_var);
		V_0 = L_3;
		// if (index == -1)
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001d:
	{
		// return weights[index] != 0f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->___weights_4;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		float L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		return (bool)((((int32_t)((((float)L_8) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1__ctor_m864644C7BF3F289CAF8CE675A45697B82FE6E82A_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeDebugSettings`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1__cctor_m73C5EE168DB5BBCB6FD3BD9A722689297C06F0CA_gshared (const RuntimeMethod* method) 
{
	{
		// protected static List<T> additionalCameraDatas { get; private set; } = new List<T>();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31), L_0);
		((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CadditionalCameraDatasU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CadditionalCameraDatasU3Ek__BackingField_3), (void*)L_0);
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
// T UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_get_value_m130C88D03ABADB576A908E2E26FE90E24881F7DB_gshared (/*UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		// get => m_Value;
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0)), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m09FF3C49735C8ECA8ACA4572044EA393D95C6376_gshared (/*UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		// set => m_Value = value;
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 1)) ? ___value0 : &___value0), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0), L_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mA616936A4E10317580AE921071D36637ED0A3FE9_gshared (/*UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	memset(V_0, 0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		// : this(default, false)
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 1)) ? L_0: *(void**)L_0), (bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m863FDCA6A4AE26E8D21738715A6E337BB7D5FDD8_gshared (/*UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, bool ___overrideState1, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		// protected VolumeParameter(T value, bool overrideState)
		VolumeParameter__ctor_m1A76B3C6C284C912F55F7C7E6EF21A18AF3930D2((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, NULL);
		// m_Value = value;
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 1)) ? ___value0 : &___value0), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0), L_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		// this.overrideState = overrideState;
		bool L_1 = ___overrideState1;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Interp(UnityEngine.Rendering.VolumeParameter,UnityEngine.Rendering.VolumeParameter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m0CA46FB75295800D8B2A7C02F66F7DDD9384D23C_gshared (/*UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___from0, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___to1, float ___t2, const RuntimeMethod* method) 
{
	// T
	// sizeof(T)
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		// Interp(from.GetValue<T>(), to.GetValue<T>(), t);
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___from0;
		NullCheck(L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_0, (Il2CppFullySharedGenericAny*)L_1);
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_2 = ___to1;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_2, (Il2CppFullySharedGenericAny*)L_3);
		float L_4 = ___t2;
		VirtualActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, float >::Invoke(14 /* System.Void UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Interp(T,T,System.Single) */, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 1)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 1)) ? L_3: *(void**)L_3), L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mA5DD59296A4481DBEC4ACDE08B11497E0838684F_gshared (/*UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___from0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___to1, float ___t2, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* G_B2_0 = NULL;
	VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	memset(G_B3_0, 0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* G_B3_1 = NULL;
	{
		// m_Value = t > 0f ? to : from;
		float L_0 = ___t2;
		G_B1_0 = ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)__this);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)__this);
			goto IL_000c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 1)) ? ___from0 : &___from0), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(G_B3_0, L_1, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		G_B3_1 = ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)G_B1_0);
		goto IL_000d;
	}

IL_000c:
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 1)) ? ___to1 : &___to1), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(G_B3_0, L_2, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		G_B3_1 = ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)G_B2_0);
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		il2cpp_codegen_write_instance_field_data(G_B3_1, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0), G_B3_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m7C1B4B87F845CEF17B9FE1DC7C476741E2AA73C2_gshared (/*UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___x0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		// overrideState = true;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, (bool)1);
		// m_Value = x;
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 1)) ? ___x0 : &___x0), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0), L_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetValue(UnityEngine.Rendering.VolumeParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_mC22AF6C46073698212DA5E411F582D8D1A4F2589_gshared (/*UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___parameter0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		// m_Value = parameter.GetValue<T>();
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___parameter0;
		NullCheck(L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0), L_1, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_m67709A9D28380EB1F99B0D0877445D25828E5891_gshared (/*UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_8 = L_4;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	memset(V_2, 0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		// int hash = 17;
		V_0 = ((int32_t)17);
		// hash = hash * 23 + overrideState.GetHashCode();
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		V_1 = L_1;
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)23))), L_2));
		// if (!EqualityComparer<T>.Default.Equals(value, default)) // Catches null for references with boxing of value types
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = InvokerFuncInvoker0< EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_value() */, __this, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(L_5, V_2, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Equals(T,T) */, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 1)) ? L_4: *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 1)) ? L_5: *(void**)L_5));
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// hash = hash * 23 + value.GetHashCode();
		int32_t L_7 = V_0;
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_value() */, __this, (Il2CppFullySharedGenericAny*)L_8);
		il2cpp_codegen_memcpy(V_2, L_8, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_9, (void*)(Il2CppFullySharedGenericAny*)V_2);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)23))), L_10));
	}

IL_004c:
	{
		// return hash;
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.String UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m1DC4E78F08D48194AF38E9ED9EB63B4C4195E86E_gshared (/*UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	// T
	// sizeof(T)
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		// public override string ToString() => $"{value} ({overrideState})";
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_value() */, __this, (Il2CppFullySharedGenericAny*)L_0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, L_1, L_4, NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::op_Equality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_mFB9A5ACACD63E673940ABCCD71BFBCF5939514B3_gshared (/*UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* ___lhs0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___rhs1, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_5 = L_2;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	memset(V_0, 0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		// public static bool operator ==(VolumeParameter<T> lhs, T rhs) => lhs != null && !ReferenceEquals(lhs.value, null) && lhs.value.Equals(rhs);
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_0 = ___lhs0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_1 = ___lhs0;
		NullCheck(L_1);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_value() */, L_1, (Il2CppFullySharedGenericAny*)L_2);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_2);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_4 = ___lhs0;
		NullCheck(L_4);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_value() */, L_4, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? ___rhs1 : &___rhs1), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_6);
		bool L_9;
		L_9 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11), L_8, (void*)(Il2CppFullySharedGenericAny*)V_0, L_7);
		return L_9;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::op_Inequality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m8551AFE47546E9FE859077FB75033B4DABB36AA8_gshared (/*UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* ___lhs0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___rhs1, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		// public static bool operator !=(VolumeParameter<T> lhs, T rhs) => !(lhs == rhs);
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_0 = ___lhs0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? ___rhs1 : &___rhs1), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? L_1: *(void**)L_1));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Equals(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mE6CB1D07EC2DE1DE825EB7AE097CA54AB980218F_gshared (/*UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, /*UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* ___other0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		// if (ReferenceEquals(null, other))
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other))
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_1 = ___other0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)__this) == ((RuntimeObject*)(VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return EqualityComparer<T>.Default.Equals(m_Value, other.m_Value);
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_2;
		L_2 = InvokerFuncInvoker0< EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0)), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_4 = ___other0;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0)), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		NullCheck(L_2);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Equals(T,T) */, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 1)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 1)) ? L_5: *(void**)L_5));
		return L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m72DBE726E1E91E1E6FBB9463C65FB181504FAC57_gshared (/*UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject* L_1 = ___obj0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck((RuntimeObject*)__this);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((VolumeParameter<T>)obj);
		RuntimeObject* L_6 = ___obj0;
		bool L_7;
		L_7 = InvokerFuncInvoker1< bool, VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)CastclassClass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		return L_7;
	}
}
// T UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::op_Explicit(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_op_Explicit_m06E2D8024C6E6B043D67E524AD2FB6A0EA25BF4F_gshared (/*UnityEngine.Rendering.VolumeParameter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* ___prop0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		// public static explicit operator T(VolumeParameter<T> prop) => prop.m_Value;
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_0 = ___prop0;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
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
// System.Void System.WeakReference`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___target0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___target0;
		InvokerActionInvoker2< RuntimeObject*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), __this, L_0, (bool)0);
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___target0, bool ___trackResurrection1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___trackResurrection1;
		__this->___trackResurrection_1 = L_0;
		bool L_1 = ___trackResurrection1;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (int32_t)G_B3_0;
		RuntimeObject* L_2 = ___target0;
		int32_t L_3 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_2, L_3, NULL);
		__this->___handle_0 = L_4;
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m2289DC7F3597E1BA77555086A86F91807FDC96E2_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WeakReference_1__ctor_m2289DC7F3597E1BA77555086A86F91807FDC96E2_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		NullCheck(L_2);
		bool L_3;
		L_3 = SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5(L_2, _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, NULL);
		__this->___trackResurrection_1 = L_3;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___info0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_4, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, L_6, NULL);
		V_0 = L_7;
		bool L_8 = (bool)__this->___trackResurrection_1;
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 1;
	}

IL_0047:
	{
		V_1 = (int32_t)G_B5_0;
		RuntimeObject* L_9 = V_0;
		int32_t L_10 = V_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_11;
		L_11 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_9, L_10, NULL);
		__this->___handle_0 = L_11;
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_GetObjectData_m6F2E12AF126FAE536995F52F9501498BDA5917A7_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WeakReference_1_GetObjectData_m6F2E12AF126FAE536995F52F9501498BDA5917A7_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		bool L_3 = (bool)__this->___trackResurrection_1;
		NullCheck(L_2);
		SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D(L_2, _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, L_3, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_4 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle_0);
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_4, NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___info0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_7 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle_0);
		RuntimeObject* L_8;
		L_8 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5(L_7, NULL);
		NullCheck(L_6);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_6, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, L_8, NULL);
		return;
	}

IL_0043:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		NullCheck(L_9);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_9, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, NULL, NULL);
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::SetTarget(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_SetTarget_mCEAE8D9CF9551015CE46420AB8614A8D1F14C329_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___target0, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle_0);
		RuntimeObject* L_1 = ___target0;
		GCHandle_set_Target_m1DB05E14910747D2A74ACEB4C48028C4AEBFCF3D(L_0, L_1, NULL);
		return;
	}
}
// System.Boolean System.WeakReference`1<System.Object>::TryGetTarget(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject** ___target0, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle_0);
		bool L_1;
		L_1 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_0, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject** L_2 = ___target0;
		il2cpp_codegen_initobj(L_2, sizeof(RuntimeObject*));
		return (bool)0;
	}

IL_0016:
	{
		RuntimeObject** L_3 = ___target0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_4 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle_0);
		RuntimeObject* L_5;
		L_5 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5(L_4, NULL);
		*(RuntimeObject**)L_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		RuntimeObject** L_6 = ___target0;
		RuntimeObject* L_7 = (*(RuntimeObject**)L_6);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void System.WeakReference`1<System.Object>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_Finalize_m22CABA82C1F2B17A77E275483306A0DADECAF151_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				NullCheck((RuntimeObject*)__this);
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle_0);
			GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
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
// System.Void UnityEngine.InputSystem.Utilities.WhereObservable`1/Where<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(UnityEngine.InputSystem.Utilities.WhereObservable`1<TValue>,System.IObserver`1<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__ctor_m1005F36B2810D6C9BAEA784E3978689A96EB7347_gshared (Where_t04DB031F94FE910A83839B12D2DC5BCACAA6F25C* __this, WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816* ___observable0, RuntimeObject* ___observer1, const RuntimeMethod* method) 
{
	{
		// public Where(WhereObservable<TValue> observable, IObserver<TValue> observer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// m_Observable = observable;
		WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816* L_0 = ___observable0;
		__this->___m_Observable_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Observable_0), (void*)L_0);
		// m_Observer = observer;
		RuntimeObject* L_1 = ___observer1;
		__this->___m_Observer_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Observer_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Utilities.WhereObservable`1/Where<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where_OnCompleted_m616C74C91F79C9E2AC50707A678EB9E1FE72EB1C_gshared (Where_t04DB031F94FE910A83839B12D2DC5BCACAA6F25C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Utilities.WhereObservable`1/Where<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where_OnError_m856337670C3AEAE4C7F09DA64E3328FF8834431A_gshared (Where_t04DB031F94FE910A83839B12D2DC5BCACAA6F25C* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogException(error);
		Exception_t* L_0 = ___error0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Utilities.WhereObservable`1/Where<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where_OnNext_mA0CF021050C0C4674B3F473DB08E0A7F15D8DEF3_gshared (Where_t04DB031F94FE910A83839B12D2DC5BCACAA6F25C* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___evt0, const RuntimeMethod* method) 
{
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_t646830852B65DBDC12DCC4F9FEFADE171F489ABE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
	// TValue
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t646830852B65DBDC12DCC4F9FEFADE171F489ABE);
	const Il2CppFullySharedGenericAny L_5 = L_2;
	{
		// if (m_Observable.m_Predicate(evt))
		WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816* L_0 = (WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816*)__this->___m_Observable_0;
		NullCheck(L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)L_0->___m_Predicate_1;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 4)) ? ___evt0 : &___evt0), SizeOf_TValue_t646830852B65DBDC12DCC4F9FEFADE171F489ABE);
		NullCheck(L_1);
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 4)) ? L_2: *(void**)L_2));
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// m_Observer.OnNext(evt);
		RuntimeObject* L_4 = (RuntimeObject*)__this->___m_Observer_1;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 4)) ? ___evt0 : &___evt0), SizeOf_TValue_t646830852B65DBDC12DCC4F9FEFADE171F489ABE);
		NullCheck(L_4);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 4)) ? L_5: *(void**)L_5));
	}

IL_001f:
	{
		// }
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mD8BDE04F9897AAED299EE4DC32BF3879F2CBB668_gshared (/*System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereArrayIterator_1_Clone_m1D80001794E47D2DF00A77273FD71D61987E8A44_gshared (/*System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* L_2 = (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_2, L_0, L_1);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m42FC055181A1CDD12BBB46A9EE9ED76C6048BA07_gshared (/*System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
	// TSource
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	const Il2CppFullySharedGenericAny L_9 = L_4;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	memset(V_0, 0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		NullCheck(L_6);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 7)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, V_0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),2), L_9, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mB2C59E78355E518D359A6D5035BCD6254337B84E_gshared (/*System.Linq.Enumerable/WhereArrayIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___predicate0;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = InvokerFuncInvoker2< Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, L_1, L_2);
		WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* L_4 = (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_4);
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_4, L_0, L_3);
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2DD2BB86C5517EDD8C051BBF8CE38C43D712A8D6_gshared (/*System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, RuntimeObject* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		RuntimeObject* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereEnumerableIterator_1_Clone_m0317D203B88386A9A479C72FA9D62763FD0A91D3_gshared (/*System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_2 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_2, L_0, L_1);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m2583FECFDC8EDFE66C959C7C386F99E287C5763E_gshared (/*System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), (RuntimeObject*)NULL);
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m1A18D4050C069B6C4310DAB9857281E37DCB2C69_gshared (/*System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// TSource
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	const Il2CppFullySharedGenericAny L_10 = L_6;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	memset(V_1, 0, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),1), 2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		NullCheck(L_5);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),2), L_10, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mC623267514B4299E409A01161DBBDA5362CEDFC2_gshared (/*System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___predicate0;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = InvokerFuncInvoker2< Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), NULL, L_1, L_2);
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_4 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_4);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_4, L_0, L_3);
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mC075454926AF320E4679335A1B81D3F56ACEFC0C_gshared (/*System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereListIterator_1_Clone_mAA3ED56493E5FF2F49FE37EB7CDF6C0A957698B5_gshared (/*System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* L_2 = (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		InvokerActionInvoker2< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_2, L_0, L_1);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mB5E4EB089AD8CF7156B8972C7FB61739C466ED5E_gshared (/*System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
	// sizeof(System.Collections.Generic.List`1/Enumerator<TSource>)
	const uint32_t SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
	// TSource
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	const Il2CppFullySharedGenericAny L_9 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	// System.Collections.Generic.List`1/Enumerator<TSource>
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	memset(V_1, 0, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_4, SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),1), 2);
		goto IL_004e;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		NullCheck(L_6);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 10)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 6),2), L_9, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		return (bool)1;
	}

IL_004e:
	{
		bool L_10;
		L_10 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2)))));
		if (L_10)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mC767815DE2249E70B38D6D172A0C61B028D7A44B_gshared (/*System.Linq.Enumerable/WhereListIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___predicate0;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = InvokerFuncInvoker2< Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), NULL, L_1, L_2);
		WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* L_4 = (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_4);
		InvokerActionInvoker2< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_4, L_0, L_3);
		return (RuntimeObject*)L_4;
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
// System.Void UnityEngine.InputSystem.Utilities.WhereObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.IObservable`1<TValue>,System.Func`2<TValue,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereObservable_1__ctor_m6C7B01F3F1790F57E8A6CB4AA4B3C3FF98902286_gshared (WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816* __this, RuntimeObject* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, const RuntimeMethod* method) 
{
	{
		// public WhereObservable(IObservable<TValue> source, Func<TValue, bool> predicate)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// m_Source = source;
		RuntimeObject* L_0 = ___source0;
		__this->___m_Source_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Source_0), (void*)L_0);
		// m_Predicate = predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		__this->___m_Predicate_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Predicate_1), (void*)L_1);
		// }
		return;
	}
}
// System.IDisposable UnityEngine.InputSystem.Utilities.WhereObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereObservable_1_Subscribe_m168CEC0B9EEA35158738902505C40C2DE2D53ED5_gshared (WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816* __this, RuntimeObject* ___observer0, const RuntimeMethod* method) 
{
	{
		// return m_Source.Subscribe(new Where(this, observer));
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Source_0;
		RuntimeObject* L_1 = ___observer0;
		Where_t04DB031F94FE910A83839B12D2DC5BCACAA6F25C* L_2 = (Where_t04DB031F94FE910A83839B12D2DC5BCACAA6F25C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_2);
		InvokerActionInvoker2< WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_2, __this, L_1);
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, (RuntimeObject*)L_2);
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mB15DB27A8DC3B4E00BCA6E8F63F00F7E374F76A4_gshared (/*System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___selector2, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___selector2;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectArrayIterator_2_Clone_mFBF81AE0E2B6F7A7A79FC98398E7A6AC0FD330E9_gshared (/*System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* L_3 = (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		InvokerActionInvoker3< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3, L_0, L_1, L_2);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mEF7E8E7B117D6D1147C53CAE838836974171392C_gshared (/*System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// TSource
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	const Il2CppFullySharedGenericAny L_8 = L_4;
	const Il2CppFullySharedGenericAny L_11 = L_4;
	// TResult
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	memset(V_0, 0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 8)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 8)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mD81DB59B1D07BC8DDB099A652B22BA9C1538D7A3_gshared (/*System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_1, (RuntimeObject*)__this, L_0);
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m9A4AF54DC527FA1CEF8B803C8DDA5E632838B06F_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, RuntimeObject* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___selector2, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		RuntimeObject* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___selector2;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectEnumerableIterator_2_Clone_mD773B8B24D1459B11BA4462A6DD68865514ADC9E_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* L_3 = (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		InvokerActionInvoker3< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3, L_0, L_1, L_2);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m640FAC111BC786414B40480BB03E4F84B2FFB179_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), (RuntimeObject*)NULL);
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mB384EFAF6366166F28EDFDBA272EEC1089E1A115_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 15));
	// TSource
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	const Il2CppFullySharedGenericAny L_9 = L_6;
	const Il2CppFullySharedGenericAny L_12 = L_6;
	// TResult
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	memset(V_1, 0, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		NullCheck(L_5);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_8 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		NullCheck(L_8);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 12)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_11 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_12, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		NullCheck(L_11);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 12)) ? L_12: *(void**)L_12), (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),2), L_13, SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mB8ACBBFA48460E67B18647EF16E6EE4D0BE08679_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		NullCheck(L_1);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), L_1, (RuntimeObject*)__this, L_0);
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___selector2, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___selector2;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		InvokerActionInvoker3< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3, L_0, L_1, L_2);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// sizeof(System.Collections.Generic.List`1/Enumerator<TSource>)
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
	// TSource
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	// TResult
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	// System.Collections.Generic.List`1/Enumerator<TSource>
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3)))));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_1, (RuntimeObject*)__this, L_0);
		return (RuntimeObject*)L_1;
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
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) 
{
	{
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___src0;
		int32_t L_1 = ___srcLen1;
		InvokerActionInvoker3< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), __this, L_0, 0, L_1);
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_AdjustorThunk (RuntimeObject* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA(_thisAdjusted, ___src0, ___srcLen1, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B2_0 = NULL;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B3_1 = NULL;
	{
		// m_Data = src;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___src0;
		__this->___m_Data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_0);
		// m_Start = srcStart;
		int32_t L_1 = ___srcStart1;
		__this->___m_Start_1 = L_1;
		// m_Length = (srcLen < 0) ? src.Length : Math.Min(srcLen, src.Length);
		int32_t L_2 = ___srcLen2;
		G_B1_0 = __this;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___srcLen2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___src0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___src0;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length_2 = G_B3_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_AdjustorThunk (RuntimeObject* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA(_thisAdjusted, ___src0, ___srcStart1, ___srcLen2, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	{
		// get => m_Data[m_Start + index];
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		il2cpp_codegen_memcpy(L_4, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726(_thisAdjusted, ___index0, il2cppRetVal, method);
	return;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	{
		// set => m_Data[m_Start + index] = value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? ___value1 : &___value1), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		NullCheck(L_0);
		il2cpp_codegen_memcpy((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), L_3, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (void**)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F(_thisAdjusted, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		// public int capacity => m_Data.Length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___m_Data_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare0, const RuntimeMethod* method) 
{
	{
		// if (m_Length > 1)
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		// Sorting.QuickSort(m_Data, m_Start, m_Start + m_Length - 1, compare);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___m_Data_0;
		int32_t L_2 = (int32_t)__this->___m_Start_1;
		int32_t L_3 = (int32_t)__this->___m_Start_1;
		int32_t L_4 = (int32_t)__this->___m_Length_2;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_5 = ___compare0;
		InvokerActionInvoker4< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5), NULL, L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5);
	}

IL_002a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_AdjustorThunk (RuntimeObject* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare0, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94(_thisAdjusted, ___compare0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* currentDelegate = reinterpret_cast<WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, NULL, ___val0, ___fieldValue1);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___val0, ___fieldValue1);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, __this->___m_target_2, ___val0, ___fieldValue1);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	NullCheck(___val0);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, ___val0, ___fieldValue1);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mCE6F306923A685DD2E41E1BAABB666E0F7B4E137_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker;
		else
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* BaseVerticalCollectionView_get_dragger_m561975581D087B9C51C90CDFC1D68EE6CECD9446_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	{
		ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* L_0 = __this->___m_Dragger_103;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CindexU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ListViewDraggerAnimated_get_draggedItem_m883BB528AA8A39239BD882AC45FC24981C45E5EC_inline (ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* __this, const RuntimeMethod* method) 
{
	{
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_0 = __this->___m_Item_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaseVerticalCollectionView_get_lastHeight_mEDABF6845E379DCA0216106F56FAF84B952DA1F2_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_LastHeight_101;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* BaseVerticalCollectionView_get_scrollView_mB4F44C6276CC57A0D8AD030F3C396650532E83CC_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_0 = __this->___m_ScrollView_93;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	{
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_0 = __this->___m_ViewController_94;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CindexU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReusableCollectionItem_set_id_m681AB8AB77EE8E8E0B0105C0955B7BCF1FBDE1B7_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* __this, const RuntimeMethod* method) 
{
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = __this->___U3CcontentViewportU3Ek__BackingField_89;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	{
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_0 = __this->___U3ChierarchyU3Ek__BackingField_63;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Volume_get_isGlobal_m09C1E1FB39D06DD9EC78DF276DE9A1FBE3E42763_inline (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, const RuntimeMethod* method) 
{
	{
		// get => m_IsGlobal;
		bool L_0 = __this->___m_IsGlobal_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->____size_2;
		V_0 = L_2;
		__this->____size_2 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
