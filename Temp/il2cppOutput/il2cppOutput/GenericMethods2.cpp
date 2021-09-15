#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Object,System.Int32>,System.Object>
struct Dictionary_2_t3BA8FCFE5DD25F2BB4BBAC4C3C306D4755C6003E;
// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>>
struct Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Rendering.ProfilingSampler>
struct Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>
struct Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>
struct Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.VolumeComponent>
struct Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4;
// UnityEngine.Rendering.DynamicArray`1<System.Object>
struct DynamicArray_1_tBD159187A396D2634FDBCFD5A8F85F26FA3DF11D;
// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/CompiledPassInfo>
struct DynamicArray_1_t141EB4910B97146B9BB45A5021F0687B50ED95F7;
// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource>
struct DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55;
// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RendererListResource>
struct DynamicArray_1_t240269079A07187CA35F5933B3D1DF275B77C5FB;
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7;
// System.Collections.Generic.EqualityComparer`1<System.Char>
struct EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ColorBlock>
struct EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40;
// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62;
// System.Collections.Generic.EqualityComparer`1<System.Int32Enum>
struct EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Navigation>
struct EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC;
// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.SpriteState>
struct EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB;
// System.Collections.Generic.IEqualityComparer`1<System.ValueTuple`2<System.Type,System.Int32>>
struct IEqualityComparer_1_t324556A8C94D43C8FA61C86589801A825C2058A6;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>
struct IEqualityComparer_1_t7AA149E6B89D540CAA0C0E63998D86FFAF7B9FAC;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>>
struct KeyCollection_t253ACBE24D774E37D5DDA3B3202D915ADB7478CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>
struct KeyCollection_t2F961B4793B384074B6770D540195D3D10A72394;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>
struct KeyCollection_t52E5DCE019FF7A8EBD2FB1DB1332A98E785AD8B4;
// System.Lazy`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPool`1<System.Object>>
struct Lazy_1_t0355455B9B95C0CA606AC09821D3789B811EA4F7;
// System.Lazy`1<UnityEngine.Rendering.VolumeManager>
struct Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Object,System.Int32>>>
struct List_1_tF02A82794DEE71696980759B59FE362CDFDC52BE;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>>
struct List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor>
struct List_1_t13B7F19BE124BF950C29583D073B7D2174DCA122;
// System.Collections.Generic.List`1<UnityEngine.MaterialPropertyBlock>
struct List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t432BA4439FC00E108A9A351BD7FBCD9242270BB3;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph>
struct List_1_t3049CAFD28A8058922DC33A846A0102A33F31833;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass>
struct List_1_tE825566258696352A9BBDE7670E9B79137D429AC;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle>
struct List_1_tB573D1DD7F85019D1433F20C305FE237B12BCA19;
// System.Collections.Generic.List`1<UnityEngine.SubsystemDescriptor>
struct List_1_t32E50BD66297C6541AEA401E1C13D4EC530CC56B;
// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider>
struct List_1_t4DCA5C48F3390AC8CD79C7AD8D0963D5DAE5CF2E;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>
struct List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A;
// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>
struct List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.VolumeParameter>
struct ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<System.Object>
struct RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>>
struct ValueCollection_t7C93F934D928AE916FB6331BA0B2BC17A8C0C7F0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>
struct ValueCollection_tBFD5E27262230F700B3CB05B0D8ECF7C1ECD8AF0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>
struct ValueCollection_t62AA90331D9BC59B70F7F97E7392BD2096D1DCD1;
// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/CompiledResourceInfo>[]
struct DynamicArray_1U5BU5D_t5D9F0AED89FFCE5C1D28524E52D8A6AFC326D45D;
// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource>[]
struct DynamicArray_1U5BU5D_tE68B771DE0306BDE74F780E5C89A668541D46E19;
// System.Collections.Generic.Dictionary`2/Entry<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>>[]
struct EntryU5BU5D_t917D87C40CB3EC1D36A981CC0ED5E85AF32C0C3D;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>[]
struct EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>[]
struct EntryU5BU5D_t0FDE1FA8CEAE36EB81B37EED059EC553C2C7F486;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>[]
struct EntryU5BU5D_t4791E4AF4D5704859940020BF8B328FCA1F00412;
// System.Collections.Generic.List`1<System.Int32>[]
struct List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.ResourceHandle>[]
struct List_1U5BU5D_t80F55F500E654C0547309817F7109377EDB8D35C;
// System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>[]
struct ValueTuple_2U5BU5D_t168EAEA12D12EB7E324043CF1D947DC6A4397AC9;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass[]
struct RenderGraphPassU5BU5D_t043FBAF7CBA01E7D1D74166A33AAF6864A02F38D;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle[]
struct TextureHandleU5BU5D_tB65A05D85A642CF679FDF6AB6860DE1151B0030A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// UnityEngine.Rendering.Volume[]
struct VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288;
// UnityEngine.Rendering.VolumeComponent[]
struct VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource[]
struct IRenderGraphResourceU5BU5D_t3A6AA3DB1F0BEC1FDF224A8D49C37387850DAC65;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29;
// UnityEngine.Experimental.Rendering.RenderGraphModule.ComputeBufferPool
struct ComputeBufferPool_tA4A9B6DCD292D09BAD75A26257F4FF2F3E920DE3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// UnityEngine.Profiling.CustomSampler
struct CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MonoTypeInfo
struct MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92;
// UnityEngine.Rendering.RTHandle
struct RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6;
// UnityEngine.Profiling.Recorder
struct Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph
struct RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext
struct RenderGraphContext_t356A8F1ED1EB20D4778552A10E4B39254486A0DA;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData
struct RenderGraphDebugData_t5BAF2CEA2AE98A5257DCEB8A7F6BD30CAF309289;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugParams
struct RenderGraphDebugParams_t3BEA7A9CEB112DBA01578963DBD74C4D9756AADE;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDefaultResources
struct RenderGraphDefaultResources_t08FFC4A56DAF58D484CC04CE25236A5C3F85B1AE;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger
struct RenderGraphLogger_t5D35C0198A0D27368C971A2B67DD680988E32B12;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool
struct RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass
struct RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry
struct RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB;
// System.RuntimeType
struct RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Experimental.Rendering.RenderGraphModule.TexturePool
struct TexturePool_tAFB93DC1A81E35E57CFC5F6A7EE72260A78FF824;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UnityException
struct UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Rendering.Volume
struct Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E;
// UnityEngine.Rendering.VolumeComponent
struct VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E;
// UnityEngine.Rendering.VolumeManager
struct VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181;
// UnityEngine.Rendering.VolumeParameter
struct VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB;
// UnityEngine.Rendering.VolumeProfile
struct VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821;
// UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t4638094A6814F5738CB2D77994423EEBAB6F342A;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/OnGraphRegisteredDelegate
struct OnGraphRegisteredDelegate_t8FC68CA1E04D3726D8FF557CEADC4FECC3A6A464;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource
struct IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08AAD62E530799C15714A41B93652F8A49FDBB68;
IL2CPP_EXTERN_C String_t* _stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8C0FEACB3F25706873303C3604F2CE5666744C;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468;
IL2CPP_EXTERN_C String_t* _stringLiteral7ECFB57A0D1B5CE741045B6B75AB6521BC5B5C0F;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46;
IL2CPP_EXTERN_C String_t* _stringLiteralB76C1A87204BBFDC1EB8755ECBEA3E6B651710A2;
IL2CPP_EXTERN_C String_t* _stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775;
IL2CPP_EXTERN_C String_t* _stringLiteralE958A63C0675D65C92182FC45CE3E78A8DD48061;
IL2CPP_EXTERN_C String_t* _stringLiteralF704B54D833421164E45E576DFD279921246BCEA;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mDAA960915A2AC9EB90B8C182EDF0AAA4F2B1F2DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mAF5ECE514EBBFDF70BC04B74C22FCA11AE8F50F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m105EB83275DBE11D491CC225AC0B61C464EDA6C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_Resize_m3B2CC8B31ECD5B9997CC42866E7E5C70BF08C563_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_Item_m71FE70254B518D98093BE39B8320F7EDC6D920FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_size_m97FC055466349D558BE16DF3226963D5EE56E22E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8AAB63E2716F881CEFF7994A1FC27D1D6D5D0B35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBE0C626E2FD3A12EB78158C34DC7E59DA8B5B01D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m592B3F212F5C1D9FD3FBAB391854B3487FA569C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mDD65420B0C51E00EEE7174BC1A9CFB71EEB0D662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_mF6E2AC2A0E7F00ED11C0A584EDF5C4095BBD4745_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m20A5A34CECDE7CF47EE9FD1F719F184D13C28C84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3420715C3175CF376D362051503A0C7A82A29792_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEA25DFFCAB673BD76ADA473172AD1E090CD3B1E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBD84A03FCAB5BB973EA9CD4416A507076ED9452D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m352EF9B202EE82C0ACF5978B202F0F2F5E48D2EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mesh_GetUVsImpl_TisRuntimeObject_m33E2C32D3A30A11CD4EBB8F1283C090427CC4439_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mesh_GetUVsImpl_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mDF630E82000E431DB71B3ADC7922E47379D02F98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NoAllocHelpers_ResizeList_TisRuntimeObject_m7B47D97FC9235185AA88E3BE217002C6BD8C8A4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NoAllocHelpers_ResizeList_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mD23AEDDE78B67AEE8CBA2EE853755A4A952AA414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m11A1B226C4A180133FD582A6FBF9810BD1C1C0FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisRuntimeObject_mBC686B1BF5A44330A8793A0AA29F383CF55533C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m41AF3144A52DC18C08176F88B4C22B912252C905_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mE6F93DA1C3D33EECE3A273ACEB55E9A51D17D1A3_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
struct RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>>
struct Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t917D87C40CB3EC1D36A981CC0ED5E85AF32C0C3D* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t253ACBE24D774E37D5DDA3B3202D915ADB7478CD * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7C93F934D928AE916FB6331BA0B2BC17A8C0C7F0 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131, ___entries_1)); }
	inline EntryU5BU5D_t917D87C40CB3EC1D36A981CC0ED5E85AF32C0C3D* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t917D87C40CB3EC1D36A981CC0ED5E85AF32C0C3D** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t917D87C40CB3EC1D36A981CC0ED5E85AF32C0C3D* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131, ___keys_7)); }
	inline KeyCollection_t253ACBE24D774E37D5DDA3B3202D915ADB7478CD * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t253ACBE24D774E37D5DDA3B3202D915ADB7478CD ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t253ACBE24D774E37D5DDA3B3202D915ADB7478CD * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131, ___values_8)); }
	inline ValueCollection_t7C93F934D928AE916FB6331BA0B2BC17A8C0C7F0 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7C93F934D928AE916FB6331BA0B2BC17A8C0C7F0 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7C93F934D928AE916FB6331BA0B2BC17A8C0C7F0 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___entries_1)); }
	inline EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___keys_7)); }
	inline KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___values_8)); }
	inline ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>
struct Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0FDE1FA8CEAE36EB81B37EED059EC553C2C7F486* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t2F961B4793B384074B6770D540195D3D10A72394 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBFD5E27262230F700B3CB05B0D8ECF7C1ECD8AF0 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005, ___entries_1)); }
	inline EntryU5BU5D_t0FDE1FA8CEAE36EB81B37EED059EC553C2C7F486* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0FDE1FA8CEAE36EB81B37EED059EC553C2C7F486** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0FDE1FA8CEAE36EB81B37EED059EC553C2C7F486* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005, ___keys_7)); }
	inline KeyCollection_t2F961B4793B384074B6770D540195D3D10A72394 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2F961B4793B384074B6770D540195D3D10A72394 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2F961B4793B384074B6770D540195D3D10A72394 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005, ___values_8)); }
	inline ValueCollection_tBFD5E27262230F700B3CB05B0D8ECF7C1ECD8AF0 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBFD5E27262230F700B3CB05B0D8ECF7C1ECD8AF0 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBFD5E27262230F700B3CB05B0D8ECF7C1ECD8AF0 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>
struct Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4791E4AF4D5704859940020BF8B328FCA1F00412* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52E5DCE019FF7A8EBD2FB1DB1332A98E785AD8B4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t62AA90331D9BC59B70F7F97E7392BD2096D1DCD1 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910, ___entries_1)); }
	inline EntryU5BU5D_t4791E4AF4D5704859940020BF8B328FCA1F00412* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4791E4AF4D5704859940020BF8B328FCA1F00412** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4791E4AF4D5704859940020BF8B328FCA1F00412* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910, ___keys_7)); }
	inline KeyCollection_t52E5DCE019FF7A8EBD2FB1DB1332A98E785AD8B4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52E5DCE019FF7A8EBD2FB1DB1332A98E785AD8B4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52E5DCE019FF7A8EBD2FB1DB1332A98E785AD8B4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910, ___values_8)); }
	inline ValueCollection_t62AA90331D9BC59B70F7F97E7392BD2096D1DCD1 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t62AA90331D9BC59B70F7F97E7392BD2096D1DCD1 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t62AA90331D9BC59B70F7F97E7392BD2096D1DCD1 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// UnityEngine.Rendering.DynamicArray`1<System.Object>
struct DynamicArray_1_tBD159187A396D2634FDBCFD5A8F85F26FA3DF11D  : public RuntimeObject
{
public:
	// T[] UnityEngine.Rendering.DynamicArray`1::m_Array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_Array_0;
	// System.Int32 UnityEngine.Rendering.DynamicArray`1::<size>k__BackingField
	int32_t ___U3CsizeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(DynamicArray_1_tBD159187A396D2634FDBCFD5A8F85F26FA3DF11D, ___m_Array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_Array_0() const { return ___m_Array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsizeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DynamicArray_1_tBD159187A396D2634FDBCFD5A8F85F26FA3DF11D, ___U3CsizeU3Ek__BackingField_1)); }
	inline int32_t get_U3CsizeU3Ek__BackingField_1() const { return ___U3CsizeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CsizeU3Ek__BackingField_1() { return &___U3CsizeU3Ek__BackingField_1; }
	inline void set_U3CsizeU3Ek__BackingField_1(int32_t value)
	{
		___U3CsizeU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource>
struct DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55  : public RuntimeObject
{
public:
	// T[] UnityEngine.Rendering.DynamicArray`1::m_Array
	IRenderGraphResourceU5BU5D_t3A6AA3DB1F0BEC1FDF224A8D49C37387850DAC65* ___m_Array_0;
	// System.Int32 UnityEngine.Rendering.DynamicArray`1::<size>k__BackingField
	int32_t ___U3CsizeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55, ___m_Array_0)); }
	inline IRenderGraphResourceU5BU5D_t3A6AA3DB1F0BEC1FDF224A8D49C37387850DAC65* get_m_Array_0() const { return ___m_Array_0; }
	inline IRenderGraphResourceU5BU5D_t3A6AA3DB1F0BEC1FDF224A8D49C37387850DAC65** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(IRenderGraphResourceU5BU5D_t3A6AA3DB1F0BEC1FDF224A8D49C37387850DAC65* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsizeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55, ___U3CsizeU3Ek__BackingField_1)); }
	inline int32_t get_U3CsizeU3Ek__BackingField_1() const { return ___U3CsizeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CsizeU3Ek__BackingField_1() { return &___U3CsizeU3Ek__BackingField_1; }
	inline void set_U3CsizeU3Ek__BackingField_1(int32_t value)
	{
		___U3CsizeU3Ek__BackingField_1 = value;
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Char>
struct EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ColorBlock>
struct EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Int32Enum>
struct EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Navigation>
struct EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.SpriteState>
struct EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>>
struct List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_t168EAEA12D12EB7E324043CF1D947DC6A4397AC9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91, ____items_1)); }
	inline ValueTuple_2U5BU5D_t168EAEA12D12EB7E324043CF1D947DC6A4397AC9* get__items_1() const { return ____items_1; }
	inline ValueTuple_2U5BU5D_t168EAEA12D12EB7E324043CF1D947DC6A4397AC9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ValueTuple_2U5BU5D_t168EAEA12D12EB7E324043CF1D947DC6A4397AC9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ValueTuple_2U5BU5D_t168EAEA12D12EB7E324043CF1D947DC6A4397AC9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91_StaticFields, ____emptyArray_5)); }
	inline ValueTuple_2U5BU5D_t168EAEA12D12EB7E324043CF1D947DC6A4397AC9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ValueTuple_2U5BU5D_t168EAEA12D12EB7E324043CF1D947DC6A4397AC9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ValueTuple_2U5BU5D_t168EAEA12D12EB7E324043CF1D947DC6A4397AC9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____items_1)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get__items_1() const { return ____items_1; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5_StaticFields, ____emptyArray_5)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass>
struct List_1_tE825566258696352A9BBDE7670E9B79137D429AC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RenderGraphPassU5BU5D_t043FBAF7CBA01E7D1D74166A33AAF6864A02F38D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE825566258696352A9BBDE7670E9B79137D429AC, ____items_1)); }
	inline RenderGraphPassU5BU5D_t043FBAF7CBA01E7D1D74166A33AAF6864A02F38D* get__items_1() const { return ____items_1; }
	inline RenderGraphPassU5BU5D_t043FBAF7CBA01E7D1D74166A33AAF6864A02F38D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RenderGraphPassU5BU5D_t043FBAF7CBA01E7D1D74166A33AAF6864A02F38D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE825566258696352A9BBDE7670E9B79137D429AC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE825566258696352A9BBDE7670E9B79137D429AC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE825566258696352A9BBDE7670E9B79137D429AC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE825566258696352A9BBDE7670E9B79137D429AC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RenderGraphPassU5BU5D_t043FBAF7CBA01E7D1D74166A33AAF6864A02F38D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE825566258696352A9BBDE7670E9B79137D429AC_StaticFields, ____emptyArray_5)); }
	inline RenderGraphPassU5BU5D_t043FBAF7CBA01E7D1D74166A33AAF6864A02F38D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RenderGraphPassU5BU5D_t043FBAF7CBA01E7D1D74166A33AAF6864A02F38D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RenderGraphPassU5BU5D_t043FBAF7CBA01E7D1D74166A33AAF6864A02F38D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____items_1)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A_StaticFields, ____emptyArray_5)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>
struct List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A, ____items_1)); }
	inline VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* get__items_1() const { return ____items_1; }
	inline VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A_StaticFields, ____emptyArray_5)); }
	inline VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>
struct List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28, ____items_1)); }
	inline VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* get__items_1() const { return ____items_1; }
	inline VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28_StaticFields, ____emptyArray_5)); }
	inline VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPool`1<System.Object>
struct SharedObjectPool_1_t4A6D0619406384BFFAEC123F557A565539C61CF9  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPool`1::m_Pool
	Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * ___m_Pool_0;

public:
	inline static int32_t get_offset_of_m_Pool_0() { return static_cast<int32_t>(offsetof(SharedObjectPool_1_t4A6D0619406384BFFAEC123F557A565539C61CF9, ___m_Pool_0)); }
	inline Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * get_m_Pool_0() const { return ___m_Pool_0; }
	inline Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 ** get_address_of_m_Pool_0() { return &___m_Pool_0; }
	inline void set_m_Pool_0(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * value)
	{
		___m_Pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Pool_0), (void*)value);
	}
};

struct SharedObjectPool_1_t4A6D0619406384BFFAEC123F557A565539C61CF9_StaticFields
{
public:
	// System.Lazy`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPool`1<T>> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPool`1::s_Instance
	Lazy_1_t0355455B9B95C0CA606AC09821D3789B811EA4F7 * ___s_Instance_1;

public:
	inline static int32_t get_offset_of_s_Instance_1() { return static_cast<int32_t>(offsetof(SharedObjectPool_1_t4A6D0619406384BFFAEC123F557A565539C61CF9_StaticFields, ___s_Instance_1)); }
	inline Lazy_1_t0355455B9B95C0CA606AC09821D3789B811EA4F7 * get_s_Instance_1() const { return ___s_Instance_1; }
	inline Lazy_1_t0355455B9B95C0CA606AC09821D3789B811EA4F7 ** get_address_of_s_Instance_1() { return &___s_Instance_1; }
	inline void set_s_Instance_1(Lazy_1_t0355455B9B95C0CA606AC09821D3789B811EA4F7 * value)
	{
		___s_Instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_1), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Threading.Interlocked
struct Interlocked_t84BB23BED1AFE2EBBCBDD070F241EA497C68FB64  : public RuntimeObject
{
public:

public:
};


// System.Runtime.CompilerServices.JitHelpers
struct JitHelpers_t6DC124FF04E77C7EDE891400F7F01460DB8807E9  : public RuntimeObject
{
public:

public:
};


// System.Threading.LazyInitializer
struct LazyInitializer_t68D740FE95C1E311CA598F6427FAFBF1F6EA9A3E  : public RuntimeObject
{
public:

public:
};


// System.Runtime.InteropServices.Marshal
struct Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058  : public RuntimeObject
{
public:

public:
};

struct Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_StaticFields
{
public:
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;

public:
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
	{
		___SystemDefaultCharSize_1 = value;
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
struct NativeArrayUnsafeUtility_tABFEC25CB8DB147F19348E853EE24669F9682C83  : public RuntimeObject
{
public:

public:
};


// UnityEngine.NoAllocHelpers
struct NoAllocHelpers_tDF63D8493CAD8DE137A5560CDAF336DA0A99D0D1  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92  : public RuntimeObject
{
public:
	// UnityEngine.Profiling.CustomSampler UnityEngine.Rendering.ProfilingSampler::<sampler>k__BackingField
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___U3CsamplerU3Ek__BackingField_0;
	// UnityEngine.Profiling.CustomSampler UnityEngine.Rendering.ProfilingSampler::<inlineSampler>k__BackingField
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___U3CinlineSamplerU3Ek__BackingField_1;
	// System.String UnityEngine.Rendering.ProfilingSampler::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_2;
	// UnityEngine.Profiling.Recorder UnityEngine.Rendering.ProfilingSampler::m_Recorder
	Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * ___m_Recorder_3;
	// UnityEngine.Profiling.Recorder UnityEngine.Rendering.ProfilingSampler::m_InlineRecorder
	Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * ___m_InlineRecorder_4;

public:
	inline static int32_t get_offset_of_U3CsamplerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92, ___U3CsamplerU3Ek__BackingField_0)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_U3CsamplerU3Ek__BackingField_0() const { return ___U3CsamplerU3Ek__BackingField_0; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_U3CsamplerU3Ek__BackingField_0() { return &___U3CsamplerU3Ek__BackingField_0; }
	inline void set_U3CsamplerU3Ek__BackingField_0(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___U3CsamplerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsamplerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinlineSamplerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92, ___U3CinlineSamplerU3Ek__BackingField_1)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_U3CinlineSamplerU3Ek__BackingField_1() const { return ___U3CinlineSamplerU3Ek__BackingField_1; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_U3CinlineSamplerU3Ek__BackingField_1() { return &___U3CinlineSamplerU3Ek__BackingField_1; }
	inline void set_U3CinlineSamplerU3Ek__BackingField_1(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___U3CinlineSamplerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinlineSamplerU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92, ___U3CnameU3Ek__BackingField_2)); }
	inline String_t* get_U3CnameU3Ek__BackingField_2() const { return ___U3CnameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_2() { return &___U3CnameU3Ek__BackingField_2; }
	inline void set_U3CnameU3Ek__BackingField_2(String_t* value)
	{
		___U3CnameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Recorder_3() { return static_cast<int32_t>(offsetof(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92, ___m_Recorder_3)); }
	inline Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * get_m_Recorder_3() const { return ___m_Recorder_3; }
	inline Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 ** get_address_of_m_Recorder_3() { return &___m_Recorder_3; }
	inline void set_m_Recorder_3(Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * value)
	{
		___m_Recorder_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Recorder_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_InlineRecorder_4() { return static_cast<int32_t>(offsetof(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92, ___m_InlineRecorder_4)); }
	inline Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * get_m_InlineRecorder_4() const { return ___m_InlineRecorder_4; }
	inline Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 ** get_address_of_m_InlineRecorder_4() { return &___m_InlineRecorder_4; }
	inline void set_m_InlineRecorder_4(Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * value)
	{
		___m_InlineRecorder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InlineRecorder_4), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph
struct RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_Resources
	RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * ___m_Resources_1;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_RenderGraphPool
	RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 * ___m_RenderGraphPool_2;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_RenderPasses
	List_1_tE825566258696352A9BBDE7670E9B79137D429AC * ___m_RenderPasses_3;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_RendererLists
	List_1_tB573D1DD7F85019D1433F20C305FE237B12BCA19 * ___m_RendererLists_4;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugParams UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_DebugParameters
	RenderGraphDebugParams_t3BEA7A9CEB112DBA01578963DBD74C4D9756AADE * ___m_DebugParameters_5;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_Logger
	RenderGraphLogger_t5D35C0198A0D27368C971A2B67DD680988E32B12 * ___m_Logger_6;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDefaultResources UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_DefaultResources
	RenderGraphDefaultResources_t08FFC4A56DAF58D484CC04CE25236A5C3F85B1AE * ___m_DefaultResources_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Rendering.ProfilingSampler> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_DefaultProfilingSamplers
	Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 * ___m_DefaultProfilingSamplers_8;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_ExecutionExceptionWasRaised
	bool ___m_ExecutionExceptionWasRaised_9;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_RenderGraphContext
	RenderGraphContext_t356A8F1ED1EB20D4778552A10E4B39254486A0DA * ___m_RenderGraphContext_10;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_PreviousCommandBuffer
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___m_PreviousCommandBuffer_11;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_CurrentImmediatePassIndex
	int32_t ___m_CurrentImmediatePassIndex_12;
	// System.Collections.Generic.List`1<System.Int32>[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_ImmediateModeResourceList
	List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* ___m_ImmediateModeResourceList_13;
	// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/CompiledResourceInfo>[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_CompiledResourcesInfos
	DynamicArray_1U5BU5D_t5D9F0AED89FFCE5C1D28524E52D8A6AFC326D45D* ___m_CompiledResourcesInfos_14;
	// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/CompiledPassInfo> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_CompiledPassInfos
	DynamicArray_1_t141EB4910B97146B9BB45A5021F0687B50ED95F7 * ___m_CompiledPassInfos_15;
	// System.Collections.Generic.Stack`1<System.Int32> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_CullingStack
	Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * ___m_CullingStack_16;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_ExecutionCount
	int32_t ___m_ExecutionCount_17;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_RenderGraphDebugData
	RenderGraphDebugData_t5BAF2CEA2AE98A5257DCEB8A7F6BD30CAF309289 * ___m_RenderGraphDebugData_18;
	// System.String UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Resources_1() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_Resources_1)); }
	inline RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * get_m_Resources_1() const { return ___m_Resources_1; }
	inline RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 ** get_address_of_m_Resources_1() { return &___m_Resources_1; }
	inline void set_m_Resources_1(RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * value)
	{
		___m_Resources_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resources_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderGraphPool_2() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_RenderGraphPool_2)); }
	inline RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 * get_m_RenderGraphPool_2() const { return ___m_RenderGraphPool_2; }
	inline RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 ** get_address_of_m_RenderGraphPool_2() { return &___m_RenderGraphPool_2; }
	inline void set_m_RenderGraphPool_2(RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 * value)
	{
		___m_RenderGraphPool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderGraphPool_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderPasses_3() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_RenderPasses_3)); }
	inline List_1_tE825566258696352A9BBDE7670E9B79137D429AC * get_m_RenderPasses_3() const { return ___m_RenderPasses_3; }
	inline List_1_tE825566258696352A9BBDE7670E9B79137D429AC ** get_address_of_m_RenderPasses_3() { return &___m_RenderPasses_3; }
	inline void set_m_RenderPasses_3(List_1_tE825566258696352A9BBDE7670E9B79137D429AC * value)
	{
		___m_RenderPasses_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderPasses_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_RendererLists_4() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_RendererLists_4)); }
	inline List_1_tB573D1DD7F85019D1433F20C305FE237B12BCA19 * get_m_RendererLists_4() const { return ___m_RendererLists_4; }
	inline List_1_tB573D1DD7F85019D1433F20C305FE237B12BCA19 ** get_address_of_m_RendererLists_4() { return &___m_RendererLists_4; }
	inline void set_m_RendererLists_4(List_1_tB573D1DD7F85019D1433F20C305FE237B12BCA19 * value)
	{
		___m_RendererLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RendererLists_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_DebugParameters_5() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_DebugParameters_5)); }
	inline RenderGraphDebugParams_t3BEA7A9CEB112DBA01578963DBD74C4D9756AADE * get_m_DebugParameters_5() const { return ___m_DebugParameters_5; }
	inline RenderGraphDebugParams_t3BEA7A9CEB112DBA01578963DBD74C4D9756AADE ** get_address_of_m_DebugParameters_5() { return &___m_DebugParameters_5; }
	inline void set_m_DebugParameters_5(RenderGraphDebugParams_t3BEA7A9CEB112DBA01578963DBD74C4D9756AADE * value)
	{
		___m_DebugParameters_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DebugParameters_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Logger_6() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_Logger_6)); }
	inline RenderGraphLogger_t5D35C0198A0D27368C971A2B67DD680988E32B12 * get_m_Logger_6() const { return ___m_Logger_6; }
	inline RenderGraphLogger_t5D35C0198A0D27368C971A2B67DD680988E32B12 ** get_address_of_m_Logger_6() { return &___m_Logger_6; }
	inline void set_m_Logger_6(RenderGraphLogger_t5D35C0198A0D27368C971A2B67DD680988E32B12 * value)
	{
		___m_Logger_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultResources_7() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_DefaultResources_7)); }
	inline RenderGraphDefaultResources_t08FFC4A56DAF58D484CC04CE25236A5C3F85B1AE * get_m_DefaultResources_7() const { return ___m_DefaultResources_7; }
	inline RenderGraphDefaultResources_t08FFC4A56DAF58D484CC04CE25236A5C3F85B1AE ** get_address_of_m_DefaultResources_7() { return &___m_DefaultResources_7; }
	inline void set_m_DefaultResources_7(RenderGraphDefaultResources_t08FFC4A56DAF58D484CC04CE25236A5C3F85B1AE * value)
	{
		___m_DefaultResources_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultResources_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultProfilingSamplers_8() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_DefaultProfilingSamplers_8)); }
	inline Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 * get_m_DefaultProfilingSamplers_8() const { return ___m_DefaultProfilingSamplers_8; }
	inline Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 ** get_address_of_m_DefaultProfilingSamplers_8() { return &___m_DefaultProfilingSamplers_8; }
	inline void set_m_DefaultProfilingSamplers_8(Dictionary_2_t142F21E4DCB6B9E5EF7715B5610F44B53DC1F738 * value)
	{
		___m_DefaultProfilingSamplers_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultProfilingSamplers_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionExceptionWasRaised_9() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_ExecutionExceptionWasRaised_9)); }
	inline bool get_m_ExecutionExceptionWasRaised_9() const { return ___m_ExecutionExceptionWasRaised_9; }
	inline bool* get_address_of_m_ExecutionExceptionWasRaised_9() { return &___m_ExecutionExceptionWasRaised_9; }
	inline void set_m_ExecutionExceptionWasRaised_9(bool value)
	{
		___m_ExecutionExceptionWasRaised_9 = value;
	}

	inline static int32_t get_offset_of_m_RenderGraphContext_10() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_RenderGraphContext_10)); }
	inline RenderGraphContext_t356A8F1ED1EB20D4778552A10E4B39254486A0DA * get_m_RenderGraphContext_10() const { return ___m_RenderGraphContext_10; }
	inline RenderGraphContext_t356A8F1ED1EB20D4778552A10E4B39254486A0DA ** get_address_of_m_RenderGraphContext_10() { return &___m_RenderGraphContext_10; }
	inline void set_m_RenderGraphContext_10(RenderGraphContext_t356A8F1ED1EB20D4778552A10E4B39254486A0DA * value)
	{
		___m_RenderGraphContext_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderGraphContext_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousCommandBuffer_11() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_PreviousCommandBuffer_11)); }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * get_m_PreviousCommandBuffer_11() const { return ___m_PreviousCommandBuffer_11; }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 ** get_address_of_m_PreviousCommandBuffer_11() { return &___m_PreviousCommandBuffer_11; }
	inline void set_m_PreviousCommandBuffer_11(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * value)
	{
		___m_PreviousCommandBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PreviousCommandBuffer_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentImmediatePassIndex_12() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_CurrentImmediatePassIndex_12)); }
	inline int32_t get_m_CurrentImmediatePassIndex_12() const { return ___m_CurrentImmediatePassIndex_12; }
	inline int32_t* get_address_of_m_CurrentImmediatePassIndex_12() { return &___m_CurrentImmediatePassIndex_12; }
	inline void set_m_CurrentImmediatePassIndex_12(int32_t value)
	{
		___m_CurrentImmediatePassIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_ImmediateModeResourceList_13() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_ImmediateModeResourceList_13)); }
	inline List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* get_m_ImmediateModeResourceList_13() const { return ___m_ImmediateModeResourceList_13; }
	inline List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C** get_address_of_m_ImmediateModeResourceList_13() { return &___m_ImmediateModeResourceList_13; }
	inline void set_m_ImmediateModeResourceList_13(List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* value)
	{
		___m_ImmediateModeResourceList_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ImmediateModeResourceList_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CompiledResourcesInfos_14() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_CompiledResourcesInfos_14)); }
	inline DynamicArray_1U5BU5D_t5D9F0AED89FFCE5C1D28524E52D8A6AFC326D45D* get_m_CompiledResourcesInfos_14() const { return ___m_CompiledResourcesInfos_14; }
	inline DynamicArray_1U5BU5D_t5D9F0AED89FFCE5C1D28524E52D8A6AFC326D45D** get_address_of_m_CompiledResourcesInfos_14() { return &___m_CompiledResourcesInfos_14; }
	inline void set_m_CompiledResourcesInfos_14(DynamicArray_1U5BU5D_t5D9F0AED89FFCE5C1D28524E52D8A6AFC326D45D* value)
	{
		___m_CompiledResourcesInfos_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CompiledResourcesInfos_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_CompiledPassInfos_15() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_CompiledPassInfos_15)); }
	inline DynamicArray_1_t141EB4910B97146B9BB45A5021F0687B50ED95F7 * get_m_CompiledPassInfos_15() const { return ___m_CompiledPassInfos_15; }
	inline DynamicArray_1_t141EB4910B97146B9BB45A5021F0687B50ED95F7 ** get_address_of_m_CompiledPassInfos_15() { return &___m_CompiledPassInfos_15; }
	inline void set_m_CompiledPassInfos_15(DynamicArray_1_t141EB4910B97146B9BB45A5021F0687B50ED95F7 * value)
	{
		___m_CompiledPassInfos_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CompiledPassInfos_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_CullingStack_16() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_CullingStack_16)); }
	inline Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * get_m_CullingStack_16() const { return ___m_CullingStack_16; }
	inline Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 ** get_address_of_m_CullingStack_16() { return &___m_CullingStack_16; }
	inline void set_m_CullingStack_16(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * value)
	{
		___m_CullingStack_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CullingStack_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionCount_17() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_ExecutionCount_17)); }
	inline int32_t get_m_ExecutionCount_17() const { return ___m_ExecutionCount_17; }
	inline int32_t* get_address_of_m_ExecutionCount_17() { return &___m_ExecutionCount_17; }
	inline void set_m_ExecutionCount_17(int32_t value)
	{
		___m_ExecutionCount_17 = value;
	}

	inline static int32_t get_offset_of_m_RenderGraphDebugData_18() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___m_RenderGraphDebugData_18)); }
	inline RenderGraphDebugData_t5BAF2CEA2AE98A5257DCEB8A7F6BD30CAF309289 * get_m_RenderGraphDebugData_18() const { return ___m_RenderGraphDebugData_18; }
	inline RenderGraphDebugData_t5BAF2CEA2AE98A5257DCEB8A7F6BD30CAF309289 ** get_address_of_m_RenderGraphDebugData_18() { return &___m_RenderGraphDebugData_18; }
	inline void set_m_RenderGraphDebugData_18(RenderGraphDebugData_t5BAF2CEA2AE98A5257DCEB8A7F6BD30CAF309289 * value)
	{
		___m_RenderGraphDebugData_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderGraphDebugData_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3, ___U3CnameU3Ek__BackingField_20)); }
	inline String_t* get_U3CnameU3Ek__BackingField_20() const { return ___U3CnameU3Ek__BackingField_20; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_20() { return &___U3CnameU3Ek__BackingField_20; }
	inline void set_U3CnameU3Ek__BackingField_20(String_t* value)
	{
		___U3CnameU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_20), (void*)value);
	}
};

