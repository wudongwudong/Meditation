#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<BluetoothLEHardwareInterface/iBeaconData>
struct Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE;
// System.Action`2<System.Object,System.Int32>
struct Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<System.String,System.Byte[]>
struct Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831;
// System.Action`2<System.String,System.Int32>
struct Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF;
// System.Action`2<System.String,System.String>
struct Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D;
// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58;
// System.Action`3<System.String,System.String,System.Byte[]>
struct Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB;
// System.Action`3<System.String,System.String,System.String>
struct Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7;
// System.Action`4<System.Object,System.Object,System.Int32,System.Object>
struct Action_4_tB13889672F2D689F21857C968EBBDF091CA42E46;
// System.Action`4<System.String,System.String,System.Int32,System.Byte[]>
struct Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>
struct Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>
struct Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>
struct Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>
struct Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>
struct Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>
struct Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>
struct Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>
struct Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<System.String>>
struct KeyCollection_tDC9905DAB7B3D843994B8AF143B97B5C1D5B6936;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`2<System.String,System.Byte[]>>
struct KeyCollection_t6B68A129EC8149AACE58C5F34312148132BE3A5D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`2<System.String,System.String>>
struct KeyCollection_t2B4949A3310A54180CF25ECDBB063042F07D3846;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`3<System.String,System.String,System.Byte[]>>
struct KeyCollection_tDEB7EBAE34ACB36F488B64E3ACCA223414080409;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>
struct KeyCollection_t62E580CDD4AD2C58AB764BA8E96B51A9A408EF14;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>
struct KeyCollection_tD5F7D890C8347A2C4B342C2D2B64AFC23157E272;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>
struct KeyCollection_t28070F1CBB6F27FB971DEA73EA1F1B5C99CCCBD7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>
struct KeyCollection_t55BF89DF4C34E4D0DD7186A21DF7FBADBAFF9B57;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<System.String>>
struct ValueCollection_t1BFE2D9246539713D76621C5D038C86BA2DA3F76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`2<System.String,System.Byte[]>>
struct ValueCollection_t6FE7F1553C6213D89E25A379E6F130A43116E93B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`2<System.String,System.String>>
struct ValueCollection_tE72EBB4992A3B7027945352F3E85E6E4EA3CCC1E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`3<System.String,System.String,System.Byte[]>>
struct ValueCollection_t693954EDFB989578797C65FD6346D986760277F6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>
struct ValueCollection_tF277A139BF9A5A5C6F4F4F5FD6A8000A8658FDCE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>
struct ValueCollection_tBEC71E03B4233FB8DD3447320101C69756B06B6D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>
struct ValueCollection_t8882E34082E7EEA63E8D352364FBC4C7FCD16BA2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>
struct ValueCollection_t7E2768C272CC12D1213F42E60FEC61D271B5504B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<System.String>>[]
struct EntryU5BU5D_t17B4B52BA0C980E519D97C6C5B12E911F4167F02;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`2<System.String,System.Byte[]>>[]
struct EntryU5BU5D_tD85663E0D3F56DB5B4D7B61F59CF3547EC4EFDD4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`2<System.String,System.String>>[]
struct EntryU5BU5D_tDF3A60011A7699193B41342EB254CE91C0D52CA2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`3<System.String,System.String,System.Byte[]>>[]
struct EntryU5BU5D_t900C98EE15F3E9A35BE1B92E61E4F1F1B9271B19;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>[]
struct EntryU5BU5D_tE24E820FA547791800AC4A6BE2EA390A44BDDE80;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>[]
struct EntryU5BU5D_t922FDAC1576C36D69E46214258EE7745F1BA7C7E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>[]
struct EntryU5BU5D_t17A4C74CE24E617D8325CEAD39942B17AD8BA004;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>[]
struct EntryU5BU5D_t6F24BDD2DFE83F9B6CC78F9B7B25A58AA334389E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// BluetoothDeviceScript
struct BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39;
// BluetoothLEHardwareInterface
struct BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NativeShareNamespace.NSCallbackHelper
struct NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D;
// NativeShareNamespace.NSShareResultCallbackAndroid
struct NSShareResultCallbackAndroid_tD690D9BF4C0E309F07873F0A94A3686A17F844DA;
// NativeShare
struct NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// NativeShareNamespace.NSCallbackHelper/<OnApplicationFocus>d__6
struct U3COnApplicationFocusU3Ed__6_tFD6A7D130D299ED56FF920623ACAB3A04FE604DB;
// NativeShare/ShareResultCallback
struct ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NSShareResultCallbackAndroid_tD690D9BF4C0E309F07873F0A94A3686A17F844DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShareResult_t4B2E45652DCE458EB04FD21181F636C3441779F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnApplicationFocusU3Ed__6_tFD6A7D130D299ED56FF920623ACAB3A04FE604DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01FC300FC7D69084F12B27BCC0C38122C800B8C9;
IL2CPP_EXTERN_C String_t* _stringLiteral02C3126AC268EB4CA84EB0E1826E079B33CEE7E8;
IL2CPP_EXTERN_C String_t* _stringLiteral04938D88CCBF5A98466865086ED2669F409064BE;
IL2CPP_EXTERN_C String_t* _stringLiteral055547E9CF7CA46009A0E7BBE0EBFD1D965FA37F;
IL2CPP_EXTERN_C String_t* _stringLiteral05D2E6578A5F41F60C3ECFF08D58657840D97CEC;
IL2CPP_EXTERN_C String_t* _stringLiteral08BCB48EF8130797101E8FE188198E8F43CD97E7;
IL2CPP_EXTERN_C String_t* _stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680;
IL2CPP_EXTERN_C String_t* _stringLiteral12F5EB18DE661BBE815BE7C12357AB74AFA912BC;
IL2CPP_EXTERN_C String_t* _stringLiteral19A325E0E7DE9A693A792DCB313D771BA16E1470;
IL2CPP_EXTERN_C String_t* _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E;
IL2CPP_EXTERN_C String_t* _stringLiteral22CA8A8DED4214E6F20217D70C471C5D80B2E4B6;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral283D774A5141A159CCA779600D4FD489AFD39105;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333;
IL2CPP_EXTERN_C String_t* _stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415;
IL2CPP_EXTERN_C String_t* _stringLiteral2C5CA582C472914803F7B097F586DA4F20FF1D32;
IL2CPP_EXTERN_C String_t* _stringLiteral2E6C187CE8C95892E54F2CD863F499C9AE973987;
IL2CPP_EXTERN_C String_t* _stringLiteral2F668F4292AD4222A2C03918C15E46866229F0E2;
IL2CPP_EXTERN_C String_t* _stringLiteral3A7944C38D3AC6854E3D84DC94CF76FC8CEE8471;
IL2CPP_EXTERN_C String_t* _stringLiteral3DB71419DD7D9B880A3A7641C61DD34A55D73E53;
IL2CPP_EXTERN_C String_t* _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
IL2CPP_EXTERN_C String_t* _stringLiteral40A8B44E40C6BC69E14DD32CBDD74FEAF5D4AAE6;
IL2CPP_EXTERN_C String_t* _stringLiteral482DF6018AEE5C9B3F891A4AC6C2F466CE1CB669;
IL2CPP_EXTERN_C String_t* _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4F8AFCCA3C98C13359E32869847451346F47EC44;
IL2CPP_EXTERN_C String_t* _stringLiteral537DA31EA009D26D0F870996AEBF3B39A97F284F;
IL2CPP_EXTERN_C String_t* _stringLiteral571BE214A9046BE6BECE9693FC64F752B55BDE84;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC9C8771A1E0FC481BB963F3BFB8DAEF6EEAF9F;
IL2CPP_EXTERN_C String_t* _stringLiteral6307B090E7219A907073428ED745FD41EFA179DE;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
IL2CPP_EXTERN_C String_t* _stringLiteral6D08F1FBA56C60FB5E0AE2C07BA1B0B4266A80A4;
IL2CPP_EXTERN_C String_t* _stringLiteral721E61EBBD4F8CA1436660B62CC09173BE14C737;
IL2CPP_EXTERN_C String_t* _stringLiteral72A69F0AE5A075DEB144C96D24A7FCC85D6D4636;
IL2CPP_EXTERN_C String_t* _stringLiteral7494958ED61CC458AAF2A8181F822D26307BDA4F;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral77B7082D0DE1E91A1818FF843E95415325B60DF7;
IL2CPP_EXTERN_C String_t* _stringLiteral7CD8A767CD513A553A19E4287FDCB3028089E589;
IL2CPP_EXTERN_C String_t* _stringLiteral83D45FCA45F93BA59D860796A96FE7117E5DCBD7;
IL2CPP_EXTERN_C String_t* _stringLiteral88F09F4A56E067B1B81EC436904567C01C9C3DF4;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF951CF903ECC622812D47B1157D1A3AFA9FBDC;
IL2CPP_EXTERN_C String_t* _stringLiteral8ECB79B6EBAF555ECC8A534557CBA387332ABDB2;
IL2CPP_EXTERN_C String_t* _stringLiteral8F63233D482743220D006469E8B194A3D4907233;
IL2CPP_EXTERN_C String_t* _stringLiteral936259343A8975886B07CCCB1055C7FDE90E609E;
IL2CPP_EXTERN_C String_t* _stringLiteral95B70EA0EBEA74FB776F022984B7AB5D2D304AF7;
IL2CPP_EXTERN_C String_t* _stringLiteral9AD8A5107F45DF80AE654B0B6BE32A60612460AF;
IL2CPP_EXTERN_C String_t* _stringLiteral9AF66B6B54D90A98DBA38E21C39BEFB461EAA6A6;
IL2CPP_EXTERN_C String_t* _stringLiteral9EB291071F866E890E2ACF69DE89CBBA36BD00B8;
IL2CPP_EXTERN_C String_t* _stringLiteralA10411FCA4F6A342C7FF683134054CC32BFC6755;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2;
IL2CPP_EXTERN_C String_t* _stringLiteralA4D91B5857748A8BA4721A92F64CB7597B1037E3;
IL2CPP_EXTERN_C String_t* _stringLiteralA7311ED0828EB188F47CB67E1036A7572167C2F9;
IL2CPP_EXTERN_C String_t* _stringLiteralA8244F442D9E98513F33B514C419F2B86C8FC8CC;
IL2CPP_EXTERN_C String_t* _stringLiteralAB2C0C85E7F287846F6BEB16B40A3D74AEC7930B;
IL2CPP_EXTERN_C String_t* _stringLiteralABD1A5066AD876BBA7B4C0BF57BA82BAB5878D3B;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF4CC9F1E1AA16CF56E4F5C85A3BDCA0CB896FB;
IL2CPP_EXTERN_C String_t* _stringLiteralB8DEA5867E81465D0D2D4C07103BBEB6CDADFD51;
IL2CPP_EXTERN_C String_t* _stringLiteralBC1F19B5269AF2F944325E84A78744A84AC90E28;
IL2CPP_EXTERN_C String_t* _stringLiteralC8A49BFAF7682C736E77C5743933C2176CF14A7B;
IL2CPP_EXTERN_C String_t* _stringLiteralCB12AB8A7159B5C4CCA79DCA0DF51FD5B92B4D36;
IL2CPP_EXTERN_C String_t* _stringLiteralCDC8B946EE0851853017EBA616344D4F97D44411;
IL2CPP_EXTERN_C String_t* _stringLiteralCE5AC270C12EC7EAC928330BEAEF6C9E6803EC24;
IL2CPP_EXTERN_C String_t* _stringLiteralCFE25B3302C823126233E5C675383881A1336C69;
IL2CPP_EXTERN_C String_t* _stringLiteralD09911E67FD5FEB05E00F59FC6478619944228A1;
IL2CPP_EXTERN_C String_t* _stringLiteralD11AE57CAF5237AA62C8FC603DA1381EB3BF7B49;
IL2CPP_EXTERN_C String_t* _stringLiteralD2185E2B320102DBAC16E15976BE9935D7508BC0;
IL2CPP_EXTERN_C String_t* _stringLiteralD3CB1C46094BA01F2C62E9A0EFE0F859DE17AED1;
IL2CPP_EXTERN_C String_t* _stringLiteralD482D614E702611FC3EBAEC39B93D1AFD9222221;
IL2CPP_EXTERN_C String_t* _stringLiteralD6899C7C072DDADF8F38DDCD6FCD494657DB1917;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD638980A42773DBA4D111CE8D3979093BAC27E5;
IL2CPP_EXTERN_C String_t* _stringLiteralDFF7B7A251CAD78185C2595FC73B8AE0181C64D3;
IL2CPP_EXTERN_C String_t* _stringLiteralE14640A5F2B26B4DD99B692E7BAD32F71D93BB1C;
IL2CPP_EXTERN_C String_t* _stringLiteralE3215C2629A952F0AC344C8D69FE2D802A48D3FA;
IL2CPP_EXTERN_C String_t* _stringLiteralEB1D8A1AF714617959D4F8AA082FCFD16409E5FF;
IL2CPP_EXTERN_C String_t* _stringLiteralEB70548E100BA47AF6084FE872DCFC01E2DFFEBB;
IL2CPP_EXTERN_C String_t* _stringLiteralF01338260378F35334542BDEDFB82698311AEB1A;
IL2CPP_EXTERN_C String_t* _stringLiteralF37E86612B08131A4171D70D9CCCAF41191D0B4F;
IL2CPP_EXTERN_C String_t* _stringLiteralF8AAFA549889883502A4D6D131CF8210DDF84FCD;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFE83D121033127368F074E967D2902DA668AF244;
IL2CPP_EXTERN_C String_t* _stringLiteralFEA4EFD8C5923AB08A7202313FFB01FD1341FD4B;
IL2CPP_EXTERN_C String_t* _stringLiteralFF11FDD7A8BE90D32FAADFD0EF114AE0F6B18F0B;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m150AA8E90D327107E170A339453F8681CBC34FD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m49883733B2BD00869A51867DF487463D793B72AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4A499F6EAC71DC55F8B1A7DF3EA4AE5FCDFE83F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m913953EB949920103EE45B0C497AED20472529CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m15E112E61AB3E2CDF5F8C4D5478C173E7CE98B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2C28FA742C2910206687FAC6656082BB86091AB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m33F7CC3A700785AE5317A03FF6119F01AB8C3CAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m567D53C6E9424E1769E746B2F2F7CB666BD28746_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA41215374A14C39327A0F3E564767C0E5F736E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA59DD81658DA8792C58F4AF9ABB667457AE7888F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFACB7E9C70103BA8CD2CFFC7D56AB4B8B9FADD7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m29D67E65079024F5C041D7F9AA960C3FB8C61727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mAC12398F029B0CC08037CAC73D4E875F4E9ADD6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB9B806A3CA27CFDDB280FFBBD54F692165DB5DE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mBBC25AE20AA64D8E9CB489C3F455282573A79550_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC10FD3398D9C91885BEE2ED01F03E6EA8F2458DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m317D3193C4CC26B216C7316AA83011B747927A26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5BC0806F55FF11B11C0CCA09E2B62F1F225721B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5C248D01E5A71B59F3D041ECB2766EF9A97F4E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9801DB6B846090C50887E169823DB1E40E078476_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC95C71C51EBCC5FB69D800D28A4DA517C27A77E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD7531E55E7078F3CA3DB2492418BEADF7229D468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDF56051C4B061E3956A03F35FC9F34BEB3280610_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D_mD935CA5711E81DD911A200EFF3E1FED781CCA329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDBD85FE90312A38DA98B298A2B6052631AE960F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnApplicationFocusU3Ed__6_System_Collections_IEnumerator_Reset_m873DF778AB4213C1238498632C40A5C56E7ED42C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>
struct Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t17B4B52BA0C980E519D97C6C5B12E911F4167F02* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tDC9905DAB7B3D843994B8AF143B97B5C1D5B6936* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1BFE2D9246539713D76621C5D038C86BA2DA3F76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>
struct Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD85663E0D3F56DB5B4D7B61F59CF3547EC4EFDD4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t6B68A129EC8149AACE58C5F34312148132BE3A5D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6FE7F1553C6213D89E25A379E6F130A43116E93B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>
struct Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDF3A60011A7699193B41342EB254CE91C0D52CA2* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2B4949A3310A54180CF25ECDBB063042F07D3846* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE72EBB4992A3B7027945352F3E85E6E4EA3CCC1E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>
struct Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t900C98EE15F3E9A35BE1B92E61E4F1F1B9271B19* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tDEB7EBAE34ACB36F488B64E3ACCA223414080409* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t693954EDFB989578797C65FD6346D986760277F6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>
struct Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE24E820FA547791800AC4A6BE2EA390A44BDDE80* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t62E580CDD4AD2C58AB764BA8E96B51A9A408EF14* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF277A139BF9A5A5C6F4F4F5FD6A8000A8658FDCE* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>
struct Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t922FDAC1576C36D69E46214258EE7745F1BA7C7E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tD5F7D890C8347A2C4B342C2D2B64AFC23157E272* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBEC71E03B4233FB8DD3447320101C69756B06B6D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>
struct Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t17A4C74CE24E617D8325CEAD39942B17AD8BA004* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t28070F1CBB6F27FB971DEA73EA1F1B5C99CCCBD7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8882E34082E7EEA63E8D352364FBC4C7FCD16BA2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>
struct Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6F24BDD2DFE83F9B6CC78F9B7B25A58AA334389E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t55BF89DF4C34E4D0DD7186A21DF7FBADBAFF9B57* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t7E2768C272CC12D1213F42E60FEC61D271B5504B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// BluetoothLEHardwareInterface
struct BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B  : public RuntimeObject
{
};

// NativeShare
struct NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4  : public RuntimeObject
{
	// System.String NativeShare::subject
	String_t* ___subject_2;
	// System.String NativeShare::text
	String_t* ___text_3;
	// System.String NativeShare::title
	String_t* ___title_4;
	// System.String NativeShare::url
	String_t* ___url_5;
	// System.Collections.Generic.List`1<System.String> NativeShare::emailRecipients
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___emailRecipients_6;
	// System.Collections.Generic.List`1<System.String> NativeShare::targetPackages
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___targetPackages_7;
	// System.Collections.Generic.List`1<System.String> NativeShare::targetClasses
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___targetClasses_8;
	// System.Collections.Generic.List`1<System.String> NativeShare::files
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___files_9;
	// System.Collections.Generic.List`1<System.String> NativeShare::mimes
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___mimes_10;
	// NativeShare/ShareResultCallback NativeShare::callback
	ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* ___callback_11;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// NativeShareNamespace.NSCallbackHelper/<OnApplicationFocus>d__6
