#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<Visometry.DesignSystem.NotificationObject,System.Boolean>
struct Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.IEnumerable`1<Visometry.DesignSystem.NotificationObject>
struct IEnumerable_1_t0D25E34063DC114BAFBF23CA511023630931925B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>
struct List_1_t710D8F240C9C05164D0D497813701A5F6A339560;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Predicate`1<Visometry.DesignSystem.NotificationObject>
struct Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Visometry.DesignSystem.NotificationObject[]
struct NotificationObjectU5BU5D_tA93E55B3FF786370842E41D1543B771BD53CC808;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Visometry.DesignSystem.LinearProgressBar
struct LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Visometry.DesignSystem.Notification
struct Notification_t539694385F8222898937FEB72194834CA132BFDD;
// Visometry.DesignSystem.NotificationDisplay
struct NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8;
// Visometry.DesignSystem.NotificationObject
struct NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.Outline
struct Outline_t9CF146E077DC65F441EDEC463AA6710374108084;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Visometry.DesignSystem.ProgressBarNotification
struct ProgressBarNotification_tE0CBCC55BADC1CA1EF4F67539BE791EC11D004D2;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Shadow
struct Shadow_tCAA59FE9D6B0DC6DCC505E8E22D8D3C05BE6DE95;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Visometry.DesignSystem.UIDisplay
struct UIDisplay_t64D1F96DF55A62549BC8AFC2B349668F8F408D6D;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Visometry.DesignSystem.Notification/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tBCF013EB9E0F9E008CF1CCA1B398330DA4DBA1A9;
// Visometry.DesignSystem.Notification/NotificationDelegate
struct NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3;
// Visometry.DesignSystem.NotificationDisplay/<>c
struct U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511;
// Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t86F517508BBF2449716A8988E73ABCDD2E0E044C;
// Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_tD140B4D1E15335ABFC070C94E8DBF8229384DD46;
// Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2;
// Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tD15B502C24E3622A880EE73919EF9D663005DE3C;
// Visometry.DesignSystem.NotificationManager/AddNotificationAction
struct AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B;
// Visometry.DesignSystem.NotificationManager/ResetNotificationAction
struct ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Kind_tE6BC502D960468CACF8E0F32596A4699E65366C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t710D8F240C9C05164D0D497813701A5F6A339560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_t86F517508BBF2449716A8988E73ABCDD2E0E044C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass18_0_tD140B4D1E15335ABFC070C94E8DBF8229384DD46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass31_0_tBCF013EB9E0F9E008CF1CCA1B398330DA4DBA1A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_tD15B502C24E3622A880EE73919EF9D663005DE3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16D938BDE7CA587C1D35A2282D03CEC172C5CCDD;
IL2CPP_EXTERN_C String_t* _stringLiteral3AC1537F92520DB9AB6C0C518A00293997E2A0CC;
IL2CPP_EXTERN_C String_t* _stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7;
IL2CPP_EXTERN_C String_t* _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890;
IL2CPP_EXTERN_C String_t* _stringLiteral70F2D3E776C2893EFBCD12D863C5C9061CFBA6DA;
IL2CPP_EXTERN_C String_t* _stringLiteral75A2ABFAA0DF56F97F03D53B032AE89D807AA673;
IL2CPP_EXTERN_C String_t* _stringLiteralB7EE2690FC484B04213C2D37CAD7AAD1E9FEDB5D;
IL2CPP_EXTERN_C String_t* _stringLiteralC28B175BF855B5BB33FB3D91A9438F318165B323;
IL2CPP_EXTERN_C String_t* _stringLiteralD5E8C165BB837598AB01ED080B819F445653F554;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralD8270C67B438EB1CEB5DAA2BF9B7E661F78A48EC;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE5EEADD3479EA74E5B5AA9BC0A97C8F9B11E7156;
IL2CPP_EXTERN_C String_t* _stringLiteralF5470D00D7F3AFAEEA2B1A6FC9D9A36A789B95B8;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5_m86555D0E1AF02E3D3878F4881CF1B1C996E875A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5_m4F9FC7EFCDBCF1EB327D6C21CBFDFFD3D8C18759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m5E590ECACF0B2ACB24A36C1674B1E8B933A6E0F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m8BEC98625C969FD99679843420659E8C7BF57854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m7017170691E7E1FA69C126D78524592E6BA02579_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m9E0CF9C6E437C055452F628E2D9DAAA1F6931C24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7F6F0951A4FD1AF9DD792535173A98A622C5A74E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE4171F608ED4717F676B9CE94E6ACBE308CE560F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE4A180E3C53247C505420B2D7194256567276F35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F_m34737D7B96F4E117EFF9A77CBFFDC69814EA7273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNotification_t539694385F8222898937FEB72194834CA132BFDD_mFEAC2D832E99D027EA21A3CE386840973E69407E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m40CEDFB2A03BECA4D5097077817AEF275C47BC8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE82EE3D1654077E4C84D5B2BA09FA7A7EA7680BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mE0F01A3EDBB68359794CABCE083FE479F7ACA368_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindLastIndex_mC02D0E06A64EB65A5A894A49F4775662F1CBC200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m806929870E74F2835341A0E2FD435E2D43120392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m68C56FEB891606ADC19CA7013FB3C11C28E2764F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m1AA700370BD1F086A50925D299AEC1E20F2C5D1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mE328480DACD0C7BAA2AAF0DB26C269DDA42AA3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mA9B8597CBDAAE70E0F4C6BE3B729D90B28468658_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m395FA195311C203A565B57418C452E41AF0AD716_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF091D009E201A4AC791A6114992C1C2BE90205E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotificationDisplay_AddNotification_mF33DA790E7E2DF4F1700756C94053A1068436592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotificationDisplay_DismissNotification_m75B962C0B8B2554959B6D29F41E985CD6D1DCE3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotificationDisplay_HandleNotificationDeletion_m6A0709C2C6A3D8D3617FA6E879CCF64EE32C26B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotificationDisplay_ResetNotifications_m91F515FCAD08759574BF90C78BF1EA1070797812_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotificationManager_ToString_mCA507DC7CE95745526D8BB94F1AD38DF3B0B896E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Notification_SendDestroyMessage_m7BA15476F4B2C764642E52BDF6BAC1BFB748C707_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisLinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F_mF66282135F738BE7DEBB9AC3E37B51A12BC5CE2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisNotification_t539694385F8222898937FEB72194834CA132BFDD_mC908F28AF8A2E35A315FBD7B8940D9CD9642617A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAddNotificationU3Eb__6_2_m67D783E0B544D9128DD97D64F24B00CD5531D633_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindNextNotificationInListU3Eb__17_1_m7E7E1E3863114B1E8109786F21C9B43BD036254B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInstantiateNextInfoNotificationU3Eb__8_0_m1503EBA209255609036D54F3D776FE4A408969C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CFindNextNotificationInListU3Eb__0_mC77834930BCA5603CE4F5508666C88C3FD5C0ABC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CGetNotificationObjectU3Eb__0_m43567A7E0CEEBD01078A4C74ACFB33675FDF1C3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass31_0_U3CSetActionU3Eb__0_m9FE154A221C607E9A0699282EB9D2FD5493A37D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CAddNotificationU3Eb__0_mD246622525E77DDB86E59A8CF3C28B601C49BA9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CAddNotificationU3Eb__1_m9E89AD1001084E48C7F610DD2BB1C3D816C5C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CReplaceNotificationFromSameCategoryU3Eb__0_m32421FD950F1C9CF594DC58FE9A7CA3F9FEF1EC1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE1BC373E52F9378E75AEA7EBFDC7DFBF2E6A5B09 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>
struct List_1_t710D8F240C9C05164D0D497813701A5F6A339560  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NotificationObjectU5BU5D_tA93E55B3FF786370842E41D1543B771BD53CC808* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// Visometry.DesignSystem.NotificationManager
struct NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33  : public RuntimeObject
{
};