struct RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3_StaticFields
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::kMaxMRTCount
	int32_t ___kMaxMRTCount_0;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::s_RegisteredGraphs
	List_1_t3049CAFD28A8058922DC33A846A0102A33F31833 * ___s_RegisteredGraphs_19;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::<requireDebugData>k__BackingField
	bool ___U3CrequireDebugDataU3Ek__BackingField_21;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/OnGraphRegisteredDelegate UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::onGraphRegistered
	OnGraphRegisteredDelegate_t8FC68CA1E04D3726D8FF557CEADC4FECC3A6A464 * ___onGraphRegistered_22;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/OnGraphRegisteredDelegate UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::onGraphUnregistered
	OnGraphRegisteredDelegate_t8FC68CA1E04D3726D8FF557CEADC4FECC3A6A464 * ___onGraphUnregistered_23;

public:
	inline static int32_t get_offset_of_kMaxMRTCount_0() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3_StaticFields, ___kMaxMRTCount_0)); }
	inline int32_t get_kMaxMRTCount_0() const { return ___kMaxMRTCount_0; }
	inline int32_t* get_address_of_kMaxMRTCount_0() { return &___kMaxMRTCount_0; }
	inline void set_kMaxMRTCount_0(int32_t value)
	{
		___kMaxMRTCount_0 = value;
	}

	inline static int32_t get_offset_of_s_RegisteredGraphs_19() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3_StaticFields, ___s_RegisteredGraphs_19)); }
	inline List_1_t3049CAFD28A8058922DC33A846A0102A33F31833 * get_s_RegisteredGraphs_19() const { return ___s_RegisteredGraphs_19; }
	inline List_1_t3049CAFD28A8058922DC33A846A0102A33F31833 ** get_address_of_s_RegisteredGraphs_19() { return &___s_RegisteredGraphs_19; }
	inline void set_s_RegisteredGraphs_19(List_1_t3049CAFD28A8058922DC33A846A0102A33F31833 * value)
	{
		___s_RegisteredGraphs_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RegisteredGraphs_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrequireDebugDataU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3_StaticFields, ___U3CrequireDebugDataU3Ek__BackingField_21)); }
	inline bool get_U3CrequireDebugDataU3Ek__BackingField_21() const { return ___U3CrequireDebugDataU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CrequireDebugDataU3Ek__BackingField_21() { return &___U3CrequireDebugDataU3Ek__BackingField_21; }
	inline void set_U3CrequireDebugDataU3Ek__BackingField_21(bool value)
	{
		___U3CrequireDebugDataU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_onGraphRegistered_22() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3_StaticFields, ___onGraphRegistered_22)); }
	inline OnGraphRegisteredDelegate_t8FC68CA1E04D3726D8FF557CEADC4FECC3A6A464 * get_onGraphRegistered_22() const { return ___onGraphRegistered_22; }
	inline OnGraphRegisteredDelegate_t8FC68CA1E04D3726D8FF557CEADC4FECC3A6A464 ** get_address_of_onGraphRegistered_22() { return &___onGraphRegistered_22; }
	inline void set_onGraphRegistered_22(OnGraphRegisteredDelegate_t8FC68CA1E04D3726D8FF557CEADC4FECC3A6A464 * value)
	{
		___onGraphRegistered_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onGraphRegistered_22), (void*)value);
	}

	inline static int32_t get_offset_of_onGraphUnregistered_23() { return static_cast<int32_t>(offsetof(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3_StaticFields, ___onGraphUnregistered_23)); }
	inline OnGraphRegisteredDelegate_t8FC68CA1E04D3726D8FF557CEADC4FECC3A6A464 * get_onGraphUnregistered_23() const { return ___onGraphUnregistered_23; }
	inline OnGraphRegisteredDelegate_t8FC68CA1E04D3726D8FF557CEADC4FECC3A6A464 ** get_address_of_onGraphUnregistered_23() { return &___onGraphUnregistered_23; }
	inline void set_onGraphUnregistered_23(OnGraphRegisteredDelegate_t8FC68CA1E04D3726D8FF557CEADC4FECC3A6A464 * value)
	{
		___onGraphUnregistered_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onGraphUnregistered_23), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool
struct RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::m_ArrayPool
	Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 * ___m_ArrayPool_0;
	// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::m_AllocatedArrays
	List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91 * ___m_AllocatedArrays_1;
	// System.Collections.Generic.List`1<UnityEngine.MaterialPropertyBlock> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::m_AllocatedMaterialPropertyBlocks
	List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 * ___m_AllocatedMaterialPropertyBlocks_2;

public:
	inline static int32_t get_offset_of_m_ArrayPool_0() { return static_cast<int32_t>(offsetof(RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681, ___m_ArrayPool_0)); }
	inline Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 * get_m_ArrayPool_0() const { return ___m_ArrayPool_0; }
	inline Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 ** get_address_of_m_ArrayPool_0() { return &___m_ArrayPool_0; }
	inline void set_m_ArrayPool_0(Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 * value)
	{
		___m_ArrayPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ArrayPool_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllocatedArrays_1() { return static_cast<int32_t>(offsetof(RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681, ___m_AllocatedArrays_1)); }
	inline List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91 * get_m_AllocatedArrays_1() const { return ___m_AllocatedArrays_1; }
	inline List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91 ** get_address_of_m_AllocatedArrays_1() { return &___m_AllocatedArrays_1; }
	inline void set_m_AllocatedArrays_1(List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91 * value)
	{
		___m_AllocatedArrays_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllocatedArrays_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllocatedMaterialPropertyBlocks_2() { return static_cast<int32_t>(offsetof(RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681, ___m_AllocatedMaterialPropertyBlocks_2)); }
	inline List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 * get_m_AllocatedMaterialPropertyBlocks_2() const { return ___m_AllocatedMaterialPropertyBlocks_2; }
	inline List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 ** get_address_of_m_AllocatedMaterialPropertyBlocks_2() { return &___m_AllocatedMaterialPropertyBlocks_2; }
	inline void set_m_AllocatedMaterialPropertyBlocks_2(List_1_t5EFF0677650087F8080A47B964C2F58A4132BF09 * value)
	{
		___m_AllocatedMaterialPropertyBlocks_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllocatedMaterialPropertyBlocks_2), (void*)value);
	}
};


// UnityEngine.Resources
struct Resources_t90EC380141241F7E4B284EC353EF4F0386218419  : public RuntimeObject
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeHelpers
struct RuntimeHelpers_tC052103DB62650080244B150AC8C2DDC5C0CD8AB  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UI.SetPropertyUtility
struct SetPropertyUtility_tA0FD167699990D8AFDA1284FCCFEA03357AD73BB  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore
struct SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6  : public RuntimeObject
{
public:

public:
};

struct SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor> UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::s_IntegratedDescriptors
	List_1_t13B7F19BE124BF950C29583D073B7D2174DCA122 * ___s_IntegratedDescriptors_0;
	// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider> UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::s_StandaloneDescriptors
	List_1_t4DCA5C48F3390AC8CD79C7AD8D0963D5DAE5CF2E * ___s_StandaloneDescriptors_1;
	// System.Collections.Generic.List`1<UnityEngine.SubsystemDescriptor> UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::s_DeprecatedDescriptors
	List_1_t32E50BD66297C6541AEA401E1C13D4EC530CC56B * ___s_DeprecatedDescriptors_2;

public:
	inline static int32_t get_offset_of_s_IntegratedDescriptors_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_StaticFields, ___s_IntegratedDescriptors_0)); }
	inline List_1_t13B7F19BE124BF950C29583D073B7D2174DCA122 * get_s_IntegratedDescriptors_0() const { return ___s_IntegratedDescriptors_0; }
	inline List_1_t13B7F19BE124BF950C29583D073B7D2174DCA122 ** get_address_of_s_IntegratedDescriptors_0() { return &___s_IntegratedDescriptors_0; }
	inline void set_s_IntegratedDescriptors_0(List_1_t13B7F19BE124BF950C29583D073B7D2174DCA122 * value)
	{
		___s_IntegratedDescriptors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IntegratedDescriptors_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_StandaloneDescriptors_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_StaticFields, ___s_StandaloneDescriptors_1)); }
	inline List_1_t4DCA5C48F3390AC8CD79C7AD8D0963D5DAE5CF2E * get_s_StandaloneDescriptors_1() const { return ___s_StandaloneDescriptors_1; }
	inline List_1_t4DCA5C48F3390AC8CD79C7AD8D0963D5DAE5CF2E ** get_address_of_s_StandaloneDescriptors_1() { return &___s_StandaloneDescriptors_1; }
	inline void set_s_StandaloneDescriptors_1(List_1_t4DCA5C48F3390AC8CD79C7AD8D0963D5DAE5CF2E * value)
	{
		___s_StandaloneDescriptors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StandaloneDescriptors_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_DeprecatedDescriptors_2() { return static_cast<int32_t>(offsetof(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_StaticFields, ___s_DeprecatedDescriptors_2)); }
	inline List_1_t32E50BD66297C6541AEA401E1C13D4EC530CC56B * get_s_DeprecatedDescriptors_2() const { return ___s_DeprecatedDescriptors_2; }
	inline List_1_t32E50BD66297C6541AEA401E1C13D4EC530CC56B ** get_address_of_s_DeprecatedDescriptors_2() { return &___s_DeprecatedDescriptors_2; }
	inline void set_s_DeprecatedDescriptors_2(List_1_t32E50BD66297C6541AEA401E1C13D4EC530CC56B * value)
	{
		___s_DeprecatedDescriptors_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DeprecatedDescriptors_2), (void*)value);
	}
};


// System.ThrowHelper
struct ThrowHelper_t396052A7B504E698E9DF1B91F7A52F4D2EA47246  : public RuntimeObject
{
public:

public:
};


// System.Tuple
struct Tuple_t04ED51FC9876E74A8E2D69E20EC4D89DAF554A9F  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tAA965823E05BE8ADD69F58C82BF0DF723476E551  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Threading.Volatile
struct Volatile_t7A8B2983396C4500A8FC226CDB66FE9067DA4AE6  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Rendering.VolumeManager
struct VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.VolumeStack UnityEngine.Rendering.VolumeManager::<stack>k__BackingField
	VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * ___U3CstackU3Ek__BackingField_1;
	// System.Type[] UnityEngine.Rendering.VolumeManager::<baseComponentTypeArray>k__BackingField
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___U3CbaseComponentTypeArrayU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>> UnityEngine.Rendering.VolumeManager::m_SortedVolumes
	Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * ___m_SortedVolumes_4;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume> UnityEngine.Rendering.VolumeManager::m_Volumes
	List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * ___m_Volumes_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> UnityEngine.Rendering.VolumeManager::m_SortNeeded
	Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * ___m_SortNeeded_6;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeManager::m_ComponentsDefaultState
	List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * ___m_ComponentsDefaultState_7;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.Rendering.VolumeManager::m_TempColliders
	List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * ___m_TempColliders_8;

public:
	inline static int32_t get_offset_of_U3CstackU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___U3CstackU3Ek__BackingField_1)); }
	inline VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * get_U3CstackU3Ek__BackingField_1() const { return ___U3CstackU3Ek__BackingField_1; }
	inline VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC ** get_address_of_U3CstackU3Ek__BackingField_1() { return &___U3CstackU3Ek__BackingField_1; }
	inline void set_U3CstackU3Ek__BackingField_1(VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * value)
	{
		___U3CstackU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstackU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbaseComponentTypeArrayU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___U3CbaseComponentTypeArrayU3Ek__BackingField_2)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_U3CbaseComponentTypeArrayU3Ek__BackingField_2() const { return ___U3CbaseComponentTypeArrayU3Ek__BackingField_2; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_U3CbaseComponentTypeArrayU3Ek__BackingField_2() { return &___U3CbaseComponentTypeArrayU3Ek__BackingField_2; }
	inline void set_U3CbaseComponentTypeArrayU3Ek__BackingField_2(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___U3CbaseComponentTypeArrayU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbaseComponentTypeArrayU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SortedVolumes_4() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_SortedVolumes_4)); }
	inline Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * get_m_SortedVolumes_4() const { return ___m_SortedVolumes_4; }
	inline Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D ** get_address_of_m_SortedVolumes_4() { return &___m_SortedVolumes_4; }
	inline void set_m_SortedVolumes_4(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * value)
	{
		___m_SortedVolumes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SortedVolumes_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Volumes_5() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_Volumes_5)); }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * get_m_Volumes_5() const { return ___m_Volumes_5; }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A ** get_address_of_m_Volumes_5() { return &___m_Volumes_5; }
	inline void set_m_Volumes_5(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * value)
	{
		___m_Volumes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Volumes_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SortNeeded_6() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_SortNeeded_6)); }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * get_m_SortNeeded_6() const { return ___m_SortNeeded_6; }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 ** get_address_of_m_SortNeeded_6() { return &___m_SortNeeded_6; }
	inline void set_m_SortNeeded_6(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * value)
	{
		___m_SortNeeded_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SortNeeded_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ComponentsDefaultState_7() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_ComponentsDefaultState_7)); }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * get_m_ComponentsDefaultState_7() const { return ___m_ComponentsDefaultState_7; }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 ** get_address_of_m_ComponentsDefaultState_7() { return &___m_ComponentsDefaultState_7; }
	inline void set_m_ComponentsDefaultState_7(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * value)
	{
		___m_ComponentsDefaultState_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComponentsDefaultState_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_TempColliders_8() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_TempColliders_8)); }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * get_m_TempColliders_8() const { return ___m_TempColliders_8; }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B ** get_address_of_m_TempColliders_8() { return &___m_TempColliders_8; }
	inline void set_m_TempColliders_8(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * value)
	{
		___m_TempColliders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempColliders_8), (void*)value);
	}
};

struct VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181_StaticFields
{
public:
	// System.Lazy`1<UnityEngine.Rendering.VolumeManager> UnityEngine.Rendering.VolumeManager::s_Instance
	Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2 * ___s_Instance_0;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181_StaticFields, ___s_Instance_0)); }
	inline Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_0), (void*)value);
	}
};


// UnityEngine.Rendering.VolumeParameter
struct VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.VolumeParameter::m_OverrideState
	bool ___m_OverrideState_1;

public:
	inline static int32_t get_offset_of_m_OverrideState_1() { return static_cast<int32_t>(offsetof(VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB, ___m_OverrideState_1)); }
	inline bool get_m_OverrideState_1() const { return ___m_OverrideState_1; }
	inline bool* get_address_of_m_OverrideState_1() { return &___m_OverrideState_1; }
	inline void set_m_OverrideState_1(bool value)
	{
		___m_OverrideState_1 = value;
	}
};


// UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeStack::components
	Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * ___components_0;

public:
	inline static int32_t get_offset_of_components_0() { return static_cast<int32_t>(offsetof(VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC, ___components_0)); }
	inline Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * get_components_0() const { return ___components_0; }
	inline Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 ** get_address_of_components_0() { return &___components_0; }
	inline void set_components_0(Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * value)
	{
		___components_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___components_0), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource
struct IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource::imported
	bool ___imported_0;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource::cachedHash
	int32_t ___cachedHash_1;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource::transientPassIndex
	int32_t ___transientPassIndex_2;
	// System.UInt32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource::writeCount
	uint32_t ___writeCount_3;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource::wasReleased
	bool ___wasReleased_4;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource::requestFallBack
	bool ___requestFallBack_5;

public:
	inline static int32_t get_offset_of_imported_0() { return static_cast<int32_t>(offsetof(IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03, ___imported_0)); }
	inline bool get_imported_0() const { return ___imported_0; }
	inline bool* get_address_of_imported_0() { return &___imported_0; }
	inline void set_imported_0(bool value)
	{
		___imported_0 = value;
	}

	inline static int32_t get_offset_of_cachedHash_1() { return static_cast<int32_t>(offsetof(IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03, ___cachedHash_1)); }
	inline int32_t get_cachedHash_1() const { return ___cachedHash_1; }
	inline int32_t* get_address_of_cachedHash_1() { return &___cachedHash_1; }
	inline void set_cachedHash_1(int32_t value)
	{
		___cachedHash_1 = value;
	}

	inline static int32_t get_offset_of_transientPassIndex_2() { return static_cast<int32_t>(offsetof(IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03, ___transientPassIndex_2)); }
	inline int32_t get_transientPassIndex_2() const { return ___transientPassIndex_2; }
	inline int32_t* get_address_of_transientPassIndex_2() { return &___transientPassIndex_2; }
	inline void set_transientPassIndex_2(int32_t value)
	{
		___transientPassIndex_2 = value;
	}

	inline static int32_t get_offset_of_writeCount_3() { return static_cast<int32_t>(offsetof(IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03, ___writeCount_3)); }
	inline uint32_t get_writeCount_3() const { return ___writeCount_3; }
	inline uint32_t* get_address_of_writeCount_3() { return &___writeCount_3; }
	inline void set_writeCount_3(uint32_t value)
	{
		___writeCount_3 = value;
	}

	inline static int32_t get_offset_of_wasReleased_4() { return static_cast<int32_t>(offsetof(IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03, ___wasReleased_4)); }
	inline bool get_wasReleased_4() const { return ___wasReleased_4; }
	inline bool* get_address_of_wasReleased_4() { return &___wasReleased_4; }
	inline void set_wasReleased_4(bool value)
	{
		___wasReleased_4 = value;
	}

	inline static int32_t get_offset_of_requestFallBack_5() { return static_cast<int32_t>(offsetof(IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03, ___requestFallBack_5)); }
	inline bool get_requestFallBack_5() const { return ___requestFallBack_5; }
	inline bool* get_address_of_requestFallBack_5() { return &___requestFallBack_5; }
	inline void set_requestFallBack_5(bool value)
	{
		___requestFallBack_5 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Volume>
struct Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5, ___list_0)); }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * get_list_0() const { return ___list_0; }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5, ___current_3)); }
	inline Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * get_current_3() const { return ___current_3; }
	inline Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.VolumeComponent>
struct Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB, ___list_0)); }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * get_list_0() const { return ___list_0; }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB, ___current_3)); }
	inline VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * get_current_3() const { return ___current_3; }
	inline VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117, ___value_1)); }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * get_value_1() const { return ___value_1; }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo<System.Object>
struct ResourceLogInfo_t313421642EB49F359C7638B1E201D81C1EEA2D63 
{
public:
	// System.String UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo::name
	String_t* ___name_0;
	// System.Int64 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo::size
	int64_t ___size_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ResourceLogInfo_t313421642EB49F359C7638B1E201D81C1EEA2D63, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(ResourceLogInfo_t313421642EB49F359C7638B1E201D81C1EEA2D63, ___size_1)); }
	inline int64_t get_size_1() const { return ___size_1; }
	inline int64_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int64_t value)
	{
		___size_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo
#ifndef ResourceLogInfo_t5BC0D8D6F533AE3729F9348805509530E759A4AB_marshaled_pinvoke_define
#define ResourceLogInfo_t5BC0D8D6F533AE3729F9348805509530E759A4AB_marshaled_pinvoke_define
struct ResourceLogInfo_t5BC0D8D6F533AE3729F9348805509530E759A4AB_marshaled_pinvoke
{
	char* ___name_0;
	int64_t ___size_1;
};
#endif
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo
#ifndef ResourceLogInfo_t5BC0D8D6F533AE3729F9348805509530E759A4AB_marshaled_com_define
#define ResourceLogInfo_t5BC0D8D6F533AE3729F9348805509530E759A4AB_marshaled_com_define
struct ResourceLogInfo_t5BC0D8D6F533AE3729F9348805509530E759A4AB_marshaled_com
{
	Il2CppChar* ___name_0;
	int64_t ___size_1;
};
#endif

// UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>
struct TProfilingSampler_1_t4261C4BE4135FF282359B121EE7B4826A1236FDD  : public ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92
{
public:

public:
};

struct TProfilingSampler_1_t4261C4BE4135FF282359B121EE7B4826A1236FDD_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<TEnum,UnityEngine.Rendering.TProfilingSampler`1<TEnum>> UnityEngine.Rendering.TProfilingSampler`1::samples
	Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005 * ___samples_5;

public:
	inline static int32_t get_offset_of_samples_5() { return static_cast<int32_t>(offsetof(TProfilingSampler_1_t4261C4BE4135FF282359B121EE7B4826A1236FDD_StaticFields, ___samples_5)); }
	inline Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005 * get_samples_5() const { return ___samples_5; }
	inline Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005 ** get_address_of_samples_5() { return &___samples_5; }
	inline void set_samples_5(Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005 * value)
	{
		___samples_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samples_5), (void*)value);
	}
};


// UnityEngine.Rendering.TProfilingSampler`1<System.Object>
struct TProfilingSampler_1_t09D0C84822616BBD340456976F7BD32788E00900  : public ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92
{
public:

public:
};

struct TProfilingSampler_1_t09D0C84822616BBD340456976F7BD32788E00900_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<TEnum,UnityEngine.Rendering.TProfilingSampler`1<TEnum>> UnityEngine.Rendering.TProfilingSampler`1::samples
	Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910 * ___samples_5;

public:
	inline static int32_t get_offset_of_samples_5() { return static_cast<int32_t>(offsetof(TProfilingSampler_1_t09D0C84822616BBD340456976F7BD32788E00900_StaticFields, ___samples_5)); }
	inline Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910 * get_samples_5() const { return ___samples_5; }
	inline Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910 ** get_address_of_samples_5() { return &___samples_5; }
	inline void set_samples_5(Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910 * value)
	{
		___samples_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samples_5), (void*)value);
	}
};