struct U3COnApplicationFocusU3Ed__6_tFD6A7D130D299ED56FF920623ACAB3A04FE604DB  : public RuntimeObject
{
	// System.Int32 NativeShareNamespace.NSCallbackHelper/<OnApplicationFocus>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NativeShareNamespace.NSCallbackHelper/<OnApplicationFocus>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Boolean NativeShareNamespace.NSCallbackHelper/<OnApplicationFocus>d__6::focus
	bool ___focus_2;
	// NativeShareNamespace.NSCallbackHelper NativeShareNamespace.NSCallbackHelper/<OnApplicationFocus>d__6::<>4__this
	NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* ___U3CU3E4__this_3;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// BluetoothLEHardwareInterface/iBeaconData
struct iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96 
{
	// System.String BluetoothLEHardwareInterface/iBeaconData::UUID
	String_t* ___UUID_0;
	// System.Int32 BluetoothLEHardwareInterface/iBeaconData::Major
	int32_t ___Major_1;
	// System.Int32 BluetoothLEHardwareInterface/iBeaconData::Minor
	int32_t ___Minor_2;
	// System.Int32 BluetoothLEHardwareInterface/iBeaconData::RSSI
	int32_t ___RSSI_3;
	// System.Int32 BluetoothLEHardwareInterface/iBeaconData::AndroidSignalPower
	int32_t ___AndroidSignalPower_4;
	// BluetoothLEHardwareInterface/iOSProximity BluetoothLEHardwareInterface/iBeaconData::iOSProximity
	int32_t ___iOSProximity_5;
};
// Native definition for P/Invoke marshalling of BluetoothLEHardwareInterface/iBeaconData
struct iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshaled_pinvoke
{
	char* ___UUID_0;
	int32_t ___Major_1;
	int32_t ___Minor_2;
	int32_t ___RSSI_3;
	int32_t ___AndroidSignalPower_4;
	int32_t ___iOSProximity_5;
};
// Native definition for COM marshalling of BluetoothLEHardwareInterface/iBeaconData
struct iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshaled_com
{
	Il2CppChar* ___UUID_0;
	int32_t ___Major_1;
	int32_t ___Minor_2;
	int32_t ___RSSI_3;
	int32_t ___AndroidSignalPower_4;
	int32_t ___iOSProximity_5;
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
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

// NativeShareNamespace.NSShareResultCallbackAndroid
struct NSShareResultCallbackAndroid_tD690D9BF4C0E309F07873F0A94A3686A17F844DA  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// NativeShareNamespace.NSCallbackHelper NativeShareNamespace.NSShareResultCallbackAndroid::callbackHelper
	NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* ___callbackHelper_4;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.UnityException
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`1<BluetoothLEHardwareInterface/iBeaconData>
struct Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Int32>
struct Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.Action`2<System.String,System.Byte[]>
struct Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831  : public MulticastDelegate_t
{
};

// System.Action`2<System.String,System.Int32>
struct Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF  : public MulticastDelegate_t
{
};

// System.Action`2<System.String,System.String>
struct Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D  : public MulticastDelegate_t
{
};

// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58  : public MulticastDelegate_t
{
};

// System.Action`3<System.String,System.String,System.Byte[]>
struct Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB  : public MulticastDelegate_t
{
};

// System.Action`3<System.String,System.String,System.String>
struct Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7  : public MulticastDelegate_t
{
};

// System.Action`4<System.Object,System.Object,System.Int32,System.Object>
struct Action_4_tB13889672F2D689F21857C968EBBDF091CA42E46  : public MulticastDelegate_t
{
};

// System.Action`4<System.String,System.String,System.Int32,System.Byte[]>
struct Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D  : public MulticastDelegate_t
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

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// NativeShare/ShareResultCallback
struct ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// BluetoothDeviceScript
struct BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.String> BluetoothDeviceScript::DiscoveredDeviceList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___DiscoveredDeviceList_4;
	// System.Action BluetoothDeviceScript::InitializedAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InitializedAction_5;
	// System.Action BluetoothDeviceScript::DeinitializedAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___DeinitializedAction_6;
	// System.Action`1<System.String> BluetoothDeviceScript::ErrorAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___ErrorAction_7;
	// System.Action`1<System.String> BluetoothDeviceScript::ServiceAddedAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___ServiceAddedAction_8;
	// System.Action BluetoothDeviceScript::StartedAdvertisingAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___StartedAdvertisingAction_9;
	// System.Action BluetoothDeviceScript::StoppedAdvertisingAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___StoppedAdvertisingAction_10;
	// System.Action`2<System.String,System.String> BluetoothDeviceScript::DiscoveredPeripheralAction
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___DiscoveredPeripheralAction_11;
	// System.Action`4<System.String,System.String,System.Int32,System.Byte[]> BluetoothDeviceScript::DiscoveredPeripheralWithAdvertisingInfoAction
	Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* ___DiscoveredPeripheralWithAdvertisingInfoAction_12;
	// System.Action`1<BluetoothLEHardwareInterface/iBeaconData> BluetoothDeviceScript::DiscoveredBeaconAction
	Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE* ___DiscoveredBeaconAction_13;
	// System.Action`2<System.String,System.String> BluetoothDeviceScript::RetrievedConnectedPeripheralAction
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___RetrievedConnectedPeripheralAction_14;
	// System.Action`2<System.String,System.Byte[]> BluetoothDeviceScript::PeripheralReceivedWriteDataAction
	Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* ___PeripheralReceivedWriteDataAction_15;
	// System.Action`1<System.String> BluetoothDeviceScript::ConnectedPeripheralAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___ConnectedPeripheralAction_16;
	// System.Action`1<System.String> BluetoothDeviceScript::ConnectedDisconnectPeripheralAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___ConnectedDisconnectPeripheralAction_17;
	// System.Action`1<System.String> BluetoothDeviceScript::DisconnectedPeripheralAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___DisconnectedPeripheralAction_18;
	// System.Action`2<System.String,System.String> BluetoothDeviceScript::DiscoveredServiceAction
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___DiscoveredServiceAction_19;
	// System.Action`3<System.String,System.String,System.String> BluetoothDeviceScript::DiscoveredCharacteristicAction
	Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* ___DiscoveredCharacteristicAction_20;
	// System.Action`1<System.String> BluetoothDeviceScript::DidWriteCharacteristicAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___DidWriteCharacteristicAction_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>> BluetoothDeviceScript::DidUpdateNotificationStateForCharacteristicAction
	Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* ___DidUpdateNotificationStateForCharacteristicAction_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>> BluetoothDeviceScript::DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction
	Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* ___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>> BluetoothDeviceScript::DidUpdateCharacteristicValueAction
	Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* ___DidUpdateCharacteristicValueAction_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>> BluetoothDeviceScript::DidUpdateCharacteristicValueWithDeviceAddressAction
	Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* ___DidUpdateCharacteristicValueWithDeviceAddressAction_25;
	// System.Action`2<System.String,System.Int32> BluetoothDeviceScript::RequestMtuAction
	Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF* ___RequestMtuAction_26;
};

// NativeShareNamespace.NSCallbackHelper
struct NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NativeShare/ShareResultCallback NativeShareNamespace.NSCallbackHelper::callback
	ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* ___callback_4;
	// NativeShare/ShareResult NativeShareNamespace.NSCallbackHelper::result
	int32_t ___result_5;
	// System.String NativeShareNamespace.NSCallbackHelper::shareTarget
	String_t* ___shareTarget_6;
	// System.Boolean NativeShareNamespace.NSCallbackHelper::resultReceived
	bool ___resultReceived_7;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// BluetoothLEHardwareInterface
struct BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields
{
	// UnityEngine.AndroidJavaObject BluetoothLEHardwareInterface::_android
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____android_0;
	// BluetoothDeviceScript BluetoothLEHardwareInterface::bluetoothDeviceScript
	BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* ___bluetoothDeviceScript_1;
};

// BluetoothLEHardwareInterface

// NativeShare
struct NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields
{
	// UnityEngine.AndroidJavaClass NativeShare::m_ajc
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___m_ajc_0;
	// UnityEngine.AndroidJavaObject NativeShare::m_context
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_context_1;
};

// NativeShare

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// NativeShareNamespace.NSCallbackHelper/<OnApplicationFocus>d__6

// NativeShareNamespace.NSCallbackHelper/<OnApplicationFocus>d__6

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// System.Void

// System.Void

// BluetoothLEHardwareInterface/iBeaconData

// BluetoothLEHardwareInterface/iBeaconData

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.AndroidJavaProxy

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

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// NativeShareNamespace.NSShareResultCallbackAndroid

// NativeShareNamespace.NSShareResultCallbackAndroid

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.UnityException

// UnityEngine.UnityException

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<System.String>

// System.Action`1<System.String>

// System.Action`1<BluetoothLEHardwareInterface/iBeaconData>

// System.Action`1<BluetoothLEHardwareInterface/iBeaconData>

// System.Action`2<System.Object,System.Int32>

// System.Action`2<System.Object,System.Int32>

// System.Action`2<System.Object,System.Object>

// System.Action`2<System.Object,System.Object>

// System.Action`2<System.String,System.Byte[]>

// System.Action`2<System.String,System.Byte[]>

// System.Action`2<System.String,System.Int32>

// System.Action`2<System.String,System.Int32>

// System.Action`2<System.String,System.String>

// System.Action`2<System.String,System.String>

// System.Action`3<System.Object,System.Object,System.Object>

// System.Action`3<System.Object,System.Object,System.Object>

// System.Action`3<System.String,System.String,System.Byte[]>

// System.Action`3<System.String,System.String,System.Byte[]>

// System.Action`3<System.String,System.String,System.String>

// System.Action`3<System.String,System.String,System.String>

// System.Action`4<System.Object,System.Object,System.Int32,System.Object>

// System.Action`4<System.Object,System.Object,System.Int32,System.Object>

// System.Action`4<System.String,System.String,System.Int32,System.Byte[]>

// System.Action`4<System.String,System.String,System.Int32,System.Byte[]>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.RenderTexture

// UnityEngine.RenderTexture

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// NativeShare/ShareResultCallback

// NativeShare/ShareResultCallback

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// BluetoothDeviceScript

// BluetoothDeviceScript

// NativeShareNamespace.NSCallbackHelper

// NativeShareNamespace.NSCallbackHelper
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
// System.Void System.Action`4<System.Object,System.Object,System.Int32,System.Object>::Invoke(T1,T2,T3,T4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_4_Invoke_mD9FB5E2CF8A8ED11C3135A1A910CDCAD6538A1FC_gshared_inline (Action_4_tB13889672F2D689F21857C968EBBDF091CA42E46* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, int32_t ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method) ;
// System.Void System.Action`1<BluetoothLEHardwareInterface/iBeaconData>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mE56360F8A5B137A1714DEF08A9266EF9166480B8_gshared_inline (Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE* __this, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96 ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Int32>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline (Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>::.ctor()
inline void Dictionary_2__ctor_mFACB7E9C70103BA8CD2CFFC7D56AB4B8B9FADD7F (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>::.ctor()
inline void Dictionary_2__ctor_m15E112E61AB3E2CDF5F8C4D5478C173E7CE98B4C (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>::.ctor()
inline void Dictionary_2__ctor_m2C28FA742C2910206687FAC6656082BB86091AB5 (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>::.ctor()
inline void Dictionary_2__ctor_mA59DD81658DA8792C58F4AF9ABB667457AE7888F (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_separator, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void BluetoothLEHardwareInterface::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void BluetoothLEHardwareInterface::FinishDeInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_FinishDeInitialize_mCD58E7714A2B02A58509481FCB4473FCE93052B2 (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Action`2<System.String,System.String>::Invoke(T1,T2)
inline void Action_2_Invoke_m8FA30194997244EC0072D6B437818A22B65F2854_inline (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* __this, String_t* ___0_arg1, String_t* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*, String_t*, String_t*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void System.Action`4<System.String,System.String,System.Int32,System.Byte[]>::Invoke(T1,T2,T3,T4)
inline void Action_4_Invoke_mD9DD80B61F675BE34D06BB382884E69323B1C8C1_inline (Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* __this, String_t* ___0_arg1, String_t* ___1_arg2, int32_t ___2_arg3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_arg4, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D*, String_t*, String_t*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Action_4_Invoke_mD9FB5E2CF8A8ED11C3135A1A910CDCAD6538A1FC_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, method);
}
// System.Void System.Action`1<BluetoothLEHardwareInterface/iBeaconData>::Invoke(T)
inline void Action_1_Invoke_mE56360F8A5B137A1714DEF08A9266EF9166480B8_inline (Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE* __this, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE*, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96, const RuntimeMethod*))Action_1_Invoke_mE56360F8A5B137A1714DEF08A9266EF9166480B8_gshared_inline)(__this, ___0_obj, method);
}
// System.Void BluetoothDeviceScript::OnPeripheralData(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript_OnPeripheralData_mD3F92D2EA496B24CFB212E6D72E2C6BB0891CE96 (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, String_t* ___0_characteristic, String_t* ___1_base64Data, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.String,System.String,System.String>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_mABFB1B378BF33588992DD5A0180457B4ADB790D9_inline (Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* __this, String_t* ___0_arg1, String_t* ___1_arg2, String_t* ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7*, String_t*, String_t*, String_t*, const RuntimeMethod*))Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>::get_Item(TKey)
inline Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61 (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* (*) (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>::get_Item(TKey)
inline Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* Dictionary_2_get_Item_mAC12398F029B0CC08037CAC73D4E875F4E9ADD6D (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* (*) (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23 (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>::get_Item(TKey)
inline Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* (*) (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m913953EB949920103EE45B0C497AED20472529CD (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>::get_Item(TKey)
inline Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* Dictionary_2_get_Item_mBBC25AE20AA64D8E9CB489C3F455282573A79550 (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* (*) (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void BluetoothDeviceScript::OnBluetoothData(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript_OnBluetoothData_mC3C7BE5FBFA895495E5D3F2F2147C73378437C2D (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, String_t* ___0_deviceAddress, String_t* ___1_characteristic, String_t* ___2_base64Data, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.String,System.Int32>::Invoke(T1,T2)
inline void Action_2_Invoke_m69AAAB992ABFCF392F04C4F7E3CE91388C9E24E1_inline (Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF* __this, String_t* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF*, String_t*, int32_t, const RuntimeMethod*))Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>::get_Item(TKey)
inline Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0 (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* (*) (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m4A499F6EAC71DC55F8B1A7DF3EA4AE5FCDFE83F1 (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>::get_Item(TKey)
inline Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* Dictionary_2_get_Item_mC10FD3398D9C91885BEE2ED01F03E6EA8F2458DF (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* (*) (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void System.Action`2<System.String,System.Byte[]>::Invoke(T1,T2)
inline void Action_2_Invoke_m30A65A90206175F850BCF9448E5227069C5FC9CF_inline (Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* __this, String_t* ___0_arg1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m150AA8E90D327107E170A339453F8681CBC34FD0 (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>::get_Item(TKey)
inline Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* Dictionary_2_get_Item_mB9B806A3CA27CFDDB280FFBBD54F692165DB5DE2 (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* (*) (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m49883733B2BD00869A51867DF487463D793B72AE (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>::get_Item(TKey)
inline Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* Dictionary_2_get_Item_m29D67E65079024F5C041D7F9AA960C3FB8C61727 (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* (*) (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void System.Action`3<System.String,System.String,System.Byte[]>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_m621E4DDF08B7AB38B686646F5E5821CBB4B85A14_inline (Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* __this, String_t* ___0_arg1, String_t* ___1_arg2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB*, String_t*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___0_permission, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242 (String_t* ___0_permission, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<BluetoothDeviceScript>()
inline BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* GameObject_GetComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDBD85FE90312A38DA98B298A2B6052631AE960F6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<BluetoothDeviceScript>()
inline BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* GameObject_AddComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDF56051C4B061E3956A03F35FC9F34BEB3280610 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_SendMessage_mA1D80D8BB7836EADB7799CAE71F10710298F4CDB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___0_methodName, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>::.ctor()
inline void Dictionary_2__ctor_m33F7CC3A700785AE5317A03FF6119F01AB8C3CAD (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9801DB6B846090C50887E169823DB1E40E078476 (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* __this, String_t* ___0_key, Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78*, String_t*, Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String BluetoothLEHardwareInterface::FullUUID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59 (String_t* ___0_uuid, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m5BC0806F55FF11B11C0CCA09E2B62F1F225721B2 (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* __this, String_t* ___0_key, Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8*, String_t*, Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>::.ctor()
inline void Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2 (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706 (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* __this, String_t* ___0_key, Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D*, String_t*, Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189 (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* __this, String_t* ___0_key, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*, String_t*, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>::.ctor()
inline void Dictionary_2__ctor_mA41215374A14C39327A0F3E564767C0E5F736E11 (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mC95C71C51EBCC5FB69D800D28A4DA517C27A77E7 (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* __this, String_t* ___0_key, Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74*, String_t*, Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m5C248D01E5A71B59F3D041ECB2766EF9A97F4E87 (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* __this, String_t* ___0_key, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6*, String_t*, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>::.ctor()
inline void Dictionary_2__ctor_m567D53C6E9424E1769E746B2F2F7CB666BD28746 (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mD7531E55E7078F3CA3DB2492418BEADF7229D468 (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* __this, String_t* ___0_key, Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883*, String_t*, Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m317D3193C4CC26B216C7316AA83011B747927A26 (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* __this, String_t* ___0_key, Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB*, String_t*, Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075 (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// System.Byte[] NativeShare::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeShare_GetTextureBytes_mCAAE9D5A9295439D4AC06D9229D1E05F93856C66 (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, bool ___1_isJpeg, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077 (String_t* ___0_path, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, const RuntimeMethod* method) ;
// NativeShare NativeShare::AddFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* NativeShare_AddFile_m668FDE2DBE3BA2EB01714E8E4EFC2153E36B81AD (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, String_t* ___0_filePath, String_t* ___1_mime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaClass NativeShare::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* NativeShare_get_AJC_m4E6ED45398FD66605E89E413DA926D256E0E58D5 (const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject NativeShare::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NativeShare_get_Context_m2BA0B3F34DD72D861031D3448E559B4104A8BF9A (const RuntimeMethod* method) ;
// System.Void NativeShareNamespace.NSShareResultCallbackAndroid::.ctor(NativeShare/ShareResultCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSShareResultCallbackAndroid__ctor_m1F33E98B9D2C790770041936FE5A1AC3634A1B2C (NSShareResultCallbackAndroid_tD690D9BF4C0E309F07873F0A94A3686A17F844DA* __this, ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* ___0_callback, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.String NativeShare::CombineURLWithText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeShare_CombineURLWithText_m26FB18B3C8323453442D6DBE2F3F7E27E6BE6579 (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m490810CB7ADA9230AC0F8D78E213A8EFED129F55 (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
// System.String NativeShare::GetURLWithScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeShare_GetURLWithScheme_m0EB03C3B999AC0BF395F1EBA13169D8EFA4F6F04 (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToJPG_mD0307B5DFF32A3FF39488E97B467F11AFE501F6F (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, int32_t ___1_quality, const RuntimeMethod* method) ;
// System.Byte[] NativeShare::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeShare_GetTextureBytesFromCopy_m4D9844D6ECAF60EFD7981A51D63B80CC8C43B62E (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, bool ___1_isJpeg, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F (int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_temp, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_dest, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_source, int32_t ___1_destX, int32_t ___2_destY, bool ___3_recalculateMipMaps, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___0_updateMipmaps, bool ___1_makeNoLongerReadable, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void NativeShare/ShareResultCallback::Invoke(NativeShare/ShareResult,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShareResultCallback_Invoke_m868DBFDAECA591A3D704369562D948BE29CB6F81_inline (ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* __this, int32_t ___0_result, String_t* ___1_shareTarget, const RuntimeMethod* method) ;
// System.Void NativeShareNamespace.NSCallbackHelper/<OnApplicationFocus>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationFocusU3Ed__6__ctor_m26CA874B571563916C4BB4FD9815415DFA328703 (U3COnApplicationFocusU3Ed__6_tFD6A7D130D299ED56FF920623ACAB3A04FE604DB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<NativeShareNamespace.NSCallbackHelper>()
inline NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* GameObject_AddComponent_TisNSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D_mD935CA5711E81DD911A200EFF3E1FED781CCA329 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void NativeShareNamespace.NSCallbackHelper::OnShareCompleted(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSCallbackHelper_OnShareCompleted_m588E327DE3863149D47554689D09CEA9A5ED932D (NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* __this, int32_t ___0_resultRaw, String_t* ___1_shareTarget, const RuntimeMethod* method) ;
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
// System.Void BluetoothDeviceScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript_Start_m53F8F286D6BE17577FAF0DD4E5D671D9B2DDFE64 (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m15E112E61AB3E2CDF5F8C4D5478C173E7CE98B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2C28FA742C2910206687FAC6656082BB86091AB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA59DD81658DA8792C58F4AF9ABB667457AE7888F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFACB7E9C70103BA8CD2CFFC7D56AB4B8B9FADD7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DiscoveredDeviceList = new List<string> ();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___DiscoveredDeviceList_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DiscoveredDeviceList_4), (void*)L_0);
		// DidUpdateNotificationStateForCharacteristicAction = new Dictionary<string, Dictionary<string, Action<string>>> ();
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_1 = (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D*)il2cpp_codegen_object_new(Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mFACB7E9C70103BA8CD2CFFC7D56AB4B8B9FADD7F(L_1, Dictionary_2__ctor_mFACB7E9C70103BA8CD2CFFC7D56AB4B8B9FADD7F_RuntimeMethod_var);
		__this->___DidUpdateNotificationStateForCharacteristicAction_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DidUpdateNotificationStateForCharacteristicAction_22), (void*)L_1);
		// DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction = new Dictionary<string, Dictionary<string, Action<string, string>>> ();
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_2 = (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74*)il2cpp_codegen_object_new(Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m15E112E61AB3E2CDF5F8C4D5478C173E7CE98B4C(L_2, Dictionary_2__ctor_m15E112E61AB3E2CDF5F8C4D5478C173E7CE98B4C_RuntimeMethod_var);
		__this->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23), (void*)L_2);
		// DidUpdateCharacteristicValueAction = new Dictionary<string, Dictionary<string, Action<string, byte[]>>> ();
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_3 = (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78*)il2cpp_codegen_object_new(Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m2C28FA742C2910206687FAC6656082BB86091AB5(L_3, Dictionary_2__ctor_m2C28FA742C2910206687FAC6656082BB86091AB5_RuntimeMethod_var);
		__this->___DidUpdateCharacteristicValueAction_24 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DidUpdateCharacteristicValueAction_24), (void*)L_3);
		// DidUpdateCharacteristicValueWithDeviceAddressAction = new Dictionary<string, Dictionary<string, Action<string, string, byte[]>>> ();
		Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* L_4 = (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883*)il2cpp_codegen_object_new(Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_mA59DD81658DA8792C58F4AF9ABB667457AE7888F(L_4, Dictionary_2__ctor_mA59DD81658DA8792C58F4AF9ABB667457AE7888F_RuntimeMethod_var);
		__this->___DidUpdateCharacteristicValueWithDeviceAddressAction_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DidUpdateCharacteristicValueWithDeviceAddressAction_25), (void*)L_4);
		// }
		return;
	}
}
// System.Void BluetoothDeviceScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript_Update_m7CE25112852AB386721649D3849111E326B465A0 (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BluetoothDeviceScript::OnBluetoothMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript_OnBluetoothMessage_m80BB33FD05C1343CCDF235788EFB697AA33831DF (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m913953EB949920103EE45B0C497AED20472529CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAC12398F029B0CC08037CAC73D4E875F4E9ADD6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mBBC25AE20AA64D8E9CB489C3F455282573A79550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01FC300FC7D69084F12B27BCC0C38122C800B8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02C3126AC268EB4CA84EB0E1826E079B33CEE7E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04938D88CCBF5A98466865086ED2669F409064BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055547E9CF7CA46009A0E7BBE0EBFD1D965FA37F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08BCB48EF8130797101E8FE188198E8F43CD97E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral283D774A5141A159CCA779600D4FD489AFD39105);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C5CA582C472914803F7B097F586DA4F20FF1D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DB71419DD7D9B880A3A7641C61DD34A55D73E53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral571BE214A9046BE6BECE9693FC64F752B55BDE84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ECB79B6EBAF555ECC8A534557CBA387332ABDB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AF66B6B54D90A98DBA38E21C39BEFB461EAA6A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA10411FCA4F6A342C7FF683134054CC32BFC6755);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4D91B5857748A8BA4721A92F64CB7597B1037E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7311ED0828EB188F47CB67E1036A7572167C2F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8DEA5867E81465D0D2D4C07103BBEB6CDADFD51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC1F19B5269AF2F944325E84A78744A84AC90E28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDC8B946EE0851853017EBA616344D4F97D44411);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD11AE57CAF5237AA62C8FC603DA1381EB3BF7B49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2185E2B320102DBAC16E15976BE9935D7508BC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* V_8 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_9 = NULL;
	Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* V_10 = NULL;
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* V_11 = NULL;
	int32_t V_12 = 0;
	{
		// if (message != null)
		String_t* L_0 = ___0_message;
		if (!L_0)
		{
			goto IL_0806;
		}
	}
	{
		// char[] delim = new char[] { '~' };
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)126));
		V_0 = L_2;
		// string[] parts = message.Split (delim);
		String_t* L_3 = ___0_message;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_3, L_4, NULL);
		V_1 = L_5;
		// for (int i = 0; i < parts.Length; ++i)
		V_2 = 0;
		goto IL_003a;
	}

IL_001e:
	{
		// BluetoothLEHardwareInterface.Log(string.Format("Part: {0} - {1}", i, parts[i]));
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA10411FCA4F6A342C7FF683134054CC32BFC6755, L_8, L_12, NULL);
		BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C(L_13, NULL);
		// for (int i = 0; i < parts.Length; ++i)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003a:
	{
		// for (int i = 0; i < parts.Length; ++i)
		int32_t L_15 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		// if (message.Length >= deviceInitializedString.Length && message.Substring (0, deviceInitializedString.Length) == deviceInitializedString)
		String_t* L_17 = ___0_message;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		NullCheck(_stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680, NULL);
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_20 = ___0_message;
		NullCheck(_stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680);
		int32_t L_21;
		L_21 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680, NULL);
		NullCheck(L_20);
		String_t* L_22;
		L_22 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_20, 0, L_21, NULL);
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680, NULL);
		if (!L_23)
		{
			goto IL_0086;
		}
	}
	{
		// if (InitializedAction != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_24 = __this->___InitializedAction_5;
		if (!L_24)
		{
			goto IL_0806;
		}
	}
	{
		// InitializedAction ();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_25 = __this->___InitializedAction_5;
		NullCheck(L_25);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_25, NULL);
		return;
	}

IL_0086:
	{
		// else if (message.Length >= deviceLog.Length && message.Substring (0, deviceLog.Length) == deviceLog)
		String_t* L_26 = ___0_message;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_26, NULL);
		NullCheck(_stringLiteralD2185E2B320102DBAC16E15976BE9935D7508BC0);
		int32_t L_28;
		L_28 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralD2185E2B320102DBAC16E15976BE9935D7508BC0, NULL);
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_29 = ___0_message;
		NullCheck(_stringLiteralD2185E2B320102DBAC16E15976BE9935D7508BC0);
		int32_t L_30;
		L_30 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralD2185E2B320102DBAC16E15976BE9935D7508BC0, NULL);
		NullCheck(L_29);
		String_t* L_31;
		L_31 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_29, 0, L_30, NULL);
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteralD2185E2B320102DBAC16E15976BE9935D7508BC0, NULL);
		if (!L_32)
		{
			goto IL_00be;
		}
	}
	{
		// BluetoothLEHardwareInterface.Log (parts[1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = 1;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C(L_35, NULL);
		return;
	}

IL_00be:
	{
		// else if (message.Length >= deviceDeInitializedString.Length && message.Substring (0, deviceDeInitializedString.Length) == deviceDeInitializedString)
		String_t* L_36 = ___0_message;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		NullCheck(_stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415);
		int32_t L_38;
		L_38 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415, NULL);
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0109;
		}
	}
	{
		String_t* L_39 = ___0_message;
		NullCheck(_stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415);
		int32_t L_40;
		L_40 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415, NULL);
		NullCheck(L_39);
		String_t* L_41;
		L_41 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_39, 0, L_40, NULL);
		bool L_42;
		L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, _stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415, NULL);
		if (!L_42)
		{
			goto IL_0109;
		}
	}
	{
		// BluetoothLEHardwareInterface.FinishDeInitialize ();
		BluetoothLEHardwareInterface_FinishDeInitialize_mCD58E7714A2B02A58509481FCB4473FCE93052B2(NULL);
		// if (DeinitializedAction != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_43 = __this->___DeinitializedAction_6;
		if (!L_43)
		{
			goto IL_0806;
		}
	}
	{
		// DeinitializedAction ();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_44 = __this->___DeinitializedAction_6;
		NullCheck(L_44);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_44, NULL);
		return;
	}

IL_0109:
	{
		// else if (message.Length >= deviceErrorString.Length && message.Substring (0, deviceErrorString.Length) == deviceErrorString)
		String_t* L_45 = ___0_message;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_45, NULL);
		NullCheck(_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7, NULL);
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0160;
		}
	}
	{
		String_t* L_48 = ___0_message;
		NullCheck(_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		int32_t L_49;
		L_49 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7, NULL);
		NullCheck(L_48);
		String_t* L_50;
		L_50 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_48, 0, L_49, NULL);
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7, NULL);
		if (!L_51)
		{
			goto IL_0160;
		}
	}
	{
		// string error = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (parts.Length >= 2)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = V_1;
		NullCheck(L_52);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length))) < ((int32_t)2)))
		{
			goto IL_0148;
		}
	}
	{
		// error = parts[1];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = V_1;
		NullCheck(L_53);
		int32_t L_54 = 1;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_3 = L_55;
	}

IL_0148:
	{
		// if (ErrorAction != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_56 = __this->___ErrorAction_7;
		if (!L_56)
		{
			goto IL_0806;
		}
	}
	{
		// ErrorAction (error);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_57 = __this->___ErrorAction_7;
		String_t* L_58 = V_3;
		NullCheck(L_57);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_57, L_58, NULL);
		return;
	}

IL_0160:
	{
		// else if (message.Length >= deviceServiceAdded.Length && message.Substring (0, deviceServiceAdded.Length) == deviceServiceAdded)
		String_t* L_59 = ___0_message;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_59, NULL);
		NullCheck(_stringLiteral8ECB79B6EBAF555ECC8A534557CBA387332ABDB2);
		int32_t L_61;
		L_61 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral8ECB79B6EBAF555ECC8A534557CBA387332ABDB2, NULL);
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_01b2;
		}
	}
	{
		String_t* L_62 = ___0_message;
		NullCheck(_stringLiteral8ECB79B6EBAF555ECC8A534557CBA387332ABDB2);
		int32_t L_63;
		L_63 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral8ECB79B6EBAF555ECC8A534557CBA387332ABDB2, NULL);
		NullCheck(L_62);
		String_t* L_64;
		L_64 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_62, 0, L_63, NULL);
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteral8ECB79B6EBAF555ECC8A534557CBA387332ABDB2, NULL);
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		// if (parts.Length >= 2)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = V_1;
		NullCheck(L_66);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_66)->max_length))) < ((int32_t)2)))
		{
			goto IL_0806;
		}
	}
	{
		// if (ServiceAddedAction != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_67 = __this->___ServiceAddedAction_8;
		if (!L_67)
		{
			goto IL_0806;
		}
	}
	{
		// ServiceAddedAction (parts[1]);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_68 = __this->___ServiceAddedAction_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_69 = V_1;
		NullCheck(L_69);
		int32_t L_70 = 1;
		String_t* L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_68);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_68, L_71, NULL);
		return;
	}