// Visometry.DesignSystem.ProgressBarNotification
struct ProgressBarNotification_tE0CBCC55BADC1CA1EF4F67539BE791EC11D004D2  : public RuntimeObject
{
	// Visometry.DesignSystem.LinearProgressBar Visometry.DesignSystem.ProgressBarNotification::progressBar
	LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* ___progressBar_0;
	// System.String Visometry.DesignSystem.ProgressBarNotification::notificationCategory
	String_t* ___notificationCategory_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// Visometry.DesignSystem.Notification/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tBCF013EB9E0F9E008CF1CCA1B398330DA4DBA1A9  : public RuntimeObject
{
	// System.Action Visometry.DesignSystem.Notification/<>c__DisplayClass31_0::action
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action_0;
};

// Visometry.DesignSystem.NotificationDisplay/<>c
struct U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511  : public RuntimeObject
{
};

// Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_tD140B4D1E15335ABFC070C94E8DBF8229384DD46  : public RuntimeObject
{
	// Visometry.DesignSystem.Notification Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass18_0::notification
	Notification_t539694385F8222898937FEB72194834CA132BFDD* ___notification_0;
};

// Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2  : public RuntimeObject
{
	// Visometry.DesignSystem.NotificationObject Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass6_0::newNotification
	NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___newNotification_0;
};

// Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tD15B502C24E3622A880EE73919EF9D663005DE3C  : public RuntimeObject
{
	// Visometry.DesignSystem.NotificationObject Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass9_0::notificationObject
	NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___notificationObject_0;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Visometry.DesignSystem.NotificationObject>
struct Enumerator_tCF7B497BE71B0CB6A8E74E65DF960435BFA87B42 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t710D8F240C9C05164D0D497813701A5F6A339560* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ____current_3;
};

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

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_t36837ED12068DF1582CC20489D571B0BCAA7AD19 
{
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Image/Type
struct Type_t81D6F138C2FC745112D5247CD91BD483EDFFC041 
{
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;
};

// Visometry.DesignSystem.Notification/Kind
struct Kind_tE6BC502D960468CACF8E0F32596A4699E65366C4 
{
	// System.Int32 Visometry.DesignSystem.Notification/Kind::value__
	int32_t ___value___2;
};

// Visometry.DesignSystem.Notification/Position
struct Position_t0200D8B40069C5F1E73517072C07243E9C82F8FF 
{
	// System.Int32 Visometry.DesignSystem.Notification/Position::value__
	int32_t ___value___2;
};

// Visometry.DesignSystem.Notification/Type
struct Type_t2415B37AE8B74FBF5F0A6E4D2B9E7A69FF3C439C 
{
	// System.Int32 Visometry.DesignSystem.Notification/Type::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Selectable/Transition
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Slider/Direction
struct Direction_t4C81D17BB6C089A0EC1C4934525B86E75E693EFA 
{
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// Visometry.DesignSystem.NotificationObject
struct NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6  : public RuntimeObject
{
	// Visometry.DesignSystem.Notification Visometry.DesignSystem.NotificationObject::notification
	Notification_t539694385F8222898937FEB72194834CA132BFDD* ___notification_0;
	// Visometry.DesignSystem.Notification/Kind Visometry.DesignSystem.NotificationObject::kind
	int32_t ___kind_1;
	// System.String Visometry.DesignSystem.NotificationObject::contentCategory
	String_t* ___contentCategory_2;
	// System.Int32 Visometry.DesignSystem.NotificationObject::priority
	int32_t ___priority_3;
	// Visometry.DesignSystem.Notification/Type Visometry.DesignSystem.NotificationObject::type
	int32_t ___type_4;
	// System.String Visometry.DesignSystem.NotificationObject::title
	String_t* ___title_5;
	// System.String Visometry.DesignSystem.NotificationObject::caption
	String_t* ___caption_6;
	// System.Action Visometry.DesignSystem.NotificationObject::onAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onAction_7;
	// UnityEngine.GameObject Visometry.DesignSystem.NotificationObject::additionalContent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___additionalContent_8;
	// System.Boolean Visometry.DesignSystem.NotificationObject::dismissAutomatically
	bool ___dismissAutomatically_9;
	// System.Int32 Visometry.DesignSystem.NotificationObject::encounters
	int32_t ___encounters_10;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Visometry.DesignSystem.Notification/<TriggerDestroyAfterSeconds>d__34
struct U3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5 
{
	// System.Int32 Visometry.DesignSystem.Notification/<TriggerDestroyAfterSeconds>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Visometry.DesignSystem.Notification/<TriggerDestroyAfterSeconds>d__34::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// System.Single Visometry.DesignSystem.Notification/<TriggerDestroyAfterSeconds>d__34::seconds
	float ___seconds_2;
	// Visometry.DesignSystem.Notification Visometry.DesignSystem.Notification/<TriggerDestroyAfterSeconds>d__34::<>4__this
	Notification_t539694385F8222898937FEB72194834CA132BFDD* ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter Visometry.DesignSystem.Notification/<TriggerDestroyAfterSeconds>d__34::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
};

// Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t86F517508BBF2449716A8988E73ABCDD2E0E044C  : public RuntimeObject
{
	// Visometry.DesignSystem.Notification/Kind Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass17_0::kind
	int32_t ___kind_0;
};

// System.Func`2<Visometry.DesignSystem.NotificationObject,System.Boolean>
struct Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC  : public MulticastDelegate_t
{
};

// System.Predicate`1<Visometry.DesignSystem.NotificationObject>
struct Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// Visometry.DesignSystem.Notification/NotificationDelegate
struct NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3  : public MulticastDelegate_t
{
};

// Visometry.DesignSystem.NotificationManager/AddNotificationAction
struct AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B  : public MulticastDelegate_t
{
};

// Visometry.DesignSystem.NotificationManager/ResetNotificationAction
struct ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3  : public MulticastDelegate_t
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// Visometry.DesignSystem.LinearProgressBar
struct LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider Visometry.DesignSystem.LinearProgressBar::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_4;
};

// Visometry.DesignSystem.Notification
struct Notification_t539694385F8222898937FEB72194834CA132BFDD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Visometry.DesignSystem.Notification::isDisabled
	bool ___isDisabled_4;
	// UnityEngine.UI.Text Visometry.DesignSystem.Notification::title
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___title_5;
	// UnityEngine.UI.Text Visometry.DesignSystem.Notification::caption
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___caption_6;
	// UnityEngine.UI.Text Visometry.DesignSystem.Notification::icon
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___icon_7;
	// UnityEngine.UI.Outline Visometry.DesignSystem.Notification::outline
	Outline_t9CF146E077DC65F441EDEC463AA6710374108084* ___outline_8;
	// UnityEngine.UI.Image Visometry.DesignSystem.Notification::border
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___border_9;
	// UnityEngine.UI.Image Visometry.DesignSystem.Notification::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_10;
	// UnityEngine.UI.Button Visometry.DesignSystem.Notification::actionButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___actionButton_11;
	// UnityEngine.UI.Button Visometry.DesignSystem.Notification::closeButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___closeButton_12;
	// UnityEngine.RectTransform Visometry.DesignSystem.Notification::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Visometry.DesignSystem.Notification::children
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___children_14;
	// System.Single Visometry.DesignSystem.Notification::originalYPosition
	float ___originalYPosition_15;
	// System.Boolean Visometry.DesignSystem.Notification::isBeingDestroyed
	bool ___isBeingDestroyed_17;
	// System.Single Visometry.DesignSystem.Notification::spacing
	float ___spacing_18;
	// Visometry.DesignSystem.Notification/NotificationDelegate Visometry.DesignSystem.Notification::OnWaitingForDestroyFinished
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* ___OnWaitingForDestroyFinished_19;
	// Visometry.DesignSystem.Notification/NotificationDelegate Visometry.DesignSystem.Notification::OnDeleted
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* ___OnDeleted_20;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Visometry.DesignSystem.UIDisplay
struct UIDisplay_t64D1F96DF55A62549BC8AFC2B349668F8F408D6D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas Visometry.DesignSystem.UIDisplay::displayCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___displayCanvas_4;
};

// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Graphic_4;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// Visometry.DesignSystem.NotificationDisplay
struct NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8  : public UIDisplay_t64D1F96DF55A62549BC8AFC2B349668F8F408D6D
{
	// System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject> Visometry.DesignSystem.NotificationDisplay::errorAndWarningNotificationsQueue
	List_1_t710D8F240C9C05164D0D497813701A5F6A339560* ___errorAndWarningNotificationsQueue_5;
	// System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject> Visometry.DesignSystem.NotificationDisplay::activeInfoNotificationStack
	List_1_t710D8F240C9C05164D0D497813701A5F6A339560* ___activeInfoNotificationStack_6;
	// Visometry.DesignSystem.NotificationObject Visometry.DesignSystem.NotificationDisplay::activeErrorOrWarningNotification
	NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___activeErrorOrWarningNotification_8;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Shadow
struct Shadow_tCAA59FE9D6B0DC6DCC505E8E22D8D3C05BE6DE95  : public BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D
{
	// UnityEngine.Color UnityEngine.UI.Shadow::m_EffectColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_EffectColor_5;
	// UnityEngine.Vector2 UnityEngine.UI.Shadow::m_EffectDistance
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_EffectDistance_6;
	// System.Boolean UnityEngine.UI.Shadow::m_UseGraphicAlpha
	bool ___m_UseGraphicAlpha_7;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Outline
struct Outline_t9CF146E077DC65F441EDEC463AA6710374108084  : public Shadow_tCAA59FE9D6B0DC6DCC505E8E22D8D3C05BE6DE95
{
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>
struct List_1_t710D8F240C9C05164D0D497813701A5F6A339560_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NotificationObjectU5BU5D_tA93E55B3FF786370842E41D1543B771BD53CC808* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// Visometry.DesignSystem.NotificationManager
struct NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_StaticFields
{
	// Visometry.DesignSystem.NotificationManager/AddNotificationAction Visometry.DesignSystem.NotificationManager::OnNotificationAdded
	AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* ___OnNotificationAdded_0;
	// Visometry.DesignSystem.NotificationManager/ResetNotificationAction Visometry.DesignSystem.NotificationManager::OnNotificationReset
	ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* ___OnNotificationReset_1;
};

// Visometry.DesignSystem.NotificationManager

// Visometry.DesignSystem.ProgressBarNotification

// Visometry.DesignSystem.ProgressBarNotification

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// Visometry.DesignSystem.Notification/<>c__DisplayClass31_0

// Visometry.DesignSystem.Notification/<>c__DisplayClass31_0

// Visometry.DesignSystem.NotificationDisplay/<>c
struct U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_StaticFields
{
	// Visometry.DesignSystem.NotificationDisplay/<>c Visometry.DesignSystem.NotificationDisplay/<>c::<>9
	U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511* ___U3CU3E9_0;
	// System.Predicate`1<Visometry.DesignSystem.NotificationObject> Visometry.DesignSystem.NotificationDisplay/<>c::<>9__6_2
	Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5* ___U3CU3E9__6_2_1;
	// System.Func`2<Visometry.DesignSystem.NotificationObject,System.Boolean> Visometry.DesignSystem.NotificationDisplay/<>c::<>9__8_0
	Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* ___U3CU3E9__8_0_2;
	// System.Func`2<Visometry.DesignSystem.NotificationObject,System.Boolean> Visometry.DesignSystem.NotificationDisplay/<>c::<>9__17_1
	Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* ___U3CU3E9__17_1_3;
};

// Visometry.DesignSystem.NotificationDisplay/<>c

// Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass18_0

// Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass18_0

// Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass6_0

// Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass6_0

// Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass9_0

// Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass9_0

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<Visometry.DesignSystem.NotificationObject>

// System.Collections.Generic.List`1/Enumerator<Visometry.DesignSystem.NotificationObject>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// System.Void

// System.Void

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// Visometry.DesignSystem.Notification/Kind

// Visometry.DesignSystem.Notification/Kind

// Visometry.DesignSystem.Notification/Position

// Visometry.DesignSystem.Notification/Position

// Visometry.DesignSystem.Notification/Type

// Visometry.DesignSystem.Notification/Type

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// Visometry.DesignSystem.NotificationObject
struct NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_StaticFields
{
	// UnityEngine.Color Visometry.DesignSystem.NotificationObject::errorColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___errorColor_13;
	// UnityEngine.Color Visometry.DesignSystem.NotificationObject::warningColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___warningColor_14;
	// UnityEngine.Color Visometry.DesignSystem.NotificationObject::successColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___successColor_15;
	// UnityEngine.Color Visometry.DesignSystem.NotificationObject::infoColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___infoColor_16;
};

// Visometry.DesignSystem.NotificationObject

// Visometry.DesignSystem.Notification/<TriggerDestroyAfterSeconds>d__34

// Visometry.DesignSystem.Notification/<TriggerDestroyAfterSeconds>d__34

// Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass17_0

// Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass17_0

// System.Func`2<Visometry.DesignSystem.NotificationObject,System.Boolean>

// System.Func`2<Visometry.DesignSystem.NotificationObject,System.Boolean>

// System.Predicate`1<Visometry.DesignSystem.NotificationObject>

// System.Predicate`1<Visometry.DesignSystem.NotificationObject>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// Visometry.DesignSystem.Notification/NotificationDelegate

// Visometry.DesignSystem.Notification/NotificationDelegate

// Visometry.DesignSystem.NotificationManager/AddNotificationAction

// Visometry.DesignSystem.NotificationManager/AddNotificationAction

// Visometry.DesignSystem.NotificationManager/ResetNotificationAction

// Visometry.DesignSystem.NotificationManager/ResetNotificationAction

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// Visometry.DesignSystem.LinearProgressBar

// Visometry.DesignSystem.LinearProgressBar

// Visometry.DesignSystem.Notification

// Visometry.DesignSystem.Notification

// Visometry.DesignSystem.UIDisplay

// Visometry.DesignSystem.UIDisplay

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// Visometry.DesignSystem.NotificationDisplay

// Visometry.DesignSystem.NotificationDisplay

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.Shadow

// UnityEngine.UI.Shadow

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Outline

// UnityEngine.UI.Outline

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Visometry.DesignSystem.Notification/<TriggerDestroyAfterSeconds>d__34>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5_m4F9FC7EFCDBCF1EB327D6C21CBFDFFD3D8C18759_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Visometry.DesignSystem.Notification/<TriggerDestroyAfterSeconds>d__34>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5_m86555D0E1AF02E3D3878F4881CF1B1C996E875A6_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindLastIndex(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindLastIndex_mABE2F49A1C6C46206A1DF4BF809ED3566002DEFF_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredHeight(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LayoutUtility_GetPreferredHeight_m3E8CDE02CC980080BBD4BBA1D6BFDFD42F7CF706 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rect, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Shadow::set_effectColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shadow_set_effectColor_mCCC5DB6B7D09C5DEE0C677DEB3B9B0C578F05AF1 (Shadow_tCAA59FE9D6B0DC6DCC505E8E22D8D3C05BE6DE95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.Notification/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_mD5169C9984F757849571C417E6F9A29C9D5E251F (U3CU3Ec__DisplayClass31_0_tBCF013EB9E0F9E008CF1CCA1B398330DA4DBA1A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Visometry.DesignSystem.Notification::TriggerDestroyAfterSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_TriggerDestroyAfterSeconds_m9FEE6C4DDFBA3550ECFBC71C9614FEA3AFEE7A1C (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Visometry.DesignSystem.Notification/<TriggerDestroyAfterSeconds>d__34>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5_m4F9FC7EFCDBCF1EB327D6C21CBFDFFD3D8C18759 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5_m4F9FC7EFCDBCF1EB327D6C21CBFDFFD3D8C18759_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Visometry.DesignSystem.Notification/NotificationDelegate::Invoke(Visometry.DesignSystem.Notification)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_inline (NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* __this, Notification_t539694385F8222898937FEB72194834CA132BFDD* ___0_notification, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48 (int32_t ___0_millisecondsDelay, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Visometry.DesignSystem.Notification/<TriggerDestroyAfterSeconds>d__34>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5_m86555D0E1AF02E3D3878F4881CF1B1C996E875A6 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5_m86555D0E1AF02E3D3878F4881CF1B1C996E875A6_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.Notification::SetVisibilityOfChildren(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetVisibilityOfChildren_m22CA28A0BE48680AA5C4B864ABEE1E129E184691 (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, bool ___0_show, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.Notification/<TriggerDestroyAfterSeconds>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTriggerDestroyAfterSecondsU3Ed__34_MoveNext_m8B979DF62CCE3DBE0B583E13FC42245BDEE78299 (U3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.Notification/<TriggerDestroyAfterSeconds>d__34::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTriggerDestroyAfterSecondsU3Ed__34_SetStateMachine_m62A1764F1BBF227D787C735F23EDC4F29F071D5F (U3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationManager/AddNotificationAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddNotificationAction__ctor_m85AEFE62A5A9BB42D2F9E8E995834394D857B924 (AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationManager::add_OnNotificationAdded(Visometry.DesignSystem.NotificationManager/AddNotificationAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManager_add_OnNotificationAdded_mBCBD1AF99401F3653531A3985B7DDFDE1C444DA5 (AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* ___0_value, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationManager/ResetNotificationAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetNotificationAction__ctor_mF9BFA4F431C7B986AEC5C9ADCE7FE29AD5993820 (ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationManager::add_OnNotificationReset(Visometry.DesignSystem.NotificationManager/ResetNotificationAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManager_add_OnNotificationReset_m90F1FBDF805289053687F334D645E06A16119F0B (ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* ___0_value, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationManager::remove_OnNotificationAdded(Visometry.DesignSystem.NotificationManager/AddNotificationAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManager_remove_OnNotificationAdded_mE550E8AE9B85DFE2E6BE831570258E5A91BE0CB9 (AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* ___0_value, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationManager::remove_OnNotificationReset(Visometry.DesignSystem.NotificationManager/ResetNotificationAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManager_remove_OnNotificationReset_m41E487C9A5DBDF61019024E71FCEC5B3FDF023E8 (ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* ___0_value, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mAA5F1C418BCD8E477C670EBD55662A0AAF454BE2 (U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Visometry.DesignSystem.NotificationObject>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m58893B7FD61E49642E6822E7274E1F729BF363C5 (Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___0_object, ___1_method, method);
}
// T System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>::Find(System.Predicate`1<T>)
inline NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* List_1_Find_m806929870E74F2835341A0E2FD435E2D43120392 (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* __this, Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5* ___0_match, const RuntimeMethod* method)
{
	return ((  NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* (*) (List_1_t710D8F240C9C05164D0D497813701A5F6A339560*, Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___0_match, method);
}
// System.Void Visometry.DesignSystem.NotificationObject::IncreaseEncounters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationObject_IncreaseEncounters_m7DCA778F1585568D352CA1E22BD312F42052EA2B (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>::Add(T)
inline void List_1_Add_m40CEDFB2A03BECA4D5097077817AEF275C47BC8D_inline (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t710D8F240C9C05164D0D497813701A5F6A339560*, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Visometry.DesignSystem.NotificationDisplay::InstantiateNextErrorWarningNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_InstantiateNextErrorWarningNotification_m9CAC701168EBA8B37556C10D77B283E4A80D8C02 (NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>::FindLastIndex(System.Predicate`1<T>)
inline int32_t List_1_FindLastIndex_mC02D0E06A64EB65A5A894A49F4775662F1CBC200 (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* __this, Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t710D8F240C9C05164D0D497813701A5F6A339560*, Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5*, const RuntimeMethod*))List_1_FindLastIndex_mABE2F49A1C6C46206A1DF4BF809ED3566002DEFF_gshared)(__this, ___0_match, method);
}
// System.Void System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>::Insert(System.Int32,T)
inline void List_1_Insert_mE328480DACD0C7BAA2AAF0DB26C269DDA42AA3AA (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* __this, int32_t ___0_index, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t710D8F240C9C05164D0D497813701A5F6A339560*, int32_t, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___0_index, ___1_item, method);
}
// System.Void Visometry.DesignSystem.NotificationDisplay::InstantiateNextInfoNotification(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_InstantiateNextInfoNotification_mC193426D67C2A490E51D7C7D7FF64C13B461116F (NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_nextNotificationObject, const RuntimeMethod* method) ;
// Visometry.DesignSystem.NotificationObject Visometry.DesignSystem.NotificationDisplay::FindNextNotificationInList(System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>,Visometry.DesignSystem.Notification/Kind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* NotificationDisplay_FindNextNotificationInList_m8D73E642D37737E0E15D2CD847B0DB0AB8EDFFB3 (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* ___0_sourceList, int32_t ___1_kind, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationDisplay::SetUpNotification(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_SetUpNotification_mE72661B85C1DB9F2AEBDC28504F34A0402269F33 (NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationDisplay::ReplaceNotificationFromSameCategory(System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>,Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_ReplaceNotificationFromSameCategory_m58C988C989291975F196FAF23396DA2FD8CE2AD7 (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* ___0_notificationList, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___1_notificationObject, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>::get_Count()
inline int32_t List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_inline (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t710D8F240C9C05164D0D497813701A5F6A339560*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Func`2<Visometry.DesignSystem.NotificationObject,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m8B3CD0B7E0ED8D27F32531EAA333DC276445647B (Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<Visometry.DesignSystem.NotificationObject>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* Enumerable_FirstOrDefault_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m5E590ECACF0B2ACB24A36C1674B1E8B933A6E0F4 (RuntimeObject* ___0_source, Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* ___1_predicate, const RuntimeMethod* method)
{
	return ((  NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* (*) (RuntimeObject*, Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___0_source, ___1_predicate, method);
}
// System.Boolean System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>::Remove(T)
inline bool List_1_Remove_mA9B8597CBDAAE70E0F4C6BE3B729D90B28468658 (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t710D8F240C9C05164D0D497813701A5F6A339560*, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void Visometry.DesignSystem.NotificationDisplay::DestroyNotificationImmediate(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_DestroyNotificationImmediate_mB85C15CD7F14DC5B8C83FB404E46F72056073E7B (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationDisplay::MoveNotificationsInStack(System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_MoveNotificationsInStack_m67A46B52ABADBA46A4D168195CDB1DE0E093A095 (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* ___0_notificationStack, bool ___1_moveInPositiveDirection, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m352AF2AB0D60352AF42C0C146C8853189D4DAA0A (U3CU3Ec__DisplayClass9_0_tD15B502C24E3622A880EE73919EF9D663005DE3C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>::IndexOf(T)
inline int32_t List_1_IndexOf_m1AA700370BD1F086A50925D299AEC1E20F2C5D1B (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t710D8F240C9C05164D0D497813701A5F6A339560*, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___0_item, method);
}
// System.Void Visometry.DesignSystem.NotificationObject::Instantiate(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationObject_Instantiate_mB4885120CA756EADB2CF11599C6D26DB1FDEAE9F (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_parent, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.Notification/NotificationDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDelegate__ctor_mC7B9B94D34367C9C8551A0435B901B53B35F44DA (NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.Notification::add_OnWaitingForDestroyFinished(Visometry.DesignSystem.Notification/NotificationDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_add_OnWaitingForDestroyFinished_m013FFC21A015FDB1E97E60AD846C7791B80CF2C4 (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* ___0_value, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.Notification::add_OnDeleted(Visometry.DesignSystem.Notification/NotificationDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_add_OnDeleted_mD98FFBA022D170D868FAE064CA121526AEFAB3FD (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* ___0_value, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.Notification::remove_OnWaitingForDestroyFinished(Visometry.DesignSystem.Notification/NotificationDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_remove_OnWaitingForDestroyFinished_mE8BCD8AFD6C87465CC931497CF036881C505A6B6 (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* ___0_value, const RuntimeMethod* method) ;
// Visometry.DesignSystem.NotificationObject Visometry.DesignSystem.NotificationDisplay::GetNotificationObject(Visometry.DesignSystem.Notification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* NotificationDisplay_GetNotificationObject_mFD36B0EF876CE013BE111ED7FCAD395B7CAABB1A (NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8* __this, Notification_t539694385F8222898937FEB72194834CA132BFDD* ___0_notification, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.Notification::remove_OnDeleted(Visometry.DesignSystem.Notification/NotificationDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_remove_OnDeleted_m6465F9B75ED8E094DFF4EB2D8136B77E5C661B85 (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>::Contains(T)
inline bool List_1_Contains_mE0F01A3EDBB68359794CABCE083FE479F7ACA368 (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t710D8F240C9C05164D0D497813701A5F6A339560*, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>::GetEnumerator()
inline Enumerator_tCF7B497BE71B0CB6A8E74E65DF960435BFA87B42 List_1_GetEnumerator_m68C56FEB891606ADC19CA7013FB3C11C28E2764F (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCF7B497BE71B0CB6A8E74E65DF960435BFA87B42 (*) (List_1_t710D8F240C9C05164D0D497813701A5F6A339560*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Visometry.DesignSystem.NotificationObject>::Dispose()
inline void Enumerator_Dispose_m7F6F0951A4FD1AF9DD792535173A98A622C5A74E (Enumerator_tCF7B497BE71B0CB6A8E74E65DF960435BFA87B42* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCF7B497BE71B0CB6A8E74E65DF960435BFA87B42*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Visometry.DesignSystem.NotificationObject>::get_Current()
inline NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* Enumerator_get_Current_mE4A180E3C53247C505420B2D7194256567276F35_inline (Enumerator_tCF7B497BE71B0CB6A8E74E65DF960435BFA87B42* __this, const RuntimeMethod* method)
{
	return ((  NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* (*) (Enumerator_tCF7B497BE71B0CB6A8E74E65DF960435BFA87B42*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Visometry.DesignSystem.NotificationObject>::MoveNext()
inline bool Enumerator_MoveNext_mE4171F608ED4717F676B9CE94E6ACBE308CE560F (Enumerator_tCF7B497BE71B0CB6A8E74E65DF960435BFA87B42* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCF7B497BE71B0CB6A8E74E65DF960435BFA87B42*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>::Clear()
inline void List_1_Clear_mE82EE3D1654077E4C84D5B2BA09FA7A7EA7680BC_inline (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t710D8F240C9C05164D0D497813701A5F6A339560*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void Visometry.DesignSystem.NotificationDisplay::ResetNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_ResetNotifications_m91F515FCAD08759574BF90C78BF1EA1070797812 (NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>::get_Item(System.Int32)
inline NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* List_1_get_Item_mF091D009E201A4AC791A6114992C1C2BE90205E1 (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* (*) (List_1_t710D8F240C9C05164D0D497813701A5F6A339560*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void Visometry.DesignSystem.Notification::ApplyOffset(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_ApplyOffset_m887085EC838E6894E96E40C2368879D49011CD2C (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, bool ___0_applyInPositiveDirection, int32_t ___1_order, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mA2608983AA4FA841D7837542324C1ABDA69BB9A0 (U3CU3Ec__DisplayClass17_0_t86F517508BBF2449716A8988E73ABCDD2E0E044C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Visometry.DesignSystem.NotificationObject>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m9E0CF9C6E437C055452F628E2D9DAAA1F6931C24 (RuntimeObject* ___0_source, Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___0_source, ___1_predicate, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Visometry.DesignSystem.NotificationObject>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t710D8F240C9C05164D0D497813701A5F6A339560* Enumerable_ToList_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m7017170691E7E1FA69C126D78524592E6BA02579 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t710D8F240C9C05164D0D497813701A5F6A339560* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// TSource System.Linq.Enumerable::First<Visometry.DesignSystem.NotificationObject>(System.Collections.Generic.IEnumerable`1<TSource>)
inline NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* Enumerable_First_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m8BEC98625C969FD99679843420659E8C7BF57854 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared)(___0_source, method);
}
// System.Void Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m09AB556D2F36356686303D3F57EAB615D43450A6 (U3CU3Ec__DisplayClass18_0_tD140B4D1E15335ABFC070C94E8DBF8229384DD46* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>::.ctor()
inline void List_1__ctor_m395FA195311C203A565B57418C452E41AF0AD716 (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t710D8F240C9C05164D0D497813701A5F6A339560*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Visometry.DesignSystem.UIDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDisplay__ctor_m33EA795932093E424C6A0DBC587F66C564ECC6B6 (UIDisplay_t64D1F96DF55A62549BC8AFC2B349668F8F408D6D* __this, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationDisplay/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE23166B0EF05BC5A45F9CC688DC94F3AC18FAFA9 (U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511* __this, const RuntimeMethod* method) ;
// System.Boolean Visometry.DesignSystem.NotificationObject::IsEqualTo(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotificationObject_IsEqualTo_m3E02B3C83E0BD9A93E983FD85290626C6A87E05B (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_other, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationManager/AddNotificationAction::Invoke(Visometry.DesignSystem.NotificationObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_inline (AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String Visometry.DesignSystem.NotificationManager::ToString(Visometry.DesignSystem.Notification/Kind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotificationManager_ToString_mCA507DC7CE95745526D8BB94F1AD38DF3B0B896E (int32_t ___0_kind, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationObject::.ctor(System.String,System.String,Visometry.DesignSystem.Notification/Kind,Visometry.DesignSystem.Notification/Type,System.Action,System.String,UnityEngine.GameObject,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationObject__ctor_m12F99ECC72E03B615DA2A62A1B27018031C5B263 (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* __this, String_t* ___0_title, String_t* ___1_caption, int32_t ___2_kind, int32_t ___3_type, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_onActionButtonClick, String_t* ___5_contentCategory, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___6_additionalContent, bool ___7_dismissAutomatically, int32_t ___8_priority, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationManager::AddNotification(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManager_AddNotification_m6F92222636F75DA4B72E51C76D35E41503F6ED47 (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_newNotification, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationManager/ResetNotificationAction::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResetNotificationAction_Invoke_m34ECE10E050467C9AC44DDDF9892304B59C38682_inline (ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<Visometry.DesignSystem.Notification>(System.String)
inline Notification_t539694385F8222898937FEB72194834CA132BFDD* Resources_Load_TisNotification_t539694385F8222898937FEB72194834CA132BFDD_mC908F28AF8A2E35A315FBD7B8940D9CD9642617A (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  Notification_t539694385F8222898937FEB72194834CA132BFDD* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// T UnityEngine.GameObject::GetComponent<Visometry.DesignSystem.Notification>()
inline Notification_t539694385F8222898937FEB72194834CA132BFDD* GameObject_GetComponent_TisNotification_t539694385F8222898937FEB72194834CA132BFDD_mFEAC2D832E99D027EA21A3CE386840973E69407E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Notification_t539694385F8222898937FEB72194834CA132BFDD* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Visometry.DesignSystem.NotificationObject::InitializeNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationObject_InitializeNotification_m606FB936919FABD06021C4A2317779E388DB1C1A (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationObject::UpdateNotificationTexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationObject_UpdateNotificationTexts_m6F1272DFACD91BD7567F4CD9E157E571FC188A0B (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* __this, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.Notification::SetAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetAction_m6DE33BF6B3F3DA79595D975929E6156F64B9C86A (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.Notification::SetPosition(Visometry.DesignSystem.Notification/Position)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetPosition_mE0C57FD13ADBE20783D9D6DDB8CCC92998A3AEA8 (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, int32_t ___0_position, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.Notification::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetColor_m3EA92841E8CEDBF2096188C6D4CA0F69F4318A66 (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.Notification::SetIcon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetIcon_m77F3C494808B8FBE46048BDCA60FD531E978B37A (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, String_t* ___0_icon, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.NotificationObject::TriggerDestroyAfterSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationObject_TriggerDestroyAfterSeconds_mD9D9532FFB6044EAF8FC47CCDCF114D78BAEC8F2 (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.Notification::SetTexts(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetTexts_m6F762A3A36D6D3535383061161DF7333D669EF31 (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, String_t* ___0_titleText, String_t* ___1_captionText, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<Visometry.DesignSystem.LinearProgressBar>(System.String)
inline LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* Resources_Load_TisLinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F_mF66282135F738BE7DEBB9AC3E37B51A12BC5CE2D (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// T UnityEngine.GameObject::GetComponent<Visometry.DesignSystem.LinearProgressBar>()
inline LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* GameObject_GetComponent_TisLinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F_m34737D7B96F4E117EFF9A77CBFFDC69814EA7273 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___0_value, const RuntimeMethod* method) ;
// Visometry.DesignSystem.LinearProgressBar Visometry.DesignSystem.LinearProgressBar::Instantiate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* LinearProgressBar_Instantiate_mC61BAE438A3A43BEE4AD7D6789960F80DE0651EF (const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.LinearProgressBar::SetMinMaxValues(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearProgressBar_SetMinMaxValues_m29371452C44F890B7BA8517CB657E28974AC53C8 (LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* __this, float ___0_minValue, float ___1_maxValue, const RuntimeMethod* method) ;
// System.Void Visometry.DesignSystem.LinearProgressBar::set_Value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearProgressBar_set_Value_mD14941587976B22537708BCD100711A652176259 (LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single Visometry.DesignSystem.LinearProgressBar::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearProgressBar_get_Value_m3DD1819BB47581F3337938C8ACA90F7CE7E123B2 (LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Canvas Visometry.DesignSystem.UIDisplay::get_DisplayCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* UIDisplay_get_DisplayCanvas_m09A19C9D3521BD73E1C534B83ED3D74415AE2359 (UIDisplay_t64D1F96DF55A62549BC8AFC2B349668F8F408D6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.displayCanvas == null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___displayCanvas_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// this.displayCanvas = GetComponentInParent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2;
		L_2 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(__this, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		__this->___displayCanvas_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___displayCanvas_4), (void*)L_2);
	}

IL_001a:
	{
		// return this.displayCanvas;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = __this->___displayCanvas_4;
		return L_3;
	}
}
// System.Void Visometry.DesignSystem.UIDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDisplay__ctor_m33EA795932093E424C6A0DBC587F66C564ECC6B6 (UIDisplay_t64D1F96DF55A62549BC8AFC2B349668F8F408D6D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Visometry.DesignSystem.Notification::add_OnWaitingForDestroyFinished(Visometry.DesignSystem.Notification/NotificationDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_add_OnWaitingForDestroyFinished_m013FFC21A015FDB1E97E60AD846C7791B80CF2C4 (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* V_0 = NULL;
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* V_1 = NULL;
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* V_2 = NULL;
	{
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_0 = __this->___OnWaitingForDestroyFinished_19;
		V_0 = L_0;
	}

IL_0007:
	{
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_1 = V_0;
		V_1 = L_1;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_2 = V_1;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*)CastclassSealed((RuntimeObject*)L_4, NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3_il2cpp_TypeInfo_var));
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3** L_5 = (NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3**)(&__this->___OnWaitingForDestroyFinished_19);
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_6 = V_2;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_7 = V_1;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_8;
		L_8 = InterlockedCompareExchangeImpl<NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*>(L_5, L_6, L_7);
		V_0 = L_8;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_9 = V_0;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_10 = V_1;
		if ((!(((RuntimeObject*)(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*)L_9) == ((RuntimeObject*)(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Visometry.DesignSystem.Notification::remove_OnWaitingForDestroyFinished(Visometry.DesignSystem.Notification/NotificationDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_remove_OnWaitingForDestroyFinished_mE8BCD8AFD6C87465CC931497CF036881C505A6B6 (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* V_0 = NULL;
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* V_1 = NULL;
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* V_2 = NULL;
	{
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_0 = __this->___OnWaitingForDestroyFinished_19;
		V_0 = L_0;
	}

IL_0007:
	{
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_1 = V_0;
		V_1 = L_1;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_2 = V_1;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*)CastclassSealed((RuntimeObject*)L_4, NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3_il2cpp_TypeInfo_var));
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3** L_5 = (NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3**)(&__this->___OnWaitingForDestroyFinished_19);
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_6 = V_2;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_7 = V_1;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_8;
		L_8 = InterlockedCompareExchangeImpl<NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*>(L_5, L_6, L_7);
		V_0 = L_8;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_9 = V_0;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_10 = V_1;
		if ((!(((RuntimeObject*)(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*)L_9) == ((RuntimeObject*)(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Visometry.DesignSystem.Notification::add_OnDeleted(Visometry.DesignSystem.Notification/NotificationDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_add_OnDeleted_mD98FFBA022D170D868FAE064CA121526AEFAB3FD (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* V_0 = NULL;
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* V_1 = NULL;
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* V_2 = NULL;
	{
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_0 = __this->___OnDeleted_20;
		V_0 = L_0;
	}

IL_0007:
	{
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_1 = V_0;
		V_1 = L_1;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_2 = V_1;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*)CastclassSealed((RuntimeObject*)L_4, NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3_il2cpp_TypeInfo_var));
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3** L_5 = (NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3**)(&__this->___OnDeleted_20);
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_6 = V_2;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_7 = V_1;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_8;
		L_8 = InterlockedCompareExchangeImpl<NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*>(L_5, L_6, L_7);
		V_0 = L_8;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_9 = V_0;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_10 = V_1;
		if ((!(((RuntimeObject*)(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*)L_9) == ((RuntimeObject*)(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Visometry.DesignSystem.Notification::remove_OnDeleted(Visometry.DesignSystem.Notification/NotificationDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_remove_OnDeleted_m6465F9B75ED8E094DFF4EB2D8136B77E5C661B85 (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* V_0 = NULL;
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* V_1 = NULL;
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* V_2 = NULL;
	{
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_0 = __this->___OnDeleted_20;
		V_0 = L_0;
	}

IL_0007:
	{
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_1 = V_0;
		V_1 = L_1;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_2 = V_1;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*)CastclassSealed((RuntimeObject*)L_4, NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3_il2cpp_TypeInfo_var));
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3** L_5 = (NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3**)(&__this->___OnDeleted_20);
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_6 = V_2;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_7 = V_1;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_8;
		L_8 = InterlockedCompareExchangeImpl<NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*>(L_5, L_6, L_7);
		V_0 = L_8;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_9 = V_0;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_10 = V_1;
		if ((!(((RuntimeObject*)(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*)L_9) == ((RuntimeObject*)(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Visometry.DesignSystem.Notification::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_Awake_mAF42C8964F2A9907E692E2FCC7869629B16CE75F (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Notification_SendDestroyMessage_m7BA15476F4B2C764642E52BDF6BAC1BFB748C707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// this.actionButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___actionButton_11;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// this.closeButton.onClick.AddListener(SendDestroyMessage);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___closeButton_12;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)Notification_SendDestroyMessage_m7BA15476F4B2C764642E52BDF6BAC1BFB748C707_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// this.rectTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___rectTransform_13 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectTransform_13), (void*)L_5);
		// this.children = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_6, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___children_14 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___children_14), (void*)L_6);
		// foreach (Transform child in transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_7, NULL);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0079:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_10 = V_2;
					if (!L_10)
					{
						goto IL_0089;
					}
				}
				{
					RuntimeObject* L_11 = V_2;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0089:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006f_1;
			}

IL_0052_1:
			{
				// foreach (Transform child in transform)
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				RuntimeObject* L_13;
				L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_13, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// this.children.Add(child.gameObject);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = __this->___children_14;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_1;
				NullCheck(L_15);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
				L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
				NullCheck(L_14);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_14, L_16, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
			}

IL_006f_1:
			{
				// foreach (Transform child in transform)
				RuntimeObject* L_17 = V_0;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_0052_1;
				}
			}
			{
				goto IL_008a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.Notification::SetPosition(Visometry.DesignSystem.Notification/Position)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetPosition_mE0C57FD13ADBE20783D9D6DDB8CCC92998A3AEA8 (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	{
		// if (position == Position.Ceiling)
		int32_t L_0 = ___0_position;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		// this.rectTransform.anchorMin = new Vector2(0.5f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___rectTransform_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_1, L_2, NULL);
		// this.rectTransform.anchorMax = new Vector2(0.5f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___rectTransform_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_3, L_4, NULL);
		// this.rectTransform.anchoredPosition = new Vector2(
		//     0f,
		//     -this.rectTransform.anchoredPosition.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___rectTransform_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___rectTransform_13;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_6, NULL);
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), (0.0f), ((-L_8)), /*hidden argument*/NULL);
		NullCheck(L_5);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_5, L_9, NULL);
		// this.rectTransform.pivot = new Vector2(0.5f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___rectTransform_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_10, L_11, NULL);
		goto IL_009f;
	}

IL_007a:
	{
		// this.rectTransform.anchoredPosition = new Vector2(
		//     0f,
		//     this.rectTransform.anchoredPosition.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___rectTransform_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___rectTransform_13;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_13, NULL);
		float L_15 = L_14.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), (0.0f), L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_12, L_16, NULL);
	}

IL_009f:
	{
		// this.originalYPosition = this.rectTransform.anchoredPosition.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = __this->___rectTransform_13;
		NullCheck(L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_17, NULL);
		float L_19 = L_18.___y_1;
		__this->___originalYPosition_15 = L_19;
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.Notification::ApplyOffset(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_ApplyOffset_m887085EC838E6894E96E40C2368879D49011CD2C (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, bool ___0_applyInPositiveDirection, int32_t ___1_order, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (this.rectTransform == null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___rectTransform_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// float offset = order *
		//                (LayoutUtility.GetPreferredHeight(this.rectTransform) + this.spacing);
		int32_t L_2 = ___1_order;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___rectTransform_13;
		float L_4;
		L_4 = LayoutUtility_GetPreferredHeight_m3E8CDE02CC980080BBD4BBA1D6BFDFD42F7CF706(L_3, NULL);
		float L_5 = __this->___spacing_18;
		V_0 = ((float)il2cpp_codegen_multiply(((float)L_2), ((float)il2cpp_codegen_add(L_4, L_5))));
		// if (!applyInPositiveDirection)
		bool L_6 = ___0_applyInPositiveDirection;
		if (L_6)
		{
			goto IL_0030;
		}
	}
	{
		// offset *= -1;
		float L_7 = V_0;
		V_0 = ((float)il2cpp_codegen_multiply(L_7, (-1.0f)));
	}

IL_0030:
	{
		// offset += this.originalYPosition;
		float L_8 = V_0;
		float L_9 = __this->___originalYPosition_15;
		V_0 = ((float)il2cpp_codegen_add(L_8, L_9));
		// this.rectTransform.anchoredPosition = new Vector2(
		//     this.rectTransform.anchoredPosition.x,
		//     offset);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___rectTransform_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___rectTransform_13;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_11, NULL);
		float L_13 = L_12.___x_0;
		float L_14 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_10, L_15, NULL);
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.Notification::SetTexts(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetTexts_m6F762A3A36D6D3535383061161DF7333D669EF31 (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, String_t* ___0_titleText, String_t* ___1_captionText, const RuntimeMethod* method) 
{
	{
		// this.title.text = titleText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___title_5;
		String_t* L_1 = ___0_titleText;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// this.caption.text = captionText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___caption_6;
		String_t* L_3 = ___1_captionText;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.Notification::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetColor_m3EA92841E8CEDBF2096188C6D4CA0F69F4318A66 (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	{
		// this.border.color = color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___border_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_color;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// this.outline.effectColor = color;
		Outline_t9CF146E077DC65F441EDEC463AA6710374108084* L_2 = __this->___outline_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_color;
		NullCheck(L_2);
		Shadow_set_effectColor_mCCC5DB6B7D09C5DEE0C677DEB3B9B0C578F05AF1(L_2, L_3, NULL);
		// this.icon.color = color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___icon_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___0_color;
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.Notification::SetIcon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetIcon_m77F3C494808B8FBE46048BDCA60FD531E978B37A (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, String_t* ___0_icon, const RuntimeMethod* method) 
{
	{
		// this.icon.text = icon;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___icon_7;
		String_t* L_1 = ___0_icon;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.Notification::SetAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetAction_m6DE33BF6B3F3DA79595D975929E6156F64B9C86A (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3CSetActionU3Eb__0_m9FE154A221C607E9A0699282EB9D2FD5493A37D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_tBCF013EB9E0F9E008CF1CCA1B398330DA4DBA1A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass31_0_tBCF013EB9E0F9E008CF1CCA1B398330DA4DBA1A9* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass31_0_tBCF013EB9E0F9E008CF1CCA1B398330DA4DBA1A9* L_0 = (U3CU3Ec__DisplayClass31_0_tBCF013EB9E0F9E008CF1CCA1B398330DA4DBA1A9*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass31_0_tBCF013EB9E0F9E008CF1CCA1B398330DA4DBA1A9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass31_0__ctor_mD5169C9984F757849571C417E6F9A29C9D5E251F(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass31_0_tBCF013EB9E0F9E008CF1CCA1B398330DA4DBA1A9* L_1 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___0_action;
		NullCheck(L_1);
		L_1->___action_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___action_0), (void*)L_2);
		// if (action != null)
		U3CU3Ec__DisplayClass31_0_tBCF013EB9E0F9E008CF1CCA1B398330DA4DBA1A9* L_3 = V_0;
		NullCheck(L_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3->___action_0;
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		// this.actionButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___actionButton_11;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// this.actionButton.onClick.AddListener(() => action.Invoke());
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___actionButton_11;
		NullCheck(L_7);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_8;
		L_8 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_7, NULL);
		U3CU3Ec__DisplayClass31_0_tBCF013EB9E0F9E008CF1CCA1B398330DA4DBA1A9* L_9 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3CSetActionU3Eb__0_m9FE154A221C607E9A0699282EB9D2FD5493A37D4_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_8, L_10, NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.Notification::SetVisibilityOfChildren(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SetVisibilityOfChildren_m22CA28A0BE48680AA5C4B864ABEE1E129E184691 (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, bool ___0_show, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// this.background.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___background_10;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// this.isDisabled = !show;
		bool L_1 = ___0_show;
		__this->___isDisabled_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// foreach (GameObject child in this.children)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___children_14;
		NullCheck(L_2);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_3;
		L_3 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_2, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0031_1;
			}

IL_0024_1:
			{
				// foreach (GameObject child in this.children)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
				L_4 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// child.SetActive(show);
				bool L_5 = ___0_show;
				NullCheck(L_4);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, L_5, NULL);
			}

IL_0031_1:
			{
				// foreach (GameObject child in this.children)
				bool L_6;
				L_6 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0024_1;
				}
			}
			{
				goto IL_004a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.Notification::SendDestroyMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_SendDestroyMessage_m7BA15476F4B2C764642E52BDF6BAC1BFB748C707 (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, const RuntimeMethod* method) 
{
	{
		// TriggerDestroyAfterSeconds(0f);
		Notification_TriggerDestroyAfterSeconds_m9FEE6C4DDFBA3550ECFBC71C9614FEA3AFEE7A1C(__this, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.Notification::TriggerDestroyAfterSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_TriggerDestroyAfterSeconds_m9FEE6C4DDFBA3550ECFBC71C9614FEA3AFEE7A1C (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, float ___0_seconds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5_m4F9FC7EFCDBCF1EB327D6C21CBFDFFD3D8C18759_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		float L_1 = ___0_seconds;
		(&V_0)->___seconds_2 = L_1;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_2 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5_m4F9FC7EFCDBCF1EB327D6C21CBFDFFD3D8C18759(L_2, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5_m4F9FC7EFCDBCF1EB327D6C21CBFDFFD3D8C18759_RuntimeMethod_var);
		return;
	}
}
// System.Void Visometry.DesignSystem.Notification::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_OnDestroy_mF092C68188279B41760C2BF4D7BD49385DF3A8A8 (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, const RuntimeMethod* method) 
{
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* G_B2_0 = NULL;
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* G_B1_0 = NULL;
	{
		// OnDeleted?.Invoke(this);
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_0 = __this->___OnDeleted_20;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_inline(G_B2_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.Notification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification__ctor_m95593577C124F2AD785D148A51596D973076DF81 (Notification_t539694385F8222898937FEB72194834CA132BFDD* __this, const RuntimeMethod* method) 
{
	{
		// private float spacing = 15.0f;
		__this->___spacing_18 = (15.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_Multicast(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* __this, Notification_t539694385F8222898937FEB72194834CA132BFDD* ___0_notification, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* currentDelegate = reinterpret_cast<NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Notification_t539694385F8222898937FEB72194834CA132BFDD*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_notification, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_OpenInst(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* __this, Notification_t539694385F8222898937FEB72194834CA132BFDD* ___0_notification, const RuntimeMethod* method)
{
	NullCheck(___0_notification);
	typedef void (*FunctionPointerType) (Notification_t539694385F8222898937FEB72194834CA132BFDD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_notification, method);
}
void NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_OpenStatic(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* __this, Notification_t539694385F8222898937FEB72194834CA132BFDD* ___0_notification, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Notification_t539694385F8222898937FEB72194834CA132BFDD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_notification, method);
}
void NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_OpenStaticInvoker(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* __this, Notification_t539694385F8222898937FEB72194834CA132BFDD* ___0_notification, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Notification_t539694385F8222898937FEB72194834CA132BFDD* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_notification);
}
void NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_ClosedStaticInvoker(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* __this, Notification_t539694385F8222898937FEB72194834CA132BFDD* ___0_notification, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Notification_t539694385F8222898937FEB72194834CA132BFDD* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_notification);
}
void NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_OpenVirtual(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* __this, Notification_t539694385F8222898937FEB72194834CA132BFDD* ___0_notification, const RuntimeMethod* method)
{
	NullCheck(___0_notification);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_notification);
}
void NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_OpenInterface(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* __this, Notification_t539694385F8222898937FEB72194834CA132BFDD* ___0_notification, const RuntimeMethod* method)
{
	NullCheck(___0_notification);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_notification);
}
void NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_OpenGenericVirtual(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* __this, Notification_t539694385F8222898937FEB72194834CA132BFDD* ___0_notification, const RuntimeMethod* method)
{
	NullCheck(___0_notification);
	GenericVirtualActionInvoker0::Invoke(method, ___0_notification);
}
void NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_OpenGenericInterface(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* __this, Notification_t539694385F8222898937FEB72194834CA132BFDD* ___0_notification, const RuntimeMethod* method)
{
	NullCheck(___0_notification);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_notification);
}
// System.Void Visometry.DesignSystem.Notification/NotificationDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDelegate__ctor_mC7B9B94D34367C9C8551A0435B901B53B35F44DA (NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_Multicast;
}
// System.Void Visometry.DesignSystem.Notification/NotificationDelegate::Invoke(Visometry.DesignSystem.Notification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD (NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* __this, Notification_t539694385F8222898937FEB72194834CA132BFDD* ___0_notification, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Notification_t539694385F8222898937FEB72194834CA132BFDD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_notification, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Visometry.DesignSystem.Notification/NotificationDelegate::BeginInvoke(Visometry.DesignSystem.Notification,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationDelegate_BeginInvoke_m516722A054BBCD372BB6993C9BE8439F6A934544 (NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* __this, Notification_t539694385F8222898937FEB72194834CA132BFDD* ___0_notification, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_notification;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Visometry.DesignSystem.Notification/NotificationDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDelegate_EndInvoke_mD0C9DC8868D432C14C0086B2295D0E407598E48B (NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Visometry.DesignSystem.Notification/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_mD5169C9984F757849571C417E6F9A29C9D5E251F (U3CU3Ec__DisplayClass31_0_tBCF013EB9E0F9E008CF1CCA1B398330DA4DBA1A9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Visometry.DesignSystem.Notification/<>c__DisplayClass31_0::<SetAction>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CSetActionU3Eb__0_m9FE154A221C607E9A0699282EB9D2FD5493A37D4 (U3CU3Ec__DisplayClass31_0_tBCF013EB9E0F9E008CF1CCA1B398330DA4DBA1A9* __this, const RuntimeMethod* method) 
{
	{
		// this.actionButton.onClick.AddListener(() => action.Invoke());
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___action_0;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
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
// System.Void Visometry.DesignSystem.Notification/<TriggerDestroyAfterSeconds>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTriggerDestroyAfterSecondsU3Ed__34_MoveNext_m8B979DF62CCE3DBE0B583E13FC42245BDEE78299 (U3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5_m86555D0E1AF02E3D3878F4881CF1B1C996E875A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Notification_t539694385F8222898937FEB72194834CA132BFDD* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* G_B14_0 = NULL;
	NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* G_B13_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_005c_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00db_1;
			}
		}
		{
			// await Task.Delay((int) (seconds * 1000.0f));
			float L_4 = __this->___seconds_2;
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
			L_5 = Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_4, (1000.0f)))), NULL);
			NullCheck(L_5);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_6;
			L_6 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_5, NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_7)
			{
				goto IL_0078_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9 = V_2;
			__this->___U3CU3Eu__1_4 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_10 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5_m86555D0E1AF02E3D3878F4881CF1B1C996E875A6(L_10, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5_m86555D0E1AF02E3D3878F4881CF1B1C996E875A6_RuntimeMethod_var);
			goto IL_013c;
		}

IL_005c_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11 = __this->___U3CU3Eu__1_4;
			V_2 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_12 = (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*)(&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_0078_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// if (!this || this.isBeingDestroyed)
			Notification_t539694385F8222898937FEB72194834CA132BFDD* L_14 = V_1;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_15;
			L_15 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_14, NULL);
			if (!L_15)
			{
				goto IL_008f_1;
			}
		}
		{
			Notification_t539694385F8222898937FEB72194834CA132BFDD* L_16 = V_1;
			NullCheck(L_16);
			bool L_17 = L_16->___isBeingDestroyed_17;
			if (!L_17)
			{
				goto IL_0094_1;
			}
		}

IL_008f_1:
		{
			// return;
			goto IL_0129;
		}

IL_0094_1:
		{
			// this.isBeingDestroyed = true;
			Notification_t539694385F8222898937FEB72194834CA132BFDD* L_18 = V_1;
			NullCheck(L_18);
			L_18->___isBeingDestroyed_17 = (bool)1;
			// SetVisibilityOfChildren(false);
			Notification_t539694385F8222898937FEB72194834CA132BFDD* L_19 = V_1;
			NullCheck(L_19);
			Notification_SetVisibilityOfChildren_m22CA28A0BE48680AA5C4B864ABEE1E129E184691(L_19, (bool)0, NULL);
			// await Task.Delay(timeBufferBeforeDestroy);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_20;
			L_20 = Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48(((int32_t)500), NULL);
			NullCheck(L_20);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_21;
			L_21 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_20, NULL);
			V_2 = L_21;
			bool L_22;
			L_22 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_22)
			{
				goto IL_00f7_1;
			}
		}
		{
			int32_t L_23 = 1;
			V_0 = L_23;
			__this->___U3CU3E1__state_0 = L_23;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_24 = V_2;
			__this->___U3CU3Eu__1_4 = L_24;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_25 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5_m86555D0E1AF02E3D3878F4881CF1B1C996E875A6(L_25, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5_m86555D0E1AF02E3D3878F4881CF1B1C996E875A6_RuntimeMethod_var);
			goto IL_013c;
		}

IL_00db_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_26 = __this->___U3CU3Eu__1_4;
			V_2 = L_26;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_27 = (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*)(&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_27, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->___U3CU3E1__state_0 = L_28;
		}

IL_00f7_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// OnWaitingForDestroyFinished?.Invoke(this);
			Notification_t539694385F8222898937FEB72194834CA132BFDD* L_29 = V_1;
			NullCheck(L_29);
			NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_30 = L_29->___OnWaitingForDestroyFinished_19;
			NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_31 = L_30;
			G_B13_0 = L_31;
			if (L_31)
			{
				G_B14_0 = L_31;
				goto IL_010a_1;
			}
		}
		{
			goto IL_0110_1;
		}

IL_010a_1:
		{
			Notification_t539694385F8222898937FEB72194834CA132BFDD* L_32 = V_1;
			NullCheck(G_B14_0);
			NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_inline(G_B14_0, L_32, NULL);
		}

IL_0110_1:
		{
			goto IL_0129;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0112;
		}
		throw e;
	}

CATCH_0112:
	{// begin catch(System.Exception)
		Exception_t* L_33 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_33;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_34 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_35 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_34, L_35, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_013c;
	}// end catch (depth: 1)

IL_0129:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_36 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_36, NULL);
	}

IL_013c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTriggerDestroyAfterSecondsU3Ed__34_MoveNext_m8B979DF62CCE3DBE0B583E13FC42245BDEE78299_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5*>(__this + _offset);
	U3CTriggerDestroyAfterSecondsU3Ed__34_MoveNext_m8B979DF62CCE3DBE0B583E13FC42245BDEE78299(_thisAdjusted, method);
}
// System.Void Visometry.DesignSystem.Notification/<TriggerDestroyAfterSeconds>d__34::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTriggerDestroyAfterSecondsU3Ed__34_SetStateMachine_m62A1764F1BBF227D787C735F23EDC4F29F071D5F (U3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTriggerDestroyAfterSecondsU3Ed__34_SetStateMachine_m62A1764F1BBF227D787C735F23EDC4F29F071D5F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CTriggerDestroyAfterSecondsU3Ed__34_t35284E31EED698FABF9603B88A721F98162844B5*>(__this + _offset);
	U3CTriggerDestroyAfterSecondsU3Ed__34_SetStateMachine_m62A1764F1BBF227D787C735F23EDC4F29F071D5F(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Visometry.DesignSystem.NotificationDisplay::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_OnEnable_mB3C0515920715531C851D6474B0BF8C298A296D4 (NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationDisplay_AddNotification_mF33DA790E7E2DF4F1700756C94053A1068436592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationDisplay_ResetNotifications_m91F515FCAD08759574BF90C78BF1EA1070797812_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NotificationManager.OnNotificationAdded += AddNotification;
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_0 = (AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B*)il2cpp_codegen_object_new(AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AddNotificationAction__ctor_m85AEFE62A5A9BB42D2F9E8E995834394D857B924(L_0, __this, (intptr_t)((void*)NotificationDisplay_AddNotification_mF33DA790E7E2DF4F1700756C94053A1068436592_RuntimeMethod_var), NULL);
		NotificationManager_add_OnNotificationAdded_mBCBD1AF99401F3653531A3985B7DDFDE1C444DA5(L_0, NULL);
		// NotificationManager.OnNotificationReset += ResetNotifications;
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_1 = (ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3*)il2cpp_codegen_object_new(ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ResetNotificationAction__ctor_mF9BFA4F431C7B986AEC5C9ADCE7FE29AD5993820(L_1, __this, (intptr_t)((void*)NotificationDisplay_ResetNotifications_m91F515FCAD08759574BF90C78BF1EA1070797812_RuntimeMethod_var), NULL);
		NotificationManager_add_OnNotificationReset_m90F1FBDF805289053687F334D645E06A16119F0B(L_1, NULL);
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationDisplay::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_OnDisable_mEAB232B7920AD4774B2AF5340547F68950E373D7 (NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationDisplay_AddNotification_mF33DA790E7E2DF4F1700756C94053A1068436592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationDisplay_ResetNotifications_m91F515FCAD08759574BF90C78BF1EA1070797812_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NotificationManager.OnNotificationAdded -= AddNotification;
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_0 = (AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B*)il2cpp_codegen_object_new(AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AddNotificationAction__ctor_m85AEFE62A5A9BB42D2F9E8E995834394D857B924(L_0, __this, (intptr_t)((void*)NotificationDisplay_AddNotification_mF33DA790E7E2DF4F1700756C94053A1068436592_RuntimeMethod_var), NULL);
		NotificationManager_remove_OnNotificationAdded_mE550E8AE9B85DFE2E6BE831570258E5A91BE0CB9(L_0, NULL);
		// NotificationManager.OnNotificationReset -= ResetNotifications;
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_1 = (ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3*)il2cpp_codegen_object_new(ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ResetNotificationAction__ctor_mF9BFA4F431C7B986AEC5C9ADCE7FE29AD5993820(L_1, __this, (intptr_t)((void*)NotificationDisplay_ResetNotifications_m91F515FCAD08759574BF90C78BF1EA1070797812_RuntimeMethod_var), NULL);
		NotificationManager_remove_OnNotificationReset_m41E487C9A5DBDF61019024E71FCEC5B3FDF023E8(L_1, NULL);
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationDisplay::AddNotification(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_AddNotification_mF33DA790E7E2DF4F1700756C94053A1068436592 (NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_newNotification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m40CEDFB2A03BECA4D5097077817AEF275C47BC8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindLastIndex_mC02D0E06A64EB65A5A894A49F4775662F1CBC200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m806929870E74F2835341A0E2FD435E2D43120392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mE328480DACD0C7BAA2AAF0DB26C269DDA42AA3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAddNotificationU3Eb__6_2_m67D783E0B544D9128DD97D64F24B00CD5531D633_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CAddNotificationU3Eb__0_mD246622525E77DDB86E59A8CF3C28B601C49BA9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CAddNotificationU3Eb__1_m9E89AD1001084E48C7F610DD2BB1C3D816C5C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2* V_0 = NULL;
	NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* V_1 = NULL;
	NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* V_2 = NULL;
	Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5* G_B12_0 = NULL;
	List_1_t710D8F240C9C05164D0D497813701A5F6A339560* G_B12_1 = NULL;
	List_1_t710D8F240C9C05164D0D497813701A5F6A339560* G_B12_2 = NULL;
	Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5* G_B11_0 = NULL;
	List_1_t710D8F240C9C05164D0D497813701A5F6A339560* G_B11_1 = NULL;
	List_1_t710D8F240C9C05164D0D497813701A5F6A339560* G_B11_2 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2* L_0 = (U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_mAA5F1C418BCD8E477C670EBD55662A0AAF454BE2(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2* L_1 = V_0;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_2 = ___0_newNotification;
		NullCheck(L_1);
		L_1->___newNotification_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___newNotification_0), (void*)L_2);
		// if (newNotification.kind == Notification.Kind.Warning ||
		//     newNotification.kind == Notification.Kind.Error)
		U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2* L_3 = V_0;
		NullCheck(L_3);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_4 = L_3->___newNotification_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___kind_1;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2* L_6 = V_0;
		NullCheck(L_6);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_7 = L_6->___newNotification_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___kind_1;
		if (L_8)
		{
			goto IL_006d;
		}
	}

IL_0028:
	{
		// var identicalNotification = this.errorAndWarningNotificationsQueue.Find(
		//     notification => notification.IsEqualTo(newNotification));
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_9 = __this->___errorAndWarningNotificationsQueue_5;
		U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2* L_10 = V_0;
		Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5* L_11 = (Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5*)il2cpp_codegen_object_new(Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Predicate_1__ctor_m58893B7FD61E49642E6822E7274E1F729BF363C5(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CAddNotificationU3Eb__0_mD246622525E77DDB86E59A8CF3C28B601C49BA9D_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_12;
		L_12 = List_1_Find_m806929870E74F2835341A0E2FD435E2D43120392(L_9, L_11, List_1_Find_m806929870E74F2835341A0E2FD435E2D43120392_RuntimeMethod_var);
		V_1 = L_12;
		// if (identicalNotification != null)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_13 = V_1;
		if (!L_13)
		{
			goto IL_004a;
		}
	}
	{
		// identicalNotification.IncreaseEncounters();
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_14 = V_1;
		NullCheck(L_14);
		NotificationObject_IncreaseEncounters_m7DCA778F1585568D352CA1E22BD312F42052EA2B(L_14, NULL);
		// return;
		return;
	}

IL_004a:
	{
		// this.errorAndWarningNotificationsQueue.Add(newNotification);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_15 = __this->___errorAndWarningNotificationsQueue_5;
		U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2* L_16 = V_0;
		NullCheck(L_16);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_17 = L_16->___newNotification_0;
		NullCheck(L_15);
		List_1_Add_m40CEDFB2A03BECA4D5097077817AEF275C47BC8D_inline(L_15, L_17, List_1_Add_m40CEDFB2A03BECA4D5097077817AEF275C47BC8D_RuntimeMethod_var);
		// if (this.activeErrorOrWarningNotification == null)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_18 = __this->___activeErrorOrWarningNotification_8;
		if (L_18)
		{
			goto IL_00f4;
		}
	}
	{
		// InstantiateNextErrorWarningNotification();
		NotificationDisplay_InstantiateNextErrorWarningNotification_m9CAC701168EBA8B37556C10D77B283E4A80D8C02(__this, NULL);
		return;
	}

IL_006d:
	{
		// else if (newNotification.kind == Notification.Kind.Info ||
		//          newNotification.kind == Notification.Kind.Success)
		U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2* L_19 = V_0;
		NullCheck(L_19);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_20 = L_19->___newNotification_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->___kind_1;
		if ((((int32_t)L_21) == ((int32_t)3)))
		{
			goto IL_0089;
		}
	}
	{
		U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2* L_22 = V_0;
		NullCheck(L_22);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_23 = L_22->___newNotification_0;
		NullCheck(L_23);
		int32_t L_24 = L_23->___kind_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)2))))
		{
			goto IL_00f4;
		}
	}

IL_0089:
	{
		// var identicalNotification = this.activeInfoNotificationStack.Find(
		//     notification => notification.Equals(newNotification));
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_25 = __this->___activeInfoNotificationStack_6;
		U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2* L_26 = V_0;
		Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5* L_27 = (Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5*)il2cpp_codegen_object_new(Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Predicate_1__ctor_m58893B7FD61E49642E6822E7274E1F729BF363C5(L_27, L_26, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CAddNotificationU3Eb__1_m9E89AD1001084E48C7F610DD2BB1C3D816C5C278_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_28;
		L_28 = List_1_Find_m806929870E74F2835341A0E2FD435E2D43120392(L_25, L_27, List_1_Find_m806929870E74F2835341A0E2FD435E2D43120392_RuntimeMethod_var);
		V_2 = L_28;
		// if (identicalNotification != null)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_29 = V_2;
		if (!L_29)
		{
			goto IL_00ab;
		}
	}
	{
		// identicalNotification.IncreaseEncounters();
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_30 = V_2;
		NullCheck(L_30);
		NotificationObject_IncreaseEncounters_m7DCA778F1585568D352CA1E22BD312F42052EA2B(L_30, NULL);
		// return;
		return;
	}

IL_00ab:
	{
		// this.activeInfoNotificationStack.Insert(
		//     this.activeInfoNotificationStack.FindLastIndex(
		//         notification => notification.priority == 0) + 1,
		//     newNotification);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_31 = __this->___activeInfoNotificationStack_6;
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_32 = __this->___activeInfoNotificationStack_6;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var);
		Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5* L_33 = ((U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var))->___U3CU3E9__6_2_1;
		Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5* L_34 = L_33;
		G_B11_0 = L_34;
		G_B11_1 = L_32;
		G_B11_2 = L_31;
		if (L_34)
		{
			G_B12_0 = L_34;
			G_B12_1 = L_32;
			G_B12_2 = L_31;
			goto IL_00d6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var);
		U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511* L_35 = ((U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5* L_36 = (Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5*)il2cpp_codegen_object_new(Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Predicate_1__ctor_m58893B7FD61E49642E6822E7274E1F729BF363C5(L_36, L_35, (intptr_t)((void*)U3CU3Ec_U3CAddNotificationU3Eb__6_2_m67D783E0B544D9128DD97D64F24B00CD5531D633_RuntimeMethod_var), NULL);
		Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5* L_37 = L_36;
		((U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var))->___U3CU3E9__6_2_1 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var))->___U3CU3E9__6_2_1), (void*)L_37);
		G_B12_0 = L_37;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_00d6:
	{
		NullCheck(G_B12_1);
		int32_t L_38;
		L_38 = List_1_FindLastIndex_mC02D0E06A64EB65A5A894A49F4775662F1CBC200(G_B12_1, G_B12_0, List_1_FindLastIndex_mC02D0E06A64EB65A5A894A49F4775662F1CBC200_RuntimeMethod_var);
		U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2* L_39 = V_0;
		NullCheck(L_39);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_40 = L_39->___newNotification_0;
		NullCheck(G_B12_2);
		List_1_Insert_mE328480DACD0C7BAA2AAF0DB26C269DDA42AA3AA(G_B12_2, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_40, List_1_Insert_mE328480DACD0C7BAA2AAF0DB26C269DDA42AA3AA_RuntimeMethod_var);
		// InstantiateNextInfoNotification(newNotification);
		U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2* L_41 = V_0;
		NullCheck(L_41);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_42 = L_41->___newNotification_0;
		NotificationDisplay_InstantiateNextInfoNotification_mC193426D67C2A490E51D7C7D7FF64C13B461116F(__this, L_42, NULL);
	}

IL_00f4:
	{
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationDisplay::InstantiateNextErrorWarningNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_InstantiateNextErrorWarningNotification_m9CAC701168EBA8B37556C10D77B283E4A80D8C02 (NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8* __this, const RuntimeMethod* method) 
{
	NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* V_0 = NULL;
	NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* V_1 = NULL;
	{
		// NotificationObject nextError = FindNextNotificationInList(
		//     this.errorAndWarningNotificationsQueue,
		//     Notification.Kind.Error);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_0 = __this->___errorAndWarningNotificationsQueue_5;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_1;
		L_1 = NotificationDisplay_FindNextNotificationInList_m8D73E642D37737E0E15D2CD847B0DB0AB8EDFFB3(L_0, 0, NULL);
		V_0 = L_1;
		// if (nextError != null)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// SetUpNotification(nextError);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_3 = V_0;
		NotificationDisplay_SetUpNotification_mE72661B85C1DB9F2AEBDC28504F34A0402269F33(__this, L_3, NULL);
		// this.activeErrorOrWarningNotification = nextError;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_4 = V_0;
		__this->___activeErrorOrWarningNotification_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeErrorOrWarningNotification_8), (void*)L_4);
		// return;
		return;
	}

IL_001f:
	{
		// NotificationObject nextWarning = FindNextNotificationInList(
		//     this.errorAndWarningNotificationsQueue,
		//     Notification.Kind.Warning);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_5 = __this->___errorAndWarningNotificationsQueue_5;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_6;
		L_6 = NotificationDisplay_FindNextNotificationInList_m8D73E642D37737E0E15D2CD847B0DB0AB8EDFFB3(L_5, 1, NULL);
		V_1 = L_6;
		// if (nextWarning != null)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_7 = V_1;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// SetUpNotification(nextWarning);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_8 = V_1;
		NotificationDisplay_SetUpNotification_mE72661B85C1DB9F2AEBDC28504F34A0402269F33(__this, L_8, NULL);
		// this.activeErrorOrWarningNotification = nextWarning;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_9 = V_1;
		__this->___activeErrorOrWarningNotification_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeErrorOrWarningNotification_8), (void*)L_9);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationDisplay::InstantiateNextInfoNotification(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_InstantiateNextInfoNotification_mC193426D67C2A490E51D7C7D7FF64C13B461116F (NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_nextNotificationObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m5E590ECACF0B2ACB24A36C1674B1E8B933A6E0F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mA9B8597CBDAAE70E0F4C6BE3B729D90B28468658_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInstantiateNextInfoNotificationU3Eb__8_0_m1503EBA209255609036D54F3D776FE4A408969C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* V_0 = NULL;
	Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* G_B5_0 = NULL;
	List_1_t710D8F240C9C05164D0D497813701A5F6A339560* G_B5_1 = NULL;
	Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* G_B4_0 = NULL;
	List_1_t710D8F240C9C05164D0D497813701A5F6A339560* G_B4_1 = NULL;
	{
		// SetUpNotification(nextNotificationObject);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_0 = ___0_nextNotificationObject;
		NotificationDisplay_SetUpNotification_mE72661B85C1DB9F2AEBDC28504F34A0402269F33(__this, L_0, NULL);
		// if (!String.IsNullOrEmpty(nextNotificationObject.contentCategory))
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_1 = ___0_nextNotificationObject;
		NullCheck(L_1);
		String_t* L_2 = L_1->___contentCategory_2;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		// ReplaceNotificationFromSameCategory(
		//     this.activeInfoNotificationStack,
		//     nextNotificationObject);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_4 = __this->___activeInfoNotificationStack_6;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_5 = ___0_nextNotificationObject;
		NotificationDisplay_ReplaceNotificationFromSameCategory_m58C988C989291975F196FAF23396DA2FD8CE2AD7(L_4, L_5, NULL);
	}

IL_0020:
	{
		// if (this.activeInfoNotificationStack.Count > maxInfoNotificationStackSize)
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_6 = __this->___activeInfoNotificationStack_6;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_inline(L_6, List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_RuntimeMethod_var);
		if ((((int32_t)L_7) <= ((int32_t)3)))
		{
			goto IL_0070;
		}
	}
	{
		// NotificationObject oldestInfoNotification =
		//     this.activeInfoNotificationStack.FirstOrDefault(
		//         notification => notification.priority == 0);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_8 = __this->___activeInfoNotificationStack_6;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var);
		Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* L_9 = ((U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_2;
		Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* L_10 = L_9;
		G_B4_0 = L_10;
		G_B4_1 = L_8;
		if (L_10)
		{
			G_B5_0 = L_10;
			G_B5_1 = L_8;
			goto IL_0053;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var);
		U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511* L_11 = ((U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* L_12 = (Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC*)il2cpp_codegen_object_new(Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_2__ctor_m8B3CD0B7E0ED8D27F32531EAA333DC276445647B(L_12, L_11, (intptr_t)((void*)U3CU3Ec_U3CInstantiateNextInfoNotificationU3Eb__8_0_m1503EBA209255609036D54F3D776FE4A408969C5_RuntimeMethod_var), NULL);
		Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* L_13 = L_12;
		((U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_2), (void*)L_13);
		G_B5_0 = L_13;
		G_B5_1 = G_B4_1;
	}

IL_0053:
	{
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_14;
		L_14 = Enumerable_FirstOrDefault_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m5E590ECACF0B2ACB24A36C1674B1E8B933A6E0F4(G_B5_1, G_B5_0, Enumerable_FirstOrDefault_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m5E590ECACF0B2ACB24A36C1674B1E8B933A6E0F4_RuntimeMethod_var);
		V_0 = L_14;
		// if (oldestInfoNotification == null)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_15 = V_0;
		if (L_15)
		{
			goto IL_005d;
		}
	}
	{
		// return;
		return;
	}

IL_005d:
	{
		// this.activeInfoNotificationStack.Remove(oldestInfoNotification);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_16 = __this->___activeInfoNotificationStack_6;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_17 = V_0;
		NullCheck(L_16);
		bool L_18;
		L_18 = List_1_Remove_mA9B8597CBDAAE70E0F4C6BE3B729D90B28468658(L_16, L_17, List_1_Remove_mA9B8597CBDAAE70E0F4C6BE3B729D90B28468658_RuntimeMethod_var);
		// DestroyNotificationImmediate(oldestInfoNotification);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_19 = V_0;
		NotificationDisplay_DestroyNotificationImmediate_mB85C15CD7F14DC5B8C83FB404E46F72056073E7B(L_19, NULL);
	}

IL_0070:
	{
		// if (this.activeInfoNotificationStack.Count > 1)
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_20 = __this->___activeInfoNotificationStack_6;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_inline(L_20, List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_RuntimeMethod_var);
		if ((((int32_t)L_21) <= ((int32_t)1)))
		{
			goto IL_008a;
		}
	}
	{
		// MoveNotificationsInStack(this.activeInfoNotificationStack, false);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_22 = __this->___activeInfoNotificationStack_6;
		NotificationDisplay_MoveNotificationsInStack_m67A46B52ABADBA46A4D168195CDB1DE0E093A095(L_22, (bool)0, NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationDisplay::ReplaceNotificationFromSameCategory(System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>,Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_ReplaceNotificationFromSameCategory_m58C988C989291975F196FAF23396DA2FD8CE2AD7 (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* ___0_notificationList, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___1_notificationObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m5E590ECACF0B2ACB24A36C1674B1E8B933A6E0F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m1AA700370BD1F086A50925D299AEC1E20F2C5D1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mE328480DACD0C7BAA2AAF0DB26C269DDA42AA3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mA9B8597CBDAAE70E0F4C6BE3B729D90B28468658_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CReplaceNotificationFromSameCategoryU3Eb__0_m32421FD950F1C9CF594DC58FE9A7CA3F9FEF1EC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_tD15B502C24E3622A880EE73919EF9D663005DE3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_tD15B502C24E3622A880EE73919EF9D663005DE3C* V_0 = NULL;
	NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_tD15B502C24E3622A880EE73919EF9D663005DE3C* L_0 = (U3CU3Ec__DisplayClass9_0_tD15B502C24E3622A880EE73919EF9D663005DE3C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_tD15B502C24E3622A880EE73919EF9D663005DE3C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_m352AF2AB0D60352AF42C0C146C8853189D4DAA0A(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_tD15B502C24E3622A880EE73919EF9D663005DE3C* L_1 = V_0;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_2 = ___1_notificationObject;
		NullCheck(L_1);
		L_1->___notificationObject_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___notificationObject_0), (void*)L_2);
		// NotificationObject notificationFromSameCategory = null;
		V_1 = (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*)NULL;
		// notificationFromSameCategory = notificationList.FirstOrDefault(
		//     notification => (notification != notificationObject &&
		//                      notification.contentCategory ==
		//                      notificationObject.contentCategory));
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_3 = ___0_notificationList;
		U3CU3Ec__DisplayClass9_0_tD15B502C24E3622A880EE73919EF9D663005DE3C* L_4 = V_0;
		Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* L_5 = (Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC*)il2cpp_codegen_object_new(Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m8B3CD0B7E0ED8D27F32531EAA333DC276445647B(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CReplaceNotificationFromSameCategoryU3Eb__0_m32421FD950F1C9CF594DC58FE9A7CA3F9FEF1EC1_RuntimeMethod_var), NULL);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_6;
		L_6 = Enumerable_FirstOrDefault_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m5E590ECACF0B2ACB24A36C1674B1E8B933A6E0F4(L_3, L_5, Enumerable_FirstOrDefault_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m5E590ECACF0B2ACB24A36C1674B1E8B933A6E0F4_RuntimeMethod_var);
		V_1 = L_6;
		// if (notificationFromSameCategory != null)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		// notificationList.Remove(notificationObject);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_8 = ___0_notificationList;
		U3CU3Ec__DisplayClass9_0_tD15B502C24E3622A880EE73919EF9D663005DE3C* L_9 = V_0;
		NullCheck(L_9);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_10 = L_9->___notificationObject_0;
		NullCheck(L_8);
		bool L_11;
		L_11 = List_1_Remove_mA9B8597CBDAAE70E0F4C6BE3B729D90B28468658(L_8, L_10, List_1_Remove_mA9B8597CBDAAE70E0F4C6BE3B729D90B28468658_RuntimeMethod_var);
		// notificationList.Insert(
		//     notificationList.IndexOf(notificationFromSameCategory),
		//     notificationObject);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_12 = ___0_notificationList;
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_13 = ___0_notificationList;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = List_1_IndexOf_m1AA700370BD1F086A50925D299AEC1E20F2C5D1B(L_13, L_14, List_1_IndexOf_m1AA700370BD1F086A50925D299AEC1E20F2C5D1B_RuntimeMethod_var);
		U3CU3Ec__DisplayClass9_0_tD15B502C24E3622A880EE73919EF9D663005DE3C* L_16 = V_0;
		NullCheck(L_16);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_17 = L_16->___notificationObject_0;
		NullCheck(L_12);
		List_1_Insert_mE328480DACD0C7BAA2AAF0DB26C269DDA42AA3AA(L_12, L_15, L_17, List_1_Insert_mE328480DACD0C7BAA2AAF0DB26C269DDA42AA3AA_RuntimeMethod_var);
		// notificationList.Remove(notificationFromSameCategory);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_18 = ___0_notificationList;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_19 = V_1;
		NullCheck(L_18);
		bool L_20;
		L_20 = List_1_Remove_mA9B8597CBDAAE70E0F4C6BE3B729D90B28468658(L_18, L_19, List_1_Remove_mA9B8597CBDAAE70E0F4C6BE3B729D90B28468658_RuntimeMethod_var);
		// DestroyNotificationImmediate(notificationFromSameCategory);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_21 = V_1;
		NotificationDisplay_DestroyNotificationImmediate_mB85C15CD7F14DC5B8C83FB404E46F72056073E7B(L_21, NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationDisplay::SetUpNotification(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_SetUpNotification_mE72661B85C1DB9F2AEBDC28504F34A0402269F33 (NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationDisplay_DismissNotification_m75B962C0B8B2554959B6D29F41E985CD6D1DCE3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationDisplay_HandleNotificationDeletion_m6A0709C2C6A3D8D3617FA6E879CCF64EE32C26B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// notificationObject.Instantiate(this.gameObject);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_0 = ___0_notificationObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		NotificationObject_Instantiate_mB4885120CA756EADB2CF11599C6D26DB1FDEAE9F(L_0, L_1, NULL);
		// notificationObject.notification.OnWaitingForDestroyFinished += DismissNotification;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_2 = ___0_notificationObject;
		NullCheck(L_2);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_3 = L_2->___notification_0;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_4 = (NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*)il2cpp_codegen_object_new(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		NotificationDelegate__ctor_mC7B9B94D34367C9C8551A0435B901B53B35F44DA(L_4, __this, (intptr_t)((void*)NotificationDisplay_DismissNotification_m75B962C0B8B2554959B6D29F41E985CD6D1DCE3F_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Notification_add_OnWaitingForDestroyFinished_m013FFC21A015FDB1E97E60AD846C7791B80CF2C4(L_3, L_4, NULL);
		// notificationObject.notification.OnDeleted += HandleNotificationDeletion;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_5 = ___0_notificationObject;
		NullCheck(L_5);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_6 = L_5->___notification_0;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_7 = (NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*)il2cpp_codegen_object_new(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		NotificationDelegate__ctor_mC7B9B94D34367C9C8551A0435B901B53B35F44DA(L_7, __this, (intptr_t)((void*)NotificationDisplay_HandleNotificationDeletion_m6A0709C2C6A3D8D3617FA6E879CCF64EE32C26B9_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		Notification_add_OnDeleted_mD98FFBA022D170D868FAE064CA121526AEFAB3FD(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationDisplay::DismissNotification(Visometry.DesignSystem.Notification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_DismissNotification_m75B962C0B8B2554959B6D29F41E985CD6D1DCE3F (NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8* __this, Notification_t539694385F8222898937FEB72194834CA132BFDD* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationDisplay_DismissNotification_m75B962C0B8B2554959B6D29F41E985CD6D1DCE3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* V_0 = NULL;
	{
		// notification.OnWaitingForDestroyFinished -= DismissNotification;
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_0 = ___0_notification;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_1 = (NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*)il2cpp_codegen_object_new(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NotificationDelegate__ctor_mC7B9B94D34367C9C8551A0435B901B53B35F44DA(L_1, __this, (intptr_t)((void*)NotificationDisplay_DismissNotification_m75B962C0B8B2554959B6D29F41E985CD6D1DCE3F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Notification_remove_OnWaitingForDestroyFinished_mE8BCD8AFD6C87465CC931497CF036881C505A6B6(L_0, L_1, NULL);
		// NotificationObject notificationObject = GetNotificationObject(notification);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_2 = ___0_notification;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_3;
		L_3 = NotificationDisplay_GetNotificationObject_mFD36B0EF876CE013BE111ED7FCAD395B7CAABB1A(__this, L_2, NULL);
		V_0 = L_3;
		// if (notificationObject != null)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// DestroyNotificationImmediate(notificationObject);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_5 = V_0;
		NotificationDisplay_DestroyNotificationImmediate_mB85C15CD7F14DC5B8C83FB404E46F72056073E7B(L_5, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationDisplay::DestroyNotificationImmediate(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_DestroyNotificationImmediate_mB85C15CD7F14DC5B8C83FB404E46F72056073E7B (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (notificationObject.notification != null)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_0 = ___0_notificationObject;
		NullCheck(L_0);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_1 = L_0->___notification_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// MonoBehaviour.Destroy(notificationObject.notification.gameObject);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_3 = ___0_notificationObject;
		NullCheck(L_3);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_4 = L_3->___notification_0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationDisplay::HandleNotificationDeletion(Visometry.DesignSystem.Notification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_HandleNotificationDeletion_m6A0709C2C6A3D8D3617FA6E879CCF64EE32C26B9 (NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8* __this, Notification_t539694385F8222898937FEB72194834CA132BFDD* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mE0F01A3EDBB68359794CABCE083FE479F7ACA368_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mA9B8597CBDAAE70E0F4C6BE3B729D90B28468658_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationDisplay_HandleNotificationDeletion_m6A0709C2C6A3D8D3617FA6E879CCF64EE32C26B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* V_0 = NULL;
	{
		// notification.OnDeleted -= HandleNotificationDeletion;
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_0 = ___0_notification;
		NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* L_1 = (NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3*)il2cpp_codegen_object_new(NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NotificationDelegate__ctor_mC7B9B94D34367C9C8551A0435B901B53B35F44DA(L_1, __this, (intptr_t)((void*)NotificationDisplay_HandleNotificationDeletion_m6A0709C2C6A3D8D3617FA6E879CCF64EE32C26B9_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Notification_remove_OnDeleted_m6465F9B75ED8E094DFF4EB2D8136B77E5C661B85(L_0, L_1, NULL);
		// NotificationObject notificationObject = GetNotificationObject(notification);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_2 = ___0_notification;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_3;
		L_3 = NotificationDisplay_GetNotificationObject_mFD36B0EF876CE013BE111ED7FCAD395B7CAABB1A(__this, L_2, NULL);
		V_0 = L_3;
		// if (notificationObject == null)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_4 = V_0;
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// if (this.activeInfoNotificationStack.Contains(notificationObject))
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_5 = __this->___activeInfoNotificationStack_6;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = List_1_Contains_mE0F01A3EDBB68359794CABCE083FE479F7ACA368(L_5, L_6, List_1_Contains_mE0F01A3EDBB68359794CABCE083FE479F7ACA368_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		// this.activeInfoNotificationStack.Remove(notificationObject);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_8 = __this->___activeInfoNotificationStack_6;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_9 = V_0;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Remove_mA9B8597CBDAAE70E0F4C6BE3B729D90B28468658(L_8, L_9, List_1_Remove_mA9B8597CBDAAE70E0F4C6BE3B729D90B28468658_RuntimeMethod_var);
		// if (this.activeInfoNotificationStack.Count > 0)
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_11 = __this->___activeInfoNotificationStack_6;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_inline(L_11, List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_RuntimeMethod_var);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		// MoveNotificationsInStack(this.activeInfoNotificationStack, true);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_13 = __this->___activeInfoNotificationStack_6;
		NotificationDisplay_MoveNotificationsInStack_m67A46B52ABADBA46A4D168195CDB1DE0E093A095(L_13, (bool)1, NULL);
	}

IL_0053:
	{
		// if (this.activeErrorOrWarningNotification == notificationObject)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_14 = __this->___activeErrorOrWarningNotification_8;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_15 = V_0;
		if ((!(((RuntimeObject*)(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*)L_14) == ((RuntimeObject*)(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*)L_15))))
		{
			goto IL_0070;
		}
	}
	{
		// this.errorAndWarningNotificationsQueue.Remove(notificationObject);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_16 = __this->___errorAndWarningNotificationsQueue_5;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_17 = V_0;
		NullCheck(L_16);
		bool L_18;
		L_18 = List_1_Remove_mA9B8597CBDAAE70E0F4C6BE3B729D90B28468658(L_16, L_17, List_1_Remove_mA9B8597CBDAAE70E0F4C6BE3B729D90B28468658_RuntimeMethod_var);
		// this.activeErrorOrWarningNotification = null;
		__this->___activeErrorOrWarningNotification_8 = (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeErrorOrWarningNotification_8), (void*)(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*)NULL);
	}

IL_0070:
	{
		// if (this.activeErrorOrWarningNotification == null &&
		//     this.activeInfoNotificationStack.Count == 0 &&
		//     this.errorAndWarningNotificationsQueue.Count == 0)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_19 = __this->___activeErrorOrWarningNotification_8;
		if (L_19)
		{
			goto IL_0093;
		}
	}
	{
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_20 = __this->___activeInfoNotificationStack_6;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_inline(L_20, List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0093;
		}
	}
	{
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_22 = __this->___errorAndWarningNotificationsQueue_5;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_inline(L_22, List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_RuntimeMethod_var);
		if (L_23)
		{
			goto IL_0093;
		}
	}
	{
		// return;
		return;
	}

IL_0093:
	{
		// if ((notificationObject.kind == Notification.Kind.Warning ||
		//      notificationObject.kind == Notification.Kind.Error) &&
		//     this.errorAndWarningNotificationsQueue.Count > 0)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = L_24->___kind_1;
		if ((((int32_t)L_25) == ((int32_t)1)))
		{
			goto IL_00a4;
		}
	}
	{
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = L_26->___kind_1;
		if (L_27)
		{
			goto IL_00b8;
		}
	}

IL_00a4:
	{
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_28 = __this->___errorAndWarningNotificationsQueue_5;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_inline(L_28, List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_RuntimeMethod_var);
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00b8;
		}
	}
	{
		// InstantiateNextErrorWarningNotification();
		NotificationDisplay_InstantiateNextErrorWarningNotification_m9CAC701168EBA8B37556C10D77B283E4A80D8C02(__this, NULL);
	}

IL_00b8:
	{
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationDisplay::ResetNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_ResetNotifications_m91F515FCAD08759574BF90C78BF1EA1070797812 (NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7F6F0951A4FD1AF9DD792535173A98A622C5A74E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE4171F608ED4717F676B9CE94E6ACBE308CE560F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE4A180E3C53247C505420B2D7194256567276F35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE82EE3D1654077E4C84D5B2BA09FA7A7EA7680BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m68C56FEB891606ADC19CA7013FB3C11C28E2764F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tCF7B497BE71B0CB6A8E74E65DF960435BFA87B42 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* V_1 = NULL;
	{
		// if (this.activeErrorOrWarningNotification != null)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_0 = __this->___activeErrorOrWarningNotification_8;
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		// if (this.activeErrorOrWarningNotification.notification != null)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_1 = __this->___activeErrorOrWarningNotification_8;
		NullCheck(L_1);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_2 = L_1->___notification_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// MonoBehaviour.Destroy(
		//     this.activeErrorOrWarningNotification.notification.gameObject);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_4 = __this->___activeErrorOrWarningNotification_8;
		NullCheck(L_4);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_5 = L_4->___notification_0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
	}

IL_0030:
	{
		// this.activeErrorOrWarningNotification = null;
		__this->___activeErrorOrWarningNotification_8 = (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeErrorOrWarningNotification_8), (void*)(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*)NULL);
	}

IL_0037:
	{
		// if (this.activeInfoNotificationStack.Count > 0)
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_7 = __this->___activeInfoNotificationStack_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_inline(L_7, List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_RuntimeMethod_var);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_009d;
		}
	}
	{
		// foreach (NotificationObject notificationObject in this.activeInfoNotificationStack)
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_9 = __this->___activeInfoNotificationStack_6;
		NullCheck(L_9);
		Enumerator_tCF7B497BE71B0CB6A8E74E65DF960435BFA87B42 L_10;
		L_10 = List_1_GetEnumerator_m68C56FEB891606ADC19CA7013FB3C11C28E2764F(L_9, List_1_GetEnumerator_m68C56FEB891606ADC19CA7013FB3C11C28E2764F_RuntimeMethod_var);
		V_0 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0084:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7F6F0951A4FD1AF9DD792535173A98A622C5A74E((&V_0), Enumerator_Dispose_m7F6F0951A4FD1AF9DD792535173A98A622C5A74E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0079_1;
			}

IL_0053_1:
			{
				// foreach (NotificationObject notificationObject in this.activeInfoNotificationStack)
				NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_11;
				L_11 = Enumerator_get_Current_mE4A180E3C53247C505420B2D7194256567276F35_inline((&V_0), Enumerator_get_Current_mE4A180E3C53247C505420B2D7194256567276F35_RuntimeMethod_var);
				V_1 = L_11;
				// if (notificationObject.notification != null)
				NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_12 = V_1;
				NullCheck(L_12);
				Notification_t539694385F8222898937FEB72194834CA132BFDD* L_13 = L_12->___notification_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_14)
				{
					goto IL_0079_1;
				}
			}
			{
				// MonoBehaviour.Destroy(notificationObject.notification.gameObject);
				NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_15 = V_1;
				NullCheck(L_15);
				Notification_t539694385F8222898937FEB72194834CA132BFDD* L_16 = L_15->___notification_0;
				NullCheck(L_16);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_17, NULL);
			}

IL_0079_1:
			{
				// foreach (NotificationObject notificationObject in this.activeInfoNotificationStack)
				bool L_18;
				L_18 = Enumerator_MoveNext_mE4171F608ED4717F676B9CE94E6ACBE308CE560F((&V_0), Enumerator_MoveNext_mE4171F608ED4717F676B9CE94E6ACBE308CE560F_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_0092;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0092:
	{
		// this.activeInfoNotificationStack.Clear();
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_19 = __this->___activeInfoNotificationStack_6;
		NullCheck(L_19);
		List_1_Clear_mE82EE3D1654077E4C84D5B2BA09FA7A7EA7680BC_inline(L_19, List_1_Clear_mE82EE3D1654077E4C84D5B2BA09FA7A7EA7680BC_RuntimeMethod_var);
	}

IL_009d:
	{
		// this.errorAndWarningNotificationsQueue.Clear();
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_20 = __this->___errorAndWarningNotificationsQueue_5;
		NullCheck(L_20);
		List_1_Clear_mE82EE3D1654077E4C84D5B2BA09FA7A7EA7680BC_inline(L_20, List_1_Clear_mE82EE3D1654077E4C84D5B2BA09FA7A7EA7680BC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationDisplay::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_OnApplicationQuit_m65B0E75BFB6FCECD0E388955A86F4331597EA4B9 (NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8* __this, const RuntimeMethod* method) 
{
	{
		// ResetNotifications();
		NotificationDisplay_ResetNotifications_m91F515FCAD08759574BF90C78BF1EA1070797812(__this, NULL);
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationDisplay::MoveNotificationsInStack(System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay_MoveNotificationsInStack_m67A46B52ABADBA46A4D168195CDB1DE0E093A095 (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* ___0_notificationStack, bool ___1_moveInPositiveDirection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF091D009E201A4AC791A6114992C1C2BE90205E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < notificationStack.Count; i++)
		V_0 = 0;
		goto IL_0024;
	}

IL_0004:
	{
		// notificationStack[i].notification.ApplyOffset(
		//     moveInPositiveDirection,
		//     (notificationStack.Count - 1) - i);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_0 = ___0_notificationStack;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_2;
		L_2 = List_1_get_Item_mF091D009E201A4AC791A6114992C1C2BE90205E1(L_0, L_1, List_1_get_Item_mF091D009E201A4AC791A6114992C1C2BE90205E1_RuntimeMethod_var);
		NullCheck(L_2);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_3 = L_2->___notification_0;
		bool L_4 = ___1_moveInPositiveDirection;
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_5 = ___0_notificationStack;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_inline(L_5, List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_RuntimeMethod_var);
		int32_t L_7 = V_0;
		NullCheck(L_3);
		Notification_ApplyOffset_m887085EC838E6894E96E40C2368879D49011CD2C(L_3, L_4, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_6, 1)), L_7)), NULL);
		// for (int i = 0; i < notificationStack.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0024:
	{
		// for (int i = 0; i < notificationStack.Count; i++)
		int32_t L_9 = V_0;
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_10 = ___0_notificationStack;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_inline(L_10, List_1_get_Count_mDD281A2A08580AA258945343BB1D8BCC8B10C486_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// Visometry.DesignSystem.NotificationObject Visometry.DesignSystem.NotificationDisplay::FindNextNotificationInList(System.Collections.Generic.List`1<Visometry.DesignSystem.NotificationObject>,Visometry.DesignSystem.Notification/Kind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* NotificationDisplay_FindNextNotificationInList_m8D73E642D37737E0E15D2CD847B0DB0AB8EDFFB3 (List_1_t710D8F240C9C05164D0D497813701A5F6A339560* ___0_sourceList, int32_t ___1_kind, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m5E590ECACF0B2ACB24A36C1674B1E8B933A6E0F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m8BEC98625C969FD99679843420659E8C7BF57854_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m7017170691E7E1FA69C126D78524592E6BA02579_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m9E0CF9C6E437C055452F628E2D9DAAA1F6931C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFindNextNotificationInListU3Eb__17_1_m7E7E1E3863114B1E8109786F21C9B43BD036254B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3CFindNextNotificationInListU3Eb__0_mC77834930BCA5603CE4F5508666C88C3FD5C0ABC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_t86F517508BBF2449716A8988E73ABCDD2E0E044C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass17_0_t86F517508BBF2449716A8988E73ABCDD2E0E044C* V_0 = NULL;
	NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* V_1 = NULL;
	Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* G_B2_0 = NULL;
	List_1_t710D8F240C9C05164D0D497813701A5F6A339560* G_B2_1 = NULL;
	Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* G_B1_0 = NULL;
	List_1_t710D8F240C9C05164D0D497813701A5F6A339560* G_B1_1 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_t86F517508BBF2449716A8988E73ABCDD2E0E044C* L_0 = (U3CU3Ec__DisplayClass17_0_t86F517508BBF2449716A8988E73ABCDD2E0E044C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_t86F517508BBF2449716A8988E73ABCDD2E0E044C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass17_0__ctor_mA2608983AA4FA841D7837542324C1ABDA69BB9A0(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass17_0_t86F517508BBF2449716A8988E73ABCDD2E0E044C* L_1 = V_0;
		int32_t L_2 = ___1_kind;
		NullCheck(L_1);
		L_1->___kind_0 = L_2;
		// NotificationObject nextNotification = null;
		V_1 = (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*)NULL;
		// List<NotificationObject> notificationsOfKind =
		//     sourceList.Where(notification => notification.kind == kind).ToList();
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_3 = ___0_sourceList;
		U3CU3Ec__DisplayClass17_0_t86F517508BBF2449716A8988E73ABCDD2E0E044C* L_4 = V_0;
		Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* L_5 = (Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC*)il2cpp_codegen_object_new(Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m8B3CD0B7E0ED8D27F32531EAA333DC276445647B(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass17_0_U3CFindNextNotificationInListU3Eb__0_mC77834930BCA5603CE4F5508666C88C3FD5C0ABC_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m9E0CF9C6E437C055452F628E2D9DAAA1F6931C24(L_3, L_5, Enumerable_Where_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m9E0CF9C6E437C055452F628E2D9DAAA1F6931C24_RuntimeMethod_var);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_7;
		L_7 = Enumerable_ToList_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m7017170691E7E1FA69C126D78524592E6BA02579(L_6, Enumerable_ToList_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m7017170691E7E1FA69C126D78524592E6BA02579_RuntimeMethod_var);
		// nextNotification =
		//     notificationsOfKind.FirstOrDefault(notification => notification.priority > 0);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var);
		Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* L_8 = ((U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var))->___U3CU3E9__17_1_3;
		Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* L_9 = L_8;
		G_B1_0 = L_9;
		G_B1_1 = L_7;
		if (L_9)
		{
			G_B2_0 = L_9;
			G_B2_1 = L_7;
			goto IL_0045;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var);
		U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511* L_10 = ((U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* L_11 = (Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC*)il2cpp_codegen_object_new(Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Func_2__ctor_m8B3CD0B7E0ED8D27F32531EAA333DC276445647B(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CFindNextNotificationInListU3Eb__17_1_m7E7E1E3863114B1E8109786F21C9B43BD036254B_RuntimeMethod_var), NULL);
		Func_2_tF583A76AD8D2114DB54A25C1699D90DC56F8E9BC* L_12 = L_11;
		((U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var))->___U3CU3E9__17_1_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var))->___U3CU3E9__17_1_3), (void*)L_12);
		G_B2_0 = L_12;
		G_B2_1 = G_B1_1;
	}

IL_0045:
	{
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_13;
		L_13 = Enumerable_FirstOrDefault_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m5E590ECACF0B2ACB24A36C1674B1E8B933A6E0F4(G_B2_1, G_B2_0, Enumerable_FirstOrDefault_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m5E590ECACF0B2ACB24A36C1674B1E8B933A6E0F4_RuntimeMethod_var);
		V_1 = L_13;
		// if (nextNotification == null)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_14 = V_1;
		if (L_14)
		{
			goto IL_0055;
		}
	}
	{
		// nextNotification = sourceList.First();
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_15 = ___0_sourceList;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_16;
		L_16 = Enumerable_First_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m8BEC98625C969FD99679843420659E8C7BF57854(L_15, Enumerable_First_TisNotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_m8BEC98625C969FD99679843420659E8C7BF57854_RuntimeMethod_var);
		V_1 = L_16;
	}

IL_0055:
	{
		// return nextNotification;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_17 = V_1;
		return L_17;
	}
}
// Visometry.DesignSystem.NotificationObject Visometry.DesignSystem.NotificationDisplay::GetNotificationObject(Visometry.DesignSystem.Notification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* NotificationDisplay_GetNotificationObject_mFD36B0EF876CE013BE111ED7FCAD395B7CAABB1A (NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8* __this, Notification_t539694385F8222898937FEB72194834CA132BFDD* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m806929870E74F2835341A0E2FD435E2D43120392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CGetNotificationObjectU3Eb__0_m43567A7E0CEEBD01078A4C74ACFB33675FDF1C3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_tD140B4D1E15335ABFC070C94E8DBF8229384DD46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5* V_0 = NULL;
	NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass18_0_tD140B4D1E15335ABFC070C94E8DBF8229384DD46* L_0 = (U3CU3Ec__DisplayClass18_0_tD140B4D1E15335ABFC070C94E8DBF8229384DD46*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass18_0_tD140B4D1E15335ABFC070C94E8DBF8229384DD46_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass18_0__ctor_m09AB556D2F36356686303D3F57EAB615D43450A6(L_0, NULL);
		U3CU3Ec__DisplayClass18_0_tD140B4D1E15335ABFC070C94E8DBF8229384DD46* L_1 = L_0;
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_2 = ___0_notification;
		NullCheck(L_1);
		L_1->___notification_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___notification_0), (void*)L_2);
		// Predicate<NotificationObject> matchesNotification = notificationObject =>
		//     notification == notificationObject.notification;
		Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5* L_3 = (Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5*)il2cpp_codegen_object_new(Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Predicate_1__ctor_m58893B7FD61E49642E6822E7274E1F729BF363C5(L_3, L_1, (intptr_t)((void*)U3CU3Ec__DisplayClass18_0_U3CGetNotificationObjectU3Eb__0_m43567A7E0CEEBD01078A4C74ACFB33675FDF1C3B_RuntimeMethod_var), NULL);
		V_0 = L_3;
		// var match = this.errorAndWarningNotificationsQueue.Find(matchesNotification);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_4 = __this->___errorAndWarningNotificationsQueue_5;
		Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5* L_5 = V_0;
		NullCheck(L_4);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_6;
		L_6 = List_1_Find_m806929870E74F2835341A0E2FD435E2D43120392(L_4, L_5, List_1_Find_m806929870E74F2835341A0E2FD435E2D43120392_RuntimeMethod_var);
		V_1 = L_6;
		// if (match != null)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_7 = V_1;
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		// return match;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_8 = V_1;
		return L_8;
	}

IL_002a:
	{
		// return this.activeInfoNotificationStack.Find(matchesNotification);
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_9 = __this->___activeInfoNotificationStack_6;
		Predicate_1_t8B77B54AF9DB9D74DD4CE0E0C32DEA2E114987E5* L_10 = V_0;
		NullCheck(L_9);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_11;
		L_11 = List_1_Find_m806929870E74F2835341A0E2FD435E2D43120392(L_9, L_10, List_1_Find_m806929870E74F2835341A0E2FD435E2D43120392_RuntimeMethod_var);
		return L_11;
	}
}
// System.Void Visometry.DesignSystem.NotificationDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationDisplay__ctor_m97A3D76D06C3B5B8684C881180B22BFBE2D42205 (NotificationDisplay_tEC718D6556C6B95AC1A67118067E41F076179FD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m395FA195311C203A565B57418C452E41AF0AD716_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t710D8F240C9C05164D0D497813701A5F6A339560_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<NotificationObject> errorAndWarningNotificationsQueue =
		//     new List<NotificationObject>();
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_0 = (List_1_t710D8F240C9C05164D0D497813701A5F6A339560*)il2cpp_codegen_object_new(List_1_t710D8F240C9C05164D0D497813701A5F6A339560_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m395FA195311C203A565B57418C452E41AF0AD716(L_0, List_1__ctor_m395FA195311C203A565B57418C452E41AF0AD716_RuntimeMethod_var);
		__this->___errorAndWarningNotificationsQueue_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___errorAndWarningNotificationsQueue_5), (void*)L_0);
		// private List<NotificationObject> activeInfoNotificationStack =
		//     new List<NotificationObject>();
		List_1_t710D8F240C9C05164D0D497813701A5F6A339560* L_1 = (List_1_t710D8F240C9C05164D0D497813701A5F6A339560*)il2cpp_codegen_object_new(List_1_t710D8F240C9C05164D0D497813701A5F6A339560_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m395FA195311C203A565B57418C452E41AF0AD716(L_1, List_1__ctor_m395FA195311C203A565B57418C452E41AF0AD716_RuntimeMethod_var);
		__this->___activeInfoNotificationStack_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeInfoNotificationStack_6), (void*)L_1);
		UIDisplay__ctor_m33EA795932093E424C6A0DBC587F66C564ECC6B6(__this, NULL);
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
// System.Void Visometry.DesignSystem.NotificationDisplay/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m231622AD51AE75023B55E93ECE1A9375C41E0151 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511* L_0 = (U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511*)il2cpp_codegen_object_new(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mE23166B0EF05BC5A45F9CC688DC94F3AC18FAFA9(L_0, NULL);
		((U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationDisplay/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE23166B0EF05BC5A45F9CC688DC94F3AC18FAFA9 (U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Visometry.DesignSystem.NotificationDisplay/<>c::<AddNotification>b__6_2(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAddNotificationU3Eb__6_2_m67D783E0B544D9128DD97D64F24B00CD5531D633 (U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notification, const RuntimeMethod* method) 
{
	{
		// notification => notification.priority == 0) + 1,
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_0 = ___0_notification;
		NullCheck(L_0);
		int32_t L_1 = L_0->___priority_3;
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Visometry.DesignSystem.NotificationDisplay/<>c::<InstantiateNextInfoNotification>b__8_0(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CInstantiateNextInfoNotificationU3Eb__8_0_m1503EBA209255609036D54F3D776FE4A408969C5 (U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notification, const RuntimeMethod* method) 
{
	{
		// notification => notification.priority == 0);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_0 = ___0_notification;
		NullCheck(L_0);
		int32_t L_1 = L_0->___priority_3;
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Visometry.DesignSystem.NotificationDisplay/<>c::<FindNextNotificationInList>b__17_1(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindNextNotificationInListU3Eb__17_1_m7E7E1E3863114B1E8109786F21C9B43BD036254B (U3CU3Ec_tBEE8F247FB99BF016187508F8FDF0F46A16CD511* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notification, const RuntimeMethod* method) 
{
	{
		// notificationsOfKind.FirstOrDefault(notification => notification.priority > 0);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_0 = ___0_notification;
		NullCheck(L_0);
		int32_t L_1 = L_0->___priority_3;
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
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
// System.Void Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mA2608983AA4FA841D7837542324C1ABDA69BB9A0 (U3CU3Ec__DisplayClass17_0_t86F517508BBF2449716A8988E73ABCDD2E0E044C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass17_0::<FindNextNotificationInList>b__0(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass17_0_U3CFindNextNotificationInListU3Eb__0_mC77834930BCA5603CE4F5508666C88C3FD5C0ABC (U3CU3Ec__DisplayClass17_0_t86F517508BBF2449716A8988E73ABCDD2E0E044C* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notification, const RuntimeMethod* method) 
{
	{
		// sourceList.Where(notification => notification.kind == kind).ToList();
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_0 = ___0_notification;
		NullCheck(L_0);
		int32_t L_1 = L_0->___kind_1;
		int32_t L_2 = __this->___kind_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m09AB556D2F36356686303D3F57EAB615D43450A6 (U3CU3Ec__DisplayClass18_0_tD140B4D1E15335ABFC070C94E8DBF8229384DD46* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass18_0::<GetNotificationObject>b__0(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass18_0_U3CGetNotificationObjectU3Eb__0_m43567A7E0CEEBD01078A4C74ACFB33675FDF1C3B (U3CU3Ec__DisplayClass18_0_tD140B4D1E15335ABFC070C94E8DBF8229384DD46* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// notification == notificationObject.notification;
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_0 = __this->___notification_0;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_1 = ___0_notificationObject;
		NullCheck(L_1);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_2 = L_1->___notification_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_2, NULL);
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
// System.Void Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mAA5F1C418BCD8E477C670EBD55662A0AAF454BE2 (U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass6_0::<AddNotification>b__0(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CAddNotificationU3Eb__0_mD246622525E77DDB86E59A8CF3C28B601C49BA9D (U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notification, const RuntimeMethod* method) 
{
	{
		// notification => notification.IsEqualTo(newNotification));
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_0 = ___0_notification;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_1 = __this->___newNotification_0;
		NullCheck(L_0);
		bool L_2;
		L_2 = NotificationObject_IsEqualTo_m3E02B3C83E0BD9A93E983FD85290626C6A87E05B(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass6_0::<AddNotification>b__1(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CAddNotificationU3Eb__1_m9E89AD1001084E48C7F610DD2BB1C3D816C5C278 (U3CU3Ec__DisplayClass6_0_tFF4B67312C1C077458971B53281362E41B4961D2* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notification, const RuntimeMethod* method) 
{
	{
		// notification => notification.Equals(newNotification));
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_0 = ___0_notification;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_1 = __this->___newNotification_0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		return L_2;
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
// System.Void Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m352AF2AB0D60352AF42C0C146C8853189D4DAA0A (U3CU3Ec__DisplayClass9_0_tD15B502C24E3622A880EE73919EF9D663005DE3C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Visometry.DesignSystem.NotificationDisplay/<>c__DisplayClass9_0::<ReplaceNotificationFromSameCategory>b__0(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CReplaceNotificationFromSameCategoryU3Eb__0_m32421FD950F1C9CF594DC58FE9A7CA3F9FEF1EC1 (U3CU3Ec__DisplayClass9_0_tD15B502C24E3622A880EE73919EF9D663005DE3C* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notification, const RuntimeMethod* method) 
{
	{
		// notification => (notification != notificationObject &&
		//                  notification.contentCategory ==
		//                  notificationObject.contentCategory));
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_0 = ___0_notification;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_1 = __this->___notificationObject_0;
		if ((((RuntimeObject*)(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*)L_0) == ((RuntimeObject*)(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_2 = ___0_notification;
		NullCheck(L_2);
		String_t* L_3 = L_2->___contentCategory_2;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_4 = __this->___notificationObject_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___contentCategory_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		return (bool)0;
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
// System.Void Visometry.DesignSystem.NotificationManager::add_OnNotificationAdded(Visometry.DesignSystem.NotificationManager/AddNotificationAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManager_add_OnNotificationAdded_mBCBD1AF99401F3653531A3985B7DDFDE1C444DA5 (AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* V_0 = NULL;
	AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* V_1 = NULL;
	AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* V_2 = NULL;
	{
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_0 = ((NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_StaticFields*)il2cpp_codegen_static_fields_for(NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_il2cpp_TypeInfo_var))->___OnNotificationAdded_0;
		V_0 = L_0;
	}

IL_0006:
	{
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_1 = V_0;
		V_1 = L_1;
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_2 = V_1;
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B*)CastclassSealed((RuntimeObject*)L_4, AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B_il2cpp_TypeInfo_var));
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_5 = V_2;
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_6 = V_1;
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_7;
		L_7 = InterlockedCompareExchangeImpl<AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B*>((&((NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_StaticFields*)il2cpp_codegen_static_fields_for(NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_il2cpp_TypeInfo_var))->___OnNotificationAdded_0), L_5, L_6);
		V_0 = L_7;
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_8 = V_0;
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_9 = V_1;
		if ((!(((RuntimeObject*)(AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B*)L_8) == ((RuntimeObject*)(AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationManager::remove_OnNotificationAdded(Visometry.DesignSystem.NotificationManager/AddNotificationAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManager_remove_OnNotificationAdded_mE550E8AE9B85DFE2E6BE831570258E5A91BE0CB9 (AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* V_0 = NULL;
	AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* V_1 = NULL;
	AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* V_2 = NULL;
	{
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_0 = ((NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_StaticFields*)il2cpp_codegen_static_fields_for(NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_il2cpp_TypeInfo_var))->___OnNotificationAdded_0;
		V_0 = L_0;
	}

IL_0006:
	{
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_1 = V_0;
		V_1 = L_1;
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_2 = V_1;
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B*)CastclassSealed((RuntimeObject*)L_4, AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B_il2cpp_TypeInfo_var));
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_5 = V_2;
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_6 = V_1;
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_7;
		L_7 = InterlockedCompareExchangeImpl<AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B*>((&((NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_StaticFields*)il2cpp_codegen_static_fields_for(NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_il2cpp_TypeInfo_var))->___OnNotificationAdded_0), L_5, L_6);
		V_0 = L_7;
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_8 = V_0;
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_9 = V_1;
		if ((!(((RuntimeObject*)(AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B*)L_8) == ((RuntimeObject*)(AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationManager::add_OnNotificationReset(Visometry.DesignSystem.NotificationManager/ResetNotificationAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManager_add_OnNotificationReset_m90F1FBDF805289053687F334D645E06A16119F0B (ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* V_0 = NULL;
	ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* V_1 = NULL;
	ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* V_2 = NULL;
	{
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_0 = ((NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_StaticFields*)il2cpp_codegen_static_fields_for(NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_il2cpp_TypeInfo_var))->___OnNotificationReset_1;
		V_0 = L_0;
	}

IL_0006:
	{
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_1 = V_0;
		V_1 = L_1;
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_2 = V_1;
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3*)CastclassSealed((RuntimeObject*)L_4, ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3_il2cpp_TypeInfo_var));
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_5 = V_2;
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_6 = V_1;
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_7;
		L_7 = InterlockedCompareExchangeImpl<ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3*>((&((NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_StaticFields*)il2cpp_codegen_static_fields_for(NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_il2cpp_TypeInfo_var))->___OnNotificationReset_1), L_5, L_6);
		V_0 = L_7;
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_8 = V_0;
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_9 = V_1;
		if ((!(((RuntimeObject*)(ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3*)L_8) == ((RuntimeObject*)(ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationManager::remove_OnNotificationReset(Visometry.DesignSystem.NotificationManager/ResetNotificationAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManager_remove_OnNotificationReset_m41E487C9A5DBDF61019024E71FCEC5B3FDF023E8 (ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* V_0 = NULL;
	ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* V_1 = NULL;
	ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* V_2 = NULL;
	{
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_0 = ((NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_StaticFields*)il2cpp_codegen_static_fields_for(NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_il2cpp_TypeInfo_var))->___OnNotificationReset_1;
		V_0 = L_0;
	}

IL_0006:
	{
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_1 = V_0;
		V_1 = L_1;
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_2 = V_1;
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3*)CastclassSealed((RuntimeObject*)L_4, ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3_il2cpp_TypeInfo_var));
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_5 = V_2;
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_6 = V_1;
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_7;
		L_7 = InterlockedCompareExchangeImpl<ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3*>((&((NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_StaticFields*)il2cpp_codegen_static_fields_for(NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_il2cpp_TypeInfo_var))->___OnNotificationReset_1), L_5, L_6);
		V_0 = L_7;
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_8 = V_0;
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_9 = V_1;
		if ((!(((RuntimeObject*)(ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3*)L_8) == ((RuntimeObject*)(ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationManager::AddNotification(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManager_AddNotification_m6F92222636F75DA4B72E51C76D35E41503F6ED47 (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_newNotification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* G_B2_0 = NULL;
	AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* G_B1_0 = NULL;
	{
		// OnNotificationAdded?.Invoke(newNotification);
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_0 = ((NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_StaticFields*)il2cpp_codegen_static_fields_for(NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_il2cpp_TypeInfo_var))->___OnNotificationAdded_0;
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_2 = ___0_newNotification;
		NullCheck(G_B2_0);
		AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_inline(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.String Visometry.DesignSystem.NotificationManager::ToString(Visometry.DesignSystem.Notification/Kind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotificationManager_ToString_mCA507DC7CE95745526D8BB94F1AD38DF3B0B896E (int32_t ___0_kind, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70F2D3E776C2893EFBCD12D863C5C9061CFBA6DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_kind;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_0024;
			}
			case 3:
			{
				goto IL_002a;
			}
		}
	}
	{
		goto IL_0030;
	}

IL_0018:
	{
		// return "Error";
		return _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
	}

IL_001e:
	{
		// return "Warning";
		return _stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7;
	}

IL_0024:
	{
		// return "Success";
		return _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890;
	}

IL_002a:
	{
		// return "Info";
		return _stringLiteral70F2D3E776C2893EFBCD12D863C5C9061CFBA6DA;
	}

IL_0030:
	{
		// throw new ArgumentException("Unknown notification kind: " + kind);
		Il2CppFakeBox<int32_t> L_1(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kind_tE6BC502D960468CACF8E0F32596A4699E65366C4_il2cpp_TypeInfo_var)), (&___0_kind));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75A2ABFAA0DF56F97F03D53B032AE89D807AA673)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotificationManager_ToString_mCA507DC7CE95745526D8BB94F1AD38DF3B0B896E_RuntimeMethod_var)));
	}
}
// System.Void Visometry.DesignSystem.NotificationManager::AddSimpleNotification(Visometry.DesignSystem.Notification/Kind,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManager_AddSimpleNotification_m4DCF8E031007757B87D345C14FB41CCD5FF860D3 (int32_t ___0_kind, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddNotification(
		//     new NotificationObject(ToString(kind), message, kind, Notification.Type.Inline));
		int32_t L_0 = ___0_kind;
		String_t* L_1;
		L_1 = NotificationManager_ToString_mCA507DC7CE95745526D8BB94F1AD38DF3B0B896E(L_0, NULL);
		String_t* L_2 = ___1_message;
		int32_t L_3 = ___0_kind;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_4 = (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*)il2cpp_codegen_object_new(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		NotificationObject__ctor_m12F99ECC72E03B615DA2A62A1B27018031C5B263(L_4, L_1, L_2, L_3, 0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (bool)1, 0, NULL);
		NotificationManager_AddNotification_m6F92222636F75DA4B72E51C76D35E41503F6ED47(L_4, NULL);
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationManager::ResetNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManager_ResetNotifications_m9EE4894367AD17B531E5067ED0B669295D2F4AE8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* G_B2_0 = NULL;
	ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* G_B1_0 = NULL;
	{
		// OnNotificationReset?.Invoke();
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_0 = ((NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_StaticFields*)il2cpp_codegen_static_fields_for(NotificationManager_tC12FACCC28B4360EB44BD8A0C3F7761CBF22ED33_il2cpp_TypeInfo_var))->___OnNotificationReset_1;
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		ResetNotificationAction_Invoke_m34ECE10E050467C9AC44DDDF9892304B59C38682_inline(G_B2_0, NULL);
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
void AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_Multicast(AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* currentDelegate = reinterpret_cast<AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_notificationObject, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_OpenInst(AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, const RuntimeMethod* method)
{
	NullCheck(___0_notificationObject);
	typedef void (*FunctionPointerType) (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_notificationObject, method);
}
void AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_OpenStatic(AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_notificationObject, method);
}
void AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_OpenStaticInvoker(AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, const RuntimeMethod* method)
{
	InvokerActionInvoker1< NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_notificationObject);
}
void AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_ClosedStaticInvoker(AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_notificationObject);
}
void AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_OpenVirtual(AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, const RuntimeMethod* method)
{
	NullCheck(___0_notificationObject);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_notificationObject);
}
void AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_OpenInterface(AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, const RuntimeMethod* method)
{
	NullCheck(___0_notificationObject);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_notificationObject);
}
void AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_OpenGenericVirtual(AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, const RuntimeMethod* method)
{
	NullCheck(___0_notificationObject);
	GenericVirtualActionInvoker0::Invoke(method, ___0_notificationObject);
}
void AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_OpenGenericInterface(AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, const RuntimeMethod* method)
{
	NullCheck(___0_notificationObject);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_notificationObject);
}
// System.Void Visometry.DesignSystem.NotificationManager/AddNotificationAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddNotificationAction__ctor_m85AEFE62A5A9BB42D2F9E8E995834394D857B924 (AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_Multicast;
}
// System.Void Visometry.DesignSystem.NotificationManager/AddNotificationAction::Invoke(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2 (AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_notificationObject, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Visometry.DesignSystem.NotificationManager/AddNotificationAction::BeginInvoke(Visometry.DesignSystem.NotificationObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AddNotificationAction_BeginInvoke_mD23AA56FD97F446D702209EFE14AD6CDACF5FA51 (AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_notificationObject;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Visometry.DesignSystem.NotificationManager/AddNotificationAction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddNotificationAction_EndInvoke_mECF0D5DBC4BD582AB1D84BD00F40649FEF3101AF (AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ResetNotificationAction_Invoke_m34ECE10E050467C9AC44DDDF9892304B59C38682_Multicast(ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* currentDelegate = reinterpret_cast<ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ResetNotificationAction_Invoke_m34ECE10E050467C9AC44DDDF9892304B59C38682_OpenInst(ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ResetNotificationAction_Invoke_m34ECE10E050467C9AC44DDDF9892304B59C38682_OpenStatic(ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ResetNotificationAction_Invoke_m34ECE10E050467C9AC44DDDF9892304B59C38682_OpenStaticInvoker(ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
void ResetNotificationAction_Invoke_m34ECE10E050467C9AC44DDDF9892304B59C38682_ClosedStaticInvoker(ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3 (ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Visometry.DesignSystem.NotificationManager/ResetNotificationAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetNotificationAction__ctor_mF9BFA4F431C7B986AEC5C9ADCE7FE29AD5993820 (ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ResetNotificationAction_Invoke_m34ECE10E050467C9AC44DDDF9892304B59C38682_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ResetNotificationAction_Invoke_m34ECE10E050467C9AC44DDDF9892304B59C38682_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ResetNotificationAction_Invoke_m34ECE10E050467C9AC44DDDF9892304B59C38682_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ResetNotificationAction_Invoke_m34ECE10E050467C9AC44DDDF9892304B59C38682_Multicast;
}
// System.Void Visometry.DesignSystem.NotificationManager/ResetNotificationAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetNotificationAction_Invoke_m34ECE10E050467C9AC44DDDF9892304B59C38682 (ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Visometry.DesignSystem.NotificationManager/ResetNotificationAction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResetNotificationAction_BeginInvoke_m7974526C8D683638B0FEE818001E7E1904B387DC (ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void Visometry.DesignSystem.NotificationManager/ResetNotificationAction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetNotificationAction_EndInvoke_m30939D63D31CD8708A5495AA4030CC91936D1692 (ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Visometry.DesignSystem.NotificationObject::.ctor(System.String,System.String,Visometry.DesignSystem.Notification/Kind,Visometry.DesignSystem.Notification/Type,System.Action,System.String,UnityEngine.GameObject,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationObject__ctor_m12F99ECC72E03B615DA2A62A1B27018031C5B263 (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* __this, String_t* ___0_title, String_t* ___1_caption, int32_t ___2_kind, int32_t ___3_type, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_onActionButtonClick, String_t* ___5_contentCategory, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___6_additionalContent, bool ___7_dismissAutomatically, int32_t ___8_priority, const RuntimeMethod* method) 
{
	{
		// private int encounters = 1;
		__this->___encounters_10 = 1;
		// public NotificationObject(
		//     string title,
		//     string caption,
		//     Notification.Kind kind,
		//     Notification.Type type,
		//     System.Action onActionButtonClick = null,
		//     string contentCategory = "",
		//     GameObject additionalContent = null,
		//     bool dismissAutomatically = true,
		//     int priority = 0)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.title = title;
		String_t* L_0 = ___0_title;
		__this->___title_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___title_5), (void*)L_0);
		// this.caption = caption;
		String_t* L_1 = ___1_caption;
		__this->___caption_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___caption_6), (void*)L_1);
		// this.kind = kind;
		int32_t L_2 = ___2_kind;
		__this->___kind_1 = L_2;
		// this.type = type;
		int32_t L_3 = ___3_type;
		__this->___type_4 = L_3;
		// this.onAction = onActionButtonClick;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___4_onActionButtonClick;
		__this->___onAction_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onAction_7), (void*)L_4);
		// this.contentCategory = contentCategory;
		String_t* L_5 = ___5_contentCategory;
		__this->___contentCategory_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___contentCategory_2), (void*)L_5);
		// this.additionalContent = additionalContent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___6_additionalContent;
		__this->___additionalContent_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___additionalContent_8), (void*)L_6);
		// this.dismissAutomatically = dismissAutomatically;
		bool L_7 = ___7_dismissAutomatically;
		__this->___dismissAutomatically_9 = L_7;
		// this.priority = priority;
		int32_t L_8 = ___8_priority;
		__this->___priority_3 = L_8;
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationObject::Instantiate(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationObject_Instantiate_mB4885120CA756EADB2CF11599C6D26DB1FDEAE9F (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_parent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNotification_t539694385F8222898937FEB72194834CA132BFDD_mFEAC2D832E99D027EA21A3CE386840973E69407E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisNotification_t539694385F8222898937FEB72194834CA132BFDD_mC908F28AF8A2E35A315FBD7B8940D9CD9642617A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5470D00D7F3AFAEEA2B1A6FC9D9A36A789B95B8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.notification = GameObject.Instantiate(
		//     Resources.Load<Notification>(notificationPrefabName).gameObject,
		//     parent.transform).GetComponent<Notification>();
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_0;
		L_0 = Resources_Load_TisNotification_t539694385F8222898937FEB72194834CA132BFDD_mC908F28AF8A2E35A315FBD7B8940D9CD9642617A(_stringLiteralF5470D00D7F3AFAEEA2B1A6FC9D9A36A789B95B8, Resources_Load_TisNotification_t539694385F8222898937FEB72194834CA132BFDD_mC908F28AF8A2E35A315FBD7B8940D9CD9642617A_RuntimeMethod_var);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_parent;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_1, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		NullCheck(L_4);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_5;
		L_5 = GameObject_GetComponent_TisNotification_t539694385F8222898937FEB72194834CA132BFDD_mFEAC2D832E99D027EA21A3CE386840973E69407E(L_4, GameObject_GetComponent_TisNotification_t539694385F8222898937FEB72194834CA132BFDD_mFEAC2D832E99D027EA21A3CE386840973E69407E_RuntimeMethod_var);
		__this->___notification_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___notification_0), (void*)L_5);
		// InitializeNotification();
		NotificationObject_InitializeNotification_m606FB936919FABD06021C4A2317779E388DB1C1A(__this, NULL);
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationObject::InitializeNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationObject_InitializeNotification_m606FB936919FABD06021C4A2317779E388DB1C1A (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16D938BDE7CA587C1D35A2282D03CEC172C5CCDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AC1537F92520DB9AB6C0C518A00293997E2A0CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7EE2690FC484B04213C2D37CAD7AAD1E9FEDB5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5E8C165BB837598AB01ED080B819F445653F554);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!this.notification.gameObject.activeInHierarchy)
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_0 = __this->___notification_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_1, NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// UpdateNotificationTexts();
		NotificationObject_UpdateNotificationTexts_m6F1272DFACD91BD7567F4CD9E157E571FC188A0B(__this, NULL);
		// this.notification.SetAction(this.onAction);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_3 = __this->___notification_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___onAction_7;
		NullCheck(L_3);
		Notification_SetAction_m6DE33BF6B3F3DA79595D975929E6156F64B9C86A(L_3, L_4, NULL);
		// switch (this.kind)
		int32_t L_5 = __this->___kind_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (L_6)
		{
			case 0:
			{
				goto IL_004c;
			}
			case 1:
			{
				goto IL_007d;
			}
			case 2:
			{
				goto IL_00ab;
			}
			case 3:
			{
				goto IL_00d9;
			}
		}
	}
	{
		goto IL_0105;
	}

IL_004c:
	{
		// this.notification.SetPosition(Notification.Position.Bottom);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_7 = __this->___notification_0;
		NullCheck(L_7);
		Notification_SetPosition_mE0C57FD13ADBE20783D9D6DDB8CCC92998A3AEA8(L_7, 0, NULL);
		// this.notification.SetColor(errorColor);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_8 = __this->___notification_0;
		il2cpp_codegen_runtime_class_init_inline(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ((NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_StaticFields*)il2cpp_codegen_static_fields_for(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var))->___errorColor_13;
		NullCheck(L_8);
		Notification_SetColor_m3EA92841E8CEDBF2096188C6D4CA0F69F4318A66(L_8, L_9, NULL);
		// this.notification.SetIcon(errorIcon);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_10 = __this->___notification_0;
		NullCheck(L_10);
		Notification_SetIcon_m77F3C494808B8FBE46048BDCA60FD531E978B37A(L_10, _stringLiteral3AC1537F92520DB9AB6C0C518A00293997E2A0CC, NULL);
		// break;
		goto IL_0105;
	}

IL_007d:
	{
		// this.notification.SetPosition(Notification.Position.Bottom);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_11 = __this->___notification_0;
		NullCheck(L_11);
		Notification_SetPosition_mE0C57FD13ADBE20783D9D6DDB8CCC92998A3AEA8(L_11, 0, NULL);
		// this.notification.SetColor(warningColor);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_12 = __this->___notification_0;
		il2cpp_codegen_runtime_class_init_inline(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ((NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_StaticFields*)il2cpp_codegen_static_fields_for(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var))->___warningColor_14;
		NullCheck(L_12);
		Notification_SetColor_m3EA92841E8CEDBF2096188C6D4CA0F69F4318A66(L_12, L_13, NULL);
		// this.notification.SetIcon(warningIcon);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_14 = __this->___notification_0;
		NullCheck(L_14);
		Notification_SetIcon_m77F3C494808B8FBE46048BDCA60FD531E978B37A(L_14, _stringLiteralD5E8C165BB837598AB01ED080B819F445653F554, NULL);
		// break;
		goto IL_0105;
	}

IL_00ab:
	{
		// this.notification.SetPosition(Notification.Position.Ceiling);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_15 = __this->___notification_0;
		NullCheck(L_15);
		Notification_SetPosition_mE0C57FD13ADBE20783D9D6DDB8CCC92998A3AEA8(L_15, 1, NULL);
		// this.notification.SetColor(successColor);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_16 = __this->___notification_0;
		il2cpp_codegen_runtime_class_init_inline(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ((NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_StaticFields*)il2cpp_codegen_static_fields_for(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var))->___successColor_15;
		NullCheck(L_16);
		Notification_SetColor_m3EA92841E8CEDBF2096188C6D4CA0F69F4318A66(L_16, L_17, NULL);
		// this.notification.SetIcon(successIcon);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_18 = __this->___notification_0;
		NullCheck(L_18);
		Notification_SetIcon_m77F3C494808B8FBE46048BDCA60FD531E978B37A(L_18, _stringLiteralB7EE2690FC484B04213C2D37CAD7AAD1E9FEDB5D, NULL);
		// break;
		goto IL_0105;
	}

IL_00d9:
	{
		// this.notification.SetPosition(Notification.Position.Ceiling);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_19 = __this->___notification_0;
		NullCheck(L_19);
		Notification_SetPosition_mE0C57FD13ADBE20783D9D6DDB8CCC92998A3AEA8(L_19, 1, NULL);
		// this.notification.SetColor(infoColor);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_20 = __this->___notification_0;
		il2cpp_codegen_runtime_class_init_inline(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = ((NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_StaticFields*)il2cpp_codegen_static_fields_for(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var))->___infoColor_16;
		NullCheck(L_20);
		Notification_SetColor_m3EA92841E8CEDBF2096188C6D4CA0F69F4318A66(L_20, L_21, NULL);
		// this.notification.SetIcon(infoIcon);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_22 = __this->___notification_0;
		NullCheck(L_22);
		Notification_SetIcon_m77F3C494808B8FBE46048BDCA60FD531E978B37A(L_22, _stringLiteral16D938BDE7CA587C1D35A2282D03CEC172C5CCDD, NULL);
	}

IL_0105:
	{
		// TriggerDestroyAfterSeconds();
		NotificationObject_TriggerDestroyAfterSeconds_mD9D9532FFB6044EAF8FC47CCDCF114D78BAEC8F2(__this, NULL);
		// switch (this.type)
		int32_t L_23 = __this->___type_4;
		// if (this.additionalContent != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___additionalContent_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_013c;
		}
	}
	{
		// this.additionalContent.transform.SetParent(this.notification.transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___additionalContent_8;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_28 = __this->___notification_0;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_27);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_27, L_29, (bool)0, NULL);
	}

IL_013c:
	{
		// }
		return;
	}
}
// System.Boolean Visometry.DesignSystem.NotificationObject::IsEqualTo(Visometry.DesignSystem.NotificationObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotificationObject_IsEqualTo_m3E02B3C83E0BD9A93E983FD85290626C6A87E05B (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_other, const RuntimeMethod* method) 
{
	{
		// if (other == null)
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_0 = ___0_other;
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
		// return this.kind == other.kind && this.type == other.type &&
		//        this.title == other.title && this.caption == other.caption &&
		//        this.contentCategory == other.contentCategory && this.priority == other.priority;
		int32_t L_1 = __this->___kind_1;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_2 = ___0_other;
		NullCheck(L_2);
		int32_t L_3 = L_2->___kind_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_4 = __this->___type_4;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_5 = ___0_other;
		NullCheck(L_5);
		int32_t L_6 = L_5->___type_4;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_6))))
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_7 = __this->___title_5;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_8 = ___0_other;
		NullCheck(L_8);
		String_t* L_9 = L_8->___title_5;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_11 = __this->___caption_6;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_12 = ___0_other;
		NullCheck(L_12);
		String_t* L_13 = L_12->___caption_6;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_15 = __this->___contentCategory_2;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_16 = ___0_other;
		NullCheck(L_16);
		String_t* L_17 = L_16->___contentCategory_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_19 = __this->___priority_3;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_20 = ___0_other;
		NullCheck(L_20);
		int32_t L_21 = L_20->___priority_3;
		return (bool)((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
	}

IL_0069:
	{
		return (bool)0;
	}
}
// System.Void Visometry.DesignSystem.NotificationObject::IncreaseEncounters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationObject_IncreaseEncounters_m7DCA778F1585568D352CA1E22BD312F42052EA2B (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.encounters++;
		int32_t L_0 = __this->___encounters_10;
		__this->___encounters_10 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (this.notification)
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_1 = __this->___notification_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// UpdateNotificationTexts();
		NotificationObject_UpdateNotificationTexts_m6F1272DFACD91BD7567F4CD9E157E571FC188A0B(__this, NULL);
		// TriggerDestroyAfterSeconds();
		NotificationObject_TriggerDestroyAfterSeconds_mD9D9532FFB6044EAF8FC47CCDCF114D78BAEC8F2(__this, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationObject::UpdateNotificationTexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationObject_UpdateNotificationTexts_m6F1272DFACD91BD7567F4CD9E157E571FC188A0B (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC28B175BF855B5BB33FB3D91A9438F318165B323);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8270C67B438EB1CEB5DAA2BF9B7E661F78A48EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string postfix = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (this.encounters > 1)
		int32_t L_0 = __this->___encounters_10;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		// postfix = " ( " + this.encounters + " )";
		int32_t* L_1 = (int32_t*)(&__this->___encounters_10);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC28B175BF855B5BB33FB3D91A9438F318165B323, L_2, _stringLiteralD8270C67B438EB1CEB5DAA2BF9B7E661F78A48EC, NULL);
		V_0 = L_3;
	}

IL_002a:
	{
		// this.notification.SetTexts(this.title, this.caption + postfix);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_4 = __this->___notification_0;
		String_t* L_5 = __this->___title_5;
		String_t* L_6 = __this->___caption_6;
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, L_7, NULL);
		NullCheck(L_4);
		Notification_SetTexts_m6F762A3A36D6D3535383061161DF7333D669EF31(L_4, L_5, L_8, NULL);
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationObject::TriggerDestroyAfterSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationObject_TriggerDestroyAfterSeconds_mD9D9532FFB6044EAF8FC47CCDCF114D78BAEC8F2 (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (!this.dismissAutomatically)
		bool L_0 = __this->___dismissAutomatically_9;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// switch (this.kind)
		int32_t L_1 = __this->___kind_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0038;
			}
			case 3:
			{
				goto IL_0049;
			}
		}
	}
	{
		return;
	}

IL_0027:
	{
		// this.notification.TriggerDestroyAfterSeconds(dismissAfterSeconds);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_3 = __this->___notification_0;
		NullCheck(L_3);
		Notification_TriggerDestroyAfterSeconds_m9FEE6C4DDFBA3550ECFBC71C9614FEA3AFEE7A1C(L_3, (5.0f), NULL);
		// break;
		return;
	}

IL_0038:
	{
		// this.notification.TriggerDestroyAfterSeconds(dismissAfterSeconds);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_4 = __this->___notification_0;
		NullCheck(L_4);
		Notification_TriggerDestroyAfterSeconds_m9FEE6C4DDFBA3550ECFBC71C9614FEA3AFEE7A1C(L_4, (5.0f), NULL);
		// break;
		return;
	}

IL_0049:
	{
		// this.notification.TriggerDestroyAfterSeconds(dismissAfterSeconds);
		Notification_t539694385F8222898937FEB72194834CA132BFDD* L_5 = __this->___notification_0;
		NullCheck(L_5);
		Notification_TriggerDestroyAfterSeconds_m9FEE6C4DDFBA3550ECFBC71C9614FEA3AFEE7A1C(L_5, (5.0f), NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.NotificationObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationObject__cctor_m8026E4AE0649731C98380B8DDA85D90FA32C50C2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Color errorColor = new Color32(0xda, 0x1e, 0x28, 0xFF);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_0), (uint8_t)((int32_t)218), (uint8_t)((int32_t)30), (uint8_t)((int32_t)40), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_0, NULL);
		((NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_StaticFields*)il2cpp_codegen_static_fields_for(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var))->___errorColor_13 = L_1;
		// private static Color warningColor = new Color32(0xf1, 0xc2, 0x1b, 0xFF);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_2), (uint8_t)((int32_t)241), (uint8_t)((int32_t)194), (uint8_t)((int32_t)27), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_2, NULL);
		((NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_StaticFields*)il2cpp_codegen_static_fields_for(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var))->___warningColor_14 = L_3;
		// private static Color successColor = new Color32(0x42, 0xbe, 0x65, 0xFF);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_4), (uint8_t)((int32_t)66), (uint8_t)((int32_t)190), (uint8_t)((int32_t)101), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_4, NULL);
		((NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_StaticFields*)il2cpp_codegen_static_fields_for(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var))->___successColor_15 = L_5;
		// private static Color infoColor = Color.grey;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline(NULL);
		((NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_StaticFields*)il2cpp_codegen_static_fields_for(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var))->___infoColor_16 = L_6;
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
// System.Single Visometry.DesignSystem.LinearProgressBar::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearProgressBar_get_Value_m3DD1819BB47581F3337938C8ACA90F7CE7E123B2 (LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* __this, const RuntimeMethod* method) 
{
	{
		// return this.slider.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_4;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		return L_1;
	}
}
// System.Void Visometry.DesignSystem.LinearProgressBar::set_Value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearProgressBar_set_Value_mD14941587976B22537708BCD100711A652176259 (LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// this.slider.value = value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_4;
		float L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// }
		return;
	}
}
// Visometry.DesignSystem.LinearProgressBar Visometry.DesignSystem.LinearProgressBar::Instantiate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* LinearProgressBar_Instantiate_mC61BAE438A3A43BEE4AD7D6789960F80DE0651EF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F_m34737D7B96F4E117EFF9A77CBFFDC69814EA7273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisLinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F_mF66282135F738BE7DEBB9AC3E37B51A12BC5CE2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5EEADD3479EA74E5B5AA9BC0A97C8F9B11E7156);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Instantiate(Resources.Load<LinearProgressBar>(progressBarName).gameObject)
		//     .GetComponent<LinearProgressBar>();
		LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* L_0;
		L_0 = Resources_Load_TisLinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F_mF66282135F738BE7DEBB9AC3E37B51A12BC5CE2D(_stringLiteralE5EEADD3479EA74E5B5AA9BC0A97C8F9B11E7156, Resources_Load_TisLinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F_mF66282135F738BE7DEBB9AC3E37B51A12BC5CE2D_RuntimeMethod_var);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		NullCheck(L_2);
		LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* L_3;
		L_3 = GameObject_GetComponent_TisLinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F_m34737D7B96F4E117EFF9A77CBFFDC69814EA7273(L_2, GameObject_GetComponent_TisLinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F_m34737D7B96F4E117EFF9A77CBFFDC69814EA7273_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Visometry.DesignSystem.LinearProgressBar::SetMinMaxValues(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearProgressBar_SetMinMaxValues_m29371452C44F890B7BA8517CB657E28974AC53C8 (LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* __this, float ___0_minValue, float ___1_maxValue, const RuntimeMethod* method) 
{
	{
		// this.slider.minValue = minValue;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_4;
		float L_1 = ___0_minValue;
		NullCheck(L_0);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_0, L_1, NULL);
		// this.slider.maxValue = maxValue;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___slider_4;
		float L_3 = ___1_maxValue;
		NullCheck(L_2);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.LinearProgressBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearProgressBar__ctor_m0D1CCB287A3E069B43ED2C25F429A56B151243AE (LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Visometry.DesignSystem.ProgressBarNotification::.ctor(System.String,System.Single,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBarNotification__ctor_m9E3642A4460169FB7E698FD28DE2BBA2BCC083F0 (ProgressBarNotification_tE0CBCC55BADC1CA1EF4F67539BE791EC11D004D2* __this, String_t* ___0_inProgressText, float ___1_minValue, float ___2_maxValue, String_t* ___3_category, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70F2D3E776C2893EFBCD12D863C5C9061CFBA6DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ProgressBarNotification(
		//     string inProgressText,
		//     float minValue,
		//     float maxValue,
		//     string category)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.progressBar = LinearProgressBar.Instantiate();
		LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* L_0;
		L_0 = LinearProgressBar_Instantiate_mC61BAE438A3A43BEE4AD7D6789960F80DE0651EF(NULL);
		__this->___progressBar_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___progressBar_0), (void*)L_0);
		// this.progressBar.SetMinMaxValues(minValue, maxValue);
		LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* L_1 = __this->___progressBar_0;
		float L_2 = ___1_minValue;
		float L_3 = ___2_maxValue;
		NullCheck(L_1);
		LinearProgressBar_SetMinMaxValues_m29371452C44F890B7BA8517CB657E28974AC53C8(L_1, L_2, L_3, NULL);
		// this.progressBar.Value = minValue;
		LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* L_4 = __this->___progressBar_0;
		float L_5 = ___1_minValue;
		NullCheck(L_4);
		LinearProgressBar_set_Value_mD14941587976B22537708BCD100711A652176259(L_4, L_5, NULL);
		// this.notificationCategory = category;
		String_t* L_6 = ___3_category;
		__this->___notificationCategory_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___notificationCategory_1), (void*)L_6);
		// NotificationManager.AddNotification(
		//     new NotificationObject(
		//         "Info",
		//         inProgressText,
		//         Notification.Kind.Info,
		//         Notification.Type.Inline,
		//         null,
		//         this.notificationCategory,
		//         this.progressBar.gameObject,
		//         false,
		//         1));
		String_t* L_7 = ___0_inProgressText;
		String_t* L_8 = __this->___notificationCategory_1;
		LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* L_9 = __this->___progressBar_0;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_11 = (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*)il2cpp_codegen_object_new(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		NotificationObject__ctor_m12F99ECC72E03B615DA2A62A1B27018031C5B263(L_11, _stringLiteral70F2D3E776C2893EFBCD12D863C5C9061CFBA6DA, L_7, 3, 0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, L_8, L_10, (bool)0, 1, NULL);
		NotificationManager_AddNotification_m6F92222636F75DA4B72E51C76D35E41503F6ED47(L_11, NULL);
		// }
		return;
	}
}
// System.Single Visometry.DesignSystem.ProgressBarNotification::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ProgressBarNotification_get_Value_mC659D20EE34D46BF4BE2B824D2E49537A13EB8BA (ProgressBarNotification_tE0CBCC55BADC1CA1EF4F67539BE791EC11D004D2* __this, const RuntimeMethod* method) 
{
	{
		// return this.progressBar.Value;
		LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* L_0 = __this->___progressBar_0;
		NullCheck(L_0);
		float L_1;
		L_1 = LinearProgressBar_get_Value_m3DD1819BB47581F3337938C8ACA90F7CE7E123B2(L_0, NULL);
		return L_1;
	}
}
// System.Void Visometry.DesignSystem.ProgressBarNotification::set_Value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBarNotification_set_Value_mACDC581B3BB0EE69B34CC0EA064CFC2F09D53DBE (ProgressBarNotification_tE0CBCC55BADC1CA1EF4F67539BE791EC11D004D2* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// this.progressBar.Value = value;
		LinearProgressBar_t16290CD12DF1173D4D793A10D8FFAD08A0B87E8F* L_0 = __this->___progressBar_0;
		float L_1 = ___0_value;
		NullCheck(L_0);
		LinearProgressBar_set_Value_mD14941587976B22537708BCD100711A652176259(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.ProgressBarNotification::Finish(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBarNotification_Finish_m3CABB3E7FBBE6D04E8825199D4B12F342FAE8588 (ProgressBarNotification_tE0CBCC55BADC1CA1EF4F67539BE791EC11D004D2* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NotificationManager.AddNotification(
		//     new NotificationObject(
		//         "Success",
		//         message,
		//         Notification.Kind.Success,
		//         Notification.Type.Inline,
		//         null,
		//         this.notificationCategory,
		//         null,
		//         true,
		//         1));
		String_t* L_0 = ___0_message;
		String_t* L_1 = __this->___notificationCategory_1;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_2 = (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*)il2cpp_codegen_object_new(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NotificationObject__ctor_m12F99ECC72E03B615DA2A62A1B27018031C5B263(L_2, _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890, L_0, 2, 0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, L_1, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (bool)1, 1, NULL);
		NotificationManager_AddNotification_m6F92222636F75DA4B72E51C76D35E41503F6ED47(L_2, NULL);
		// }
		return;
	}
}
// System.Void Visometry.DesignSystem.ProgressBarNotification::Abort(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBarNotification_Abort_mB3B32568A0B574C6666F26AD3FB8D42683B8B5EB (ProgressBarNotification_tE0CBCC55BADC1CA1EF4F67539BE791EC11D004D2* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70F2D3E776C2893EFBCD12D863C5C9061CFBA6DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NotificationManager.AddNotification(
		//     new NotificationObject(
		//         "Info",
		//         message,
		//         Notification.Kind.Info,
		//         Notification.Type.Inline,
		//         null,
		//         this.notificationCategory));
		String_t* L_0 = ___0_message;
		String_t* L_1 = __this->___notificationCategory_1;
		NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* L_2 = (NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*)il2cpp_codegen_object_new(NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NotificationObject__ctor_m12F99ECC72E03B615DA2A62A1B27018031C5B263(L_2, _stringLiteral70F2D3E776C2893EFBCD12D863C5C9061CFBA6DA, L_0, 3, 0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, L_1, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (bool)1, 0, NULL);
		NotificationManager_AddNotification_m6F92222636F75DA4B72E51C76D35E41503F6ED47(L_2, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotificationDelegate_Invoke_mE3EFFBE30665511A2400C27C4F662DFDF08B6BCD_inline (NotificationDelegate_t5A5C412193070F7D93505846DCF65AAB0BD32DB3* __this, Notification_t539694385F8222898937FEB72194834CA132BFDD* ___0_notification, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Notification_t539694385F8222898937FEB72194834CA132BFDD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_notification, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AddNotificationAction_Invoke_mBBC5A55A51F1117265A61564EA41471F75AA7EB2_inline (AddNotificationAction_t0D5E97DF06DA7EB389940CFE510BD7FB1E9C5D9B* __this, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6* ___0_notificationObject, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NotificationObject_t0E5A7850A910C86EF53ED2341D7C2BAF839795A6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_notificationObject, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResetNotificationAction_Invoke_m34ECE10E050467C9AC44DDDF9892304B59C38682_inline (ResetNotificationAction_t2C1379A8CF596B29290D146289AAD576E796DCC3* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___0_r;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___1_g;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___2_b;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___3_a;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_c;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___0_c;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___0_c;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___0_c;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