// System.ValueTuple`2<System.Int32,System.Object>
struct ValueTuple_2_tA26D3A4C20B6E6F61C01B309B632FC717E2B9173 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tA26D3A4C20B6E6F61C01B309B632FC717E2B9173, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tA26D3A4C20B6E6F61C01B309B632FC717E2B9173, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.ValueTuple`2<System.Object,System.Int32>
struct ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
	}
};


// System.ValueTuple`2<System.Type,System.Int32>
struct ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B 
{
public:
	// T1 System.ValueTuple`2::Item1
	Type_t * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B, ___Item1_0)); }
	inline Type_t * get_Item1_0() const { return ___Item1_0; }
	inline Type_t ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(Type_t * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Boolean>
struct VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	bool ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201, ___m_Value_2)); }
	inline bool get_m_Value_2() const { return ___m_Value_2; }
	inline bool* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(bool value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Int32>
struct VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	int32_t ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7, ___m_Value_2)); }
	inline int32_t get_m_Value_2() const { return ___m_Value_2; }
	inline int32_t* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(int32_t value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Object>
struct VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	RuntimeObject * ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0, ___m_Value_2)); }
	inline RuntimeObject * get_m_Value_2() const { return ___m_Value_2; }
	inline RuntimeObject ** get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(RuntimeObject * value)
	{
		___m_Value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Value_2), (void*)value);
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Single>
struct VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	float ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7, ___m_Value_2)); }
	inline float get_m_Value_2() const { return ___m_Value_2; }
	inline float* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(float value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.BatchVisibility
struct BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE 
{
public:
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_instancesCount_1() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___instancesCount_1)); }
	inline int32_t get_instancesCount_1() const { return ___instancesCount_1; }
	inline int32_t* get_address_of_instancesCount_1() { return &___instancesCount_1; }
	inline void set_instancesCount_1(int32_t value)
	{
		___instancesCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCount_2() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___visibleCount_2)); }
	inline int32_t get_visibleCount_2() const { return ___visibleCount_2; }
	inline int32_t* get_address_of_visibleCount_2() { return &___visibleCount_2; }
	inline void set_visibleCount_2(int32_t value)
	{
		___visibleCount_2 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.Hash128
struct Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A 
{
public:
	// System.UInt32 UnityEngine.Hash128::m_u32_0
	uint32_t ___m_u32_0_0;
	// System.UInt32 UnityEngine.Hash128::m_u32_1
	uint32_t ___m_u32_1_1;
	// System.UInt32 UnityEngine.Hash128::m_u32_2
	uint32_t ___m_u32_2_2;
	// System.UInt32 UnityEngine.Hash128::m_u32_3
	uint32_t ___m_u32_3_3;

public:
	inline static int32_t get_offset_of_m_u32_0_0() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_0_0)); }
	inline uint32_t get_m_u32_0_0() const { return ___m_u32_0_0; }
	inline uint32_t* get_address_of_m_u32_0_0() { return &___m_u32_0_0; }
	inline void set_m_u32_0_0(uint32_t value)
	{
		___m_u32_0_0 = value;
	}

	inline static int32_t get_offset_of_m_u32_1_1() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_1_1)); }
	inline uint32_t get_m_u32_1_1() const { return ___m_u32_1_1; }
	inline uint32_t* get_address_of_m_u32_1_1() { return &___m_u32_1_1; }
	inline void set_m_u32_1_1(uint32_t value)
	{
		___m_u32_1_1 = value;
	}

	inline static int32_t get_offset_of_m_u32_2_2() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_2_2)); }
	inline uint32_t get_m_u32_2_2() const { return ___m_u32_2_2; }
	inline uint32_t* get_address_of_m_u32_2_2() { return &___m_u32_2_2; }
	inline void set_m_u32_2_2(uint32_t value)
	{
		___m_u32_2_2 = value;
	}

	inline static int32_t get_offset_of_m_u32_3_3() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_3_3)); }
	inline uint32_t get_m_u32_3_3() const { return ___m_u32_3_3; }
	inline uint32_t* get_address_of_m_u32_3_3() { return &___m_u32_3_3; }
	inline void set_m_u32_3_3(uint32_t value)
	{
		___m_u32_3_3 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 
{
public:
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;

public:
	inline static int32_t get_offset_of_m_red_0() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_red_0)); }
	inline float get_m_red_0() const { return ___m_red_0; }
	inline float* get_address_of_m_red_0() { return &___m_red_0; }
	inline void set_m_red_0(float value)
	{
		___m_red_0 = value;
	}

	inline static int32_t get_offset_of_m_green_1() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_green_1)); }
	inline float get_m_green_1() const { return ___m_green_1; }
	inline float* get_address_of_m_green_1() { return &___m_green_1; }
	inline void set_m_green_1(float value)
	{
		___m_green_1 = value;
	}

	inline static int32_t get_offset_of_m_blue_2() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_blue_2)); }
	inline float get_m_blue_2() const { return ___m_blue_2; }
	inline float* get_address_of_m_blue_2() { return &___m_blue_2; }
	inline void set_m_blue_2(float value)
	{
		___m_blue_2 = value;
	}

	inline static int32_t get_offset_of_m_intensity_3() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_intensity_3)); }
	inline float get_m_intensity_3() const { return ___m_intensity_3; }
	inline float* get_address_of_m_intensity_3() { return &___m_intensity_3; }
	inline void set_m_intensity_3(float value)
	{
		___m_intensity_3 = value;
	}
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder
struct RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056 
{
public:
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::m_RenderPass
	RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 * ___m_RenderPass_0;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::m_Resources
	RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * ___m_Resources_1;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::m_RenderGraph
	RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * ___m_RenderGraph_2;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::m_Disposed
	bool ___m_Disposed_3;

public:
	inline static int32_t get_offset_of_m_RenderPass_0() { return static_cast<int32_t>(offsetof(RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056, ___m_RenderPass_0)); }
	inline RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 * get_m_RenderPass_0() const { return ___m_RenderPass_0; }
	inline RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 ** get_address_of_m_RenderPass_0() { return &___m_RenderPass_0; }
	inline void set_m_RenderPass_0(RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 * value)
	{
		___m_RenderPass_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderPass_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Resources_1() { return static_cast<int32_t>(offsetof(RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056, ___m_Resources_1)); }
	inline RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * get_m_Resources_1() const { return ___m_Resources_1; }
	inline RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 ** get_address_of_m_Resources_1() { return &___m_Resources_1; }
	inline void set_m_Resources_1(RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * value)
	{
		___m_Resources_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resources_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderGraph_2() { return static_cast<int32_t>(offsetof(RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056, ___m_RenderGraph_2)); }
	inline RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * get_m_RenderGraph_2() const { return ___m_RenderGraph_2; }
	inline RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 ** get_address_of_m_RenderGraph_2() { return &___m_RenderGraph_2; }
	inline void set_m_RenderGraph_2(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * value)
	{
		___m_RenderGraph_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderGraph_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Disposed_3() { return static_cast<int32_t>(offsetof(RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056, ___m_Disposed_3)); }
	inline bool get_m_Disposed_3() const { return ___m_Disposed_3; }
	inline bool* get_address_of_m_Disposed_3() { return &___m_Disposed_3; }
	inline void set_m_Disposed_3(bool value)
	{
		___m_Disposed_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder
struct RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_marshaled_pinvoke
{
	RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 * ___m_RenderPass_0;
	RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * ___m_Resources_1;
	RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * ___m_RenderGraph_2;
	int32_t ___m_Disposed_3;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder
struct RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_marshaled_com
{
	RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 * ___m_RenderPass_0;
	RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * ___m_Resources_1;
	RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * ___m_RenderGraph_2;
	int32_t ___m_Disposed_3;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle
struct RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F 
{
public:
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle::m_IsValid
	bool ___m_IsValid_0;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle::<handle>k__BackingField
	int32_t ___U3ChandleU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_IsValid_0() { return static_cast<int32_t>(offsetof(RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F, ___m_IsValid_0)); }
	inline bool get_m_IsValid_0() const { return ___m_IsValid_0; }
	inline bool* get_address_of_m_IsValid_0() { return &___m_IsValid_0; }
	inline void set_m_IsValid_0(bool value)
	{
		___m_IsValid_0 = value;
	}

	inline static int32_t get_offset_of_U3ChandleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F, ___U3ChandleU3Ek__BackingField_1)); }
	inline int32_t get_U3ChandleU3Ek__BackingField_1() const { return ___U3ChandleU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3ChandleU3Ek__BackingField_1() { return &___U3ChandleU3Ek__BackingField_1; }
	inline void set_U3ChandleU3Ek__BackingField_1(int32_t value)
	{
		___U3ChandleU3Ek__BackingField_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle
struct RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_marshaled_pinvoke
{
	int32_t ___m_IsValid_0;
	int32_t ___U3ChandleU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle
struct RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_marshaled_com
{
	int32_t ___m_IsValid_0;
	int32_t ___U3ChandleU3Ek__BackingField_1;
};

// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 
{
public:
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_1;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795, ___m_Id_1)); }
	inline int32_t get_m_Id_1() const { return ___m_Id_1; }
	inline int32_t* get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(int32_t value)
	{
		___m_Id_1 = value;
	}
};

struct ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ShaderTagId::none
	ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  ___none_0;

public:
	inline static int32_t get_offset_of_none_0() { return static_cast<int32_t>(offsetof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_StaticFields, ___none_0)); }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  get_none_0() const { return ___none_0; }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 * get_address_of_none_0() { return &___none_0; }
	inline void set_none_0(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  value)
	{
		___none_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.UILineInfo
struct UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C 
{
public:
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;

public:
	inline static int32_t get_offset_of_startCharIdx_0() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___startCharIdx_0)); }
	inline int32_t get_startCharIdx_0() const { return ___startCharIdx_0; }
	inline int32_t* get_address_of_startCharIdx_0() { return &___startCharIdx_0; }
	inline void set_startCharIdx_0(int32_t value)
	{
		___startCharIdx_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_topY_2() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___topY_2)); }
	inline float get_topY_2() const { return ___topY_2; }
	inline float* get_address_of_topY_2() { return &___topY_2; }
	inline void set_topY_2(float value)
	{
		___topY_2 = value;
	}

	inline static int32_t get_offset_of_leading_3() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___leading_3)); }
	inline float get_leading_3() const { return ___leading_3; }
	inline float* get_address_of_leading_3() { return &___leading_3; }
	inline void set_leading_3(float value)
	{
		___leading_3 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___callback_1)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData
struct PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C 
{
public:
	// System.String UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData::name
	String_t* ___name_0;
	// System.Collections.Generic.List`1<System.Int32>[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData::resourceReadLists
	List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* ___resourceReadLists_1;
	// System.Collections.Generic.List`1<System.Int32>[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData::resourceWriteLists
	List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* ___resourceWriteLists_2;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData::culled
	bool ___culled_3;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData::generateDebugData
	bool ___generateDebugData_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_resourceReadLists_1() { return static_cast<int32_t>(offsetof(PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C, ___resourceReadLists_1)); }
	inline List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* get_resourceReadLists_1() const { return ___resourceReadLists_1; }
	inline List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C** get_address_of_resourceReadLists_1() { return &___resourceReadLists_1; }
	inline void set_resourceReadLists_1(List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* value)
	{
		___resourceReadLists_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceReadLists_1), (void*)value);
	}

	inline static int32_t get_offset_of_resourceWriteLists_2() { return static_cast<int32_t>(offsetof(PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C, ___resourceWriteLists_2)); }
	inline List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* get_resourceWriteLists_2() const { return ___resourceWriteLists_2; }
	inline List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C** get_address_of_resourceWriteLists_2() { return &___resourceWriteLists_2; }
	inline void set_resourceWriteLists_2(List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* value)
	{
		___resourceWriteLists_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceWriteLists_2), (void*)value);
	}

	inline static int32_t get_offset_of_culled_3() { return static_cast<int32_t>(offsetof(PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C, ___culled_3)); }
	inline bool get_culled_3() const { return ___culled_3; }
	inline bool* get_address_of_culled_3() { return &___culled_3; }
	inline void set_culled_3(bool value)
	{
		___culled_3 = value;
	}

	inline static int32_t get_offset_of_generateDebugData_4() { return static_cast<int32_t>(offsetof(PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C, ___generateDebugData_4)); }
	inline bool get_generateDebugData_4() const { return ___generateDebugData_4; }
	inline bool* get_address_of_generateDebugData_4() { return &___generateDebugData_4; }
	inline void set_generateDebugData_4(bool value)
	{
		___generateDebugData_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData
struct PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_marshaled_pinvoke
{
	char* ___name_0;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** ___resourceReadLists_1;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** ___resourceWriteLists_2;
	int32_t ___culled_3;
	int32_t ___generateDebugData_4;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData
struct PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_marshaled_com
{
	Il2CppChar* ___name_0;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** ___resourceReadLists_1;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** ___resourceWriteLists_2;
	int32_t ___culled_3;
	int32_t ___generateDebugData_4;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData
struct ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F 
{
public:
	// System.String UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData::name
	String_t* ___name_0;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData::imported
	bool ___imported_1;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData::creationPassIndex
	int32_t ___creationPassIndex_2;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData::releasePassIndex
	int32_t ___releasePassIndex_3;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData::consumerList
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___consumerList_4;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData::producerList
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___producerList_5;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_imported_1() { return static_cast<int32_t>(offsetof(ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F, ___imported_1)); }
	inline bool get_imported_1() const { return ___imported_1; }
	inline bool* get_address_of_imported_1() { return &___imported_1; }
	inline void set_imported_1(bool value)
	{
		___imported_1 = value;
	}

	inline static int32_t get_offset_of_creationPassIndex_2() { return static_cast<int32_t>(offsetof(ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F, ___creationPassIndex_2)); }
	inline int32_t get_creationPassIndex_2() const { return ___creationPassIndex_2; }
	inline int32_t* get_address_of_creationPassIndex_2() { return &___creationPassIndex_2; }
	inline void set_creationPassIndex_2(int32_t value)
	{
		___creationPassIndex_2 = value;
	}

	inline static int32_t get_offset_of_releasePassIndex_3() { return static_cast<int32_t>(offsetof(ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F, ___releasePassIndex_3)); }
	inline int32_t get_releasePassIndex_3() const { return ___releasePassIndex_3; }
	inline int32_t* get_address_of_releasePassIndex_3() { return &___releasePassIndex_3; }
	inline void set_releasePassIndex_3(int32_t value)
	{
		___releasePassIndex_3 = value;
	}

	inline static int32_t get_offset_of_consumerList_4() { return static_cast<int32_t>(offsetof(ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F, ___consumerList_4)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_consumerList_4() const { return ___consumerList_4; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_consumerList_4() { return &___consumerList_4; }
	inline void set_consumerList_4(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___consumerList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___consumerList_4), (void*)value);
	}

	inline static int32_t get_offset_of_producerList_5() { return static_cast<int32_t>(offsetof(ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F, ___producerList_5)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_producerList_5() const { return ___producerList_5; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_producerList_5() { return &___producerList_5; }
	inline void set_producerList_5(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___producerList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___producerList_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData
struct ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_marshaled_pinvoke
{
	char* ___name_0;
	int32_t ___imported_1;
	int32_t ___creationPassIndex_2;
	int32_t ___releasePassIndex_3;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___consumerList_4;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___producerList_5;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData
struct ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_marshaled_com
{
	Il2CppChar* ___name_0;
	int32_t ___imported_1;
	int32_t ___creationPassIndex_2;
	int32_t ___releasePassIndex_3;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___consumerList_4;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___producerList_5;
};

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateState_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitHandle_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};

// UnityEngine.CastHelper`1<System.Object>
struct CastHelper_1_t400AF56AA9238C56F8214A792C1EEE068C22774C 
{
public:
	// T UnityEngine.CastHelper`1::t
	RuntimeObject * ___t_0;
	// System.IntPtr UnityEngine.CastHelper`1::onePointerFurtherThanT
	intptr_t ___onePointerFurtherThanT_1;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(CastHelper_1_t400AF56AA9238C56F8214A792C1EEE068C22774C, ___t_0)); }
	inline RuntimeObject * get_t_0() const { return ___t_0; }
	inline RuntimeObject ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(RuntimeObject * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_0), (void*)value);
	}

	inline static int32_t get_offset_of_onePointerFurtherThanT_1() { return static_cast<int32_t>(offsetof(CastHelper_1_t400AF56AA9238C56F8214A792C1EEE068C22774C, ___onePointerFurtherThanT_1)); }
	inline intptr_t get_onePointerFurtherThanT_1() const { return ___onePointerFurtherThanT_1; }
	inline intptr_t* get_address_of_onePointerFurtherThanT_1() { return &___onePointerFurtherThanT_1; }
	inline void set_onePointerFurtherThanT_1(intptr_t value)
	{
		___onePointerFurtherThanT_1 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___dictionary_0)); }
	inline Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___current_3)); }
	inline KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___current_3)); }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>
struct KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57, ___key_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_key_0() const { return ___key_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Object,System.Int32>>
struct ValueTuple_2_t39C25CAE4F6CA469E896F7BC1066EE78949FD793 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00  ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t39C25CAE4F6CA469E896F7BC1066EE78949FD793, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t39C25CAE4F6CA469E896F7BC1066EE78949FD793, ___Item2_1)); }
	inline ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00  get_Item2_1() const { return ___Item2_1; }
	inline ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00 * get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00  value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Item2_1))->___Item1_0), (void*)NULL);
	}
};


// System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>
struct ValueTuple_2_t948DF4724E45CFD2CFEE4CD891EF7F2C2C7B59BE 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B  ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t948DF4724E45CFD2CFEE4CD891EF7F2C2C7B59BE, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t948DF4724E45CFD2CFEE4CD891EF7F2C2C7B59BE, ___Item2_1)); }
	inline ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B  get_Item2_1() const { return ___Item2_1; }
	inline ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B * get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B  value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Item2_1))->___Item1_0), (void*)NULL);
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Color>
struct VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A, ___m_Value_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Value_2() const { return ___m_Value_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>
struct VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D, ___m_Value_2)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_Value_2() const { return ___m_Value_2; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>
struct VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7, ___m_Value_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>
struct VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F, ___m_Value_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>
struct VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C, ___m_Value_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_Value_2 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.BuiltinRenderTextureType
struct BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.CubemapFace
struct CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.ExceptionArgument
struct ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.FalloffType
struct FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.FalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightMode
struct LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightType
struct LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.MeshUpdateFlags
struct MeshUpdateFlags_t6CC8A3E19F8A286528978810AB6FFAEEB6A125B5 
{
public:
	// System.Int32 UnityEngine.Rendering.MeshUpdateFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshUpdateFlags_t6CC8A3E19F8A286528978810AB6FFAEEB6A125B5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Reflection.PInfo
struct PInfo_tA2A7DDE9FEBB5094D5B84BD73638EDAFC2689635 
{
public:
	// System.Int32 System.Reflection.PInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PInfo_tA2A7DDE9FEBB5094D5B84BD73638EDAFC2689635, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Null_2 = value;
	}
};


// System.Reflection.PropertyAttributes
struct PropertyAttributes_tD4697434E7DA092DDE18E7D5863B2BC2EA5CD3C1 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyAttributes_tD4697434E7DA092DDE18E7D5863B2BC2EA5CD3C1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry
struct RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource>[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_Resources
	DynamicArray_1U5BU5D_tE68B771DE0306BDE74F780E5C89A668541D46E19* ___m_Resources_2;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.TexturePool UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_TexturePool
	TexturePool_tAFB93DC1A81E35E57CFC5F6A7EE72260A78FF824 * ___m_TexturePool_3;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_TextureCreationIndex
	int32_t ___m_TextureCreationIndex_4;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.ComputeBufferPool UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_ComputeBufferPool
	ComputeBufferPool_tA4A9B6DCD292D09BAD75A26257F4FF2F3E920DE3 * ___m_ComputeBufferPool_5;
	// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RendererListResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_RendererListResources
	DynamicArray_1_t240269079A07187CA35F5933B3D1DF275B77C5FB * ___m_RendererListResources_6;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugParams UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_RenderGraphDebug
	RenderGraphDebugParams_t3BEA7A9CEB112DBA01578963DBD74C4D9756AADE * ___m_RenderGraphDebug_7;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_Logger
	RenderGraphLogger_t5D35C0198A0D27368C971A2B67DD680988E32B12 * ___m_Logger_8;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_CurrentFrameIndex
	int32_t ___m_CurrentFrameIndex_9;
	// UnityEngine.Rendering.RTHandle UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_CurrentBackbuffer
	RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * ___m_CurrentBackbuffer_10;

public:
	inline static int32_t get_offset_of_m_Resources_2() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66, ___m_Resources_2)); }
	inline DynamicArray_1U5BU5D_tE68B771DE0306BDE74F780E5C89A668541D46E19* get_m_Resources_2() const { return ___m_Resources_2; }
	inline DynamicArray_1U5BU5D_tE68B771DE0306BDE74F780E5C89A668541D46E19** get_address_of_m_Resources_2() { return &___m_Resources_2; }
	inline void set_m_Resources_2(DynamicArray_1U5BU5D_tE68B771DE0306BDE74F780E5C89A668541D46E19* value)
	{
		___m_Resources_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resources_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_TexturePool_3() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66, ___m_TexturePool_3)); }
	inline TexturePool_tAFB93DC1A81E35E57CFC5F6A7EE72260A78FF824 * get_m_TexturePool_3() const { return ___m_TexturePool_3; }
	inline TexturePool_tAFB93DC1A81E35E57CFC5F6A7EE72260A78FF824 ** get_address_of_m_TexturePool_3() { return &___m_TexturePool_3; }
	inline void set_m_TexturePool_3(TexturePool_tAFB93DC1A81E35E57CFC5F6A7EE72260A78FF824 * value)
	{
		___m_TexturePool_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TexturePool_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextureCreationIndex_4() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66, ___m_TextureCreationIndex_4)); }
	inline int32_t get_m_TextureCreationIndex_4() const { return ___m_TextureCreationIndex_4; }
	inline int32_t* get_address_of_m_TextureCreationIndex_4() { return &___m_TextureCreationIndex_4; }
	inline void set_m_TextureCreationIndex_4(int32_t value)
	{
		___m_TextureCreationIndex_4 = value;
	}

	inline static int32_t get_offset_of_m_ComputeBufferPool_5() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66, ___m_ComputeBufferPool_5)); }
	inline ComputeBufferPool_tA4A9B6DCD292D09BAD75A26257F4FF2F3E920DE3 * get_m_ComputeBufferPool_5() const { return ___m_ComputeBufferPool_5; }
	inline ComputeBufferPool_tA4A9B6DCD292D09BAD75A26257F4FF2F3E920DE3 ** get_address_of_m_ComputeBufferPool_5() { return &___m_ComputeBufferPool_5; }
	inline void set_m_ComputeBufferPool_5(ComputeBufferPool_tA4A9B6DCD292D09BAD75A26257F4FF2F3E920DE3 * value)
	{
		___m_ComputeBufferPool_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComputeBufferPool_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_RendererListResources_6() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66, ___m_RendererListResources_6)); }
	inline DynamicArray_1_t240269079A07187CA35F5933B3D1DF275B77C5FB * get_m_RendererListResources_6() const { return ___m_RendererListResources_6; }
	inline DynamicArray_1_t240269079A07187CA35F5933B3D1DF275B77C5FB ** get_address_of_m_RendererListResources_6() { return &___m_RendererListResources_6; }
	inline void set_m_RendererListResources_6(DynamicArray_1_t240269079A07187CA35F5933B3D1DF275B77C5FB * value)
	{
		___m_RendererListResources_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RendererListResources_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderGraphDebug_7() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66, ___m_RenderGraphDebug_7)); }
	inline RenderGraphDebugParams_t3BEA7A9CEB112DBA01578963DBD74C4D9756AADE * get_m_RenderGraphDebug_7() const { return ___m_RenderGraphDebug_7; }
	inline RenderGraphDebugParams_t3BEA7A9CEB112DBA01578963DBD74C4D9756AADE ** get_address_of_m_RenderGraphDebug_7() { return &___m_RenderGraphDebug_7; }
	inline void set_m_RenderGraphDebug_7(RenderGraphDebugParams_t3BEA7A9CEB112DBA01578963DBD74C4D9756AADE * value)
	{
		___m_RenderGraphDebug_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderGraphDebug_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Logger_8() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66, ___m_Logger_8)); }
	inline RenderGraphLogger_t5D35C0198A0D27368C971A2B67DD680988E32B12 * get_m_Logger_8() const { return ___m_Logger_8; }
	inline RenderGraphLogger_t5D35C0198A0D27368C971A2B67DD680988E32B12 ** get_address_of_m_Logger_8() { return &___m_Logger_8; }
	inline void set_m_Logger_8(RenderGraphLogger_t5D35C0198A0D27368C971A2B67DD680988E32B12 * value)
	{
		___m_Logger_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentFrameIndex_9() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66, ___m_CurrentFrameIndex_9)); }
	inline int32_t get_m_CurrentFrameIndex_9() const { return ___m_CurrentFrameIndex_9; }
	inline int32_t* get_address_of_m_CurrentFrameIndex_9() { return &___m_CurrentFrameIndex_9; }
	inline void set_m_CurrentFrameIndex_9(int32_t value)
	{
		___m_CurrentFrameIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentBackbuffer_10() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66, ___m_CurrentBackbuffer_10)); }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * get_m_CurrentBackbuffer_10() const { return ___m_CurrentBackbuffer_10; }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 ** get_address_of_m_CurrentBackbuffer_10() { return &___m_CurrentBackbuffer_10; }
	inline void set_m_CurrentBackbuffer_10(RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * value)
	{
		___m_CurrentBackbuffer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentBackbuffer_10), (void*)value);
	}
};

struct RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::s_EmptyName
	ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  ___s_EmptyName_0;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_CurrentRegistry
	RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * ___m_CurrentRegistry_1;

public:
	inline static int32_t get_offset_of_s_EmptyName_0() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66_StaticFields, ___s_EmptyName_0)); }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  get_s_EmptyName_0() const { return ___s_EmptyName_0; }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 * get_address_of_s_EmptyName_0() { return &___s_EmptyName_0; }
	inline void set_s_EmptyName_0(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  value)
	{
		___s_EmptyName_0 = value;
	}

	inline static int32_t get_offset_of_m_CurrentRegistry_1() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66_StaticFields, ___m_CurrentRegistry_1)); }
	inline RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * get_m_CurrentRegistry_1() const { return ___m_CurrentRegistry_1; }
	inline RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 ** get_address_of_m_CurrentRegistry_1() { return &___m_CurrentRegistry_1; }
	inline void set_m_CurrentRegistry_1(RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * value)
	{
		___m_CurrentRegistry_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentRegistry_1), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType
struct RenderGraphResourceType_tADC2B9FB2D4F19BE4A86D67644FBA60047190FD3 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderGraphResourceType_tADC2B9FB2D4F19BE4A86D67644FBA60047190FD3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.RuntimePropertyInfo
struct RuntimePropertyInfo_tBFADAB74EBBB380C7FF1B5004FDD5A39447574B5  : public PropertyInfo_t
{
public:

public:
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskCreationOptions
struct TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UICharInfo
struct UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A, ___cursorPos_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};


// UnityEngine.UIVertex
struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv3_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___tangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___color_3)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_3() const { return ___color_3; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv0_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv0_4() const { return ___uv0_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv1_5() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv1_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv1_5() const { return ___uv1_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv1_5() { return &___uv1_5; }
	inline void set_uv1_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv1_5 = value;
	}

	inline static int32_t get_offset_of_uv2_6() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv2_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv2_6() const { return ___uv2_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv2_6() { return &___uv2_6; }
	inline void set_uv2_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv2_6 = value;
	}

	inline static int32_t get_offset_of_uv3_7() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv3_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv3_7() const { return ___uv3_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv3_7() { return &___uv3_7; }
	inline void set_uv3_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv3_7 = value;
	}
};

struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___simpleVert_10)); }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
	{
		___simpleVert_10 = value;
	}
};