IL_01b2:
	{
		// else if (message.Length >= deviceStartedAdvertising.Length && message.Substring (0, deviceStartedAdvertising.Length) == deviceStartedAdvertising)
		String_t* L_72 = ___0_message;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_72, NULL);
		NullCheck(_stringLiteral055547E9CF7CA46009A0E7BBE0EBFD1D965FA37F);
		int32_t L_74;
		L_74 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral055547E9CF7CA46009A0E7BBE0EBFD1D965FA37F, NULL);
		if ((((int32_t)L_73) < ((int32_t)L_74)))
		{
			goto IL_0202;
		}
	}
	{
		String_t* L_75 = ___0_message;
		NullCheck(_stringLiteral055547E9CF7CA46009A0E7BBE0EBFD1D965FA37F);
		int32_t L_76;
		L_76 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral055547E9CF7CA46009A0E7BBE0EBFD1D965FA37F, NULL);
		NullCheck(L_75);
		String_t* L_77;
		L_77 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_75, 0, L_76, NULL);
		bool L_78;
		L_78 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_77, _stringLiteral055547E9CF7CA46009A0E7BBE0EBFD1D965FA37F, NULL);
		if (!L_78)
		{
			goto IL_0202;
		}
	}
	{
		// BluetoothLEHardwareInterface.Log ("Started Advertising");
		BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C(_stringLiteral01FC300FC7D69084F12B27BCC0C38122C800B8C9, NULL);
		// if (StartedAdvertisingAction != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_79 = __this->___StartedAdvertisingAction_9;
		if (!L_79)
		{
			goto IL_0806;
		}
	}
	{
		// StartedAdvertisingAction ();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_80 = __this->___StartedAdvertisingAction_9;
		NullCheck(L_80);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_80, NULL);
		return;
	}

IL_0202:
	{
		// else if (message.Length >= deviceStoppedAdvertising.Length && message.Substring (0, deviceStoppedAdvertising.Length) == deviceStoppedAdvertising)
		String_t* L_81 = ___0_message;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_81, NULL);
		NullCheck(_stringLiteralB8DEA5867E81465D0D2D4C07103BBEB6CDADFD51);
		int32_t L_83;
		L_83 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralB8DEA5867E81465D0D2D4C07103BBEB6CDADFD51, NULL);
		if ((((int32_t)L_82) < ((int32_t)L_83)))
		{
			goto IL_0252;
		}
	}
	{
		String_t* L_84 = ___0_message;
		NullCheck(_stringLiteralB8DEA5867E81465D0D2D4C07103BBEB6CDADFD51);
		int32_t L_85;
		L_85 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralB8DEA5867E81465D0D2D4C07103BBEB6CDADFD51, NULL);
		NullCheck(L_84);
		String_t* L_86;
		L_86 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_84, 0, L_85, NULL);
		bool L_87;
		L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteralB8DEA5867E81465D0D2D4C07103BBEB6CDADFD51, NULL);
		if (!L_87)
		{
			goto IL_0252;
		}
	}
	{
		// BluetoothLEHardwareInterface.Log ("Stopped Advertising");
		BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C(_stringLiteralCDC8B946EE0851853017EBA616344D4F97D44411, NULL);
		// if (StoppedAdvertisingAction != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_88 = __this->___StoppedAdvertisingAction_10;
		if (!L_88)
		{
			goto IL_0806;
		}
	}
	{
		// StoppedAdvertisingAction ();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_89 = __this->___StoppedAdvertisingAction_10;
		NullCheck(L_89);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_89, NULL);
		return;
	}

IL_0252:
	{
		// else if (message.Length >= deviceDiscoveredPeripheral.Length && message.Substring (0, deviceDiscoveredPeripheral.Length) == deviceDiscoveredPeripheral)
		String_t* L_90 = ___0_message;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_90, NULL);
		NullCheck(_stringLiteralD11AE57CAF5237AA62C8FC603DA1381EB3BF7B49);
		int32_t L_92;
		L_92 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralD11AE57CAF5237AA62C8FC603DA1381EB3BF7B49, NULL);
		if ((((int32_t)L_91) < ((int32_t)L_92)))
		{
			goto IL_0327;
		}
	}
	{
		String_t* L_93 = ___0_message;
		NullCheck(_stringLiteralD11AE57CAF5237AA62C8FC603DA1381EB3BF7B49);
		int32_t L_94;
		L_94 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralD11AE57CAF5237AA62C8FC603DA1381EB3BF7B49, NULL);
		NullCheck(L_93);
		String_t* L_95;
		L_95 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_93, 0, L_94, NULL);
		bool L_96;
		L_96 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_95, _stringLiteralD11AE57CAF5237AA62C8FC603DA1381EB3BF7B49, NULL);
		if (!L_96)
		{
			goto IL_0327;
		}
	}
	{
		// if (parts.Length >= 3)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_97 = V_1;
		NullCheck(L_97);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_97)->max_length))) < ((int32_t)3)))
		{
			goto IL_0806;
		}
	}
	{
		// if (!DiscoveredDeviceList.Contains (parts[1] + "|" + parts[2]))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_98 = __this->___DiscoveredDeviceList_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_99 = V_1;
		NullCheck(L_99);
		int32_t L_100 = 1;
		String_t* L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_102 = V_1;
		NullCheck(L_102);
		int32_t L_103 = 2;
		String_t* L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_101, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_104, NULL);
		NullCheck(L_98);
		bool L_106;
		L_106 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_98, L_105, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (L_106)
		{
			goto IL_02e1;
		}
	}
	{
		// DiscoveredDeviceList.Add (parts[1] + "|" + parts[2]);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_107 = __this->___DiscoveredDeviceList_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_108 = V_1;
		NullCheck(L_108);
		int32_t L_109 = 1;
		String_t* L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_111 = V_1;
		NullCheck(L_111);
		int32_t L_112 = 2;
		String_t* L_113 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		String_t* L_114;
		L_114 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_110, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_113, NULL);
		NullCheck(L_107);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_107, L_114, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// if (DiscoveredPeripheralAction != null)
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_115 = __this->___DiscoveredPeripheralAction_11;
		if (!L_115)
		{
			goto IL_02e1;
		}
	}
	{
		// DiscoveredPeripheralAction (parts[1], parts[2]);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_116 = __this->___DiscoveredPeripheralAction_11;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_117 = V_1;
		NullCheck(L_117);
		int32_t L_118 = 1;
		String_t* L_119 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_120 = V_1;
		NullCheck(L_120);
		int32_t L_121 = 2;
		String_t* L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_116);
		Action_2_Invoke_m8FA30194997244EC0072D6B437818A22B65F2854_inline(L_116, L_119, L_122, NULL);
	}

IL_02e1:
	{
		// if (parts.Length >= 5 && DiscoveredPeripheralWithAdvertisingInfoAction != null)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_123 = V_1;
		NullCheck(L_123);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_123)->max_length))) < ((int32_t)5)))
		{
			goto IL_0806;
		}
	}
	{
		Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* L_124 = __this->___DiscoveredPeripheralWithAdvertisingInfoAction_12;
		if (!L_124)
		{
			goto IL_0806;
		}
	}
	{
		// int rssi = 0;
		V_4 = 0;
		// if (!int.TryParse (parts[3], out rssi))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_125 = V_1;
		NullCheck(L_125);
		int32_t L_126 = 3;
		String_t* L_127 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		bool L_128;
		L_128 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_127, (&V_4), NULL);
		if (L_128)
		{
			goto IL_0307;
		}
	}
	{
		// rssi = 0;
		V_4 = 0;
	}

IL_0307:
	{
		// byte[] bytes = System.Convert.FromBase64String (parts[4]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_129 = V_1;
		NullCheck(L_129);
		int32_t L_130 = 4;
		String_t* L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_132;
		L_132 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_131, NULL);
		V_5 = L_132;
		// DiscoveredPeripheralWithAdvertisingInfoAction (parts[1], parts[2], rssi, bytes);
		Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* L_133 = __this->___DiscoveredPeripheralWithAdvertisingInfoAction_12;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_134 = V_1;
		NullCheck(L_134);
		int32_t L_135 = 1;
		String_t* L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_137 = V_1;
		NullCheck(L_137);
		int32_t L_138 = 2;
		String_t* L_139 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		int32_t L_140 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_141 = V_5;
		NullCheck(L_133);
		Action_4_Invoke_mD9DD80B61F675BE34D06BB382884E69323B1C8C1_inline(L_133, L_136, L_139, L_140, L_141, NULL);
		return;
	}

IL_0327:
	{
		// else if (message.Length >= deviceDiscoveredBeacon.Length && message.Substring (0, deviceDiscoveredBeacon.Length) == deviceDiscoveredBeacon)
		String_t* L_142 = ___0_message;
		NullCheck(L_142);
		int32_t L_143;
		L_143 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_142, NULL);
		NullCheck(_stringLiteral3DB71419DD7D9B880A3A7641C61DD34A55D73E53);
		int32_t L_144;
		L_144 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral3DB71419DD7D9B880A3A7641C61DD34A55D73E53, NULL);
		if ((((int32_t)L_143) < ((int32_t)L_144)))
		{
			goto IL_040f;
		}
	}
	{
		String_t* L_145 = ___0_message;
		NullCheck(_stringLiteral3DB71419DD7D9B880A3A7641C61DD34A55D73E53);
		int32_t L_146;
		L_146 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral3DB71419DD7D9B880A3A7641C61DD34A55D73E53, NULL);
		NullCheck(L_145);
		String_t* L_147;
		L_147 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_145, 0, L_146, NULL);
		bool L_148;
		L_148 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_147, _stringLiteral3DB71419DD7D9B880A3A7641C61DD34A55D73E53, NULL);
		if (!L_148)
		{
			goto IL_040f;
		}
	}
	{
		// if (parts.Length >= 7)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_149 = V_1;
		NullCheck(L_149);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_149)->max_length))) < ((int32_t)7)))
		{
			goto IL_0806;
		}
	}
	{
		// var iBeaconData = new BluetoothLEHardwareInterface.iBeaconData ();
		il2cpp_codegen_initobj((&V_6), sizeof(iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96));
		// iBeaconData.UUID = parts[1];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_150 = V_1;
		NullCheck(L_150);
		int32_t L_151 = 1;
		String_t* L_152 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		(&V_6)->___UUID_0 = L_152;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_6)->___UUID_0), (void*)L_152);
		// if (!int.TryParse (parts[2], out iBeaconData.Major))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_153 = V_1;
		NullCheck(L_153);
		int32_t L_154 = 2;
		String_t* L_155 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		int32_t* L_156 = (&(&V_6)->___Major_1);
		bool L_157;
		L_157 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_155, L_156, NULL);
		if (L_157)
		{
			goto IL_0390;
		}
	}
	{
		// iBeaconData.Major = 0;
		(&V_6)->___Major_1 = 0;
	}

IL_0390:
	{
		// if (!int.TryParse (parts[3], out iBeaconData.Minor))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_158 = V_1;
		NullCheck(L_158);
		int32_t L_159 = 3;
		String_t* L_160 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		int32_t* L_161 = (&(&V_6)->___Minor_2);
		bool L_162;
		L_162 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_160, L_161, NULL);
		if (L_162)
		{
			goto IL_03a9;
		}
	}
	{
		// iBeaconData.Minor = 0;
		(&V_6)->___Minor_2 = 0;
	}

IL_03a9:
	{
		// if (!int.TryParse (parts[4], out iBeaconData.RSSI))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_163 = V_1;
		NullCheck(L_163);
		int32_t L_164 = 4;
		String_t* L_165 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		int32_t* L_166 = (&(&V_6)->___RSSI_3);
		bool L_167;
		L_167 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_165, L_166, NULL);
		if (L_167)
		{
			goto IL_03c2;
		}
	}
	{
		// iBeaconData.RSSI = 0;
		(&V_6)->___RSSI_3 = 0;
	}

IL_03c2:
	{
		// if (!int.TryParse (parts[5], out iBeaconData.AndroidSignalPower))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_168 = V_1;
		NullCheck(L_168);
		int32_t L_169 = 5;
		String_t* L_170 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		int32_t* L_171 = (&(&V_6)->___AndroidSignalPower_4);
		bool L_172;
		L_172 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_170, L_171, NULL);
		if (L_172)
		{
			goto IL_03db;
		}
	}
	{
		// iBeaconData.AndroidSignalPower = 0;
		(&V_6)->___AndroidSignalPower_4 = 0;
	}

IL_03db:
	{
		// int iOSProximity = 0;
		V_7 = 0;
		// if (!int.TryParse (parts[6], out iOSProximity))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_173 = V_1;
		NullCheck(L_173);
		int32_t L_174 = 6;
		String_t* L_175 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		bool L_176;
		L_176 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_175, (&V_7), NULL);
		if (L_176)
		{
			goto IL_03ed;
		}
	}
	{
		// iOSProximity = 0;
		V_7 = 0;
	}

IL_03ed:
	{
		// iBeaconData.iOSProximity = (BluetoothLEHardwareInterface.iOSProximity)iOSProximity;
		int32_t L_177 = V_7;
		(&V_6)->___iOSProximity_5 = L_177;
		// if (DiscoveredBeaconAction != null)
		Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE* L_178 = __this->___DiscoveredBeaconAction_13;
		if (!L_178)
		{
			goto IL_0806;
		}
	}
	{
		// DiscoveredBeaconAction (iBeaconData);
		Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE* L_179 = __this->___DiscoveredBeaconAction_13;
		iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96 L_180 = V_6;
		NullCheck(L_179);
		Action_1_Invoke_mE56360F8A5B137A1714DEF08A9266EF9166480B8_inline(L_179, L_180, NULL);
		return;
	}

IL_040f:
	{
		// else if (message.Length >= deviceRetrievedConnectedPeripheral.Length && message.Substring (0, deviceRetrievedConnectedPeripheral.Length) == deviceRetrievedConnectedPeripheral)
		String_t* L_181 = ___0_message;
		NullCheck(L_181);
		int32_t L_182;
		L_182 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_181, NULL);
		NullCheck(_stringLiteralBC1F19B5269AF2F944325E84A78744A84AC90E28);
		int32_t L_183;
		L_183 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralBC1F19B5269AF2F944325E84A78744A84AC90E28, NULL);
		if ((((int32_t)L_182) < ((int32_t)L_183)))
		{
			goto IL_0472;
		}
	}
	{
		String_t* L_184 = ___0_message;
		NullCheck(_stringLiteralBC1F19B5269AF2F944325E84A78744A84AC90E28);
		int32_t L_185;
		L_185 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralBC1F19B5269AF2F944325E84A78744A84AC90E28, NULL);
		NullCheck(L_184);
		String_t* L_186;
		L_186 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_184, 0, L_185, NULL);
		bool L_187;
		L_187 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_186, _stringLiteralBC1F19B5269AF2F944325E84A78744A84AC90E28, NULL);
		if (!L_187)
		{
			goto IL_0472;
		}
	}
	{
		// if (parts.Length >= 3)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_188 = V_1;
		NullCheck(L_188);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_188)->max_length))) < ((int32_t)3)))
		{
			goto IL_0806;
		}
	}
	{
		// DiscoveredDeviceList.Add (parts[1]);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_189 = __this->___DiscoveredDeviceList_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_190 = V_1;
		NullCheck(L_190);
		int32_t L_191 = 1;
		String_t* L_192 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		NullCheck(L_189);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_189, L_192, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// if (RetrievedConnectedPeripheralAction != null)
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_193 = __this->___RetrievedConnectedPeripheralAction_14;
		if (!L_193)
		{
			goto IL_0806;
		}
	}
	{
		// RetrievedConnectedPeripheralAction (parts[1], parts[2]);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_194 = __this->___RetrievedConnectedPeripheralAction_14;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_195 = V_1;
		NullCheck(L_195);
		int32_t L_196 = 1;
		String_t* L_197 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_198 = V_1;
		NullCheck(L_198);
		int32_t L_199 = 2;
		String_t* L_200 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		NullCheck(L_194);
		Action_2_Invoke_m8FA30194997244EC0072D6B437818A22B65F2854_inline(L_194, L_197, L_200, NULL);
		return;
	}

IL_0472:
	{
		// else if (message.Length >= devicePeripheralReceivedWriteData.Length && message.Substring (0, devicePeripheralReceivedWriteData.Length) == devicePeripheralReceivedWriteData)
		String_t* L_201 = ___0_message;
		NullCheck(L_201);
		int32_t L_202;
		L_202 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_201, NULL);
		NullCheck(_stringLiteral04938D88CCBF5A98466865086ED2669F409064BE);
		int32_t L_203;
		L_203 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral04938D88CCBF5A98466865086ED2669F409064BE, NULL);
		if ((((int32_t)L_202) < ((int32_t)L_203)))
		{
			goto IL_04b7;
		}
	}
	{
		String_t* L_204 = ___0_message;
		NullCheck(_stringLiteral04938D88CCBF5A98466865086ED2669F409064BE);
		int32_t L_205;
		L_205 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral04938D88CCBF5A98466865086ED2669F409064BE, NULL);
		NullCheck(L_204);
		String_t* L_206;
		L_206 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_204, 0, L_205, NULL);
		bool L_207;
		L_207 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_206, _stringLiteral04938D88CCBF5A98466865086ED2669F409064BE, NULL);
		if (!L_207)
		{
			goto IL_04b7;
		}
	}
	{
		// if (parts.Length >= 3)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_208 = V_1;
		NullCheck(L_208);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_208)->max_length))) < ((int32_t)3)))
		{
			goto IL_0806;
		}
	}
	{
		// OnPeripheralData (parts[1], parts[2]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_209 = V_1;
		NullCheck(L_209);
		int32_t L_210 = 1;
		String_t* L_211 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_212 = V_1;
		NullCheck(L_212);
		int32_t L_213 = 2;
		String_t* L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		BluetoothDeviceScript_OnPeripheralData_mD3F92D2EA496B24CFB212E6D72E2C6BB0891CE96(__this, L_211, L_214, NULL);
		return;
	}

IL_04b7:
	{
		// else if (message.Length >= deviceConnectedPeripheral.Length && message.Substring (0, deviceConnectedPeripheral.Length) == deviceConnectedPeripheral)
		String_t* L_215 = ___0_message;
		NullCheck(L_215);
		int32_t L_216;
		L_216 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_215, NULL);
		NullCheck(_stringLiteralA7311ED0828EB188F47CB67E1036A7572167C2F9);
		int32_t L_217;
		L_217 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralA7311ED0828EB188F47CB67E1036A7572167C2F9, NULL);
		if ((((int32_t)L_216) < ((int32_t)L_217)))
		{
			goto IL_0509;
		}
	}
	{
		String_t* L_218 = ___0_message;
		NullCheck(_stringLiteralA7311ED0828EB188F47CB67E1036A7572167C2F9);
		int32_t L_219;
		L_219 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralA7311ED0828EB188F47CB67E1036A7572167C2F9, NULL);
		NullCheck(L_218);
		String_t* L_220;
		L_220 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_218, 0, L_219, NULL);
		bool L_221;
		L_221 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_220, _stringLiteralA7311ED0828EB188F47CB67E1036A7572167C2F9, NULL);
		if (!L_221)
		{
			goto IL_0509;
		}
	}
	{
		// if (parts.Length >= 2 && ConnectedPeripheralAction != null)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_222 = V_1;
		NullCheck(L_222);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_222)->max_length))) < ((int32_t)2)))
		{
			goto IL_0806;
		}
	}
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_223 = __this->___ConnectedPeripheralAction_16;
		if (!L_223)
		{
			goto IL_0806;
		}
	}
	{
		// ConnectedPeripheralAction (parts[1]);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_224 = __this->___ConnectedPeripheralAction_16;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_225 = V_1;
		NullCheck(L_225);
		int32_t L_226 = 1;
		String_t* L_227 = (L_225)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		NullCheck(L_224);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_224, L_227, NULL);
		return;
	}

IL_0509:
	{
		// else if (message.Length >= deviceDisconnectedPeripheral.Length && message.Substring (0, deviceDisconnectedPeripheral.Length) == deviceDisconnectedPeripheral)
		String_t* L_228 = ___0_message;
		NullCheck(L_228);
		int32_t L_229;
		L_229 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_228, NULL);
		NullCheck(_stringLiteralA4D91B5857748A8BA4721A92F64CB7597B1037E3);
		int32_t L_230;
		L_230 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralA4D91B5857748A8BA4721A92F64CB7597B1037E3, NULL);
		if ((((int32_t)L_229) < ((int32_t)L_230)))
		{
			goto IL_0571;
		}
	}
	{
		String_t* L_231 = ___0_message;
		NullCheck(_stringLiteralA4D91B5857748A8BA4721A92F64CB7597B1037E3);
		int32_t L_232;
		L_232 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralA4D91B5857748A8BA4721A92F64CB7597B1037E3, NULL);
		NullCheck(L_231);
		String_t* L_233;
		L_233 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_231, 0, L_232, NULL);
		bool L_234;
		L_234 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_233, _stringLiteralA4D91B5857748A8BA4721A92F64CB7597B1037E3, NULL);
		if (!L_234)
		{
			goto IL_0571;
		}
	}
	{
		// if (parts.Length >= 2)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_235 = V_1;
		NullCheck(L_235);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_235)->max_length))) < ((int32_t)2)))
		{
			goto IL_0806;
		}
	}
	{
		// if (ConnectedDisconnectPeripheralAction != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_236 = __this->___ConnectedDisconnectPeripheralAction_17;
		if (!L_236)
		{
			goto IL_0557;
		}
	}
	{
		// ConnectedDisconnectPeripheralAction (parts[1]);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_237 = __this->___ConnectedDisconnectPeripheralAction_17;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_238 = V_1;
		NullCheck(L_238);
		int32_t L_239 = 1;
		String_t* L_240 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		NullCheck(L_237);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_237, L_240, NULL);
	}

IL_0557:
	{
		// if (DisconnectedPeripheralAction != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_241 = __this->___DisconnectedPeripheralAction_18;
		if (!L_241)
		{
			goto IL_0806;
		}
	}
	{
		// DisconnectedPeripheralAction (parts[1]);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_242 = __this->___DisconnectedPeripheralAction_18;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_243 = V_1;
		NullCheck(L_243);
		int32_t L_244 = 1;
		String_t* L_245 = (L_243)->GetAt(static_cast<il2cpp_array_size_t>(L_244));
		NullCheck(L_242);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_242, L_245, NULL);
		return;
	}

IL_0571:
	{
		// else if (message.Length >= deviceDiscoveredService.Length && message.Substring (0, deviceDiscoveredService.Length) == deviceDiscoveredService)
		String_t* L_246 = ___0_message;
		NullCheck(L_246);
		int32_t L_247;
		L_247 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_246, NULL);
		NullCheck(_stringLiteral283D774A5141A159CCA779600D4FD489AFD39105);
		int32_t L_248;
		L_248 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral283D774A5141A159CCA779600D4FD489AFD39105, NULL);
		if ((((int32_t)L_247) < ((int32_t)L_248)))
		{
			goto IL_05c6;
		}
	}
	{
		String_t* L_249 = ___0_message;
		NullCheck(_stringLiteral283D774A5141A159CCA779600D4FD489AFD39105);
		int32_t L_250;
		L_250 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral283D774A5141A159CCA779600D4FD489AFD39105, NULL);
		NullCheck(L_249);
		String_t* L_251;
		L_251 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_249, 0, L_250, NULL);
		bool L_252;
		L_252 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_251, _stringLiteral283D774A5141A159CCA779600D4FD489AFD39105, NULL);
		if (!L_252)
		{
			goto IL_05c6;
		}
	}
	{
		// if (parts.Length >= 3 && DiscoveredServiceAction != null)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_253 = V_1;
		NullCheck(L_253);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_253)->max_length))) < ((int32_t)3)))
		{
			goto IL_0806;
		}
	}
	{
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_254 = __this->___DiscoveredServiceAction_19;
		if (!L_254)
		{
			goto IL_0806;
		}
	}
	{
		// DiscoveredServiceAction (parts[1], parts[2]);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_255 = __this->___DiscoveredServiceAction_19;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_256 = V_1;
		NullCheck(L_256);
		int32_t L_257 = 1;
		String_t* L_258 = (L_256)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_259 = V_1;
		NullCheck(L_259);
		int32_t L_260 = 2;
		String_t* L_261 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_260));
		NullCheck(L_255);
		Action_2_Invoke_m8FA30194997244EC0072D6B437818A22B65F2854_inline(L_255, L_258, L_261, NULL);
		return;
	}

IL_05c6:
	{
		// else if (message.Length >= deviceDiscoveredCharacteristic.Length && message.Substring (0, deviceDiscoveredCharacteristic.Length) == deviceDiscoveredCharacteristic)
		String_t* L_262 = ___0_message;
		NullCheck(L_262);
		int32_t L_263;
		L_263 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_262, NULL);
		NullCheck(_stringLiteral02C3126AC268EB4CA84EB0E1826E079B33CEE7E8);
		int32_t L_264;
		L_264 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral02C3126AC268EB4CA84EB0E1826E079B33CEE7E8, NULL);
		if ((((int32_t)L_263) < ((int32_t)L_264)))
		{
			goto IL_061e;
		}
	}
	{
		String_t* L_265 = ___0_message;
		NullCheck(_stringLiteral02C3126AC268EB4CA84EB0E1826E079B33CEE7E8);
		int32_t L_266;
		L_266 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral02C3126AC268EB4CA84EB0E1826E079B33CEE7E8, NULL);
		NullCheck(L_265);
		String_t* L_267;
		L_267 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_265, 0, L_266, NULL);
		bool L_268;
		L_268 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_267, _stringLiteral02C3126AC268EB4CA84EB0E1826E079B33CEE7E8, NULL);
		if (!L_268)
		{
			goto IL_061e;
		}
	}
	{
		// if (parts.Length >= 4 && DiscoveredCharacteristicAction != null)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_269 = V_1;
		NullCheck(L_269);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_269)->max_length))) < ((int32_t)4)))
		{
			goto IL_0806;
		}
	}
	{
		Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* L_270 = __this->___DiscoveredCharacteristicAction_20;
		if (!L_270)
		{
			goto IL_0806;
		}
	}
	{
		// DiscoveredCharacteristicAction (parts[1], parts[2], parts[3]);
		Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* L_271 = __this->___DiscoveredCharacteristicAction_20;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_272 = V_1;
		NullCheck(L_272);
		int32_t L_273 = 1;
		String_t* L_274 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_275 = V_1;
		NullCheck(L_275);
		int32_t L_276 = 2;
		String_t* L_277 = (L_275)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_278 = V_1;
		NullCheck(L_278);
		int32_t L_279 = 3;
		String_t* L_280 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		NullCheck(L_271);
		Action_3_Invoke_mABFB1B378BF33588992DD5A0180457B4ADB790D9_inline(L_271, L_274, L_277, L_280, NULL);
		return;
	}

IL_061e:
	{
		// else if (message.Length >= deviceDidWriteCharacteristic.Length && message.Substring (0, deviceDidWriteCharacteristic.Length) == deviceDidWriteCharacteristic)
		String_t* L_281 = ___0_message;
		NullCheck(L_281);
		int32_t L_282;
		L_282 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_281, NULL);
		NullCheck(_stringLiteral9AF66B6B54D90A98DBA38E21C39BEFB461EAA6A6);
		int32_t L_283;
		L_283 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral9AF66B6B54D90A98DBA38E21C39BEFB461EAA6A6, NULL);
		if ((((int32_t)L_282) < ((int32_t)L_283)))
		{
			goto IL_0670;
		}
	}
	{
		String_t* L_284 = ___0_message;
		NullCheck(_stringLiteral9AF66B6B54D90A98DBA38E21C39BEFB461EAA6A6);
		int32_t L_285;
		L_285 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral9AF66B6B54D90A98DBA38E21C39BEFB461EAA6A6, NULL);
		NullCheck(L_284);
		String_t* L_286;
		L_286 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_284, 0, L_285, NULL);
		bool L_287;
		L_287 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_286, _stringLiteral9AF66B6B54D90A98DBA38E21C39BEFB461EAA6A6, NULL);
		if (!L_287)
		{
			goto IL_0670;
		}
	}
	{
		// if (parts.Length >= 2 && DidWriteCharacteristicAction != null)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_288 = V_1;
		NullCheck(L_288);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_288)->max_length))) < ((int32_t)2)))
		{
			goto IL_0806;
		}
	}
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_289 = __this->___DidWriteCharacteristicAction_21;
		if (!L_289)
		{
			goto IL_0806;
		}
	}
	{
		// DidWriteCharacteristicAction (parts[1]);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_290 = __this->___DidWriteCharacteristicAction_21;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_291 = V_1;
		NullCheck(L_291);
		int32_t L_292 = 1;
		String_t* L_293 = (L_291)->GetAt(static_cast<il2cpp_array_size_t>(L_292));
		NullCheck(L_290);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_290, L_293, NULL);
		return;
	}

IL_0670:
	{
		// else if (message.Length >= deviceDidUpdateNotificationStateForCharacteristic.Length && message.Substring (0, deviceDidUpdateNotificationStateForCharacteristic.Length) == deviceDidUpdateNotificationStateForCharacteristic)
		String_t* L_294 = ___0_message;
		NullCheck(L_294);
		int32_t L_295;
		L_295 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_294, NULL);
		NullCheck(_stringLiteral2C5CA582C472914803F7B097F586DA4F20FF1D32);
		int32_t L_296;
		L_296 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral2C5CA582C472914803F7B097F586DA4F20FF1D32, NULL);
		if ((((int32_t)L_295) < ((int32_t)L_296)))
		{
			goto IL_0765;
		}
	}
	{
		String_t* L_297 = ___0_message;
		NullCheck(_stringLiteral2C5CA582C472914803F7B097F586DA4F20FF1D32);
		int32_t L_298;
		L_298 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral2C5CA582C472914803F7B097F586DA4F20FF1D32, NULL);
		NullCheck(L_297);
		String_t* L_299;
		L_299 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_297, 0, L_298, NULL);
		bool L_300;
		L_300 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_299, _stringLiteral2C5CA582C472914803F7B097F586DA4F20FF1D32, NULL);
		if (!L_300)
		{
			goto IL_0765;
		}
	}
	{
		// if (parts.Length >= 3)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_301 = V_1;
		NullCheck(L_301);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_301)->max_length))) < ((int32_t)3)))
		{
			goto IL_0806;
		}
	}
	{
		// if (DidUpdateNotificationStateForCharacteristicAction != null && DidUpdateNotificationStateForCharacteristicAction.ContainsKey (parts[1]))
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_302 = __this->___DidUpdateNotificationStateForCharacteristicAction_22;
		if (!L_302)
		{
			goto IL_0700;
		}
	}
	{
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_303 = __this->___DidUpdateNotificationStateForCharacteristicAction_22;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_304 = V_1;
		NullCheck(L_304);
		int32_t L_305 = 1;
		String_t* L_306 = (L_304)->GetAt(static_cast<il2cpp_array_size_t>(L_305));
		NullCheck(L_303);
		bool L_307;
		L_307 = Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F(L_303, L_306, Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var);
		if (!L_307)
		{
			goto IL_0700;
		}
	}
	{
		// var characteristicAction = DidUpdateNotificationStateForCharacteristicAction[parts[1]];
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_308 = __this->___DidUpdateNotificationStateForCharacteristicAction_22;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_309 = V_1;
		NullCheck(L_309);
		int32_t L_310 = 1;
		String_t* L_311 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		NullCheck(L_308);
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_312;
		L_312 = Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61(L_308, L_311, Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var);
		V_8 = L_312;
		// if (characteristicAction != null && characteristicAction.ContainsKey (parts[2]))
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_313 = V_8;
		if (!L_313)
		{
			goto IL_0700;
		}
	}
	{
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_314 = V_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_315 = V_1;
		NullCheck(L_315);
		int32_t L_316 = 2;
		String_t* L_317 = (L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_316));
		NullCheck(L_314);
		bool L_318;
		L_318 = Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E(L_314, L_317, Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E_RuntimeMethod_var);
		if (!L_318)
		{
			goto IL_0700;
		}
	}
	{
		// var action = characteristicAction[parts[2]];
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_319 = V_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_320 = V_1;
		NullCheck(L_320);
		int32_t L_321 = 2;
		String_t* L_322 = (L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		NullCheck(L_319);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_323;
		L_323 = Dictionary_2_get_Item_mAC12398F029B0CC08037CAC73D4E875F4E9ADD6D(L_319, L_322, Dictionary_2_get_Item_mAC12398F029B0CC08037CAC73D4E875F4E9ADD6D_RuntimeMethod_var);
		V_9 = L_323;
		// if (action != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_324 = V_9;
		if (!L_324)
		{
			goto IL_0700;
		}
	}
	{
		// action (parts[2]);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_325 = V_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_326 = V_1;
		NullCheck(L_326);
		int32_t L_327 = 2;
		String_t* L_328 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		NullCheck(L_325);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_325, L_328, NULL);
	}

IL_0700:
	{
		// if (DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction != null && DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction.ContainsKey (parts[1]))
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_329 = __this->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		if (!L_329)
		{
			goto IL_0806;
		}
	}
	{
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_330 = __this->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_331 = V_1;
		NullCheck(L_331);
		int32_t L_332 = 1;
		String_t* L_333 = (L_331)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		NullCheck(L_330);
		bool L_334;
		L_334 = Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23(L_330, L_333, Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23_RuntimeMethod_var);
		if (!L_334)
		{
			goto IL_0806;
		}
	}
	{
		// var characteristicAction = DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction[parts[1]];
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_335 = __this->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_336 = V_1;
		NullCheck(L_336);
		int32_t L_337 = 1;
		String_t* L_338 = (L_336)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		NullCheck(L_335);
		Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* L_339;
		L_339 = Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF(L_335, L_338, Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF_RuntimeMethod_var);
		V_10 = L_339;
		// if (characteristicAction != null && characteristicAction.ContainsKey (parts[2]))
		Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* L_340 = V_10;
		if (!L_340)
		{
			goto IL_0806;
		}
	}
	{
		Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* L_341 = V_10;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_342 = V_1;
		NullCheck(L_342);
		int32_t L_343 = 2;
		String_t* L_344 = (L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_343));
		NullCheck(L_341);
		bool L_345;
		L_345 = Dictionary_2_ContainsKey_m913953EB949920103EE45B0C497AED20472529CD(L_341, L_344, Dictionary_2_ContainsKey_m913953EB949920103EE45B0C497AED20472529CD_RuntimeMethod_var);
		if (!L_345)
		{
			goto IL_0806;
		}
	}
	{
		// var action = characteristicAction[parts[2]];
		Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* L_346 = V_10;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_347 = V_1;
		NullCheck(L_347);
		int32_t L_348 = 2;
		String_t* L_349 = (L_347)->GetAt(static_cast<il2cpp_array_size_t>(L_348));
		NullCheck(L_346);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_350;
		L_350 = Dictionary_2_get_Item_mBBC25AE20AA64D8E9CB489C3F455282573A79550(L_346, L_349, Dictionary_2_get_Item_mBBC25AE20AA64D8E9CB489C3F455282573A79550_RuntimeMethod_var);
		V_11 = L_350;
		// if (action != null)
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_351 = V_11;
		if (!L_351)
		{
			goto IL_0806;
		}
	}
	{
		// action (parts[1], parts[2]);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_352 = V_11;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_353 = V_1;
		NullCheck(L_353);
		int32_t L_354 = 1;
		String_t* L_355 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_354));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_356 = V_1;
		NullCheck(L_356);
		int32_t L_357 = 2;
		String_t* L_358 = (L_356)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		NullCheck(L_352);
		Action_2_Invoke_m8FA30194997244EC0072D6B437818A22B65F2854_inline(L_352, L_355, L_358, NULL);
		return;
	}

IL_0765:
	{
		// else if (message.Length >= deviceDidUpdateValueForCharacteristic.Length && message.Substring (0, deviceDidUpdateValueForCharacteristic.Length) == deviceDidUpdateValueForCharacteristic)
		String_t* L_359 = ___0_message;
		NullCheck(L_359);
		int32_t L_360;
		L_360 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_359, NULL);
		NullCheck(_stringLiteral571BE214A9046BE6BECE9693FC64F752B55BDE84);
		int32_t L_361;
		L_361 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral571BE214A9046BE6BECE9693FC64F752B55BDE84, NULL);
		if ((((int32_t)L_360) < ((int32_t)L_361)))
		{
			goto IL_07aa;
		}
	}
	{
		String_t* L_362 = ___0_message;
		NullCheck(_stringLiteral571BE214A9046BE6BECE9693FC64F752B55BDE84);
		int32_t L_363;
		L_363 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral571BE214A9046BE6BECE9693FC64F752B55BDE84, NULL);
		NullCheck(L_362);
		String_t* L_364;
		L_364 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_362, 0, L_363, NULL);
		bool L_365;
		L_365 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_364, _stringLiteral571BE214A9046BE6BECE9693FC64F752B55BDE84, NULL);
		if (!L_365)
		{
			goto IL_07aa;
		}
	}
	{
		// if (parts.Length >= 4)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_366 = V_1;
		NullCheck(L_366);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_366)->max_length))) < ((int32_t)4)))
		{
			goto IL_0806;
		}
	}
	{
		// OnBluetoothData (parts[1], parts[2], parts[3]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_367 = V_1;
		NullCheck(L_367);
		int32_t L_368 = 1;
		String_t* L_369 = (L_367)->GetAt(static_cast<il2cpp_array_size_t>(L_368));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_370 = V_1;
		NullCheck(L_370);
		int32_t L_371 = 2;
		String_t* L_372 = (L_370)->GetAt(static_cast<il2cpp_array_size_t>(L_371));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_373 = V_1;
		NullCheck(L_373);
		int32_t L_374 = 3;
		String_t* L_375 = (L_373)->GetAt(static_cast<il2cpp_array_size_t>(L_374));
		BluetoothDeviceScript_OnBluetoothData_mC3C7BE5FBFA895495E5D3F2F2147C73378437C2D(__this, L_369, L_372, L_375, NULL);
		return;
	}

IL_07aa:
	{
		// else if (message.Length >= deviceRequestMtu.Length && message.Substring(0, deviceRequestMtu.Length) == deviceRequestMtu)
		String_t* L_376 = ___0_message;
		NullCheck(L_376);
		int32_t L_377;
		L_377 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_376, NULL);
		NullCheck(_stringLiteral08BCB48EF8130797101E8FE188198E8F43CD97E7);
		int32_t L_378;
		L_378 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral08BCB48EF8130797101E8FE188198E8F43CD97E7, NULL);
		if ((((int32_t)L_377) < ((int32_t)L_378)))
		{
			goto IL_0806;
		}
	}
	{
		String_t* L_379 = ___0_message;
		NullCheck(_stringLiteral08BCB48EF8130797101E8FE188198E8F43CD97E7);
		int32_t L_380;
		L_380 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral08BCB48EF8130797101E8FE188198E8F43CD97E7, NULL);
		NullCheck(L_379);
		String_t* L_381;
		L_381 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_379, 0, L_380, NULL);
		bool L_382;
		L_382 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_381, _stringLiteral08BCB48EF8130797101E8FE188198E8F43CD97E7, NULL);
		if (!L_382)
		{
			goto IL_0806;
		}
	}
	{
		// if (parts.Length >= 3)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_383 = V_1;
		NullCheck(L_383);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_383)->max_length))) < ((int32_t)3)))
		{
			goto IL_0806;
		}
	}
	{
		// if (RequestMtuAction != null)
		Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF* L_384 = __this->___RequestMtuAction_26;
		if (!L_384)
		{
			goto IL_0806;
		}
	}
	{
		// int mtu = 0;
		V_12 = 0;
		// if (int.TryParse(parts[2], out mtu))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_385 = V_1;
		NullCheck(L_385);
		int32_t L_386 = 2;
		String_t* L_387 = (L_385)->GetAt(static_cast<il2cpp_array_size_t>(L_386));
		bool L_388;
		L_388 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_387, (&V_12), NULL);
		if (!L_388)
		{
			goto IL_0806;
		}
	}
	{
		// RequestMtuAction(parts[1], mtu);
		Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF* L_389 = __this->___RequestMtuAction_26;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_390 = V_1;
		NullCheck(L_390);
		int32_t L_391 = 1;
		String_t* L_392 = (L_390)->GetAt(static_cast<il2cpp_array_size_t>(L_391));
		int32_t L_393 = V_12;
		NullCheck(L_389);
		Action_2_Invoke_m69AAAB992ABFCF392F04C4F7E3CE91388C9E24E1_inline(L_389, L_392, L_393, NULL);
	}

IL_0806:
	{
		// }
		return;
	}
}
// System.Void BluetoothDeviceScript::OnBluetoothData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript_OnBluetoothData_mF56A6ED89634D42E0D2EED26ED77B11E54BDD1A2 (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, String_t* ___0_base64Data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnBluetoothData ("", "", base64Data);
		String_t* L_0 = ___0_base64Data;
		BluetoothDeviceScript_OnBluetoothData_mC3C7BE5FBFA895495E5D3F2F2147C73378437C2D(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_0, NULL);
		// }
		return;
	}
}
// System.Void BluetoothDeviceScript::OnBluetoothData(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript_OnBluetoothData_mC3C7BE5FBFA895495E5D3F2F2147C73378437C2D (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, String_t* ___0_deviceAddress, String_t* ___1_characteristic, String_t* ___2_base64Data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m150AA8E90D327107E170A339453F8681CBC34FD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m49883733B2BD00869A51867DF487463D793B72AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A499F6EAC71DC55F8B1A7DF3EA4AE5FCDFE83F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m29D67E65079024F5C041D7F9AA960C3FB8C61727_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB9B806A3CA27CFDDB280FFBBD54F692165DB5DE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC10FD3398D9C91885BEE2ED01F03E6EA8F2458DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12F5EB18DE661BBE815BE7C12357AB74AFA912BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95B70EA0EBEA74FB776F022984B7AB5D2D304AF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD638980A42773DBA4D111CE8D3979093BAC27E5);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	String_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* V_5 = NULL;
	Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* V_6 = NULL;
	Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* V_7 = NULL;
	Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* V_8 = NULL;
	{
		// if (base64Data != null)
		String_t* L_0 = ___2_base64Data;
		if (!L_0)
		{
			goto IL_0116;
		}
	}
	{
		// byte[] bytes = System.Convert.FromBase64String (base64Data);
		String_t* L_1 = ___2_base64Data;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_1, NULL);
		V_0 = L_2;
		// if (bytes.Length > 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0116;
		}
	}
	{
		// deviceAddress = deviceAddress.ToUpper ();
		String_t* L_4 = ___0_deviceAddress;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_4, NULL);
		___0_deviceAddress = L_5;
		// characteristic = characteristic.ToUpper ();
		String_t* L_6 = ___1_characteristic;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_6, NULL);
		___1_characteristic = L_7;
		// BluetoothLEHardwareInterface.Log ("Device: " + deviceAddress + " Characteristic Received: " + characteristic);
		String_t* L_8 = ___0_deviceAddress;
		String_t* L_9 = ___1_characteristic;
		String_t* L_10;
		L_10 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral95B70EA0EBEA74FB776F022984B7AB5D2D304AF7, L_8, _stringLiteral12F5EB18DE661BBE815BE7C12357AB74AFA912BC, L_9, NULL);
		BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C(L_10, NULL);
		// string byteString = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (byte b in bytes)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		V_2 = L_11;
		V_3 = 0;
		goto IL_0067;
	}

IL_0046:
	{
		// foreach (byte b in bytes)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		// byteString += string.Format ("{0:X2}", b);
		String_t* L_16 = V_1;
		uint8_t L_17 = V_4;
		uint8_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20;
		L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralDD638980A42773DBA4D111CE8D3979093BAC27E5, L_19, NULL);
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_16, L_20, NULL);
		V_1 = L_21;
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0067:
	{
		// foreach (byte b in bytes)
		int32_t L_23 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0046;
		}
	}
	{
		// BluetoothLEHardwareInterface.Log (byteString);
		String_t* L_25 = V_1;
		BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C(L_25, NULL);
		// if (DidUpdateCharacteristicValueAction != null && DidUpdateCharacteristicValueAction.ContainsKey (deviceAddress))
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_26 = __this->___DidUpdateCharacteristicValueAction_24;
		if (!L_26)
		{
			goto IL_00c4;
		}
	}
	{
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_27 = __this->___DidUpdateCharacteristicValueAction_24;
		String_t* L_28 = ___0_deviceAddress;
		NullCheck(L_27);
		bool L_29;
		L_29 = Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE(L_27, L_28, Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE_RuntimeMethod_var);
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		// var characteristicAction = DidUpdateCharacteristicValueAction[deviceAddress];
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_30 = __this->___DidUpdateCharacteristicValueAction_24;
		String_t* L_31 = ___0_deviceAddress;
		NullCheck(L_30);
		Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* L_32;
		L_32 = Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0(L_30, L_31, Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0_RuntimeMethod_var);
		V_5 = L_32;
		// characteristic = characteristic.ToLower ();
		String_t* L_33 = ___1_characteristic;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_33, NULL);
		___1_characteristic = L_34;
		// if (characteristicAction != null && characteristicAction.ContainsKey (characteristic))
		Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* L_35 = V_5;
		if (!L_35)
		{
			goto IL_00c4;
		}
	}
	{
		Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* L_36 = V_5;
		String_t* L_37 = ___1_characteristic;
		NullCheck(L_36);
		bool L_38;
		L_38 = Dictionary_2_ContainsKey_m4A499F6EAC71DC55F8B1A7DF3EA4AE5FCDFE83F1(L_36, L_37, Dictionary_2_ContainsKey_m4A499F6EAC71DC55F8B1A7DF3EA4AE5FCDFE83F1_RuntimeMethod_var);
		if (!L_38)
		{
			goto IL_00c4;
		}
	}
	{
		// var action = characteristicAction[characteristic];
		Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* L_39 = V_5;
		String_t* L_40 = ___1_characteristic;
		NullCheck(L_39);
		Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* L_41;
		L_41 = Dictionary_2_get_Item_mC10FD3398D9C91885BEE2ED01F03E6EA8F2458DF(L_39, L_40, Dictionary_2_get_Item_mC10FD3398D9C91885BEE2ED01F03E6EA8F2458DF_RuntimeMethod_var);
		V_6 = L_41;
		// if (action != null)
		Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* L_42 = V_6;
		if (!L_42)
		{
			goto IL_00c4;
		}
	}
	{
		// action (characteristic, bytes);
		Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* L_43 = V_6;
		String_t* L_44 = ___1_characteristic;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_0;
		NullCheck(L_43);
		Action_2_Invoke_m30A65A90206175F850BCF9448E5227069C5FC9CF_inline(L_43, L_44, L_45, NULL);
	}

IL_00c4:
	{
		// if (DidUpdateCharacteristicValueWithDeviceAddressAction != null && DidUpdateCharacteristicValueWithDeviceAddressAction.ContainsKey (deviceAddress))
		Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* L_46 = __this->___DidUpdateCharacteristicValueWithDeviceAddressAction_25;
		if (!L_46)
		{
			goto IL_0116;
		}
	}
	{
		Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* L_47 = __this->___DidUpdateCharacteristicValueWithDeviceAddressAction_25;
		String_t* L_48 = ___0_deviceAddress;
		NullCheck(L_47);
		bool L_49;
		L_49 = Dictionary_2_ContainsKey_m150AA8E90D327107E170A339453F8681CBC34FD0(L_47, L_48, Dictionary_2_ContainsKey_m150AA8E90D327107E170A339453F8681CBC34FD0_RuntimeMethod_var);
		if (!L_49)
		{
			goto IL_0116;
		}
	}
	{
		// var characteristicAction = DidUpdateCharacteristicValueWithDeviceAddressAction[deviceAddress];
		Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* L_50 = __this->___DidUpdateCharacteristicValueWithDeviceAddressAction_25;
		String_t* L_51 = ___0_deviceAddress;
		NullCheck(L_50);
		Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* L_52;
		L_52 = Dictionary_2_get_Item_mB9B806A3CA27CFDDB280FFBBD54F692165DB5DE2(L_50, L_51, Dictionary_2_get_Item_mB9B806A3CA27CFDDB280FFBBD54F692165DB5DE2_RuntimeMethod_var);
		V_7 = L_52;
		// characteristic = characteristic.ToLower ();
		String_t* L_53 = ___1_characteristic;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_53, NULL);
		___1_characteristic = L_54;
		// if (characteristicAction != null && characteristicAction.ContainsKey (characteristic))
		Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* L_55 = V_7;
		if (!L_55)
		{
			goto IL_0116;
		}
	}
	{
		Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* L_56 = V_7;
		String_t* L_57 = ___1_characteristic;
		NullCheck(L_56);
		bool L_58;
		L_58 = Dictionary_2_ContainsKey_m49883733B2BD00869A51867DF487463D793B72AE(L_56, L_57, Dictionary_2_ContainsKey_m49883733B2BD00869A51867DF487463D793B72AE_RuntimeMethod_var);
		if (!L_58)
		{
			goto IL_0116;
		}
	}
	{
		// var action = characteristicAction[characteristic];
		Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* L_59 = V_7;
		String_t* L_60 = ___1_characteristic;
		NullCheck(L_59);
		Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* L_61;
		L_61 = Dictionary_2_get_Item_m29D67E65079024F5C041D7F9AA960C3FB8C61727(L_59, L_60, Dictionary_2_get_Item_m29D67E65079024F5C041D7F9AA960C3FB8C61727_RuntimeMethod_var);
		V_8 = L_61;
		// if (action != null)
		Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* L_62 = V_8;
		if (!L_62)
		{
			goto IL_0116;
		}
	}
	{
		// action (deviceAddress, characteristic, bytes);
		Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* L_63 = V_8;
		String_t* L_64 = ___0_deviceAddress;
		String_t* L_65 = ___1_characteristic;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = V_0;
		NullCheck(L_63);
		Action_3_Invoke_m621E4DDF08B7AB38B686646F5E5821CBB4B85A14_inline(L_63, L_64, L_65, L_66, NULL);
	}