// UnityEngine.Rendering.VertexAttribute
struct VertexAttribute_t9B763063E3B1705070D4DB8BC32F21F0FB30867C 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttribute::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttribute_t9B763063E3B1705070D4DB8BC32F21F0FB30867C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.VertexAttributeFormat
struct VertexAttributeFormat_tE5FC93A96237AAF63142B0E521925CAE4F283485 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttributeFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttributeFormat_tE5FC93A96237AAF63142B0E521925CAE4F283485, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/RenderRequestMode
struct RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/RenderRequestOutputSpace
struct RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestOutputSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_22)); }
	inline bool get_m_result_22() const { return ___m_result_22; }
	inline bool* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(bool value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_22)); }
	inline RuntimeObject * get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_cookieID_1() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieID_1)); }
	inline int32_t get_cookieID_1() const { return ___cookieID_1; }
	inline int32_t* get_address_of_cookieID_1() { return &___cookieID_1; }
	inline void set_cookieID_1(int32_t value)
	{
		___cookieID_1 = value;
	}

	inline static int32_t get_offset_of_cookieScale_2() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieScale_2)); }
	inline float get_cookieScale_2() const { return ___cookieScale_2; }
	inline float* get_address_of_cookieScale_2() { return &___cookieScale_2; }
	inline void set_cookieScale_2(float value)
	{
		___cookieScale_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___color_3)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_3() const { return ___color_3; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_indirectColor_4() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___indirectColor_4)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_4() const { return ___indirectColor_4; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_4() { return &___indirectColor_4; }
	inline void set_indirectColor_4(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_4 = value;
	}

	inline static int32_t get_offset_of_orientation_5() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___orientation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_5() const { return ___orientation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_5() { return &___orientation_5; }
	inline void set_orientation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_5 = value;
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___position_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_6() const { return ___position_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_coneAngle_8() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___coneAngle_8)); }
	inline float get_coneAngle_8() const { return ___coneAngle_8; }
	inline float* get_address_of_coneAngle_8() { return &___coneAngle_8; }
	inline void set_coneAngle_8(float value)
	{
		___coneAngle_8 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_9() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___innerConeAngle_9)); }
	inline float get_innerConeAngle_9() const { return ___innerConeAngle_9; }
	inline float* get_address_of_innerConeAngle_9() { return &___innerConeAngle_9; }
	inline void set_innerConeAngle_9(float value)
	{
		___innerConeAngle_9 = value;
	}

	inline static int32_t get_offset_of_shape0_10() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape0_10)); }
	inline float get_shape0_10() const { return ___shape0_10; }
	inline float* get_address_of_shape0_10() { return &___shape0_10; }
	inline void set_shape0_10(float value)
	{
		___shape0_10 = value;
	}

	inline static int32_t get_offset_of_shape1_11() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape1_11)); }
	inline float get_shape1_11() const { return ___shape1_11; }
	inline float* get_address_of_shape1_11() { return &___shape1_11; }
	inline void set_shape1_11(float value)
	{
		___shape1_11 = value;
	}

	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___type_12)); }
	inline uint8_t get_type_12() const { return ___type_12; }
	inline uint8_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(uint8_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_mode_13() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___mode_13)); }
	inline uint8_t get_mode_13() const { return ___mode_13; }
	inline uint8_t* get_address_of_mode_13() { return &___mode_13; }
	inline void set_mode_13(uint8_t value)
	{
		___mode_13 = value;
	}

	inline static int32_t get_offset_of_shadow_14() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shadow_14)); }
	inline uint8_t get_shadow_14() const { return ___shadow_14; }
	inline uint8_t* get_address_of_shadow_14() { return &___shadow_14; }
	inline void set_shadow_14(uint8_t value)
	{
		___shadow_14 = value;
	}

	inline static int32_t get_offset_of_falloff_15() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___falloff_15)); }
	inline uint8_t get_falloff_15() const { return ___falloff_15; }
	inline uint8_t* get_address_of_falloff_15() { return &___falloff_15; }
	inline void set_falloff_15(uint8_t value)
	{
		___falloff_15 = value;
	}
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82 
{
public:
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t * ___parent_0;
	// System.Type System.Reflection.MonoPropertyInfo::declaring_type
	Type_t * ___declaring_type_1;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t * ___get_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t * ___set_method_4;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_5;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_declaring_type_1() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___declaring_type_1)); }
	inline Type_t * get_declaring_type_1() const { return ___declaring_type_1; }
	inline Type_t ** get_address_of_declaring_type_1() { return &___declaring_type_1; }
	inline void set_declaring_type_1(Type_t * value)
	{
		___declaring_type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___declaring_type_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_get_method_3() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___get_method_3)); }
	inline MethodInfo_t * get_get_method_3() const { return ___get_method_3; }
	inline MethodInfo_t ** get_address_of_get_method_3() { return &___get_method_3; }
	inline void set_get_method_3(MethodInfo_t * value)
	{
		___get_method_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_method_3), (void*)value);
	}

	inline static int32_t get_offset_of_set_method_4() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___set_method_4)); }
	inline MethodInfo_t * get_set_method_4() const { return ___set_method_4; }
	inline MethodInfo_t ** get_address_of_set_method_4() { return &___set_method_4; }
	inline void set_set_method_4(MethodInfo_t * value)
	{
		___set_method_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___set_method_4), (void*)value);
	}

	inline static int32_t get_offset_of_attrs_5() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___attrs_5)); }
	inline int32_t get_attrs_5() const { return ___attrs_5; }
	inline int32_t* get_address_of_attrs_5() { return &___attrs_5; }
	inline void set_attrs_5(int32_t value)
	{
		___attrs_5 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___declaring_type_1;
	char* ___name_2;
	MethodInfo_t * ___get_method_3;
	MethodInfo_t * ___set_method_4;
	int32_t ___attrs_5;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___declaring_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___get_method_3;
	MethodInfo_t * ___set_method_4;
	int32_t ___attrs_5;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_3;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_4;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_5;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_6;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_NameID_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_NameID_1)); }
	inline int32_t get_m_NameID_1() const { return ___m_NameID_1; }
	inline int32_t* get_address_of_m_NameID_1() { return &___m_NameID_1; }
	inline void set_m_NameID_1(int32_t value)
	{
		___m_NameID_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_BufferPointer_3)); }
	inline intptr_t get_m_BufferPointer_3() const { return ___m_BufferPointer_3; }
	inline intptr_t* get_address_of_m_BufferPointer_3() { return &___m_BufferPointer_3; }
	inline void set_m_BufferPointer_3(intptr_t value)
	{
		___m_BufferPointer_3 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_MipLevel_4)); }
	inline int32_t get_m_MipLevel_4() const { return ___m_MipLevel_4; }
	inline int32_t* get_address_of_m_MipLevel_4() { return &___m_MipLevel_4; }
	inline void set_m_MipLevel_4(int32_t value)
	{
		___m_MipLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_CubeFace_5)); }
	inline int32_t get_m_CubeFace_5() const { return ___m_CubeFace_5; }
	inline int32_t* get_address_of_m_CubeFace_5() { return &___m_CubeFace_5; }
	inline void set_m_CubeFace_5(int32_t value)
	{
		___m_CubeFace_5 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_DepthSlice_6)); }
	inline int32_t get_m_DepthSlice_6() const { return ___m_DepthSlice_6; }
	inline int32_t* get_address_of_m_DepthSlice_6() { return &___m_DepthSlice_6; }
	inline void set_m_DepthSlice_6(int32_t value)
	{
		___m_DepthSlice_6 = value;
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.ResourceHandle
struct ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948 
{
public:
	// System.UInt32 UnityEngine.Experimental.Rendering.RenderGraphModule.ResourceHandle::m_Value
	uint32_t ___m_Value_2;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType UnityEngine.Experimental.Rendering.RenderGraphModule.ResourceHandle::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948, ___m_Value_2)); }
	inline uint32_t get_m_Value_2() const { return ___m_Value_2; }
	inline uint32_t* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(uint32_t value)
	{
		___m_Value_2 = value;
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948, ___U3CtypeU3Ek__BackingField_4)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_4() const { return ___U3CtypeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_4() { return &___U3CtypeU3Ek__BackingField_4; }
	inline void set_U3CtypeU3Ek__BackingField_4(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_4 = value;
	}
};

struct ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948_StaticFields
{
public:
	// System.UInt32 UnityEngine.Experimental.Rendering.RenderGraphModule.ResourceHandle::s_CurrentValidBit
	uint32_t ___s_CurrentValidBit_3;

public:
	inline static int32_t get_offset_of_s_CurrentValidBit_3() { return static_cast<int32_t>(offsetof(ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948_StaticFields, ___s_CurrentValidBit_3)); }
	inline uint32_t get_s_CurrentValidBit_3() const { return ___s_CurrentValidBit_3; }
	inline uint32_t* get_address_of_s_CurrentValidBit_3() { return &___s_CurrentValidBit_3; }
	inline void set_s_CurrentValidBit_3(uint32_t value)
	{
		___s_CurrentValidBit_3 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
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
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.UnityException
struct UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101  : public Exception_t
{
public:

public:
};


// UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 
{
public:
	// UnityEngine.Camera/RenderRequestMode UnityEngine.Camera/RenderRequest::m_CameraRenderMode
	int32_t ___m_CameraRenderMode_0;
	// UnityEngine.RenderTexture UnityEngine.Camera/RenderRequest::m_ResultRT
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	// UnityEngine.Camera/RenderRequestOutputSpace UnityEngine.Camera/RenderRequest::m_OutputSpace
	int32_t ___m_OutputSpace_2;

public:
	inline static int32_t get_offset_of_m_CameraRenderMode_0() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_CameraRenderMode_0)); }
	inline int32_t get_m_CameraRenderMode_0() const { return ___m_CameraRenderMode_0; }
	inline int32_t* get_address_of_m_CameraRenderMode_0() { return &___m_CameraRenderMode_0; }
	inline void set_m_CameraRenderMode_0(int32_t value)
	{
		___m_CameraRenderMode_0 = value;
	}

	inline static int32_t get_offset_of_m_ResultRT_1() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_ResultRT_1)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_m_ResultRT_1() const { return ___m_ResultRT_1; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_m_ResultRT_1() { return &___m_ResultRT_1; }
	inline void set_m_ResultRT_1(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___m_ResultRT_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ResultRT_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_OutputSpace_2() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_OutputSpace_2)); }
	inline int32_t get_m_OutputSpace_2() const { return ___m_OutputSpace_2; }
	inline int32_t* get_address_of_m_OutputSpace_2() { return &___m_OutputSpace_2; }
	inline void set_m_OutputSpace_2(int32_t value)
	{
		___m_OutputSpace_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_pinvoke
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};
// Native definition for COM marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_com
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};

// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49  : public MulticastDelegate_t
{
public:

public:
};


// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<System.Object>
struct RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C  : public MulticastDelegate_t
{
public:

public:
};


// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Reflection.MonoProperty
struct MonoProperty_t  : public RuntimePropertyInfo_tBFADAB74EBBB380C7FF1B5004FDD5A39447574B5
{
public:
	// System.IntPtr System.Reflection.MonoProperty::klass
	intptr_t ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	intptr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t4638094A6814F5738CB2D77994423EEBAB6F342A * ___cached_getter_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___klass_0)); }
	inline intptr_t get_klass_0() const { return ___klass_0; }
	inline intptr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(intptr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___prop_1)); }
	inline intptr_t get_prop_1() const { return ___prop_1; }
	inline intptr_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(intptr_t value)
	{
		___prop_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___info_2)); }
	inline MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82  get_info_2() const { return ___info_2; }
	inline MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82 * get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82  value)
	{
		___info_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_2))->___parent_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_2))->___declaring_type_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_2))->___name_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_2))->___get_method_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_2))->___set_method_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_cached_3() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_3)); }
	inline int32_t get_cached_3() const { return ___cached_3; }
	inline int32_t* get_address_of_cached_3() { return &___cached_3; }
	inline void set_cached_3(int32_t value)
	{
		___cached_3 = value;
	}

	inline static int32_t get_offset_of_cached_getter_4() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_getter_4)); }
	inline GetterAdapter_t4638094A6814F5738CB2D77994423EEBAB6F342A * get_cached_getter_4() const { return ___cached_getter_4; }
	inline GetterAdapter_t4638094A6814F5738CB2D77994423EEBAB6F342A ** get_address_of_cached_getter_4() { return &___cached_getter_4; }
	inline void set_cached_getter_4(GetterAdapter_t4638094A6814F5738CB2D77994423EEBAB6F342A * value)
	{
		___cached_getter_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_getter_4), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle
struct TextureHandle_t01171C911231B22E81C764E167D04409E293729C 
{
public:
	// UnityEngine.Experimental.Rendering.RenderGraphModule.ResourceHandle UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle::handle
	ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948  ___handle_1;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(TextureHandle_t01171C911231B22E81C764E167D04409E293729C, ___handle_1)); }
	inline ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948  get_handle_1() const { return ___handle_1; }
	inline ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948 * get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948  value)
	{
		___handle_1 = value;
	}
};

struct TextureHandle_t01171C911231B22E81C764E167D04409E293729C_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle::s_NullHandle
	TextureHandle_t01171C911231B22E81C764E167D04409E293729C  ___s_NullHandle_0;

public:
	inline static int32_t get_offset_of_s_NullHandle_0() { return static_cast<int32_t>(offsetof(TextureHandle_t01171C911231B22E81C764E167D04409E293729C_StaticFields, ___s_NullHandle_0)); }
	inline TextureHandle_t01171C911231B22E81C764E167D04409E293729C  get_s_NullHandle_0() const { return ___s_NullHandle_0; }
	inline TextureHandle_t01171C911231B22E81C764E167D04409E293729C * get_address_of_s_NullHandle_0() { return &___s_NullHandle_0; }
	inline void set_s_NullHandle_0(TextureHandle_t01171C911231B22E81C764E167D04409E293729C  value)
	{
		___s_NullHandle_0 = value;
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F  : public Type_t
{
public:

public:
};


// UnityEngine.Rendering.VolumeComponent
struct VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.Rendering.VolumeComponent::active
	bool ___active_4;
	// System.String UnityEngine.Rendering.VolumeComponent::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_5;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.VolumeParameter> UnityEngine.Rendering.VolumeComponent::<parameters>k__BackingField
	ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5 * ___U3CparametersU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Rendering.VolumeComponent::m_AdvancedMode
	bool ___m_AdvancedMode_7;

public:
	inline static int32_t get_offset_of_active_4() { return static_cast<int32_t>(offsetof(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E, ___active_4)); }
	inline bool get_active_4() const { return ___active_4; }
	inline bool* get_address_of_active_4() { return &___active_4; }
	inline void set_active_4(bool value)
	{
		___active_4 = value;
	}

	inline static int32_t get_offset_of_U3CdisplayNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E, ___U3CdisplayNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CdisplayNameU3Ek__BackingField_5() const { return ___U3CdisplayNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CdisplayNameU3Ek__BackingField_5() { return &___U3CdisplayNameU3Ek__BackingField_5; }
	inline void set_U3CdisplayNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CdisplayNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisplayNameU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CparametersU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E, ___U3CparametersU3Ek__BackingField_6)); }
	inline ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5 * get_U3CparametersU3Ek__BackingField_6() const { return ___U3CparametersU3Ek__BackingField_6; }
	inline ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5 ** get_address_of_U3CparametersU3Ek__BackingField_6() { return &___U3CparametersU3Ek__BackingField_6; }
	inline void set_U3CparametersU3Ek__BackingField_6(ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5 * value)
	{
		___U3CparametersU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CparametersU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_AdvancedMode_7() { return static_cast<int32_t>(offsetof(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E, ___m_AdvancedMode_7)); }
	inline bool get_m_AdvancedMode_7() const { return ___m_AdvancedMode_7; }
	inline bool* get_address_of_m_AdvancedMode_7() { return &___m_AdvancedMode_7; }
	inline void set_m_AdvancedMode_7(bool value)
	{
		___m_AdvancedMode_7 = value;
	}
};


// UnityEngine.Rendering.VolumeProfile
struct VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeProfile::components
	List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * ___components_4;
	// System.Boolean UnityEngine.Rendering.VolumeProfile::isDirty
	bool ___isDirty_5;

public:
	inline static int32_t get_offset_of_components_4() { return static_cast<int32_t>(offsetof(VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821, ___components_4)); }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * get_components_4() const { return ___components_4; }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 ** get_address_of_components_4() { return &___components_4; }
	inline void set_components_4(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * value)
	{
		___components_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___components_4), (void*)value);
	}

	inline static int32_t get_offset_of_isDirty_5() { return static_cast<int32_t>(offsetof(VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821, ___isDirty_5)); }
	inline bool get_isDirty_5() const { return ___isDirty_5; }
	inline bool* get_address_of_isDirty_5() { return &___isDirty_5; }
	inline void set_isDirty_5(bool value)
	{
		___isDirty_5 = value;
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass
struct RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520  : public RuntimeObject
{
public:
	// System.String UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass::<index>k__BackingField
	int32_t ___U3CindexU3Ek__BackingField_1;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass::<customSampler>k__BackingField
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___U3CcustomSamplerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass::<enableAsyncCompute>k__BackingField
	bool ___U3CenableAsyncComputeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass::<allowPassCulling>k__BackingField
	bool ___U3CallowPassCullingU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass::<depthBuffer>k__BackingField
	TextureHandle_t01171C911231B22E81C764E167D04409E293729C  ___U3CdepthBufferU3Ek__BackingField_5;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass::<colorBuffers>k__BackingField
	TextureHandleU5BU5D_tB65A05D85A642CF679FDF6AB6860DE1151B0030A* ___U3CcolorBuffersU3Ek__BackingField_6;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass::<colorBufferMaxIndex>k__BackingField
	int32_t ___U3CcolorBufferMaxIndexU3Ek__BackingField_7;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass::<refCount>k__BackingField
	int32_t ___U3CrefCountU3Ek__BackingField_8;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass::<generateDebugData>k__BackingField
	bool ___U3CgenerateDebugDataU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.ResourceHandle>[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass::resourceReadLists
	List_1U5BU5D_t80F55F500E654C0547309817F7109377EDB8D35C* ___resourceReadLists_10;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.ResourceHandle>[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass::resourceWriteLists
	List_1U5BU5D_t80F55F500E654C0547309817F7109377EDB8D35C* ___resourceWriteLists_11;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.ResourceHandle>[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass::transientResourceList
	List_1U5BU5D_t80F55F500E654C0547309817F7109377EDB8D35C* ___transientResourceList_12;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass::usedRendererListList
	List_1_tB573D1DD7F85019D1433F20C305FE237B12BCA19 * ___usedRendererListList_13;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CindexU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520, ___U3CindexU3Ek__BackingField_1)); }
	inline int32_t get_U3CindexU3Ek__BackingField_1() const { return ___U3CindexU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CindexU3Ek__BackingField_1() { return &___U3CindexU3Ek__BackingField_1; }
	inline void set_U3CindexU3Ek__BackingField_1(int32_t value)
	{
		___U3CindexU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CcustomSamplerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520, ___U3CcustomSamplerU3Ek__BackingField_2)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_U3CcustomSamplerU3Ek__BackingField_2() const { return ___U3CcustomSamplerU3Ek__BackingField_2; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_U3CcustomSamplerU3Ek__BackingField_2() { return &___U3CcustomSamplerU3Ek__BackingField_2; }
	inline void set_U3CcustomSamplerU3Ek__BackingField_2(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___U3CcustomSamplerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcustomSamplerU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CenableAsyncComputeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520, ___U3CenableAsyncComputeU3Ek__BackingField_3)); }
	inline bool get_U3CenableAsyncComputeU3Ek__BackingField_3() const { return ___U3CenableAsyncComputeU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CenableAsyncComputeU3Ek__BackingField_3() { return &___U3CenableAsyncComputeU3Ek__BackingField_3; }
	inline void set_U3CenableAsyncComputeU3Ek__BackingField_3(bool value)
	{
		___U3CenableAsyncComputeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CallowPassCullingU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520, ___U3CallowPassCullingU3Ek__BackingField_4)); }
	inline bool get_U3CallowPassCullingU3Ek__BackingField_4() const { return ___U3CallowPassCullingU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CallowPassCullingU3Ek__BackingField_4() { return &___U3CallowPassCullingU3Ek__BackingField_4; }
	inline void set_U3CallowPassCullingU3Ek__BackingField_4(bool value)
	{
		___U3CallowPassCullingU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CdepthBufferU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520, ___U3CdepthBufferU3Ek__BackingField_5)); }
	inline TextureHandle_t01171C911231B22E81C764E167D04409E293729C  get_U3CdepthBufferU3Ek__BackingField_5() const { return ___U3CdepthBufferU3Ek__BackingField_5; }
	inline TextureHandle_t01171C911231B22E81C764E167D04409E293729C * get_address_of_U3CdepthBufferU3Ek__BackingField_5() { return &___U3CdepthBufferU3Ek__BackingField_5; }
	inline void set_U3CdepthBufferU3Ek__BackingField_5(TextureHandle_t01171C911231B22E81C764E167D04409E293729C  value)
	{
		___U3CdepthBufferU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CcolorBuffersU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520, ___U3CcolorBuffersU3Ek__BackingField_6)); }
	inline TextureHandleU5BU5D_tB65A05D85A642CF679FDF6AB6860DE1151B0030A* get_U3CcolorBuffersU3Ek__BackingField_6() const { return ___U3CcolorBuffersU3Ek__BackingField_6; }
	inline TextureHandleU5BU5D_tB65A05D85A642CF679FDF6AB6860DE1151B0030A** get_address_of_U3CcolorBuffersU3Ek__BackingField_6() { return &___U3CcolorBuffersU3Ek__BackingField_6; }
	inline void set_U3CcolorBuffersU3Ek__BackingField_6(TextureHandleU5BU5D_tB65A05D85A642CF679FDF6AB6860DE1151B0030A* value)
	{
		___U3CcolorBuffersU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcolorBuffersU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcolorBufferMaxIndexU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520, ___U3CcolorBufferMaxIndexU3Ek__BackingField_7)); }
	inline int32_t get_U3CcolorBufferMaxIndexU3Ek__BackingField_7() const { return ___U3CcolorBufferMaxIndexU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CcolorBufferMaxIndexU3Ek__BackingField_7() { return &___U3CcolorBufferMaxIndexU3Ek__BackingField_7; }
	inline void set_U3CcolorBufferMaxIndexU3Ek__BackingField_7(int32_t value)
	{
		___U3CcolorBufferMaxIndexU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CrefCountU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520, ___U3CrefCountU3Ek__BackingField_8)); }
	inline int32_t get_U3CrefCountU3Ek__BackingField_8() const { return ___U3CrefCountU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CrefCountU3Ek__BackingField_8() { return &___U3CrefCountU3Ek__BackingField_8; }
	inline void set_U3CrefCountU3Ek__BackingField_8(int32_t value)
	{
		___U3CrefCountU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CgenerateDebugDataU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520, ___U3CgenerateDebugDataU3Ek__BackingField_9)); }
	inline bool get_U3CgenerateDebugDataU3Ek__BackingField_9() const { return ___U3CgenerateDebugDataU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CgenerateDebugDataU3Ek__BackingField_9() { return &___U3CgenerateDebugDataU3Ek__BackingField_9; }
	inline void set_U3CgenerateDebugDataU3Ek__BackingField_9(bool value)
	{
		___U3CgenerateDebugDataU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_resourceReadLists_10() { return static_cast<int32_t>(offsetof(RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520, ___resourceReadLists_10)); }
	inline List_1U5BU5D_t80F55F500E654C0547309817F7109377EDB8D35C* get_resourceReadLists_10() const { return ___resourceReadLists_10; }
	inline List_1U5BU5D_t80F55F500E654C0547309817F7109377EDB8D35C** get_address_of_resourceReadLists_10() { return &___resourceReadLists_10; }
	inline void set_resourceReadLists_10(List_1U5BU5D_t80F55F500E654C0547309817F7109377EDB8D35C* value)
	{
		___resourceReadLists_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceReadLists_10), (void*)value);
	}

	inline static int32_t get_offset_of_resourceWriteLists_11() { return static_cast<int32_t>(offsetof(RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520, ___resourceWriteLists_11)); }
	inline List_1U5BU5D_t80F55F500E654C0547309817F7109377EDB8D35C* get_resourceWriteLists_11() const { return ___resourceWriteLists_11; }
	inline List_1U5BU5D_t80F55F500E654C0547309817F7109377EDB8D35C** get_address_of_resourceWriteLists_11() { return &___resourceWriteLists_11; }
	inline void set_resourceWriteLists_11(List_1U5BU5D_t80F55F500E654C0547309817F7109377EDB8D35C* value)
	{
		___resourceWriteLists_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceWriteLists_11), (void*)value);
	}

	inline static int32_t get_offset_of_transientResourceList_12() { return static_cast<int32_t>(offsetof(RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520, ___transientResourceList_12)); }
	inline List_1U5BU5D_t80F55F500E654C0547309817F7109377EDB8D35C* get_transientResourceList_12() const { return ___transientResourceList_12; }
	inline List_1U5BU5D_t80F55F500E654C0547309817F7109377EDB8D35C** get_address_of_transientResourceList_12() { return &___transientResourceList_12; }
	inline void set_transientResourceList_12(List_1U5BU5D_t80F55F500E654C0547309817F7109377EDB8D35C* value)
	{
		___transientResourceList_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transientResourceList_12), (void*)value);
	}

	inline static int32_t get_offset_of_usedRendererListList_13() { return static_cast<int32_t>(offsetof(RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520, ___usedRendererListList_13)); }
	inline List_1_tB573D1DD7F85019D1433F20C305FE237B12BCA19 * get_usedRendererListList_13() const { return ___usedRendererListList_13; }
	inline List_1_tB573D1DD7F85019D1433F20C305FE237B12BCA19 ** get_address_of_usedRendererListList_13() { return &___usedRendererListList_13; }
	inline void set_usedRendererListList_13(List_1_tB573D1DD7F85019D1433F20C305FE237B12BCA19 * value)
	{
		___usedRendererListList_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedRendererListList_13), (void*)value);
	}
};


// System.RuntimeType
struct RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07  : public TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F
{
public:
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79 * ___type_info_26;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject * ___GenericCache_27;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB * ___m_serializationCtor_28;

public:
	inline static int32_t get_offset_of_type_info_26() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07, ___type_info_26)); }
	inline MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79 * get_type_info_26() const { return ___type_info_26; }
	inline MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79 ** get_address_of_type_info_26() { return &___type_info_26; }
	inline void set_type_info_26(MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79 * value)
	{
		___type_info_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_info_26), (void*)value);
	}

	inline static int32_t get_offset_of_GenericCache_27() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07, ___GenericCache_27)); }
	inline RuntimeObject * get_GenericCache_27() const { return ___GenericCache_27; }
	inline RuntimeObject ** get_address_of_GenericCache_27() { return &___GenericCache_27; }
	inline void set_GenericCache_27(RuntimeObject * value)
	{
		___GenericCache_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GenericCache_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_serializationCtor_28() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07, ___m_serializationCtor_28)); }
	inline RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB * get_m_serializationCtor_28() const { return ___m_serializationCtor_28; }
	inline RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB ** get_address_of_m_serializationCtor_28() { return &___m_serializationCtor_28; }
	inline void set_m_serializationCtor_28(RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB * value)
	{
		___m_serializationCtor_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_serializationCtor_28), (void*)value);
	}
};