IL_0116:
	{
		// }
		return;
	}
}
// System.Void BluetoothDeviceScript::OnPeripheralData(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript_OnPeripheralData_mD3F92D2EA496B24CFB212E6D72E2C6BB0891CE96 (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, String_t* ___0_characteristic, String_t* ___1_base64Data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8A49BFAF7682C736E77C5743933C2176CF14A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD638980A42773DBA4D111CE8D3979093BAC27E5);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	String_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		// if (base64Data != null)
		String_t* L_0 = ___1_base64Data;
		if (!L_0)
		{
			goto IL_006c;
		}
	}
	{
		// byte[] bytes = System.Convert.FromBase64String (base64Data);
		String_t* L_1 = ___1_base64Data;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_1, NULL);
		V_0 = L_2;
		// if (bytes.Length > 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_006c;
		}
	}
	{
		// BluetoothLEHardwareInterface.Log ("Peripheral Received: " + characteristic);
		String_t* L_4 = ___0_characteristic;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC8A49BFAF7682C736E77C5743933C2176CF14A7B, L_4, NULL);
		BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C(L_5, NULL);
		// string byteString = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (byte b in bytes)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		V_2 = L_6;
		V_3 = 0;
		goto IL_004b;
	}

IL_002a:
	{
		// foreach (byte b in bytes)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		// byteString += string.Format ("{0:X2}", b);
		String_t* L_11 = V_1;
		uint8_t L_12 = V_4;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralDD638980A42773DBA4D111CE8D3979093BAC27E5, L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, L_15, NULL);
		V_1 = L_16;
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004b:
	{
		// foreach (byte b in bytes)
		int32_t L_18 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_2;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_002a;
		}
	}
	{
		// BluetoothLEHardwareInterface.Log (byteString);
		String_t* L_20 = V_1;
		BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C(L_20, NULL);
		// if (PeripheralReceivedWriteDataAction != null)
		Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* L_21 = __this->___PeripheralReceivedWriteDataAction_15;
		if (!L_21)
		{
			goto IL_006c;
		}
	}
	{
		// PeripheralReceivedWriteDataAction (characteristic, bytes);
		Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* L_22 = __this->___PeripheralReceivedWriteDataAction_15;
		String_t* L_23 = ___0_characteristic;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_0;
		NullCheck(L_22);
		Action_2_Invoke_m30A65A90206175F850BCF9448E5227069C5FC9CF_inline(L_22, L_23, L_24, NULL);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void BluetoothDeviceScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript__ctor_m5F849731E2A15C2B4581BAD3E9F949809793E373 (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, const RuntimeMethod* method) 
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
// System.Void BluetoothLEHardwareInterface::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05D2E6578A5F41F60C3ECFF08D58657840D97CEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEA4EFD8C5923AB08A7202313FFB01FD1341FD4B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_004c;
		}
	}
	{
		// if (_android == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		// AndroidJavaClass javaClass = new AndroidJavaClass ("com.shatalmic.unityandroidbluetoothlelib.UnityBluetoothLE");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteralFEA4EFD8C5923AB08A7202313FFB01FD1341FD4B, NULL);
		// _android = javaClass.CallStatic<AndroidJavaObject> ("getInstance");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_2, _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E, L_3, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0), (void*)L_4);
	}

IL_002c:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// _android.Call ("androidBluetoothLog", message);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		String_t* L_9 = ___0_message;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		NullCheck(L_6);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_6, _stringLiteral05D2E6578A5F41F60C3ECFF08D58657840D97CEC, L_8, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// BluetoothDeviceScript BluetoothLEHardwareInterface::Initialize(System.Boolean,System.Boolean,System.Action,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* BluetoothLEHardwareInterface_Initialize_mA92A2A5B42B9600E6D47BAF07546866F8833B1BC (bool ___0_asCentral, bool ___1_asPeripheral, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_action, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___3_errorAction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDF56051C4B061E3956A03F35FC9F34BEB3280610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDBD85FE90312A38DA98B298A2B6052631AE960F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22CA8A8DED4214E6F20217D70C471C5D80B2E4B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E6C187CE8C95892E54F2CD863F499C9AE973987);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB291071F866E890E2ACF69DE89CBBA36BD00B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEA4EFD8C5923AB08A7202313FFB01FD1341FD4B);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// bluetoothDeviceScript = null;
		((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1 = (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1), (void*)(BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39*)NULL);
		// if (!Permission.HasUserAuthorizedPermission (Permission.FineLocation))
		bool L_0;
		L_0 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// Permission.RequestUserPermission (Permission.FineLocation);
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
	}

IL_001c:
	{
		// GameObject bluetoothLEReceiver = GameObject.Find("BluetoothLEReceiver");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral9EB291071F866E890E2ACF69DE89CBBA36BD00B8, NULL);
		V_0 = L_1;
		// if (bluetoothLEReceiver == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// bluetoothLEReceiver = new GameObject ("BluetoothLEReceiver");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, _stringLiteral9EB291071F866E890E2ACF69DE89CBBA36BD00B8, NULL);
		V_0 = L_4;
	}

IL_003b:
	{
		// if (bluetoothLEReceiver != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_008a;
		}
	}
	{
		// bluetoothDeviceScript = bluetoothLEReceiver.GetComponent<BluetoothDeviceScript> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_8;
		L_8 = GameObject_GetComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDBD85FE90312A38DA98B298A2B6052631AE960F6(L_7, GameObject_GetComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDBD85FE90312A38DA98B298A2B6052631AE960F6_RuntimeMethod_var);
		((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1), (void*)L_8);
		// if (bluetoothDeviceScript == null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_9 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		// bluetoothDeviceScript = bluetoothLEReceiver.AddComponent<BluetoothDeviceScript> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		NullCheck(L_11);
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_12;
		L_12 = GameObject_AddComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDF56051C4B061E3956A03F35FC9F34BEB3280610(L_11, GameObject_AddComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDF56051C4B061E3956A03F35FC9F34BEB3280610_RuntimeMethod_var);
		((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1), (void*)L_12);
	}

IL_0067:
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_13 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_008a;
		}
	}
	{
		// bluetoothDeviceScript.InitializedAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_15 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = ___2_action;
		NullCheck(L_15);
		L_15->___InitializedAction_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___InitializedAction_5), (void*)L_16);
		// bluetoothDeviceScript.ErrorAction = errorAction;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_17 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_18 = ___3_errorAction;
		NullCheck(L_17);
		L_17->___ErrorAction_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___ErrorAction_7), (void*)L_18);
	}

IL_008a:
	{
		// GameObject.DontDestroyOnLoad (bluetoothLEReceiver);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_19, NULL);
		// if (Application.isEditor)
		bool L_20;
		L_20 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_20)
		{
			goto IL_00ba;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_21 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_010d;
		}
	}
	{
		// bluetoothDeviceScript.SendMessage ("OnBluetoothMessage", "Initialized");
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_23 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_23);
		Component_SendMessage_mA1D80D8BB7836EADB7799CAE71F10710298F4CDB(L_23, _stringLiteral22CA8A8DED4214E6F20217D70C471C5D80B2E4B6, _stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680, NULL);
		goto IL_010d;
	}

IL_00ba:
	{
		// if (_android == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_24 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (L_24)
		{
			goto IL_00df;
		}
	}
	{
		// AndroidJavaClass javaClass = new AndroidJavaClass ("com.shatalmic.unityandroidbluetoothlelib.UnityBluetoothLE");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_25 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_25, _stringLiteralFEA4EFD8C5923AB08A7202313FFB01FD1341FD4B, NULL);
		// _android = javaClass.CallStatic<AndroidJavaObject> ("getInstance");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26;
		L_26 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_25);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_27;
		L_27 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_25, _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E, L_26, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0), (void*)L_27);
	}

IL_00df:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_28 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_28)
		{
			goto IL_010d;
		}
	}
	{
		// _android.Call ("androidBluetoothInitialize", asCentral, asPeripheral);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_30;
		bool L_32 = ___0_asCentral;
		bool L_33 = L_32;
		RuntimeObject* L_34 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_31;
		bool L_36 = ___1_asPeripheral;
		bool L_37 = L_36;
		RuntimeObject* L_38 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_37);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_38);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_38);
		NullCheck(L_29);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_29, _stringLiteral2E6C187CE8C95892E54F2CD863F499C9AE973987, L_35, NULL);
	}

IL_010d:
	{
		// return bluetoothDeviceScript;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_39 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		return L_39;
	}
}
// System.Void BluetoothLEHardwareInterface::DeInitialize(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_DeInitialize_mC8D5EF749C3A33EB57EC1D9F117A29CFD5C08E26 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22CA8A8DED4214E6F20217D70C471C5D80B2E4B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD09911E67FD5FEB05E00F59FC6478619944228A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_0 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// bluetoothDeviceScript.DeinitializedAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_action;
		NullCheck(L_2);
		L_2->___DeinitializedAction_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___DeinitializedAction_6), (void*)L_3);
	}

IL_0018:
	{
		// if (Application.isEditor)
		bool L_4;
		L_4 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		// bluetoothDeviceScript.SendMessage ("OnBluetoothMessage", "DeInitialized");
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_7 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_7);
		Component_SendMessage_mA1D80D8BB7836EADB7799CAE71F10710298F4CDB(L_7, _stringLiteral22CA8A8DED4214E6F20217D70C471C5D80B2E4B6, _stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415, NULL);
		return;
	}

IL_0041:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		// _android.Call ("androidBluetoothDeInitialize");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_9);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_9, _stringLiteralD09911E67FD5FEB05E00F59FC6478619944228A1, L_10, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::FinishDeInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_FinishDeInitialize_mCD58E7714A2B02A58509481FCB4473FCE93052B2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB291071F866E890E2ACF69DE89CBBA36BD00B8);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject bluetoothLEReceiver = GameObject.Find("BluetoothLEReceiver");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral9EB291071F866E890E2ACF69DE89CBBA36BD00B8, NULL);
		V_0 = L_0;
		// if (bluetoothLEReceiver != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// GameObject.Destroy(bluetoothLEReceiver);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::BluetoothEnable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_BluetoothEnable_m642C4C0AB450EDA4DF2C2A1572D99FC132FF013E (bool ___0_enable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE83D121033127368F074E967D2902DA668AF244);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// _android.Call ("androidBluetoothEnable", enable);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		bool L_5 = ___0_enable;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteralFE83D121033127368F074E967D2902DA668AF244, L_4, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::BluetoothScanMode(BluetoothLEHardwareInterface/ScanMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_BluetoothScanMode_m2B3C1610A60FFBB7FBE187D3132FEB14C8CD3435 (int32_t ___0_scanMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CD8A767CD513A553A19E4287FDCB3028089E589);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// _android.Call ("androidBluetoothScanMode", (int)scanMode);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___0_scanMode;
		int32_t L_6 = ((int32_t)L_5);
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral7CD8A767CD513A553A19E4287FDCB3028089E589, L_4, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::BluetoothConnectionPriority(BluetoothLEHardwareInterface/ConnectionPriority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_BluetoothConnectionPriority_m4313E47BCDE22920D24D66532D194F82B896249B (int32_t ___0_connectionPriority, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFE25B3302C823126233E5C675383881A1336C69);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// _android.Call ("androidBluetoothConnectionPriority", (int)connectionPriority);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___0_connectionPriority;
		int32_t L_6 = ((int32_t)L_5);
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteralCFE25B3302C823126233E5C675383881A1336C69, L_4, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::PauseMessages(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_PauseMessages_m893401EDE519BF398C1CF491280B946898EEDFE2 (bool ___0_isPaused, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B7082D0DE1E91A1818FF843E95415325B60DF7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// _android.Call ("androidBluetoothPause", isPaused);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		bool L_5 = ___0_isPaused;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral77B7082D0DE1E91A1818FF843E95415325B60DF7, L_4, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::ScanForBeacons(System.String[],System.Action`1<BluetoothLEHardwareInterface/iBeaconData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_ScanForBeacons_mBB4B0AE4C9544CC587A73388B5D51A5FAE0E1350 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_proximityUUIDs, Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE* ___1_actionBeaconResponse, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral721E61EBBD4F8CA1436660B62CC09173BE14C737);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// if (proximityUUIDs != null && proximityUUIDs.Length >= 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_proximityUUIDs;
		if (!L_0)
		{
			goto IL_008b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_proximityUUIDs;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) < ((int32_t)0)))
		{
			goto IL_008b;
		}
	}
	{
		// if (!Application.isEditor)
		bool L_2;
		L_2 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_2)
		{
			goto IL_008b;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_3 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// bluetoothDeviceScript.DiscoveredBeaconAction = actionBeaconResponse;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE* L_6 = ___1_actionBeaconResponse;
		NullCheck(L_5);
		L_5->___DiscoveredBeaconAction_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___DiscoveredBeaconAction_13), (void*)L_6);
	}

IL_002b:
	{
		// string proximityUUIDsString = null;
		V_0 = (String_t*)NULL;
		// if (proximityUUIDs != null && proximityUUIDs.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ___0_proximityUUIDs;
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ___0_proximityUUIDs;
		NullCheck(L_8);
		if (!(((RuntimeArray*)L_8)->max_length))
		{
			goto IL_006b;
		}
	}
	{
		// proximityUUIDsString = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (string proximityUUID in proximityUUIDs)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = ___0_proximityUUIDs;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0055;
	}

IL_0040:
	{
		// foreach (string proximityUUID in proximityUUIDs)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		// proximityUUIDsString += proximityUUID + "|";
		String_t* L_14 = V_0;
		String_t* L_15 = V_3;
		String_t* L_16;
		L_16 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_14, L_15, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
		V_0 = L_16;
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0055:
	{
		// foreach (string proximityUUID in proximityUUIDs)
		int32_t L_18 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_1;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0040;
		}
	}
	{
		// proximityUUIDsString = proximityUUIDsString.Substring (0, proximityUUIDsString.Length - 1);
		String_t* L_20 = V_0;
		String_t* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_21, NULL);
		NullCheck(L_20);
		String_t* L_23;
		L_23 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_20, 0, ((int32_t)il2cpp_codegen_subtract(L_22, 1)), NULL);
		V_0 = L_23;
	}

IL_006b:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_24 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_24)
		{
			goto IL_008b;
		}
	}
	{
		// _android.Call ("androidBluetoothScanForBeacons", proximityUUIDsString);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_26;
		String_t* L_28 = V_0;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_28);
		NullCheck(L_25);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_25, _stringLiteral721E61EBBD4F8CA1436660B62CC09173BE14C737, L_27, NULL);
	}

IL_008b:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::RequestMtu(System.String,System.Int32,System.Action`2<System.String,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_RequestMtu_m55686803AADDC8891BAF3067D7B5998A707A16B3 (String_t* ___0_name, int32_t ___1_mtu, Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB12AB8A7159B5C4CCA79DCA0DF51FD5B92B4D36);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_0 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// bluetoothDeviceScript.RequestMtuAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF* L_3 = ___2_action;
		NullCheck(L_2);
		L_2->___RequestMtuAction_26 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___RequestMtuAction_26), (void*)L_3);
	}

IL_0018:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// _android.Call ("androidBluetoothRequestMtu", name, mtu);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		String_t* L_8 = ___0_name;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		int32_t L_10 = ___1_mtu;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		NullCheck(L_5);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_5, _stringLiteralCB12AB8A7159B5C4CCA79DCA0DF51FD5B92B4D36, L_9, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::ScanForPeripheralsWithServices(System.String[],System.Action`2<System.String,System.String>,System.Action`4<System.String,System.String,System.Int32,System.Byte[]>,System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_ScanForPeripheralsWithServices_m839B5A585CB3DD72E63DE044729E22C8B963A58A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_serviceUUIDs, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___1_action, Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* ___2_actionAdvertisingInfo, bool ___3_rssiOnly, bool ___4_clearPeripheralList, int32_t ___5_recordType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7494958ED61CC458AAF2A8181F822D26307BDA4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_00c4;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		// bluetoothDeviceScript.DiscoveredPeripheralAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_3 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_4 = ___1_action;
		NullCheck(L_3);
		L_3->___DiscoveredPeripheralAction_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___DiscoveredPeripheralAction_11), (void*)L_4);
		// bluetoothDeviceScript.DiscoveredPeripheralWithAdvertisingInfoAction = actionAdvertisingInfo;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* L_6 = ___2_actionAdvertisingInfo;
		NullCheck(L_5);
		L_5->___DiscoveredPeripheralWithAdvertisingInfoAction_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___DiscoveredPeripheralWithAdvertisingInfoAction_12), (void*)L_6);
		// if (bluetoothDeviceScript.DiscoveredDeviceList != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_7 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_7);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = L_7->___DiscoveredDeviceList_4;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		// bluetoothDeviceScript.DiscoveredDeviceList.Clear ();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_9 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_9);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = L_9->___DiscoveredDeviceList_4;
		NullCheck(L_10);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_10, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
	}

IL_0048:
	{
		// string serviceUUIDsString = null;
		V_0 = (String_t*)NULL;
		// if (serviceUUIDs != null && serviceUUIDs.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ___0_serviceUUIDs;
		if (!L_11)
		{
			goto IL_0088;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ___0_serviceUUIDs;
		NullCheck(L_12);
		if (!(((RuntimeArray*)L_12)->max_length))
		{
			goto IL_0088;
		}
	}
	{
		// serviceUUIDsString = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (string serviceUUID in serviceUUIDs)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ___0_serviceUUIDs;
		V_1 = L_13;
		V_2 = 0;
		goto IL_0072;
	}

IL_005d:
	{
		// foreach (string serviceUUID in serviceUUIDs)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = L_17;
		// serviceUUIDsString += serviceUUID + "|";
		String_t* L_18 = V_0;
		String_t* L_19 = V_3;
		String_t* L_20;
		L_20 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_18, L_19, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
		V_0 = L_20;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0072:
	{
		// foreach (string serviceUUID in serviceUUIDs)
		int32_t L_22 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_1;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_005d;
		}
	}
	{
		// serviceUUIDsString = serviceUUIDsString.Substring (0, serviceUUIDsString.Length - 1);
		String_t* L_24 = V_0;
		String_t* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_25, NULL);
		NullCheck(L_24);
		String_t* L_27;
		L_27 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_24, 0, ((int32_t)il2cpp_codegen_subtract(L_26, 1)), NULL);
		V_0 = L_27;
	}

IL_0088:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_28 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_28)
		{
			goto IL_00c4;
		}
	}
	{
		// if (serviceUUIDsString == null)
		String_t* L_29 = V_0;
		if (L_29)
		{
			goto IL_0098;
		}
	}
	{
		// serviceUUIDsString = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0098:
	{
		// _android.Call ("androidBluetoothScanForPeripheralsWithServices", serviceUUIDsString, rssiOnly, recordType);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_30 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_31;
		String_t* L_33 = V_0;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_33);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_32;
		bool L_35 = ___3_rssiOnly;
		bool L_36 = L_35;
		RuntimeObject* L_37 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_37);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_34;
		int32_t L_39 = ___5_recordType;
		int32_t L_40 = L_39;
		RuntimeObject* L_41 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_41);
		NullCheck(L_30);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_30, _stringLiteral7494958ED61CC458AAF2A8181F822D26307BDA4F, L_38, NULL);
	}

IL_00c4:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::RetrieveListOfPeripheralsWithServices(System.String[],System.Action`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_RetrieveListOfPeripheralsWithServices_m7F08EFA9A62FC31CB7548EA978B266015ED9C7CD (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_serviceUUIDs, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___1_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72A69F0AE5A075DEB144C96D24A7FCC85D6D4636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* G_B7_0 = NULL;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_009b;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// bluetoothDeviceScript.RetrievedConnectedPeripheralAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_3 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_4 = ___1_action;
		NullCheck(L_3);
		L_3->___RetrievedConnectedPeripheralAction_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___RetrievedConnectedPeripheralAction_14), (void*)L_4);
		// if (bluetoothDeviceScript.DiscoveredDeviceList != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_5);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = L_5->___DiscoveredDeviceList_4;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// bluetoothDeviceScript.DiscoveredDeviceList.Clear ();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_7 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_7);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = L_7->___DiscoveredDeviceList_4;
		NullCheck(L_8);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_8, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
	}

IL_003d:
	{
		// string serviceUUIDsString = serviceUUIDs.Length > 0 ? "" : null;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = ___0_serviceUUIDs;
		NullCheck(L_9);
		if ((((RuntimeArray*)L_9)->max_length))
		{
			goto IL_0044;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		goto IL_0049;
	}

IL_0044:
	{
		G_B7_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0049:
	{
		V_0 = G_B7_0;
		// foreach (string serviceUUID in serviceUUIDs)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___0_serviceUUIDs;
		V_1 = L_10;
		V_2 = 0;
		goto IL_0065;
	}

IL_0050:
	{
		// foreach (string serviceUUID in serviceUUIDs)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = L_14;
		// serviceUUIDsString += serviceUUID + "|";
		String_t* L_15 = V_0;
		String_t* L_16 = V_3;
		String_t* L_17;
		L_17 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_15, L_16, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
		V_0 = L_17;
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0065:
	{
		// foreach (string serviceUUID in serviceUUIDs)
		int32_t L_19 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_1;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		// serviceUUIDsString = serviceUUIDsString.Substring (0, serviceUUIDsString.Length - 1);
		String_t* L_21 = V_0;
		String_t* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_22, NULL);
		NullCheck(L_21);
		String_t* L_24;
		L_24 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_21, 0, ((int32_t)il2cpp_codegen_subtract(L_23, 1)), NULL);
		V_0 = L_24;
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_25)
		{
			goto IL_009b;
		}
	}
	{
		// _android.Call ("androidBluetoothRetrieveListOfPeripheralsWithServices", serviceUUIDsString);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_26 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_27;
		String_t* L_29 = V_0;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_29);
		NullCheck(L_26);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_26, _stringLiteral72A69F0AE5A075DEB144C96D24A7FCC85D6D4636, L_28, NULL);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::StopScan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_StopScan_m4602E0531C54F5200D0D9B77D51A036346733790 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F63233D482743220D006469E8B194A3D4907233);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// _android.Call ("androidBluetoothStopScan");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral8F63233D482743220D006469E8B194A3D4907233, L_3, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::StopBeaconScan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_StopBeaconScan_m1A99CFE67CF1E388DB30E1C626F5D4325CE06811 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB2C0C85E7F287846F6BEB16B40A3D74AEC7930B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// _android.Call ("androidBluetoothStopBeaconScan");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteralAB2C0C85E7F287846F6BEB16B40A3D74AEC7930B, L_3, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::DisconnectAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_DisconnectAll_m6868EBDD9629CC9E48881CD880975B8E63A6114D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral482DF6018AEE5C9B3F891A4AC6C2F466CE1CB669);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// _android.Call ("androidBluetoothDisconnectAll");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral482DF6018AEE5C9B3F891A4AC6C2F466CE1CB669, L_3, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::ConnectToPeripheral(System.String,System.Action`1<System.String>,System.Action`2<System.String,System.String>,System.Action`3<System.String,System.String,System.String>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_ConnectToPeripheral_mE35EE0AFC837FFACD849B7E27892FB8A1319F85F (String_t* ___0_name, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_connectAction, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___2_serviceAction, Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* ___3_characteristicAction, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___4_disconnectAction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE14640A5F2B26B4DD99B692E7BAD32F71D93BB1C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_0061;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// bluetoothDeviceScript.ConnectedPeripheralAction = connectAction;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_3 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = ___1_connectAction;
		NullCheck(L_3);
		L_3->___ConnectedPeripheralAction_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___ConnectedPeripheralAction_16), (void*)L_4);
		// bluetoothDeviceScript.DiscoveredServiceAction = serviceAction;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_6 = ___2_serviceAction;
		NullCheck(L_5);
		L_5->___DiscoveredServiceAction_19 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___DiscoveredServiceAction_19), (void*)L_6);
		// bluetoothDeviceScript.DiscoveredCharacteristicAction = characteristicAction;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_7 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* L_8 = ___3_characteristicAction;
		NullCheck(L_7);
		L_7->___DiscoveredCharacteristicAction_20 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___DiscoveredCharacteristicAction_20), (void*)L_8);
		// bluetoothDeviceScript.ConnectedDisconnectPeripheralAction = disconnectAction;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_9 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = ___4_disconnectAction;
		NullCheck(L_9);
		L_9->___ConnectedDisconnectPeripheralAction_17 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___ConnectedDisconnectPeripheralAction_17), (void*)L_10);
	}

IL_0041:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		// _android.Call ("androidBluetoothConnectToPeripheral", name);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		String_t* L_15 = ___0_name;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		NullCheck(L_12);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_12, _stringLiteralE14640A5F2B26B4DD99B692E7BAD32F71D93BB1C, L_14, NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::DisconnectPeripheral(System.String,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_DisconnectPeripheral_mAC496C425CAB6DC6B6F8C0DC67DED1A6AF721E8B (String_t* ___0_name, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF01338260378F35334542BDEDFB82698311AEB1A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_003f;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// bluetoothDeviceScript.DisconnectedPeripheralAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_3 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = ___1_action;
		NullCheck(L_3);
		L_3->___DisconnectedPeripheralAction_18 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___DisconnectedPeripheralAction_18), (void*)L_4);
	}

IL_001f:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// _android.Call ("androidBluetoothDisconnectPeripheral", name);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		String_t* L_9 = ___0_name;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		NullCheck(L_6);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_6, _stringLiteralF01338260378F35334542BDEDFB82698311AEB1A, L_8, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::ReadCharacteristic(System.String,System.String,System.String,System.Action`2<System.String,System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_ReadCharacteristic_m2C8C83D3DA3EB39CDE322DBBBA881F59454371BC (String_t* ___0_name, String_t* ___1_service, String_t* ___2_characteristic, Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* ___3_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m33F7CC3A700785AE5317A03FF6119F01AB8C3CAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5BC0806F55FF11B11C0CCA09E2B62F1F225721B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9801DB6B846090C50887E169823DB1E40E078476_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D08F1FBA56C60FB5E0AE2C07BA1B0B4266A80A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_0084;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_005c;
		}
	}
	{
		// if (!bluetoothDeviceScript.DidUpdateCharacteristicValueAction.ContainsKey (name))
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_3 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_3);
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_4 = L_3->___DidUpdateCharacteristicValueAction_24;
		String_t* L_5 = ___0_name;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE(L_4, L_5, Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_003b;
		}
	}
	{
		// bluetoothDeviceScript.DidUpdateCharacteristicValueAction[name] = new Dictionary<string, Action<string, byte[]>>();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_7 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_7);
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_8 = L_7->___DidUpdateCharacteristicValueAction_24;
		String_t* L_9 = ___0_name;
		Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* L_10 = (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8*)il2cpp_codegen_object_new(Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Dictionary_2__ctor_m33F7CC3A700785AE5317A03FF6119F01AB8C3CAD(L_10, Dictionary_2__ctor_m33F7CC3A700785AE5317A03FF6119F01AB8C3CAD_RuntimeMethod_var);
		NullCheck(L_8);
		Dictionary_2_set_Item_m9801DB6B846090C50887E169823DB1E40E078476(L_8, L_9, L_10, Dictionary_2_set_Item_m9801DB6B846090C50887E169823DB1E40E078476_RuntimeMethod_var);
	}

IL_003b:
	{
		// bluetoothDeviceScript.DidUpdateCharacteristicValueAction [name] [FullUUID (characteristic).ToLower ()] = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_11 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_11);
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_12 = L_11->___DidUpdateCharacteristicValueAction_24;
		String_t* L_13 = ___0_name;
		NullCheck(L_12);
		Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* L_14;
		L_14 = Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0(L_12, L_13, Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0_RuntimeMethod_var);
		String_t* L_15 = ___2_characteristic;
		String_t* L_16;
		L_16 = BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59(L_15, NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_16, NULL);
		Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* L_18 = ___3_action;
		NullCheck(L_14);
		Dictionary_2_set_Item_m5BC0806F55FF11B11C0CCA09E2B62F1F225721B2(L_14, L_17, L_18, Dictionary_2_set_Item_m5BC0806F55FF11B11C0CCA09E2B62F1F225721B2_RuntimeMethod_var);
	}

IL_005c:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		// _android.Call ("androidReadCharacteristic", name, service, characteristic);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_21;
		String_t* L_23 = ___0_name;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_22;
		String_t* L_25 = ___1_service;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_24;
		String_t* L_27 = ___2_characteristic;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_27);
		NullCheck(L_20);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_20, _stringLiteral6D08F1FBA56C60FB5E0AE2C07BA1B0B4266A80A4, L_26, NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::WriteCharacteristic(System.String,System.String,System.String,System.Byte[],System.Int32,System.Boolean,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_WriteCharacteristic_m1DEC13604979F8EF567F96F6CC9084BE4B2C993A (String_t* ___0_name, String_t* ___1_service, String_t* ___2_characteristic, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_data, int32_t ___4_length, bool ___5_withResponse, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___6_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AD8A5107F45DF80AE654B0B6BE32A60612460AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_0060;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// bluetoothDeviceScript.DidWriteCharacteristicAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_3 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = ___6_action;
		NullCheck(L_3);
		L_3->___DidWriteCharacteristicAction_21 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___DidWriteCharacteristicAction_21), (void*)L_4);
	}

IL_0020:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_5)
		{
			goto IL_0060;
		}
	}
	{
		// _android.Call ("androidWriteCharacteristic", name, service, characteristic, data, length, withResponse);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		String_t* L_9 = ___0_name;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		String_t* L_11 = ___1_service;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		String_t* L_13 = ___2_characteristic;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___3_data;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_14;
		int32_t L_17 = ___4_length;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		bool L_21 = ___5_withResponse;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_23);
		NullCheck(L_6);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_6, _stringLiteral9AD8A5107F45DF80AE654B0B6BE32A60612460AF, L_20, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::SubscribeCharacteristic(System.String,System.String,System.String,System.Action`1<System.String>,System.Action`2<System.String,System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_SubscribeCharacteristic_m06836BAAEE65AB179C2664576F8FE4B2D6318546 (String_t* ___0_name, String_t* ___1_service, String_t* ___2_characteristic, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___3_notificationAction, Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* ___4_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m33F7CC3A700785AE5317A03FF6119F01AB8C3CAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5BC0806F55FF11B11C0CCA09E2B62F1F225721B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9801DB6B846090C50887E169823DB1E40E078476_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFF7B7A251CAD78185C2595FC73B8AE0181C64D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_00eb;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_00c3;
		}
	}
	{
		// name = name.ToUpper ();
		String_t* L_3 = ___0_name;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_3, NULL);
		___0_name = L_4;
		// service = service.ToUpper ();
		String_t* L_5 = ___1_service;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_5, NULL);
		___1_service = L_6;
		// characteristic = characteristic.ToUpper ();
		String_t* L_7 = ___2_characteristic;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_7, NULL);
		___2_characteristic = L_8;
		// if (!bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction.ContainsKey (name))
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_9 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_9);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_10 = L_9->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_11 = ___0_name;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F(L_10, L_11, Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction [name] = new Dictionary<string, Action<string>> ();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_13 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_13);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_14 = L_13->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_15 = ___0_name;
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_16 = (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*)il2cpp_codegen_object_new(Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2(L_16, Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2_RuntimeMethod_var);
		NullCheck(L_14);
		Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706(L_14, L_15, L_16, Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706_RuntimeMethod_var);
	}

IL_0059:
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction [name] [FullUUID (characteristic).ToLower ()] = notificationAction;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_17 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_17);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_18 = L_17->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_19 = ___0_name;
		NullCheck(L_18);
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_20;
		L_20 = Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61(L_18, L_19, Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var);
		String_t* L_21 = ___2_characteristic;
		String_t* L_22;
		L_22 = BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59(L_21, NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_22, NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_24 = ___3_notificationAction;
		NullCheck(L_20);
		Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189(L_20, L_23, L_24, Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var);
		// if (!bluetoothDeviceScript.DidUpdateCharacteristicValueAction.ContainsKey (name))
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_25 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_25);
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_26 = L_25->___DidUpdateCharacteristicValueAction_24;
		String_t* L_27 = ___0_name;
		NullCheck(L_26);
		bool L_28;
		L_28 = Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE(L_26, L_27, Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE_RuntimeMethod_var);
		if (L_28)
		{
			goto IL_00a1;
		}
	}
	{
		// bluetoothDeviceScript.DidUpdateCharacteristicValueAction [name] = new Dictionary<string, Action<string, byte[]>> ();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_29 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_29);
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_30 = L_29->___DidUpdateCharacteristicValueAction_24;
		String_t* L_31 = ___0_name;
		Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* L_32 = (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8*)il2cpp_codegen_object_new(Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Dictionary_2__ctor_m33F7CC3A700785AE5317A03FF6119F01AB8C3CAD(L_32, Dictionary_2__ctor_m33F7CC3A700785AE5317A03FF6119F01AB8C3CAD_RuntimeMethod_var);
		NullCheck(L_30);
		Dictionary_2_set_Item_m9801DB6B846090C50887E169823DB1E40E078476(L_30, L_31, L_32, Dictionary_2_set_Item_m9801DB6B846090C50887E169823DB1E40E078476_RuntimeMethod_var);
	}

IL_00a1:
	{
		// bluetoothDeviceScript.DidUpdateCharacteristicValueAction [name] [FullUUID (characteristic).ToLower ()] = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_33 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_33);
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_34 = L_33->___DidUpdateCharacteristicValueAction_24;
		String_t* L_35 = ___0_name;
		NullCheck(L_34);
		Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* L_36;
		L_36 = Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0(L_34, L_35, Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0_RuntimeMethod_var);
		String_t* L_37 = ___2_characteristic;
		String_t* L_38;
		L_38 = BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59(L_37, NULL);
		NullCheck(L_38);
		String_t* L_39;
		L_39 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_38, NULL);
		Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* L_40 = ___4_action;
		NullCheck(L_36);
		Dictionary_2_set_Item_m5BC0806F55FF11B11C0CCA09E2B62F1F225721B2(L_36, L_39, L_40, Dictionary_2_set_Item_m5BC0806F55FF11B11C0CCA09E2B62F1F225721B2_RuntimeMethod_var);
	}

IL_00c3:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_41 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_41)
		{
			goto IL_00eb;
		}
	}
	{
		// _android.Call ("androidSubscribeCharacteristic", name, service, characteristic);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_42 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = L_43;
		String_t* L_45 = ___0_name;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_45);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = L_44;
		String_t* L_47 = ___1_service;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_47);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = L_46;
		String_t* L_49 = ___2_characteristic;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_49);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_49);
		NullCheck(L_42);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_42, _stringLiteralDFF7B7A251CAD78185C2595FC73B8AE0181C64D3, L_48, NULL);
	}

IL_00eb:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::SubscribeCharacteristicWithDeviceAddress(System.String,System.String,System.String,System.Action`2<System.String,System.String>,System.Action`3<System.String,System.String,System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_SubscribeCharacteristicWithDeviceAddress_m0AEEB1262BD23772ED50C50D8DC981590AD937B4 (String_t* ___0_name, String_t* ___1_service, String_t* ___2_characteristic, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___3_notificationAction, Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* ___4_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m150AA8E90D327107E170A339453F8681CBC34FD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m567D53C6E9424E1769E746B2F2F7CB666BD28746_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA41215374A14C39327A0F3E564767C0E5F736E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB9B806A3CA27CFDDB280FFBBD54F692165DB5DE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m317D3193C4CC26B216C7316AA83011B747927A26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5C248D01E5A71B59F3D041ECB2766EF9A97F4E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC95C71C51EBCC5FB69D800D28A4DA517C27A77E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD7531E55E7078F3CA3DB2492418BEADF7229D468_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFF7B7A251CAD78185C2595FC73B8AE0181C64D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_0133;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_010b;
		}
	}
	{
		// name = name.ToUpper ();
		String_t* L_3 = ___0_name;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_3, NULL);
		___0_name = L_4;
		// service = service.ToUpper ();
		String_t* L_5 = ___1_service;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_5, NULL);
		___1_service = L_6;
		// characteristic = characteristic.ToUpper ();
		String_t* L_7 = ___2_characteristic;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_7, NULL);
		___2_characteristic = L_8;
		// if (!bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction.ContainsKey (name))
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_9 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_9);
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_10 = L_9->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		String_t* L_11 = ___0_name;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23(L_10, L_11, Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction[name] = new Dictionary<string, Action<string, string>>();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_13 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_13);
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_14 = L_13->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		String_t* L_15 = ___0_name;
		Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* L_16 = (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6*)il2cpp_codegen_object_new(Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Dictionary_2__ctor_mA41215374A14C39327A0F3E564767C0E5F736E11(L_16, Dictionary_2__ctor_mA41215374A14C39327A0F3E564767C0E5F736E11_RuntimeMethod_var);
		NullCheck(L_14);
		Dictionary_2_set_Item_mC95C71C51EBCC5FB69D800D28A4DA517C27A77E7(L_14, L_15, L_16, Dictionary_2_set_Item_mC95C71C51EBCC5FB69D800D28A4DA517C27A77E7_RuntimeMethod_var);
	}

IL_0059:
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction[name][FullUUID (characteristic).ToLower ()] = notificationAction;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_17 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_17);
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_18 = L_17->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		String_t* L_19 = ___0_name;
		NullCheck(L_18);
		Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* L_20;
		L_20 = Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF(L_18, L_19, Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF_RuntimeMethod_var);
		String_t* L_21 = ___2_characteristic;
		String_t* L_22;
		L_22 = BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59(L_21, NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_22, NULL);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_24 = ___3_notificationAction;
		NullCheck(L_20);
		Dictionary_2_set_Item_m5C248D01E5A71B59F3D041ECB2766EF9A97F4E87(L_20, L_23, L_24, Dictionary_2_set_Item_m5C248D01E5A71B59F3D041ECB2766EF9A97F4E87_RuntimeMethod_var);
		// if (!bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction.ContainsKey(name))
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_25 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_25);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_26 = L_25->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_27 = ___0_name;
		NullCheck(L_26);
		bool L_28;
		L_28 = Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F(L_26, L_27, Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var);
		if (L_28)
		{
			goto IL_00a1;
		}
	}
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction[name] = new Dictionary<string, Action<string>>();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_29 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_29);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_30 = L_29->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_31 = ___0_name;
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_32 = (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*)il2cpp_codegen_object_new(Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2(L_32, Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2_RuntimeMethod_var);
		NullCheck(L_30);
		Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706(L_30, L_31, L_32, Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706_RuntimeMethod_var);
	}

IL_00a1:
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction[name][FullUUID (characteristic).ToLower ()] = null;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_33 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_33);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_34 = L_33->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_35 = ___0_name;
		NullCheck(L_34);
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_36;
		L_36 = Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61(L_34, L_35, Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var);
		String_t* L_37 = ___2_characteristic;
		String_t* L_38;
		L_38 = BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59(L_37, NULL);
		NullCheck(L_38);
		String_t* L_39;
		L_39 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_38, NULL);
		NullCheck(L_36);
		Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189(L_36, L_39, (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL, Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var);
		// if (!bluetoothDeviceScript.DidUpdateCharacteristicValueWithDeviceAddressAction.ContainsKey (name))
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_40 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_40);
		Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* L_41 = L_40->___DidUpdateCharacteristicValueWithDeviceAddressAction_25;
		String_t* L_42 = ___0_name;
		NullCheck(L_41);
		bool L_43;
		L_43 = Dictionary_2_ContainsKey_m150AA8E90D327107E170A339453F8681CBC34FD0(L_41, L_42, Dictionary_2_ContainsKey_m150AA8E90D327107E170A339453F8681CBC34FD0_RuntimeMethod_var);
		if (L_43)
		{
			goto IL_00e9;
		}
	}
	{
		// bluetoothDeviceScript.DidUpdateCharacteristicValueWithDeviceAddressAction[name] = new Dictionary<string, Action<string, string, byte[]>>();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_44 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_44);
		Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* L_45 = L_44->___DidUpdateCharacteristicValueWithDeviceAddressAction_25;
		String_t* L_46 = ___0_name;
		Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* L_47 = (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB*)il2cpp_codegen_object_new(Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		Dictionary_2__ctor_m567D53C6E9424E1769E746B2F2F7CB666BD28746(L_47, Dictionary_2__ctor_m567D53C6E9424E1769E746B2F2F7CB666BD28746_RuntimeMethod_var);
		NullCheck(L_45);
		Dictionary_2_set_Item_mD7531E55E7078F3CA3DB2492418BEADF7229D468(L_45, L_46, L_47, Dictionary_2_set_Item_mD7531E55E7078F3CA3DB2492418BEADF7229D468_RuntimeMethod_var);
	}

IL_00e9:
	{
		// bluetoothDeviceScript.DidUpdateCharacteristicValueWithDeviceAddressAction[name][FullUUID (characteristic).ToLower ()] = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_48 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_48);
		Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* L_49 = L_48->___DidUpdateCharacteristicValueWithDeviceAddressAction_25;
		String_t* L_50 = ___0_name;
		NullCheck(L_49);
		Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* L_51;
		L_51 = Dictionary_2_get_Item_mB9B806A3CA27CFDDB280FFBBD54F692165DB5DE2(L_49, L_50, Dictionary_2_get_Item_mB9B806A3CA27CFDDB280FFBBD54F692165DB5DE2_RuntimeMethod_var);
		String_t* L_52 = ___2_characteristic;
		String_t* L_53;
		L_53 = BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59(L_52, NULL);
		NullCheck(L_53);
		String_t* L_54;
		L_54 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_53, NULL);
		Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* L_55 = ___4_action;
		NullCheck(L_51);
		Dictionary_2_set_Item_m317D3193C4CC26B216C7316AA83011B747927A26(L_51, L_54, L_55, Dictionary_2_set_Item_m317D3193C4CC26B216C7316AA83011B747927A26_RuntimeMethod_var);
	}

IL_010b:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_56 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_56)
		{
			goto IL_0133;
		}
	}
	{
		// _android.Call ("androidSubscribeCharacteristic", name, service, characteristic);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_57 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_58 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_59 = L_58;
		String_t* L_60 = ___0_name;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_60);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_60);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61 = L_59;
		String_t* L_62 = ___1_service;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_62);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_62);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_63 = L_61;
		String_t* L_64 = ___2_characteristic;
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_64);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_64);
		NullCheck(L_57);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_57, _stringLiteralDFF7B7A251CAD78185C2595FC73B8AE0181C64D3, L_63, NULL);
	}

IL_0133:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::UnSubscribeCharacteristic(System.String,System.String,System.String,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_UnSubscribeCharacteristic_m1C44186A37503FF628B8CF0DE1B67221BB0BDAE5 (String_t* ___0_name, String_t* ___1_service, String_t* ___2_characteristic, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___3_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA41215374A14C39327A0F3E564767C0E5F736E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5C248D01E5A71B59F3D041ECB2766EF9A97F4E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC95C71C51EBCC5FB69D800D28A4DA517C27A77E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB1D8A1AF714617959D4F8AA082FCFD16409E5FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_00ea;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_00c2;
		}
	}
	{
		// name = name.ToUpper ();
		String_t* L_3 = ___0_name;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_3, NULL);
		___0_name = L_4;
		// service = service.ToUpper ();
		String_t* L_5 = ___1_service;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_5, NULL);
		___1_service = L_6;
		// characteristic = characteristic.ToUpper ();
		String_t* L_7 = ___2_characteristic;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_7, NULL);
		___2_characteristic = L_8;
		// if (!bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction.ContainsKey (name))
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_9 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_9);
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_10 = L_9->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		String_t* L_11 = ___0_name;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23(L_10, L_11, Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction[name] = new Dictionary<string, Action<string, string>>();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_13 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_13);
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_14 = L_13->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		String_t* L_15 = ___0_name;
		Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* L_16 = (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6*)il2cpp_codegen_object_new(Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Dictionary_2__ctor_mA41215374A14C39327A0F3E564767C0E5F736E11(L_16, Dictionary_2__ctor_mA41215374A14C39327A0F3E564767C0E5F736E11_RuntimeMethod_var);
		NullCheck(L_14);
		Dictionary_2_set_Item_mC95C71C51EBCC5FB69D800D28A4DA517C27A77E7(L_14, L_15, L_16, Dictionary_2_set_Item_mC95C71C51EBCC5FB69D800D28A4DA517C27A77E7_RuntimeMethod_var);
	}

IL_0059:
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction[name][FullUUID (characteristic).ToLower ()] = null;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_17 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_17);
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_18 = L_17->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		String_t* L_19 = ___0_name;
		NullCheck(L_18);
		Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* L_20;
		L_20 = Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF(L_18, L_19, Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF_RuntimeMethod_var);
		String_t* L_21 = ___2_characteristic;
		String_t* L_22;
		L_22 = BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59(L_21, NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_22, NULL);
		NullCheck(L_20);
		Dictionary_2_set_Item_m5C248D01E5A71B59F3D041ECB2766EF9A97F4E87(L_20, L_23, (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*)NULL, Dictionary_2_set_Item_m5C248D01E5A71B59F3D041ECB2766EF9A97F4E87_RuntimeMethod_var);
		// if (!bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction.ContainsKey (name))
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_24 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_24);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_25 = L_24->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_26 = ___0_name;
		NullCheck(L_25);
		bool L_27;
		L_27 = Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F(L_25, L_26, Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var);
		if (L_27)
		{
			goto IL_00a1;
		}
	}
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction[name] = new Dictionary<string, Action<string>> ();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_28 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_28);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_29 = L_28->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_30 = ___0_name;
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_31 = (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*)il2cpp_codegen_object_new(Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2(L_31, Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2_RuntimeMethod_var);
		NullCheck(L_29);
		Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706(L_29, L_30, L_31, Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706_RuntimeMethod_var);
	}

IL_00a1:
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction[name][FullUUID (characteristic).ToLower ()] = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_32 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_32);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_33 = L_32->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_34 = ___0_name;
		NullCheck(L_33);
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_35;
		L_35 = Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61(L_33, L_34, Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var);
		String_t* L_36 = ___2_characteristic;
		String_t* L_37;
		L_37 = BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59(L_36, NULL);
		NullCheck(L_37);
		String_t* L_38;
		L_38 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_37, NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_39 = ___3_action;
		NullCheck(L_35);
		Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189(L_35, L_38, L_39, Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var);
	}

IL_00c2:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_40 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_40)
		{
			goto IL_00ea;
		}
	}
	{
		// _android.Call ("androidUnsubscribeCharacteristic", name, service, characteristic);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_41 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_42;
		String_t* L_44 = ___0_name;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = L_43;
		String_t* L_46 = ___1_service;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_46);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = L_45;
		String_t* L_48 = ___2_characteristic;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_48);
		NullCheck(L_41);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_41, _stringLiteralEB1D8A1AF714617959D4F8AA082FCFD16409E5FF, L_47, NULL);
	}

IL_00ea:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::PeripheralName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_PeripheralName_m68A12724E788CEF61F4B5A17140DCFD8242B24C9 (String_t* ___0_newName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE5AC270C12EC7EAC928330BEAEF6C9E6803EC24);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// _android.Call ("androidPeripheralName", newName);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = ___0_newName;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteralCE5AC270C12EC7EAC928330BEAEF6C9E6803EC24, L_4, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::CreateService(System.String,System.Boolean,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_CreateService_m161D50EF81C0D6A63086B2EAC0B83F7E8A75AF3E (String_t* ___0_uuid, bool ___1_primary, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8AAFA549889883502A4D6D131CF8210DDF84FCD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// bluetoothDeviceScript.ServiceAddedAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_3 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = ___2_action;
		NullCheck(L_3);
		L_3->___ServiceAddedAction_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___ServiceAddedAction_8), (void*)L_4);
	}

IL_001f:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// _android.Call ("androidCreateService", uuid, primary);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		String_t* L_9 = ___0_uuid;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		bool L_11 = ___1_primary;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		NullCheck(L_6);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_6, _stringLiteralF8AAFA549889883502A4D6D131CF8210DDF84FCD, L_10, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::RemoveService(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_RemoveService_mDFC2E26C6008B4607FCA4DF27682AD46097CD3B0 (String_t* ___0_uuid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83D45FCA45F93BA59D860796A96FE7117E5DCBD7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// _android.Call ("androidRemoveService", uuid);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = ___0_uuid;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral83D45FCA45F93BA59D860796A96FE7117E5DCBD7, L_4, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::RemoveServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_RemoveServices_mFE60B8A4F72B9A4DBA7566C16BA1C5A2684DDF10 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88F09F4A56E067B1B81EC436904567C01C9C3DF4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// _android.Call ("androidRemoveServices");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral88F09F4A56E067B1B81EC436904567C01C9C3DF4, L_3, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::CreateCharacteristic(System.String,BluetoothLEHardwareInterface/CBCharacteristicProperties,BluetoothLEHardwareInterface/CBAttributePermissions,System.Byte[],System.Int32,System.Action`2<System.String,System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_CreateCharacteristic_mEAF44E1FB5B6AE756CB0C74009C6B0B1DF44D669 (String_t* ___0_uuid, int32_t ___1_properties, int32_t ___2_permissions, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_data, int32_t ___4_length, Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* ___5_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD482D614E702611FC3EBAEC39B93D1AFD9222221);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_0060;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// bluetoothDeviceScript.PeripheralReceivedWriteDataAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_3 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* L_4 = ___5_action;
		NullCheck(L_3);
		L_3->___PeripheralReceivedWriteDataAction_15 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___PeripheralReceivedWriteDataAction_15), (void*)L_4);
	}