struct RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields
{
public:
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___ValueType_10;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___EnumType_11;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___ObjectType_12;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___StringType_13;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___DelegateType_14;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___s_SICtorParamTypes_15;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___s_typedRef_25;

public:
	inline static int32_t get_offset_of_ValueType_10() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___ValueType_10)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_ValueType_10() const { return ___ValueType_10; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_ValueType_10() { return &___ValueType_10; }
	inline void set_ValueType_10(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___ValueType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValueType_10), (void*)value);
	}

	inline static int32_t get_offset_of_EnumType_11() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___EnumType_11)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_EnumType_11() const { return ___EnumType_11; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_EnumType_11() { return &___EnumType_11; }
	inline void set_EnumType_11(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___EnumType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnumType_11), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectType_12() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___ObjectType_12)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_ObjectType_12() const { return ___ObjectType_12; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_ObjectType_12() { return &___ObjectType_12; }
	inline void set_ObjectType_12(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___ObjectType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectType_12), (void*)value);
	}

	inline static int32_t get_offset_of_StringType_13() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___StringType_13)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_StringType_13() const { return ___StringType_13; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_StringType_13() { return &___StringType_13; }
	inline void set_StringType_13(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___StringType_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringType_13), (void*)value);
	}

	inline static int32_t get_offset_of_DelegateType_14() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___DelegateType_14)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_DelegateType_14() const { return ___DelegateType_14; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_DelegateType_14() { return &___DelegateType_14; }
	inline void set_DelegateType_14(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___DelegateType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DelegateType_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_SICtorParamTypes_15() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___s_SICtorParamTypes_15)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_s_SICtorParamTypes_15() const { return ___s_SICtorParamTypes_15; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_s_SICtorParamTypes_15() { return &___s_SICtorParamTypes_15; }
	inline void set_s_SICtorParamTypes_15(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___s_SICtorParamTypes_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SICtorParamTypes_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_typedRef_25() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___s_typedRef_25)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_s_typedRef_25() const { return ___s_typedRef_25; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_s_typedRef_25() { return &___s_typedRef_25; }
	inline void set_s_typedRef_25(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___s_typedRef_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_typedRef_25), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass`1<System.Object>
struct RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047  : public RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520
{
public:
	// PassData UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass`1::data
	RuntimeObject * ___data_14;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<PassData> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass`1::renderFunc
	RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C * ___renderFunc_15;

public:
	inline static int32_t get_offset_of_data_14() { return static_cast<int32_t>(offsetof(RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047, ___data_14)); }
	inline RuntimeObject * get_data_14() const { return ___data_14; }
	inline RuntimeObject ** get_address_of_data_14() { return &___data_14; }
	inline void set_data_14(RuntimeObject * value)
	{
		___data_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_14), (void*)value);
	}

	inline static int32_t get_offset_of_renderFunc_15() { return static_cast<int32_t>(offsetof(RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047, ___renderFunc_15)); }
	inline RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C * get_renderFunc_15() const { return ___renderFunc_15; }
	inline RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C ** get_address_of_renderFunc_15() { return &___renderFunc_15; }
	inline void set_renderFunc_15(RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C * value)
	{
		___renderFunc_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderFunc_15), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.Rendering.Volume
struct Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityEngine.Rendering.Volume::isGlobal
	bool ___isGlobal_4;
	// System.Single UnityEngine.Rendering.Volume::priority
	float ___priority_5;
	// System.Single UnityEngine.Rendering.Volume::blendDistance
	float ___blendDistance_6;
	// System.Single UnityEngine.Rendering.Volume::weight
	float ___weight_7;
	// UnityEngine.Rendering.VolumeProfile UnityEngine.Rendering.Volume::sharedProfile
	VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * ___sharedProfile_8;
	// System.Int32 UnityEngine.Rendering.Volume::m_PreviousLayer
	int32_t ___m_PreviousLayer_9;
	// System.Single UnityEngine.Rendering.Volume::m_PreviousPriority
	float ___m_PreviousPriority_10;
	// UnityEngine.Rendering.VolumeProfile UnityEngine.Rendering.Volume::m_InternalProfile
	VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * ___m_InternalProfile_11;

public:
	inline static int32_t get_offset_of_isGlobal_4() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___isGlobal_4)); }
	inline bool get_isGlobal_4() const { return ___isGlobal_4; }
	inline bool* get_address_of_isGlobal_4() { return &___isGlobal_4; }
	inline void set_isGlobal_4(bool value)
	{
		___isGlobal_4 = value;
	}

	inline static int32_t get_offset_of_priority_5() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___priority_5)); }
	inline float get_priority_5() const { return ___priority_5; }
	inline float* get_address_of_priority_5() { return &___priority_5; }
	inline void set_priority_5(float value)
	{
		___priority_5 = value;
	}

	inline static int32_t get_offset_of_blendDistance_6() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___blendDistance_6)); }
	inline float get_blendDistance_6() const { return ___blendDistance_6; }
	inline float* get_address_of_blendDistance_6() { return &___blendDistance_6; }
	inline void set_blendDistance_6(float value)
	{
		___blendDistance_6 = value;
	}

	inline static int32_t get_offset_of_weight_7() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___weight_7)); }
	inline float get_weight_7() const { return ___weight_7; }
	inline float* get_address_of_weight_7() { return &___weight_7; }
	inline void set_weight_7(float value)
	{
		___weight_7 = value;
	}

	inline static int32_t get_offset_of_sharedProfile_8() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___sharedProfile_8)); }
	inline VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * get_sharedProfile_8() const { return ___sharedProfile_8; }
	inline VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 ** get_address_of_sharedProfile_8() { return &___sharedProfile_8; }
	inline void set_sharedProfile_8(VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * value)
	{
		___sharedProfile_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedProfile_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousLayer_9() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___m_PreviousLayer_9)); }
	inline int32_t get_m_PreviousLayer_9() const { return ___m_PreviousLayer_9; }
	inline int32_t* get_address_of_m_PreviousLayer_9() { return &___m_PreviousLayer_9; }
	inline void set_m_PreviousLayer_9(int32_t value)
	{
		___m_PreviousLayer_9 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPriority_10() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___m_PreviousPriority_10)); }
	inline float get_m_PreviousPriority_10() const { return ___m_PreviousPriority_10; }
	inline float* get_address_of_m_PreviousPriority_10() { return &___m_PreviousPriority_10; }
	inline void set_m_PreviousPriority_10(float value)
	{
		___m_PreviousPriority_10 = value;
	}

	inline static int32_t get_offset_of_m_InternalProfile_11() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___m_InternalProfile_11)); }
	inline VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * get_m_InternalProfile_11() const { return ___m_InternalProfile_11; }
	inline VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 ** get_address_of_m_InternalProfile_11() { return &___m_InternalProfile_11; }
	inline void set_m_InternalProfile_11(VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * value)
	{
		___m_InternalProfile_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalProfile_11), (void*)value);
	}
};


// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t432BA4439FC00E108A9A351BD7FBCD9242270BB3 * ___m_RectChildren_11;

public:
	inline static int32_t get_offset_of_m_Padding_4() { return static_cast<int32_t>(offsetof(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2, ___m_Padding_4)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_4() const { return ___m_Padding_4; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_4() { return &___m_Padding_4; }
	inline void set_m_Padding_4(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildAlignment_5() { return static_cast<int32_t>(offsetof(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2, ___m_ChildAlignment_5)); }
	inline int32_t get_m_ChildAlignment_5() const { return ___m_ChildAlignment_5; }
	inline int32_t* get_address_of_m_ChildAlignment_5() { return &___m_ChildAlignment_5; }
	inline void set_m_ChildAlignment_5(int32_t value)
	{
		___m_ChildAlignment_5 = value;
	}

	inline static int32_t get_offset_of_m_Rect_6() { return static_cast<int32_t>(offsetof(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2, ___m_Rect_6)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Rect_6() const { return ___m_Rect_6; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Rect_6() { return &___m_Rect_6; }
	inline void set_m_Rect_6(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Rect_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rect_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tracker_7() { return static_cast<int32_t>(offsetof(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2, ___m_Tracker_7)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_7() const { return ___m_Tracker_7; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_7() { return &___m_Tracker_7; }
	inline void set_m_Tracker_7(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_7 = value;
	}

	inline static int32_t get_offset_of_m_TotalMinSize_8() { return static_cast<int32_t>(offsetof(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2, ___m_TotalMinSize_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_TotalMinSize_8() const { return ___m_TotalMinSize_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_TotalMinSize_8() { return &___m_TotalMinSize_8; }
	inline void set_m_TotalMinSize_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_TotalMinSize_8 = value;
	}

	inline static int32_t get_offset_of_m_TotalPreferredSize_9() { return static_cast<int32_t>(offsetof(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2, ___m_TotalPreferredSize_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_TotalPreferredSize_9() const { return ___m_TotalPreferredSize_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_TotalPreferredSize_9() { return &___m_TotalPreferredSize_9; }
	inline void set_m_TotalPreferredSize_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_TotalPreferredSize_9 = value;
	}

	inline static int32_t get_offset_of_m_TotalFlexibleSize_10() { return static_cast<int32_t>(offsetof(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2, ___m_TotalFlexibleSize_10)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_TotalFlexibleSize_10() const { return ___m_TotalFlexibleSize_10; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_TotalFlexibleSize_10() { return &___m_TotalFlexibleSize_10; }
	inline void set_m_TotalFlexibleSize_10(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_TotalFlexibleSize_10 = value;
	}

	inline static int32_t get_offset_of_m_RectChildren_11() { return static_cast<int32_t>(offsetof(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2, ___m_RectChildren_11)); }
	inline List_1_t432BA4439FC00E108A9A351BD7FBCD9242270BB3 * get_m_RectChildren_11() const { return ___m_RectChildren_11; }
	inline List_1_t432BA4439FC00E108A9A351BD7FBCD9242270BB3 ** get_address_of_m_RectChildren_11() { return &___m_RectChildren_11; }
	inline void set_m_RectChildren_11(List_1_t432BA4439FC00E108A9A351BD7FBCD9242270BB3 * value)
	{
		___m_RectChildren_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectChildren_11), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  m_Items[1];

public:
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  m_Items[1];

public:
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * m_Items[1];

public:
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  m_Items[1];

public:
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::SetRenderFunc<System.Object>(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<PassData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderGraphBuilder_SetRenderFunc_TisRuntimeObject_mD39730A1B58C57688FB5F66270351E97802AC77E_gshared (RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056 * __this, RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C * ___renderFunc0, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Object,System.Int32>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m952595B933EB872D25BDD85DFFD79A83ABAB15EB_gshared (ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00 * __this, RuntimeObject * ___item10, int32_t ___item21, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Object,System.Int32>,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m36DACFC2D41C596A7D378E2BD4C9B7C422C1919C_gshared (Dictionary_2_t3BA8FCFE5DD25F2BB4BBAC4C3C306D4755C6003E * __this, ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00  ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Object,System.Int32>,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m9E4426A1C09FE783A679C2A930363F124770BAF9_gshared (Dictionary_2_t3BA8FCFE5DD25F2BB4BBAC4C3C306D4755C6003E * __this, ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Object,System.Int32>>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mE056997A7B964FEE6F5E66FC716137A9F4B06EBF_gshared (ValueTuple_2_t39C25CAE4F6CA469E896F7BC1066EE78949FD793 * __this, RuntimeObject * ___item10, ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00  ___item21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Object,System.Int32>>>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m58C1F2974F68E9509BA780AA5EBD509E43AD5666_gshared (List_1_tF02A82794DEE71696980759B59FE362CDFDC52BE * __this, ValueTuple_2_t39C25CAE4F6CA469E896F7BC1066EE78949FD793  ___item0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.DynamicArray`1<System.Object>::get_size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m0D404D0EDA77F50046B5592673CEADED3EB1DDF9_gshared_inline (DynamicArray_1_tBD159187A396D2634FDBCFD5A8F85F26FA3DF11D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.DynamicArray`1<System.Object>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_m3CEAE3B337E1361CC36C95D76BF653D9ADD630A2_gshared (DynamicArray_1_tBD159187A396D2634FDBCFD5A8F85F26FA3DF11D * __this, int32_t ___newSize0, bool ___keepContent1, const RuntimeMethod* method);
// T& UnityEngine.Rendering.DynamicArray`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject ** DynamicArray_1_get_Item_m9DBCD5716A0D525874606AF541FEC00329B69013_gshared (DynamicArray_1_tBD159187A396D2634FDBCFD5A8F85F26FA3DF11D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C  Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * GameObject_GetComponentsInternal_mF491A337A167109189E2AB839584697EB2672E7D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, Type_t * ___type0, bool ___useSearchTypeAsArrayReturnType1, bool ___recursive2, bool ___includeInactive3, bool ___reverse4, RuntimeObject * ___resultList5, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::TryGetComponentFastPath(System.Type,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_TryGetComponentFastPath_m45DE1DF12AFA1F21F16E0249A472A5FCEE6026FD (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, Type_t * ___type0, intptr_t ___oneFurtherThanResultValue1, const RuntimeMethod* method);
// System.Boolean System.Boolean::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Equals_mA2FC01AF136159906F30A85C950097BE67C824B8 (bool* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.LayoutGroup::SetDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_SetDirty_mCD44774BE69A93938EE1622CC13FFC2C16DDB021 (LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * __this, const RuntimeMethod* method);
// System.Boolean System.Int32::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_m5F032BFC65C340C98050D3DF2D76101914774464 (int32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m94AA41817D00A9347BD3565F6BB8993361B81EB1 (float* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_Equals_m67A842D914AA5A4DCC076E9EA20019925E6A85A0 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617 (String_t* ___key0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegateInternal(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegateInternal_m2E54B2DA0F4B8DDB47CDD4C619508F89D34C5027 (Delegate_t * ___d0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr(System.Object,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_m25366DC7AB7C32DBCD2E0113585848466F207954 (RuntimeObject * ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD (int32_t ___channel0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::get_canAccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_get_canAccess_m991B64F0FA651459A7E0DD4526D7EF0384F1792F (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::HasVertexAttribute(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_HasVertexAttribute_m55371DBBBA8C77FBF6404F0D7989C0C7BDE3275C (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___attr0, const RuntimeMethod* method);
// System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Mesh_GetAllocArrayFromChannelImpl_m9EC298F950FDC7F699CB02A265AAE1E1E580B541 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_PrintErrorCantAccessChannel_m39BB0FADC48525EAE52AA38AC8D7EE5BA650294C (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___ch0, const RuntimeMethod* method);
// System.Array UnityEngine.NoAllocHelpers::ExtractArrayFromList(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD (RuntimeObject * ___list0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::GetArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetArrayFromChannelImpl_m71BD9D5D72762ED7399D5662FE5DA4294102A6DA (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, RuntimeArray * ___values3, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_m1EF3DD16EE298B955311F53EA1CAF05007A7722F (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// UnityEngine.Rendering.VertexAttribute UnityEngine.Mesh::GetUVChannel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_GetUVChannel_m9566A8802F5B87D061A2812FEF94230F8EA1CBBF (int32_t ___uvIndex0, const RuntimeMethod* method);
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_m02DFDBC654748FCB895D2ADDC5E5C92415C3A4B2 (RuntimeArray * ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetSizedArrayForChannel(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Array,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, RuntimeArray * ___values3, int32_t ___valuesArrayLength4, int32_t ___valuesStart5, int32_t ___valuesCount6, int32_t ___flags7, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void UnityEngine.NoAllocHelpers::Internal_ResizeList(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_Internal_ResizeList_m32452578286848AD58CF77E1CA6B078492F723F6 (RuntimeObject * ___list0, int32_t ___size1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_FindObjectOfType_mFDEFCE84CE9C644F2B51DCC26CDAC78AC7E89B1B (Type_t * ___type0, bool ___includeInactive1, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* Object_FindObjectsOfType_m0AEB81CC6F1D224A6F4DCC7D553482D54FC03C5A (Type_t * ___type0, bool ___includeInactive1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_CheckNullArgument_mFA979ED3433CACA46AC9AE0029A537B46E17D080 (RuntimeObject * ___arg0, String_t* ___message1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Internal_CloneSingle_m6C669D602DFD7BC6C47ACA19B2F4D7C853F124BB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___data0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.UnityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8 (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Instantiate_mA9A37F53F535C1FE2603DC002263C85337C1FE18 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, bool ___instantiateInWorldSpace2, const RuntimeMethod* method);
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<System.Object>()
inline bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413_gshared)(__this, method);
}
// UnityEngine.Rendering.ProfilingSampler UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::GetDefaultProfilingSampler(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * RenderGraph_GetDefaultProfilingSampler_mFCAE3A77BB3900FA7DA7871573B251564B4C62C9 (RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass>::get_Count()
inline int32_t List_1_get_Count_mBD84A03FCAB5BB973EA9CD4416A507076ED9452D_inline (List_1_tE825566258696352A9BBDE7670E9B79137D429AC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE825566258696352A9BBDE7670E9B79137D429AC *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass>::Add(!0)
inline void List_1_Add_m20A5A34CECDE7CF47EE9FD1F719F184D13C28C84 (List_1_tE825566258696352A9BBDE7670E9B79137D429AC * __this, RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE825566258696352A9BBDE7670E9B79137D429AC *, RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::.ctor(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass,UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry,UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderGraphBuilder__ctor_m0FABCFE9B3F1BC64796DCD5935A7DFFD84F08764 (RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056 * __this, RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 * ___renderPass0, RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * ___resources1, RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * ___renderGraph2, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::SetRenderFunc<System.Object>(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<PassData>)
inline void RenderGraphBuilder_SetRenderFunc_TisRuntimeObject_mD39730A1B58C57688FB5F66270351E97802AC77E (RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056 * __this, RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C * ___renderFunc0, const RuntimeMethod* method)
{
	((  void (*) (RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056 *, RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C *, const RuntimeMethod*))RenderGraphBuilder_SetRenderFunc_TisRuntimeObject_mD39730A1B58C57688FB5F66270351E97802AC77E_gshared)(__this, ___renderFunc0, method);
}
// System.Void System.ValueTuple`2<System.Type,System.Int32>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_mE6F93DA1C3D33EECE3A273ACEB55E9A51D17D1A3 (ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B * __this, Type_t * ___item10, int32_t ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B *, Type_t *, int32_t, const RuntimeMethod*))ValueTuple_2__ctor_m952595B933EB872D25BDD85DFFD79A83ABAB15EB_gshared)(__this, ___item10, ___item21, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m105EB83275DBE11D491CC225AC0B61C464EDA6C4 (Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 * __this, ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B  ___key0, Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 *, ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B , Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m36DACFC2D41C596A7D378E2BD4C9B7C422C1919C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
inline void Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *, const RuntimeMethod*))Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>>::Add(!0,!1)
inline void Dictionary_2_Add_mDAA960915A2AC9EB90B8C182EDF0AAA4F2B1F2DA (Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 * __this, ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B  ___key0, Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 *, ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B , Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *, const RuntimeMethod*))Dictionary_2_Add_m9E4426A1C09FE783A679C2A930363F124770BAF9_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
inline int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *, const RuntimeMethod*))Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
inline RuntimeObject * Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12 (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// System.Void System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_m41AF3144A52DC18C08176F88B4C22B912252C905 (ValueTuple_2_t948DF4724E45CFD2CFEE4CD891EF7F2C2C7B59BE * __this, RuntimeObject * ___item10, ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B  ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t948DF4724E45CFD2CFEE4CD891EF7F2C2C7B59BE *, RuntimeObject *, ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B , const RuntimeMethod*))ValueTuple_2__ctor_mE056997A7B964FEE6F5E66FC716137A9F4B06EBF_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>>::Add(!0)
inline void List_1_Add_m3420715C3175CF376D362051503A0C7A82A29792 (List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91 * __this, ValueTuple_2_t948DF4724E45CFD2CFEE4CD891EF7F2C2C7B59BE  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91 *, ValueTuple_2_t948DF4724E45CFD2CFEE4CD891EF7F2C2C7B59BE , const RuntimeMethod*))List_1_Add_m58C1F2974F68E9509BA780AA5EBD509E43AD5666_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource>::get_size()
inline int32_t DynamicArray_1_get_size_m97FC055466349D558BE16DF3226963D5EE56E22E_inline (DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 *, const RuntimeMethod*))DynamicArray_1_get_size_m0D404D0EDA77F50046B5592673CEADED3EB1DDF9_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource>::Resize(System.Int32,System.Boolean)
inline void DynamicArray_1_Resize_m3B2CC8B31ECD5B9997CC42866E7E5C70BF08C563 (DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 * __this, int32_t ___newSize0, bool ___keepContent1, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 *, int32_t, bool, const RuntimeMethod*))DynamicArray_1_Resize_m3CEAE3B337E1361CC36C95D76BF653D9ADD630A2_gshared)(__this, ___newSize0, ___keepContent1, method);
}
// T& UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource>::get_Item(System.Int32)
inline IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03 ** DynamicArray_1_get_Item_m71FE70254B518D98093BE39B8320F7EDC6D920FA (DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03 ** (*) (DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 *, int32_t, const RuntimeMethod*))DynamicArray_1_get_Item_m9DBCD5716A0D525874606AF541FEC00329B69013_gshared)(__this, ___index0, method);
}
// UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_GetBuiltinResource_m59A7993A48D44A0002E532B7DD79BDA426E0C8A6 (Type_t * ___type0, String_t* ___path1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C (String_t* ___path0, Type_t * ___systemTypeInstance1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.RuntimeTypeHandle::HasReferences(System.RuntimeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeHandle_HasReferences_m4838780BFA354CC3379547DE1595EA5D865D7DC2 (RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___type0, const RuntimeMethod* method);
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ScriptableObject_CreateInstance_m5371BDC0B4F60FE15914A7BB3FBE07D0ACA0A8D4 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::ReportSingleSubsystemAnalytics(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_ReportSingleSubsystemAnalytics_m8DD2291586A77B073F3AF1E84F66C3AE77F5872D (String_t* ___id0, const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5 (int32_t ___argument0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m6380C7449537F99361797225E179A9448A53DDF9 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::GetEnumerator()
inline Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5  Dictionary_2_GetEnumerator_mAF5ECE514EBBFDF70BC04B74C22FCA11AE8F50F2 (Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5  (*) (Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::get_Current()
inline KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  Enumerator_get_Current_m8AAB63E2716F881CEFF7994A1FC27D1D6D5D0B35_inline (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  (*) (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *, const RuntimeMethod*))Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m592B3F212F5C1D9FD3FBAB391854B3487FA569C7_inline (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::get_Value()
inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * KeyValuePair_2_get_Value_mDD65420B0C51E00EEE7174BC1A9CFB71EEB0D662_inline (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 * __this, const RuntimeMethod* method)
{
	return ((  List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * (*) (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>::GetEnumerator()
inline Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5  List_1_GetEnumerator_mEA25DFFCAB673BD76ADA473172AD1E090CD3B1E8 (List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5  (*) (List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Volume>::get_Current()
inline Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * Enumerator_get_Current_mBE0C626E2FD3A12EB78158C34DC7E59DA8B5B01D_inline (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 * __this, const RuntimeMethod* method)
{
	return ((  Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * (*) (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// UnityEngine.Rendering.VolumeProfile UnityEngine.Rendering.Volume::get_profileRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * Volume_get_profileRef_mD5E838C1AF9D9910187C2A26004E32813359618C (Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Volume>::MoveNext()
inline bool Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692 (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::MoveNext()
inline bool Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *, const RuntimeMethod*))Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared)(__this, method);
}
// UnityEngine.Rendering.VolumeComponent UnityEngine.Rendering.VolumeProfile::Add(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * VolumeProfile_Add_m79223D2CF959C9E6D63D9FF846FF1B6A3B00FD10 (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, bool ___overrides1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.VolumeProfile::Has(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_Has_m4B7E73066F4F7D7A45656DA57A7C994260BD089D (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.VolumeProfile::Remove(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeProfile_Remove_m932397236384F0E991CE7113270E019856DB5E86 (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>::GetEnumerator()
inline Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42 (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  (*) (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.VolumeComponent>::get_Current()
inline VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_inline (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB * __this, const RuntimeMethod* method)
{
	return ((  VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * (*) (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.VolumeComponent>::MoveNext()
inline bool Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143 (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// UnityEngine.Rendering.VolumeComponent UnityEngine.Rendering.VolumeStack::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * VolumeStack_GetComponent_m2C8AE635D2EE506EE0C2C436D6F5017DB10B288E (VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponentsInChildren_TisRuntimeObject_m469A375D3582C80E94A37018DAA2444835E1CFFA_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___includeInactive0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___results1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = ___results1;
		NullCheck((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)__this);
		RuntimeArray * L_4;
		L_4 = GameObject_GetComponentsInternal_mF491A337A167109189E2AB839584697EB2672E7D((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)0, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInParent<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInParent_TisRuntimeObject_m4D9AC647B13622CF251DFF2A5972DB1587B0A460_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)__this);
		RuntimeArray * L_3;
		L_3 = GameObject_GetComponentsInternal_mF491A337A167109189E2AB839584697EB2672E7D((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)1, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001e;
	}

IL_001e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_0;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4;
	}
}
// System.Void UnityEngine.GameObject::GetComponentsInParent<System.Object>(System.Boolean,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponentsInParent_TisRuntimeObject_m2D7CE0BF5A3EC0BCB8712046532540C2301F14E9_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___includeInactive0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___results1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = ___results1;
		NullCheck((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)__this);
		RuntimeArray * L_4;
		L_4 = GameObject_GetComponentsInternal_mF491A337A167109189E2AB839584697EB2672E7D((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)1, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_mC7639C3E3E2A65695113BCF25718826CC392D6CB_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CastHelper_1_t400AF56AA9238C56F8214A792C1EEE068C22774C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CastHelper_1_t400AF56AA9238C56F8214A792C1EEE068C22774C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		intptr_t* L_2 = (intptr_t*)(&V_0)->get_address_of_onePointerFurtherThanT_1();
		intptr_t L_3;
		memset((&L_3), 0, sizeof(L_3));
		IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline((&L_3), (void*)(void*)((uintptr_t)L_2), /*hidden argument*/NULL);
		NullCheck((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)__this);
		GameObject_TryGetComponentFastPath_m45DE1DF12AFA1F21F16E0249A472A5FCEE6026FD((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)__this, (Type_t *)L_1, (intptr_t)L_3, /*hidden argument*/NULL);
		RuntimeObject ** L_4 = ___component0;
		CastHelper_1_t400AF56AA9238C56F8214A792C1EEE068C22774C  L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5.get_t_0();
		*(RuntimeObject **)L_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_4, (void*)L_6);
		CastHelper_1_t400AF56AA9238C56F8214A792C1EEE068C22774C  L_7 = V_0;
		RuntimeObject * L_8 = (RuntimeObject *)L_7.get_t_0();
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_8) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0044;
	}

IL_0044:
	{
		bool L_9 = V_1;
		return (bool)L_9;
	}
}
// T System.Runtime.CompilerServices.JitHelpers::UnsafeCast<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JitHelpers_UnsafeCast_TisRuntimeObject_mE5D7E7B5D9C22297535060FA6A3D41DC34404E2B_gshared (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___o0;
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// System.Int32 System.Runtime.CompilerServices.JitHelpers::UnsafeEnumCast<System.Int32Enum>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JitHelpers_UnsafeEnumCast_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mA11DB4645EBC118E291088E5D323304063175F03_gshared (int32_t ___val0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___val0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (int32_t)L_1;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<System.Boolean>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_SetProperty_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m88395C29A6EA8BFE2560A63BBDCF040F948A5C90_gshared (LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * __this, bool* ___currentValue0, bool ___newValue1, const RuntimeMethod* method)
{
	{
		// if ((currentValue == null && newValue == null) || (currentValue != null && currentValue.Equals(newValue)))
		goto IL_0015;
	}
	{
	}

IL_0015:
	{
	}
	{
		bool* L_3 = ___currentValue0;
		bool L_4 = ___newValue1;
		bool L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_5);
		bool L_7;
		L_7 = Boolean_Equals_mA2FC01AF136159906F30A85C950097BE67C824B8((bool*)(bool*)L_3, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		// return;
		return;
	}

IL_0037:
	{
		// currentValue = newValue;
		bool* L_8 = ___currentValue0;
		bool L_9 = ___newValue1;
		*(bool*)L_8 = L_9;
		// SetDirty();
		NullCheck((LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 *)__this);
		LayoutGroup_SetDirty_mCD44774BE69A93938EE1622CC13FFC2C16DDB021((LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 *)__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<System.Int32>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_SetProperty_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD8E9383D2E5B81927009D99512C7D7C59C67592B_gshared (LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * __this, int32_t* ___currentValue0, int32_t ___newValue1, const RuntimeMethod* method)
{
	{
		// if ((currentValue == null && newValue == null) || (currentValue != null && currentValue.Equals(newValue)))
		goto IL_0015;
	}
	{
	}

IL_0015:
	{
	}
	{
		int32_t* L_3 = ___currentValue0;
		int32_t L_4 = ___newValue1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_5);
		bool L_7;
		L_7 = Int32_Equals_m5F032BFC65C340C98050D3DF2D76101914774464((int32_t*)(int32_t*)L_3, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		// return;
		return;
	}

IL_0037:
	{
		// currentValue = newValue;
		int32_t* L_8 = ___currentValue0;
		int32_t L_9 = ___newValue1;
		*(int32_t*)L_8 = L_9;
		// SetDirty();
		NullCheck((LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 *)__this);
		LayoutGroup_SetDirty_mCD44774BE69A93938EE1622CC13FFC2C16DDB021((LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 *)__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<System.Int32Enum>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_SetProperty_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m8BF1B5D7F7C3F34DBE9707048D24FAE77758ACBE_gshared (LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * __this, int32_t* ___currentValue0, int32_t ___newValue1, const RuntimeMethod* method)
{
	{
		// if ((currentValue == null && newValue == null) || (currentValue != null && currentValue.Equals(newValue)))
		goto IL_0015;
	}
	{
	}

IL_0015:
	{
	}
	{
		int32_t* L_3 = ___currentValue0;
		int32_t L_4 = ___newValue1;
		int32_t L_5 = (int32_t)L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_5);
		Il2CppFakeBox<int32_t> L_7(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_3);
		bool L_8;
		L_8 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)(&L_7), (RuntimeObject *)L_6);
		if (!L_8)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		// return;
		return;
	}

IL_0037:
	{
		// currentValue = newValue;
		int32_t* L_9 = ___currentValue0;
		int32_t L_10 = ___newValue1;
		*(int32_t*)L_9 = L_10;
		// SetDirty();
		NullCheck((LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 *)__this);
		LayoutGroup_SetDirty_mCD44774BE69A93938EE1622CC13FFC2C16DDB021((LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 *)__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_SetProperty_TisRuntimeObject_m80CF8596999576E79458F1FE5889D9D43039163D_gshared (LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * __this, RuntimeObject ** ___currentValue0, RuntimeObject * ___newValue1, const RuntimeMethod* method)
{
	{
		// if ((currentValue == null && newValue == null) || (currentValue != null && currentValue.Equals(newValue)))
		RuntimeObject ** L_0 = ___currentValue0;
		RuntimeObject * L_1 = (*(RuntimeObject **)L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_2 = ___newValue1;
		if (!L_2)
		{
			goto IL_0036;
		}
	}

IL_0015:
	{
		RuntimeObject ** L_3 = ___currentValue0;
		RuntimeObject * L_4 = (*(RuntimeObject **)L_3);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject ** L_5 = ___currentValue0;
		RuntimeObject * L_6 = ___newValue1;
		NullCheck((RuntimeObject *)(*L_5));
		bool L_7;
		L_7 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)(*L_5), (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		// return;
		return;
	}

IL_0037:
	{
		// currentValue = newValue;
		RuntimeObject ** L_8 = ___currentValue0;
		RuntimeObject * L_9 = ___newValue1;
		*(RuntimeObject **)L_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_8, (void*)L_9);
		// SetDirty();
		NullCheck((LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 *)__this);
		LayoutGroup_SetDirty_mCD44774BE69A93938EE1622CC13FFC2C16DDB021((LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 *)__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<System.Single>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_SetProperty_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA2FF0A5AE801588063BF17FB259105E648824C58_gshared (LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * __this, float* ___currentValue0, float ___newValue1, const RuntimeMethod* method)
{
	{
		// if ((currentValue == null && newValue == null) || (currentValue != null && currentValue.Equals(newValue)))
		goto IL_0015;
	}
	{
	}

IL_0015:
	{
	}
	{
		float* L_3 = ___currentValue0;
		float L_4 = ___newValue1;
		float L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_5);
		bool L_7;
		L_7 = Single_Equals_m94AA41817D00A9347BD3565F6BB8993361B81EB1((float*)(float*)L_3, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		// return;
		return;
	}

IL_0037:
	{
		// currentValue = newValue;
		float* L_8 = ___currentValue0;
		float L_9 = ___newValue1;
		*(float*)L_8 = L_9;
		// SetDirty();
		NullCheck((LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 *)__this);
		LayoutGroup_SetDirty_mCD44774BE69A93938EE1622CC13FFC2C16DDB021((LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 *)__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<UnityEngine.Vector2>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_SetProperty_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mFBD9D31482C7844D214F6CA82C503DCC98F6DF7C_gshared (LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___currentValue0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newValue1, const RuntimeMethod* method)
{
	{
		// if ((currentValue == null && newValue == null) || (currentValue != null && currentValue.Equals(newValue)))
		goto IL_0015;
	}
	{
	}

IL_0015:
	{
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = ___currentValue0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___newValue1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_5);
		bool L_7;
		L_7 = Vector2_Equals_m67A842D914AA5A4DCC076E9EA20019925E6A85A0((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_3, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		// return;
		return;
	}

IL_0037:
	{
		// currentValue = newValue;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_8 = ___currentValue0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___newValue1;
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_8 = L_9;
		// SetDirty();
		NullCheck((LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 *)__this);
		LayoutGroup_SetDirty_mCD44774BE69A93938EE1622CC13FFC2C16DDB021((LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 *)__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// T System.Threading.LazyInitializer::EnsureInitialized<System.Object>(T&,System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * LazyInitializer_EnsureInitialized_TisRuntimeObject_m295572D278D9B41F229DFDF6B9ED0052DDAE0990_gshared (RuntimeObject ** ___target0, Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___valueFactory1, const RuntimeMethod* method)
{
	{
		RuntimeObject ** L_0 = ___target0;
		RuntimeObject * L_1;
		L_1 = VolatileRead((RuntimeObject **)(RuntimeObject **)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject ** L_2 = ___target0;
		RuntimeObject * L_3 = (*(RuntimeObject **)L_2);
		return (RuntimeObject *)L_3;
	}

IL_0014:
	{
		RuntimeObject ** L_4 = ___target0;
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_5 = ___valueFactory1;
		RuntimeObject * L_6;
		L_6 = ((  RuntimeObject * (*) (RuntimeObject **, Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_4, (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return (RuntimeObject *)L_6;
	}
}
// T System.Threading.LazyInitializer::EnsureInitializedCore<System.Object>(T&,System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * LazyInitializer_EnsureInitializedCore_TisRuntimeObject_mF6E2AC2A0E7F00ED11C0A584EDF5C4095BBD4745_gshared (RuntimeObject ** ___target0, Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___valueFactory1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_0 = ___valueFactory1;
		NullCheck((Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)L_0);
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_3;
		L_3 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE958A63C0675D65C92182FC45CE3E78A8DD48061)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LazyInitializer_EnsureInitializedCore_TisRuntimeObject_mF6E2AC2A0E7F00ED11C0A584EDF5C4095BBD4745_RuntimeMethod_var)));
	}

IL_001f:
	{
		RuntimeObject ** L_5 = ___target0;
		RuntimeObject * L_6 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_7 = V_1;
		RuntimeObject * L_8;
		L_8 = InterlockedCompareExchangeImpl<RuntimeObject *>((RuntimeObject **)(RuntimeObject **)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_7);
		RuntimeObject ** L_9 = ___target0;
		RuntimeObject * L_10 = (*(RuntimeObject **)L_9);
		return (RuntimeObject *)L_10;
	}
}
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<System.Object>(TDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m352EF9B202EE82C0ACF5978B202F0F2F5E48D2EE_gshared (RuntimeObject * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___d0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m352EF9B202EE82C0ACF5978B202F0F2F5E48D2EE_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject * L_2 = ___d0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = Marshal_GetFunctionPointerForDelegateInternal_m2E54B2DA0F4B8DDB47CDD4C619508F89D34C5027((Delegate_t *)((Delegate_t *)Castclass((RuntimeObject*)L_2, Delegate_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (intptr_t)L_3;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<System.Object>(T,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisRuntimeObject_m7B56EC687E17BCB95ADBF9F0DF45F0BFCBC73075_gshared (RuntimeObject * ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___structure0;
		intptr_t L_1 = ___ptr1;
		bool L_2 = ___fDeleteOld2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_StructureToPtr_m25366DC7AB7C32DBCD2E0113585848466F207954((RuntimeObject *)L_0, (intptr_t)L_1, (bool)L_2, /*hidden argument*/NULL);
		return;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_mB245F0443969F9BA94D63955634890516E04578D_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_0;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Mesh_GetAllocArrayFromChannel_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mA1BECCEFD7D5C525E52D3E4773958B1FBB08FE4B_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3;
		L_3 = ((  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* (*) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = V_0;
		return (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* Mesh_GetAllocArrayFromChannel_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mD0051F8BAF0F5FBE57BBE83DFCF42E2FC97A32A7_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_3;
		L_3 = ((  Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* (*) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_4 = V_0;
		return (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color32>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* Mesh_GetAllocArrayFromChannel_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m62A3B3E7D90C10A916CD77BCE93229D59AE37647_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* V_2 = NULL;
	{
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		bool L_0;
		L_0 = Mesh_get_canAccess_m991B64F0FA651459A7E0DD4526D7EF0384F1792F((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		bool L_3;
		L_3 = Mesh_HasVertexAttribute_m55371DBBBA8C77FBF6404F0D7989C0C7BDE3275C((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		RuntimeArray * L_8;
		L_8 = Mesh_GetAllocArrayFromChannelImpl_m9EC298F950FDC7F699CB02A265AAE1E1E580B541((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)((Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Mesh_PrintErrorCantAccessChannel_m39BB0FADC48525EAE52AA38AC8D7EE5BA650294C((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_10 = (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_11 = V_2;
		return (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_mEEC31A492FDC2B5EED4D79646A7D234C78B7537B_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	{
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		bool L_0;
		L_0 = Mesh_get_canAccess_m991B64F0FA651459A7E0DD4526D7EF0384F1792F((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		bool L_3;
		L_3 = Mesh_HasVertexAttribute_m55371DBBBA8C77FBF6404F0D7989C0C7BDE3275C((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		RuntimeArray * L_8;
		L_8 = Mesh_GetAllocArrayFromChannelImpl_m9EC298F950FDC7F699CB02A265AAE1E1E580B541((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Mesh_PrintErrorCantAccessChannel_m39BB0FADC48525EAE52AA38AC8D7EE5BA650294C((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = V_2;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Mesh_GetAllocArrayFromChannel_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBC6DF07330515EEE2EA0951C21E7A756C6AAB048_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_2 = NULL;
	{
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		bool L_0;
		L_0 = Mesh_get_canAccess_m991B64F0FA651459A7E0DD4526D7EF0384F1792F((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		bool L_3;
		L_3 = Mesh_HasVertexAttribute_m55371DBBBA8C77FBF6404F0D7989C0C7BDE3275C((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		RuntimeArray * L_8;
		L_8 = Mesh_GetAllocArrayFromChannelImpl_m9EC298F950FDC7F699CB02A265AAE1E1E580B541((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Mesh_PrintErrorCantAccessChannel_m39BB0FADC48525EAE52AA38AC8D7EE5BA650294C((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_10 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_11 = V_2;
		return (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* Mesh_GetAllocArrayFromChannel_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m985E71330FA9966B4416AD22CDDD8D98C5D44046_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* V_2 = NULL;
	{
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		bool L_0;
		L_0 = Mesh_get_canAccess_m991B64F0FA651459A7E0DD4526D7EF0384F1792F((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		bool L_3;
		L_3 = Mesh_HasVertexAttribute_m55371DBBBA8C77FBF6404F0D7989C0C7BDE3275C((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		RuntimeArray * L_8;
		L_8 = Mesh_GetAllocArrayFromChannelImpl_m9EC298F950FDC7F699CB02A265AAE1E1E580B541((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)((Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Mesh_PrintErrorCantAccessChannel_m39BB0FADC48525EAE52AA38AC8D7EE5BA650294C((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_10 = (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_11 = V_2;
		return (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)L_11;
	}
}
// System.Void UnityEngine.Mesh::GetListForChannel<System.Object>(System.Collections.Generic.List`1<T>,System.Int32,UnityEngine.Rendering.VertexAttribute,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetListForChannel_TisRuntimeObject_mC78E7EFA32A3306F9BF0CDC07B88B700B627BA8F_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___buffer0, int32_t ___capacity1, int32_t ___channel2, int32_t ___dim3, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___buffer0;
		int32_t L_1 = ___capacity1;
		int32_t L_2 = ___channel2;
		int32_t L_3 = ___dim3;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		((  void (*) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (int32_t)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Mesh::GetListForChannel<UnityEngine.Vector4>(System.Collections.Generic.List`1<T>,System.Int32,UnityEngine.Rendering.VertexAttribute,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetListForChannel_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m0F29A6B636BAD4452D28B741F80A48580579705C_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___buffer0, int32_t ___capacity1, int32_t ___channel2, int32_t ___dim3, const RuntimeMethod* method)
{
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_0 = ___buffer0;
		int32_t L_1 = ___capacity1;
		int32_t L_2 = ___channel2;
		int32_t L_3 = ___dim3;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		((  void (*) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_0, (int32_t)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Mesh::GetListForChannel<System.Object>(System.Collections.Generic.List`1<T>,System.Int32,UnityEngine.Rendering.VertexAttribute,System.Int32,UnityEngine.Rendering.VertexAttributeFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetListForChannel_TisRuntimeObject_m72432453B9F4519B76A485A18AF4C2281721C5E7_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___buffer0, int32_t ___capacity1, int32_t ___channel2, int32_t ___dim3, int32_t ___channelType4, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___buffer0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0);
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		bool L_1;
		L_1 = Mesh_get_canAccess_m991B64F0FA651459A7E0DD4526D7EF0384F1792F((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___channel2;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Mesh_PrintErrorCantAccessChannel_m39BB0FADC48525EAE52AA38AC8D7EE5BA650294C((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_3, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_0020:
	{
		int32_t L_4 = ___channel2;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		bool L_5;
		L_5 = Mesh_HasVertexAttribute_m55371DBBBA8C77FBF6404F0D7989C0C7BDE3275C((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_4, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		goto IL_004a;
	}

IL_0030:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_7 = ___buffer0;
		int32_t L_8 = ___capacity1;
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_9 = ___channel2;
		int32_t L_10 = ___channelType4;
		int32_t L_11 = ___dim3;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_12 = ___buffer0;
		RuntimeArray * L_13;
		L_13 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_12, /*hidden argument*/NULL);
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Mesh_GetArrayFromChannelImpl_m71BD9D5D72762ED7399D5662FE5DA4294102A6DA((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_9, (int32_t)L_10, (int32_t)L_11, (RuntimeArray *)L_13, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void UnityEngine.Mesh::GetListForChannel<UnityEngine.Vector4>(System.Collections.Generic.List`1<T>,System.Int32,UnityEngine.Rendering.VertexAttribute,System.Int32,UnityEngine.Rendering.VertexAttributeFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetListForChannel_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m9D1E28570C4FFE03FDFC25051E3CB60B5FF4C489_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___buffer0, int32_t ___capacity1, int32_t ___channel2, int32_t ___dim3, int32_t ___channelType4, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_0 = ___buffer0;
		NullCheck((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_0);
		((  void (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		bool L_1;
		L_1 = Mesh_get_canAccess_m991B64F0FA651459A7E0DD4526D7EF0384F1792F((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___channel2;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Mesh_PrintErrorCantAccessChannel_m39BB0FADC48525EAE52AA38AC8D7EE5BA650294C((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_3, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_0020:
	{
		int32_t L_4 = ___channel2;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		bool L_5;
		L_5 = Mesh_HasVertexAttribute_m55371DBBBA8C77FBF6404F0D7989C0C7BDE3275C((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_4, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		goto IL_004a;
	}

IL_0030:
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_7 = ___buffer0;
		int32_t L_8 = ___capacity1;
		((  void (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_9 = ___channel2;
		int32_t L_10 = ___channelType4;
		int32_t L_11 = ___dim3;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_12 = ___buffer0;
		RuntimeArray * L_13;
		L_13 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_12, /*hidden argument*/NULL);
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Mesh_GetArrayFromChannelImpl_m71BD9D5D72762ED7399D5662FE5DA4294102A6DA((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_9, (int32_t)L_10, (int32_t)L_11, (RuntimeArray *)L_13, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void UnityEngine.Mesh::GetUVsImpl<System.Object>(System.Int32,System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetUVsImpl_TisRuntimeObject_m33E2C32D3A30A11CD4EBB8F1283C090427CC4439_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___uvIndex0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___uvs1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___uvs1;
		V_0 = (bool)((((RuntimeObject*)(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB76C1A87204BBFDC1EB8755ECBEA3E6B651710A2)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7ECFB57A0D1B5CE741045B6B75AB6521BC5B5C0F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Mesh_GetUVsImpl_TisRuntimeObject_m33E2C32D3A30A11CD4EBB8F1283C090427CC4439_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___uvIndex0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = ___uvIndex0;
		G_B5_0 = ((((int32_t)L_4) > ((int32_t)7))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 1;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_6 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF(L_6, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Mesh_GetUVsImpl_TisRuntimeObject_m33E2C32D3A30A11CD4EBB8F1283C090427CC4439_RuntimeMethod_var)));
	}

IL_0033:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_7 = ___uvs1;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		int32_t L_8;
		L_8 = Mesh_get_vertexCount_m1EF3DD16EE298B955311F53EA1CAF05007A7722F((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, /*hidden argument*/NULL);
		int32_t L_9 = ___uvIndex0;
		int32_t L_10;
		L_10 = Mesh_GetUVChannel_m9566A8802F5B87D061A2812FEF94230F8EA1CBBF((int32_t)L_9, /*hidden argument*/NULL);
		int32_t L_11 = ___dim2;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		((  void (*) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_7, (int32_t)L_8, (int32_t)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Mesh::GetUVsImpl<UnityEngine.Vector4>(System.Int32,System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetUVsImpl_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mDF630E82000E431DB71B3ADC7922E47379D02F98_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___uvIndex0, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___uvs1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_0 = ___uvs1;
		V_0 = (bool)((((RuntimeObject*)(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB76C1A87204BBFDC1EB8755ECBEA3E6B651710A2)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7ECFB57A0D1B5CE741045B6B75AB6521BC5B5C0F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Mesh_GetUVsImpl_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mDF630E82000E431DB71B3ADC7922E47379D02F98_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___uvIndex0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = ___uvIndex0;
		G_B5_0 = ((((int32_t)L_4) > ((int32_t)7))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 1;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_6 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF(L_6, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Mesh_GetUVsImpl_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mDF630E82000E431DB71B3ADC7922E47379D02F98_RuntimeMethod_var)));
	}

IL_0033:
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_7 = ___uvs1;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		int32_t L_8;
		L_8 = Mesh_get_vertexCount_m1EF3DD16EE298B955311F53EA1CAF05007A7722F((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, /*hidden argument*/NULL);
		int32_t L_9 = ___uvIndex0;
		int32_t L_10;
		L_10 = Mesh_GetUVChannel_m9566A8802F5B87D061A2812FEF94230F8EA1CBBF((int32_t)L_9, /*hidden argument*/NULL);
		int32_t L_11 = ___dim2;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		((  void (*) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_7, (int32_t)L_8, (int32_t)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Mesh::SetArrayForChannel<System.Object>(UnityEngine.Rendering.VertexAttribute,T[],UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetArrayForChannel_TisRuntimeObject_m0A8CBFC3581D67AF0480F148A59D3A7E62932D05_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values1, int32_t ___flags2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___values1;
		int32_t L_1;
		L_1 = NoAllocHelpers_SafeLength_m02DFDBC654748FCB895D2ADDC5E5C92415C3A4B2((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = ___channel0;
		int32_t L_3 = ___channel0;
		int32_t L_4;
		L_4 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_3, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = ___values1;
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = ___flags2;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_2, (int32_t)0, (int32_t)L_4, (RuntimeArray *)(RuntimeArray *)L_5, (int32_t)L_6, (int32_t)0, (int32_t)L_7, (int32_t)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetArrayForChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute,T[],UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetArrayForChannel_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m45BC8B72341AD1B7DE819CADBAF9F8C1CA545442_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___values1, int32_t ___flags2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = ___values1;
		int32_t L_1;
		L_1 = NoAllocHelpers_SafeLength_m02DFDBC654748FCB895D2ADDC5E5C92415C3A4B2((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = ___channel0;
		int32_t L_3 = ___channel0;
		int32_t L_4;
		L_4 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_3, /*hidden argument*/NULL);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_5 = ___values1;
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = ___flags2;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_2, (int32_t)0, (int32_t)L_4, (RuntimeArray *)(RuntimeArray *)L_5, (int32_t)L_6, (int32_t)0, (int32_t)L_7, (int32_t)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetArrayForChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute,T[],UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetArrayForChannel_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m6A27CE685F588E51266F250EFE420647DB41D4CE_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___values1, int32_t ___flags2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ___values1;
		int32_t L_1;
		L_1 = NoAllocHelpers_SafeLength_m02DFDBC654748FCB895D2ADDC5E5C92415C3A4B2((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = ___channel0;
		int32_t L_3 = ___channel0;
		int32_t L_4;
		L_4 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_3, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_5 = ___values1;
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = ___flags2;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_2, (int32_t)0, (int32_t)L_4, (RuntimeArray *)(RuntimeArray *)L_5, (int32_t)L_6, (int32_t)0, (int32_t)L_7, (int32_t)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<System.Object>(UnityEngine.Rendering.VertexAttribute,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisRuntimeObject_m53F276AA50F88E78041E2DBB46D4449C8E081A9F_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___values1, int32_t ___start2, int32_t ___length3, int32_t ___flags4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_1, /*hidden argument*/NULL);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = ___values1;
		RuntimeArray * L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___values1;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_7 = ___start2;
		int32_t L_8 = ___length3;
		int32_t L_9 = ___flags4;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m2938681F73D85BF97FFB78694899872748850BB1_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___values1, int32_t ___start2, int32_t ___length3, int32_t ___flags4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_1, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_3 = ___values1;
		RuntimeArray * L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_5 = ___values1;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_7 = ___start2;
		int32_t L_8 = ___length3;
		int32_t L_9 = ___flags4;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m27B42528C124019912FCAE667B57E21E2D6A3CA6_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___values1, int32_t ___start2, int32_t ___length3, int32_t ___flags4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_1, /*hidden argument*/NULL);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_3 = ___values1;
		RuntimeArray * L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_5 = ___values1;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_7 = ___start2;
		int32_t L_8 = ___length3;
		int32_t L_9 = ___flags4;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<UnityEngine.Color32>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m4F37FAE52CA9B894A889CD49C4E82BFD9AE204A4_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___values3, int32_t ___start4, int32_t ___length5, int32_t ___flags6, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___format1;
		int32_t L_2 = ___dim2;
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_3 = ___values3;
		RuntimeArray * L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_5 = ___values3;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_7 = ___start4;
		int32_t L_8 = ___length5;
		int32_t L_9 = ___flags6;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)L_1, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<System.Object>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisRuntimeObject_m103E72D2B0BAAC576A1F271315A8AB752B2E225A_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___values3, int32_t ___start4, int32_t ___length5, int32_t ___flags6, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___format1;
		int32_t L_2 = ___dim2;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = ___values3;
		RuntimeArray * L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___values3;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_7 = ___start4;
		int32_t L_8 = ___length5;
		int32_t L_9 = ___flags6;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)L_1, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m19373092AF57249D933E7F25EEAD42128473FBA2_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___values3, int32_t ___start4, int32_t ___length5, int32_t ___flags6, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___format1;
		int32_t L_2 = ___dim2;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_3 = ___values3;
		RuntimeArray * L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_5 = ___values3;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_7 = ___start4;
		int32_t L_8 = ___length5;
		int32_t L_9 = ___flags6;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)L_1, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetUvsImpl<System.Object>(System.Int32,System.Int32,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUvsImpl_TisRuntimeObject_m0294ADCE7BB220AD5E98FFCDB4622FDC4793672A_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___uvIndex0, int32_t ___dim1, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___uvs2, int32_t ___start3, int32_t ___length4, int32_t ___flags5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___uvIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___uvIndex0;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)7))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485((RuntimeObject *)_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001e:
	{
		int32_t L_3 = ___uvIndex0;
		int32_t L_4;
		L_4 = Mesh_GetUVChannel_m9566A8802F5B87D061A2812FEF94230F8EA1CBBF((int32_t)L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___dim1;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_6 = ___uvs2;
		int32_t L_7 = ___start3;
		int32_t L_8 = ___length4;
		int32_t L_9 = ___flags5;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		((  void (*) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t, int32_t, int32_t, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_4, (int32_t)0, (int32_t)L_5, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_0034:
	{
		return;
	}
}
// System.Void UnityEngine.Mesh::SetUvsImpl<UnityEngine.Vector4>(System.Int32,System.Int32,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUvsImpl_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m39E92F4F2539677FCCAE08110A6E6E8DE90B3D49_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___uvIndex0, int32_t ___dim1, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___uvs2, int32_t ___start3, int32_t ___length4, int32_t ___flags5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___uvIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___uvIndex0;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)7))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485((RuntimeObject *)_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001e:
	{
		int32_t L_3 = ___uvIndex0;
		int32_t L_4;
		L_4 = Mesh_GetUVChannel_m9566A8802F5B87D061A2812FEF94230F8EA1CBBF((int32_t)L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___dim1;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_6 = ___uvs2;
		int32_t L_7 = ___start3;
		int32_t L_8 = ___length4;
		int32_t L_9 = ___flags5;
		NullCheck((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this);
		((  void (*) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t, int32_t, int32_t, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_4, (int32_t)0, (int32_t)L_5, (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_0034:
	{
		return;
	}
}
// System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MonoProperty_GetterAdapterFrame_TisRuntimeObject_TisRuntimeObject_m7E0F1D5DA7FDD458A16B131533A7FD24BA18D940_gshared (Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB * ___getter0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	{
		Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB * L_0 = ___getter0;
		RuntimeObject * L_1 = ___obj1;
		NullCheck((Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB *)L_0);
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB *)L_0, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (RuntimeObject *)L_2;
	}
}
// System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MonoProperty_StaticGetterAdapterFrame_TisRuntimeObject_m2EE1D441E2AEA6D2854D346C8B560080195E3703_gshared (StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 * ___getter0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	{
		StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 * L_0 = ___getter0;
		NullCheck((StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 *)L_0);
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m9A0BB9B3BA978D85C803B4FF986618C9ED0A646C_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  L_3 = V_1;
		V_0 = (NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA )L_3;
		NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  L_4 = V_0;
		V_2 = (NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  L_5 = V_2;
		return (NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9E7D10B81811FA59E5B5C6FFA11EB2C5B38D1132_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_3 = V_1;
		V_0 = (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 )L_3;
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_4 = V_0;
		V_2 = (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_5 = V_2;
		return (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m74FE8D780F0B79978FC91EDDC7805B680AC3BDBC_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_3 = V_1;
		V_0 = (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 )L_3;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_4 = V_0;
		V_2 = (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_5 = V_2;
		return (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_m8C1569DE0152F03C853DC04F7385EB527B091624_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  L_3 = V_1;
		V_0 = (NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 )L_3;
		NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  L_4 = V_0;
		V_2 = (NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  L_5 = V_2;
		return (NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mBE30B32838E7517398FD847EB4FE3D2A6DE467C9_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  L_3 = V_1;
		V_0 = (NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E )L_3;
		NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  L_4 = V_0;
		V_2 = (NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  L_5 = V_2;
		return (NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E )L_5;
	}
}
// System.Void UnityEngine.NoAllocHelpers::EnsureListElemCount<System.Object>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisRuntimeObject_m862DEF3A3C49631D768D53E2ED9DAF0D716EF572_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list0, int32_t ___count1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___list0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0);
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = ___list0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_3 = ___count1;
		V_0 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___list0;
		int32_t L_6 = ___count1;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5);
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_001d:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_7 = ___list0;
		int32_t L_8 = ___count1;
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.NoAllocHelpers::EnsureListElemCount<UnityEngine.Vector4>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mFC6B4E9E1CCAED900AA93036E007A0B2039198DF_gshared (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___list0, int32_t ___count1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_0 = ___list0;
		NullCheck((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_0);
		((  void (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_1 = ___list0;
		NullCheck((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_3 = ___count1;
		V_0 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_5 = ___list0;
		int32_t L_6 = ___count1;
		NullCheck((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_5);
		((  void (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_001d:
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_7 = ___list0;
		int32_t L_8 = ___count1;
		((  void (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.NoAllocHelpers::ResizeList<System.Object>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResizeList_TisRuntimeObject_m7B47D97FC9235185AA88E3BE217002C6BD8C8A4C_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list0, int32_t ___size1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___list0;
		V_0 = (bool)((((RuntimeObject*)(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoAllocHelpers_ResizeList_TisRuntimeObject_m7B47D97FC9235185AA88E3BE217002C6BD8C8A4C_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___size1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = ___size1;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___list0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5);
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B5_0 = ((((int32_t)L_4) > ((int32_t)L_6))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 1;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoAllocHelpers_ResizeList_TisRuntimeObject_m7B47D97FC9235185AA88E3BE217002C6BD8C8A4C_RuntimeMethod_var)));
	}

IL_0038:
	{
		int32_t L_9 = ___size1;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_10 = ___list0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_10);
		int32_t L_11;
		L_11 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_13 = ___list0;
		int32_t L_14 = ___size1;
		NoAllocHelpers_Internal_ResizeList_m32452578286848AD58CF77E1CA6B078492F723F6((RuntimeObject *)L_13, (int32_t)L_14, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void UnityEngine.NoAllocHelpers::ResizeList<UnityEngine.Vector4>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResizeList_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mD23AEDDE78B67AEE8CBA2EE853755A4A952AA414_gshared (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___list0, int32_t ___size1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_0 = ___list0;
		V_0 = (bool)((((RuntimeObject*)(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoAllocHelpers_ResizeList_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mD23AEDDE78B67AEE8CBA2EE853755A4A952AA414_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___size1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = ___size1;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_5 = ___list0;
		NullCheck((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_5);
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B5_0 = ((((int32_t)L_4) > ((int32_t)L_6))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 1;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoAllocHelpers_ResizeList_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mD23AEDDE78B67AEE8CBA2EE853755A4A952AA414_RuntimeMethod_var)));
	}

IL_0038:
	{
		int32_t L_9 = ___size1;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_10 = ___list0;
		NullCheck((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_10);
		int32_t L_11;
		L_11 = ((  int32_t (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_13 = ___list0;
		int32_t L_14 = ___size1;
		NoAllocHelpers_Internal_ResizeList_m32452578286848AD58CF77E1CA6B078492F723F6((RuntimeObject *)L_13, (int32_t)L_14, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<UnityEngine.Color32>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m5BDA87ED32CFC55DA1F206A10F0F7269375460A0_gshared (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_1 = ___values0;
		NullCheck((List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *)L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<System.Int32>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4B9D1CD951454AB53830295C8EC6981FE2CC67BA_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = ___values0;
		NullCheck((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisRuntimeObject_m7734F08807A81E543786DF8E8B2B4C20CD0C76A5_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = ___values0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<UnityEngine.Vector3>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m6D424749FB41FF954AA7F64B7692638719F3E159_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = ___values0;
		NullCheck((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<UnityEngine.Vector4>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m2F702FC41F0D28D59ED05964609082B91F8960FD_gshared (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_1 = ___values0;
		NullCheck((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2;
		L_2 = Object_FindObjectOfType_mFDEFCE84CE9C644F2B51DCC26CDAC78AC7E89B1B((Type_t *)L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}
}
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_2;
		L_2 = Object_FindObjectsOfType_m0AEB81CC6F1D224A6F4DCC7D553482D54FC03C5A((Type_t *)L_1, (bool)0, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		goto IL_0019;
	}

IL_0019:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_0;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF704B54D833421164E45E576DFD279921246BCEA);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_CheckNullArgument_mFA979ED3433CACA46AC9AE0029A537B46E17D080((RuntimeObject *)L_0, (String_t*)_stringLiteralF704B54D833421164E45E576DFD279921246BCEA, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___original0;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2;
		L_2 = Object_Internal_CloneSingle_m6C669D602DFD7BC6C47ACA19B2F4D7C853F124BB((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject * L_3 = V_0;
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_6 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_6, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_RuntimeMethod_var)));
	}

IL_003e:
	{
		RuntimeObject * L_7 = V_0;
		V_2 = (RuntimeObject *)L_7;
		goto IL_0042;
	}

IL_0042:
	{
		RuntimeObject * L_8 = V_2;
		return (RuntimeObject *)L_8;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___parent1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (RuntimeObject *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_1, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (RuntimeObject *)L_2;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD346AB5980B67F04B2C7E12D88693520FFBAD37D_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___parent1;
		bool L_2 = ___worldPositionStays2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3;
		L_3 = Object_Instantiate_mA9A37F53F535C1FE2603DC002263C85337C1FE18((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_0, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_1, (bool)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0016;
	}

IL_0016:
	{
		RuntimeObject * L_4 = V_0;
		return (RuntimeObject *)L_4;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.ProfilingSampler::Get<System.Int32Enum>(TEnum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ProfilingSampler_Get_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m3293DD5A12C8532BF08209BC1A28D5EED4A348A1_gshared (int32_t ___marker0, const RuntimeMethod* method)
{
	TProfilingSampler_1_t4261C4BE4135FF282359B121EE7B4826A1236FDD * V_0 = NULL;
	{
		// TProfilingSampler<TEnum>.samples.TryGetValue(marker, out var sampler);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005 * L_0 = ((TProfilingSampler_1_t4261C4BE4135FF282359B121EE7B4826A1236FDD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_samples_5();
		int32_t L_1 = ___marker0;
		NullCheck((Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005 *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005 *, int32_t, TProfilingSampler_1_t4261C4BE4135FF282359B121EE7B4826A1236FDD **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t5B0DBD8CF8C950B67FB2D2AD7B1ADFFFB88D5005 *)L_0, (int32_t)L_1, (TProfilingSampler_1_t4261C4BE4135FF282359B121EE7B4826A1236FDD **)(TProfilingSampler_1_t4261C4BE4135FF282359B121EE7B4826A1236FDD **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return sampler;
		TProfilingSampler_1_t4261C4BE4135FF282359B121EE7B4826A1236FDD * L_3 = V_0;
		return (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)L_3;
	}
}
// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.ProfilingSampler::Get<System.Object>(TEnum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ProfilingSampler_Get_TisRuntimeObject_m84CF0115CCFB5F558B73A5066804451E38B4329F_gshared (RuntimeObject * ___marker0, const RuntimeMethod* method)
{
	TProfilingSampler_1_t09D0C84822616BBD340456976F7BD32788E00900 * V_0 = NULL;
	{
		// TProfilingSampler<TEnum>.samples.TryGetValue(marker, out var sampler);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910 * L_0 = ((TProfilingSampler_1_t09D0C84822616BBD340456976F7BD32788E00900_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_samples_5();
		RuntimeObject * L_1 = ___marker0;
		NullCheck((Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910 *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910 *, RuntimeObject *, TProfilingSampler_1_t09D0C84822616BBD340456976F7BD32788E00900 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_tEFDD505048BB40375755B456852B13A2E34D2910 *)L_0, (RuntimeObject *)L_1, (TProfilingSampler_1_t09D0C84822616BBD340456976F7BD32788E00900 **)(TProfilingSampler_1_t09D0C84822616BBD340456976F7BD32788E00900 **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return sampler;
		TProfilingSampler_1_t09D0C84822616BBD340456976F7BD32788E00900 * L_3 = V_0;
		return (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)L_3;
	}
}
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::AddRenderPass<System.Object>(System.String,PassData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056  RenderGraph_AddRenderPass_TisRuntimeObject_m4099A8D5B1D65F0194231FC9E6F64C8D2507BC6F_gshared (RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * __this, String_t* ___passName0, RuntimeObject ** ___passData1, const RuntimeMethod* method)
{
	{
		// return AddRenderPass(passName, out passData, GetDefaultProfilingSampler(passName));
		String_t* L_0 = ___passName0;
		RuntimeObject ** L_1 = ___passData1;
		String_t* L_2 = ___passName0;
		NullCheck((RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 *)__this);
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_3;
		L_3 = RenderGraph_GetDefaultProfilingSampler_mFCAE3A77BB3900FA7DA7871573B251564B4C62C9((RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 *)__this, (String_t*)L_2, /*hidden argument*/NULL);
		NullCheck((RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 *)__this);
		RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056  L_4;
		L_4 = ((  RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056  (*) (RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 *, String_t*, RuntimeObject **, ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 *)__this, (String_t*)L_0, (RuntimeObject **)(RuntimeObject **)L_1, (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056 )L_4;
	}
}
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::AddRenderPass<System.Object>(System.String,PassData&,UnityEngine.Rendering.ProfilingSampler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056  RenderGraph_AddRenderPass_TisRuntimeObject_mAD54BC61B8C5A6DF667DF97C991BAE1226778816_gshared (RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * __this, String_t* ___passName0, RuntimeObject ** ___passData1, ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___sampler2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m20A5A34CECDE7CF47EE9FD1F719F184D13C28C84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBD84A03FCAB5BB973EA9CD4416A507076ED9452D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047 * V_0 = NULL;
	{
		// var renderPass = m_RenderGraphPool.Get<RenderGraphPass<PassData>>();
		RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 * L_0 = (RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 *)__this->get_m_RenderGraphPool_2();
		NullCheck((RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 *)L_0);
		RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047 * L_1;
		L_1 = ((  RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047 * (*) (RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047 *)L_1;
		// renderPass.Initialize(m_RenderPasses.Count, m_RenderGraphPool.Get<PassData>(), passName, sampler);
		RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047 * L_2 = V_0;
		List_1_tE825566258696352A9BBDE7670E9B79137D429AC * L_3 = (List_1_tE825566258696352A9BBDE7670E9B79137D429AC *)__this->get_m_RenderPasses_3();
		NullCheck((List_1_tE825566258696352A9BBDE7670E9B79137D429AC *)L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mBD84A03FCAB5BB973EA9CD4416A507076ED9452D_inline((List_1_tE825566258696352A9BBDE7670E9B79137D429AC *)L_3, /*hidden argument*/List_1_get_Count_mBD84A03FCAB5BB973EA9CD4416A507076ED9452D_RuntimeMethod_var);
		RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 * L_5 = (RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 *)__this->get_m_RenderGraphPool_2();
		NullCheck((RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 *)L_5);
		RuntimeObject * L_6;
		L_6 = ((  RuntimeObject * (*) (RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		String_t* L_7 = ___passName0;
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_8 = ___sampler2;
		NullCheck((RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047 *)L_2);
		((  void (*) (RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047 *, int32_t, RuntimeObject *, String_t*, ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047 *)L_2, (int32_t)L_4, (RuntimeObject *)L_6, (String_t*)L_7, (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// passData = renderPass.data;
		RuntimeObject ** L_9 = ___passData1;
		RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047 * L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject * L_11 = (RuntimeObject *)L_10->get_data_14();
		*(RuntimeObject **)L_9 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_9, (void*)L_11);
		// m_RenderPasses.Add(renderPass);
		List_1_tE825566258696352A9BBDE7670E9B79137D429AC * L_12 = (List_1_tE825566258696352A9BBDE7670E9B79137D429AC *)__this->get_m_RenderPasses_3();
		RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047 * L_13 = V_0;
		NullCheck((List_1_tE825566258696352A9BBDE7670E9B79137D429AC *)L_12);
		List_1_Add_m20A5A34CECDE7CF47EE9FD1F719F184D13C28C84((List_1_tE825566258696352A9BBDE7670E9B79137D429AC *)L_12, (RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 *)L_13, /*hidden argument*/List_1_Add_m20A5A34CECDE7CF47EE9FD1F719F184D13C28C84_RuntimeMethod_var);
		// return new RenderGraphBuilder(renderPass, m_Resources, this);
		RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047 * L_14 = V_0;
		RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * L_15 = (RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 *)__this->get_m_Resources_1();
		RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056  L_16;
		memset((&L_16), 0, sizeof(L_16));
		RenderGraphBuilder__ctor_m0FABCFE9B3F1BC64796DCD5935A7DFFD84F08764((&L_16), (RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 *)L_14, (RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 *)L_15, (RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 *)__this, /*hidden argument*/NULL);
		return (RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056 )L_16;
	}
}
// System.Void UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::SetRenderFunc<System.Object>(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<PassData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderGraphBuilder_SetRenderFunc_TisRuntimeObject_mD39730A1B58C57688FB5F66270351E97802AC77E_gshared (RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056 * __this, RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C * ___renderFunc0, const RuntimeMethod* method)
{
	{
		// ((RenderGraphPass<PassData>)m_RenderPass).renderFunc = renderFunc;
		RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 * L_0 = (RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 *)__this->get_m_RenderPass_0();
		RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C * L_1 = ___renderFunc0;
		NullCheck(((RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047 *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		((RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047 *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->set_renderFunc_15(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RenderGraphBuilder_SetRenderFunc_TisRuntimeObject_mD39730A1B58C57688FB5F66270351E97802AC77E_AdjustorThunk (RuntimeObject * __this, RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C * ___renderFunc0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056 * _thisAdjusted = reinterpret_cast<RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056 *>(__this + _offset);
	RenderGraphBuilder_SetRenderFunc_TisRuntimeObject_mD39730A1B58C57688FB5F66270351E97802AC77E(_thisAdjusted, ___renderFunc0, method);
}
// T UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::Get<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RenderGraphObjectPool_Get_TisRuntimeObject_m3AE1B783AD9826D085528456876E1C0E30F1A946_gshared (RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 * __this, const RuntimeMethod* method)
{
	{
		// var pool = SharedObjectPool<T>.sharedPool;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		SharedObjectPool_1_t4A6D0619406384BFFAEC123F557A565539C61CF9 * L_0;
		L_0 = ((  SharedObjectPool_1_t4A6D0619406384BFFAEC123F557A565539C61CF9 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// return pool.Get();
		NullCheck((SharedObjectPool_1_t4A6D0619406384BFFAEC123F557A565539C61CF9 *)L_0);
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (SharedObjectPool_1_t4A6D0619406384BFFAEC123F557A565539C61CF9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((SharedObjectPool_1_t4A6D0619406384BFFAEC123F557A565539C61CF9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return (RuntimeObject *)L_1;
	}
}
// T[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::GetTempArray<System.Object>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* RenderGraphObjectPool_GetTempArray_TisRuntimeObject_m7AC7FAB4825250BAAE31A646453315F05DF9B74F_gshared (RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDAA960915A2AC9EB90B8C182EDF0AAA4F2B1F2DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m105EB83275DBE11D491CC225AC0B61C464EDA6C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3420715C3175CF376D362051503A0C7A82A29792_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m41AF3144A52DC18C08176F88B4C22B912252C905_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mE6F93DA1C3D33EECE3A273ACEB55E9A51D17D1A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B5_0 = NULL;
	{
		// if (!m_ArrayPool.TryGetValue((typeof(T), size), out var stack))
		Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 * L_0 = (Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 *)__this->get_m_ArrayPool_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___size0;
		ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ValueTuple_2__ctor_mE6F93DA1C3D33EECE3A273ACEB55E9A51D17D1A3((&L_4), (Type_t *)L_2, (int32_t)L_3, /*hidden argument*/ValueTuple_2__ctor_mE6F93DA1C3D33EECE3A273ACEB55E9A51D17D1A3_RuntimeMethod_var);
		NullCheck((Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 *)L_0);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m105EB83275DBE11D491CC225AC0B61C464EDA6C4((Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 *)L_0, (ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B )L_4, (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 **)(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m105EB83275DBE11D491CC225AC0B61C464EDA6C4_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		// stack = new Stack<object>();
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_6 = (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)il2cpp_codegen_object_new(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981_il2cpp_TypeInfo_var);
		Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A(L_6, /*hidden argument*/Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_RuntimeMethod_var);
		V_0 = (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)L_6;
		// m_ArrayPool.Add((typeof(T), size), stack);
		Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 * L_7 = (Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 *)__this->get_m_ArrayPool_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___size0;
		ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B  L_11;
		memset((&L_11), 0, sizeof(L_11));
		ValueTuple_2__ctor_mE6F93DA1C3D33EECE3A273ACEB55E9A51D17D1A3((&L_11), (Type_t *)L_9, (int32_t)L_10, /*hidden argument*/ValueTuple_2__ctor_mE6F93DA1C3D33EECE3A273ACEB55E9A51D17D1A3_RuntimeMethod_var);
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_12 = V_0;
		NullCheck((Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 *)L_7);
		Dictionary_2_Add_mDAA960915A2AC9EB90B8C182EDF0AAA4F2B1F2DA((Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 *)L_7, (ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B )L_11, (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)L_12, /*hidden argument*/Dictionary_2_Add_mDAA960915A2AC9EB90B8C182EDF0AAA4F2B1F2DA_RuntimeMethod_var);
	}

IL_0041:
	{
		// var result = stack.Count > 0 ? (T[])stack.Pop() : new T[size];
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_13 = V_0;
		NullCheck((Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)L_13);
		int32_t L_14;
		L_14 = Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_inline((Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)L_13, /*hidden argument*/Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_RuntimeMethod_var);
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_15 = ___size0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_15);
		G_B5_0 = L_16;
		goto IL_005d;
	}

IL_0052:
	{
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_17 = V_0;
		NullCheck((Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)L_17);
		RuntimeObject * L_18;
		L_18 = Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12((Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)L_17, /*hidden argument*/Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_RuntimeMethod_var);
		G_B5_0 = ((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)Castclass((RuntimeObject*)L_18, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_005d:
	{
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)G_B5_0;
		// m_AllocatedArrays.Add((result, (typeof(T), size)));
		List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91 * L_19 = (List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91 *)__this->get_m_AllocatedArrays_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = V_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_21 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22;
		L_22 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_21, /*hidden argument*/NULL);
		int32_t L_23 = ___size0;
		ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B  L_24;
		memset((&L_24), 0, sizeof(L_24));
		ValueTuple_2__ctor_mE6F93DA1C3D33EECE3A273ACEB55E9A51D17D1A3((&L_24), (Type_t *)L_22, (int32_t)L_23, /*hidden argument*/ValueTuple_2__ctor_mE6F93DA1C3D33EECE3A273ACEB55E9A51D17D1A3_RuntimeMethod_var);
		ValueTuple_2_t948DF4724E45CFD2CFEE4CD891EF7F2C2C7B59BE  L_25;
		memset((&L_25), 0, sizeof(L_25));
		ValueTuple_2__ctor_m41AF3144A52DC18C08176F88B4C22B912252C905((&L_25), (RuntimeObject *)(RuntimeObject *)L_20, (ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B )L_24, /*hidden argument*/ValueTuple_2__ctor_m41AF3144A52DC18C08176F88B4C22B912252C905_RuntimeMethod_var);
		NullCheck((List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91 *)L_19);
		List_1_Add_m3420715C3175CF376D362051503A0C7A82A29792((List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91 *)L_19, (ValueTuple_2_t948DF4724E45CFD2CFEE4CD891EF7F2C2C7B59BE )L_25, /*hidden argument*/List_1_Add_m3420715C3175CF376D362051503A0C7A82A29792_RuntimeMethod_var);
		// return result;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = V_1;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_26;
	}
}
// T[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::GetTempArray<UnityEngine.Rendering.RenderTargetIdentifier>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* RenderGraphObjectPool_GetTempArray_TisRenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13_m61BA5FA41FEB3A8AD0894FC6C526E337CD74CAC8_gshared (RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDAA960915A2AC9EB90B8C182EDF0AAA4F2B1F2DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m105EB83275DBE11D491CC225AC0B61C464EDA6C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3420715C3175CF376D362051503A0C7A82A29792_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m41AF3144A52DC18C08176F88B4C22B912252C905_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mE6F93DA1C3D33EECE3A273ACEB55E9A51D17D1A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * V_0 = NULL;
	RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* V_1 = NULL;
	RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* G_B5_0 = NULL;
	{
		// if (!m_ArrayPool.TryGetValue((typeof(T), size), out var stack))
		Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 * L_0 = (Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 *)__this->get_m_ArrayPool_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___size0;
		ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ValueTuple_2__ctor_mE6F93DA1C3D33EECE3A273ACEB55E9A51D17D1A3((&L_4), (Type_t *)L_2, (int32_t)L_3, /*hidden argument*/ValueTuple_2__ctor_mE6F93DA1C3D33EECE3A273ACEB55E9A51D17D1A3_RuntimeMethod_var);
		NullCheck((Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 *)L_0);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m105EB83275DBE11D491CC225AC0B61C464EDA6C4((Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 *)L_0, (ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B )L_4, (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 **)(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m105EB83275DBE11D491CC225AC0B61C464EDA6C4_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		// stack = new Stack<object>();
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_6 = (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)il2cpp_codegen_object_new(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981_il2cpp_TypeInfo_var);
		Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A(L_6, /*hidden argument*/Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_RuntimeMethod_var);
		V_0 = (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)L_6;
		// m_ArrayPool.Add((typeof(T), size), stack);
		Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 * L_7 = (Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 *)__this->get_m_ArrayPool_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___size0;
		ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B  L_11;
		memset((&L_11), 0, sizeof(L_11));
		ValueTuple_2__ctor_mE6F93DA1C3D33EECE3A273ACEB55E9A51D17D1A3((&L_11), (Type_t *)L_9, (int32_t)L_10, /*hidden argument*/ValueTuple_2__ctor_mE6F93DA1C3D33EECE3A273ACEB55E9A51D17D1A3_RuntimeMethod_var);
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_12 = V_0;
		NullCheck((Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 *)L_7);
		Dictionary_2_Add_mDAA960915A2AC9EB90B8C182EDF0AAA4F2B1F2DA((Dictionary_2_t54234767D82A70BDEED6C920CB6F36FFA96FE131 *)L_7, (ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B )L_11, (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)L_12, /*hidden argument*/Dictionary_2_Add_mDAA960915A2AC9EB90B8C182EDF0AAA4F2B1F2DA_RuntimeMethod_var);
	}

IL_0041:
	{
		// var result = stack.Count > 0 ? (T[])stack.Pop() : new T[size];
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_13 = V_0;
		NullCheck((Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)L_13);
		int32_t L_14;
		L_14 = Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_inline((Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)L_13, /*hidden argument*/Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_RuntimeMethod_var);
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_15 = ___size0;
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_16 = (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_15);
		G_B5_0 = L_16;
		goto IL_005d;
	}

IL_0052:
	{
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_17 = V_0;
		NullCheck((Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)L_17);
		RuntimeObject * L_18;
		L_18 = Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12((Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)L_17, /*hidden argument*/Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_RuntimeMethod_var);
		G_B5_0 = ((RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)Castclass((RuntimeObject*)L_18, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_005d:
	{
		V_1 = (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)G_B5_0;
		// m_AllocatedArrays.Add((result, (typeof(T), size)));
		List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91 * L_19 = (List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91 *)__this->get_m_AllocatedArrays_1();
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_20 = V_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_21 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22;
		L_22 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_21, /*hidden argument*/NULL);
		int32_t L_23 = ___size0;
		ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B  L_24;
		memset((&L_24), 0, sizeof(L_24));
		ValueTuple_2__ctor_mE6F93DA1C3D33EECE3A273ACEB55E9A51D17D1A3((&L_24), (Type_t *)L_22, (int32_t)L_23, /*hidden argument*/ValueTuple_2__ctor_mE6F93DA1C3D33EECE3A273ACEB55E9A51D17D1A3_RuntimeMethod_var);
		ValueTuple_2_t948DF4724E45CFD2CFEE4CD891EF7F2C2C7B59BE  L_25;
		memset((&L_25), 0, sizeof(L_25));
		ValueTuple_2__ctor_m41AF3144A52DC18C08176F88B4C22B912252C905((&L_25), (RuntimeObject *)(RuntimeObject *)L_20, (ValueTuple_2_t4DE5F9D69439278BE608DC1B660FCD781F5F858B )L_24, /*hidden argument*/ValueTuple_2__ctor_m41AF3144A52DC18C08176F88B4C22B912252C905_RuntimeMethod_var);
		NullCheck((List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91 *)L_19);
		List_1_Add_m3420715C3175CF376D362051503A0C7A82A29792((List_1_t1E400B2BF673EA04EFC0BA4491B63C4C78A76D91 *)L_19, (ValueTuple_2_t948DF4724E45CFD2CFEE4CD891EF7F2C2C7B59BE )L_25, /*hidden argument*/List_1_Add_m3420715C3175CF376D362051503A0C7A82A29792_RuntimeMethod_var);
		// return result;
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_26 = V_1;
		return (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)L_26;
	}
}
// System.Void UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::Release<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderGraphObjectPool_Release_TisRuntimeObject_mA8779308077BB444FB5C6F40B1CB856E572EB6AF_gshared (RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// var pool = SharedObjectPool<T>.sharedPool;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		SharedObjectPool_1_t4A6D0619406384BFFAEC123F557A565539C61CF9 * L_0;
		L_0 = ((  SharedObjectPool_1_t4A6D0619406384BFFAEC123F557A565539C61CF9 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// pool.Release(value);
		RuntimeObject * L_1 = ___value0;
		NullCheck((SharedObjectPool_1_t4A6D0619406384BFFAEC123F557A565539C61CF9 *)L_0);
		((  void (*) (SharedObjectPool_1_t4A6D0619406384BFFAEC123F557A565539C61CF9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((SharedObjectPool_1_t4A6D0619406384BFFAEC123F557A565539C61CF9 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// }
		return;
	}
}
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<PassData> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass::GetExecuteDelegate<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C * RenderGraphPass_GetExecuteDelegate_TisRuntimeObject_m4E92A5DC8EB9AE7AEEFEE4691B9A141BC4782879_gshared (RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 * __this, const RuntimeMethod* method)
{
	{
		// where PassData : class, new() => ((RenderGraphPass<PassData>)this).renderFunc;
		NullCheck(((RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C * L_0 = (RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C *)((RenderGraphPass_1_t81103B66F6AE5B1EF0BDD764BD6AB5A582B7F047 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_renderFunc_15();
		return (RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C *)L_0;
	}
}
// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::AddNewResource<System.Object>(UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource>,ResType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderGraphResourceRegistry_AddNewResource_TisRuntimeObject_m7815D611A67287D021A12A202EF3931E70C97EEE_gshared (RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * __this, DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 * ___resourceArray0, RuntimeObject ** ___outRes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_Resize_m3B2CC8B31ECD5B9997CC42866E7E5C70BF08C563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_Item_m71FE70254B518D98093BE39B8320F7EDC6D920FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_size_m97FC055466349D558BE16DF3226963D5EE56E22E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int result = resourceArray.size;
		DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 * L_0 = ___resourceArray0;
		NullCheck((DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 *)L_0);
		int32_t L_1;
		L_1 = DynamicArray_1_get_size_m97FC055466349D558BE16DF3226963D5EE56E22E_inline((DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 *)L_0, /*hidden argument*/DynamicArray_1_get_size_m97FC055466349D558BE16DF3226963D5EE56E22E_RuntimeMethod_var);
		V_0 = (int32_t)L_1;
		// resourceArray.Resize(resourceArray.size + 1, true);
		DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 * L_2 = ___resourceArray0;
		DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 * L_3 = ___resourceArray0;
		NullCheck((DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 *)L_3);
		int32_t L_4;
		L_4 = DynamicArray_1_get_size_m97FC055466349D558BE16DF3226963D5EE56E22E_inline((DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 *)L_3, /*hidden argument*/DynamicArray_1_get_size_m97FC055466349D558BE16DF3226963D5EE56E22E_RuntimeMethod_var);
		NullCheck((DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 *)L_2);
		DynamicArray_1_Resize_m3B2CC8B31ECD5B9997CC42866E7E5C70BF08C563((DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 *)L_2, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), (bool)1, /*hidden argument*/DynamicArray_1_Resize_m3B2CC8B31ECD5B9997CC42866E7E5C70BF08C563_RuntimeMethod_var);
		// if (resourceArray[result] == null)
		DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 * L_5 = ___resourceArray0;
		int32_t L_6 = V_0;
		NullCheck((DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 *)L_5);
		IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03 ** L_7;
		L_7 = DynamicArray_1_get_Item_m71FE70254B518D98093BE39B8320F7EDC6D920FA((DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 *)L_5, (int32_t)L_6, /*hidden argument*/DynamicArray_1_get_Item_m71FE70254B518D98093BE39B8320F7EDC6D920FA_RuntimeMethod_var);
		IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03 * L_8 = *((IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03 **)L_7);
		if (L_8)
		{
			goto IL_0032;
		}
	}
	{
		// resourceArray[result] = new ResType();
		DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 * L_9 = ___resourceArray0;
		int32_t L_10 = V_0;
		NullCheck((DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 *)L_9);
		IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03 ** L_11;
		L_11 = DynamicArray_1_get_Item_m71FE70254B518D98093BE39B8320F7EDC6D920FA((DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 *)L_9, (int32_t)L_10, /*hidden argument*/DynamicArray_1_get_Item_m71FE70254B518D98093BE39B8320F7EDC6D920FA_RuntimeMethod_var);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		*((RuntimeObject **)L_11) = (RuntimeObject *)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_11, (void*)(RuntimeObject *)L_12);
	}

IL_0032:
	{
		// outRes = resourceArray[result] as ResType;
		RuntimeObject ** L_13 = ___outRes1;
		DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 * L_14 = ___resourceArray0;
		int32_t L_15 = V_0;
		NullCheck((DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 *)L_14);
		IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03 ** L_16;
		L_16 = DynamicArray_1_get_Item_m71FE70254B518D98093BE39B8320F7EDC6D920FA((DynamicArray_1_t9FBA0D0265B256E03D34E4C8F71698447C97CC55 *)L_14, (int32_t)L_15, /*hidden argument*/DynamicArray_1_get_Item_m71FE70254B518D98093BE39B8320F7EDC6D920FA_RuntimeMethod_var);
		IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03 * L_17 = *((IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03 **)L_16);
		*(RuntimeObject **)L_13 = ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_13, (void*)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		// outRes.Reset();
		RuntimeObject ** L_18 = ___outRes1;
		NullCheck((IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03 *)(*L_18));
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource::Reset() */, (IRenderGraphResource_t0B4B3CA2630B3AA2A2E003E8AAB182C29EC20B03 *)(*L_18));
		// return result;
		int32_t L_19 = V_0;
		return (int32_t)L_19;
	}
}
// T[] UnityEngine.Resources::ConvertObjects<System.Object>(UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Resources_ConvertObjects_TisRuntimeObject_mFE4CAC97B9FCF924DBB444ADE1F3F489FAF47A73_gshared (ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* ___rawObjects0, const RuntimeMethod* method)
{
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_0 = ___rawObjects0;
		V_1 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL;
		goto IL_003d;
	}

IL_000d:
	{
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_2 = ___rawObjects0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_3 = (int32_t)0;
		goto IL_002d;
	}

IL_001a:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_0;
		int32_t L_5 = V_3;
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_6 = ___rawObjects0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_10 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_0;
		NullCheck(L_12);
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))? 1 : 0);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_0;
		V_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_14;
		goto IL_003d;
	}

IL_003d:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = V_2;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_15;
	}
}
// T UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_mEFE806C359F59E719E60AD86FFF7C2577FB98ED2_gshared (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___path0;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3;
		L_3 = Resources_GetBuiltinResource_m59A7993A48D44A0002E532B7DD79BDA426E0C8A6((Type_t *)L_1, (String_t*)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject * L_4 = V_0;
		return (RuntimeObject *)L_4;
	}
}
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		String_t* L_0 = ___path0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3;
		L_3 = Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C((String_t*)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject * L_4 = V_0;
		return (RuntimeObject *)L_4;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC389C88529EF229E1BABC989C94EE2223BD56AD0_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_m4838780BFA354CC3379547DE1595EA5D865D7DC2((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)IsInst((RuntimeObject*)L_4, RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (bool)L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m2AC7D63AB4EDAEC644206513E9541129F65EB86E_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_m4838780BFA354CC3379547DE1595EA5D865D7DC2((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)IsInst((RuntimeObject*)L_4, RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (bool)L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_mACD826EE1088E1006234E254924A7067CD467A5F_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_2;
		L_2 = ScriptableObject_CreateInstance_m5371BDC0B4F60FE15914A7BB3FBE07D0ACA0A8D4((Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetClass<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetClass_TisRuntimeObject_m5FFE5BDC8FFF1BE342BF12D2FA3D924B59CF1814_gshared (RuntimeObject ** ___currentValue0, RuntimeObject * ___newValue1, const RuntimeMethod* method)
{
	{
		// if ((currentValue == null && newValue == null) || (currentValue != null && currentValue.Equals(newValue)))
		RuntimeObject ** L_0 = ___currentValue0;
		RuntimeObject * L_1 = (*(RuntimeObject **)L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_2 = ___newValue1;
		if (!L_2)
		{
			goto IL_0036;
		}
	}

IL_0015:
	{
		RuntimeObject ** L_3 = ___currentValue0;
		RuntimeObject * L_4 = (*(RuntimeObject **)L_3);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject ** L_5 = ___currentValue0;
		RuntimeObject * L_6 = ___newValue1;
		NullCheck((RuntimeObject *)(*L_5));
		bool L_7;
		L_7 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)(*L_5), (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_0038;
		}
	}

IL_0036:
	{
		// return false;
		return (bool)0;
	}

IL_0038:
	{
		// currentValue = newValue;
		RuntimeObject ** L_8 = ___currentValue0;
		RuntimeObject * L_9 = ___newValue1;
		*(RuntimeObject **)L_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_8, (void*)L_9);
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Boolean>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m6E2FF3626DFDB226EC45A0225EB571151DAC1EAD_gshared (bool* ___currentValue0, bool ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * L_0;
		L_0 = ((  EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool* L_1 = ___currentValue0;
		bool L_2 = (*(bool*)L_1);
		bool L_3 = ___newValue1;
		NullCheck((EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(!0,!0) */, (EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 *)L_0, (bool)L_2, (bool)L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		bool* L_5 = ___currentValue0;
		bool L_6 = ___newValue1;
		*(bool*)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Char>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mAC32D0C9CB1952351983635D14A11AEBACD8640F_gshared (Il2CppChar* ___currentValue0, Il2CppChar ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 * L_0;
		L_0 = ((  EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		Il2CppChar* L_1 = ___currentValue0;
		Il2CppChar L_2 = (*(Il2CppChar*)L_1);
		Il2CppChar L_3 = ___newValue1;
		NullCheck((EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Char>::Equals(!0,!0) */, (EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 *)L_0, (Il2CppChar)L_2, (Il2CppChar)L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		Il2CppChar* L_5 = ___currentValue0;
		Il2CppChar L_6 = ___newValue1;
		*(Il2CppChar*)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<UnityEngine.UI.ColorBlock>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_m7F8E5115E86B1666472040BC04D78034F008988F_gshared (ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * ___currentValue0, ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 * L_0;
		L_0 = ((  EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * L_1 = ___currentValue0;
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_2 = (*(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 *)L_1);
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_3 = ___newValue1;
		NullCheck((EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 , ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ColorBlock>::Equals(!0,!0) */, (EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 *)L_0, (ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 )L_2, (ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 )L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * L_5 = ___currentValue0;
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_6 = ___newValue1;
		*(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 *)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Int32>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDE46479E370530BDE29FA53D4857B1414E52FDA5_gshared (int32_t* ___currentValue0, int32_t ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * L_0;
		L_0 = ((  EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t* L_1 = ___currentValue0;
		int32_t L_2 = (*(int32_t*)L_1);
		int32_t L_3 = ___newValue1;
		NullCheck((EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(!0,!0) */, (EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 *)L_0, (int32_t)L_2, (int32_t)L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		int32_t* L_5 = ___currentValue0;
		int32_t L_6 = ___newValue1;
		*(int32_t*)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Int32Enum>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m45F808F8A7CDCC736724DDB19D3FC2F6BB75D65C_gshared (int32_t* ___currentValue0, int32_t ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * L_0;
		L_0 = ((  EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t* L_1 = ___currentValue0;
		int32_t L_2 = (*(int32_t*)L_1);
		int32_t L_3 = ___newValue1;
		NullCheck((EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(!0,!0) */, (EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F *)L_0, (int32_t)L_2, (int32_t)L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		int32_t* L_5 = ___currentValue0;
		int32_t L_6 = ___newValue1;
		*(int32_t*)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<UnityEngine.UI.Navigation>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisNavigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_m408B16038A42AF06DCB8642CB1DC5D3118C4071D_gshared (Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * ___currentValue0, Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC * L_0;
		L_0 = ((  EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * L_1 = ___currentValue0;
		Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  L_2 = (*(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_1);
		Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  L_3 = ___newValue1;
		NullCheck((EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A , Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Navigation>::Equals(!0,!0) */, (EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC *)L_0, (Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A )L_2, (Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A )L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * L_5 = ___currentValue0;
		Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  L_6 = ___newValue1;
		*(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_5)->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_5)->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_5)->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_5)->___m_SelectOnRight_5), (void*)NULL);
		#endif
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Single>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD2FEFB6B008F6267B83749DDC273A8F4F29F36D9_gshared (float* ___currentValue0, float ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * L_0;
		L_0 = ((  EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		float* L_1 = ___currentValue0;
		float L_2 = (*(float*)L_1);
		float L_3 = ___newValue1;
		NullCheck((EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(!0,!0) */, (EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_0, (float)L_2, (float)L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		float* L_5 = ___currentValue0;
		float L_6 = ___newValue1;
		*(float*)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<UnityEngine.UI.SpriteState>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisSpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_mD0C3F4C3C5162AB96A8E9D750F87CC0FFE362572_gshared (SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * ___currentValue0, SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 * L_0;
		L_0 = ((  EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * L_1 = ___currentValue0;
		SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  L_2 = (*(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_1);
		SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  L_3 = ___newValue1;
		NullCheck((EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E , SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.SpriteState>::Equals(!0,!0) */, (EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 *)L_0, (SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E )L_2, (SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E )L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * L_5 = ___currentValue0;
		SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  L_6 = ___newValue1;
		*(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_5)->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_5)->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_5)->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_5)->___m_DisabledSprite_3), (void*)NULL);
		#endif
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor<System.Object,System.Object>(TDescriptor,System.Collections.Generic.List`1<TBaseTypeInList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_TisRuntimeObject_TisRuntimeObject_mAB56DC82E916F116B981E0849B9B474384B36376_gshared (RuntimeObject * ___descriptor0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___storeInList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08AAD62E530799C15714A41B93652F8A49FDBB68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8C0FEACB3F25706873303C3604F2CE5666744C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	{
		V_0 = (int32_t)0;
		goto IL_006e;
	}

IL_0005:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___storeInList1;
		int32_t L_1 = V_0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0);
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_2 = (RuntimeObject *)L_2;
		NullCheck((RuntimeObject*)(V_2));
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		NullCheck((RuntimeObject*)(___descriptor0));
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var, (RuntimeObject*)(___descriptor0));
		bool L_5;
		L_5 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2((String_t*)L_3, (String_t*)L_4, /*hidden argument*/NULL);
		V_1 = (bool)L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		goto IL_006a;
	}

IL_0033:
	{
		NullCheck((RuntimeObject*)(___descriptor0));
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var, (RuntimeObject*)(___descriptor0));
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)_stringLiteral08AAD62E530799C15714A41B93652F8A49FDBB68, (String_t*)L_7, (String_t*)_stringLiteral1D8C0FEACB3F25706873303C3604F2CE5666744C, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)L_8, /*hidden argument*/NULL);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_9 = ___storeInList1;
		int32_t L_10 = V_0;
		RuntimeObject * L_11 = ___descriptor0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_9);
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_9, (int32_t)L_10, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		goto IL_00a0;
	}

IL_006a:
	{
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_006e:
	{
		int32_t L_13 = V_0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_14 = ___storeInList1;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_14);
		int32_t L_15;
		L_15 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_0005;
		}
	}
	{
		NullCheck((RuntimeObject*)(___descriptor0));
		String_t* L_17;
		L_17 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var, (RuntimeObject*)(___descriptor0));
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_ReportSingleSubsystemAnalytics_m8DD2291586A77B073F3AF1E84F66C3AE77F5872D((String_t*)L_17, /*hidden argument*/NULL);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_18 = ___storeInList1;
		RuntimeObject * L_19 = ___descriptor0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_18);
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_18, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_19, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
	}

IL_00a0:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Boolean>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * Task_FromCancellation_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m11A1B226C4A180133FD582A6FBF9810BD1C1C0FA_gshared (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&___cancellationToken0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m11A1B226C4A180133FD582A6FBF9810BD1C1C0FA_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_2 = V_0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken0;
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_4 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, bool, bool, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_4, (bool)1, (bool)L_2, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Object>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_FromCancellation_TisRuntimeObject_mBC686B1BF5A44330A8793A0AA29F383CF55533C8_gshared (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&___cancellationToken0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisRuntimeObject_mBC686B1BF5A44330A8793A0AA29F383CF55533C8_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken0;
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_4 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, bool, RuntimeObject *, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_4, (bool)1, (RuntimeObject *)L_2, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_4;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisKeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57_mA4806A887115203276C18C332B40C1DAC07D5497_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo<System.Object>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLogInfo_t313421642EB49F359C7638B1E201D81C1EEA2D63_m6D6CDFACED96ED80E3F77A7C843A4972D0604BF7_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ResourceLogInfo_t313421642EB49F359C7638B1E201D81C1EEA2D63  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ResourceLogInfo_t313421642EB49F359C7638B1E201D81C1EEA2D63 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.ValueTuple`2<System.Int32,System.Object>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_tA26D3A4C20B6E6F61C01B309B632FC717E2B9173_mF6A2B9734372B8405B59746F568CBD0428FA0B3F_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ValueTuple_2_tA26D3A4C20B6E6F61C01B309B632FC717E2B9173  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_tA26D3A4C20B6E6F61C01B309B632FC717E2B9173 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Object,System.Int32>>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t39C25CAE4F6CA469E896F7BC1066EE78949FD793_m8AB5966162D675EB7E7E1F77270250318BAFFE69_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ValueTuple_2_t39C25CAE4F6CA469E896F7BC1066EE78949FD793  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_t39C25CAE4F6CA469E896F7BC1066EE78949FD793 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.ValueTuple`2<System.Object,System.Int32>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00_m6275ABEFC8747D4832593060B30B479BD794059F_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Color32>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_mB86B8897F2F4044A68F9A3B03DDED5ADB01A7274_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Int32>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5865AA873219669B49B7CD22B8F5037B78624444_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Int32Enum>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m09C495E3282F1EB4D86AFD41E4A1D71D28013202_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Object>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m539AEA437A51B6A554E8ADD3076EDA49258FFF2F_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.EventSystems.RaycastResult>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_m7B6AFD6EC684F98352846D8662E379807D36BFF4_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_m0188861E2916AD94B322A6F6A6485DD93FF41225_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Experimental.Rendering.RenderGraphModule.ResourceHandle>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948_m43D04E3ADC1328B66C43C37D2FE537BEA3FA06CE_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UICharInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A_m7DF5C6239E156DBE1471885B9B0A2EF4978325C9_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UILineInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C_mF9A73CFD6E0760C7690ED5253A743B30172980F6_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UIVertex>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_m50A402D6DF7FC7FCBAE5AF5C0D055FF2C5A2D94E_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector3>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE2606512887650500549E97A027D886C84CBF61C_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector4>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mA932D671F9BE87E641DB0FCC8E2DB6C52EA4A76D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.BeforeRenderHelper/OrderBlock>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_m524E3CF7C698B1C70A686928AF4E31E0FB01FD6D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Camera/RenderRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_m8CC8BBE8B343B5710C3AA0F32012D23AC131AFFD_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_m413E720584128D73313DD6B61F3AD8087F8CB6A2_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_m5E1D190556D9E2C8D14CDF1517563FC1C4597B9D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UnitySynchronizationContext/WorkRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_mAA66AF0A6DC5C07BA4B170C83C4E741F47BDED75_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Object,System.Object>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * Tuple_Create_TisRuntimeObject_TisRuntimeObject_mF386334EA2E5B5781A35A5D57F090EF2A1C6BAD0_gshared (RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		RuntimeObject * L_1 = ___item21;
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_2 = (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)L_2;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  UnsafeUtility_ReadArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_mF1E1FA0E9424F2F320E9B0339FC687ADF10BCBA9_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = (*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Byte>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3A787297B1A91CA14E1AA3B0034A681D407C2C6F_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint8_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Hash128>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A  UnsafeUtility_ReadArrayElement_TisHash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A_m8765EABA42CF12CC70789C92D4B6F8162E07476E_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A );
		Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A  L_3 = (*(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Int32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB96EA425698FAC912FBF9F171D49A9115BBC6D3B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (int32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  UnsafeUtility_ReadArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_m4E2C63FA44B1C28449F8F4BB7905B51D78AE236D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = (*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Object>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnsafeUtility_ReadArrayElement_TisRuntimeObject_mF01BC97D058E55A4713C93F8CB551700296191ED_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = (*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (RuntimeObject *)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Plane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  UnsafeUtility_ReadArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mEECC8D753A2ECD36000F48387C6A2D1D4E564F62_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = (*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mE811E8D32BDD37FAA30D65CCC1FCD5CF752FC61D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint32_t)L_3;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_mC2658E4BCDD5CB7B35E546FAE518CF3C4102626E_gshared (void* ___destination0, int32_t ___index1, BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = ___value2;
		*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Byte>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB82F9E11B8FEC9E090AEA6C9C2C8A611682E7825_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___value2;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mB7E008D6D4C2008C47D4D71528F6AE7AFCF0B7CB_gshared (void* ___destination0, int32_t ___index1, LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = ___value2;
		*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Object>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRuntimeObject_mA6478546A0D6B20061E1DAF0862A895CF5D8C044_gshared (void* ___destination0, int32_t ___index1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = ___value2;
		*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Plane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mB75E0A57B03F72BC1744169D7F4F8CF73AD98915_gshared (void* ___destination0, int32_t ___index1, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = ___value2;
		*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mD0CF58950EF1EBF39DB359EBC77FF0DC6582778F_gshared (void* ___destination0, int32_t ___index1, uint32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = ___value2;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Volatile_Read_TisRuntimeObject_m34EC4B420E3B86C8B06957C02A3FDD87D674E50E_gshared (RuntimeObject ** ___location0, const RuntimeMethod* method)
{
	return VolatileRead(___location0);
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_m3392CE290ADB37963BB566664A63096AF6DABAE4_gshared (RuntimeObject ** ___location0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	VolatileWrite(___location0, ___value1);
}
// System.Boolean UnityEngine.Rendering.VolumeManager::IsComponentActiveInMask<System.Object>(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeManager_IsComponentActiveInMask_TisRuntimeObject_m1E6203C9BCF6BAA2CB860F2CAD52304B1C4FC7E2_gshared (VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181 * __this, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___layerMask0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mAF5ECE514EBBFDF70BC04B74C22FCA11AE8F50F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8AAB63E2716F881CEFF7994A1FC27D1D6D5D0B35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBE0C626E2FD3A12EB78158C34DC7E59DA8B5B01D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m592B3F212F5C1D9FD3FBAB391854B3487FA569C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDD65420B0C51E00EEE7174BC1A9CFB71EEB0D662_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEA25DFFCAB673BD76ADA473172AD1E090CD3B1E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// int mask = layerMask.value;
		int32_t L_0;
		L_0 = LayerMask_get_value_m6380C7449537F99361797225E179A9448A53DDF9((LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 *)(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 *)(&___layerMask0), /*hidden argument*/NULL);
		V_0 = (int32_t)L_0;
		// foreach (var kvp in m_SortedVolumes)
		Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * L_1 = (Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D *)__this->get_m_SortedVolumes_4();
		NullCheck((Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D *)L_1);
		Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5  L_2;
		L_2 = Dictionary_2_GetEnumerator_mAF5ECE514EBBFDF70BC04B74C22FCA11AE8F50F2((Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D *)L_1, /*hidden argument*/Dictionary_2_GetEnumerator_mAF5ECE514EBBFDF70BC04B74C22FCA11AE8F50F2_RuntimeMethod_var);
		V_1 = (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 )L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0094;
		}

IL_0016:
		{
			// foreach (var kvp in m_SortedVolumes)
			KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  L_3;
			L_3 = Enumerator_get_Current_m8AAB63E2716F881CEFF7994A1FC27D1D6D5D0B35_inline((Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *)(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m8AAB63E2716F881CEFF7994A1FC27D1D6D5D0B35_RuntimeMethod_var);
			V_2 = (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 )L_3;
			// if (kvp.Key != mask)
			int32_t L_4;
			L_4 = KeyValuePair_2_get_Key_m592B3F212F5C1D9FD3FBAB391854B3487FA569C7_inline((KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *)(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m592B3F212F5C1D9FD3FBAB391854B3487FA569C7_RuntimeMethod_var);
			int32_t L_5 = V_0;
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_0094;
			}
		}

IL_0028:
		{
			// foreach (var volume in kvp.Value)
			List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * L_6;
			L_6 = KeyValuePair_2_get_Value_mDD65420B0C51E00EEE7174BC1A9CFB71EEB0D662_inline((KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *)(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_mDD65420B0C51E00EEE7174BC1A9CFB71EEB0D662_RuntimeMethod_var);
			NullCheck((List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A *)L_6);
			Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5  L_7;
			L_7 = List_1_GetEnumerator_mEA25DFFCAB673BD76ADA473172AD1E090CD3B1E8((List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A *)L_6, /*hidden argument*/List_1_GetEnumerator_mEA25DFFCAB673BD76ADA473172AD1E090CD3B1E8_RuntimeMethod_var);
			V_3 = (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 )L_7;
		}

IL_0035:
		try
		{ // begin try (depth: 2)
			{
				goto IL_007b;
			}

IL_0037:
			{
				// foreach (var volume in kvp.Value)
				Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * L_8;
				L_8 = Enumerator_get_Current_mBE0C626E2FD3A12EB78158C34DC7E59DA8B5B01D_inline((Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *)(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *)(&V_3), /*hidden argument*/Enumerator_get_Current_mBE0C626E2FD3A12EB78158C34DC7E59DA8B5B01D_RuntimeMethod_var);
				V_4 = (Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_8;
				// if (!volume.enabled || volume.profileRef == null)
				Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * L_9 = V_4;
				NullCheck((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)L_9);
				bool L_10;
				L_10 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)L_9, /*hidden argument*/NULL);
				if (!L_10)
				{
					goto IL_007b;
				}
			}

IL_0049:
			{
				Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * L_11 = V_4;
				NullCheck((Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_11);
				VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * L_12;
				L_12 = Volume_get_profileRef_mD5E838C1AF9D9910187C2A26004E32813359618C((Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_11, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_13;
				L_13 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				if (L_13)
				{
					goto IL_007b;
				}
			}

IL_0058:
			{
				// if (volume.profileRef.TryGet(out T component) && component.active)
				Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * L_14 = V_4;
				NullCheck((Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_14);
				VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * L_15;
				L_15 = Volume_get_profileRef_mD5E838C1AF9D9910187C2A26004E32813359618C((Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_14, /*hidden argument*/NULL);
				NullCheck((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)L_15);
				bool L_16;
				L_16 = ((  bool (*) (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)L_15, (RuntimeObject **)(RuntimeObject **)(&V_5), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
				if (!L_16)
				{
					goto IL_007b;
				}
			}

IL_0068:
			{
				RuntimeObject * L_17 = V_5;
				NullCheck(L_17);
				bool L_18 = (bool)((VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E *)L_17)->get_active_4();
				if (!L_18)
				{
					goto IL_007b;
				}
			}

IL_0076:
			{
				// return true;
				V_6 = (bool)1;
				IL2CPP_LEAVE(0xB2, FINALLY_0086);
			}

IL_007b:
			{
				// foreach (var volume in kvp.Value)
				bool L_19;
				L_19 = Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692((Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *)(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0037;
				}
			}

IL_0084:
			{
				IL2CPP_LEAVE(0x94, FINALLY_0086);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0086;
		}

FINALLY_0086:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 > L_20(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5_il2cpp_TypeInfo_var, (&V_3));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__142 = il2cpp_codegen_get_interface_invoke_data(0, (&L_20), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__142.methodPtr)((RuntimeObject*)(&L_20), /*hidden argument*/il2cpp_virtual_invoke_data__142.method);
			V_3 = L_20.m_Value;
			IL2CPP_END_FINALLY(134)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(134)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xB2, FINALLY_00a2);
			IL2CPP_JUMP_TBL(0x94, IL_0094)
		}

IL_0094:
		{
			// foreach (var kvp in m_SortedVolumes)
			bool L_21;
			L_21 = Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B((Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *)(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_0016;
			}
		}

IL_00a0:
		{
			IL2CPP_LEAVE(0xB0, FINALLY_00a2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a2;
	}

FINALLY_00a2:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 > L_22(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5_il2cpp_TypeInfo_var, (&V_1));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__170 = il2cpp_codegen_get_interface_invoke_data(0, (&L_22), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__170.methodPtr)((RuntimeObject*)(&L_22), /*hidden argument*/il2cpp_virtual_invoke_data__170.method);
		V_1 = L_22.m_Value;
		IL2CPP_END_FINALLY(162)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(162)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB2, IL_00b2)
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
	}

IL_00b0:
	{
		// return false;
		return (bool)0;
	}

IL_00b2:
	{
		// }
		bool L_23 = V_6;
		return (bool)L_23;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Boolean>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_GetValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mA77C6BDE8438CBC4A62266045DD63FD9142AD02D_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201 *)((VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Boolean>::get_value() */, (VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201 *)((VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (bool)L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.Color>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  VolumeParameter_GetValue_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_mF25E7DF7C52C71A95E527DF529EB7EE4BD41167A_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A *)((VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Color>::get_value() */, (VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A *)((VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_GetValue_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m100ED1424F5963AB5C56D61C97B3427E6F264E6E_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32>::get_value() */, (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (int32_t)L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.LayerMask>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  VolumeParameter_GetValue_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mF8A79B835E8726F18021939CBB42AAE21BC856FF_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0;
		L_0 = VirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::get_value() */, (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VolumeParameter_GetValue_TisRuntimeObject_mC69574109E6EFA56FF44E63DCFE350FA0CC099AB_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		RuntimeObject * L_0;
		L_0 = VirtFuncInvoker0< RuntimeObject * >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Object>::get_value() */, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (RuntimeObject *)L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeParameter_GetValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m71A3CFF33EDE42C9127D094FE7BD9808E667AD6C_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		float L_0;
		L_0 = VirtFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (float)L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  VolumeParameter_GetValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m0E3F548FE9AC793809DC3C8DBE87742A114FF199_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = VirtFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value() */, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VolumeParameter_GetValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m2483CFA48EA8E00EFA323A101A08322806931A02_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::get_value() */, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  VolumeParameter_GetValue_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m8B862B97BA0B205CF27280AC2F68D801241F333A_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0;
		L_0 = VirtFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_0;
	}
}
// T UnityEngine.Rendering.VolumeProfile::Add<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VolumeProfile_Add_TisRuntimeObject_mCE1E1F8B084190E209D0A8F8237FA7F83751D962_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, bool ___overrides0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (T)Add(typeof(T), overrides);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___overrides0;
		NullCheck((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this);
		VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_3;
		L_3 = VolumeProfile_Add_m79223D2CF959C9E6D63D9FF846FF1B6A3B00FD10((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this, (Type_t *)L_1, (bool)L_2, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::Has<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_Has_TisRuntimeObject_mDB54341DE40B45F7005866878043CF31DBA99100_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Has(typeof(T));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this);
		bool L_2;
		L_2 = VolumeProfile_Has_m4B7E73066F4F7D7A45656DA57A7C994260BD089D((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		return (bool)L_2;
	}
}
// System.Void UnityEngine.Rendering.VolumeProfile::Remove<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeProfile_Remove_TisRuntimeObject_mF7D69686CD890F54D2E0F7E551EA8543DEB45291_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Remove(typeof(T));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this);
		VolumeProfile_Remove_m932397236384F0E991CE7113270E019856DB5E86((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGet<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_mC7E64B2A6DC984083DED5D6F3E4FDCF0CE5D6026_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TryGet(typeof(T), out component);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		RuntimeObject ** L_2 = ___component0;
		NullCheck((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this);
		bool L_3;
		L_3 = ((  bool (*) (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *, Type_t *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this, (Type_t *)L_1, (RuntimeObject **)(RuntimeObject **)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (bool)L_3;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGet<System.Object>(System.Type,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_m4332B8785159649FB61B32048D85429ADD228254_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, RuntimeObject ** ___component1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// component = null;
		RuntimeObject ** L_0 = ___component1;
		il2cpp_codegen_initobj(L_0, sizeof(RuntimeObject *));
		// foreach (var comp in components)
		List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * L_1 = (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)__this->get_components_4();
		NullCheck((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_1);
		Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  L_2;
		L_2 = List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_1, /*hidden argument*/List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		V_0 = (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB )L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0015:
		{
			// foreach (var comp in components)
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_3;
			L_3 = Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_inline((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_0), /*hidden argument*/Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
			V_1 = (VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E *)L_3;
			// if (comp.GetType() == type)
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_4 = V_1;
			NullCheck((RuntimeObject *)L_4);
			Type_t * L_5;
			L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
			Type_t * L_6 = ___type0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			bool L_7;
			L_7 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_5, (Type_t *)L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_003b;
			}
		}

IL_002b:
		{
			// component = (T)comp;
			RuntimeObject ** L_8 = ___component1;
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_9 = V_1;
			*(RuntimeObject **)L_8 = ((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_8, (void*)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
			// return true;
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x56, FINALLY_0046);
		}

IL_003b:
		{
			// foreach (var comp in components)
			bool L_10;
			L_10 = Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0015;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB > L_11(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var, (&V_0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__78 = il2cpp_codegen_get_interface_invoke_data(0, (&L_11), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__78.methodPtr)((RuntimeObject*)(&L_11), /*hidden argument*/il2cpp_virtual_invoke_data__78.method);
		V_0 = L_11.m_Value;
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		// return false;
		return (bool)0;
	}

IL_0056:
	{
		// }
		bool L_12 = V_2;
		return (bool)L_12;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGetAllSubclassOf<System.Object>(System.Type,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGetAllSubclassOf_TisRuntimeObject_mB3CC30C673E5FE2BA12751E91C01F1DC34D5BDC6_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// int count = result.Count;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___result1;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (int32_t)L_1;
		// foreach (var comp in components)
		List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * L_2 = (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)__this->get_components_4();
		NullCheck((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_2);
		Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  L_3;
		L_3 = List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_2, /*hidden argument*/List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		V_1 = (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB )L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_0015:
		{
			// foreach (var comp in components)
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_4;
			L_4 = Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_inline((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_1), /*hidden argument*/Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
			V_2 = (VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E *)L_4;
			// if (comp.GetType().IsSubclassOf(type))
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_5 = V_2;
			NullCheck((RuntimeObject *)L_5);
			Type_t * L_6;
			L_6 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_5, /*hidden argument*/NULL);
			Type_t * L_7 = ___type0;
			NullCheck((Type_t *)L_6);
			bool L_8;
			L_8 = VirtFuncInvoker1< bool, Type_t * >::Invoke(103 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, (Type_t *)L_6, (Type_t *)L_7);
			if (!L_8)
			{
				goto IL_0037;
			}
		}

IL_002b:
		{
			// result.Add((T)comp);
			List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_9 = ___result1;
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_10 = V_2;
			NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_9);
			((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_9, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_10, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		}

IL_0037:
		{
			// foreach (var comp in components)
			bool L_11;
			L_11 = Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0015;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB > L_12(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var, (&V_1));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__74 = il2cpp_codegen_get_interface_invoke_data(0, (&L_12), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__74.methodPtr)((RuntimeObject*)(&L_12), /*hidden argument*/il2cpp_virtual_invoke_data__74.method);
		V_1 = L_12.m_Value;
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		// return count != result.Count;
		int32_t L_13 = V_0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_14 = ___result1;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_14);
		int32_t L_15;
		L_15 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGetSubclassOf<System.Object>(System.Type,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGetSubclassOf_TisRuntimeObject_mE8153CC3B89807700D2B70752C6840FAE4135D47_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, RuntimeObject ** ___component1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// component = null;
		RuntimeObject ** L_0 = ___component1;
		il2cpp_codegen_initobj(L_0, sizeof(RuntimeObject *));
		// foreach (var comp in components)
		List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * L_1 = (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)__this->get_components_4();
		NullCheck((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_1);
		Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  L_2;
		L_2 = List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_1, /*hidden argument*/List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		V_0 = (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB )L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0015:
		{
			// foreach (var comp in components)
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_3;
			L_3 = Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_inline((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_0), /*hidden argument*/Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
			V_1 = (VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E *)L_3;
			// if (comp.GetType().IsSubclassOf(type))
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_4 = V_1;
			NullCheck((RuntimeObject *)L_4);
			Type_t * L_5;
			L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
			Type_t * L_6 = ___type0;
			NullCheck((Type_t *)L_5);
			bool L_7;
			L_7 = VirtFuncInvoker1< bool, Type_t * >::Invoke(103 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, (Type_t *)L_5, (Type_t *)L_6);
			if (!L_7)
			{
				goto IL_003b;
			}
		}

IL_002b:
		{
			// component = (T)comp;
			RuntimeObject ** L_8 = ___component1;
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_9 = V_1;
			*(RuntimeObject **)L_8 = ((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_8, (void*)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
			// return true;
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x56, FINALLY_0046);
		}

IL_003b:
		{
			// foreach (var comp in components)
			bool L_10;
			L_10 = Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0015;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB > L_11(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var, (&V_0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__78 = il2cpp_codegen_get_interface_invoke_data(0, (&L_11), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__78.methodPtr)((RuntimeObject*)(&L_11), /*hidden argument*/il2cpp_virtual_invoke_data__78.method);
		V_0 = L_11.m_Value;
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		// return false;
		return (bool)0;
	}

IL_0056:
	{
		// }
		bool L_12 = V_2;
		return (bool)L_12;
	}
}
// T UnityEngine.Rendering.VolumeStack::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VolumeStack_GetComponent_TisRuntimeObject_m38AF7B6B1BA6854A1DB152DEEA9E04079D5DFCD6_gshared (VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var comp = GetComponent(typeof(T));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC *)__this);
		VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_2;
		L_2 = VolumeStack_GetComponent_m2C8AE635D2EE506EE0C2C436D6F5017DB10B288E((VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		// return (T)comp;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method)
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m0D404D0EDA77F50046B5592673CEADED3EB1DDF9_gshared_inline (DynamicArray_1_tBD159187A396D2634FDBCFD5A8F85F26FA3DF11D * __this, const RuntimeMethod* method)
{
	{
		// public int size { get; private set; }
		int32_t L_0 = (int32_t)__this->get_U3CsizeU3Ek__BackingField_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  L_0 = (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )__this->get_current_3();
		return (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