IL_0020:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_5)
		{
			goto IL_0060;
		}
	}
	{
		// _android.Call ("androidCreateCharacteristic", uuid, (int)properties, (int)permissions, data, length);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		String_t* L_9 = ___0_uuid;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		int32_t L_11 = ___1_properties;
		int32_t L_12 = ((int32_t)L_11);
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_10;
		int32_t L_15 = ___2_permissions;
		int32_t L_16 = ((int32_t)L_15);
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___3_data;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_18;
		int32_t L_21 = ___4_length;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_23);
		NullCheck(L_6);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_6, _stringLiteralD482D614E702611FC3EBAEC39B93D1AFD9222221, L_20, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::RemoveCharacteristic(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_RemoveCharacteristic_m8378D9B83336064673A8D07990267FF0B9861DA6 (String_t* ___0_uuid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3215C2629A952F0AC344C8D69FE2D802A48D3FA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_003f;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// bluetoothDeviceScript.PeripheralReceivedWriteDataAction = null;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_3 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_3);
		L_3->___PeripheralReceivedWriteDataAction_15 = (Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___PeripheralReceivedWriteDataAction_15), (void*)(Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831*)NULL);
	}

IL_001f:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// _android.Call ("androidRemoveCharacteristic", uuid);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		String_t* L_8 = ___0_uuid;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		NullCheck(L_5);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_5, _stringLiteralE3215C2629A952F0AC344C8D69FE2D802A48D3FA, L_7, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::RemoveCharacteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_RemoveCharacteristics_m837F27F5401BBF2E6E905C44FE4ED721A6596853 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F668F4292AD4222A2C03918C15E46866229F0E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// _android.Call ("androidRemoveCharacteristics");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral2F668F4292AD4222A2C03918C15E46866229F0E2, L_3, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::StartAdvertising(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_StartAdvertising_m9B08731ACA361835423DBFA9592C03152E92886E (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6899C7C072DDADF8F38DDCD6FCD494657DB1917);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// bluetoothDeviceScript.StartedAdvertisingAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_3 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___0_action;
		NullCheck(L_3);
		L_3->___StartedAdvertisingAction_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___StartedAdvertisingAction_9), (void*)L_4);
	}

IL_001f:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// _android.Call ("androidStartAdvertising");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_6);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_6, _stringLiteralD6899C7C072DDADF8F38DDCD6FCD494657DB1917, L_7, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::StopAdvertising(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_StopAdvertising_m2285E07302191DEC4F417DD1B54AA433D33F9E9D (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral936259343A8975886B07CCCB1055C7FDE90E609E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// bluetoothDeviceScript.StoppedAdvertisingAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_3 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___0_action;
		NullCheck(L_3);
		L_3->___StoppedAdvertisingAction_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___StoppedAdvertisingAction_10), (void*)L_4);
	}

IL_001f:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// _android.Call ("androidStopAdvertising");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_6);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_6, _stringLiteral936259343A8975886B07CCCB1055C7FDE90E609E, L_7, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::UpdateCharacteristicValue(System.String,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_UpdateCharacteristicValue_m4B07B45A4AEABA0C5BB902CE99BF5DA8ADAD7737 (String_t* ___0_uuid, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A7944C38D3AC6854E3D84DC94CF76FC8CEE8471);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// _android.Call ("androidUpdateCharacteristicValue", uuid, data, length);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = ___0_uuid;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_data;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		int32_t L_9 = ___2_length;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral3A7944C38D3AC6854E3D84DC94CF76FC8CEE8471, L_8, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.String BluetoothLEHardwareInterface::FullUUID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59 (String_t* ___0_uuid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19A325E0E7DE9A693A792DCB313D771BA16E1470);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF951CF903ECC622812D47B1157D1A3AFA9FBDC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (uuid.Length == 4)
		String_t* L_0 = ___0_uuid;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_001a;
		}
	}
	{
		// return "0000" + uuid + "-0000-1000-8000-00805F9B34FB";
		String_t* L_2 = ___0_uuid;
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8BF951CF903ECC622812D47B1157D1A3AFA9FBDC, L_2, _stringLiteral19A325E0E7DE9A693A792DCB313D771BA16E1470, NULL);
		return L_3;
	}

IL_001a:
	{
		// return uuid;
		String_t* L_4 = ___0_uuid;
		return L_4;
	}
}
// System.Void BluetoothLEHardwareInterface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface__ctor_m2CBB7B185D09793C14DA2E5A5A7D1AD758C02C5B (BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Conversion methods for marshalling of: BluetoothLEHardwareInterface/iBeaconData
IL2CPP_EXTERN_C void iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshal_pinvoke(const iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96& unmarshaled, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshaled_pinvoke& marshaled)
{
	marshaled.___UUID_0 = il2cpp_codegen_marshal_string(unmarshaled.___UUID_0);
	marshaled.___Major_1 = unmarshaled.___Major_1;
	marshaled.___Minor_2 = unmarshaled.___Minor_2;
	marshaled.___RSSI_3 = unmarshaled.___RSSI_3;
	marshaled.___AndroidSignalPower_4 = unmarshaled.___AndroidSignalPower_4;
	marshaled.___iOSProximity_5 = unmarshaled.___iOSProximity_5;
}
IL2CPP_EXTERN_C void iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshal_pinvoke_back(const iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshaled_pinvoke& marshaled, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96& unmarshaled)
{
	unmarshaled.___UUID_0 = il2cpp_codegen_marshal_string_result(marshaled.___UUID_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___UUID_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___UUID_0));
	int32_t unmarshaledMajor_temp_1 = 0;
	unmarshaledMajor_temp_1 = marshaled.___Major_1;
	unmarshaled.___Major_1 = unmarshaledMajor_temp_1;
	int32_t unmarshaledMinor_temp_2 = 0;
	unmarshaledMinor_temp_2 = marshaled.___Minor_2;
	unmarshaled.___Minor_2 = unmarshaledMinor_temp_2;
	int32_t unmarshaledRSSI_temp_3 = 0;
	unmarshaledRSSI_temp_3 = marshaled.___RSSI_3;
	unmarshaled.___RSSI_3 = unmarshaledRSSI_temp_3;
	int32_t unmarshaledAndroidSignalPower_temp_4 = 0;
	unmarshaledAndroidSignalPower_temp_4 = marshaled.___AndroidSignalPower_4;
	unmarshaled.___AndroidSignalPower_4 = unmarshaledAndroidSignalPower_temp_4;
	int32_t unmarshalediOSProximity_temp_5 = 0;
	unmarshalediOSProximity_temp_5 = marshaled.___iOSProximity_5;
	unmarshaled.___iOSProximity_5 = unmarshalediOSProximity_temp_5;
}
// Conversion method for clean up from marshalling of: BluetoothLEHardwareInterface/iBeaconData
IL2CPP_EXTERN_C void iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshal_pinvoke_cleanup(iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___UUID_0);
	marshaled.___UUID_0 = NULL;
}
// Conversion methods for marshalling of: BluetoothLEHardwareInterface/iBeaconData
IL2CPP_EXTERN_C void iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshal_com(const iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96& unmarshaled, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshaled_com& marshaled)
{
	marshaled.___UUID_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___UUID_0);
	marshaled.___Major_1 = unmarshaled.___Major_1;
	marshaled.___Minor_2 = unmarshaled.___Minor_2;
	marshaled.___RSSI_3 = unmarshaled.___RSSI_3;
	marshaled.___AndroidSignalPower_4 = unmarshaled.___AndroidSignalPower_4;
	marshaled.___iOSProximity_5 = unmarshaled.___iOSProximity_5;
}
IL2CPP_EXTERN_C void iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshal_com_back(const iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshaled_com& marshaled, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96& unmarshaled)
{
	unmarshaled.___UUID_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___UUID_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___UUID_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___UUID_0));
	int32_t unmarshaledMajor_temp_1 = 0;
	unmarshaledMajor_temp_1 = marshaled.___Major_1;
	unmarshaled.___Major_1 = unmarshaledMajor_temp_1;
	int32_t unmarshaledMinor_temp_2 = 0;
	unmarshaledMinor_temp_2 = marshaled.___Minor_2;
	unmarshaled.___Minor_2 = unmarshaledMinor_temp_2;
	int32_t unmarshaledRSSI_temp_3 = 0;
	unmarshaledRSSI_temp_3 = marshaled.___RSSI_3;
	unmarshaled.___RSSI_3 = unmarshaledRSSI_temp_3;
	int32_t unmarshaledAndroidSignalPower_temp_4 = 0;
	unmarshaledAndroidSignalPower_temp_4 = marshaled.___AndroidSignalPower_4;
	unmarshaled.___AndroidSignalPower_4 = unmarshaledAndroidSignalPower_temp_4;
	int32_t unmarshalediOSProximity_temp_5 = 0;
	unmarshalediOSProximity_temp_5 = marshaled.___iOSProximity_5;
	unmarshaled.___iOSProximity_5 = unmarshalediOSProximity_temp_5;
}
// Conversion method for clean up from marshalling of: BluetoothLEHardwareInterface/iBeaconData
IL2CPP_EXTERN_C void iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshal_com_cleanup(iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___UUID_0);
	marshaled.___UUID_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AndroidJavaClass NativeShare::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* NativeShare_get_AJC_m4E6ED45398FD66605E89E413DA926D256E0E58D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F8AFCCA3C98C13359E32869847451346F47EC44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_ajc == null )
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___m_ajc_0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// m_ajc = new AndroidJavaClass( "com.yasirkula.unity.NativeShare" );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4F8AFCCA3C98C13359E32869847451346F47EC44, NULL);
		((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___m_ajc_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___m_ajc_0), (void*)L_1);
	}

IL_0016:
	{
		// return m_ajc;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = ((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___m_ajc_0;
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject NativeShare::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NativeShare_get_Context_m2BA0B3F34DD72D861031D3448E559B4104A8BF9A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// if( m_context == null )
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___m_context_1;
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		// using( AndroidJavaObject unityClass = new AndroidJavaClass( "com.unity3d.player.UnityPlayer" ) )
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// m_context = unityClass.GetStatic<AndroidJavaObject>( "currentActivity" );
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
			NullCheck(L_4);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
			L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_4, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___m_context_1 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___m_context_1), (void*)L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// return m_context;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___m_context_1;
		return L_6;
	}
}
// NativeShare NativeShare::SetSubject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* NativeShare_SetSubject_mE4C732E1B1D75312EABE19595CB9E7728F9EF280 (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, String_t* ___0_subject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* G_B1_1 = NULL;
	{
		// this.subject = subject ?? string.Empty;
		String_t* L_0 = ___0_subject;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		NullCheck(G_B2_1);
		G_B2_1->___subject_2 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___subject_2), (void*)G_B2_0);
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::SetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* NativeShare_SetText_m6C9C229EE528EE41045A3B3DD1666E8A54B348AE (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* G_B1_1 = NULL;
	{
		// this.text = text ?? string.Empty;
		String_t* L_0 = ___0_text;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		NullCheck(G_B2_1);
		G_B2_1->___text_3 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___text_3), (void*)G_B2_0);
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::SetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* NativeShare_SetUrl_mF93E1E984A0B62944F626406DB2B1C21C26EF2B3 (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* G_B1_1 = NULL;
	{
		// this.url = url ?? string.Empty;
		String_t* L_0 = ___0_url;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		NullCheck(G_B2_1);
		G_B2_1->___url_5 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___url_5), (void*)G_B2_0);
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::SetTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* NativeShare_SetTitle_m96CF51C7BFC24621390452C74BC9582DE9DDE681 (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, String_t* ___0_title, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* G_B1_1 = NULL;
	{
		// this.title = title ?? string.Empty;
		String_t* L_0 = ___0_title;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		NullCheck(G_B2_1);
		G_B2_1->___title_4 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___title_4), (void*)G_B2_0);
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::SetCallback(NativeShare/ShareResultCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* NativeShare_SetCallback_m04966BCB9CAA7D85890605453DCF42EB90DA87EC (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* ___0_callback, const RuntimeMethod* method) 
{
	{
		// this.callback = callback;
		ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* L_0 = ___0_callback;
		__this->___callback_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_11), (void*)L_0);
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::AddTarget(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* NativeShare_AddTarget_m0338C236B2DAD4E19DEEC63E7472BBB7CADFDC23 (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, String_t* ___0_androidPackageName, String_t* ___1_androidClassName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if( !string.IsNullOrEmpty( androidPackageName ) )
		String_t* L_0 = ___0_androidPackageName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0071;
		}
	}
	{
		// if( androidClassName == null )
		String_t* L_2 = ___1_androidClassName;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		// androidClassName = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		___1_androidClassName = L_3;
	}

IL_0012:
	{
		// bool isUnique = true;
		V_0 = (bool)1;
		// for( int i = 0; i < targetPackages.Count; i++ )
		V_1 = 0;
		goto IL_0048;
	}

IL_0018:
	{
		// if( targetPackages[i] == androidPackageName && targetClasses[i] == androidClassName )
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___targetPackages_7;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_4, L_5, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		String_t* L_7 = ___0_androidPackageName;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = __this->___targetClasses_8;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_9, L_10, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		String_t* L_12 = ___1_androidClassName;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0044;
		}
	}
	{
		// isUnique = false;
		V_0 = (bool)0;
		// break;
		goto IL_0056;
	}

IL_0044:
	{
		// for( int i = 0; i < targetPackages.Count; i++ )
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0048:
	{
		// for( int i = 0; i < targetPackages.Count; i++ )
		int32_t L_15 = V_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = __this->___targetPackages_7;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_16, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0018;
		}
	}

IL_0056:
	{
		// if( isUnique )
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_0071;
		}
	}
	{
		// targetPackages.Add( androidPackageName );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = __this->___targetPackages_7;
		String_t* L_20 = ___0_androidPackageName;
		NullCheck(L_19);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_19, L_20, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// targetClasses.Add( androidClassName );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = __this->___targetClasses_8;
		String_t* L_22 = ___1_androidClassName;
		NullCheck(L_21);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_21, L_22, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0071:
	{
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::AddFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* NativeShare_AddFile_m668FDE2DBE3BA2EB01714E8E4EFC2153E36B81AD (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, String_t* ___0_filePath, String_t* ___1_mime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFF4CC9F1E1AA16CF56E4F5C85A3BDCA0CB896FB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B3_1 = NULL;
	{
		// if( !string.IsNullOrEmpty( filePath ) && File.Exists( filePath ) )
		String_t* L_0 = ___0_filePath;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_2 = ___0_filePath;
		bool L_3;
		L_3 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// files.Add( filePath );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___files_9;
		String_t* L_5 = ___0_filePath;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// mimes.Add( mime ?? string.Empty );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = __this->___mimes_10;
		String_t* L_7 = ___1_mime;
		String_t* L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_002c;
		}
	}
	{
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_002c:
	{
		NullCheck(G_B4_1);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(G_B4_1, G_B4_0, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_0043;
	}

IL_0033:
	{
		// Debug.LogError( "Share Error: file does not exist at path or permission denied: " + filePath );
		String_t* L_10 = ___0_filePath;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAFF4CC9F1E1AA16CF56E4F5C85A3BDCA0CB896FB, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_11, NULL);
	}

IL_0043:
	{
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::AddFile(UnityEngine.Texture2D,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* NativeShare_AddFile_m6C049FE4228FBDEDA929CFEBBC5CC73812851453 (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, String_t* ___1_createdFileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB70548E100BA47AF6084FE872DCFC01E2DFFEBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF37E86612B08131A4171D70D9CCCAF41191D0B4F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* G_B12_0 = NULL;
	NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* G_B12_1 = NULL;
	String_t* G_B11_0 = NULL;
	NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* G_B11_1 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* G_B13_2 = NULL;
	{
		// if( !texture )
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_texture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError( "Share Error: Texture does not exist!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralEB70548E100BA47AF6084FE872DCFC01E2DFFEBB, NULL);
		goto IL_0091;
	}

IL_0014:
	{
		// if( string.IsNullOrEmpty( createdFileName ) )
		String_t* L_2 = ___1_createdFileName;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// createdFileName = "Image.png";
		___1_createdFileName = _stringLiteralF37E86612B08131A4171D70D9CCCAF41191D0B4F;
	}

IL_0023:
	{
		// if( createdFileName.EndsWith( ".jpeg", System.StringComparison.OrdinalIgnoreCase ) || createdFileName.EndsWith( ".jpg", System.StringComparison.OrdinalIgnoreCase ) )
		String_t* L_4 = ___1_createdFileName;
		NullCheck(L_4);
		bool L_5;
		L_5 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_4, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, 5, NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_6 = ___1_createdFileName;
		NullCheck(L_6);
		bool L_7;
		L_7 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_6, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, 5, NULL);
		if (!L_7)
		{
			goto IL_0043;
		}
	}

IL_003f:
	{
		// saveAsJpeg = true;
		V_0 = (bool)1;
		goto IL_0060;
	}

IL_0043:
	{
		// if( !createdFileName.EndsWith( ".png", System.StringComparison.OrdinalIgnoreCase ) )
		String_t* L_8 = ___1_createdFileName;
		NullCheck(L_8);
		bool L_9;
		L_9 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_8, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, 5, NULL);
		if (L_9)
		{
			goto IL_005e;
		}
	}
	{
		// createdFileName += ".png";
		String_t* L_10 = ___1_createdFileName;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		___1_createdFileName = L_11;
	}

IL_005e:
	{
		// saveAsJpeg = false;
		V_0 = (bool)0;
	}

IL_0060:
	{
		// string filePath = Path.Combine( Application.temporaryCachePath, createdFileName );
		String_t* L_12;
		L_12 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		String_t* L_13 = ___1_createdFileName;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_12, L_13, NULL);
		V_1 = L_14;
		// File.WriteAllBytes( filePath, GetTextureBytes( texture, saveAsJpeg ) );
		String_t* L_15 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = ___0_texture;
		bool L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = NativeShare_GetTextureBytes_mCAAE9D5A9295439D4AC06D9229D1E05F93856C66(__this, L_16, L_17, NULL);
		File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077(L_15, L_18, NULL);
		// AddFile( filePath, saveAsJpeg ? "image/jpeg" : "image/png" );
		String_t* L_19 = V_1;
		bool L_20 = V_0;
		G_B11_0 = L_19;
		G_B11_1 = __this;
		if (L_20)
		{
			G_B12_0 = L_19;
			G_B12_1 = __this;
			goto IL_0086;
		}
	}
	{
		G_B13_0 = _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_008b;
	}

IL_0086:
	{
		G_B13_0 = _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_008b:
	{
		NullCheck(G_B13_2);
		NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* L_21;
		L_21 = NativeShare_AddFile_m668FDE2DBE3BA2EB01714E8E4EFC2153E36B81AD(G_B13_2, G_B13_1, G_B13_0, NULL);
	}

IL_0091:
	{
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::AddEmailRecipient(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* NativeShare_AddEmailRecipient_mEB60CADFC241ED960B1666B355A78B088C60F411 (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, String_t* ___0_emailAddress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( !string.IsNullOrEmpty( emailAddress ) && !emailRecipients.Contains( emailAddress ) )
		String_t* L_0 = ___0_emailAddress;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___emailRecipients_6;
		String_t* L_3 = ___0_emailAddress;
		NullCheck(L_2);
		bool L_4;
		L_4 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_2, L_3, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		// emailRecipients.Add( emailAddress );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->___emailRecipients_6;
		String_t* L_6 = ___0_emailAddress;
		NullCheck(L_5);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, L_6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0022:
	{
		// return this;
		return __this;
	}
}
// System.Void NativeShare::Share()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare_Share_mD39561F45147596C2BF1B1FCED65E53A18B5F790 (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NSShareResultCallbackAndroid_tD690D9BF4C0E309F07873F0A94A3686A17F844DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral537DA31EA009D26D0F870996AEBF3B39A97F284F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABD1A5066AD876BBA7B4C0BF57BA82BAB5878D3B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( files.Count == 0 && subject.Length == 0 && text.Length == 0 && url.Length == 0 )
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___files_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_0, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_2 = __this->___subject_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_4 = __this->___text_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_6 = __this->___url_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		// Debug.LogWarning( "Share Error: attempting to share nothing!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral537DA31EA009D26D0F870996AEBF3B39A97F284F, NULL);
		// return;
		return;
	}

IL_003f:
	{
		// AJC.CallStatic( "Share", Context, new NSShareResultCallbackAndroid( callback ), targetPackages.ToArray(), targetClasses.ToArray(), files.ToArray(), mimes.ToArray(), emailRecipients.ToArray(), subject, CombineURLWithText(), title );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_8;
		L_8 = NativeShare_get_AJC_m4E6ED45398FD66605E89E413DA926D256E0E58D5(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11;
		L_11 = NativeShare_get_Context_m2BA0B3F34DD72D861031D3448E559B4104A8BF9A(NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* L_13 = __this->___callback_11;
		NSShareResultCallbackAndroid_tD690D9BF4C0E309F07873F0A94A3686A17F844DA* L_14 = (NSShareResultCallbackAndroid_tD690D9BF4C0E309F07873F0A94A3686A17F844DA*)il2cpp_codegen_object_new(NSShareResultCallbackAndroid_tD690D9BF4C0E309F07873F0A94A3686A17F844DA_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		NSShareResultCallbackAndroid__ctor_m1F33E98B9D2C790770041936FE5A1AC3634A1B2C(L_14, L_13, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_12;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = __this->___targetPackages_7;
		NullCheck(L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17;
		L_17 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_16, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_15;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = __this->___targetClasses_8;
		NullCheck(L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20;
		L_20 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_19, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_18;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22 = __this->___files_9;
		NullCheck(L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23;
		L_23 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_22, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_21;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = __this->___mimes_10;
		NullCheck(L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26;
		L_26 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_25, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_24;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_28 = __this->___emailRecipients_6;
		NullCheck(L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29;
		L_29 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_28, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_27;
		String_t* L_31 = __this->___subject_2;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_30;
		String_t* L_33;
		L_33 = NativeShare_CombineURLWithText_m26FB18B3C8323453442D6DBE2F3F7E27E6BE6579(__this, NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_33);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_32;
		String_t* L_35 = __this->___title_4;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_35);
		NullCheck(L_8);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_8, _stringLiteralABD1A5066AD876BBA7B4C0BF57BA82BAB5878D3B, L_34, NULL);
		// }
		return;
	}
}
// System.Boolean NativeShare::TargetExists(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeShare_TargetExists_m2DDAE4E7D6EEF6C622956C1126EFD96151C58D1B (String_t* ___0_androidPackageName, String_t* ___1_androidClassName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8244F442D9E98513F33B514C419F2B86C8FC8CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( string.IsNullOrEmpty( androidPackageName ) )
		String_t* L_0 = ___0_androidPackageName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
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
		// if( androidClassName == null )
		String_t* L_2 = ___1_androidClassName;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		// androidClassName = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		___1_androidClassName = L_3;
	}

IL_0014:
	{
		// return AJC.CallStatic<bool>( "TargetExists", Context, androidPackageName, androidClassName );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4;
		L_4 = NativeShare_get_AJC_m4E6ED45398FD66605E89E413DA926D256E0E58D5(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = NativeShare_get_Context_m2BA0B3F34DD72D861031D3448E559B4104A8BF9A(NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		String_t* L_9 = ___0_androidPackageName;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		String_t* L_11 = ___1_androidClassName;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		NullCheck(L_4);
		bool L_12;
		L_12 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_4, _stringLiteralA8244F442D9E98513F33B514C419F2B86C8FC8CC, L_10, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_12;
	}
}
// System.Boolean NativeShare::FindTarget(System.String&,System.String&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeShare_FindTarget_mC9F4CE73BA00E494665DA4D5D7E515F2A9458636 (String_t** ___0_androidPackageName, String_t** ___1_androidClassName, String_t* ___2_packageNameRegex, String_t* ___3_classNameRegex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF11FDD7A8BE90D32FAADFD0EF114AE0F6B18F0B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// androidPackageName = null;
		String_t** L_0 = ___0_androidPackageName;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// androidClassName = null;
		String_t** L_1 = ___1_androidClassName;
		*((RuntimeObject**)L_1) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)NULL);
		// if( string.IsNullOrEmpty( packageNameRegex ) )
		String_t* L_2 = ___2_packageNameRegex;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// if( classNameRegex == null )
		String_t* L_4 = ___3_classNameRegex;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		// classNameRegex = string.Empty;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		___3_classNameRegex = L_5;
	}

IL_001a:
	{
		// string result = AJC.CallStatic<string>( "FindMatchingTarget", Context, packageNameRegex, classNameRegex );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_6;
		L_6 = NativeShare_get_AJC_m4E6ED45398FD66605E89E413DA926D256E0E58D5(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
		L_9 = NativeShare_get_Context_m2BA0B3F34DD72D861031D3448E559B4104A8BF9A(NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		String_t* L_11 = ___2_packageNameRegex;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		String_t* L_13 = ___3_classNameRegex;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		NullCheck(L_6);
		String_t* L_14;
		L_14 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_6, _stringLiteralFF11FDD7A8BE90D32FAADFD0EF114AE0F6B18F0B, L_12, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_0 = L_14;
		// if( string.IsNullOrEmpty( result ) )
		String_t* L_15 = V_0;
		bool L_16;
		L_16 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_15, NULL);
		if (!L_16)
		{
			goto IL_004a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// int splitIndex = result.IndexOf( '>' );
		String_t* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_17, ((int32_t)62), NULL);
		V_1 = L_18;
		// if( splitIndex <= 0 || splitIndex >= result.Length - 1 )
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_20 = V_1;
		String_t* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_21, NULL);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_0064;
		}
	}

IL_0062:
	{
		// return false;
		return (bool)0;
	}

IL_0064:
	{
		// androidPackageName = result.Substring( 0, splitIndex );
		String_t** L_23 = ___0_androidPackageName;
		String_t* L_24 = V_0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		String_t* L_26;
		L_26 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_24, 0, L_25, NULL);
		*((RuntimeObject**)L_23) = (RuntimeObject*)L_26;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_23, (void*)(RuntimeObject*)L_26);
		// androidClassName = result.Substring( splitIndex + 1 );
		String_t** L_27 = ___1_androidClassName;
		String_t* L_28 = V_0;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		String_t* L_30;
		L_30 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_28, ((int32_t)il2cpp_codegen_add(L_29, 1)), NULL);
		*((RuntimeObject**)L_27) = (RuntimeObject*)L_30;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_27, (void*)(RuntimeObject*)L_30);
		// return true;
		return (bool)1;
	}
}
// System.String NativeShare::GetURLWithScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeShare_GetURLWithScheme_m0EB03C3B999AC0BF395F1EBA13169D8EFA4F6F04 (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ( url.Length == 0 || url.Contains( "://" ) ) ? url : ( "https://" + url );
		String_t* L_0 = __this->___url_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_2 = __this->___url_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_4 = __this->___url_5;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2, L_4, NULL);
		return L_5;
	}

IL_0030:
	{
		String_t* L_6 = __this->___url_5;
		return L_6;
	}
}
// System.String NativeShare::CombineURLWithText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeShare_CombineURLWithText_m26FB18B3C8323453442D6DBE2F3F7E27E6BE6579 (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( url.Length == 0 || text.IndexOf( url, System.StringComparison.OrdinalIgnoreCase ) >= 0 )
		String_t* L_0 = __this->___url_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_2 = __this->___text_3;
		String_t* L_3 = __this->___url_5;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = String_IndexOf_m490810CB7ADA9230AC0F8D78E213A8EFED129F55(L_2, L_3, 5, NULL);
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}

IL_0022:
	{
		// return text;
		String_t* L_5 = __this->___text_3;
		return L_5;
	}

IL_0029:
	{
		// else if( text.Length == 0 )
		String_t* L_6 = __this->___text_3;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if (L_7)
		{
			goto IL_003d;
		}
	}
	{
		// return GetURLWithScheme();
		String_t* L_8;
		L_8 = NativeShare_GetURLWithScheme_m0EB03C3B999AC0BF395F1EBA13169D8EFA4F6F04(__this, NULL);
		return L_8;
	}

IL_003d:
	{
		// return string.Concat( text, " ", GetURLWithScheme() );
		String_t* L_9 = __this->___text_3;
		String_t* L_10;
		L_10 = NativeShare_GetURLWithScheme_m0EB03C3B999AC0BF395F1EBA13169D8EFA4F6F04(__this, NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_9, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_10, NULL);
		return L_11;
	}
}
// System.Byte[] NativeShare::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeShare_GetTextureBytes_mCAAE9D5A9295439D4AC06D9229D1E05F93856C66 (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, bool ___1_isJpeg, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			// return isJpeg ? texture.EncodeToJPG( 100 ) : texture.EncodeToPNG();
			bool L_0 = ___1_isJpeg;
			if (L_0)
			{
				goto IL_000b_1;
			}
		}
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = ___0_texture;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
			L_2 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_1, NULL);
			G_B3_0 = L_2;
			goto IL_0013_1;
		}

IL_000b_1:
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = ___0_texture;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
			L_4 = ImageConversion_EncodeToJPG_mD0307B5DFF32A3FF39488E97B467F11AFE501F6F(L_3, ((int32_t)100), NULL);
			G_B3_0 = L_4;
		}

IL_0013_1:
		{
			V_0 = G_B3_0;
			goto IL_002e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(UnityEngine.UnityException)
		// catch( UnityException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = ___0_texture;
		bool L_6 = ___1_isJpeg;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = NativeShare_GetTextureBytesFromCopy_m4D9844D6ECAF60EFD7981A51D63B80CC8C43B62E(__this, L_5, L_6, NULL);
		V_0 = L_7;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002e;
	}// end catch (depth: 1)

CATCH_0022:
	{// begin catch(System.ArgumentException)
		// catch( System.ArgumentException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___0_texture;
		bool L_9 = ___1_isJpeg;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = NativeShare_GetTextureBytesFromCopy_m4D9844D6ECAF60EFD7981A51D63B80CC8C43B62E(__this, L_8, L_9, NULL);
		V_0 = L_10;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002e;
	}// end catch (depth: 1)

IL_002e:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		return L_11;
	}
}
// System.Byte[] NativeShare::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeShare_GetTextureBytesFromCopy_m4D9844D6ECAF60EFD7981A51D63B80CC8C43B62E (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, bool ___1_isJpeg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6307B090E7219A907073428ED745FD41EFA179DE);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B4_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B11_0 = NULL;
	{
		// Debug.LogWarning( "Sharing non-readable textures is slower than sharing readable textures" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral6307B090E7219A907073428ED745FD41EFA179DE, NULL);
		// Texture2D sourceTexReadable = null;
		V_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		// RenderTexture rt = RenderTexture.GetTemporary( texture.width, texture.height );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_texture;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___0_texture;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4;
		L_4 = RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F(L_1, L_3, NULL);
		V_1 = L_4;
		// RenderTexture activeRT = RenderTexture.active;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5;
		L_5 = RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7(NULL);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{// begin finally (depth: 1)
				// RenderTexture.active = activeRT;
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = V_2;
				RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_6, NULL);
				// RenderTexture.ReleaseTemporary( rt );
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = V_1;
				RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_7, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// Graphics.Blit( texture, rt );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___0_texture;
					RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = V_1;
					il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
					Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_8, L_9, NULL);
					// RenderTexture.active = rt;
					RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = V_1;
					RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_10, NULL);
					// sourceTexReadable = new Texture2D( texture.width, texture.height, isJpeg ? TextureFormat.RGB24 : TextureFormat.RGBA32, false );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = ___0_texture;
					NullCheck(L_11);
					int32_t L_12;
					L_12 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = ___0_texture;
					NullCheck(L_13);
					int32_t L_14;
					L_14 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
					bool L_15 = ___1_isJpeg;
					G_B2_0 = L_14;
					G_B2_1 = L_12;
					if (L_15)
					{
						G_B3_0 = L_14;
						G_B3_1 = L_12;
						goto IL_0043_2;
					}
				}
				{
					G_B4_0 = 4;
					G_B4_1 = G_B2_0;
					G_B4_2 = G_B2_1;
					goto IL_0044_2;
				}

IL_0043_2:
				{
					G_B4_0 = 3;
					G_B4_1 = G_B3_0;
					G_B4_2 = G_B3_1;
				}

IL_0044_2:
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
					NullCheck(L_16);
					Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_16, G_B4_2, G_B4_1, G_B4_0, (bool)0, NULL);
					V_0 = L_16;
					// sourceTexReadable.ReadPixels( new Rect( 0, 0, texture.width, texture.height ), 0, 0, false );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = V_0;
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ___0_texture;
					NullCheck(L_18);
					int32_t L_19;
					L_19 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = ___0_texture;
					NullCheck(L_20);
					int32_t L_21;
					L_21 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_20);
					Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22;
					memset((&L_22), 0, sizeof(L_22));
					Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_22), (0.0f), (0.0f), ((float)L_19), ((float)L_21), /*hidden argument*/NULL);
					NullCheck(L_17);
					Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C(L_17, L_22, 0, 0, (bool)0, NULL);
					// sourceTexReadable.Apply( false, false );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23 = V_0;
					NullCheck(L_23);
					Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_23, (bool)0, (bool)0, NULL);
					// }
					goto IL_0097;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_007b_1;
				}
				throw e;
			}

CATCH_007b_1:
			{// begin catch(System.Exception)
				// Debug.LogException( e );
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// Object.DestroyImmediate( sourceTexReadable );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = V_0;
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_24, NULL);
				// return null;
				V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00be;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b7:
			{// begin finally (depth: 1)
				// Object.DestroyImmediate( sourceTexReadable );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_25, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// return isJpeg ? sourceTexReadable.EncodeToJPG( 100 ) : sourceTexReadable.EncodeToPNG();
					bool L_26 = ___1_isJpeg;
					if (L_26)
					{
						goto IL_00a3_2;
					}
				}
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
					L_28 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_27, NULL);
					G_B11_0 = L_28;
					goto IL_00ab_2;
				}

IL_00a3_2:
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
					L_30 = ImageConversion_EncodeToJPG_mD0307B5DFF32A3FF39488E97B467F11AFE501F6F(L_29, ((int32_t)100), NULL);
					G_B11_0 = L_30;
				}

IL_00ab_2:
				{
					V_3 = G_B11_0;
					goto IL_00be;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00ae_1;
				}
				throw e;
			}

CATCH_00ae_1:
			{// begin catch(System.Exception)
				// Debug.LogException( e );
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// return null;
				V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00be;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00be:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_3;
		return L_31;
	}
}
// System.Void NativeShare::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare__ctor_m40A41AF25FD6EF4889A9AA3CF794B1F666AEEAAB (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string subject = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___subject_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subject_2), (void*)L_0);
		// private string text = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___text_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_3), (void*)L_1);
		// private string title = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___title_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___title_4), (void*)L_2);
		// private string url = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___url_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___url_5), (void*)L_3);
		// private readonly List<string> emailRecipients = new List<string>( 0 );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF(L_4, 0, List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		__this->___emailRecipients_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___emailRecipients_6), (void*)L_4);
		// private readonly List<string> targetPackages = new List<string>( 0 );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF(L_5, 0, List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		__this->___targetPackages_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetPackages_7), (void*)L_5);
		// private readonly List<string> targetClasses = new List<string>( 0 );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF(L_6, 0, List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		__this->___targetClasses_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetClasses_8), (void*)L_6);
		// private readonly List<string> files = new List<string>( 0 );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF(L_7, 0, List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		__this->___files_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___files_9), (void*)L_7);
		// private readonly List<string> mimes = new List<string>( 0 );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF(L_8, 0, List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		__this->___mimes_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mimes_10), (void*)L_8);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void ShareResultCallback_Invoke_m868DBFDAECA591A3D704369562D948BE29CB6F81_Multicast(ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* __this, int32_t ___0_result, String_t* ___1_shareTarget, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* currentDelegate = reinterpret_cast<ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_result, ___1_shareTarget, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ShareResultCallback_Invoke_m868DBFDAECA591A3D704369562D948BE29CB6F81_OpenInst(ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* __this, int32_t ___0_result, String_t* ___1_shareTarget, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_result, ___1_shareTarget, method);
}
void ShareResultCallback_Invoke_m868DBFDAECA591A3D704369562D948BE29CB6F81_OpenStatic(ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* __this, int32_t ___0_result, String_t* ___1_shareTarget, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_result, ___1_shareTarget, method);
}
void ShareResultCallback_Invoke_m868DBFDAECA591A3D704369562D948BE29CB6F81_OpenStaticInvoker(ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* __this, int32_t ___0_result, String_t* ___1_shareTarget, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_result, ___1_shareTarget);
}
void ShareResultCallback_Invoke_m868DBFDAECA591A3D704369562D948BE29CB6F81_ClosedStaticInvoker(ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* __this, int32_t ___0_result, String_t* ___1_shareTarget, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_result, ___1_shareTarget);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C (ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* __this, int32_t ___0_result, String_t* ___1_shareTarget, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_shareTarget' to native representation
	char* ____1_shareTarget_marshaled = NULL;
	____1_shareTarget_marshaled = il2cpp_codegen_marshal_string(___1_shareTarget);

	// Native function invocation
	il2cppPInvokeFunc(___0_result, ____1_shareTarget_marshaled);

	// Marshaling cleanup of parameter '___1_shareTarget' native representation
	il2cpp_codegen_marshal_free(____1_shareTarget_marshaled);
	____1_shareTarget_marshaled = NULL;

}
// System.Void NativeShare/ShareResultCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareResultCallback__ctor_m9280D5C16BFBCE11BEB93D7BFA44076BAF3E70B2 (ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ShareResultCallback_Invoke_m868DBFDAECA591A3D704369562D948BE29CB6F81_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ShareResultCallback_Invoke_m868DBFDAECA591A3D704369562D948BE29CB6F81_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ShareResultCallback_Invoke_m868DBFDAECA591A3D704369562D948BE29CB6F81_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ShareResultCallback_Invoke_m868DBFDAECA591A3D704369562D948BE29CB6F81_Multicast;
}
// System.Void NativeShare/ShareResultCallback::Invoke(NativeShare/ShareResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareResultCallback_Invoke_m868DBFDAECA591A3D704369562D948BE29CB6F81 (ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* __this, int32_t ___0_result, String_t* ___1_shareTarget, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_result, ___1_shareTarget, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeShare/ShareResultCallback::BeginInvoke(NativeShare/ShareResult,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShareResultCallback_BeginInvoke_m47AF942D45AD5F4F8FEC905851069D21202A9DF1 (ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* __this, int32_t ___0_result, String_t* ___1_shareTarget, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShareResult_t4B2E45652DCE458EB04FD21181F636C3441779F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(ShareResult_t4B2E45652DCE458EB04FD21181F636C3441779F5_il2cpp_TypeInfo_var, &___0_result);
	__d_args[1] = ___1_shareTarget;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void NativeShare/ShareResultCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareResultCallback_EndInvoke_mF707AC6939FD92CC10277F80D9216D0C63681EFF (ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void NativeShareNamespace.NSCallbackHelper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSCallbackHelper_Awake_m0888D87F7D1CDB9E880BCCE7C00154257DBA70D5 (NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad( gameObject );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// }
		return;
	}
}
// System.Void NativeShareNamespace.NSCallbackHelper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSCallbackHelper_Update_m4F852FD2382E9389C1FB10E47AACC7CC28B75B5A (NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( resultReceived )
		bool L_0 = __this->___resultReceived_7;
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		// resultReceived = false;
		__this->___resultReceived_7 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				// Destroy( gameObject );
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
				L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if( callback != null )
				ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* L_2 = __this->___callback_4;
				if (!L_2)
				{
					goto IL_002e_1;
				}
			}
			{
				// callback( result, shareTarget );
				ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* L_3 = __this->___callback_4;
				int32_t L_4 = __this->___result_5;
				String_t* L_5 = __this->___shareTarget_6;
				NullCheck(L_3);
				ShareResultCallback_Invoke_m868DBFDAECA591A3D704369562D948BE29CB6F81_inline(L_3, L_4, L_5, NULL);
			}

IL_002e_1:
			{
				// }
				goto IL_003c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator NativeShareNamespace.NSCallbackHelper::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NSCallbackHelper_OnApplicationFocus_mFA63354D8F02A2696DFBAFDBF2502AB2BA1E2614 (NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* __this, bool ___0_focus, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnApplicationFocusU3Ed__6_tFD6A7D130D299ED56FF920623ACAB3A04FE604DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnApplicationFocusU3Ed__6_tFD6A7D130D299ED56FF920623ACAB3A04FE604DB* L_0 = (U3COnApplicationFocusU3Ed__6_tFD6A7D130D299ED56FF920623ACAB3A04FE604DB*)il2cpp_codegen_object_new(U3COnApplicationFocusU3Ed__6_tFD6A7D130D299ED56FF920623ACAB3A04FE604DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnApplicationFocusU3Ed__6__ctor_m26CA874B571563916C4BB4FD9815415DFA328703(L_0, 0, NULL);
		U3COnApplicationFocusU3Ed__6_tFD6A7D130D299ED56FF920623ACAB3A04FE604DB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3COnApplicationFocusU3Ed__6_tFD6A7D130D299ED56FF920623ACAB3A04FE604DB* L_2 = L_1;
		bool L_3 = ___0_focus;
		NullCheck(L_2);
		L_2->___focus_2 = L_3;
		return L_2;
	}
}
// System.Void NativeShareNamespace.NSCallbackHelper::OnShareCompleted(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSCallbackHelper_OnShareCompleted_m588E327DE3863149D47554689D09CEA9A5ED932D (NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* __this, int32_t ___0_resultRaw, String_t* ___1_shareTarget, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// NativeShare.ShareResult shareResult = (NativeShare.ShareResult) resultRaw;
		int32_t L_0 = ___0_resultRaw;
		V_0 = L_0;
		// if( result == NativeShare.ShareResult.Unknown )
		int32_t L_1 = __this->___result_5;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// result = shareResult;
		int32_t L_2 = V_0;
		__this->___result_5 = L_2;
		// this.shareTarget = shareTarget;
		String_t* L_3 = ___1_shareTarget;
		__this->___shareTarget_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shareTarget_6), (void*)L_3);
		goto IL_005f;
	}

IL_001a:
	{
		// else if( result == NativeShare.ShareResult.NotShared )
		int32_t L_4 = __this->___result_5;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_004c;
		}
	}
	{
		// if( shareResult == NativeShare.ShareResult.Shared )
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		// result = NativeShare.ShareResult.Shared;
		__this->___result_5 = 1;
		// this.shareTarget = shareTarget;
		String_t* L_6 = ___1_shareTarget;
		__this->___shareTarget_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shareTarget_6), (void*)L_6);
		goto IL_005f;
	}

IL_0037:
	{
		// else if( shareResult == NativeShare.ShareResult.NotShared && !string.IsNullOrEmpty( shareTarget ) )
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_8 = ___1_shareTarget;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (L_9)
		{
			goto IL_005f;
		}
	}
	{
		// this.shareTarget = shareTarget;
		String_t* L_10 = ___1_shareTarget;
		__this->___shareTarget_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shareTarget_6), (void*)L_10);
		goto IL_005f;
	}

IL_004c:
	{
		// if( shareResult == NativeShare.ShareResult.Shared && !string.IsNullOrEmpty( shareTarget ) )
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_12 = ___1_shareTarget;
		bool L_13;
		L_13 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_12, NULL);
		if (L_13)
		{
			goto IL_005f;
		}
	}
	{
		// this.shareTarget = shareTarget;
		String_t* L_14 = ___1_shareTarget;
		__this->___shareTarget_6 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shareTarget_6), (void*)L_14);
	}

IL_005f:
	{
		// resultReceived = true;
		__this->___resultReceived_7 = (bool)1;
		// }
		return;
	}
}
// System.Void NativeShareNamespace.NSCallbackHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSCallbackHelper__ctor_mCC16834207C1A37F4448A72EED06859855B86779 (NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* __this, const RuntimeMethod* method) 
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
// System.Void NativeShareNamespace.NSCallbackHelper/<OnApplicationFocus>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationFocusU3Ed__6__ctor_m26CA874B571563916C4BB4FD9815415DFA328703 (U3COnApplicationFocusU3Ed__6_tFD6A7D130D299ED56FF920623ACAB3A04FE604DB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void NativeShareNamespace.NSCallbackHelper/<OnApplicationFocus>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationFocusU3Ed__6_System_IDisposable_Dispose_m465B8F138AFDC7A18EA01BA4A6D7C3061310E1D0 (U3COnApplicationFocusU3Ed__6_tFD6A7D130D299ED56FF920623ACAB3A04FE604DB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean NativeShareNamespace.NSCallbackHelper/<OnApplicationFocus>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnApplicationFocusU3Ed__6_MoveNext_mEAE6A229A5FE0C803903A9EB445413F8604E37BC (U3COnApplicationFocusU3Ed__6_tFD6A7D130D299ED56FF920623ACAB3A04FE604DB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if( focus )
		bool L_4 = __this->___focus_2;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0036:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// resultReceived = true;
		NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* L_5 = V_1;
		NullCheck(L_5);
		L_5->___resultReceived_7 = (bool)1;
	}

IL_0044:
	{
		// }
		return (bool)0;
	}
}
// System.Object NativeShareNamespace.NSCallbackHelper/<OnApplicationFocus>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnApplicationFocusU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCAE6E626566FE7CCB74C257FFDFB28BDAEFCFCF9 (U3COnApplicationFocusU3Ed__6_tFD6A7D130D299ED56FF920623ACAB3A04FE604DB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void NativeShareNamespace.NSCallbackHelper/<OnApplicationFocus>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationFocusU3Ed__6_System_Collections_IEnumerator_Reset_m873DF778AB4213C1238498632C40A5C56E7ED42C (U3COnApplicationFocusU3Ed__6_tFD6A7D130D299ED56FF920623ACAB3A04FE604DB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnApplicationFocusU3Ed__6_System_Collections_IEnumerator_Reset_m873DF778AB4213C1238498632C40A5C56E7ED42C_RuntimeMethod_var)));
	}
}
// System.Object NativeShareNamespace.NSCallbackHelper/<OnApplicationFocus>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnApplicationFocusU3Ed__6_System_Collections_IEnumerator_get_Current_m96598BFDB6B0CE5535F932DFAA8E7BA9FABC4F91 (U3COnApplicationFocusU3Ed__6_tFD6A7D130D299ED56FF920623ACAB3A04FE604DB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void NativeShareNamespace.NSShareResultCallbackAndroid::.ctor(NativeShare/ShareResultCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSShareResultCallbackAndroid__ctor_m1F33E98B9D2C790770041936FE5A1AC3634A1B2C (NSShareResultCallbackAndroid_tD690D9BF4C0E309F07873F0A94A3686A17F844DA* __this, ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D_mD935CA5711E81DD911A200EFF3E1FED781CCA329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40A8B44E40C6BC69E14DD32CBDD74FEAF5D4AAE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AC9C8771A1E0FC481BB963F3BFB8DAEF6EEAF9F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NSShareResultCallbackAndroid( NativeShare.ShareResultCallback callback ) : base( "com.yasirkula.unity.NativeShareResultReceiver" )
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral40A8B44E40C6BC69E14DD32CBDD74FEAF5D4AAE6, NULL);
		// callbackHelper = new GameObject( "NSCallbackHelper" ).AddComponent<NSCallbackHelper>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral5AC9C8771A1E0FC481BB963F3BFB8DAEF6EEAF9F, NULL);
		NullCheck(L_0);
		NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* L_1;
		L_1 = GameObject_AddComponent_TisNSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D_mD935CA5711E81DD911A200EFF3E1FED781CCA329(L_0, GameObject_AddComponent_TisNSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D_mD935CA5711E81DD911A200EFF3E1FED781CCA329_RuntimeMethod_var);
		__this->___callbackHelper_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackHelper_4), (void*)L_1);
		// callbackHelper.callback = callback;
		NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* L_2 = __this->___callbackHelper_4;
		ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* L_3 = ___0_callback;
		NullCheck(L_2);
		L_2->___callback_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___callback_4), (void*)L_3);
		// }
		return;
	}
}
// System.Void NativeShareNamespace.NSShareResultCallbackAndroid::OnShareCompleted(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSShareResultCallbackAndroid_OnShareCompleted_m38D7612DDD8DCA71EBE16A93D575A7D46DA3A5B3 (NSShareResultCallbackAndroid_tD690D9BF4C0E309F07873F0A94A3686A17F844DA* __this, int32_t ___0_result, String_t* ___1_shareTarget, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3CB1C46094BA01F2C62E9A0EFE0F859DE17AED1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( !callbackHelper )
		NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* L_0 = __this->___callbackHelper_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogWarning( "NSCallbackHelper is destroyed!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralD3CB1C46094BA01F2C62E9A0EFE0F859DE17AED1, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// callbackHelper.OnShareCompleted( result, shareTarget );
		NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* L_2 = __this->___callbackHelper_4;
		int32_t L_3 = ___0_result;
		String_t* L_4 = ___1_shareTarget;
		NullCheck(L_2);
		NSCallbackHelper_OnShareCompleted_m588E327DE3863149D47554689D09CEA9A5ED932D(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Boolean NativeShareNamespace.NSShareResultCallbackAndroid::HasManagedCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSShareResultCallbackAndroid_HasManagedCallback_m5E04DF8F6E9AD5E1DFDC1350FA65141AFBE75EF8 (NSShareResultCallbackAndroid_tD690D9BF4C0E309F07873F0A94A3686A17F844DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return callbackHelper && callbackHelper.callback != null;
		NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* L_0 = __this->___callbackHelper_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		NSCallbackHelper_t00F76CA34C3FAAEC3B73411C0A3E1B5C4E1D251D* L_2 = __this->___callbackHelper_4;
		NullCheck(L_2);
		ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* L_3 = L_2->___callback_4;
		return (bool)((!(((RuntimeObject*)(ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShareResultCallback_Invoke_m868DBFDAECA591A3D704369562D948BE29CB6F81_inline (ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C* __this, int32_t ___0_result, String_t* ___1_shareTarget, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_result, ___1_shareTarget, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_4_Invoke_mD9FB5E2CF8A8ED11C3135A1A910CDCAD6538A1FC_gshared_inline (Action_4_tB13889672F2D689F21857C968EBBDF091CA42E46* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, int32_t ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, int32_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mE56360F8A5B137A1714DEF08A9266EF9166480B8_gshared_inline (Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE* __this, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline (Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
